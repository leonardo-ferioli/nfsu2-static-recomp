#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_553(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x552,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x552,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_552(u8* __restrict R,Cpu& c);
u32 page_552(Cpu& c){return body_552(c.regs.data(),c);}
__attribute__((noinline)) u32 body_552(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x552004:goto L552004;
case 0x552007:c.instructions+=6;goto B552007;
case 0x55200a:c.instructions+=5;goto B55200a;
case 0x55200d:c.instructions+=4;goto B55200d;
case 0x552010:c.instructions+=3;goto B552010;
case 0x552012:c.instructions+=2;goto B552012;
case 0x552015:c.instructions+=1;goto B552015;
case 0x552017:goto L552017;
case 0x55201a:c.instructions+=2;goto B55201a;
case 0x55201c:c.instructions+=1;goto B55201c;
case 0x55201e:goto L55201e;
case 0x552020:c.instructions+=1;goto B552020;
case 0x552022:goto L552022;
case 0x552024:goto L552024;
case 0x552027:c.instructions+=5;goto B552027;
case 0x552029:c.instructions+=4;goto B552029;
case 0x55202c:c.instructions+=3;goto B55202c;
case 0x55202d:c.instructions+=2;goto B55202d;
case 0x55202f:c.instructions+=1;goto B55202f;
case 0x552031:goto L552031;
case 0x552033:c.instructions+=1;goto B552033;
case 0x552035:goto L552035;
case 0x552036:c.instructions+=1;goto B552036;
case 0x55203b:goto L55203b;
case 0x55203e:c.instructions+=2;goto B55203e;
case 0x552040:c.instructions+=1;goto B552040;
case 0x552042:goto L552042;
case 0x552049:c.instructions+=7;goto B552049;
case 0x55204c:c.instructions+=6;goto B55204c;
case 0x55204d:c.instructions+=5;goto B55204d;
case 0x55204f:c.instructions+=4;goto B55204f;
case 0x552053:c.instructions+=3;goto B552053;
case 0x552056:c.instructions+=2;goto B552056;
case 0x552059:c.instructions+=1;goto B552059;
case 0x55205e:goto L55205e;
case 0x552061:c.instructions+=4;goto B552061;
case 0x552063:c.instructions+=3;goto B552063;
case 0x552067:c.instructions+=2;goto B552067;
case 0x55206e:c.instructions+=1;goto B55206e;
case 0x552070:goto L552070;
case 0x552075:c.instructions+=2;goto B552075;
case 0x552077:c.instructions+=1;goto B552077;
case 0x552079:goto L552079;
case 0x55207c:c.instructions+=3;goto B55207c;
case 0x55207d:c.instructions+=2;goto B55207d;
case 0x55207e:c.instructions+=1;goto B55207e;
case 0x552083:goto L552083;
case 0x552085:c.instructions+=1;goto B552085;
case 0x552087:goto L552087;
case 0x55208b:c.instructions+=2;goto B55208b;
case 0x55208e:c.instructions+=1;goto B55208e;
case 0x552090:goto L552090;
case 0x552093:goto L552093;
case 0x552096:c.instructions+=6;goto B552096;
case 0x552097:c.instructions+=5;goto B552097;
case 0x55209c:c.instructions+=4;goto B55209c;
case 0x55209f:c.instructions+=3;goto B55209f;
case 0x5520a1:c.instructions+=2;goto B5520a1;
case 0x5520a2:c.instructions+=1;goto B5520a2;
case 0x5520a7:goto L5520a7;
case 0x5520aa:c.instructions+=7;goto B5520aa;
case 0x5520ad:c.instructions+=6;goto B5520ad;
case 0x5520b0:c.instructions+=5;goto B5520b0;
case 0x5520b3:c.instructions+=4;goto B5520b3;
case 0x5520b6:c.instructions+=3;goto B5520b6;
case 0x5520b8:c.instructions+=2;goto B5520b8;
case 0x5520bb:c.instructions+=1;goto B5520bb;
case 0x5520bd:goto L5520bd;
case 0x5520c0:goto L5520c0;
case 0x5520c3:c.instructions+=2;goto B5520c3;
case 0x5520c5:c.instructions+=1;goto B5520c5;
case 0x5520c7:goto L5520c7;
case 0x5520c9:c.instructions+=1;goto B5520c9;
case 0x5520cb:goto L5520cb;
case 0x5520cd:goto L5520cd;
case 0x5520d0:c.instructions+=5;goto B5520d0;
case 0x5520d3:c.instructions+=4;goto B5520d3;
case 0x5520d5:c.instructions+=3;goto B5520d5;
case 0x5520d6:c.instructions+=2;goto B5520d6;
case 0x5520d8:c.instructions+=1;goto B5520d8;
case 0x5520da:goto L5520da;
case 0x5520dc:c.instructions+=1;goto B5520dc;
case 0x5520de:goto L5520de;
case 0x5520df:c.instructions+=1;goto B5520df;
case 0x5520e4:goto L5520e4;
case 0x5520e7:c.instructions+=2;goto B5520e7;
case 0x5520e9:c.instructions+=1;goto B5520e9;
case 0x5520eb:goto L5520eb;
case 0x5520f2:c.instructions+=7;goto B5520f2;
case 0x5520f5:c.instructions+=6;goto B5520f5;
case 0x5520f6:c.instructions+=5;goto B5520f6;
case 0x5520f8:c.instructions+=4;goto B5520f8;
case 0x5520fc:c.instructions+=3;goto B5520fc;
case 0x5520ff:c.instructions+=2;goto B5520ff;
case 0x552102:c.instructions+=1;goto B552102;
case 0x552107:goto L552107;
case 0x55210a:c.instructions+=4;goto B55210a;
case 0x55210c:c.instructions+=3;goto B55210c;
case 0x552110:c.instructions+=2;goto B552110;
case 0x552117:c.instructions+=1;goto B552117;
case 0x552119:goto L552119;
case 0x55211e:c.instructions+=2;goto B55211e;
case 0x552120:c.instructions+=1;goto B552120;
case 0x552122:goto L552122;
case 0x552125:c.instructions+=3;goto B552125;
case 0x552126:c.instructions+=2;goto B552126;
case 0x552127:c.instructions+=1;goto B552127;
case 0x55212c:goto L55212c;
case 0x55212e:c.instructions+=1;goto B55212e;
case 0x552130:goto L552130;
case 0x552134:c.instructions+=1;goto B552134;
case 0x552136:goto L552136;
case 0x552138:c.instructions+=1;goto B552138;
case 0x55213a:goto L55213a;
case 0x55213c:goto L55213c;
case 0x552141:c.instructions+=1;goto B552141;
case 0x552146:goto L552146;
case 0x552148:c.instructions+=5;goto B552148;
case 0x55214b:c.instructions+=4;goto B55214b;
case 0x55214e:c.instructions+=3;goto B55214e;
case 0x552150:c.instructions+=2;goto B552150;
case 0x552154:c.instructions+=1;goto B552154;
case 0x552156:goto L552156;
case 0x552159:c.instructions+=9;goto B552159;
case 0x55215c:c.instructions+=8;goto B55215c;
case 0x552161:c.instructions+=7;goto B552161;
case 0x552162:c.instructions+=6;goto B552162;
case 0x552168:c.instructions+=5;goto B552168;
case 0x55216b:c.instructions+=4;goto B55216b;
case 0x55216e:c.instructions+=3;goto B55216e;
case 0x552171:c.instructions+=2;goto B552171;
case 0x552174:c.instructions+=1;goto B552174;
case 0x552179:goto L552179;
case 0x55217c:c.instructions+=1;goto B55217c;
case 0x55217e:goto L55217e;
case 0x552180:goto L552180;
case 0x552182:c.instructions+=2;goto B552182;
case 0x552186:c.instructions+=1;goto B552186;
case 0x552188:goto L552188;
case 0x55218b:c.instructions+=1;goto B55218b;
case 0x55218d:goto L55218d;
case 0x55218f:goto L55218f;
case 0x552192:c.instructions+=11;goto B552192;
case 0x552195:c.instructions+=10;goto B552195;
case 0x552198:c.instructions+=9;goto B552198;
case 0x55219a:c.instructions+=8;goto B55219a;
case 0x55219d:c.instructions+=7;goto B55219d;
case 0x5521a0:c.instructions+=6;goto B5521a0;
case 0x5521a2:c.instructions+=5;goto B5521a2;
case 0x5521a5:c.instructions+=4;goto B5521a5;
case 0x5521a6:c.instructions+=3;goto B5521a6;
case 0x5521a9:c.instructions+=2;goto B5521a9;
case 0x5521ac:c.instructions+=1;goto B5521ac;
case 0x5521b2:goto L5521b2;
case 0x5521b5:c.instructions+=3;goto B5521b5;
case 0x5521b6:c.instructions+=2;goto B5521b6;
case 0x5521b8:c.instructions+=1;goto B5521b8;
case 0x5521bd:goto L5521bd;
case 0x5521c4:c.instructions+=1;goto B5521c4;
case 0x5521c6:goto L5521c6;
case 0x5521c8:c.instructions+=1;goto B5521c8;
case 0x5521cd:goto L5521cd;
case 0x5521cf:goto L5521cf;
case 0x5521d2:c.instructions+=5;goto B5521d2;
case 0x5521d7:c.instructions+=4;goto B5521d7;
case 0x5521dc:c.instructions+=3;goto B5521dc;
case 0x5521e1:c.instructions+=2;goto B5521e1;
case 0x5521e2:c.instructions+=1;goto B5521e2;
case 0x5521e7:goto L5521e7;
case 0x5521ea:goto L5521ea;
case 0x5521ed:c.instructions+=9;goto B5521ed;
case 0x5521ee:c.instructions+=8;goto B5521ee;
case 0x5521f5:c.instructions+=7;goto B5521f5;
case 0x5521f7:c.instructions+=6;goto B5521f7;
case 0x5521f8:c.instructions+=5;goto B5521f8;
case 0x5521f9:c.instructions+=4;goto B5521f9;
case 0x552200:c.instructions+=3;goto B552200;
case 0x552202:c.instructions+=2;goto B552202;
case 0x552203:c.instructions+=1;goto B552203;
case 0x552210:goto L552210;
case 0x552211:c.instructions+=2;goto B552211;
case 0x552213:c.instructions+=1;goto B552213;
case 0x552218:goto L552218;
case 0x55221d:c.instructions+=2;goto B55221d;
case 0x55221f:c.instructions+=1;goto B55221f;
case 0x552221:goto L552221;
case 0x552228:goto L552228;
case 0x552229:c.instructions+=1;goto B552229;
case 0x552230:goto L552230;
case 0x552232:c.instructions+=12;goto B552232;
case 0x552237:c.instructions+=11;goto B552237;
case 0x55223d:c.instructions+=10;goto B55223d;
case 0x55223e:c.instructions+=9;goto B55223e;
case 0x552245:c.instructions+=8;goto B552245;
case 0x552246:c.instructions+=7;goto B552246;
case 0x552247:c.instructions+=6;goto B552247;
case 0x552249:c.instructions+=5;goto B552249;
case 0x55224d:c.instructions+=4;goto B55224d;
case 0x552253:c.instructions+=3;goto B552253;
case 0x552256:c.instructions+=2;goto B552256;
case 0x55225e:c.instructions+=1;goto B55225e;
case 0x552263:goto L552263;
case 0x552267:c.instructions+=5;goto B552267;
case 0x55226d:c.instructions+=4;goto B55226d;
case 0x55226e:c.instructions+=3;goto B55226e;
case 0x552275:c.instructions+=2;goto B552275;
case 0x552278:c.instructions+=1;goto B552278;
case 0x552280:goto L552280;
case 0x552282:c.instructions+=12;goto B552282;
case 0x552287:c.instructions+=11;goto B552287;
case 0x55228d:c.instructions+=10;goto B55228d;
case 0x55228e:c.instructions+=9;goto B55228e;
case 0x552295:c.instructions+=8;goto B552295;
case 0x552296:c.instructions+=7;goto B552296;
case 0x55229c:c.instructions+=6;goto B55229c;
case 0x5522a3:c.instructions+=5;goto B5522a3;
case 0x5522a7:c.instructions+=4;goto B5522a7;
case 0x5522a9:c.instructions+=3;goto B5522a9;
case 0x5522ab:c.instructions+=2;goto B5522ab;
case 0x5522af:c.instructions+=1;goto B5522af;
case 0x5522b1:goto L5522b1;
case 0x5522b5:c.instructions+=2;goto B5522b5;
case 0x5522b6:c.instructions+=1;goto B5522b6;
case 0x5522bb:goto L5522bb;
case 0x5522bf:c.instructions+=3;goto B5522bf;
case 0x5522c6:c.instructions+=2;goto B5522c6;
case 0x5522c9:c.instructions+=1;goto B5522c9;
case 0x5522d0:goto L5522d0;
case 0x5522d2:c.instructions+=8;goto B5522d2;
case 0x5522d7:c.instructions+=7;goto B5522d7;
case 0x5522dd:c.instructions+=6;goto B5522dd;
case 0x5522de:c.instructions+=5;goto B5522de;
case 0x5522e5:c.instructions+=4;goto B5522e5;
case 0x5522e6:c.instructions+=3;goto B5522e6;
case 0x5522e7:c.instructions+=2;goto B5522e7;
case 0x5522e9:c.instructions+=1;goto B5522e9;
case 0x5522ee:goto L5522ee;
case 0x5522f0:c.instructions+=6;goto B5522f0;
case 0x5522f3:c.instructions+=5;goto B5522f3;
case 0x5522f7:c.instructions+=4;goto B5522f7;
case 0x5522f9:c.instructions+=3;goto B5522f9;
case 0x5522fb:c.instructions+=2;goto B5522fb;
case 0x5522ff:c.instructions+=1;goto B5522ff;
case 0x552301:goto L552301;
case 0x552305:c.instructions+=3;goto B552305;
case 0x552306:c.instructions+=2;goto B552306;
case 0x552308:c.instructions+=1;goto B552308;
case 0x55230d:goto L55230d;
case 0x552313:c.instructions+=1;goto B552313;
case 0x552315:goto L552315;
case 0x552319:c.instructions+=4;goto B552319;
case 0x55231a:c.instructions+=3;goto B55231a;
case 0x552321:c.instructions+=2;goto B552321;
case 0x552324:c.instructions+=1;goto B552324;
case 0x552330:goto L552330;
case 0x552332:c.instructions+=12;goto B552332;
case 0x552337:c.instructions+=11;goto B552337;
case 0x55233d:c.instructions+=10;goto B55233d;
case 0x55233e:c.instructions+=9;goto B55233e;
case 0x552345:c.instructions+=8;goto B552345;
case 0x552346:c.instructions+=7;goto B552346;
case 0x55234a:c.instructions+=6;goto B55234a;
case 0x55234b:c.instructions+=5;goto B55234b;
case 0x55234c:c.instructions+=4;goto B55234c;
case 0x55234e:c.instructions+=3;goto B55234e;
case 0x55234f:c.instructions+=2;goto B55234f;
case 0x552353:c.instructions+=1;goto B552353;
case 0x552358:goto L552358;
case 0x55235b:c.instructions+=11;goto B55235b;
case 0x552360:c.instructions+=10;goto B552360;
case 0x552365:c.instructions+=9;goto B552365;
case 0x55236a:c.instructions+=8;goto B55236a;
case 0x55236f:c.instructions+=7;goto B55236f;
case 0x552374:c.instructions+=6;goto B552374;
case 0x552376:c.instructions+=5;goto B552376;
case 0x552377:c.instructions+=4;goto B552377;
case 0x55237a:c.instructions+=3;goto B55237a;
case 0x55237e:c.instructions+=2;goto B55237e;
case 0x552384:c.instructions+=1;goto B552384;
case 0x552389:goto L552389;
case 0x55238c:c.instructions+=10;goto B55238c;
case 0x552391:c.instructions+=9;goto B552391;
case 0x552392:c.instructions+=8;goto B552392;
case 0x552397:c.instructions+=7;goto B552397;
case 0x55239d:c.instructions+=6;goto B55239d;
case 0x5523a3:c.instructions+=5;goto B5523a3;
case 0x5523a9:c.instructions+=4;goto B5523a9;
case 0x5523af:c.instructions+=3;goto B5523af;
case 0x5523b5:c.instructions+=2;goto B5523b5;
case 0x5523bb:c.instructions+=1;goto B5523bb;
case 0x5523c0:goto L5523c0;
case 0x5523c6:c.instructions+=4;goto B5523c6;
case 0x5523c9:c.instructions+=3;goto B5523c9;
case 0x5523ce:c.instructions+=2;goto B5523ce;
case 0x5523cf:c.instructions+=1;goto B5523cf;
case 0x5523d4:goto L5523d4;
case 0x5523d8:c.instructions+=11;goto B5523d8;
case 0x5523de:c.instructions+=10;goto B5523de;
case 0x5523e1:c.instructions+=9;goto B5523e1;
case 0x5523e4:c.instructions+=8;goto B5523e4;
case 0x5523ea:c.instructions+=7;goto B5523ea;
case 0x5523f1:c.instructions+=6;goto B5523f1;
case 0x5523f3:c.instructions+=5;goto B5523f3;
case 0x5523f4:c.instructions+=4;goto B5523f4;
case 0x5523f5:c.instructions+=3;goto B5523f5;
case 0x5523fc:c.instructions+=2;goto B5523fc;
case 0x5523ff:c.instructions+=1;goto B5523ff;
case 0x552410:goto L552410;
case 0x552412:c.instructions+=14;goto B552412;
case 0x552417:c.instructions+=13;goto B552417;
case 0x55241d:c.instructions+=12;goto B55241d;
case 0x55241e:c.instructions+=11;goto B55241e;
case 0x552425:c.instructions+=10;goto B552425;
case 0x552428:c.instructions+=9;goto B552428;
case 0x55242c:c.instructions+=8;goto B55242c;
case 0x55242d:c.instructions+=7;goto B55242d;
case 0x55242e:c.instructions+=6;goto B55242e;
case 0x55242f:c.instructions+=5;goto B55242f;
case 0x552430:c.instructions+=4;goto B552430;
case 0x552432:c.instructions+=3;goto B552432;
case 0x552433:c.instructions+=2;goto B552433;
case 0x552437:c.instructions+=1;goto B552437;
case 0x55243c:goto L55243c;
case 0x55243f:c.instructions+=13;goto B55243f;
case 0x552441:c.instructions+=12;goto B552441;
case 0x552445:c.instructions+=11;goto B552445;
case 0x55244b:c.instructions+=10;goto B55244b;
case 0x55244e:c.instructions+=9;goto B55244e;
case 0x552451:c.instructions+=8;goto B552451;
case 0x552454:c.instructions+=7;goto B552454;
case 0x55245b:c.instructions+=6;goto B55245b;
case 0x552462:c.instructions+=5;goto B552462;
case 0x552468:c.instructions+=4;goto B552468;
case 0x55246e:c.instructions+=3;goto B55246e;
case 0x552473:c.instructions+=2;goto B552473;
case 0x552476:c.instructions+=1;goto B552476;
case 0x552478:goto L552478;
case 0x55247b:c.instructions+=2;goto B55247b;
case 0x55247d:c.instructions+=1;goto B55247d;
case 0x55247f:goto L55247f;
case 0x552481:c.instructions+=1;goto B552481;
case 0x552483:goto L552483;
case 0x552485:goto L552485;
case 0x552488:c.instructions+=5;goto B552488;
case 0x55248b:c.instructions+=4;goto B55248b;
case 0x55248d:c.instructions+=3;goto B55248d;
case 0x55248e:c.instructions+=2;goto B55248e;
case 0x552490:c.instructions+=1;goto B552490;
case 0x552492:goto L552492;
case 0x552494:c.instructions+=1;goto B552494;
case 0x552496:goto L552496;
case 0x552497:c.instructions+=1;goto B552497;
case 0x55249c:goto L55249c;
case 0x55249f:c.instructions+=2;goto B55249f;
case 0x5524a1:c.instructions+=1;goto B5524a1;
case 0x5524a3:goto L5524a3;
case 0x5524a4:c.instructions+=2;goto B5524a4;
case 0x5524a6:c.instructions+=1;goto B5524a6;
case 0x5524ab:goto L5524ab;
case 0x5524ad:c.instructions+=1;goto B5524ad;
case 0x5524af:goto L5524af;
case 0x5524b4:c.instructions+=2;goto B5524b4;
case 0x5524b6:c.instructions+=1;goto B5524b6;
case 0x5524b8:goto L5524b8;
case 0x5524bb:c.instructions+=3;goto B5524bb;
case 0x5524bc:c.instructions+=2;goto B5524bc;
case 0x5524bd:c.instructions+=1;goto B5524bd;
case 0x5524c2:goto L5524c2;
case 0x5524c4:goto L5524c4;
case 0x5524c6:goto L5524c6;
case 0x5524c9:c.instructions+=4;goto B5524c9;
case 0x5524cc:c.instructions+=3;goto B5524cc;
case 0x5524d1:c.instructions+=2;goto B5524d1;
case 0x5524d4:c.instructions+=1;goto B5524d4;
case 0x5524d6:goto L5524d6;
case 0x5524d9:c.instructions+=2;goto B5524d9;
case 0x5524db:c.instructions+=1;goto B5524db;
case 0x5524dd:goto L5524dd;
case 0x5524df:c.instructions+=1;goto B5524df;
case 0x5524e1:goto L5524e1;
case 0x5524e3:goto L5524e3;
case 0x5524e6:c.instructions+=5;goto B5524e6;
case 0x5524e8:c.instructions+=4;goto B5524e8;
case 0x5524eb:c.instructions+=3;goto B5524eb;
case 0x5524ec:c.instructions+=2;goto B5524ec;
case 0x5524ee:c.instructions+=1;goto B5524ee;
case 0x5524f0:goto L5524f0;
case 0x5524f2:c.instructions+=1;goto B5524f2;
case 0x5524f4:goto L5524f4;
case 0x5524f5:c.instructions+=1;goto B5524f5;
case 0x5524fa:goto L5524fa;
case 0x5524fd:c.instructions+=2;goto B5524fd;
case 0x5524ff:c.instructions+=1;goto B5524ff;
case 0x552501:goto L552501;
case 0x552502:c.instructions+=2;goto B552502;
case 0x552504:c.instructions+=1;goto B552504;
case 0x552509:goto L552509;
case 0x55250b:c.instructions+=1;goto B55250b;
case 0x55250d:goto L55250d;
case 0x552512:c.instructions+=2;goto B552512;
case 0x552514:c.instructions+=1;goto B552514;
case 0x552516:goto L552516;
case 0x552519:c.instructions+=3;goto B552519;
case 0x55251a:c.instructions+=2;goto B55251a;
case 0x55251b:c.instructions+=1;goto B55251b;
case 0x552520:goto L552520;
case 0x552522:goto L552522;
case 0x552524:goto L552524;
case 0x552527:c.instructions+=4;goto B552527;
case 0x55252a:c.instructions+=3;goto B55252a;
case 0x55252f:c.instructions+=2;goto B55252f;
case 0x552532:c.instructions+=1;goto B552532;
case 0x552534:goto L552534;
case 0x552537:c.instructions+=2;goto B552537;
case 0x552539:c.instructions+=1;goto B552539;
case 0x55253b:goto L55253b;
case 0x55253d:c.instructions+=1;goto B55253d;
case 0x55253f:goto L55253f;
case 0x552541:goto L552541;
case 0x552544:c.instructions+=5;goto B552544;
case 0x552547:c.instructions+=4;goto B552547;
case 0x552549:c.instructions+=3;goto B552549;
case 0x55254a:c.instructions+=2;goto B55254a;
case 0x55254c:c.instructions+=1;goto B55254c;
case 0x55254e:goto L55254e;
case 0x552550:c.instructions+=1;goto B552550;
case 0x552552:goto L552552;
case 0x552553:c.instructions+=1;goto B552553;
case 0x552558:goto L552558;
case 0x55255b:c.instructions+=2;goto B55255b;
case 0x55255d:c.instructions+=1;goto B55255d;
case 0x55255f:goto L55255f;
case 0x552560:c.instructions+=2;goto B552560;
case 0x552562:c.instructions+=1;goto B552562;
case 0x552567:goto L552567;
case 0x552569:c.instructions+=1;goto B552569;
case 0x55256b:goto L55256b;
case 0x552570:c.instructions+=2;goto B552570;
case 0x552572:c.instructions+=1;goto B552572;
case 0x552574:goto L552574;
case 0x552577:c.instructions+=3;goto B552577;
case 0x552578:c.instructions+=2;goto B552578;
case 0x552579:c.instructions+=1;goto B552579;
case 0x55257e:goto L55257e;
case 0x552580:goto L552580;
case 0x552582:goto L552582;
case 0x552585:c.instructions+=9;goto B552585;
case 0x552588:c.instructions+=8;goto B552588;
case 0x55258b:c.instructions+=7;goto B55258b;
case 0x55258e:c.instructions+=6;goto B55258e;
case 0x552592:c.instructions+=5;goto B552592;
case 0x552594:c.instructions+=4;goto B552594;
case 0x552597:c.instructions+=3;goto B552597;
case 0x55259a:c.instructions+=2;goto B55259a;
case 0x55259d:c.instructions+=1;goto B55259d;
case 0x55259f:goto L55259f;
case 0x5525a2:c.instructions+=1;goto B5525a2;
case 0x5525a4:goto L5525a4;
case 0x5525a6:goto L5525a6;
case 0x5525a8:c.instructions+=2;goto B5525a8;
case 0x5525ab:c.instructions+=1;goto B5525ab;
case 0x5525ad:goto L5525ad;
case 0x5525b0:c.instructions+=7;goto B5525b0;
case 0x5525b3:c.instructions+=6;goto B5525b3;
case 0x5525b6:c.instructions+=5;goto B5525b6;
case 0x5525b9:c.instructions+=4;goto B5525b9;
case 0x5525bd:c.instructions+=3;goto B5525bd;
case 0x5525c1:c.instructions+=2;goto B5525c1;
case 0x5525c3:c.instructions+=1;goto B5525c3;
case 0x5525c6:goto L5525c6;
case 0x5525ca:c.instructions+=4;goto B5525ca;
case 0x5525cd:c.instructions+=3;goto B5525cd;
case 0x5525d2:c.instructions+=2;goto B5525d2;
case 0x5525d3:c.instructions+=1;goto B5525d3;
case 0x5525d8:goto L5525d8;
case 0x5525db:c.instructions+=4;goto B5525db;
case 0x5525dd:c.instructions+=3;goto B5525dd;
case 0x5525df:c.instructions+=2;goto B5525df;
case 0x5525e2:c.instructions+=1;goto B5525e2;
case 0x5525e5:goto L5525e5;
case 0x5525e6:c.instructions+=2;goto B5525e6;
case 0x5525e7:c.instructions+=1;goto B5525e7;
case 0x5525ec:goto L5525ec;
case 0x5525ef:goto L5525ef;
case 0x5525f2:c.instructions+=2;goto B5525f2;
case 0x5525f4:c.instructions+=1;goto B5525f4;
case 0x5525f8:goto L5525f8;
case 0x5525fb:c.instructions+=5;goto B5525fb;
case 0x5525fc:c.instructions+=4;goto B5525fc;
case 0x552600:c.instructions+=3;goto B552600;
case 0x552605:c.instructions+=2;goto B552605;
case 0x552606:c.instructions+=1;goto B552606;
case 0x55260b:goto L55260b;
case 0x55260f:c.instructions+=6;goto B55260f;
case 0x552612:c.instructions+=5;goto B552612;
case 0x552615:c.instructions+=4;goto B552615;
case 0x552618:c.instructions+=3;goto B552618;
case 0x55261a:c.instructions+=2;goto B55261a;
case 0x55261e:c.instructions+=1;goto B55261e;
case 0x552620:goto L552620;
case 0x552623:c.instructions+=2;goto B552623;
case 0x552625:c.instructions+=1;goto B552625;
case 0x552627:goto L552627;
case 0x552629:c.instructions+=1;goto B552629;
case 0x55262b:goto L55262b;
case 0x55262d:goto L55262d;
case 0x552630:c.instructions+=5;goto B552630;
case 0x552632:c.instructions+=4;goto B552632;
case 0x552635:c.instructions+=3;goto B552635;
case 0x552636:c.instructions+=2;goto B552636;
case 0x552638:c.instructions+=1;goto B552638;
case 0x55263a:goto L55263a;
case 0x55263c:c.instructions+=1;goto B55263c;
case 0x55263e:goto L55263e;
case 0x55263f:c.instructions+=1;goto B55263f;
case 0x552644:goto L552644;
case 0x552647:c.instructions+=2;goto B552647;
case 0x552649:c.instructions+=1;goto B552649;
case 0x55264b:goto L55264b;
case 0x552653:c.instructions+=7;goto B552653;
case 0x552657:c.instructions+=6;goto B552657;
case 0x552658:c.instructions+=5;goto B552658;
case 0x55265a:c.instructions+=4;goto B55265a;
case 0x55265f:c.instructions+=3;goto B55265f;
case 0x552663:c.instructions+=2;goto B552663;
case 0x55266b:c.instructions+=1;goto B55266b;
case 0x552670:goto L552670;
case 0x552674:c.instructions+=4;goto B552674;
case 0x552676:c.instructions+=3;goto B552676;
case 0x55267b:c.instructions+=2;goto B55267b;
case 0x552683:c.instructions+=1;goto B552683;
case 0x552685:goto L552685;
case 0x55268a:c.instructions+=2;goto B55268a;
case 0x55268c:c.instructions+=1;goto B55268c;
case 0x55268e:goto L55268e;
case 0x552691:c.instructions+=3;goto B552691;
case 0x552692:c.instructions+=2;goto B552692;
case 0x552693:c.instructions+=1;goto B552693;
case 0x552698:goto L552698;
case 0x55269a:goto L55269a;
case 0x55269c:goto L55269c;
case 0x5526a0:c.instructions+=6;goto B5526a0;
case 0x5526a2:c.instructions+=5;goto B5526a2;
case 0x5526a4:c.instructions+=4;goto B5526a4;
case 0x5526a7:c.instructions+=3;goto B5526a7;
case 0x5526aa:c.instructions+=2;goto B5526aa;
case 0x5526ae:c.instructions+=1;goto B5526ae;
case 0x5526b4:goto L5526b4;
case 0x5526b6:c.instructions+=2;goto B5526b6;
case 0x5526b8:c.instructions+=1;goto B5526b8;
case 0x5526bd:goto L5526bd;
case 0x5526c1:c.instructions+=9;goto B5526c1;
case 0x5526c2:c.instructions+=8;goto B5526c2;
case 0x5526c8:c.instructions+=7;goto B5526c8;
case 0x5526ca:c.instructions+=6;goto B5526ca;
case 0x5526cb:c.instructions+=5;goto B5526cb;
case 0x5526cc:c.instructions+=4;goto B5526cc;
case 0x5526cd:c.instructions+=3;goto B5526cd;
case 0x5526d4:c.instructions+=2;goto B5526d4;
case 0x5526d7:c.instructions+=1;goto B5526d7;
case 0x5526e0:goto L5526e0;
case 0x5526e1:c.instructions+=2;goto B5526e1;
case 0x5526e3:c.instructions+=1;goto B5526e3;
case 0x5526e8:goto L5526e8;
case 0x5526ed:c.instructions+=1;goto B5526ed;
case 0x5526ef:goto L5526ef;
case 0x5526f0:c.instructions+=1;goto B5526f0;
case 0x5526f5:goto L5526f5;
case 0x5526f8:goto L5526f8;
case 0x5526fa:c.instructions+=2;goto B5526fa;
case 0x5526fb:c.instructions+=1;goto B5526fb;
case 0x552700:goto L552700;
case 0x55270a:c.instructions+=2;goto B55270a;
case 0x552710:c.instructions+=1;goto B552710;
case 0x552720:goto L552720;
case 0x552722:c.instructions+=7;goto B552722;
case 0x552727:c.instructions+=6;goto B552727;
case 0x55272d:c.instructions+=5;goto B55272d;
case 0x55272e:c.instructions+=4;goto B55272e;
case 0x552735:c.instructions+=3;goto B552735;
case 0x552736:c.instructions+=2;goto B552736;
case 0x55273b:c.instructions+=1;goto B55273b;
case 0x552740:goto L552740;
case 0x552743:c.instructions+=4;goto B552743;
case 0x552747:c.instructions+=3;goto B552747;
case 0x552749:c.instructions+=2;goto B552749;
case 0x552751:c.instructions+=1;goto B552751;
case 0x552753:goto L552753;
case 0x552757:c.instructions+=3;goto B552757;
case 0x552758:c.instructions+=2;goto B552758;
case 0x55275a:c.instructions+=1;goto B55275a;
case 0x55275f:goto L55275f;
case 0x552763:c.instructions+=3;goto B552763;
case 0x55276a:c.instructions+=2;goto B55276a;
case 0x55276d:c.instructions+=1;goto B55276d;
case 0x55276e:goto L55276e;
case 0x552772:c.instructions+=4;goto B552772;
case 0x552774:c.instructions+=3;goto B552774;
case 0x55277b:c.instructions+=2;goto B55277b;
case 0x55277e:c.instructions+=1;goto B55277e;
case 0x552780:goto L552780;
case 0x552782:c.instructions+=14;goto B552782;
case 0x552787:c.instructions+=13;goto B552787;
case 0x55278d:c.instructions+=12;goto B55278d;
case 0x55278e:c.instructions+=11;goto B55278e;
case 0x552795:c.instructions+=10;goto B552795;
case 0x552796:c.instructions+=9;goto B552796;
case 0x55279a:c.instructions+=8;goto B55279a;
case 0x55279b:c.instructions+=7;goto B55279b;
case 0x55279c:c.instructions+=6;goto B55279c;
case 0x55279d:c.instructions+=5;goto B55279d;
case 0x55279e:c.instructions+=4;goto B55279e;
case 0x5527a0:c.instructions+=3;goto B5527a0;
case 0x5527a1:c.instructions+=2;goto B5527a1;
case 0x5527a5:c.instructions+=1;goto B5527a5;
case 0x5527aa:goto L5527aa;
case 0x5527ad:c.instructions+=21;goto B5527ad;
case 0x5527af:c.instructions+=20;goto B5527af;
case 0x5527b5:c.instructions+=19;goto B5527b5;
case 0x5527b9:c.instructions+=18;goto B5527b9;
case 0x5527bb:c.instructions+=17;goto B5527bb;
case 0x5527be:c.instructions+=16;goto B5527be;
case 0x5527c1:c.instructions+=15;goto B5527c1;
case 0x5527c2:c.instructions+=14;goto B5527c2;
case 0x5527c3:c.instructions+=13;goto B5527c3;
case 0x5527c8:c.instructions+=12;goto B5527c8;
case 0x5527c9:c.instructions+=11;goto B5527c9;
case 0x5527ce:c.instructions+=10;goto B5527ce;
case 0x5527d1:c.instructions+=9;goto B5527d1;
case 0x5527d2:c.instructions+=8;goto B5527d2;
case 0x5527d7:c.instructions+=7;goto B5527d7;
case 0x5527da:c.instructions+=6;goto B5527da;
case 0x5527dd:c.instructions+=5;goto B5527dd;
case 0x5527e0:c.instructions+=4;goto B5527e0;
case 0x5527e3:c.instructions+=3;goto B5527e3;
case 0x5527e6:c.instructions+=2;goto B5527e6;
case 0x5527e9:c.instructions+=1;goto B5527e9;
case 0x5527ee:goto L5527ee;
case 0x5527f8:c.instructions+=43;goto B5527f8;
case 0x552802:c.instructions+=42;goto B552802;
case 0x55280c:c.instructions+=41;goto B55280c;
case 0x552816:c.instructions+=40;goto B552816;
case 0x552820:c.instructions+=39;goto B552820;
case 0x55282a:c.instructions+=38;goto B55282a;
case 0x552834:c.instructions+=37;goto B552834;
case 0x55283e:c.instructions+=36;goto B55283e;
case 0x552848:c.instructions+=35;goto B552848;
case 0x552852:c.instructions+=34;goto B552852;
case 0x55285c:c.instructions+=33;goto B55285c;
case 0x552866:c.instructions+=32;goto B552866;
case 0x55286c:c.instructions+=31;goto B55286c;
case 0x552872:c.instructions+=30;goto B552872;
case 0x552878:c.instructions+=29;goto B552878;
case 0x55287e:c.instructions+=28;goto B55287e;
case 0x552884:c.instructions+=27;goto B552884;
case 0x55288a:c.instructions+=26;goto B55288a;
case 0x55288f:c.instructions+=25;goto B55288f;
case 0x552895:c.instructions+=24;goto B552895;
case 0x55289a:c.instructions+=23;goto B55289a;
case 0x5528a0:c.instructions+=22;goto B5528a0;
case 0x5528a6:c.instructions+=21;goto B5528a6;
case 0x5528ac:c.instructions+=20;goto B5528ac;
case 0x5528b2:c.instructions+=19;goto B5528b2;
case 0x5528b8:c.instructions+=18;goto B5528b8;
case 0x5528c2:c.instructions+=17;goto B5528c2;
case 0x5528c8:c.instructions+=16;goto B5528c8;
case 0x5528cb:c.instructions+=15;goto B5528cb;
case 0x5528d1:c.instructions+=14;goto B5528d1;
case 0x5528d7:c.instructions+=13;goto B5528d7;
case 0x5528e1:c.instructions+=12;goto B5528e1;
case 0x5528e7:c.instructions+=11;goto B5528e7;
case 0x5528ed:c.instructions+=10;goto B5528ed;
case 0x5528f3:c.instructions+=9;goto B5528f3;
case 0x5528f9:c.instructions+=8;goto B5528f9;
case 0x5528ff:c.instructions+=7;goto B5528ff;
case 0x552906:c.instructions+=6;goto B552906;
case 0x55290c:c.instructions+=5;goto B55290c;
case 0x552913:c.instructions+=4;goto B552913;
case 0x55291a:c.instructions+=3;goto B55291a;
case 0x55291f:c.instructions+=2;goto B55291f;
case 0x552922:c.instructions+=1;goto B552922;
case 0x552924:goto L552924;
case 0x552927:c.instructions+=2;goto B552927;
case 0x552929:c.instructions+=1;goto B552929;
case 0x55292b:goto L55292b;
case 0x55292d:c.instructions+=1;goto B55292d;
case 0x55292f:goto L55292f;
case 0x552931:goto L552931;
case 0x552934:c.instructions+=5;goto B552934;
case 0x552936:c.instructions+=4;goto B552936;
case 0x552939:c.instructions+=3;goto B552939;
case 0x55293a:c.instructions+=2;goto B55293a;
case 0x55293c:c.instructions+=1;goto B55293c;
case 0x55293e:goto L55293e;
case 0x552940:c.instructions+=1;goto B552940;
case 0x552942:goto L552942;
case 0x552943:c.instructions+=1;goto B552943;
case 0x552948:goto L552948;
case 0x55294b:c.instructions+=2;goto B55294b;
case 0x55294d:c.instructions+=1;goto B55294d;
case 0x55294f:goto L55294f;
case 0x552950:c.instructions+=2;goto B552950;
case 0x552952:c.instructions+=1;goto B552952;
case 0x552957:goto L552957;
case 0x552959:c.instructions+=1;goto B552959;
case 0x55295b:goto L55295b;
case 0x552960:c.instructions+=2;goto B552960;
case 0x552962:c.instructions+=1;goto B552962;
case 0x552964:goto L552964;
case 0x552967:c.instructions+=3;goto B552967;
case 0x552968:c.instructions+=2;goto B552968;
case 0x552969:c.instructions+=1;goto B552969;
case 0x55296e:goto L55296e;
case 0x552970:goto L552970;
case 0x552972:goto L552972;
case 0x552975:c.instructions+=4;goto B552975;
case 0x552978:c.instructions+=3;goto B552978;
case 0x55297d:c.instructions+=2;goto B55297d;
case 0x552980:c.instructions+=1;goto B552980;
case 0x552982:goto L552982;
case 0x552985:c.instructions+=2;goto B552985;
case 0x552987:c.instructions+=1;goto B552987;
case 0x552989:goto L552989;
case 0x55298b:c.instructions+=1;goto B55298b;
case 0x55298d:goto L55298d;
case 0x55298f:goto L55298f;
case 0x552992:c.instructions+=5;goto B552992;
case 0x552995:c.instructions+=4;goto B552995;
case 0x552997:c.instructions+=3;goto B552997;
case 0x552998:c.instructions+=2;goto B552998;
case 0x55299a:c.instructions+=1;goto B55299a;
case 0x55299c:goto L55299c;
case 0x55299e:c.instructions+=1;goto B55299e;
case 0x5529a0:goto L5529a0;
case 0x5529a1:c.instructions+=1;goto B5529a1;
case 0x5529a6:goto L5529a6;
case 0x5529a9:c.instructions+=2;goto B5529a9;
case 0x5529ab:c.instructions+=1;goto B5529ab;
case 0x5529ad:goto L5529ad;
case 0x5529ae:c.instructions+=2;goto B5529ae;
case 0x5529b0:c.instructions+=1;goto B5529b0;
case 0x5529b5:goto L5529b5;
case 0x5529b7:c.instructions+=1;goto B5529b7;
case 0x5529b9:goto L5529b9;
case 0x5529be:c.instructions+=2;goto B5529be;
case 0x5529c0:c.instructions+=1;goto B5529c0;
case 0x5529c2:goto L5529c2;
case 0x5529c5:c.instructions+=3;goto B5529c5;
case 0x5529c6:c.instructions+=2;goto B5529c6;
case 0x5529c7:c.instructions+=1;goto B5529c7;
case 0x5529cc:goto L5529cc;
case 0x5529ce:goto L5529ce;
case 0x5529d0:goto L5529d0;
case 0x5529d3:c.instructions+=4;goto B5529d3;
case 0x5529d6:c.instructions+=3;goto B5529d6;
case 0x5529db:c.instructions+=2;goto B5529db;
case 0x5529de:c.instructions+=1;goto B5529de;
case 0x5529e0:goto L5529e0;
case 0x5529e3:c.instructions+=2;goto B5529e3;
case 0x5529e5:c.instructions+=1;goto B5529e5;
case 0x5529e7:goto L5529e7;
case 0x5529e9:c.instructions+=1;goto B5529e9;
case 0x5529eb:goto L5529eb;
case 0x5529ed:goto L5529ed;
case 0x5529f0:c.instructions+=5;goto B5529f0;
case 0x5529f2:c.instructions+=4;goto B5529f2;
case 0x5529f5:c.instructions+=3;goto B5529f5;
case 0x5529f6:c.instructions+=2;goto B5529f6;
case 0x5529f8:c.instructions+=1;goto B5529f8;
case 0x5529fa:goto L5529fa;
case 0x5529fc:c.instructions+=1;goto B5529fc;
case 0x5529fe:goto L5529fe;
case 0x5529ff:c.instructions+=1;goto B5529ff;
case 0x552a04:goto L552a04;
case 0x552a07:c.instructions+=2;goto B552a07;
case 0x552a09:c.instructions+=1;goto B552a09;
case 0x552a0b:goto L552a0b;
case 0x552a0c:c.instructions+=2;goto B552a0c;
case 0x552a0e:c.instructions+=1;goto B552a0e;
case 0x552a13:goto L552a13;
case 0x552a15:c.instructions+=1;goto B552a15;
case 0x552a17:goto L552a17;
case 0x552a1c:c.instructions+=2;goto B552a1c;
case 0x552a1e:c.instructions+=1;goto B552a1e;
case 0x552a20:goto L552a20;
case 0x552a23:c.instructions+=3;goto B552a23;
case 0x552a24:c.instructions+=2;goto B552a24;
case 0x552a25:c.instructions+=1;goto B552a25;
case 0x552a2a:goto L552a2a;
case 0x552a2c:goto L552a2c;
case 0x552a2e:goto L552a2e;
case 0x552a31:c.instructions+=2;goto B552a31;
case 0x552a34:c.instructions+=1;goto B552a34;
case 0x552a36:goto L552a36;
case 0x552a39:c.instructions+=1;goto B552a39;
case 0x552a3b:goto L552a3b;
case 0x552a41:c.instructions+=2;goto B552a41;
case 0x552a42:c.instructions+=1;goto B552a42;
case 0x552a47:goto L552a47;
case 0x552a4d:c.instructions+=2;goto B552a4d;
case 0x552a4e:c.instructions+=1;goto B552a4e;
case 0x552a53:goto L552a53;
case 0x552a59:c.instructions+=2;goto B552a59;
case 0x552a5a:c.instructions+=1;goto B552a5a;
case 0x552a5f:goto L552a5f;
case 0x552a62:c.instructions+=2;goto B552a62;
case 0x552a64:c.instructions+=1;goto B552a64;
case 0x552a69:goto L552a69;
case 0x552a6c:goto L552a6c;
case 0x552a70:c.instructions+=8;goto B552a70;
case 0x552a71:c.instructions+=7;goto B552a71;
case 0x552a73:c.instructions+=6;goto B552a73;
case 0x552a74:c.instructions+=5;goto B552a74;
case 0x552a75:c.instructions+=4;goto B552a75;
case 0x552a76:c.instructions+=3;goto B552a76;
case 0x552a7d:c.instructions+=2;goto B552a7d;
case 0x552a80:c.instructions+=1;goto B552a80;
case 0x552a90:goto L552a90;
case 0x552a92:c.instructions+=13;goto B552a92;
case 0x552a97:c.instructions+=12;goto B552a97;
case 0x552a9d:c.instructions+=11;goto B552a9d;
case 0x552a9e:c.instructions+=10;goto B552a9e;
case 0x552aa5:c.instructions+=9;goto B552aa5;
case 0x552aa6:c.instructions+=8;goto B552aa6;
case 0x552aaa:c.instructions+=7;goto B552aaa;
case 0x552aab:c.instructions+=6;goto B552aab;
case 0x552aac:c.instructions+=5;goto B552aac;
case 0x552aad:c.instructions+=4;goto B552aad;
case 0x552aaf:c.instructions+=3;goto B552aaf;
case 0x552ab0:c.instructions+=2;goto B552ab0;
case 0x552ab4:c.instructions+=1;goto B552ab4;
case 0x552ab9:goto L552ab9;
case 0x552abc:c.instructions+=5;goto B552abc;
case 0x552ac4:c.instructions+=4;goto B552ac4;
case 0x552aca:c.instructions+=3;goto B552aca;
case 0x552acf:c.instructions+=2;goto B552acf;
case 0x552ad2:c.instructions+=1;goto B552ad2;
case 0x552ad4:goto L552ad4;
case 0x552ad7:c.instructions+=2;goto B552ad7;
case 0x552ad9:c.instructions+=1;goto B552ad9;
case 0x552adb:goto L552adb;
case 0x552add:c.instructions+=1;goto B552add;
case 0x552adf:goto L552adf;
case 0x552ae1:goto L552ae1;
case 0x552ae4:c.instructions+=5;goto B552ae4;
case 0x552ae7:c.instructions+=4;goto B552ae7;
case 0x552ae9:c.instructions+=3;goto B552ae9;
case 0x552aea:c.instructions+=2;goto B552aea;
case 0x552aec:c.instructions+=1;goto B552aec;
case 0x552aee:goto L552aee;
case 0x552af0:c.instructions+=1;goto B552af0;
case 0x552af2:goto L552af2;
case 0x552af3:c.instructions+=1;goto B552af3;
case 0x552af8:goto L552af8;
case 0x552afb:c.instructions+=2;goto B552afb;
case 0x552afd:c.instructions+=1;goto B552afd;
case 0x552aff:goto L552aff;
case 0x552b00:c.instructions+=2;goto B552b00;
case 0x552b02:c.instructions+=1;goto B552b02;
case 0x552b07:goto L552b07;
case 0x552b09:c.instructions+=1;goto B552b09;
case 0x552b0b:goto L552b0b;
case 0x552b10:c.instructions+=2;goto B552b10;
case 0x552b12:c.instructions+=1;goto B552b12;
case 0x552b14:goto L552b14;
case 0x552b17:c.instructions+=3;goto B552b17;
case 0x552b18:c.instructions+=2;goto B552b18;
case 0x552b19:c.instructions+=1;goto B552b19;
case 0x552b1e:goto L552b1e;
case 0x552b20:goto L552b20;
case 0x552b22:goto L552b22;
case 0x552b25:c.instructions+=4;goto B552b25;
case 0x552b28:c.instructions+=3;goto B552b28;
case 0x552b2d:c.instructions+=2;goto B552b2d;
case 0x552b30:c.instructions+=1;goto B552b30;
case 0x552b32:goto L552b32;
case 0x552b35:c.instructions+=2;goto B552b35;
case 0x552b37:c.instructions+=1;goto B552b37;
case 0x552b39:goto L552b39;
case 0x552b3b:c.instructions+=1;goto B552b3b;
case 0x552b3d:goto L552b3d;
case 0x552b3f:goto L552b3f;
case 0x552b42:c.instructions+=5;goto B552b42;
case 0x552b44:c.instructions+=4;goto B552b44;
case 0x552b47:c.instructions+=3;goto B552b47;
case 0x552b48:c.instructions+=2;goto B552b48;
case 0x552b4a:c.instructions+=1;goto B552b4a;
case 0x552b4c:goto L552b4c;
case 0x552b4e:c.instructions+=1;goto B552b4e;
case 0x552b50:goto L552b50;
case 0x552b51:c.instructions+=1;goto B552b51;
case 0x552b56:goto L552b56;
case 0x552b59:c.instructions+=2;goto B552b59;
case 0x552b5b:c.instructions+=1;goto B552b5b;
case 0x552b5d:goto L552b5d;
case 0x552b5e:c.instructions+=2;goto B552b5e;
case 0x552b60:c.instructions+=1;goto B552b60;
case 0x552b65:goto L552b65;
case 0x552b67:c.instructions+=1;goto B552b67;
case 0x552b69:goto L552b69;
case 0x552b6e:c.instructions+=2;goto B552b6e;
case 0x552b70:c.instructions+=1;goto B552b70;
case 0x552b72:goto L552b72;
case 0x552b75:c.instructions+=3;goto B552b75;
case 0x552b76:c.instructions+=2;goto B552b76;
case 0x552b77:c.instructions+=1;goto B552b77;
case 0x552b7c:goto L552b7c;
case 0x552b7e:goto L552b7e;
case 0x552b80:goto L552b80;
case 0x552b83:c.instructions+=3;goto B552b83;
case 0x552b85:c.instructions+=2;goto B552b85;
case 0x552b88:c.instructions+=1;goto B552b88;
case 0x552b8a:goto L552b8a;
case 0x552b8b:c.instructions+=1;goto B552b8b;
case 0x552b90:goto L552b90;
case 0x552b93:c.instructions+=2;goto B552b93;
case 0x552b95:c.instructions+=1;goto B552b95;
case 0x552b97:goto L552b97;
case 0x552b9c:c.instructions+=2;goto B552b9c;
case 0x552b9e:c.instructions+=1;goto B552b9e;
case 0x552ba3:goto L552ba3;
case 0x552ba5:c.instructions+=1;goto B552ba5;
case 0x552ba7:goto L552ba7;
case 0x552bac:c.instructions+=2;goto B552bac;
case 0x552bae:c.instructions+=1;goto B552bae;
case 0x552bb0:goto L552bb0;
case 0x552bb3:c.instructions+=3;goto B552bb3;
case 0x552bb4:c.instructions+=2;goto B552bb4;
case 0x552bb9:c.instructions+=1;goto B552bb9;
case 0x552bbe:goto L552bbe;
case 0x552bc0:goto L552bc0;
case 0x552bc2:goto L552bc2;
case 0x552bc5:c.instructions+=3;goto B552bc5;
case 0x552bc7:c.instructions+=2;goto B552bc7;
case 0x552bca:c.instructions+=1;goto B552bca;
case 0x552bcc:goto L552bcc;
case 0x552bcd:c.instructions+=1;goto B552bcd;
case 0x552bd2:goto L552bd2;
case 0x552bd5:c.instructions+=2;goto B552bd5;
case 0x552bd7:c.instructions+=1;goto B552bd7;
case 0x552bd9:goto L552bd9;
case 0x552bde:c.instructions+=2;goto B552bde;
case 0x552be0:c.instructions+=1;goto B552be0;
case 0x552be5:goto L552be5;
case 0x552be7:c.instructions+=1;goto B552be7;
case 0x552be9:goto L552be9;
case 0x552bee:c.instructions+=2;goto B552bee;
case 0x552bf0:c.instructions+=1;goto B552bf0;
case 0x552bf2:goto L552bf2;
case 0x552bf5:c.instructions+=3;goto B552bf5;
case 0x552bf6:c.instructions+=2;goto B552bf6;
case 0x552bfb:c.instructions+=1;goto B552bfb;
case 0x552c00:goto L552c00;
case 0x552c02:goto L552c02;
case 0x552c04:goto L552c04;
case 0x552c08:c.instructions+=8;goto B552c08;
case 0x552c0b:c.instructions+=7;goto B552c0b;
case 0x552c0d:c.instructions+=6;goto B552c0d;
case 0x552c0e:c.instructions+=5;goto B552c0e;
case 0x552c0f:c.instructions+=4;goto B552c0f;
case 0x552c10:c.instructions+=3;goto B552c10;
case 0x552c17:c.instructions+=2;goto B552c17;
case 0x552c1a:c.instructions+=1;goto B552c1a;
case 0x552c20:goto L552c20;
case 0x552c25:goto L552c25;
case 0x552c27:c.instructions+=1;goto B552c27;
case 0x552c29:goto L552c29;
case 0x552c2b:c.instructions+=1;goto B552c2b;
case 0x552c2d:goto L552c2d;
case 0x552c2f:c.instructions+=1;goto B552c2f;
case 0x552c31:goto L552c31;
case 0x552c36:c.instructions+=1;goto B552c36;
case 0x552c38:goto L552c38;
case 0x552c3a:c.instructions+=1;goto B552c3a;
case 0x552c3c:goto L552c3c;
case 0x552c41:c.instructions+=1;goto B552c41;
case 0x552c43:goto L552c43;
case 0x552c45:c.instructions+=4;goto B552c45;
case 0x552c47:c.instructions+=3;goto B552c47;
case 0x552c49:c.instructions+=2;goto B552c49;
case 0x552c4c:c.instructions+=1;goto B552c4c;
case 0x552c4d:goto L552c4d;
case 0x552c52:c.instructions+=1;goto B552c52;
case 0x552c57:goto L552c57;
case 0x552c5c:c.instructions+=1;goto B552c5c;
case 0x552c61:goto L552c61;
case 0x552c66:c.instructions+=2;goto B552c66;
case 0x552c68:c.instructions+=1;goto B552c68;
case 0x552c6a:goto L552c6a;
case 0x552c6b:c.instructions+=1;goto B552c6b;
case 0x552c70:goto L552c70;
case 0x552c73:c.instructions+=1;goto B552c73;
case 0x552c7d:goto L552c7d;
case 0x552c80:goto L552c80;
case 0x552c81:c.instructions+=3;goto B552c81;
case 0x552c83:c.instructions+=2;goto B552c83;
case 0x552c88:c.instructions+=1;goto B552c88;
case 0x552c8d:goto L552c8d;
case 0x552c8f:c.instructions+=1;goto B552c8f;
case 0x552c91:goto L552c91;
case 0x552c94:c.instructions+=8;goto B552c94;
case 0x552c96:c.instructions+=7;goto B552c96;
case 0x552c98:c.instructions+=6;goto B552c98;
case 0x552c9a:c.instructions+=5;goto B552c9a;
case 0x552c9f:c.instructions+=4;goto B552c9f;
case 0x552ca1:c.instructions+=3;goto B552ca1;
case 0x552ca2:c.instructions+=2;goto B552ca2;
case 0x552ca3:c.instructions+=1;goto B552ca3;
case 0x552ca8:goto L552ca8;
case 0x552cab:c.instructions+=2;goto B552cab;
case 0x552cac:c.instructions+=1;goto B552cac;
case 0x552cad:goto L552cad;
case 0x552cb2:goto L552cb2;
case 0x552cb7:c.instructions+=2;goto B552cb7;
case 0x552cb8:c.instructions+=1;goto B552cb8;
case 0x552cc0:goto L552cc0;
case 0x552cc1:c.instructions+=5;goto B552cc1;
case 0x552cc3:c.instructions+=4;goto B552cc3;
case 0x552cc4:c.instructions+=3;goto B552cc4;
case 0x552cc7:c.instructions+=2;goto B552cc7;
case 0x552cc9:c.instructions+=1;goto B552cc9;
case 0x552ccb:goto L552ccb;
case 0x552cd0:c.instructions+=2;goto B552cd0;
case 0x552cd2:c.instructions+=1;goto B552cd2;
case 0x552cd4:goto L552cd4;
case 0x552cd9:c.instructions+=2;goto B552cd9;
case 0x552cdb:c.instructions+=1;goto B552cdb;
case 0x552cdd:goto L552cdd;
case 0x552ce2:c.instructions+=2;goto B552ce2;
case 0x552ce4:c.instructions+=1;goto B552ce4;
case 0x552ce6:goto L552ce6;
case 0x552ceb:goto L552ceb;
case 0x552cf0:c.instructions+=3;goto B552cf0;
case 0x552cf2:c.instructions+=2;goto B552cf2;
case 0x552cf3:c.instructions+=1;goto B552cf3;
case 0x552cf8:goto L552cf8;
case 0x552cfb:c.instructions+=2;goto B552cfb;
case 0x552d00:c.instructions+=1;goto B552d00;
case 0x552d05:goto L552d05;
case 0x552d0a:c.instructions+=5;goto B552d0a;
case 0x552d0b:c.instructions+=4;goto B552d0b;
case 0x552d10:c.instructions+=3;goto B552d10;
case 0x552d11:c.instructions+=2;goto B552d11;
case 0x552d16:c.instructions+=1;goto B552d16;
case 0x552d1b:goto L552d1b;
case 0x552d1c:c.instructions+=6;goto B552d1c;
case 0x552d1d:c.instructions+=5;goto B552d1d;
case 0x552d20:c.instructions+=4;goto B552d20;
case 0x552d22:c.instructions+=3;goto B552d22;
case 0x552d28:c.instructions+=2;goto B552d28;
case 0x552d2f:c.instructions+=1;goto B552d2f;
case 0x552d31:goto L552d31;
case 0x552d34:c.instructions+=1;goto B552d34;
case 0x552d36:goto L552d36;
case 0x552d38:c.instructions+=3;goto B552d38;
case 0x552d3e:c.instructions+=2;goto B552d3e;
case 0x552d44:c.instructions+=1;goto B552d44;
case 0x552d46:goto L552d46;
case 0x552d48:goto L552d48;
case 0x552d4e:c.instructions+=6;goto B552d4e;
case 0x552d51:c.instructions+=5;goto B552d51;
case 0x552d53:c.instructions+=4;goto B552d53;
case 0x552d55:c.instructions+=3;goto B552d55;
case 0x552d57:c.instructions+=2;goto B552d57;
case 0x552d5b:c.instructions+=1;goto B552d5b;
case 0x552d5d:goto L552d5d;
case 0x552d60:goto L552d60;
case 0x552d62:c.instructions+=1;goto B552d62;
case 0x552d64:goto L552d64;
case 0x552d65:c.instructions+=3;goto B552d65;
case 0x552d68:c.instructions+=2;goto B552d68;
case 0x552d6a:c.instructions+=1;goto B552d6a;
case 0x552d6c:goto L552d6c;
case 0x552d6f:goto L552d6f;
case 0x552d70:c.instructions+=1;goto B552d70;
case 0x552d75:goto L552d75;
case 0x552d77:c.instructions+=2;goto B552d77;
case 0x552d78:c.instructions+=1;goto B552d78;
case 0x552d7a:goto L552d7a;
case 0x552d7f:goto L552d7f;
case 0x552d81:goto L552d81;
case 0x552d84:c.instructions+=3;goto B552d84;
case 0x552d86:c.instructions+=2;goto B552d86;
case 0x552d88:c.instructions+=1;goto B552d88;
case 0x552d8a:goto L552d8a;
case 0x552d8b:c.instructions+=1;goto B552d8b;
case 0x552d90:goto L552d90;
case 0x552d93:c.instructions+=2;goto B552d93;
case 0x552d97:c.instructions+=1;goto B552d97;
case 0x552d99:goto L552d99;
case 0x552d9e:goto L552d9e;
case 0x552da0:c.instructions+=2;goto B552da0;
case 0x552da1:c.instructions+=1;goto B552da1;
case 0x552da3:goto L552da3;
case 0x552da8:goto L552da8;
case 0x552daa:goto L552daa;
case 0x552daf:goto L552daf;
case 0x552db1:c.instructions+=1;goto B552db1;
case 0x552db3:goto L552db3;
case 0x552db4:c.instructions+=1;goto B552db4;
case 0x552db9:goto L552db9;
case 0x552dbb:goto L552dbb;
case 0x552dbe:c.instructions+=9;goto B552dbe;
case 0x552dc0:c.instructions+=8;goto B552dc0;
case 0x552dc6:c.instructions+=7;goto B552dc6;
case 0x552dcb:c.instructions+=6;goto B552dcb;
case 0x552dd1:c.instructions+=5;goto B552dd1;
case 0x552dd7:c.instructions+=4;goto B552dd7;
case 0x552dd9:c.instructions+=3;goto B552dd9;
case 0x552dda:c.instructions+=2;goto B552dda;
case 0x552ddc:c.instructions+=1;goto B552ddc;
case 0x552ddf:goto L552ddf;
case 0x552de5:c.instructions+=5;goto B552de5;
case 0x552de7:c.instructions+=4;goto B552de7;
case 0x552de9:c.instructions+=3;goto B552de9;
case 0x552dee:c.instructions+=2;goto B552dee;
case 0x552def:c.instructions+=1;goto B552def;
case 0x552df2:goto L552df2;
case 0x552df9:c.instructions+=1;goto B552df9;
case 0x552dfe:goto L552dfe;
case 0x552e04:c.instructions+=4;goto B552e04;
case 0x552e06:c.instructions+=3;goto B552e06;
case 0x552e07:c.instructions+=2;goto B552e07;
case 0x552e08:c.instructions+=1;goto B552e08;
case 0x552e0a:goto L552e0a;
case 0x552e0d:c.instructions+=6;goto B552e0d;
case 0x552e10:c.instructions+=5;goto B552e10;
case 0x552e13:c.instructions+=4;goto B552e13;
case 0x552e15:c.instructions+=3;goto B552e15;
case 0x552e16:c.instructions+=2;goto B552e16;
case 0x552e17:c.instructions+=1;goto B552e17;
case 0x552e1c:goto L552e1c;
case 0x552e1f:c.instructions+=3;goto B552e1f;
case 0x552e20:c.instructions+=2;goto B552e20;
case 0x552e21:c.instructions+=1;goto B552e21;
case 0x552e30:goto L552e30;
case 0x552e31:c.instructions+=17;goto B552e31;
case 0x552e33:c.instructions+=16;goto B552e33;
case 0x552e36:c.instructions+=15;goto B552e36;
case 0x552e37:c.instructions+=14;goto B552e37;
case 0x552e3a:c.instructions+=13;goto B552e3a;
case 0x552e3b:c.instructions+=12;goto B552e3b;
case 0x552e3e:c.instructions+=11;goto B552e3e;
case 0x552e40:c.instructions+=10;goto B552e40;
case 0x552e45:c.instructions+=9;goto B552e45;
case 0x552e4a:c.instructions+=8;goto B552e4a;
case 0x552e51:c.instructions+=7;goto B552e51;
case 0x552e58:c.instructions+=6;goto B552e58;
case 0x552e5e:c.instructions+=5;goto B552e5e;
case 0x552e64:c.instructions+=4;goto B552e64;
case 0x552e66:c.instructions+=3;goto B552e66;
case 0x552e67:c.instructions+=2;goto B552e67;
case 0x552e69:c.instructions+=1;goto B552e69;
case 0x552e6c:goto L552e6c;
case 0x552e72:c.instructions+=5;goto B552e72;
case 0x552e74:c.instructions+=4;goto B552e74;
case 0x552e76:c.instructions+=3;goto B552e76;
case 0x552e7b:c.instructions+=2;goto B552e7b;
case 0x552e7c:c.instructions+=1;goto B552e7c;
case 0x552e7f:goto L552e7f;
case 0x552e86:c.instructions+=1;goto B552e86;
case 0x552e8b:goto L552e8b;
case 0x552e91:c.instructions+=2;goto B552e91;
case 0x552e93:c.instructions+=1;goto B552e93;
case 0x552e95:goto L552e95;
case 0x552e98:c.instructions+=6;goto B552e98;
case 0x552e9b:c.instructions+=5;goto B552e9b;
case 0x552e9e:c.instructions+=4;goto B552e9e;
case 0x552ea0:c.instructions+=3;goto B552ea0;
case 0x552ea1:c.instructions+=2;goto B552ea1;
case 0x552ea2:c.instructions+=1;goto B552ea2;
case 0x552ea7:goto L552ea7;
case 0x552eaa:c.instructions+=4;goto B552eaa;
case 0x552eab:c.instructions+=3;goto B552eab;
case 0x552eac:c.instructions+=2;goto B552eac;
case 0x552ead:c.instructions+=1;goto B552ead;
case 0x552eb0:goto L552eb0;
case 0x552eb2:c.instructions+=11;goto B552eb2;
case 0x552eb7:c.instructions+=10;goto B552eb7;
case 0x552ebd:c.instructions+=9;goto B552ebd;
case 0x552ebe:c.instructions+=8;goto B552ebe;
case 0x552ec5:c.instructions+=7;goto B552ec5;
case 0x552ec6:c.instructions+=6;goto B552ec6;
case 0x552eca:c.instructions+=5;goto B552eca;
case 0x552ecb:c.instructions+=4;goto B552ecb;
case 0x552ecd:c.instructions+=3;goto B552ecd;
case 0x552ece:c.instructions+=2;goto B552ece;
case 0x552ed2:c.instructions+=1;goto B552ed2;
case 0x552ed7:goto L552ed7;
case 0x552eda:c.instructions+=21;goto B552eda;
case 0x552edc:c.instructions+=20;goto B552edc;
case 0x552ee2:c.instructions+=19;goto B552ee2;
case 0x552ee6:c.instructions+=18;goto B552ee6;
case 0x552ee8:c.instructions+=17;goto B552ee8;
case 0x552eeb:c.instructions+=16;goto B552eeb;
case 0x552eee:c.instructions+=15;goto B552eee;
case 0x552ef0:c.instructions+=14;goto B552ef0;
case 0x552ef3:c.instructions+=13;goto B552ef3;
case 0x552ef6:c.instructions+=12;goto B552ef6;
case 0x552ef8:c.instructions+=11;goto B552ef8;
case 0x552efb:c.instructions+=10;goto B552efb;
case 0x552efe:c.instructions+=9;goto B552efe;
case 0x552f00:c.instructions+=8;goto B552f00;
case 0x552f03:c.instructions+=7;goto B552f03;
case 0x552f06:c.instructions+=6;goto B552f06;
case 0x552f08:c.instructions+=5;goto B552f08;
case 0x552f0b:c.instructions+=4;goto B552f0b;
case 0x552f11:c.instructions+=3;goto B552f11;
case 0x552f13:c.instructions+=2;goto B552f13;
case 0x552f18:c.instructions+=1;goto B552f18;
case 0x552f1d:goto L552f1d;
case 0x552f1f:c.instructions+=1;goto B552f1f;
case 0x552f24:goto L552f24;
case 0x552f26:c.instructions+=1;goto B552f26;
case 0x552f2b:goto L552f2b;
case 0x552f2f:c.instructions+=5;goto B552f2f;
case 0x552f31:c.instructions+=4;goto B552f31;
case 0x552f32:c.instructions+=3;goto B552f32;
case 0x552f39:c.instructions+=2;goto B552f39;
case 0x552f3c:c.instructions+=1;goto B552f3c;
case 0x552f40:goto L552f40;
case 0x552f41:c.instructions+=2;goto B552f41;
case 0x552f43:c.instructions+=1;goto B552f43;
case 0x552f48:goto L552f48;
case 0x552f4d:c.instructions+=1;goto B552f4d;
case 0x552f4f:goto L552f4f;
case 0x552f50:c.instructions+=1;goto B552f50;
case 0x552f55:goto L552f55;
case 0x552f58:goto L552f58;
case 0x552f5a:c.instructions+=2;goto B552f5a;
case 0x552f5b:c.instructions+=1;goto B552f5b;
case 0x552f60:goto L552f60;
case 0x552f62:c.instructions+=15;goto B552f62;
case 0x552f67:c.instructions+=14;goto B552f67;
case 0x552f6d:c.instructions+=13;goto B552f6d;
case 0x552f6e:c.instructions+=12;goto B552f6e;
case 0x552f75:c.instructions+=11;goto B552f75;
case 0x552f76:c.instructions+=10;goto B552f76;
case 0x552f77:c.instructions+=9;goto B552f77;
case 0x552f78:c.instructions+=8;goto B552f78;
case 0x552f7a:c.instructions+=7;goto B552f7a;
case 0x552f7e:c.instructions+=6;goto B552f7e;
case 0x552f84:c.instructions+=5;goto B552f84;
case 0x552f87:c.instructions+=4;goto B552f87;
case 0x552f8a:c.instructions+=3;goto B552f8a;
case 0x552f8c:c.instructions+=2;goto B552f8c;
case 0x552f94:c.instructions+=1;goto B552f94;
case 0x552f96:goto L552f96;
case 0x552f98:c.instructions+=5;goto B552f98;
case 0x552f9b:c.instructions+=4;goto B552f9b;
case 0x552f9d:c.instructions+=3;goto B552f9d;
case 0x552f9e:c.instructions+=2;goto B552f9e;
case 0x552fa1:c.instructions+=1;goto B552fa1;
case 0x552fa6:goto L552fa6;
case 0x552fa8:c.instructions+=3;goto B552fa8;
case 0x552fab:c.instructions+=2;goto B552fab;
case 0x552fad:c.instructions+=1;goto B552fad;
case 0x552faf:goto L552faf;
case 0x552fb2:c.instructions+=4;goto B552fb2;
case 0x552fb5:c.instructions+=3;goto B552fb5;
case 0x552fb7:c.instructions+=2;goto B552fb7;
case 0x552fbc:c.instructions+=1;goto B552fbc;
case 0x552fbe:goto L552fbe;
case 0x552fc0:goto L552fc0;
case 0x552fc2:c.instructions+=5;goto B552fc2;
case 0x552fc5:c.instructions+=4;goto B552fc5;
case 0x552fc7:c.instructions+=3;goto B552fc7;
case 0x552fc8:c.instructions+=2;goto B552fc8;
case 0x552fcb:c.instructions+=1;goto B552fcb;
case 0x552fd0:goto L552fd0;
case 0x552fd2:c.instructions+=3;goto B552fd2;
case 0x552fd5:c.instructions+=2;goto B552fd5;
case 0x552fd7:c.instructions+=1;goto B552fd7;
case 0x552fd9:goto L552fd9;
case 0x552fdc:c.instructions+=4;goto B552fdc;
case 0x552fdf:c.instructions+=3;goto B552fdf;
case 0x552fe1:c.instructions+=2;goto B552fe1;
case 0x552fe6:c.instructions+=1;goto B552fe6;
case 0x552fe8:goto L552fe8;
case 0x552fea:c.instructions+=5;goto B552fea;
case 0x552fed:c.instructions+=4;goto B552fed;
case 0x552fef:c.instructions+=3;goto B552fef;
case 0x552ff0:c.instructions+=2;goto B552ff0;
case 0x552ff3:c.instructions+=1;goto B552ff3;
case 0x552ff8:goto L552ff8;
case 0x552ffa:c.instructions+=3;goto B552ffa;
case 0x552ffd:c.instructions+=2;goto B552ffd;
case 0x552fff:c.instructions+=1;goto B552fff;
default:missing_instruction(c.pc);}
B552004:L552004:{c.instructions+=7;NFSU2_TR(0x552004);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B552007:{NFSU2_TR(0x552007);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55200a:{NFSU2_TR(0x55200a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55200d:{NFSU2_TR(0x55200d);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B552010:{NFSU2_TR(0x552010);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B552012:{NFSU2_TR(0x552012);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B552015:{NFSU2_TR(0x552015);
if(r1(R+518)){{goto L552031;}}
}
B552017:L552017:{c.instructions+=3;NFSU2_TR(0x552017);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B55201a:{NFSU2_TR(0x55201a);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B55201c:{NFSU2_TR(0x55201c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L552024;}}
}
B55201e:L55201e:{c.instructions+=2;NFSU2_TR(0x55201e);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552020:{NFSU2_TR(0x552020);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L552024;}}
}
B552022:L552022:{c.instructions+=1;NFSU2_TR(0x552022);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B552024:L552024:{c.instructions+=6;NFSU2_TR(0x552024);
w4(R+0,u32(r1(R+0)));
}
B552027:{NFSU2_TR(0x552027);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B552029:{NFSU2_TR(0x552029);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55202c:{NFSU2_TR(0x55202c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B55202d:{NFSU2_TR(0x55202d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B55202f:{NFSU2_TR(0x55202f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552017u);}goto L552017;}}
}
B552031:L552031:{c.instructions+=2;NFSU2_TR(0x552031);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552033:{NFSU2_TR(0x552033);
if(r1(R+518)){{goto L552070;}}
}
B552035:L552035:{c.instructions+=2;NFSU2_TR(0x552035);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552036:{NFSU2_TR(0x552036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55203bull));
TAIL_STATIC(0x52cef0u,52c);
}
B55203b:L55203b:{c.instructions+=3;NFSU2_TR(0x55203b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55203e:{NFSU2_TR(0x55203e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552040:{NFSU2_TR(0x552040);
if(r1(R+518)){{goto L552070;}}
}
B552042:L552042:{c.instructions+=8;NFSU2_TR(0x552042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552049:{NFSU2_TR(0x552049);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B55204c:{NFSU2_TR(0x55204c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55204d:{NFSU2_TR(0x55204d);
__builtin_memmove((R+4),(R+0),4);
}
B55204f:{NFSU2_TR(0x55204f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552053:{NFSU2_TR(0x552053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552056:{NFSU2_TR(0x552056);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552059:{NFSU2_TR(0x552059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55205eull));
TAIL_STATIC(0x504880u,504);
}
B55205e:L55205e:{c.instructions+=5;NFSU2_TR(0x55205e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552061:{NFSU2_TR(0x552061);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552063:{NFSU2_TR(0x552063);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552067:{NFSU2_TR(0x552067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B55206e:{NFSU2_TR(0x55206e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552087;}}
}
B552070:L552070:{c.instructions+=3;NFSU2_TR(0x552070);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552075:{NFSU2_TR(0x552075);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552077:{NFSU2_TR(0x552077);
if(r1(R+518)){{goto L552090;}}
}
B552079:L552079:{c.instructions+=4;NFSU2_TR(0x552079);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55207c:{NFSU2_TR(0x55207c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55207d:{NFSU2_TR(0x55207d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55207e:{NFSU2_TR(0x55207e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552083ull));
TAIL_STATIC(0x52c570u,52c);
}
B552083:L552083:{c.instructions+=2;NFSU2_TR(0x552083);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552085:{NFSU2_TR(0x552085);
if(r1(R+518)){{goto L552090;}}
}
B552087:L552087:{c.instructions+=3;NFSU2_TR(0x552087);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55208b:{NFSU2_TR(0x55208b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55208e:{NFSU2_TR(0x55208e);
if(r1(R+518)){{goto L552093;}}
}
B552090:L552090:{c.instructions+=1;NFSU2_TR(0x552090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552093:L552093:{c.instructions+=7;NFSU2_TR(0x552093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552096:{NFSU2_TR(0x552096);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552097:{NFSU2_TR(0x552097);
u8 U[4];
w4(U+0,u32(0x79c914ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55209c:{NFSU2_TR(0x55209c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55209f:{NFSU2_TR(0x55209f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5520a1:{NFSU2_TR(0x5520a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5520a2:{NFSU2_TR(0x5520a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5520a7ull));
TAIL_STATIC(0x50c960u,50c);
}
B5520a7:L5520a7:{c.instructions+=8;NFSU2_TR(0x5520a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5520aa:{NFSU2_TR(0x5520aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5520ad:{NFSU2_TR(0x5520ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5520b0:{NFSU2_TR(0x5520b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5520b3:{NFSU2_TR(0x5520b3);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B5520b6:{NFSU2_TR(0x5520b6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5520b8:{NFSU2_TR(0x5520b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5520bb:{NFSU2_TR(0x5520bb);
if(r1(R+518)){{goto L5520da;}}
}
B5520bd:L5520bd:{c.instructions+=1;NFSU2_TR(0x5520bd);
__builtin_memmove((R+4),(R+4),4);
}
B5520c0:L5520c0:{c.instructions+=3;NFSU2_TR(0x5520c0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5520c3:{NFSU2_TR(0x5520c3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5520c5:{NFSU2_TR(0x5520c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5520cd;}}
}
B5520c7:L5520c7:{c.instructions+=2;NFSU2_TR(0x5520c7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5520c9:{NFSU2_TR(0x5520c9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5520cd;}}
}
B5520cb:L5520cb:{c.instructions+=1;NFSU2_TR(0x5520cb);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B5520cd:L5520cd:{c.instructions+=6;NFSU2_TR(0x5520cd);
w4(R+8,u32(r1(R+0)));
}
B5520d0:{NFSU2_TR(0x5520d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5520d3:{NFSU2_TR(0x5520d3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5520d5:{NFSU2_TR(0x5520d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5520d6:{NFSU2_TR(0x5520d6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5520d8:{NFSU2_TR(0x5520d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5520c0u);}goto L5520c0;}}
}
B5520da:L5520da:{c.instructions+=2;NFSU2_TR(0x5520da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5520dc:{NFSU2_TR(0x5520dc);
if(r1(R+518)){{goto L552119;}}
}
B5520de:L5520de:{c.instructions+=2;NFSU2_TR(0x5520de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5520df:{NFSU2_TR(0x5520df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5520e4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5520e4:L5520e4:{c.instructions+=3;NFSU2_TR(0x5520e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5520e7:{NFSU2_TR(0x5520e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5520e9:{NFSU2_TR(0x5520e9);
if(r1(R+518)){{goto L552119;}}
}
B5520eb:L5520eb:{c.instructions+=8;NFSU2_TR(0x5520eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5520f2:{NFSU2_TR(0x5520f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5520f5:{NFSU2_TR(0x5520f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5520f6:{NFSU2_TR(0x5520f6);
__builtin_memmove((R+4),(R+0),4);
}
B5520f8:{NFSU2_TR(0x5520f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5520fc:{NFSU2_TR(0x5520fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5520ff:{NFSU2_TR(0x5520ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552102:{NFSU2_TR(0x552102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552107ull));
TAIL_STATIC(0x504880u,504);
}
B552107:L552107:{c.instructions+=5;NFSU2_TR(0x552107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55210a:{NFSU2_TR(0x55210a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55210c:{NFSU2_TR(0x55210c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552110:{NFSU2_TR(0x552110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B552117:{NFSU2_TR(0x552117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552130;}}
}
B552119:L552119:{c.instructions+=3;NFSU2_TR(0x552119);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55211e:{NFSU2_TR(0x55211e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552120:{NFSU2_TR(0x552120);
if(r1(R+518)){{goto L55213a;}}
}
B552122:L552122:{c.instructions+=4;NFSU2_TR(0x552122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552125:{NFSU2_TR(0x552125);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552126:{NFSU2_TR(0x552126);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552127:{NFSU2_TR(0x552127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55212cull));
TAIL_STATIC(0x52c570u,52c);
}
B55212c:L55212c:{c.instructions+=2;NFSU2_TR(0x55212c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55212e:{NFSU2_TR(0x55212e);
if(r1(R+518)){{goto L55213a;}}
}
B552130:L552130:{c.instructions+=2;NFSU2_TR(0x552130);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B552134:{NFSU2_TR(0x552134);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55213a;}}
}
B552136:L552136:{c.instructions+=2;NFSU2_TR(0x552136);
__builtin_memmove((R+28),(R+0),4);
}
B552138:{NFSU2_TR(0x552138);
{goto L55213c;}
}
B55213a:L55213a:{c.instructions+=1;NFSU2_TR(0x55213a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B55213c:L55213c:{c.instructions+=2;NFSU2_TR(0x55213c);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552141:{NFSU2_TR(0x552141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552146ull));
TAIL_STATIC(0x575620u,575);
}
B552146:L552146:{c.instructions+=6;NFSU2_TR(0x552146);
__builtin_memmove((R+24),(R+0),4);
}
B552148:{NFSU2_TR(0x552148);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55214b:{NFSU2_TR(0x55214b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55214e:{NFSU2_TR(0x55214e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552150:{NFSU2_TR(0x552150);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552154:{NFSU2_TR(0x552154);
if(r1(R+518)){{goto L55217e;}}
}
B552156:L552156:{c.instructions+=10;NFSU2_TR(0x552156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552159:{NFSU2_TR(0x552159);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55215c:{NFSU2_TR(0x55215c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552161:{NFSU2_TR(0x552161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552162:{NFSU2_TR(0x552162);
u8 U[4];
w4(U+0,u32(0x79b2dcull));
s4(u32(r4(R+24)),r4(U+0));
}
B552168:{NFSU2_TR(0x552168);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55216b:{NFSU2_TR(0x55216b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55216e:{NFSU2_TR(0x55216e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552171:{NFSU2_TR(0x552171);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B552174:{NFSU2_TR(0x552174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552179ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B552179:L552179:{c.instructions+=2;NFSU2_TR(0x552179);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55217c:{NFSU2_TR(0x55217c);
{goto L552180;}
}
B55217e:L55217e:{c.instructions+=1;NFSU2_TR(0x55217e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B552180:L552180:{c.instructions+=3;NFSU2_TR(0x552180);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552182:{NFSU2_TR(0x552182);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552186:{NFSU2_TR(0x552186);
if(r1(R+518)){{goto L55218d;}}
}
B552188:L552188:{c.instructions+=2;NFSU2_TR(0x552188);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55218b:{NFSU2_TR(0x55218b);
{goto L55218f;}
}
B55218d:L55218d:{c.instructions+=1;NFSU2_TR(0x55218d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55218f:L55218f:{c.instructions+=12;NFSU2_TR(0x55218f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552192:{NFSU2_TR(0x552192);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552195:{NFSU2_TR(0x552195);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4cull))));
}
B552198:{NFSU2_TR(0x552198);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B55219a:{NFSU2_TR(0x55219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55219d:{NFSU2_TR(0x55219d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5521a0:{NFSU2_TR(0x5521a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5521a2:{NFSU2_TR(0x5521a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5521a5:{NFSU2_TR(0x5521a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5521a6:{NFSU2_TR(0x5521a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5521a9:{NFSU2_TR(0x5521a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5521ac:{NFSU2_TR(0x5521ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x551feau,551);}
}
B5521b2:L5521b2:{c.instructions+=4;NFSU2_TR(0x5521b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5521b5:{NFSU2_TR(0x5521b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5521b6:{NFSU2_TR(0x5521b6);
__builtin_memmove((R+4),(R+24),4);
}
B5521b8:{NFSU2_TR(0x5521b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5521bdull));
TAIL_STATIC(0x542990u,542);
}
B5521bd:L5521bd:{c.instructions+=2;NFSU2_TR(0x5521bd);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5521c4:{NFSU2_TR(0x5521c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5521cf;}}
}
B5521c6:L5521c6:{c.instructions+=2;NFSU2_TR(0x5521c6);
__builtin_memmove((R+4),(R+24),4);
}
B5521c8:{NFSU2_TR(0x5521c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5521cdull));
TAIL_STATIC(0x537e60u,537);
}
B5521cd:L5521cd:{c.instructions+=1;NFSU2_TR(0x5521cd);
{goto L5521ea;}
}
B5521cf:L5521cf:{c.instructions+=6;NFSU2_TR(0x5521cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5521d2:{NFSU2_TR(0x5521d2);
u8 U[4];
w4(U+0,u32(0x83a9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5521d7:{NFSU2_TR(0x5521d7);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5521dc:{NFSU2_TR(0x5521dc);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5521e1:{NFSU2_TR(0x5521e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5521e2:{NFSU2_TR(0x5521e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5521e7ull));
TAIL_STATIC(0x537b80u,537);
}
B5521e7:L5521e7:{c.instructions+=1;NFSU2_TR(0x5521e7);
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
B5521ea:L5521ea:{c.instructions+=10;NFSU2_TR(0x5521ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5521ed:{NFSU2_TR(0x5521ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5521ee:{NFSU2_TR(0x5521ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0xa3e4657bull));
s4(u32(r4(U+0)),r4(U+4));
}
B5521f5:{NFSU2_TR(0x5521f5);
__builtin_memmove((R+0),(R+24),4);
}
B5521f7:{NFSU2_TR(0x5521f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5521f8:{NFSU2_TR(0x5521f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5521f9:{NFSU2_TR(0x5521f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552200:{NFSU2_TR(0x552200);
__builtin_memmove((R+16),(R+20),4);
}
B552202:{NFSU2_TR(0x552202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B552203:{NFSU2_TR(0x552203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552210:L552210:{c.instructions+=3;NFSU2_TR(0x552210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552211:{NFSU2_TR(0x552211);
__builtin_memmove((R+24),(R+4),4);
}
B552213:{NFSU2_TR(0x552213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552218ull));
{goto L552230;}
}
B552218:L552218:{c.instructions+=3;NFSU2_TR(0x552218);
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
B55221d:{NFSU2_TR(0x55221d);
__builtin_memmove((R+0),(R+24),4);
}
B55221f:{NFSU2_TR(0x55221f);
if(r1(R+518)){{goto L552228;}}
}
B552221:L552221:{c.instructions+=1;NFSU2_TR(0x552221);
s1(0x8384dc,u8(0x0ull));
}
B552228:L552228:{c.instructions+=2;NFSU2_TR(0x552228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552229:{NFSU2_TR(0x552229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552230:L552230:{c.instructions+=13;NFSU2_TR(0x552230);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552232:{NFSU2_TR(0x552232);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552237:{NFSU2_TR(0x552237);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55223d:{NFSU2_TR(0x55223d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55223e:{NFSU2_TR(0x55223e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552245:{NFSU2_TR(0x552245);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552246:{NFSU2_TR(0x552246);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552247:{NFSU2_TR(0x552247);
__builtin_memmove((R+24),(R+4),4);
}
B552249:{NFSU2_TR(0x552249);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55224d:{NFSU2_TR(0x55224d);
u8 U[4];
w4(U+0,u32(0x79c928ull));
s4(u32(r4(R+24)),r4(U+0));
}
B552253:{NFSU2_TR(0x552253);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B552256:{NFSU2_TR(0x552256);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55225e:{NFSU2_TR(0x55225e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552263ull));
TAIL_STATIC(0x4358e0u,435);
}
B552263:L552263:{c.instructions+=6;NFSU2_TR(0x552263);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552267:{NFSU2_TR(0x552267);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55226d:{NFSU2_TR(0x55226d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55226e:{NFSU2_TR(0x55226e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552275:{NFSU2_TR(0x552275);
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
B552278:{NFSU2_TR(0x552278);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552280:L552280:{c.instructions+=13;NFSU2_TR(0x552280);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552282:{NFSU2_TR(0x552282);
u8 U[4];
w4(U+0,u32(0x777c32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552287:{NFSU2_TR(0x552287);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55228d:{NFSU2_TR(0x55228d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55228e:{NFSU2_TR(0x55228e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552295:{NFSU2_TR(0x552295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552296:{NFSU2_TR(0x552296);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55229c:{NFSU2_TR(0x55229c);
s1(0x8384dc,u8(0x1ull));
}
B5522a3:{NFSU2_TR(0x5522a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5522a7:{NFSU2_TR(0x5522a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5522a9:{NFSU2_TR(0x5522a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5522ab:{NFSU2_TR(0x5522ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5522af:{NFSU2_TR(0x5522af);
if(r1(R+518)){{goto L5522bb;}}
}
B5522b1:L5522b1:{c.instructions+=3;NFSU2_TR(0x5522b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5522b5:{NFSU2_TR(0x5522b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5522b6:{NFSU2_TR(0x5522b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5522bbull));
TAIL_STATIC(0x551f80u,551);
}
B5522bb:L5522bb:{c.instructions+=4;NFSU2_TR(0x5522bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5522bf:{NFSU2_TR(0x5522bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5522c6:{NFSU2_TR(0x5522c6);
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
B5522c9:{NFSU2_TR(0x5522c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5522d0:L5522d0:{c.instructions+=9;NFSU2_TR(0x5522d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5522d2:{NFSU2_TR(0x5522d2);
u8 U[4];
w4(U+0,u32(0x777c54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5522d7:{NFSU2_TR(0x5522d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5522dd:{NFSU2_TR(0x5522dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5522de:{NFSU2_TR(0x5522de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5522e5:{NFSU2_TR(0x5522e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5522e6:{NFSU2_TR(0x5522e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5522e7:{NFSU2_TR(0x5522e7);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5522e9:{NFSU2_TR(0x5522e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5522eeull));
TAIL_STATIC(0x575620u,575);
}
B5522ee:L5522ee:{c.instructions+=7;NFSU2_TR(0x5522ee);
__builtin_memmove((R+24),(R+0),4);
}
B5522f0:{NFSU2_TR(0x5522f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5522f3:{NFSU2_TR(0x5522f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5522f7:{NFSU2_TR(0x5522f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5522f9:{NFSU2_TR(0x5522f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5522fb:{NFSU2_TR(0x5522fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5522ff:{NFSU2_TR(0x5522ff);
if(r1(R+518)){{goto L552315;}}
}
B552301:L552301:{c.instructions+=4;NFSU2_TR(0x552301);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552305:{NFSU2_TR(0x552305);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552306:{NFSU2_TR(0x552306);
__builtin_memmove((R+4),(R+24),4);
}
B552308:{NFSU2_TR(0x552308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55230dull));
TAIL_STATIC(0x551de0u,551);
}
B55230d:L55230d:{c.instructions+=2;NFSU2_TR(0x55230d);
u8 U[4];
w4(U+0,u32(0x79c948ull));
s4(u32(r4(R+24)),r4(U+0));
}
B552313:{NFSU2_TR(0x552313);
__builtin_memmove((R+0),(R+24),4);
}
B552315:L552315:{c.instructions+=5;NFSU2_TR(0x552315);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552319:{NFSU2_TR(0x552319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55231a:{NFSU2_TR(0x55231a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552321:{NFSU2_TR(0x552321);
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
B552324:{NFSU2_TR(0x552324);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552330:L552330:{c.instructions+=13;NFSU2_TR(0x552330);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552332:{NFSU2_TR(0x552332);
u8 U[4];
w4(U+0,u32(0x777c73ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552337:{NFSU2_TR(0x552337);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55233d:{NFSU2_TR(0x55233d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55233e:{NFSU2_TR(0x55233e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552345:{NFSU2_TR(0x552345);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552346:{NFSU2_TR(0x552346);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55234a:{NFSU2_TR(0x55234a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55234b:{NFSU2_TR(0x55234b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55234c:{NFSU2_TR(0x55234c);
__builtin_memmove((R+24),(R+4),4);
}
B55234e:{NFSU2_TR(0x55234e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55234f:{NFSU2_TR(0x55234f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552353:{NFSU2_TR(0x552353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552358ull));
TAIL_STATIC(0x551de0u,551);
}
B552358:L552358:{c.instructions+=12;NFSU2_TR(0x552358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55235b:{NFSU2_TR(0x55235b);
u8 U[4];
w4(U+0,u32(0x43f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552360:{NFSU2_TR(0x552360);
u8 U[4];
w4(U+0,u32(0x79c974ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552365:{NFSU2_TR(0x552365);
u8 U[4];
w4(U+0,u32(0x79c558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55236a:{NFSU2_TR(0x55236a);
u8 U[4];
w4(U+0,u32(0x79c968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55236f:{NFSU2_TR(0x55236f);
u8 U[4];
w4(U+0,u32(0x7954b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552374:{NFSU2_TR(0x552374);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B552376:{NFSU2_TR(0x552376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552377:{NFSU2_TR(0x552377);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55237a:{NFSU2_TR(0x55237a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55237e:{NFSU2_TR(0x55237e);
u8 U[4];
w4(U+0,u32(0x7974d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B552384:{NFSU2_TR(0x552384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552389ull));
TAIL_STATIC(0x543a90u,543);
}
B552389:L552389:{c.instructions+=11;NFSU2_TR(0x552389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55238c:{NFSU2_TR(0x55238c);
u8 U[4];
w4(U+0,u32(0x7978fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552391:{NFSU2_TR(0x552391);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552392:{NFSU2_TR(0x552392);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552397:{NFSU2_TR(0x552397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55239d:{NFSU2_TR(0x55239d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523a3:{NFSU2_TR(0x5523a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523a9:{NFSU2_TR(0x5523a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523af:{NFSU2_TR(0x5523af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523b5:{NFSU2_TR(0x5523b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523bb:{NFSU2_TR(0x5523bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5523c0ull));
TAIL_STATIC(0x4953c0u,495);
}
B5523c0:L5523c0:{c.instructions+=5;NFSU2_TR(0x5523c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523c6:{NFSU2_TR(0x5523c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5523c9:{NFSU2_TR(0x5523c9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5523ce:{NFSU2_TR(0x5523ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5523cf:{NFSU2_TR(0x5523cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5523d4ull));
TAIL_STATIC(0x4953c0u,495);
}
B5523d4:L5523d4:{c.instructions+=12;NFSU2_TR(0x5523d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5523d8:{NFSU2_TR(0x5523d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523de:{NFSU2_TR(0x5523de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5523e1:{NFSU2_TR(0x5523e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5523e4:{NFSU2_TR(0x5523e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5523ea:{NFSU2_TR(0x5523ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5523f1:{NFSU2_TR(0x5523f1);
__builtin_memmove((R+0),(R+24),4);
}
B5523f3:{NFSU2_TR(0x5523f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5523f4:{NFSU2_TR(0x5523f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5523f5:{NFSU2_TR(0x5523f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5523fc:{NFSU2_TR(0x5523fc);
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
B5523ff:{NFSU2_TR(0x5523ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552410:L552410:{c.instructions+=15;NFSU2_TR(0x552410);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552412:{NFSU2_TR(0x552412);
u8 U[4];
w4(U+0,u32(0x777c90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552417:{NFSU2_TR(0x552417);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55241d:{NFSU2_TR(0x55241d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55241e:{NFSU2_TR(0x55241e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552425:{NFSU2_TR(0x552425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B552428:{NFSU2_TR(0x552428);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55242c:{NFSU2_TR(0x55242c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55242d:{NFSU2_TR(0x55242d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55242e:{NFSU2_TR(0x55242e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55242f:{NFSU2_TR(0x55242f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552430:{NFSU2_TR(0x552430);
__builtin_memmove((R+24),(R+4),4);
}
B552432:{NFSU2_TR(0x552432);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552433:{NFSU2_TR(0x552433);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552437:{NFSU2_TR(0x552437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55243cull));
TAIL_STATIC(0x551de0u,551);
}
B55243c:L55243c:{c.instructions+=14;NFSU2_TR(0x55243c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55243f:{NFSU2_TR(0x55243f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B552441:{NFSU2_TR(0x552441);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552445:{NFSU2_TR(0x552445);
u8 U[4];
w4(U+0,u32(0x79c9a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55244b:{NFSU2_TR(0x55244b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55244e:{NFSU2_TR(0x55244e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552451:{NFSU2_TR(0x552451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552454:{NFSU2_TR(0x552454);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x1full));
s4(u32(r4(U+0)),r4(U+4));
}
B55245b:{NFSU2_TR(0x55245b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B552462:{NFSU2_TR(0x552462);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w2(U+4,u16(0x7bcull));
s2(u32(r4(U+0)),r2(U+4));
}
B552468:{NFSU2_TR(0x552468);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76ull))));
w2(U+4,u16(0x7dfull));
s2(u32(r4(U+0)),r2(U+4));
}
B55246e:{NFSU2_TR(0x55246e);
w4(R+4,u32(0x79c9a0ull));
}
B552473:{NFSU2_TR(0x552473);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B552476:{NFSU2_TR(0x552476);
w1(R+0,u8(0x44ull));
}
B552478:L552478:{c.instructions+=3;NFSU2_TR(0x552478);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B55247b:{NFSU2_TR(0x55247b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B55247d:{NFSU2_TR(0x55247d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L552485;}}
}
B55247f:L55247f:{c.instructions+=2;NFSU2_TR(0x55247f);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552481:{NFSU2_TR(0x552481);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L552485;}}
}
B552483:L552483:{c.instructions+=1;NFSU2_TR(0x552483);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B552485:L552485:{c.instructions+=6;NFSU2_TR(0x552485);
w4(R+8,u32(r1(R+0)));
}
B552488:{NFSU2_TR(0x552488);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55248b:{NFSU2_TR(0x55248b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B55248d:{NFSU2_TR(0x55248d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B55248e:{NFSU2_TR(0x55248e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552490:{NFSU2_TR(0x552490);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552478u);}goto L552478;}}
}
B552492:L552492:{c.instructions+=2;NFSU2_TR(0x552492);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552494:{NFSU2_TR(0x552494);
if(r1(R+518)){{goto L5524af;}}
}
B552496:L552496:{c.instructions+=2;NFSU2_TR(0x552496);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552497:{NFSU2_TR(0x552497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55249cull));
TAIL_STATIC(0x52cef0u,52c);
}
B55249c:L55249c:{c.instructions+=3;NFSU2_TR(0x55249c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55249f:{NFSU2_TR(0x55249f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5524a1:{NFSU2_TR(0x5524a1);
if(r1(R+518)){{goto L5524af;}}
}
B5524a3:L5524a3:{c.instructions+=3;NFSU2_TR(0x5524a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5524a4:{NFSU2_TR(0x5524a4);
__builtin_memmove((R+4),(R+0),4);
}
B5524a6:{NFSU2_TR(0x5524a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5524abull));
TAIL_STATIC(0x517f80u,517);
}
B5524ab:L5524ab:{c.instructions+=2;NFSU2_TR(0x5524ab);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5524ad:{NFSU2_TR(0x5524ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5524c6;}}
}
B5524af:L5524af:{c.instructions+=3;NFSU2_TR(0x5524af);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5524b4:{NFSU2_TR(0x5524b4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5524b6:{NFSU2_TR(0x5524b6);
if(r1(R+518)){{goto L5524c4;}}
}
B5524b8:L5524b8:{c.instructions+=4;NFSU2_TR(0x5524b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5524bb:{NFSU2_TR(0x5524bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5524bc:{NFSU2_TR(0x5524bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5524bd:{NFSU2_TR(0x5524bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5524c2ull));
TAIL_STATIC(0x52c570u,52c);
}
B5524c2:L5524c2:{c.instructions+=1;NFSU2_TR(0x5524c2);
{goto L5524c6;}
}
B5524c4:L5524c4:{c.instructions+=1;NFSU2_TR(0x5524c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5524c6:L5524c6:{c.instructions+=5;NFSU2_TR(0x5524c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5524c9:{NFSU2_TR(0x5524c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5524cc:{NFSU2_TR(0x5524cc);
w4(R+4,u32(0x79c998ull));
}
B5524d1:{NFSU2_TR(0x5524d1);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5524d4:{NFSU2_TR(0x5524d4);
w1(R+0,u8(0x44ull));
}
B5524d6:L5524d6:{c.instructions+=3;NFSU2_TR(0x5524d6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5524d9:{NFSU2_TR(0x5524d9);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5524db:{NFSU2_TR(0x5524db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5524e3;}}
}
B5524dd:L5524dd:{c.instructions+=2;NFSU2_TR(0x5524dd);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5524df:{NFSU2_TR(0x5524df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5524e3;}}
}
B5524e1:L5524e1:{c.instructions+=1;NFSU2_TR(0x5524e1);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B5524e3:L5524e3:{c.instructions+=6;NFSU2_TR(0x5524e3);
w4(R+0,u32(r1(R+0)));
}
B5524e6:{NFSU2_TR(0x5524e6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5524e8:{NFSU2_TR(0x5524e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5524eb:{NFSU2_TR(0x5524eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5524ec:{NFSU2_TR(0x5524ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5524ee:{NFSU2_TR(0x5524ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5524d6u);}goto L5524d6;}}
}
B5524f0:L5524f0:{c.instructions+=2;NFSU2_TR(0x5524f0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5524f2:{NFSU2_TR(0x5524f2);
if(r1(R+518)){{goto L55250d;}}
}
B5524f4:L5524f4:{c.instructions+=2;NFSU2_TR(0x5524f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5524f5:{NFSU2_TR(0x5524f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5524faull));
TAIL_STATIC(0x52cef0u,52c);
}
B5524fa:L5524fa:{c.instructions+=3;NFSU2_TR(0x5524fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5524fd:{NFSU2_TR(0x5524fd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5524ff:{NFSU2_TR(0x5524ff);
if(r1(R+518)){{goto L55250d;}}
}
B552501:L552501:{c.instructions+=3;NFSU2_TR(0x552501);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552502:{NFSU2_TR(0x552502);
__builtin_memmove((R+4),(R+0),4);
}
B552504:{NFSU2_TR(0x552504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552509ull));
TAIL_STATIC(0x517f80u,517);
}
B552509:L552509:{c.instructions+=2;NFSU2_TR(0x552509);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55250b:{NFSU2_TR(0x55250b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552524;}}
}
B55250d:L55250d:{c.instructions+=3;NFSU2_TR(0x55250d);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552512:{NFSU2_TR(0x552512);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552514:{NFSU2_TR(0x552514);
if(r1(R+518)){{goto L552522;}}
}
B552516:L552516:{c.instructions+=4;NFSU2_TR(0x552516);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552519:{NFSU2_TR(0x552519);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55251a:{NFSU2_TR(0x55251a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55251b:{NFSU2_TR(0x55251b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552520ull));
TAIL_STATIC(0x52c570u,52c);
}
B552520:L552520:{c.instructions+=1;NFSU2_TR(0x552520);
{goto L552524;}
}
B552522:L552522:{c.instructions+=1;NFSU2_TR(0x552522);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552524:L552524:{c.instructions+=5;NFSU2_TR(0x552524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B552527:{NFSU2_TR(0x552527);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55252a:{NFSU2_TR(0x55252a);
w4(R+4,u32(0x79c990ull));
}
B55252f:{NFSU2_TR(0x55252f);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B552532:{NFSU2_TR(0x552532);
w1(R+0,u8(0x44ull));
}
B552534:L552534:{c.instructions+=3;NFSU2_TR(0x552534);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B552537:{NFSU2_TR(0x552537);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B552539:{NFSU2_TR(0x552539);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L552541;}}
}
B55253b:L55253b:{c.instructions+=2;NFSU2_TR(0x55253b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55253d:{NFSU2_TR(0x55253d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L552541;}}
}
B55253f:L55253f:{c.instructions+=1;NFSU2_TR(0x55253f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B552541:L552541:{c.instructions+=6;NFSU2_TR(0x552541);
w4(R+8,u32(r1(R+0)));
}
B552544:{NFSU2_TR(0x552544);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B552547:{NFSU2_TR(0x552547);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B552549:{NFSU2_TR(0x552549);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B55254a:{NFSU2_TR(0x55254a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55254c:{NFSU2_TR(0x55254c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552534u);}goto L552534;}}
}
B55254e:L55254e:{c.instructions+=2;NFSU2_TR(0x55254e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552550:{NFSU2_TR(0x552550);
if(r1(R+518)){{goto L55256b;}}
}
B552552:L552552:{c.instructions+=2;NFSU2_TR(0x552552);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552553:{NFSU2_TR(0x552553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552558ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552558:L552558:{c.instructions+=3;NFSU2_TR(0x552558);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55255b:{NFSU2_TR(0x55255b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55255d:{NFSU2_TR(0x55255d);
if(r1(R+518)){{goto L55256b;}}
}
B55255f:L55255f:{c.instructions+=3;NFSU2_TR(0x55255f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552560:{NFSU2_TR(0x552560);
__builtin_memmove((R+4),(R+0),4);
}
B552562:{NFSU2_TR(0x552562);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552567ull));
TAIL_STATIC(0x517f80u,517);
}
B552567:L552567:{c.instructions+=2;NFSU2_TR(0x552567);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552569:{NFSU2_TR(0x552569);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552582;}}
}
B55256b:L55256b:{c.instructions+=3;NFSU2_TR(0x55256b);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552570:{NFSU2_TR(0x552570);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552572:{NFSU2_TR(0x552572);
if(r1(R+518)){{goto L552580;}}
}
B552574:L552574:{c.instructions+=4;NFSU2_TR(0x552574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552577:{NFSU2_TR(0x552577);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552578:{NFSU2_TR(0x552578);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552579:{NFSU2_TR(0x552579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55257eull));
TAIL_STATIC(0x52c570u,52c);
}
B55257e:L55257e:{c.instructions+=1;NFSU2_TR(0x55257e);
{goto L552582;}
}
B552580:L552580:{c.instructions+=1;NFSU2_TR(0x552580);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552582:L552582:{c.instructions+=10;NFSU2_TR(0x552582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552585:{NFSU2_TR(0x552585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552588:{NFSU2_TR(0x552588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55258b:{NFSU2_TR(0x55258b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55258e:{NFSU2_TR(0x55258e);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552592:{NFSU2_TR(0x552592);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552594:{NFSU2_TR(0x552594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552597:{NFSU2_TR(0x552597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55259a:{NFSU2_TR(0x55259a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55259d:{NFSU2_TR(0x55259d);
if(r1(R+518)){{goto L5525a4;}}
}
B55259f:L55259f:{c.instructions+=2;NFSU2_TR(0x55259f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5525a2:{NFSU2_TR(0x5525a2);
{goto L5525a6;}
}
B5525a4:L5525a4:{c.instructions+=1;NFSU2_TR(0x5525a4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5525a6:L5525a6:{c.instructions+=3;NFSU2_TR(0x5525a6);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5525a8:{NFSU2_TR(0x5525a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5525ab:{NFSU2_TR(0x5525ab);
if(r1(R+518)){{goto L5525ef;}}
}
B5525ad:L5525ad:{c.instructions+=8;NFSU2_TR(0x5525ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5525b0:{NFSU2_TR(0x5525b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5525b3:{NFSU2_TR(0x5525b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5525b6:{NFSU2_TR(0x5525b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5525b9:{NFSU2_TR(0x5525b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5525bd:{NFSU2_TR(0x5525bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5525c1:{NFSU2_TR(0x5525c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5525c3:{NFSU2_TR(0x5525c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5525c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5525c6:L5525c6:{c.instructions+=5;NFSU2_TR(0x5525c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5525ca:{NFSU2_TR(0x5525ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5525cd:{NFSU2_TR(0x5525cd);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5525d2:{NFSU2_TR(0x5525d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5525d3:{NFSU2_TR(0x5525d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5525d8ull));
TAIL_STATIC(0x4953a0u,495);
}
B5525d8:L5525d8:{c.instructions+=5;NFSU2_TR(0x5525d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5525db:{NFSU2_TR(0x5525db);
__builtin_memmove((R+28),(R+0),4);
}
B5525dd:{NFSU2_TR(0x5525dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5525df:{NFSU2_TR(0x5525df);
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
B5525e2:{NFSU2_TR(0x5525e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5525e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5525e5:L5525e5:{c.instructions+=3;NFSU2_TR(0x5525e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5525e6:{NFSU2_TR(0x5525e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5525e7:{NFSU2_TR(0x5525e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5525ecull));
TAIL_STATIC(0x537be0u,537);
}
B5525ec:L5525ec:{c.instructions+=1;NFSU2_TR(0x5525ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5525ef:L5525ef:{c.instructions+=3;NFSU2_TR(0x5525ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5525f2:{NFSU2_TR(0x5525f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5525f4:{NFSU2_TR(0x5525f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5525f8:L5525f8:{c.instructions+=6;NFSU2_TR(0x5525f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5525fb:{NFSU2_TR(0x5525fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5525fc:{NFSU2_TR(0x5525fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B552600:{NFSU2_TR(0x552600);
u8 U[4];
w4(U+0,u32(0x79c97cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552605:{NFSU2_TR(0x552605);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552606:{NFSU2_TR(0x552606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55260bull));
TAIL_STATIC(0x4400d0u,440);
}
B55260b:L55260b:{c.instructions+=7;NFSU2_TR(0x55260b);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55260f:{NFSU2_TR(0x55260f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B552612:{NFSU2_TR(0x552612);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B552615:{NFSU2_TR(0x552615);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B552618:{NFSU2_TR(0x552618);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55261a:{NFSU2_TR(0x55261a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55261e:{NFSU2_TR(0x55261e);
if(r1(R+518)){{goto L55263a;}}
}
B552620:L552620:{c.instructions+=3;NFSU2_TR(0x552620);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B552623:{NFSU2_TR(0x552623);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B552625:{NFSU2_TR(0x552625);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55262d;}}
}
B552627:L552627:{c.instructions+=2;NFSU2_TR(0x552627);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552629:{NFSU2_TR(0x552629);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L55262d;}}
}
B55262b:L55262b:{c.instructions+=1;NFSU2_TR(0x55262b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B55262d:L55262d:{c.instructions+=6;NFSU2_TR(0x55262d);
w4(R+0,u32(r1(R+0)));
}
B552630:{NFSU2_TR(0x552630);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B552632:{NFSU2_TR(0x552632);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B552635:{NFSU2_TR(0x552635);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B552636:{NFSU2_TR(0x552636);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552638:{NFSU2_TR(0x552638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552620u);}goto L552620;}}
}
B55263a:L55263a:{c.instructions+=2;NFSU2_TR(0x55263a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55263c:{NFSU2_TR(0x55263c);
if(r1(R+518)){{goto L552685;}}
}
B55263e:L55263e:{c.instructions+=2;NFSU2_TR(0x55263e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55263f:{NFSU2_TR(0x55263f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552644ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552644:L552644:{c.instructions+=3;NFSU2_TR(0x552644);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552647:{NFSU2_TR(0x552647);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552649:{NFSU2_TR(0x552649);
if(r1(R+518)){{goto L552685;}}
}
B55264b:L55264b:{c.instructions+=8;NFSU2_TR(0x55264b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552653:{NFSU2_TR(0x552653);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B552657:{NFSU2_TR(0x552657);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552658:{NFSU2_TR(0x552658);
__builtin_memmove((R+4),(R+0),4);
}
B55265a:{NFSU2_TR(0x55265a);
u8 U[5];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55265f:{NFSU2_TR(0x55265f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552663:{NFSU2_TR(0x552663);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55266b:{NFSU2_TR(0x55266b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552670ull));
TAIL_STATIC(0x504880u,504);
}
B552670:L552670:{c.instructions+=5;NFSU2_TR(0x552670);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552674:{NFSU2_TR(0x552674);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552676:{NFSU2_TR(0x552676);
u8 U[5];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55267b:{NFSU2_TR(0x55267b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B552683:{NFSU2_TR(0x552683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55269c;}}
}
B552685:L552685:{c.instructions+=3;NFSU2_TR(0x552685);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55268a:{NFSU2_TR(0x55268a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55268c:{NFSU2_TR(0x55268c);
if(r1(R+518)){{goto L55269a;}}
}
B55268e:L55268e:{c.instructions+=4;NFSU2_TR(0x55268e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552691:{NFSU2_TR(0x552691);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552692:{NFSU2_TR(0x552692);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552693:{NFSU2_TR(0x552693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552698ull));
TAIL_STATIC(0x52c570u,52c);
}
B552698:L552698:{c.instructions+=1;NFSU2_TR(0x552698);
{goto L55269c;}
}
B55269a:L55269a:{c.instructions+=1;NFSU2_TR(0x55269a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55269c:L55269c:{c.instructions+=7;NFSU2_TR(0x55269c);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5526a0:{NFSU2_TR(0x5526a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5526a2:{NFSU2_TR(0x5526a2);
__builtin_memmove((R+0),(R+20),4);
}
B5526a4:{NFSU2_TR(0x5526a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5526a7:{NFSU2_TR(0x5526a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5526aa:{NFSU2_TR(0x5526aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5526ae:{NFSU2_TR(0x5526ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5525f8u);}goto L5525f8;}}
}
B5526b4:L5526b4:{c.instructions+=3;NFSU2_TR(0x5526b4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5526b6:{NFSU2_TR(0x5526b6);
__builtin_memmove((R+4),(R+24),4);
}
B5526b8:{NFSU2_TR(0x5526b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5526bdull));
TAIL_STATIC(0x538d80u,538);
}
B5526bd:L5526bd:{c.instructions+=10;NFSU2_TR(0x5526bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5526c1:{NFSU2_TR(0x5526c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5526c2:{NFSU2_TR(0x5526c2);
__builtin_memmove(gp(0x838534),(R+24),4);
}
B5526c8:{NFSU2_TR(0x5526c8);
__builtin_memmove((R+0),(R+24),4);
}
B5526ca:{NFSU2_TR(0x5526ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5526cb:{NFSU2_TR(0x5526cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5526cc:{NFSU2_TR(0x5526cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5526cd:{NFSU2_TR(0x5526cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5526d4:{NFSU2_TR(0x5526d4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x5cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x5cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5526d7:{NFSU2_TR(0x5526d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5526e0:L5526e0:{c.instructions+=3;NFSU2_TR(0x5526e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5526e1:{NFSU2_TR(0x5526e1);
__builtin_memmove((R+24),(R+4),4);
}
B5526e3:{NFSU2_TR(0x5526e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5526e8ull));
{goto L552700;}
}
B5526e8:L5526e8:{c.instructions+=2;NFSU2_TR(0x5526e8);
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
B5526ed:{NFSU2_TR(0x5526ed);
if(r1(R+518)){{goto L5526f8;}}
}
B5526ef:L5526ef:{c.instructions+=2;NFSU2_TR(0x5526ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5526f0:{NFSU2_TR(0x5526f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5526f5ull));
TAIL_STATIC(0x575630u,575);
}
B5526f5:L5526f5:{c.instructions+=1;NFSU2_TR(0x5526f5);
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
B5526f8:L5526f8:{c.instructions+=3;NFSU2_TR(0x5526f8);
__builtin_memmove((R+0),(R+24),4);
}
B5526fa:{NFSU2_TR(0x5526fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5526fb:{NFSU2_TR(0x5526fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552700:L552700:{c.instructions+=3;NFSU2_TR(0x552700);
s4(0x838534,u32(0x0ull));
}
B55270a:{NFSU2_TR(0x55270a);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+4)),r4(U+0));
}
B552710:{NFSU2_TR(0x552710);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552720:L552720:{c.instructions+=8;NFSU2_TR(0x552720);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552722:{NFSU2_TR(0x552722);
u8 U[4];
w4(U+0,u32(0x777cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552727:{NFSU2_TR(0x552727);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55272d:{NFSU2_TR(0x55272d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55272e:{NFSU2_TR(0x55272e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552735:{NFSU2_TR(0x552735);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552736:{NFSU2_TR(0x552736);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55273b:{NFSU2_TR(0x55273b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552740ull));
TAIL_STATIC(0x575620u,575);
}
B552740:L552740:{c.instructions+=5;NFSU2_TR(0x552740);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552743:{NFSU2_TR(0x552743);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B552747:{NFSU2_TR(0x552747);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552749:{NFSU2_TR(0x552749);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552751:{NFSU2_TR(0x552751);
if(r1(R+518)){{goto L55276e;}}
}
B552753:L552753:{c.instructions+=4;NFSU2_TR(0x552753);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552757:{NFSU2_TR(0x552757);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552758:{NFSU2_TR(0x552758);
__builtin_memmove((R+4),(R+0),4);
}
B55275a:{NFSU2_TR(0x55275a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55275full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552410u);}goto L552410;}
}
B55275f:L55275f:{c.instructions+=4;NFSU2_TR(0x55275f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552763:{NFSU2_TR(0x552763);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55276a:{NFSU2_TR(0x55276a);
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
B55276d:{NFSU2_TR(0x55276d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55276e:L55276e:{c.instructions+=5;NFSU2_TR(0x55276e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552772:{NFSU2_TR(0x552772);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552774:{NFSU2_TR(0x552774);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55277b:{NFSU2_TR(0x55277b);
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
B55277e:{NFSU2_TR(0x55277e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552780:L552780:{c.instructions+=15;NFSU2_TR(0x552780);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552782:{NFSU2_TR(0x552782);
u8 U[4];
w4(U+0,u32(0x777cd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552787:{NFSU2_TR(0x552787);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55278d:{NFSU2_TR(0x55278d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55278e:{NFSU2_TR(0x55278e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552795:{NFSU2_TR(0x552795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552796:{NFSU2_TR(0x552796);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55279a:{NFSU2_TR(0x55279a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55279b:{NFSU2_TR(0x55279b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55279c:{NFSU2_TR(0x55279c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55279d:{NFSU2_TR(0x55279d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55279e:{NFSU2_TR(0x55279e);
__builtin_memmove((R+24),(R+4),4);
}
B5527a0:{NFSU2_TR(0x5527a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5527a1:{NFSU2_TR(0x5527a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527a5:{NFSU2_TR(0x5527a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5527aaull));
TAIL_STATIC(0x551de0u,551);
}
B5527aa:L5527aa:{c.instructions+=22;NFSU2_TR(0x5527aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5527ad:{NFSU2_TR(0x5527ad);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5527af:{NFSU2_TR(0x5527af);
u8 U[4];
w4(U+0,u32(0x795cdcull));
s4(u32(r4(R+24)),r4(U+0));
}
B5527b5:{NFSU2_TR(0x5527b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527b9:{NFSU2_TR(0x5527b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5527bb:{NFSU2_TR(0x5527bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527be:{NFSU2_TR(0x5527be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5527c1:{NFSU2_TR(0x5527c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5527c2:{NFSU2_TR(0x5527c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5527c3:{NFSU2_TR(0x5527c3);
w4(R+28,u32(0x1ull));
}
B5527c8:{NFSU2_TR(0x5527c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5527c9:{NFSU2_TR(0x5527c9);
u8 U[4];
w4(U+0,u32(0x7978e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5527ce:{NFSU2_TR(0x5527ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5527d1:{NFSU2_TR(0x5527d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5527d2:{NFSU2_TR(0x5527d2);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5527d7:{NFSU2_TR(0x5527d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527da:{NFSU2_TR(0x5527da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527dd:{NFSU2_TR(0x5527dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527e0:{NFSU2_TR(0x5527e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527e3:{NFSU2_TR(0x5527e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527e6:{NFSU2_TR(0x5527e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5527e9:{NFSU2_TR(0x5527e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5527eeull));
TAIL_STATIC(0x542ac0u,542);
}
B5527ee:L5527ee:{c.instructions+=44;NFSU2_TR(0x5527ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x797dd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5527f8:{NFSU2_TR(0x5527f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x797dc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552802:{NFSU2_TR(0x552802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w4(U+4,u32(0x79ca48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55280c:{NFSU2_TR(0x55280c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w4(U+4,u32(0x79ca38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552816:{NFSU2_TR(0x552816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0x79ca2cull));
s4(u32(r4(U+0)),r4(U+4));
}
B552820:{NFSU2_TR(0x552820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x79ca1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B55282a:{NFSU2_TR(0x55282a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w4(U+4,u32(0x79ca0cull));
s4(u32(r4(U+0)),r4(U+4));
}
B552834:{NFSU2_TR(0x552834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x79c9fcull));
s4(u32(r4(U+0)),r4(U+4));
}
B55283e:{NFSU2_TR(0x55283e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x79c9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B552848:{NFSU2_TR(0x552848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x79c9dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B552852:{NFSU2_TR(0x552852);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x79c9d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55285c:{NFSU2_TR(0x55285c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0x79c9c4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552866:{NFSU2_TR(0x552866);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55286c:{NFSU2_TR(0x55286c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552872:{NFSU2_TR(0x552872);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552878:{NFSU2_TR(0x552878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55287e:{NFSU2_TR(0x55287e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552884:{NFSU2_TR(0x552884);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55288a:{NFSU2_TR(0x55288a);
w4(R+4,u32(0x432f0000ull));
}
B55288f:{NFSU2_TR(0x55288f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552895:{NFSU2_TR(0x552895);
w4(R+0,u32(0x41c00000ull));
}
B55289a:{NFSU2_TR(0x55289a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528a0:{NFSU2_TR(0x5528a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528a6:{NFSU2_TR(0x5528a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528ac:{NFSU2_TR(0x5528ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528b2:{NFSU2_TR(0x5528b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528b8:{NFSU2_TR(0x5528b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x40800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5528c2:{NFSU2_TR(0x5528c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528c8:{NFSU2_TR(0x5528c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5528cb:{NFSU2_TR(0x5528cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528d1:{NFSU2_TR(0x5528d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528d7:{NFSU2_TR(0x5528d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5528e1:{NFSU2_TR(0x5528e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528e7:{NFSU2_TR(0x5528e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528ed:{NFSU2_TR(0x5528ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5528f3:{NFSU2_TR(0x5528f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5528f9:{NFSU2_TR(0x5528f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x145ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5528ff:{NFSU2_TR(0x5528ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x146ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552906:{NFSU2_TR(0x552906);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x147ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55290c:{NFSU2_TR(0x55290c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552913:{NFSU2_TR(0x552913);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x149ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55291a:{NFSU2_TR(0x55291a);
w4(R+4,u32(0x797da4ull));
}
B55291f:{NFSU2_TR(0x55291f);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B552922:{NFSU2_TR(0x552922);
w1(R+0,u8(0x54ull));
}
B552924:L552924:{c.instructions+=3;NFSU2_TR(0x552924);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B552927:{NFSU2_TR(0x552927);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B552929:{NFSU2_TR(0x552929);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L552931;}}
}
B55292b:L55292b:{c.instructions+=2;NFSU2_TR(0x55292b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55292d:{NFSU2_TR(0x55292d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L552931;}}
}
B55292f:L55292f:{c.instructions+=1;NFSU2_TR(0x55292f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B552931:L552931:{c.instructions+=6;NFSU2_TR(0x552931);
w4(R+0,u32(r1(R+0)));
}
B552934:{NFSU2_TR(0x552934);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B552936:{NFSU2_TR(0x552936);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B552939:{NFSU2_TR(0x552939);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B55293a:{NFSU2_TR(0x55293a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B55293c:{NFSU2_TR(0x55293c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552924u);}goto L552924;}}
}
B55293e:L55293e:{c.instructions+=2;NFSU2_TR(0x55293e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552940:{NFSU2_TR(0x552940);
if(r1(R+518)){{goto L55295b;}}
}
B552942:L552942:{c.instructions+=2;NFSU2_TR(0x552942);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552943:{NFSU2_TR(0x552943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552948ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552948:L552948:{c.instructions+=3;NFSU2_TR(0x552948);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55294b:{NFSU2_TR(0x55294b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55294d:{NFSU2_TR(0x55294d);
if(r1(R+518)){{goto L55295b;}}
}
B55294f:L55294f:{c.instructions+=3;NFSU2_TR(0x55294f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552950:{NFSU2_TR(0x552950);
__builtin_memmove((R+4),(R+0),4);
}
B552952:{NFSU2_TR(0x552952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552957ull));
TAIL_STATIC(0x517f80u,517);
}
B552957:L552957:{c.instructions+=2;NFSU2_TR(0x552957);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552959:{NFSU2_TR(0x552959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552972;}}
}
B55295b:L55295b:{c.instructions+=3;NFSU2_TR(0x55295b);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552960:{NFSU2_TR(0x552960);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552962:{NFSU2_TR(0x552962);
if(r1(R+518)){{goto L552970;}}
}
B552964:L552964:{c.instructions+=4;NFSU2_TR(0x552964);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552967:{NFSU2_TR(0x552967);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552968:{NFSU2_TR(0x552968);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552969:{NFSU2_TR(0x552969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55296eull));
TAIL_STATIC(0x52c570u,52c);
}
B55296e:L55296e:{c.instructions+=1;NFSU2_TR(0x55296e);
{goto L552972;}
}
B552970:L552970:{c.instructions+=1;NFSU2_TR(0x552970);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552972:L552972:{c.instructions+=5;NFSU2_TR(0x552972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B552975:{NFSU2_TR(0x552975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552978:{NFSU2_TR(0x552978);
w4(R+4,u32(0x797d98ull));
}
B55297d:{NFSU2_TR(0x55297d);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B552980:{NFSU2_TR(0x552980);
w1(R+0,u8(0x44ull));
}
B552982:L552982:{c.instructions+=3;NFSU2_TR(0x552982);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B552985:{NFSU2_TR(0x552985);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B552987:{NFSU2_TR(0x552987);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55298f;}}
}
B552989:L552989:{c.instructions+=2;NFSU2_TR(0x552989);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55298b:{NFSU2_TR(0x55298b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L55298f;}}
}
B55298d:L55298d:{c.instructions+=1;NFSU2_TR(0x55298d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B55298f:L55298f:{c.instructions+=6;NFSU2_TR(0x55298f);
w4(R+8,u32(r1(R+0)));
}
B552992:{NFSU2_TR(0x552992);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B552995:{NFSU2_TR(0x552995);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B552997:{NFSU2_TR(0x552997);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B552998:{NFSU2_TR(0x552998);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B55299a:{NFSU2_TR(0x55299a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552982u);}goto L552982;}}
}
B55299c:L55299c:{c.instructions+=2;NFSU2_TR(0x55299c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55299e:{NFSU2_TR(0x55299e);
if(r1(R+518)){{goto L5529b9;}}
}
B5529a0:L5529a0:{c.instructions+=2;NFSU2_TR(0x5529a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5529a1:{NFSU2_TR(0x5529a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5529a6ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5529a6:L5529a6:{c.instructions+=3;NFSU2_TR(0x5529a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5529a9:{NFSU2_TR(0x5529a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5529ab:{NFSU2_TR(0x5529ab);
if(r1(R+518)){{goto L5529b9;}}
}
B5529ad:L5529ad:{c.instructions+=3;NFSU2_TR(0x5529ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5529ae:{NFSU2_TR(0x5529ae);
__builtin_memmove((R+4),(R+0),4);
}
B5529b0:{NFSU2_TR(0x5529b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5529b5ull));
TAIL_STATIC(0x517f80u,517);
}
B5529b5:L5529b5:{c.instructions+=2;NFSU2_TR(0x5529b5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5529b7:{NFSU2_TR(0x5529b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5529d0;}}
}
B5529b9:L5529b9:{c.instructions+=3;NFSU2_TR(0x5529b9);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5529be:{NFSU2_TR(0x5529be);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5529c0:{NFSU2_TR(0x5529c0);
if(r1(R+518)){{goto L5529ce;}}
}
B5529c2:L5529c2:{c.instructions+=4;NFSU2_TR(0x5529c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5529c5:{NFSU2_TR(0x5529c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5529c6:{NFSU2_TR(0x5529c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5529c7:{NFSU2_TR(0x5529c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5529ccull));
TAIL_STATIC(0x52c570u,52c);
}
B5529cc:L5529cc:{c.instructions+=1;NFSU2_TR(0x5529cc);
{goto L5529d0;}
}
B5529ce:L5529ce:{c.instructions+=1;NFSU2_TR(0x5529ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5529d0:L5529d0:{c.instructions+=5;NFSU2_TR(0x5529d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5529d3:{NFSU2_TR(0x5529d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5529d6:{NFSU2_TR(0x5529d6);
w4(R+4,u32(0x797d7cull));
}
B5529db:{NFSU2_TR(0x5529db);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5529de:{NFSU2_TR(0x5529de);
w1(R+0,u8(0x44ull));
}
B5529e0:L5529e0:{c.instructions+=3;NFSU2_TR(0x5529e0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5529e3:{NFSU2_TR(0x5529e3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5529e5:{NFSU2_TR(0x5529e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5529ed;}}
}
B5529e7:L5529e7:{c.instructions+=2;NFSU2_TR(0x5529e7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5529e9:{NFSU2_TR(0x5529e9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5529ed;}}
}
B5529eb:L5529eb:{c.instructions+=1;NFSU2_TR(0x5529eb);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B5529ed:L5529ed:{c.instructions+=6;NFSU2_TR(0x5529ed);
w4(R+0,u32(r1(R+0)));
}
B5529f0:{NFSU2_TR(0x5529f0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5529f2:{NFSU2_TR(0x5529f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5529f5:{NFSU2_TR(0x5529f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5529f6:{NFSU2_TR(0x5529f6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5529f8:{NFSU2_TR(0x5529f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5529e0u);}goto L5529e0;}}
}
B5529fa:L5529fa:{c.instructions+=2;NFSU2_TR(0x5529fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5529fc:{NFSU2_TR(0x5529fc);
if(r1(R+518)){{goto L552a17;}}
}
B5529fe:L5529fe:{c.instructions+=2;NFSU2_TR(0x5529fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5529ff:{NFSU2_TR(0x5529ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552a04ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552a04:L552a04:{c.instructions+=3;NFSU2_TR(0x552a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552a07:{NFSU2_TR(0x552a07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552a09:{NFSU2_TR(0x552a09);
if(r1(R+518)){{goto L552a17;}}
}
B552a0b:L552a0b:{c.instructions+=3;NFSU2_TR(0x552a0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a0c:{NFSU2_TR(0x552a0c);
__builtin_memmove((R+4),(R+0),4);
}
B552a0e:{NFSU2_TR(0x552a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552a13ull));
TAIL_STATIC(0x517f80u,517);
}
B552a13:L552a13:{c.instructions+=2;NFSU2_TR(0x552a13);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552a15:{NFSU2_TR(0x552a15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552a2e;}}
}
B552a17:L552a17:{c.instructions+=3;NFSU2_TR(0x552a17);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552a1c:{NFSU2_TR(0x552a1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552a1e:{NFSU2_TR(0x552a1e);
if(r1(R+518)){{goto L552a2c;}}
}
B552a20:L552a20:{c.instructions+=4;NFSU2_TR(0x552a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552a23:{NFSU2_TR(0x552a23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a24:{NFSU2_TR(0x552a24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a25:{NFSU2_TR(0x552a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552a2aull));
TAIL_STATIC(0x52c570u,52c);
}
B552a2a:L552a2a:{c.instructions+=1;NFSU2_TR(0x552a2a);
{goto L552a2e;}
}
B552a2c:L552a2c:{c.instructions+=1;NFSU2_TR(0x552a2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552a2e:L552a2e:{c.instructions+=3;NFSU2_TR(0x552a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552a31:{NFSU2_TR(0x552a31);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B552a34:{NFSU2_TR(0x552a34);
if(r1(R+518)){{goto L552a6c;}}
}
B552a36:L552a36:{c.instructions+=2;NFSU2_TR(0x552a36);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B552a39:{NFSU2_TR(0x552a39);
if(r1(R+518)){{goto L552a6c;}}
}
B552a3b:L552a3b:{c.instructions+=3;NFSU2_TR(0x552a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552a41:{NFSU2_TR(0x552a41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a42:{NFSU2_TR(0x552a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552a47ull));
TAIL_STATIC(0x50ca00u,50c);
}
B552a47:L552a47:{c.instructions+=3;NFSU2_TR(0x552a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552a4d:{NFSU2_TR(0x552a4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a4e:{NFSU2_TR(0x552a4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552a53ull));
TAIL_STATIC(0x50ca00u,50c);
}
B552a53:L552a53:{c.instructions+=3;NFSU2_TR(0x552a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552a59:{NFSU2_TR(0x552a59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a5a:{NFSU2_TR(0x552a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552a5full));
TAIL_STATIC(0x50ca00u,50c);
}
B552a5f:L552a5f:{c.instructions+=3;NFSU2_TR(0x552a5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B552a62:{NFSU2_TR(0x552a62);
__builtin_memmove((R+4),(R+24),4);
}
B552a64:{NFSU2_TR(0x552a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552a69ull));
TAIL_STATIC(0x51ff80u,51f);
}
B552a69:L552a69:{c.instructions+=1;NFSU2_TR(0x552a69);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B552a6c:L552a6c:{c.instructions+=9;NFSU2_TR(0x552a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552a70:{NFSU2_TR(0x552a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B552a71:{NFSU2_TR(0x552a71);
__builtin_memmove((R+0),(R+24),4);
}
B552a73:{NFSU2_TR(0x552a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552a74:{NFSU2_TR(0x552a74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B552a75:{NFSU2_TR(0x552a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B552a76:{NFSU2_TR(0x552a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552a7d:{NFSU2_TR(0x552a7d);
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
B552a80:{NFSU2_TR(0x552a80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552a90:L552a90:{c.instructions+=14;NFSU2_TR(0x552a90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a92:{NFSU2_TR(0x552a92);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a97:{NFSU2_TR(0x552a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552a9d:{NFSU2_TR(0x552a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552a9e:{NFSU2_TR(0x552a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552aa5:{NFSU2_TR(0x552aa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552aa6:{NFSU2_TR(0x552aa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552aaa:{NFSU2_TR(0x552aaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552aab:{NFSU2_TR(0x552aab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552aac:{NFSU2_TR(0x552aac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552aad:{NFSU2_TR(0x552aad);
__builtin_memmove((R+28),(R+4),4);
}
B552aaf:{NFSU2_TR(0x552aaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ab0:{NFSU2_TR(0x552ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552ab4:{NFSU2_TR(0x552ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552ab9ull));
TAIL_STATIC(0x551de0u,551);
}
B552ab9:L552ab9:{c.instructions+=6;NFSU2_TR(0x552ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B552abc:{NFSU2_TR(0x552abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552ac4:{NFSU2_TR(0x552ac4);
u8 U[4];
w4(U+0,u32(0x78f578ull));
s4(u32(r4(R+28)),r4(U+0));
}
B552aca:{NFSU2_TR(0x552aca);
w4(R+4,u32(0x78fcf8ull));
}
B552acf:{NFSU2_TR(0x552acf);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B552ad2:{NFSU2_TR(0x552ad2);
w1(R+0,u8(0x6dull));
}
B552ad4:L552ad4:{c.instructions+=3;NFSU2_TR(0x552ad4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B552ad7:{NFSU2_TR(0x552ad7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B552ad9:{NFSU2_TR(0x552ad9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L552ae1;}}
}
B552adb:L552adb:{c.instructions+=2;NFSU2_TR(0x552adb);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552add:{NFSU2_TR(0x552add);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L552ae1;}}
}
B552adf:L552adf:{c.instructions+=1;NFSU2_TR(0x552adf);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B552ae1:L552ae1:{c.instructions+=6;NFSU2_TR(0x552ae1);
w4(R+8,u32(r1(R+0)));
}
B552ae4:{NFSU2_TR(0x552ae4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B552ae7:{NFSU2_TR(0x552ae7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B552ae9:{NFSU2_TR(0x552ae9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B552aea:{NFSU2_TR(0x552aea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552aec:{NFSU2_TR(0x552aec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552ad4u);}goto L552ad4;}}
}
B552aee:L552aee:{c.instructions+=2;NFSU2_TR(0x552aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552af0:{NFSU2_TR(0x552af0);
if(r1(R+518)){{goto L552b0b;}}
}
B552af2:L552af2:{c.instructions+=2;NFSU2_TR(0x552af2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552af3:{NFSU2_TR(0x552af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552af8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552af8:L552af8:{c.instructions+=3;NFSU2_TR(0x552af8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552afb:{NFSU2_TR(0x552afb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552afd:{NFSU2_TR(0x552afd);
if(r1(R+518)){{goto L552b0b;}}
}
B552aff:L552aff:{c.instructions+=3;NFSU2_TR(0x552aff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b00:{NFSU2_TR(0x552b00);
__builtin_memmove((R+4),(R+0),4);
}
B552b02:{NFSU2_TR(0x552b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552b07ull));
TAIL_STATIC(0x517f80u,517);
}
B552b07:L552b07:{c.instructions+=2;NFSU2_TR(0x552b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b09:{NFSU2_TR(0x552b09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552b22;}}
}
B552b0b:L552b0b:{c.instructions+=3;NFSU2_TR(0x552b0b);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552b10:{NFSU2_TR(0x552b10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b12:{NFSU2_TR(0x552b12);
if(r1(R+518)){{goto L552b20;}}
}
B552b14:L552b14:{c.instructions+=4;NFSU2_TR(0x552b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552b17:{NFSU2_TR(0x552b17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b18:{NFSU2_TR(0x552b18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b19:{NFSU2_TR(0x552b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552b1eull));
TAIL_STATIC(0x52c570u,52c);
}
B552b1e:L552b1e:{c.instructions+=1;NFSU2_TR(0x552b1e);
{goto L552b22;}
}
B552b20:L552b20:{c.instructions+=1;NFSU2_TR(0x552b20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552b22:L552b22:{c.instructions+=5;NFSU2_TR(0x552b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B552b25:{NFSU2_TR(0x552b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552b28:{NFSU2_TR(0x552b28);
w4(R+4,u32(0x79ca58ull));
}
B552b2d:{NFSU2_TR(0x552b2d);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B552b30:{NFSU2_TR(0x552b30);
w1(R+0,u8(0x48ull));
}
B552b32:L552b32:{c.instructions+=3;NFSU2_TR(0x552b32);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B552b35:{NFSU2_TR(0x552b35);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B552b37:{NFSU2_TR(0x552b37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L552b3f;}}
}
B552b39:L552b39:{c.instructions+=2;NFSU2_TR(0x552b39);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552b3b:{NFSU2_TR(0x552b3b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L552b3f;}}
}
B552b3d:L552b3d:{c.instructions+=1;NFSU2_TR(0x552b3d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B552b3f:L552b3f:{c.instructions+=6;NFSU2_TR(0x552b3f);
w4(R+0,u32(r1(R+0)));
}
B552b42:{NFSU2_TR(0x552b42);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B552b44:{NFSU2_TR(0x552b44);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B552b47:{NFSU2_TR(0x552b47);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B552b48:{NFSU2_TR(0x552b48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552b4a:{NFSU2_TR(0x552b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552b32u);}goto L552b32;}}
}
B552b4c:L552b4c:{c.instructions+=2;NFSU2_TR(0x552b4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b4e:{NFSU2_TR(0x552b4e);
if(r1(R+518)){{goto L552b69;}}
}
B552b50:L552b50:{c.instructions+=2;NFSU2_TR(0x552b50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b51:{NFSU2_TR(0x552b51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552b56ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552b56:L552b56:{c.instructions+=3;NFSU2_TR(0x552b56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552b59:{NFSU2_TR(0x552b59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b5b:{NFSU2_TR(0x552b5b);
if(r1(R+518)){{goto L552b69;}}
}
B552b5d:L552b5d:{c.instructions+=3;NFSU2_TR(0x552b5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b5e:{NFSU2_TR(0x552b5e);
__builtin_memmove((R+4),(R+0),4);
}
B552b60:{NFSU2_TR(0x552b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552b65ull));
TAIL_STATIC(0x517f80u,517);
}
B552b65:L552b65:{c.instructions+=2;NFSU2_TR(0x552b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b67:{NFSU2_TR(0x552b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552b80;}}
}
B552b69:L552b69:{c.instructions+=3;NFSU2_TR(0x552b69);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552b6e:{NFSU2_TR(0x552b6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b70:{NFSU2_TR(0x552b70);
if(r1(R+518)){{goto L552b7e;}}
}
B552b72:L552b72:{c.instructions+=4;NFSU2_TR(0x552b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552b75:{NFSU2_TR(0x552b75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b76:{NFSU2_TR(0x552b76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b77:{NFSU2_TR(0x552b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552b7cull));
TAIL_STATIC(0x52c570u,52c);
}
B552b7c:L552b7c:{c.instructions+=1;NFSU2_TR(0x552b7c);
{goto L552b80;}
}
B552b7e:L552b7e:{c.instructions+=1;NFSU2_TR(0x552b7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552b80:L552b80:{c.instructions+=4;NFSU2_TR(0x552b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B552b83:{NFSU2_TR(0x552b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b85:{NFSU2_TR(0x552b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552b88:{NFSU2_TR(0x552b88);
if(r1(R+518)){{goto L552ba7;}}
}
B552b8a:L552b8a:{c.instructions+=2;NFSU2_TR(0x552b8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b8b:{NFSU2_TR(0x552b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552b90ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552b90:L552b90:{c.instructions+=3;NFSU2_TR(0x552b90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552b93:{NFSU2_TR(0x552b93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552b95:{NFSU2_TR(0x552b95);
if(r1(R+518)){{goto L552ba7;}}
}
B552b97:L552b97:{c.instructions+=3;NFSU2_TR(0x552b97);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552b9c:{NFSU2_TR(0x552b9c);
__builtin_memmove((R+4),(R+0),4);
}
B552b9e:{NFSU2_TR(0x552b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552ba3ull));
TAIL_STATIC(0x517f80u,517);
}
B552ba3:L552ba3:{c.instructions+=2;NFSU2_TR(0x552ba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552ba5:{NFSU2_TR(0x552ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552bc2;}}
}
B552ba7:L552ba7:{c.instructions+=3;NFSU2_TR(0x552ba7);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552bac:{NFSU2_TR(0x552bac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552bae:{NFSU2_TR(0x552bae);
if(r1(R+518)){{goto L552bc0;}}
}
B552bb0:L552bb0:{c.instructions+=4;NFSU2_TR(0x552bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552bb3:{NFSU2_TR(0x552bb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552bb4:{NFSU2_TR(0x552bb4);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552bb9:{NFSU2_TR(0x552bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552bbeull));
TAIL_STATIC(0x52c570u,52c);
}
B552bbe:L552bbe:{c.instructions+=1;NFSU2_TR(0x552bbe);
{goto L552bc2;}
}
B552bc0:L552bc0:{c.instructions+=1;NFSU2_TR(0x552bc0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552bc2:L552bc2:{c.instructions+=4;NFSU2_TR(0x552bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B552bc5:{NFSU2_TR(0x552bc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552bc7:{NFSU2_TR(0x552bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552bca:{NFSU2_TR(0x552bca);
if(r1(R+518)){{goto L552be9;}}
}
B552bcc:L552bcc:{c.instructions+=2;NFSU2_TR(0x552bcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552bcd:{NFSU2_TR(0x552bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552bd2ull));
TAIL_STATIC(0x52cef0u,52c);
}
B552bd2:L552bd2:{c.instructions+=3;NFSU2_TR(0x552bd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552bd5:{NFSU2_TR(0x552bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552bd7:{NFSU2_TR(0x552bd7);
if(r1(R+518)){{goto L552be9;}}
}
B552bd9:L552bd9:{c.instructions+=3;NFSU2_TR(0x552bd9);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552bde:{NFSU2_TR(0x552bde);
__builtin_memmove((R+4),(R+0),4);
}
B552be0:{NFSU2_TR(0x552be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552be5ull));
TAIL_STATIC(0x517f80u,517);
}
B552be5:L552be5:{c.instructions+=2;NFSU2_TR(0x552be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552be7:{NFSU2_TR(0x552be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552c04;}}
}
B552be9:L552be9:{c.instructions+=3;NFSU2_TR(0x552be9);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B552bee:{NFSU2_TR(0x552bee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552bf0:{NFSU2_TR(0x552bf0);
if(r1(R+518)){{goto L552c02;}}
}
B552bf2:L552bf2:{c.instructions+=4;NFSU2_TR(0x552bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552bf5:{NFSU2_TR(0x552bf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552bf6:{NFSU2_TR(0x552bf6);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552bfb:{NFSU2_TR(0x552bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552c00ull));
TAIL_STATIC(0x52c570u,52c);
}
B552c00:L552c00:{c.instructions+=1;NFSU2_TR(0x552c00);
{goto L552c04;}
}
B552c02:L552c02:{c.instructions+=1;NFSU2_TR(0x552c02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552c04:L552c04:{c.instructions+=9;NFSU2_TR(0x552c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552c08:{NFSU2_TR(0x552c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552c0b:{NFSU2_TR(0x552c0b);
__builtin_memmove((R+0),(R+28),4);
}
B552c0d:{NFSU2_TR(0x552c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B552c0e:{NFSU2_TR(0x552c0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552c0f:{NFSU2_TR(0x552c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B552c10:{NFSU2_TR(0x552c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552c17:{NFSU2_TR(0x552c17);
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
B552c1a:{NFSU2_TR(0x552c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552c20:L552c20:{c.instructions+=1;NFSU2_TR(0x552c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552c25ull));
TAIL_STATIC(0x4a32d0u,4a3);
}
B552c25:L552c25:{c.instructions+=2;NFSU2_TR(0x552c25);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552c27:{NFSU2_TR(0x552c27);
if(r1(R+518)){{goto L552c2d;}}
}
B552c29:L552c29:{c.instructions+=2;NFSU2_TR(0x552c29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552c2b:{NFSU2_TR(0x552c2b);
{goto L552c4d;}
}
B552c2d:L552c2d:{c.instructions+=2;NFSU2_TR(0x552c2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552c2f:{NFSU2_TR(0x552c2f);
if(r1(R+518)){{goto L552c38;}}
}
B552c31:L552c31:{c.instructions+=2;NFSU2_TR(0x552c31);
w4(R+0,u32(0x1ull));
}
B552c36:{NFSU2_TR(0x552c36);
{goto L552c4d;}
}
B552c38:L552c38:{c.instructions+=2;NFSU2_TR(0x552c38);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552c3a:{NFSU2_TR(0x552c3a);
if(r1(R+518)){{goto L552c43;}}
}
B552c3c:L552c3c:{c.instructions+=2;NFSU2_TR(0x552c3c);
w4(R+0,u32(0x2ull));
}
B552c41:{NFSU2_TR(0x552c41);
{goto L552c4d;}
}
B552c43:L552c43:{c.instructions+=5;NFSU2_TR(0x552c43);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
}
B552c45:{NFSU2_TR(0x552c45);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B552c47:{NFSU2_TR(0x552c47);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B552c49:{NFSU2_TR(0x552c49);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B552c4c:{NFSU2_TR(0x552c4c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B552c4d:L552c4d:{c.instructions+=2;NFSU2_TR(0x552c4d);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B552c52:{NFSU2_TR(0x552c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552c57ull));
TAIL_STATIC(0x5404a0u,540);
}
B552c57:L552c57:{c.instructions+=2;NFSU2_TR(0x552c57);
w4(R+4,u32(0x838980ull));
}
B552c5c:{NFSU2_TR(0x552c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552c61ull));
TAIL_STATIC(0x54fd40u,54f);
}
B552c61:L552c61:{c.instructions+=3;NFSU2_TR(0x552c61);
__builtin_memmove((R+0),gp(0x851148),4);
}
B552c66:{NFSU2_TR(0x552c66);
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
B552c68:{NFSU2_TR(0x552c68);
if(r1(R+518)){{goto L552c7d;}}
}
B552c6a:L552c6a:{c.instructions+=2;NFSU2_TR(0x552c6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552c6b:{NFSU2_TR(0x552c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552c70ull));
TAIL_STATIC(0x440540u,440);
}
B552c70:L552c70:{c.instructions+=2;NFSU2_TR(0x552c70);
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
B552c73:{NFSU2_TR(0x552c73);
s4(0x851148,u32(0x0ull));
}
B552c7d:L552c7d:{c.instructions+=1;NFSU2_TR(0x552c7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552c80:L552c80:{c.instructions+=4;NFSU2_TR(0x552c80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552c81:{NFSU2_TR(0x552c81);
__builtin_memmove((R+20),(R+16),4);
}
B552c83:{NFSU2_TR(0x552c83);
w4(R+4,u32(0x83a9d0ull));
}
B552c88:{NFSU2_TR(0x552c88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552c8dull));
TAIL_STATIC(0x52a4c0u,52a);
}
B552c8d:L552c8d:{c.instructions+=2;NFSU2_TR(0x552c8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552c8f:{NFSU2_TR(0x552c8f);
if(r1(R+518)){{goto L552cad;}}
}
B552c91:L552c91:{c.instructions+=9;NFSU2_TR(0x552c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552c94:{NFSU2_TR(0x552c94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552c96:{NFSU2_TR(0x552c96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552c98:{NFSU2_TR(0x552c98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552c9a:{NFSU2_TR(0x552c9a);
u8 U[4];
w4(U+0,u32(0x552c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552c9f:{NFSU2_TR(0x552c9f);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ca1:{NFSU2_TR(0x552ca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ca2:{NFSU2_TR(0x552ca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ca3:{NFSU2_TR(0x552ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552ca8ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B552ca8:L552ca8:{c.instructions+=3;NFSU2_TR(0x552ca8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B552cab:{NFSU2_TR(0x552cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B552cac:{NFSU2_TR(0x552cac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552cad:L552cad:{c.instructions+=1;NFSU2_TR(0x552cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552cb2ull));
TAIL_STATIC(0x5404a0u,540);
}
B552cb2:L552cb2:{c.instructions+=3;NFSU2_TR(0x552cb2);
w4(R+4,u32(0x838980ull));
}
B552cb7:{NFSU2_TR(0x552cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B552cb8:{NFSU2_TR(0x552cb8);
TAIL_STATIC(0x54fd40u,54f);
}
B552cc0:L552cc0:{c.instructions+=6;NFSU2_TR(0x552cc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552cc1:{NFSU2_TR(0x552cc1);
__builtin_memmove((R+20),(R+16),4);
}
B552cc3:{NFSU2_TR(0x552cc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552cc4:{NFSU2_TR(0x552cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B552cc7:{NFSU2_TR(0x552cc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552cc9:{NFSU2_TR(0x552cc9);
if(r1(R+518)){{goto L552d1b;}}
}
B552ccb:L552ccb:{c.instructions+=3;NFSU2_TR(0x552ccb);
__builtin_memmove((R+0),gp(0x838540),1);
}
B552cd0:{NFSU2_TR(0x552cd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B552cd2:{NFSU2_TR(0x552cd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552d1b;}}
}
B552cd4:L552cd4:{c.instructions+=3;NFSU2_TR(0x552cd4);
__builtin_memmove((R+0),gp(0x851148),4);
}
B552cd9:{NFSU2_TR(0x552cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552cdb:{NFSU2_TR(0x552cdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L552d1b;}}
}
B552cdd:L552cdd:{c.instructions+=3;NFSU2_TR(0x552cdd);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B552ce2:{NFSU2_TR(0x552ce2);
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
B552ce4:{NFSU2_TR(0x552ce4);
if(r1(R+518)){{goto L552d1b;}}
}
B552ce6:L552ce6:{c.instructions+=1;NFSU2_TR(0x552ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552cebull));
TAIL_STATIC(0x5b9680u,5b9);
}
B552ceb:L552ceb:{c.instructions+=4;NFSU2_TR(0x552ceb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B552cf0:{NFSU2_TR(0x552cf0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552cf2:{NFSU2_TR(0x552cf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552cf3:{NFSU2_TR(0x552cf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552cf8ull));
TAIL_STATIC(0x440820u,440);
}
B552cf8:L552cf8:{c.instructions+=3;NFSU2_TR(0x552cf8);
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
B552cfb:{NFSU2_TR(0x552cfb);
__builtin_memmove(gp(0x851148),(R+0),4);
}
B552d00:{NFSU2_TR(0x552d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552d05ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B552d05:L552d05:{c.instructions+=6;NFSU2_TR(0x552d05);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B552d0a:{NFSU2_TR(0x552d0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552d0b:{NFSU2_TR(0x552d0b);
__builtin_memmove((R+0),gp(0x851148),4);
}
B552d10:{NFSU2_TR(0x552d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552d11:{NFSU2_TR(0x552d11);
w4(R+4,u32(0x83a9e0ull));
}
B552d16:{NFSU2_TR(0x552d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552d1bull));
TAIL_STATIC(0x52a280u,52a);
}
B552d1b:L552d1b:{c.instructions+=7;NFSU2_TR(0x552d1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552d1c:{NFSU2_TR(0x552d1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552d1d:{NFSU2_TR(0x552d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B552d20:{NFSU2_TR(0x552d20);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B552d22:{NFSU2_TR(0x552d22);
__builtin_memmove(gp(0x83898c),(R+24),4);
}
B552d28:{NFSU2_TR(0x552d28);
s1(0x838982,u8(0x0ull));
}
B552d2f:{NFSU2_TR(0x552d2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L552d46;}}
}
B552d31:L552d31:{c.instructions+=2;NFSU2_TR(0x552d31);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B552d34:{NFSU2_TR(0x552d34);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L552d46;}}
}
B552d36:L552d36:{c.instructions+=4;NFSU2_TR(0x552d36);
__builtin_memmove((R+4),(R+28),4);
}
B552d38:{NFSU2_TR(0x552d38);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B552d3e:{NFSU2_TR(0x552d3e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B552d44:{NFSU2_TR(0x552d44);
{goto L552d48;}
}
B552d46:L552d46:{c.instructions+=1;NFSU2_TR(0x552d46);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B552d48:L552d48:{c.instructions+=7;NFSU2_TR(0x552d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552d4e:{NFSU2_TR(0x552d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B552d51:{NFSU2_TR(0x552d51);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B552d53:{NFSU2_TR(0x552d53);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B552d55:{NFSU2_TR(0x552d55);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552d57:{NFSU2_TR(0x552d57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552d5b:{NFSU2_TR(0x552d5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L552d6f;}}
}
B552d5d:L552d5d:{c.instructions+=1;NFSU2_TR(0x552d5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B552d60:L552d60:{c.instructions+=2;NFSU2_TR(0x552d60);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B552d62:{NFSU2_TR(0x552d62);
if(r1(R+518)){{goto L552d81;}}
}
B552d64:L552d64:{c.instructions+=4;NFSU2_TR(0x552d64);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B552d65:{NFSU2_TR(0x552d65);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B552d68:{NFSU2_TR(0x552d68);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B552d6a:{NFSU2_TR(0x552d6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552d60u);}goto L552d60;}}
}
B552d6c:L552d6c:{c.instructions+=1;NFSU2_TR(0x552d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B552d6f:L552d6f:{c.instructions+=2;NFSU2_TR(0x552d6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552d70:{NFSU2_TR(0x552d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552d75ull));
TAIL_STATIC(0x5035c0u,503);
}
B552d75:L552d75:{c.instructions+=3;NFSU2_TR(0x552d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552d77:{NFSU2_TR(0x552d77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552d78:{NFSU2_TR(0x552d78);
if(r1(R+518)){{goto L552d99;}}
}
B552d7a:L552d7a:{c.instructions+=1;NFSU2_TR(0x552d7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552d7full));
TAIL_STATIC(0x5035c0u,503);
}
B552d7f:L552d7f:{c.instructions+=1;NFSU2_TR(0x552d7f);
{goto L552db9;}
}
B552d81:L552d81:{c.instructions+=4;NFSU2_TR(0x552d81);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B552d84:{NFSU2_TR(0x552d84);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B552d86:{NFSU2_TR(0x552d86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552d88:{NFSU2_TR(0x552d88);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552d6cu);}goto L552d6c;}}
}
B552d8a:L552d8a:{c.instructions+=2;NFSU2_TR(0x552d8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552d8b:{NFSU2_TR(0x552d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552d90ull));
TAIL_STATIC(0x52a710u,52a);
}
B552d90:L552d90:{c.instructions+=3;NFSU2_TR(0x552d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B552d93:{NFSU2_TR(0x552d93);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552d97:{NFSU2_TR(0x552d97);
{goto L552db9;}
}
B552d99:L552d99:{c.instructions+=1;NFSU2_TR(0x552d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552d9eull));
TAIL_STATIC(0x503680u,503);
}
B552d9e:L552d9e:{c.instructions+=3;NFSU2_TR(0x552d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B552da0:{NFSU2_TR(0x552da0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552da1:{NFSU2_TR(0x552da1);
if(r1(R+518)){{goto L552daa;}}
}
B552da3:L552da3:{c.instructions+=1;NFSU2_TR(0x552da3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552da8ull));
TAIL_STATIC(0x503680u,503);
}
B552da8:L552da8:{c.instructions+=1;NFSU2_TR(0x552da8);
{goto L552db9;}
}
B552daa:L552daa:{c.instructions+=1;NFSU2_TR(0x552daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552dafull));
TAIL_STATIC(0x503640u,503);
}
B552daf:L552daf:{c.instructions+=2;NFSU2_TR(0x552daf);
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
B552db1:{NFSU2_TR(0x552db1);
if(r1(R+518)){{goto L552dbb;}}
}
B552db3:L552db3:{c.instructions+=2;NFSU2_TR(0x552db3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552db4:{NFSU2_TR(0x552db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552db9ull));
TAIL_STATIC(0x503640u,503);
}
B552db9:L552db9:{c.instructions+=1;NFSU2_TR(0x552db9);
__builtin_memmove((R+24),(R+0),4);
}
B552dbb:L552dbb:{c.instructions+=10;NFSU2_TR(0x552dbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B552dbe:{NFSU2_TR(0x552dbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552dc0:{NFSU2_TR(0x552dc0);
__builtin_memmove(gp(0x839bc2),(R+4),1);
}
B552dc6:{NFSU2_TR(0x552dc6);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552dcb:{NFSU2_TR(0x552dcb);
__builtin_memmove(gp(0x8389ac),(R+24),4);
}
B552dd1:{NFSU2_TR(0x552dd1);
__builtin_memmove(gp(0x8389b0),(R+28),4);
}
B552dd7:{NFSU2_TR(0x552dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B552dd9:{NFSU2_TR(0x552dd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552dda:{NFSU2_TR(0x552dda);
__builtin_memmove((R+4),(R+24),4);
}
B552ddc:{NFSU2_TR(0x552ddc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552ddfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B552ddf:L552ddf:{c.instructions+=6;NFSU2_TR(0x552ddf);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B552de5:{NFSU2_TR(0x552de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B552de7:{NFSU2_TR(0x552de7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552de9:{NFSU2_TR(0x552de9);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552dee:{NFSU2_TR(0x552dee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552def:{NFSU2_TR(0x552def);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552df2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B552df2:L552df2:{c.instructions+=2;NFSU2_TR(0x552df2);
s1(0x838980,u8(0x1ull));
}
B552df9:{NFSU2_TR(0x552df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552dfeull));
TAIL_STATIC(0x54f980u,54f);
}
B552dfe:L552dfe:{c.instructions+=5;NFSU2_TR(0x552dfe);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B552e04:{NFSU2_TR(0x552e04);
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
B552e06:{NFSU2_TR(0x552e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B552e07:{NFSU2_TR(0x552e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B552e08:{NFSU2_TR(0x552e08);
if(r1(R+518)){{goto L552e1c;}}
}
B552e0a:L552e0a:{c.instructions+=7;NFSU2_TR(0x552e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552e0d:{NFSU2_TR(0x552e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552e10:{NFSU2_TR(0x552e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552e13:{NFSU2_TR(0x552e13);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e15:{NFSU2_TR(0x552e15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e16:{NFSU2_TR(0x552e16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e17:{NFSU2_TR(0x552e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552e1cull));
TAIL_STATIC(0x5377a0u,537);
}
B552e1c:L552e1c:{c.instructions+=4;NFSU2_TR(0x552e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552e1f:{NFSU2_TR(0x552e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552e20:{NFSU2_TR(0x552e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B552e21:{NFSU2_TR(0x552e21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552e30:L552e30:{c.instructions+=18;NFSU2_TR(0x552e30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e31:{NFSU2_TR(0x552e31);
__builtin_memmove((R+20),(R+16),4);
}
B552e33:{NFSU2_TR(0x552e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552e36:{NFSU2_TR(0x552e36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e37:{NFSU2_TR(0x552e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B552e3a:{NFSU2_TR(0x552e3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e3b:{NFSU2_TR(0x552e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B552e3e:{NFSU2_TR(0x552e3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e40:{NFSU2_TR(0x552e40);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e45:{NFSU2_TR(0x552e45);
__builtin_memmove(gp(0x83898c),(R+0),4);
}
B552e4a:{NFSU2_TR(0x552e4a);
s1(0x838982,u8(0x0ull));
}
B552e51:{NFSU2_TR(0x552e51);
s1(0x839bc2,u8(0x0ull));
}
B552e58:{NFSU2_TR(0x552e58);
__builtin_memmove(gp(0x8389ac),(R+24),4);
}
B552e5e:{NFSU2_TR(0x552e5e);
__builtin_memmove(gp(0x8389b0),(R+28),4);
}
B552e64:{NFSU2_TR(0x552e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B552e66:{NFSU2_TR(0x552e66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e67:{NFSU2_TR(0x552e67);
__builtin_memmove((R+4),(R+24),4);
}
B552e69:{NFSU2_TR(0x552e69);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552e6cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B552e6c:L552e6c:{c.instructions+=6;NFSU2_TR(0x552e6c);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B552e72:{NFSU2_TR(0x552e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B552e74:{NFSU2_TR(0x552e74);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e76:{NFSU2_TR(0x552e76);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e7b:{NFSU2_TR(0x552e7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552e7c:{NFSU2_TR(0x552e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552e7full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B552e7f:L552e7f:{c.instructions+=2;NFSU2_TR(0x552e7f);
s1(0x838980,u8(0x1ull));
}
B552e86:{NFSU2_TR(0x552e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552e8bull));
TAIL_STATIC(0x54f980u,54f);
}
B552e8b:L552e8b:{c.instructions+=3;NFSU2_TR(0x552e8b);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B552e91:{NFSU2_TR(0x552e91);
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
B552e93:{NFSU2_TR(0x552e93);
if(r1(R+518)){{goto L552ea7;}}
}
B552e95:L552e95:{c.instructions+=7;NFSU2_TR(0x552e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552e98:{NFSU2_TR(0x552e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552e9b:{NFSU2_TR(0x552e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552e9e:{NFSU2_TR(0x552e9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ea0:{NFSU2_TR(0x552ea0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ea1:{NFSU2_TR(0x552ea1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ea2:{NFSU2_TR(0x552ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552ea7ull));
TAIL_STATIC(0x5377a0u,537);
}
B552ea7:L552ea7:{c.instructions+=5;NFSU2_TR(0x552ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552eaa:{NFSU2_TR(0x552eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B552eab:{NFSU2_TR(0x552eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552eac:{NFSU2_TR(0x552eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B552ead:{NFSU2_TR(0x552ead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552eb0:L552eb0:{c.instructions+=12;NFSU2_TR(0x552eb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552eb2:{NFSU2_TR(0x552eb2);
u8 U[4];
w4(U+0,u32(0x777d1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552eb7:{NFSU2_TR(0x552eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552ebd:{NFSU2_TR(0x552ebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ebe:{NFSU2_TR(0x552ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552ec5:{NFSU2_TR(0x552ec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ec6:{NFSU2_TR(0x552ec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552eca:{NFSU2_TR(0x552eca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ecb:{NFSU2_TR(0x552ecb);
__builtin_memmove((R+24),(R+4),4);
}
B552ecd:{NFSU2_TR(0x552ecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ece:{NFSU2_TR(0x552ece);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552ed2:{NFSU2_TR(0x552ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552ed7ull));
TAIL_STATIC(0x551de0u,551);
}
B552ed7:L552ed7:{c.instructions+=22;NFSU2_TR(0x552ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B552eda:{NFSU2_TR(0x552eda);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B552edc:{NFSU2_TR(0x552edc);
u8 U[4];
w4(U+0,u32(0x79ca68ull));
s4(u32(r4(R+24)),r4(U+0));
}
B552ee2:{NFSU2_TR(0x552ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552ee6:{NFSU2_TR(0x552ee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B552ee8:{NFSU2_TR(0x552ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552eeb:{NFSU2_TR(0x552eeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B552eee:{NFSU2_TR(0x552eee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B552ef0:{NFSU2_TR(0x552ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552ef3:{NFSU2_TR(0x552ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B552ef6:{NFSU2_TR(0x552ef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B552ef8:{NFSU2_TR(0x552ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552efb:{NFSU2_TR(0x552efb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B552efe:{NFSU2_TR(0x552efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B552f00:{NFSU2_TR(0x552f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552f03:{NFSU2_TR(0x552f03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B552f06:{NFSU2_TR(0x552f06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B552f08:{NFSU2_TR(0x552f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552f0b:{NFSU2_TR(0x552f0b);
__builtin_memmove(gp(0x838528),(R+4),1);
}
B552f11:{NFSU2_TR(0x552f11);
__builtin_memmove((R+4),(R+24),4);
}
B552f13:{NFSU2_TR(0x552f13);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552f18:{NFSU2_TR(0x552f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552f1dull));
TAIL_STATIC(0x5206d0u,520);
}
B552f1d:L552f1d:{c.instructions+=2;NFSU2_TR(0x552f1d);
__builtin_memmove((R+4),(R+24),4);
}
B552f1f:{NFSU2_TR(0x552f1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552f24ull));
TAIL_STATIC(0x539ff0u,539);
}
B552f24:L552f24:{c.instructions+=2;NFSU2_TR(0x552f24);
__builtin_memmove((R+4),(R+24),4);
}
B552f26:{NFSU2_TR(0x552f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552f2bull));
TAIL_STATIC(0x53a0b0u,53a);
}
B552f2b:L552f2b:{c.instructions+=6;NFSU2_TR(0x552f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B552f2f:{NFSU2_TR(0x552f2f);
__builtin_memmove((R+0),(R+24),4);
}
B552f31:{NFSU2_TR(0x552f31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552f32:{NFSU2_TR(0x552f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552f39:{NFSU2_TR(0x552f39);
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
B552f3c:{NFSU2_TR(0x552f3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552f40:L552f40:{c.instructions+=3;NFSU2_TR(0x552f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f41:{NFSU2_TR(0x552f41);
__builtin_memmove((R+24),(R+4),4);
}
B552f43:{NFSU2_TR(0x552f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552f48ull));
{goto L552f60;}
}
B552f48:L552f48:{c.instructions+=2;NFSU2_TR(0x552f48);
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
B552f4d:{NFSU2_TR(0x552f4d);
if(r1(R+518)){{goto L552f58;}}
}
B552f4f:L552f4f:{c.instructions+=2;NFSU2_TR(0x552f4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f50:{NFSU2_TR(0x552f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552f55ull));
TAIL_STATIC(0x575630u,575);
}
B552f55:L552f55:{c.instructions+=1;NFSU2_TR(0x552f55);
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
B552f58:L552f58:{c.instructions+=3;NFSU2_TR(0x552f58);
__builtin_memmove((R+0),(R+24),4);
}
B552f5a:{NFSU2_TR(0x552f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552f5b:{NFSU2_TR(0x552f5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B552f60:L552f60:{c.instructions+=16;NFSU2_TR(0x552f60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f62:{NFSU2_TR(0x552f62);
u8 U[4];
w4(U+0,u32(0x777d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f67:{NFSU2_TR(0x552f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552f6d:{NFSU2_TR(0x552f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f6e:{NFSU2_TR(0x552f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552f75:{NFSU2_TR(0x552f75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f76:{NFSU2_TR(0x552f76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f77:{NFSU2_TR(0x552f77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f78:{NFSU2_TR(0x552f78);
__builtin_memmove((R+28),(R+4),4);
}
B552f7a:{NFSU2_TR(0x552f7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552f7e:{NFSU2_TR(0x552f7e);
u8 U[4];
w4(U+0,u32(0x79ca68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B552f84:{NFSU2_TR(0x552f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552f87:{NFSU2_TR(0x552f87);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((R+24),(U+0),4);
}
B552f8a:{NFSU2_TR(0x552f8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552f8c:{NFSU2_TR(0x552f8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B552f94:{NFSU2_TR(0x552f94);
if(r1(R+518)){{goto L552faf;}}
}
B552f96:L552f96:{c.instructions+=6;NFSU2_TR(0x552f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B552f98:{NFSU2_TR(0x552f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552f9b:{NFSU2_TR(0x552f9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B552f9d:{NFSU2_TR(0x552f9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552f9e:{NFSU2_TR(0x552f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552fa1:{NFSU2_TR(0x552fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552fa6ull));
TAIL_STATIC(0x440ef0u,440);
}
B552fa6:L552fa6:{c.instructions+=4;NFSU2_TR(0x552fa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B552fa8:{NFSU2_TR(0x552fa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552fab:{NFSU2_TR(0x552fab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552fad:{NFSU2_TR(0x552fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552f96u);}goto L552f96;}}
}
B552faf:L552faf:{c.instructions+=5;NFSU2_TR(0x552faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552fb2:{NFSU2_TR(0x552fb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552fb5:{NFSU2_TR(0x552fb5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552fb7:{NFSU2_TR(0x552fb7);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552fbc:{NFSU2_TR(0x552fbc);
if(r1(R+518)){{goto L552fd9;}}
}
B552fbe:L552fbe:{c.instructions+=1;NFSU2_TR(0x552fbe);
__builtin_memmove((R+28),(R+28),4);
}
B552fc0:L552fc0:{c.instructions+=6;NFSU2_TR(0x552fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B552fc2:{NFSU2_TR(0x552fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552fc5:{NFSU2_TR(0x552fc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B552fc7:{NFSU2_TR(0x552fc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552fc8:{NFSU2_TR(0x552fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552fcb:{NFSU2_TR(0x552fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552fd0ull));
TAIL_STATIC(0x575630u,575);
}
B552fd0:L552fd0:{c.instructions+=4;NFSU2_TR(0x552fd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B552fd2:{NFSU2_TR(0x552fd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552fd5:{NFSU2_TR(0x552fd5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552fd7:{NFSU2_TR(0x552fd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552fc0u);}goto L552fc0;}}
}
B552fd9:L552fd9:{c.instructions+=5;NFSU2_TR(0x552fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B552fdc:{NFSU2_TR(0x552fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B552fdf:{NFSU2_TR(0x552fdf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552fe1:{NFSU2_TR(0x552fe1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B552fe6:{NFSU2_TR(0x552fe6);
if(r1(R+518)){TAIL_STATIC(0x553001u,553);}
}
B552fe8:L552fe8:{c.instructions+=6;NFSU2_TR(0x552fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B552fea:{NFSU2_TR(0x552fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B552fed:{NFSU2_TR(0x552fed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B552fef:{NFSU2_TR(0x552fef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B552ff0:{NFSU2_TR(0x552ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B552ff3:{NFSU2_TR(0x552ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552ff8ull));
TAIL_STATIC(0x575630u,575);
}
B552ff8:L552ff8:{c.instructions+=4;NFSU2_TR(0x552ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B552ffa:{NFSU2_TR(0x552ffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B552ffd:{NFSU2_TR(0x552ffd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B552fff:{NFSU2_TR(0x552fff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x552fe8u);}goto L552fe8;}}
TAIL_STATIC(0x553001u,553);
}
XIT:NFSU2_TR_EXIT(0x552,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
