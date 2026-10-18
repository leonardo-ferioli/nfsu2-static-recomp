#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x520,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x520,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_520(u8* __restrict R,Cpu& c);
u32 page_520(Cpu& c){return body_520(c.regs.data(),c);}
__attribute__((noinline)) u32 body_520(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x520001:goto L520001;
case 0x520007:c.instructions+=8;goto B520007;
case 0x520009:c.instructions+=7;goto B520009;
case 0x52000a:c.instructions+=6;goto B52000a;
case 0x52000c:c.instructions+=5;goto B52000c;
case 0x520012:c.instructions+=4;goto B520012;
case 0x520013:c.instructions+=3;goto B520013;
case 0x520014:c.instructions+=2;goto B520014;
case 0x520015:c.instructions+=1;goto B520015;
case 0x520020:goto L520020;
case 0x520021:c.instructions+=6;goto B520021;
case 0x520024:c.instructions+=5;goto B520024;
case 0x520026:c.instructions+=4;goto B520026;
case 0x520028:c.instructions+=3;goto B520028;
case 0x520029:c.instructions+=2;goto B520029;
case 0x52002e:c.instructions+=1;goto B52002e;
case 0x520030:goto L520030;
case 0x520033:c.instructions+=1;goto B520033;
case 0x520035:goto L520035;
case 0x520037:goto L520037;
case 0x52003b:c.instructions+=1;goto B52003b;
case 0x520040:goto L520040;
case 0x520042:c.instructions+=1;goto B520042;
case 0x520044:goto L520044;
case 0x520047:c.instructions+=1;goto B520047;
case 0x520049:goto L520049;
case 0x52004b:goto L52004b;
case 0x52004d:c.instructions+=1;goto B52004d;
case 0x52004f:goto L52004f;
case 0x520051:c.instructions+=1;goto B520051;
case 0x520053:goto L520053;
case 0x520056:c.instructions+=3;goto B520056;
case 0x520057:c.instructions+=2;goto B520057;
case 0x520059:c.instructions+=1;goto B520059;
case 0x52005b:goto L52005b;
case 0x52005e:c.instructions+=1;goto B52005e;
case 0x520060:goto L520060;
case 0x520062:c.instructions+=1;goto B520062;
case 0x520064:goto L520064;
case 0x520066:goto L520066;
case 0x520067:c.instructions+=2;goto B520067;
case 0x520068:c.instructions+=1;goto B520068;
case 0x520070:goto L520070;
case 0x520073:c.instructions+=6;goto B520073;
case 0x520077:c.instructions+=5;goto B520077;
case 0x52007b:c.instructions+=4;goto B52007b;
case 0x52007d:c.instructions+=3;goto B52007d;
case 0x52007f:c.instructions+=2;goto B52007f;
case 0x520083:c.instructions+=1;goto B520083;
case 0x520085:goto L520085;
case 0x520087:goto L520087;
case 0x52008b:c.instructions+=4;goto B52008b;
case 0x52008c:c.instructions+=3;goto B52008c;
case 0x520090:c.instructions+=2;goto B520090;
case 0x520092:c.instructions+=1;goto B520092;
case 0x520098:goto L520098;
case 0x520099:c.instructions+=3;goto B520099;
case 0x52009a:c.instructions+=2;goto B52009a;
case 0x52009b:c.instructions+=1;goto B52009b;
case 0x5200a0:goto L5200a0;
case 0x5200a4:c.instructions+=16;goto B5200a4;
case 0x5200a7:c.instructions+=15;goto B5200a7;
case 0x5200aa:c.instructions+=14;goto B5200aa;
case 0x5200ae:c.instructions+=13;goto B5200ae;
case 0x5200b2:c.instructions+=12;goto B5200b2;
case 0x5200b4:c.instructions+=11;goto B5200b4;
case 0x5200b6:c.instructions+=10;goto B5200b6;
case 0x5200b8:c.instructions+=9;goto B5200b8;
case 0x5200be:c.instructions+=8;goto B5200be;
case 0x5200c0:c.instructions+=7;goto B5200c0;
case 0x5200c4:c.instructions+=6;goto B5200c4;
case 0x5200c8:c.instructions+=5;goto B5200c8;
case 0x5200cc:c.instructions+=4;goto B5200cc;
case 0x5200ce:c.instructions+=3;goto B5200ce;
case 0x5200d0:c.instructions+=2;goto B5200d0;
case 0x5200d3:c.instructions+=1;goto B5200d3;
case 0x5200d9:goto L5200d9;
case 0x5200e0:goto L5200e0;
case 0x5200e4:c.instructions+=1;goto B5200e4;
case 0x5200ea:goto L5200ea;
case 0x5200ed:c.instructions+=2;goto B5200ed;
case 0x5200f1:c.instructions+=1;goto B5200f1;
case 0x5200f7:goto L5200f7;
case 0x5200fb:c.instructions+=1;goto B5200fb;
case 0x520101:goto L520101;
case 0x520105:c.instructions+=1;goto B520105;
case 0x52010b:goto L52010b;
case 0x52010e:c.instructions+=5;goto B52010e;
case 0x520110:c.instructions+=4;goto B520110;
case 0x520113:c.instructions+=3;goto B520113;
case 0x520115:c.instructions+=2;goto B520115;
case 0x520118:c.instructions+=1;goto B520118;
case 0x52011a:goto L52011a;
case 0x520120:goto L520120;
case 0x520124:c.instructions+=1;goto B520124;
case 0x520126:goto L520126;
case 0x52012a:c.instructions+=4;goto B52012a;
case 0x52012d:c.instructions+=3;goto B52012d;
case 0x52012e:c.instructions+=2;goto B52012e;
case 0x520131:c.instructions+=1;goto B520131;
case 0x520133:goto L520133;
case 0x520135:c.instructions+=3;goto B520135;
case 0x520138:c.instructions+=2;goto B520138;
case 0x52013a:c.instructions+=1;goto B52013a;
case 0x52013c:goto L52013c;
case 0x520140:c.instructions+=4;goto B520140;
case 0x520143:c.instructions+=3;goto B520143;
case 0x520144:c.instructions+=2;goto B520144;
case 0x52014c:c.instructions+=1;goto B52014c;
case 0x520151:goto L520151;
case 0x520153:c.instructions+=1;goto B520153;
case 0x520155:goto L520155;
case 0x520159:c.instructions+=3;goto B520159;
case 0x52015d:c.instructions+=2;goto B52015d;
case 0x520161:c.instructions+=1;goto B520161;
case 0x520163:goto L520163;
case 0x520167:goto L520167;
case 0x52016b:c.instructions+=4;goto B52016b;
case 0x52016f:c.instructions+=3;goto B52016f;
case 0x520171:c.instructions+=2;goto B520171;
case 0x520175:c.instructions+=1;goto B520175;
case 0x520177:goto L520177;
case 0x520179:c.instructions+=3;goto B520179;
case 0x52017c:c.instructions+=2;goto B52017c;
case 0x520180:c.instructions+=1;goto B520180;
case 0x520182:goto L520182;
case 0x520185:c.instructions+=1;goto B520185;
case 0x520187:goto L520187;
case 0x52018b:c.instructions+=1;goto B52018b;
case 0x52018d:goto L52018d;
case 0x520191:c.instructions+=3;goto B520191;
case 0x520194:c.instructions+=2;goto B520194;
case 0x520197:c.instructions+=1;goto B520197;
case 0x520199:goto L520199;
case 0x52019c:goto L52019c;
case 0x5201a0:c.instructions+=9;goto B5201a0;
case 0x5201a2:c.instructions+=8;goto B5201a2;
case 0x5201a4:c.instructions+=7;goto B5201a4;
case 0x5201a6:c.instructions+=6;goto B5201a6;
case 0x5201a8:c.instructions+=5;goto B5201a8;
case 0x5201ac:c.instructions+=4;goto B5201ac;
case 0x5201ae:c.instructions+=3;goto B5201ae;
case 0x5201b0:c.instructions+=2;goto B5201b0;
case 0x5201b2:c.instructions+=1;goto B5201b2;
case 0x5201b4:goto L5201b4;
case 0x5201b8:goto L5201b8;
case 0x5201bc:c.instructions+=5;goto B5201bc;
case 0x5201bf:c.instructions+=4;goto B5201bf;
case 0x5201c1:c.instructions+=3;goto B5201c1;
case 0x5201c2:c.instructions+=2;goto B5201c2;
case 0x5201c3:c.instructions+=1;goto B5201c3;
case 0x5201c8:goto L5201c8;
case 0x5201cc:c.instructions+=6;goto B5201cc;
case 0x5201cd:c.instructions+=5;goto B5201cd;
case 0x5201d0:c.instructions+=4;goto B5201d0;
case 0x5201d2:c.instructions+=3;goto B5201d2;
case 0x5201d6:c.instructions+=2;goto B5201d6;
case 0x5201d9:c.instructions+=1;goto B5201d9;
case 0x5201dd:goto L5201dd;
case 0x5201e1:c.instructions+=11;goto B5201e1;
case 0x5201e4:c.instructions+=10;goto B5201e4;
case 0x5201e8:c.instructions+=9;goto B5201e8;
case 0x5201ec:c.instructions+=8;goto B5201ec;
case 0x5201ef:c.instructions+=7;goto B5201ef;
case 0x5201f3:c.instructions+=6;goto B5201f3;
case 0x5201f7:c.instructions+=5;goto B5201f7;
case 0x5201f9:c.instructions+=4;goto B5201f9;
case 0x5201fb:c.instructions+=3;goto B5201fb;
case 0x5201fd:c.instructions+=2;goto B5201fd;
case 0x520200:c.instructions+=1;goto B520200;
case 0x520206:goto L520206;
case 0x520208:goto L520208;
case 0x52020c:goto L52020c;
case 0x52020e:c.instructions+=1;goto B52020e;
case 0x520210:goto L520210;
case 0x520213:c.instructions+=2;goto B520213;
case 0x520215:c.instructions+=1;goto B520215;
case 0x520217:goto L520217;
case 0x52021d:c.instructions+=1;goto B52021d;
case 0x52021f:goto L52021f;
case 0x520220:c.instructions+=2;goto B520220;
case 0x520222:c.instructions+=1;goto B520222;
case 0x520224:goto L520224;
case 0x520226:goto L520226;
case 0x520228:c.instructions+=1;goto B520228;
case 0x52022a:goto L52022a;
case 0x52022b:c.instructions+=2;goto B52022b;
case 0x52022f:c.instructions+=1;goto B52022f;
case 0x520231:goto L520231;
case 0x520235:c.instructions+=2;goto B520235;
case 0x520237:c.instructions+=1;goto B520237;
case 0x520239:goto L520239;
case 0x52023d:c.instructions+=3;goto B52023d;
case 0x52023e:c.instructions+=2;goto B52023e;
case 0x52023f:c.instructions+=1;goto B52023f;
case 0x520244:goto L520244;
case 0x520248:c.instructions+=2;goto B520248;
case 0x52024a:c.instructions+=1;goto B52024a;
case 0x52024c:goto L52024c;
case 0x52024e:c.instructions+=3;goto B52024e;
case 0x520251:c.instructions+=2;goto B520251;
case 0x520253:c.instructions+=1;goto B520253;
case 0x520255:goto L520255;
case 0x520259:c.instructions+=5;goto B520259;
case 0x52025d:c.instructions+=4;goto B52025d;
case 0x520261:c.instructions+=3;goto B520261;
case 0x520263:c.instructions+=2;goto B520263;
case 0x520267:c.instructions+=1;goto B520267;
case 0x520269:goto L520269;
case 0x52026b:c.instructions+=1;goto B52026b;
case 0x520270:goto L520270;
case 0x520274:c.instructions+=2;goto B520274;
case 0x520276:c.instructions+=1;goto B520276;
case 0x520278:goto L520278;
case 0x52027c:c.instructions+=3;goto B52027c;
case 0x52027d:c.instructions+=2;goto B52027d;
case 0x52027e:c.instructions+=1;goto B52027e;
case 0x520283:goto L520283;
case 0x520287:c.instructions+=2;goto B520287;
case 0x520289:c.instructions+=1;goto B520289;
case 0x52028b:goto L52028b;
case 0x52028d:c.instructions+=3;goto B52028d;
case 0x52028e:c.instructions+=2;goto B52028e;
case 0x520290:c.instructions+=1;goto B520290;
case 0x520292:goto L520292;
case 0x520296:c.instructions+=7;goto B520296;
case 0x520297:c.instructions+=6;goto B520297;
case 0x520298:c.instructions+=5;goto B520298;
case 0x520299:c.instructions+=4;goto B520299;
case 0x52029a:c.instructions+=3;goto B52029a;
case 0x52029b:c.instructions+=2;goto B52029b;
case 0x52029e:c.instructions+=1;goto B52029e;
case 0x5202a1:goto L5202a1;
case 0x5202a5:c.instructions+=3;goto B5202a5;
case 0x5202a6:c.instructions+=2;goto B5202a6;
case 0x5202a7:c.instructions+=1;goto B5202a7;
case 0x5202a8:goto L5202a8;
case 0x5202a9:c.instructions+=2;goto B5202a9;
case 0x5202ac:c.instructions+=1;goto B5202ac;
case 0x5202b0:goto L5202b0;
case 0x5202b2:c.instructions+=41;goto B5202b2;
case 0x5202b7:c.instructions+=40;goto B5202b7;
case 0x5202bd:c.instructions+=39;goto B5202bd;
case 0x5202be:c.instructions+=38;goto B5202be;
case 0x5202c5:c.instructions+=37;goto B5202c5;
case 0x5202c6:c.instructions+=36;goto B5202c6;
case 0x5202ca:c.instructions+=35;goto B5202ca;
case 0x5202cb:c.instructions+=34;goto B5202cb;
case 0x5202cc:c.instructions+=33;goto B5202cc;
case 0x5202cd:c.instructions+=32;goto B5202cd;
case 0x5202cf:c.instructions+=31;goto B5202cf;
case 0x5202d5:c.instructions+=30;goto B5202d5;
case 0x5202d7:c.instructions+=29;goto B5202d7;
case 0x5202da:c.instructions+=28;goto B5202da;
case 0x5202dd:c.instructions+=27;goto B5202dd;
case 0x5202e1:c.instructions+=26;goto B5202e1;
case 0x5202e4:c.instructions+=25;goto B5202e4;
case 0x5202e6:c.instructions+=24;goto B5202e6;
case 0x5202e9:c.instructions+=23;goto B5202e9;
case 0x5202ec:c.instructions+=22;goto B5202ec;
case 0x5202f0:c.instructions+=21;goto B5202f0;
case 0x5202f4:c.instructions+=20;goto B5202f4;
case 0x5202f7:c.instructions+=19;goto B5202f7;
case 0x5202fb:c.instructions+=18;goto B5202fb;
case 0x520302:c.instructions+=17;goto B520302;
case 0x520309:c.instructions+=16;goto B520309;
case 0x52030a:c.instructions+=15;goto B52030a;
case 0x52030e:c.instructions+=14;goto B52030e;
case 0x520311:c.instructions+=13;goto B520311;
case 0x520314:c.instructions+=12;goto B520314;
case 0x520317:c.instructions+=11;goto B520317;
case 0x52031b:c.instructions+=10;goto B52031b;
case 0x52031e:c.instructions+=9;goto B52031e;
case 0x520321:c.instructions+=8;goto B520321;
case 0x520324:c.instructions+=7;goto B520324;
case 0x520326:c.instructions+=6;goto B520326;
case 0x520327:c.instructions+=5;goto B520327;
case 0x52032b:c.instructions+=4;goto B52032b;
case 0x520331:c.instructions+=3;goto B520331;
case 0x520338:c.instructions+=2;goto B520338;
case 0x52033b:c.instructions+=1;goto B52033b;
case 0x520340:goto L520340;
case 0x520343:c.instructions+=4;goto B520343;
case 0x520347:c.instructions+=3;goto B520347;
case 0x520349:c.instructions+=2;goto B520349;
case 0x52034e:c.instructions+=1;goto B52034e;
case 0x520350:goto L520350;
case 0x520355:c.instructions+=7;goto B520355;
case 0x52035a:c.instructions+=6;goto B52035a;
case 0x52035b:c.instructions+=5;goto B52035b;
case 0x52035e:c.instructions+=4;goto B52035e;
case 0x520360:c.instructions+=3;goto B520360;
case 0x520361:c.instructions+=2;goto B520361;
case 0x520363:c.instructions+=1;goto B520363;
case 0x520368:goto L520368;
case 0x52036a:goto L52036a;
case 0x52036c:goto L52036c;
case 0x52036f:c.instructions+=5;goto B52036f;
case 0x520371:c.instructions+=4;goto B520371;
case 0x520373:c.instructions+=3;goto B520373;
case 0x520377:c.instructions+=2;goto B520377;
case 0x52037a:c.instructions+=1;goto B52037a;
case 0x52037c:goto L52037c;
case 0x520380:goto L520380;
case 0x520383:c.instructions+=3;goto B520383;
case 0x520384:c.instructions+=2;goto B520384;
case 0x520386:c.instructions+=1;goto B520386;
case 0x52038b:goto L52038b;
case 0x52038e:c.instructions+=4;goto B52038e;
case 0x52038f:c.instructions+=3;goto B52038f;
case 0x520392:c.instructions+=2;goto B520392;
case 0x520394:c.instructions+=1;goto B520394;
case 0x520396:goto L520396;
case 0x52039a:c.instructions+=8;goto B52039a;
case 0x52039b:c.instructions+=7;goto B52039b;
case 0x52039d:c.instructions+=6;goto B52039d;
case 0x52039e:c.instructions+=5;goto B52039e;
case 0x52039f:c.instructions+=4;goto B52039f;
case 0x5203a0:c.instructions+=3;goto B5203a0;
case 0x5203a7:c.instructions+=2;goto B5203a7;
case 0x5203aa:c.instructions+=1;goto B5203aa;
case 0x5203b0:goto L5203b0;
case 0x5203b2:c.instructions+=13;goto B5203b2;
case 0x5203b7:c.instructions+=12;goto B5203b7;
case 0x5203bd:c.instructions+=11;goto B5203bd;
case 0x5203be:c.instructions+=10;goto B5203be;
case 0x5203c5:c.instructions+=9;goto B5203c5;
case 0x5203c6:c.instructions+=8;goto B5203c6;
case 0x5203c7:c.instructions+=7;goto B5203c7;
case 0x5203c9:c.instructions+=6;goto B5203c9;
case 0x5203cd:c.instructions+=5;goto B5203cd;
case 0x5203d3:c.instructions+=4;goto B5203d3;
case 0x5203d6:c.instructions+=3;goto B5203d6;
case 0x5203d8:c.instructions+=2;goto B5203d8;
case 0x5203e0:c.instructions+=1;goto B5203e0;
case 0x5203e2:goto L5203e2;
case 0x5203e5:c.instructions+=7;goto B5203e5;
case 0x5203e6:c.instructions+=6;goto B5203e6;
case 0x5203e9:c.instructions+=5;goto B5203e9;
case 0x5203ee:c.instructions+=4;goto B5203ee;
case 0x5203ef:c.instructions+=3;goto B5203ef;
case 0x5203f1:c.instructions+=2;goto B5203f1;
case 0x5203f2:c.instructions+=1;goto B5203f2;
case 0x5203f7:goto L5203f7;
case 0x5203f8:c.instructions+=1;goto B5203f8;
case 0x5203fd:goto L5203fd;
case 0x520400:c.instructions+=1;goto B520400;
case 0x520401:goto L520401;
case 0x520405:c.instructions+=6;goto B520405;
case 0x52040c:c.instructions+=5;goto B52040c;
case 0x520412:c.instructions+=4;goto B520412;
case 0x520413:c.instructions+=3;goto B520413;
case 0x52041a:c.instructions+=2;goto B52041a;
case 0x52041d:c.instructions+=1;goto B52041d;
case 0x520420:goto L520420;
case 0x520421:c.instructions+=7;goto B520421;
case 0x520423:c.instructions+=6;goto B520423;
case 0x520426:c.instructions+=5;goto B520426;
case 0x520427:c.instructions+=4;goto B520427;
case 0x520428:c.instructions+=3;goto B520428;
case 0x52042a:c.instructions+=2;goto B52042a;
case 0x52042d:c.instructions+=1;goto B52042d;
case 0x52042f:goto L52042f;
case 0x520436:goto L520436;
case 0x520440:c.instructions+=1;goto B520440;
case 0x520442:goto L520442;
case 0x520448:c.instructions+=1;goto B520448;
case 0x52044a:goto L52044a;
case 0x520454:c.instructions+=1;goto B520454;
case 0x520456:goto L520456;
case 0x520460:c.instructions+=1;goto B520460;
case 0x520462:goto L520462;
case 0x52046c:goto L52046c;
case 0x520471:c.instructions+=6;goto B520471;
case 0x520472:c.instructions+=5;goto B520472;
case 0x520477:c.instructions+=4;goto B520477;
case 0x52047d:c.instructions+=3;goto B52047d;
case 0x520483:c.instructions+=2;goto B520483;
case 0x520489:c.instructions+=1;goto B520489;
case 0x52048e:goto L52048e;
case 0x52048f:c.instructions+=7;goto B52048f;
case 0x520494:c.instructions+=6;goto B520494;
case 0x520499:c.instructions+=5;goto B520499;
case 0x52049f:c.instructions+=4;goto B52049f;
case 0x5204a1:c.instructions+=3;goto B5204a1;
case 0x5204a2:c.instructions+=2;goto B5204a2;
case 0x5204a4:c.instructions+=1;goto B5204a4;
case 0x5204a7:goto L5204a7;
case 0x5204ad:c.instructions+=5;goto B5204ad;
case 0x5204af:c.instructions+=4;goto B5204af;
case 0x5204b0:c.instructions+=3;goto B5204b0;
case 0x5204b5:c.instructions+=2;goto B5204b5;
case 0x5204b6:c.instructions+=1;goto B5204b6;
case 0x5204b9:goto L5204b9;
case 0x5204c0:c.instructions+=3;goto B5204c0;
case 0x5204c1:c.instructions+=2;goto B5204c1;
case 0x5204c2:c.instructions+=1;goto B5204c2;
case 0x5204e0:goto L5204e0;
case 0x5204e1:c.instructions+=5;goto B5204e1;
case 0x5204e3:c.instructions+=4;goto B5204e3;
case 0x5204e4:c.instructions+=3;goto B5204e4;
case 0x5204e7:c.instructions+=2;goto B5204e7;
case 0x5204ea:c.instructions+=1;goto B5204ea;
case 0x5204f0:goto L5204f0;
case 0x5204f6:c.instructions+=1;goto B5204f6;
case 0x5204fc:goto L5204fc;
case 0x5204fd:c.instructions+=3;goto B5204fd;
case 0x5204fe:c.instructions+=2;goto B5204fe;
case 0x5204ff:c.instructions+=1;goto B5204ff;
case 0x520504:goto L520504;
case 0x52050a:c.instructions+=3;goto B52050a;
case 0x52050c:c.instructions+=2;goto B52050c;
case 0x52050f:c.instructions+=1;goto B52050f;
case 0x520512:goto L520512;
case 0x520514:c.instructions+=7;goto B520514;
case 0x520516:c.instructions+=6;goto B520516;
case 0x520518:c.instructions+=5;goto B520518;
case 0x520519:c.instructions+=4;goto B520519;
case 0x52051a:c.instructions+=3;goto B52051a;
case 0x52051f:c.instructions+=2;goto B52051f;
case 0x520522:c.instructions+=1;goto B520522;
case 0x520527:goto L520527;
case 0x520529:c.instructions+=2;goto B520529;
case 0x52052b:c.instructions+=1;goto B52052b;
case 0x52052d:goto L52052d;
case 0x520532:c.instructions+=1;goto B520532;
case 0x520537:goto L520537;
case 0x52053a:c.instructions+=4;goto B52053a;
case 0x52053c:c.instructions+=3;goto B52053c;
case 0x52053d:c.instructions+=2;goto B52053d;
case 0x52053f:c.instructions+=1;goto B52053f;
case 0x520544:goto L520544;
case 0x520546:c.instructions+=4;goto B520546;
case 0x52054b:c.instructions+=3;goto B52054b;
case 0x52054d:c.instructions+=2;goto B52054d;
case 0x52054f:c.instructions+=1;goto B52054f;
case 0x520554:goto L520554;
case 0x520557:c.instructions+=5;goto B520557;
case 0x520559:c.instructions+=4;goto B520559;
case 0x52055c:c.instructions+=3;goto B52055c;
case 0x52055f:c.instructions+=2;goto B52055f;
case 0x520561:c.instructions+=1;goto B520561;
case 0x520563:goto L520563;
case 0x520565:c.instructions+=1;goto B520565;
case 0x52056a:goto L52056a;
case 0x52056d:c.instructions+=2;goto B52056d;
case 0x52056f:c.instructions+=1;goto B52056f;
case 0x520571:goto L520571;
case 0x520574:c.instructions+=2;goto B520574;
case 0x52057b:c.instructions+=1;goto B52057b;
case 0x52057d:goto L52057d;
case 0x52057f:goto L52057f;
case 0x520582:c.instructions+=5;goto B520582;
case 0x520585:c.instructions+=4;goto B520585;
case 0x520587:c.instructions+=3;goto B520587;
case 0x52058a:c.instructions+=2;goto B52058a;
case 0x52058d:c.instructions+=1;goto B52058d;
case 0x52058f:goto L52058f;
case 0x520591:c.instructions+=6;goto B520591;
case 0x520593:c.instructions+=5;goto B520593;
case 0x520594:c.instructions+=4;goto B520594;
case 0x520595:c.instructions+=3;goto B520595;
case 0x520596:c.instructions+=2;goto B520596;
case 0x52059b:c.instructions+=1;goto B52059b;
case 0x5205a0:goto L5205a0;
case 0x5205a2:c.instructions+=2;goto B5205a2;
case 0x5205a4:c.instructions+=1;goto B5205a4;
case 0x5205a6:goto L5205a6;
case 0x5205a7:c.instructions+=1;goto B5205a7;
case 0x5205a8:goto L5205a8;
case 0x5205a9:c.instructions+=2;goto B5205a9;
case 0x5205aa:c.instructions+=1;goto B5205aa;
case 0x5205b0:goto L5205b0;
case 0x5205b1:c.instructions+=10;goto B5205b1;
case 0x5205b3:c.instructions+=9;goto B5205b3;
case 0x5205b6:c.instructions+=8;goto B5205b6;
case 0x5205b8:c.instructions+=7;goto B5205b8;
case 0x5205bd:c.instructions+=6;goto B5205bd;
case 0x5205c3:c.instructions+=5;goto B5205c3;
case 0x5205c4:c.instructions+=4;goto B5205c4;
case 0x5205cb:c.instructions+=3;goto B5205cb;
case 0x5205cc:c.instructions+=2;goto B5205cc;
case 0x5205d1:c.instructions+=1;goto B5205d1;
case 0x5205d6:goto L5205d6;
case 0x5205db:c.instructions+=4;goto B5205db;
case 0x5205dc:c.instructions+=3;goto B5205dc;
case 0x5205e1:c.instructions+=2;goto B5205e1;
case 0x5205e3:c.instructions+=1;goto B5205e3;
case 0x5205e5:goto L5205e5;
case 0x5205e9:c.instructions+=1;goto B5205e9;
case 0x5205ee:goto L5205ee;
case 0x5205f3:c.instructions+=4;goto B5205f3;
case 0x5205f4:c.instructions+=3;goto B5205f4;
case 0x5205f9:c.instructions+=2;goto B5205f9;
case 0x520604:c.instructions+=1;goto B520604;
case 0x520609:goto L520609;
case 0x52060b:c.instructions+=2;goto B52060b;
case 0x52060d:c.instructions+=1;goto B52060d;
case 0x52060f:goto L52060f;
case 0x520611:c.instructions+=2;goto B520611;
case 0x520613:c.instructions+=1;goto B520613;
case 0x520616:goto L520616;
case 0x520618:c.instructions+=6;goto B520618;
case 0x52061a:c.instructions+=5;goto B52061a;
case 0x52061e:c.instructions+=4;goto B52061e;
case 0x52061f:c.instructions+=3;goto B52061f;
case 0x520621:c.instructions+=2;goto B520621;
case 0x520623:c.instructions+=1;goto B520623;
case 0x520626:goto L520626;
case 0x520628:c.instructions+=4;goto B520628;
case 0x52062c:c.instructions+=3;goto B52062c;
case 0x52062e:c.instructions+=2;goto B52062e;
case 0x52062f:c.instructions+=1;goto B52062f;
case 0x520634:goto L520634;
case 0x520637:c.instructions+=1;goto B520637;
case 0x52063c:goto L52063c;
case 0x520643:c.instructions+=1;goto B520643;
case 0x520645:goto L520645;
case 0x52064c:c.instructions+=1;goto B52064c;
case 0x520651:goto L520651;
case 0x520656:c.instructions+=4;goto B520656;
case 0x520657:c.instructions+=3;goto B520657;
case 0x52065c:c.instructions+=2;goto B52065c;
case 0x520663:c.instructions+=1;goto B520663;
case 0x520668:goto L520668;
case 0x52066a:c.instructions+=2;goto B52066a;
case 0x52066c:c.instructions+=1;goto B52066c;
case 0x52066e:goto L52066e;
case 0x520670:c.instructions+=2;goto B520670;
case 0x520672:c.instructions+=1;goto B520672;
case 0x520675:goto L520675;
case 0x520677:c.instructions+=6;goto B520677;
case 0x520679:c.instructions+=5;goto B520679;
case 0x520680:c.instructions+=4;goto B520680;
case 0x520681:c.instructions+=3;goto B520681;
case 0x520683:c.instructions+=2;goto B520683;
case 0x520685:c.instructions+=1;goto B520685;
case 0x520688:goto L520688;
case 0x52068a:c.instructions+=4;goto B52068a;
case 0x520691:c.instructions+=3;goto B520691;
case 0x520693:c.instructions+=2;goto B520693;
case 0x520694:c.instructions+=1;goto B520694;
case 0x520699:goto L520699;
case 0x52069c:c.instructions+=1;goto B52069c;
case 0x5206a1:goto L5206a1;
case 0x5206a8:goto L5206a8;
case 0x5206b3:c.instructions+=1;goto B5206b3;
case 0x5206b8:goto L5206b8;
case 0x5206bf:c.instructions+=5;goto B5206bf;
case 0x5206c6:c.instructions+=4;goto B5206c6;
case 0x5206c7:c.instructions+=3;goto B5206c7;
case 0x5206c9:c.instructions+=2;goto B5206c9;
case 0x5206ca:c.instructions+=1;goto B5206ca;
case 0x5206d0:goto L5206d0;
case 0x5206d2:c.instructions+=12;goto B5206d2;
case 0x5206d7:c.instructions+=11;goto B5206d7;
case 0x5206dd:c.instructions+=10;goto B5206dd;
case 0x5206de:c.instructions+=9;goto B5206de;
case 0x5206e5:c.instructions+=8;goto B5206e5;
case 0x5206e8:c.instructions+=7;goto B5206e8;
case 0x5206e9:c.instructions+=6;goto B5206e9;
case 0x5206ea:c.instructions+=5;goto B5206ea;
case 0x5206eb:c.instructions+=4;goto B5206eb;
case 0x5206ed:c.instructions+=3;goto B5206ed;
case 0x5206ef:c.instructions+=2;goto B5206ef;
case 0x5206f3:c.instructions+=1;goto B5206f3;
case 0x5206f8:goto L5206f8;
case 0x5206fa:c.instructions+=6;goto B5206fa;
case 0x5206fd:c.instructions+=5;goto B5206fd;
case 0x520701:c.instructions+=4;goto B520701;
case 0x520703:c.instructions+=3;goto B520703;
case 0x520705:c.instructions+=2;goto B520705;
case 0x520709:c.instructions+=1;goto B520709;
case 0x52070b:goto L52070b;
case 0x52070d:c.instructions+=4;goto B52070d;
case 0x520710:c.instructions+=3;goto B520710;
case 0x520715:c.instructions+=2;goto B520715;
case 0x520716:c.instructions+=1;goto B520716;
case 0x52071b:goto L52071b;
case 0x52071e:c.instructions+=3;goto B52071e;
case 0x520721:c.instructions+=2;goto B520721;
case 0x520723:c.instructions+=1;goto B520723;
case 0x520725:goto L520725;
case 0x520727:goto L520727;
case 0x52072a:c.instructions+=8;goto B52072a;
case 0x52072d:c.instructions+=7;goto B52072d;
case 0x52072f:c.instructions+=6;goto B52072f;
case 0x520732:c.instructions+=5;goto B520732;
case 0x520735:c.instructions+=4;goto B520735;
case 0x520737:c.instructions+=3;goto B520737;
case 0x520739:c.instructions+=2;goto B520739;
case 0x520741:c.instructions+=1;goto B520741;
case 0x520745:goto L520745;
case 0x52074b:c.instructions+=3;goto B52074b;
case 0x52074e:c.instructions+=2;goto B52074e;
case 0x520750:c.instructions+=1;goto B520750;
case 0x520752:goto L520752;
case 0x520754:c.instructions+=1;goto B520754;
case 0x520759:goto L520759;
case 0x52075b:c.instructions+=5;goto B52075b;
case 0x52075e:c.instructions+=4;goto B52075e;
case 0x520762:c.instructions+=3;goto B520762;
case 0x520764:c.instructions+=2;goto B520764;
case 0x52076c:c.instructions+=1;goto B52076c;
case 0x52076e:goto L52076e;
case 0x520774:c.instructions+=6;goto B520774;
case 0x520776:c.instructions+=5;goto B520776;
case 0x520779:c.instructions+=4;goto B520779;
case 0x52077a:c.instructions+=3;goto B52077a;
case 0x52077b:c.instructions+=2;goto B52077b;
case 0x52077f:c.instructions+=1;goto B52077f;
case 0x520784:goto L520784;
case 0x520788:c.instructions+=4;goto B520788;
case 0x52078b:c.instructions+=3;goto B52078b;
case 0x52078e:c.instructions+=2;goto B52078e;
case 0x520790:c.instructions+=1;goto B520790;
case 0x520792:goto L520792;
case 0x520794:goto L520794;
case 0x520797:c.instructions+=6;goto B520797;
case 0x520799:c.instructions+=5;goto B520799;
case 0x52079c:c.instructions+=4;goto B52079c;
case 0x52079f:c.instructions+=3;goto B52079f;
case 0x5207a1:c.instructions+=2;goto B5207a1;
case 0x5207a5:c.instructions+=1;goto B5207a5;
case 0x5207ad:goto L5207ad;
case 0x5207b2:c.instructions+=3;goto B5207b2;
case 0x5207b7:c.instructions+=2;goto B5207b7;
case 0x5207bb:c.instructions+=1;goto B5207bb;
case 0x5207bd:goto L5207bd;
case 0x5207c3:c.instructions+=2;goto B5207c3;
case 0x5207c5:c.instructions+=1;goto B5207c5;
case 0x5207c8:goto L5207c8;
case 0x5207ca:c.instructions+=3;goto B5207ca;
case 0x5207cc:c.instructions+=2;goto B5207cc;
case 0x5207ce:c.instructions+=1;goto B5207ce;
case 0x5207d3:goto L5207d3;
case 0x5207d5:c.instructions+=1;goto B5207d5;
case 0x5207d7:goto L5207d7;
case 0x5207da:c.instructions+=1;goto B5207da;
case 0x5207dc:goto L5207dc;
case 0x5207de:c.instructions+=2;goto B5207de;
case 0x5207e0:c.instructions+=1;goto B5207e0;
case 0x5207e2:goto L5207e2;
case 0x5207e4:goto L5207e4;
case 0x5207e8:c.instructions+=4;goto B5207e8;
case 0x5207eb:c.instructions+=3;goto B5207eb;
case 0x5207ed:c.instructions+=2;goto B5207ed;
case 0x5207ef:c.instructions+=1;goto B5207ef;
case 0x5207f2:goto L5207f2;
case 0x5207f4:c.instructions+=1;goto B5207f4;
case 0x5207f9:goto L5207f9;
case 0x5207fb:c.instructions+=5;goto B5207fb;
case 0x5207fe:c.instructions+=4;goto B5207fe;
case 0x520802:c.instructions+=3;goto B520802;
case 0x520804:c.instructions+=2;goto B520804;
case 0x52080c:c.instructions+=1;goto B52080c;
case 0x52080e:goto L52080e;
case 0x52080f:c.instructions+=1;goto B52080f;
case 0x520814:goto L520814;
case 0x520816:c.instructions+=4;goto B520816;
case 0x520817:c.instructions+=3;goto B520817;
case 0x52081a:c.instructions+=2;goto B52081a;
case 0x52081b:c.instructions+=1;goto B52081b;
case 0x520820:goto L520820;
case 0x520823:c.instructions+=3;goto B520823;
case 0x520826:c.instructions+=2;goto B520826;
case 0x520828:c.instructions+=1;goto B520828;
case 0x52082a:goto L52082a;
case 0x52082c:goto L52082c;
case 0x52082f:c.instructions+=8;goto B52082f;
case 0x520831:c.instructions+=7;goto B520831;
case 0x520832:c.instructions+=6;goto B520832;
case 0x520838:c.instructions+=5;goto B520838;
case 0x52083b:c.instructions+=4;goto B52083b;
case 0x520843:c.instructions+=3;goto B520843;
case 0x520846:c.instructions+=2;goto B520846;
case 0x520848:c.instructions+=1;goto B520848;
case 0x52084a:goto L52084a;
case 0x52084c:c.instructions+=2;goto B52084c;
case 0x52084e:c.instructions+=1;goto B52084e;
case 0x520853:goto L520853;
case 0x520855:c.instructions+=1;goto B520855;
case 0x520857:goto L520857;
case 0x52085d:c.instructions+=1;goto B52085d;
case 0x520860:goto L520860;
case 0x520863:c.instructions+=1;goto B520863;
case 0x520865:goto L520865;
case 0x520867:c.instructions+=2;goto B520867;
case 0x520869:c.instructions+=1;goto B520869;
case 0x52086b:goto L52086b;
case 0x52086d:goto L52086d;
case 0x520871:c.instructions+=3;goto B520871;
case 0x520873:c.instructions+=2;goto B520873;
case 0x520876:c.instructions+=1;goto B520876;
case 0x52087b:goto L52087b;
case 0x52087d:c.instructions+=5;goto B52087d;
case 0x520880:c.instructions+=4;goto B520880;
case 0x520884:c.instructions+=3;goto B520884;
case 0x520886:c.instructions+=2;goto B520886;
case 0x52088e:c.instructions+=1;goto B52088e;
case 0x520890:goto L520890;
case 0x520892:c.instructions+=4;goto B520892;
case 0x520895:c.instructions+=3;goto B520895;
case 0x52089a:c.instructions+=2;goto B52089a;
case 0x52089b:c.instructions+=1;goto B52089b;
case 0x5208a0:goto L5208a0;
case 0x5208a3:c.instructions+=3;goto B5208a3;
case 0x5208aa:c.instructions+=2;goto B5208aa;
case 0x5208ac:c.instructions+=1;goto B5208ac;
case 0x5208ae:goto L5208ae;
case 0x5208b0:goto L5208b0;
case 0x5208b3:c.instructions+=14;goto B5208b3;
case 0x5208b6:c.instructions+=13;goto B5208b6;
case 0x5208b8:c.instructions+=12;goto B5208b8;
case 0x5208bb:c.instructions+=11;goto B5208bb;
case 0x5208bd:c.instructions+=10;goto B5208bd;
case 0x5208c0:c.instructions+=9;goto B5208c0;
case 0x5208c2:c.instructions+=8;goto B5208c2;
case 0x5208c6:c.instructions+=7;goto B5208c6;
case 0x5208c9:c.instructions+=6;goto B5208c9;
case 0x5208ca:c.instructions+=5;goto B5208ca;
case 0x5208cb:c.instructions+=4;goto B5208cb;
case 0x5208cc:c.instructions+=3;goto B5208cc;
case 0x5208d3:c.instructions+=2;goto B5208d3;
case 0x5208d6:c.instructions+=1;goto B5208d6;
case 0x5208e0:goto L5208e0;
case 0x5208e1:c.instructions+=7;goto B5208e1;
case 0x5208e2:c.instructions+=6;goto B5208e2;
case 0x5208e4:c.instructions+=5;goto B5208e4;
case 0x5208e7:c.instructions+=4;goto B5208e7;
case 0x5208e8:c.instructions+=3;goto B5208e8;
case 0x5208eb:c.instructions+=2;goto B5208eb;
case 0x5208ed:c.instructions+=1;goto B5208ed;
case 0x5208ef:goto L5208ef;
case 0x5208f0:c.instructions+=1;goto B5208f0;
case 0x5208f4:goto L5208f4;
case 0x5208f7:c.instructions+=3;goto B5208f7;
case 0x5208f8:c.instructions+=2;goto B5208f8;
case 0x5208f9:c.instructions+=1;goto B5208f9;
case 0x5208fe:goto L5208fe;
case 0x520901:c.instructions+=2;goto B520901;
case 0x520903:c.instructions+=1;goto B520903;
case 0x520905:goto L520905;
case 0x520907:c.instructions+=2;goto B520907;
case 0x520909:c.instructions+=1;goto B520909;
case 0x52090b:goto L52090b;
case 0x52090c:c.instructions+=4;goto B52090c;
case 0x52090d:c.instructions+=3;goto B52090d;
case 0x52090e:c.instructions+=2;goto B52090e;
case 0x52090f:c.instructions+=1;goto B52090f;
case 0x520912:goto L520912;
case 0x520915:c.instructions+=1;goto B520915;
case 0x520916:goto L520916;
case 0x520917:c.instructions+=3;goto B520917;
case 0x520918:c.instructions+=2;goto B520918;
case 0x520919:c.instructions+=1;goto B520919;
case 0x520920:goto L520920;
case 0x520921:c.instructions+=7;goto B520921;
case 0x520923:c.instructions+=6;goto B520923;
case 0x520926:c.instructions+=5;goto B520926;
case 0x52092c:c.instructions+=4;goto B52092c;
case 0x52092f:c.instructions+=3;goto B52092f;
case 0x520930:c.instructions+=2;goto B520930;
case 0x520931:c.instructions+=1;goto B520931;
case 0x520936:goto L520936;
case 0x520939:c.instructions+=2;goto B520939;
case 0x52093b:c.instructions+=1;goto B52093b;
case 0x52093d:goto L52093d;
case 0x52093f:c.instructions+=2;goto B52093f;
case 0x520940:c.instructions+=1;goto B520940;
case 0x520945:goto L520945;
case 0x520948:c.instructions+=5;goto B520948;
case 0x52094e:c.instructions+=4;goto B52094e;
case 0x520951:c.instructions+=3;goto B520951;
case 0x520952:c.instructions+=2;goto B520952;
case 0x520953:c.instructions+=1;goto B520953;
case 0x520958:goto L520958;
case 0x52095b:c.instructions+=2;goto B52095b;
case 0x52095d:c.instructions+=1;goto B52095d;
case 0x52095f:goto L52095f;
case 0x520962:c.instructions+=5;goto B520962;
case 0x520968:c.instructions+=4;goto B520968;
case 0x52096b:c.instructions+=3;goto B52096b;
case 0x52096c:c.instructions+=2;goto B52096c;
case 0x52096d:c.instructions+=1;goto B52096d;
case 0x520972:goto L520972;
case 0x520975:c.instructions+=2;goto B520975;
case 0x520977:c.instructions+=1;goto B520977;
case 0x520979:goto L520979;
case 0x52097e:c.instructions+=2;goto B52097e;
case 0x52097f:c.instructions+=1;goto B52097f;
case 0x520980:goto L520980;
case 0x520983:c.instructions+=5;goto B520983;
case 0x520989:c.instructions+=4;goto B520989;
case 0x52098c:c.instructions+=3;goto B52098c;
case 0x52098d:c.instructions+=2;goto B52098d;
case 0x52098e:c.instructions+=1;goto B52098e;
case 0x520993:goto L520993;
case 0x520996:c.instructions+=2;goto B520996;
case 0x520998:c.instructions+=1;goto B520998;
case 0x52099a:goto L52099a;
case 0x52099f:c.instructions+=2;goto B52099f;
case 0x5209a0:c.instructions+=1;goto B5209a0;
case 0x5209a1:goto L5209a1;
case 0x5209a4:c.instructions+=5;goto B5209a4;
case 0x5209aa:c.instructions+=4;goto B5209aa;
case 0x5209ad:c.instructions+=3;goto B5209ad;
case 0x5209ae:c.instructions+=2;goto B5209ae;
case 0x5209af:c.instructions+=1;goto B5209af;
case 0x5209b4:goto L5209b4;
case 0x5209b7:c.instructions+=2;goto B5209b7;
case 0x5209b9:c.instructions+=1;goto B5209b9;
case 0x5209bb:goto L5209bb;
case 0x5209bd:c.instructions+=2;goto B5209bd;
case 0x5209be:c.instructions+=1;goto B5209be;
case 0x5209c3:goto L5209c3;
case 0x5209c6:c.instructions+=5;goto B5209c6;
case 0x5209cc:c.instructions+=4;goto B5209cc;
case 0x5209cf:c.instructions+=3;goto B5209cf;
case 0x5209d0:c.instructions+=2;goto B5209d0;
case 0x5209d1:c.instructions+=1;goto B5209d1;
case 0x5209d6:goto L5209d6;
case 0x5209d9:c.instructions+=2;goto B5209d9;
case 0x5209db:c.instructions+=1;goto B5209db;
case 0x5209dd:goto L5209dd;
case 0x5209df:c.instructions+=2;goto B5209df;
case 0x5209e0:c.instructions+=1;goto B5209e0;
case 0x5209e5:goto L5209e5;
case 0x5209e8:c.instructions+=5;goto B5209e8;
case 0x5209ee:c.instructions+=4;goto B5209ee;
case 0x5209f1:c.instructions+=3;goto B5209f1;
case 0x5209f2:c.instructions+=2;goto B5209f2;
case 0x5209f3:c.instructions+=1;goto B5209f3;
case 0x5209f8:goto L5209f8;
case 0x5209fb:c.instructions+=2;goto B5209fb;
case 0x5209fd:c.instructions+=1;goto B5209fd;
case 0x5209ff:goto L5209ff;
case 0x520a01:c.instructions+=2;goto B520a01;
case 0x520a02:c.instructions+=1;goto B520a02;
case 0x520a07:goto L520a07;
case 0x520a0a:c.instructions+=5;goto B520a0a;
case 0x520a10:c.instructions+=4;goto B520a10;
case 0x520a13:c.instructions+=3;goto B520a13;
case 0x520a14:c.instructions+=2;goto B520a14;
case 0x520a15:c.instructions+=1;goto B520a15;
case 0x520a1a:goto L520a1a;
case 0x520a1d:c.instructions+=2;goto B520a1d;
case 0x520a1f:c.instructions+=1;goto B520a1f;
case 0x520a21:goto L520a21;
case 0x520a23:c.instructions+=2;goto B520a23;
case 0x520a24:c.instructions+=1;goto B520a24;
case 0x520a29:goto L520a29;
case 0x520a2c:c.instructions+=5;goto B520a2c;
case 0x520a32:c.instructions+=4;goto B520a32;
case 0x520a35:c.instructions+=3;goto B520a35;
case 0x520a36:c.instructions+=2;goto B520a36;
case 0x520a37:c.instructions+=1;goto B520a37;
case 0x520a3c:goto L520a3c;
case 0x520a3f:c.instructions+=2;goto B520a3f;
case 0x520a41:c.instructions+=1;goto B520a41;
case 0x520a43:goto L520a43;
case 0x520a45:c.instructions+=2;goto B520a45;
case 0x520a46:c.instructions+=1;goto B520a46;
case 0x520a4b:goto L520a4b;
case 0x520a4e:c.instructions+=5;goto B520a4e;
case 0x520a54:c.instructions+=4;goto B520a54;
case 0x520a57:c.instructions+=3;goto B520a57;
case 0x520a58:c.instructions+=2;goto B520a58;
case 0x520a59:c.instructions+=1;goto B520a59;
case 0x520a5e:goto L520a5e;
case 0x520a61:c.instructions+=3;goto B520a61;
case 0x520a63:c.instructions+=2;goto B520a63;
case 0x520a68:c.instructions+=1;goto B520a68;
case 0x520a6a:goto L520a6a;
case 0x520a6f:goto L520a6f;
case 0x520a70:c.instructions+=1;goto B520a70;
case 0x520a80:goto L520a80;
case 0x520a81:c.instructions+=7;goto B520a81;
case 0x520a83:c.instructions+=6;goto B520a83;
case 0x520a86:c.instructions+=5;goto B520a86;
case 0x520a8c:c.instructions+=4;goto B520a8c;
case 0x520a8f:c.instructions+=3;goto B520a8f;
case 0x520a90:c.instructions+=2;goto B520a90;
case 0x520a91:c.instructions+=1;goto B520a91;
case 0x520a96:goto L520a96;
case 0x520a99:c.instructions+=2;goto B520a99;
case 0x520a9b:c.instructions+=1;goto B520a9b;
case 0x520a9d:goto L520a9d;
case 0x520aa2:c.instructions+=3;goto B520aa2;
case 0x520aa3:c.instructions+=2;goto B520aa3;
case 0x520aa6:c.instructions+=1;goto B520aa6;
case 0x520aac:goto L520aac;
case 0x520ab3:goto L520ab3;
case 0x520ab8:c.instructions+=2;goto B520ab8;
case 0x520ab9:c.instructions+=1;goto B520ab9;
case 0x520aba:goto L520aba;
case 0x520abf:c.instructions+=2;goto B520abf;
case 0x520ac0:c.instructions+=1;goto B520ac0;
case 0x520ac1:goto L520ac1;
case 0x520ac6:c.instructions+=2;goto B520ac6;
case 0x520ac7:c.instructions+=1;goto B520ac7;
case 0x520ac8:goto L520ac8;
case 0x520acb:c.instructions+=5;goto B520acb;
case 0x520ad1:c.instructions+=4;goto B520ad1;
case 0x520ad4:c.instructions+=3;goto B520ad4;
case 0x520ad5:c.instructions+=2;goto B520ad5;
case 0x520ad6:c.instructions+=1;goto B520ad6;
case 0x520adb:goto L520adb;
case 0x520ade:c.instructions+=2;goto B520ade;
case 0x520ae0:c.instructions+=1;goto B520ae0;
case 0x520ae6:goto L520ae6;
case 0x520ae9:c.instructions+=5;goto B520ae9;
case 0x520aef:c.instructions+=4;goto B520aef;
case 0x520af2:c.instructions+=3;goto B520af2;
case 0x520af3:c.instructions+=2;goto B520af3;
case 0x520af4:c.instructions+=1;goto B520af4;
case 0x520af9:goto L520af9;
case 0x520afc:c.instructions+=2;goto B520afc;
case 0x520afe:c.instructions+=1;goto B520afe;
case 0x520b00:goto L520b00;
case 0x520b05:c.instructions+=2;goto B520b05;
case 0x520b06:c.instructions+=1;goto B520b06;
case 0x520b07:goto L520b07;
case 0x520b0a:c.instructions+=5;goto B520b0a;
case 0x520b10:c.instructions+=4;goto B520b10;
case 0x520b13:c.instructions+=3;goto B520b13;
case 0x520b14:c.instructions+=2;goto B520b14;
case 0x520b15:c.instructions+=1;goto B520b15;
case 0x520b1a:goto L520b1a;
case 0x520b1d:c.instructions+=2;goto B520b1d;
case 0x520b1f:c.instructions+=1;goto B520b1f;
case 0x520b21:goto L520b21;
case 0x520b26:c.instructions+=2;goto B520b26;
case 0x520b27:c.instructions+=1;goto B520b27;
case 0x520b28:goto L520b28;
case 0x520b2b:c.instructions+=5;goto B520b2b;
case 0x520b31:c.instructions+=4;goto B520b31;
case 0x520b34:c.instructions+=3;goto B520b34;
case 0x520b35:c.instructions+=2;goto B520b35;
case 0x520b36:c.instructions+=1;goto B520b36;
case 0x520b3b:goto L520b3b;
case 0x520b3e:c.instructions+=2;goto B520b3e;
case 0x520b40:c.instructions+=1;goto B520b40;
case 0x520b42:goto L520b42;
case 0x520b44:c.instructions+=2;goto B520b44;
case 0x520b45:c.instructions+=1;goto B520b45;
case 0x520b4a:goto L520b4a;
case 0x520b4d:c.instructions+=5;goto B520b4d;
case 0x520b53:c.instructions+=4;goto B520b53;
case 0x520b56:c.instructions+=3;goto B520b56;
case 0x520b57:c.instructions+=2;goto B520b57;
case 0x520b58:c.instructions+=1;goto B520b58;
case 0x520b5d:goto L520b5d;
case 0x520b60:c.instructions+=2;goto B520b60;
case 0x520b62:c.instructions+=1;goto B520b62;
case 0x520b64:goto L520b64;
case 0x520b66:c.instructions+=2;goto B520b66;
case 0x520b67:c.instructions+=1;goto B520b67;
case 0x520b6c:goto L520b6c;
case 0x520b6f:c.instructions+=5;goto B520b6f;
case 0x520b75:c.instructions+=4;goto B520b75;
case 0x520b78:c.instructions+=3;goto B520b78;
case 0x520b79:c.instructions+=2;goto B520b79;
case 0x520b7a:c.instructions+=1;goto B520b7a;
case 0x520b7f:goto L520b7f;
case 0x520b82:c.instructions+=2;goto B520b82;
case 0x520b84:c.instructions+=1;goto B520b84;
case 0x520b8a:goto L520b8a;
case 0x520b8d:c.instructions+=5;goto B520b8d;
case 0x520b93:c.instructions+=4;goto B520b93;
case 0x520b96:c.instructions+=3;goto B520b96;
case 0x520b97:c.instructions+=2;goto B520b97;
case 0x520b98:c.instructions+=1;goto B520b98;
case 0x520b9d:goto L520b9d;
case 0x520ba0:c.instructions+=2;goto B520ba0;
case 0x520ba2:c.instructions+=1;goto B520ba2;
case 0x520ba4:goto L520ba4;
case 0x520ba6:c.instructions+=2;goto B520ba6;
case 0x520ba7:c.instructions+=1;goto B520ba7;
case 0x520bac:goto L520bac;
case 0x520baf:c.instructions+=5;goto B520baf;
case 0x520bb5:c.instructions+=4;goto B520bb5;
case 0x520bb8:c.instructions+=3;goto B520bb8;
case 0x520bb9:c.instructions+=2;goto B520bb9;
case 0x520bba:c.instructions+=1;goto B520bba;
case 0x520bbf:goto L520bbf;
case 0x520bc2:c.instructions+=2;goto B520bc2;
case 0x520bc4:c.instructions+=1;goto B520bc4;
case 0x520bc6:goto L520bc6;
case 0x520bc9:c.instructions+=5;goto B520bc9;
case 0x520bcf:c.instructions+=4;goto B520bcf;
case 0x520bd2:c.instructions+=3;goto B520bd2;
case 0x520bd3:c.instructions+=2;goto B520bd3;
case 0x520bd4:c.instructions+=1;goto B520bd4;
case 0x520bd9:goto L520bd9;
case 0x520bdc:c.instructions+=2;goto B520bdc;
case 0x520bde:c.instructions+=1;goto B520bde;
case 0x520be0:goto L520be0;
case 0x520be5:c.instructions+=2;goto B520be5;
case 0x520be6:c.instructions+=1;goto B520be6;
case 0x520be7:goto L520be7;
case 0x520bea:c.instructions+=5;goto B520bea;
case 0x520bf0:c.instructions+=4;goto B520bf0;
case 0x520bf3:c.instructions+=3;goto B520bf3;
case 0x520bf4:c.instructions+=2;goto B520bf4;
case 0x520bf5:c.instructions+=1;goto B520bf5;
case 0x520bfa:goto L520bfa;
case 0x520bfd:c.instructions+=2;goto B520bfd;
case 0x520bff:c.instructions+=1;goto B520bff;
case 0x520c01:goto L520c01;
case 0x520c06:c.instructions+=2;goto B520c06;
case 0x520c07:c.instructions+=1;goto B520c07;
case 0x520c08:goto L520c08;
case 0x520c0b:c.instructions+=5;goto B520c0b;
case 0x520c11:c.instructions+=4;goto B520c11;
case 0x520c14:c.instructions+=3;goto B520c14;
case 0x520c15:c.instructions+=2;goto B520c15;
case 0x520c16:c.instructions+=1;goto B520c16;
case 0x520c1b:goto L520c1b;
case 0x520c1e:c.instructions+=2;goto B520c1e;
case 0x520c20:c.instructions+=1;goto B520c20;
case 0x520c22:goto L520c22;
case 0x520c24:c.instructions+=2;goto B520c24;
case 0x520c25:c.instructions+=1;goto B520c25;
case 0x520c2a:goto L520c2a;
case 0x520c2d:c.instructions+=5;goto B520c2d;
case 0x520c33:c.instructions+=4;goto B520c33;
case 0x520c36:c.instructions+=3;goto B520c36;
case 0x520c37:c.instructions+=2;goto B520c37;
case 0x520c38:c.instructions+=1;goto B520c38;
case 0x520c3d:goto L520c3d;
case 0x520c40:c.instructions+=2;goto B520c40;
case 0x520c42:c.instructions+=1;goto B520c42;
case 0x520c44:goto L520c44;
case 0x520c49:c.instructions+=2;goto B520c49;
case 0x520c4a:c.instructions+=1;goto B520c4a;
case 0x520c4b:goto L520c4b;
case 0x520c4e:c.instructions+=5;goto B520c4e;
case 0x520c54:c.instructions+=4;goto B520c54;
case 0x520c57:c.instructions+=3;goto B520c57;
case 0x520c58:c.instructions+=2;goto B520c58;
case 0x520c59:c.instructions+=1;goto B520c59;
case 0x520c5e:goto L520c5e;
case 0x520c61:c.instructions+=2;goto B520c61;
case 0x520c63:c.instructions+=1;goto B520c63;
case 0x520c65:goto L520c65;
case 0x520c6a:c.instructions+=2;goto B520c6a;
case 0x520c6b:c.instructions+=1;goto B520c6b;
case 0x520c6c:goto L520c6c;
case 0x520c6f:c.instructions+=5;goto B520c6f;
case 0x520c75:c.instructions+=4;goto B520c75;
case 0x520c78:c.instructions+=3;goto B520c78;
case 0x520c79:c.instructions+=2;goto B520c79;
case 0x520c7a:c.instructions+=1;goto B520c7a;
case 0x520c7f:goto L520c7f;
case 0x520c82:c.instructions+=2;goto B520c82;
case 0x520c84:c.instructions+=1;goto B520c84;
case 0x520c86:goto L520c86;
case 0x520c8b:c.instructions+=3;goto B520c8b;
case 0x520c90:c.instructions+=2;goto B520c90;
case 0x520c91:c.instructions+=1;goto B520c91;
case 0x520c92:goto L520c92;
case 0x520c97:c.instructions+=2;goto B520c97;
case 0x520c98:c.instructions+=1;goto B520c98;
case 0x520cb0:goto L520cb0;
case 0x520cb2:c.instructions+=26;goto B520cb2;
case 0x520cb6:c.instructions+=25;goto B520cb6;
case 0x520cb9:c.instructions+=24;goto B520cb9;
case 0x520cbb:c.instructions+=23;goto B520cbb;
case 0x520cbe:c.instructions+=22;goto B520cbe;
case 0x520cc1:c.instructions+=21;goto B520cc1;
case 0x520cc4:c.instructions+=20;goto B520cc4;
case 0x520cc7:c.instructions+=19;goto B520cc7;
case 0x520cca:c.instructions+=18;goto B520cca;
case 0x520ccd:c.instructions+=17;goto B520ccd;
case 0x520cd1:c.instructions+=16;goto B520cd1;
case 0x520cd4:c.instructions+=15;goto B520cd4;
case 0x520cd8:c.instructions+=14;goto B520cd8;
case 0x520cdb:c.instructions+=13;goto B520cdb;
case 0x520ce0:c.instructions+=12;goto B520ce0;
case 0x520ce2:c.instructions+=11;goto B520ce2;
case 0x520ce5:c.instructions+=10;goto B520ce5;
case 0x520ce8:c.instructions+=9;goto B520ce8;
case 0x520ceb:c.instructions+=8;goto B520ceb;
case 0x520cee:c.instructions+=7;goto B520cee;
case 0x520cf2:c.instructions+=6;goto B520cf2;
case 0x520cf5:c.instructions+=5;goto B520cf5;
case 0x520cf8:c.instructions+=4;goto B520cf8;
case 0x520cfe:c.instructions+=3;goto B520cfe;
case 0x520d01:c.instructions+=2;goto B520d01;
case 0x520d04:c.instructions+=1;goto B520d04;
case 0x520d10:goto L520d10;
case 0x520d12:c.instructions+=24;goto B520d12;
case 0x520d16:c.instructions+=23;goto B520d16;
case 0x520d19:c.instructions+=22;goto B520d19;
case 0x520d1b:c.instructions+=21;goto B520d1b;
case 0x520d1e:c.instructions+=20;goto B520d1e;
case 0x520d21:c.instructions+=19;goto B520d21;
case 0x520d24:c.instructions+=18;goto B520d24;
case 0x520d27:c.instructions+=17;goto B520d27;
case 0x520d2a:c.instructions+=16;goto B520d2a;
case 0x520d2d:c.instructions+=15;goto B520d2d;
case 0x520d31:c.instructions+=14;goto B520d31;
case 0x520d34:c.instructions+=13;goto B520d34;
case 0x520d38:c.instructions+=12;goto B520d38;
case 0x520d3a:c.instructions+=11;goto B520d3a;
case 0x520d3d:c.instructions+=10;goto B520d3d;
case 0x520d42:c.instructions+=9;goto B520d42;
case 0x520d45:c.instructions+=8;goto B520d45;
case 0x520d48:c.instructions+=7;goto B520d48;
case 0x520d4b:c.instructions+=6;goto B520d4b;
case 0x520d4e:c.instructions+=5;goto B520d4e;
case 0x520d51:c.instructions+=4;goto B520d51;
case 0x520d54:c.instructions+=3;goto B520d54;
case 0x520d5a:c.instructions+=2;goto B520d5a;
case 0x520d5d:c.instructions+=1;goto B520d5d;
case 0x520d60:goto L520d60;
case 0x520d65:c.instructions+=6;goto B520d65;
case 0x520d66:c.instructions+=5;goto B520d66;
case 0x520d68:c.instructions+=4;goto B520d68;
case 0x520d6d:c.instructions+=3;goto B520d6d;
case 0x520d6e:c.instructions+=2;goto B520d6e;
case 0x520d70:c.instructions+=1;goto B520d70;
case 0x520d72:goto L520d72;
case 0x520d78:c.instructions+=1;goto B520d78;
case 0x520d7a:goto L520d7a;
case 0x520d7c:c.instructions+=1;goto B520d7c;
case 0x520d81:goto L520d81;
case 0x520d84:c.instructions+=2;goto B520d84;
case 0x520d86:c.instructions+=1;goto B520d86;
case 0x520d88:goto L520d88;
case 0x520d89:c.instructions+=5;goto B520d89;
case 0x520d8e:c.instructions+=4;goto B520d8e;
case 0x520d93:c.instructions+=3;goto B520d93;
case 0x520d95:c.instructions+=2;goto B520d95;
case 0x520d97:c.instructions+=1;goto B520d97;
case 0x520d9c:goto L520d9c;
case 0x520d9e:goto L520d9e;
case 0x520da0:goto L520da0;
case 0x520da2:c.instructions+=3;goto B520da2;
case 0x520da3:c.instructions+=2;goto B520da3;
case 0x520da5:c.instructions+=1;goto B520da5;
case 0x520da8:goto L520da8;
case 0x520da9:c.instructions+=2;goto B520da9;
case 0x520dab:c.instructions+=1;goto B520dab;
case 0x520db0:goto L520db0;
case 0x520db3:c.instructions+=3;goto B520db3;
case 0x520db5:c.instructions+=2;goto B520db5;
case 0x520dba:c.instructions+=1;goto B520dba;
case 0x520dbc:goto L520dbc;
case 0x520dc3:c.instructions+=18;goto B520dc3;
case 0x520dc6:c.instructions+=17;goto B520dc6;
case 0x520dc9:c.instructions+=16;goto B520dc9;
case 0x520dcc:c.instructions+=15;goto B520dcc;
case 0x520dcf:c.instructions+=14;goto B520dcf;
case 0x520dd3:c.instructions+=13;goto B520dd3;
case 0x520dd6:c.instructions+=12;goto B520dd6;
case 0x520dd9:c.instructions+=11;goto B520dd9;
case 0x520de0:c.instructions+=10;goto B520de0;
case 0x520de3:c.instructions+=9;goto B520de3;
case 0x520de6:c.instructions+=8;goto B520de6;
case 0x520de9:c.instructions+=7;goto B520de9;
case 0x520dec:c.instructions+=6;goto B520dec;
case 0x520def:c.instructions+=5;goto B520def;
case 0x520df3:c.instructions+=4;goto B520df3;
case 0x520df9:c.instructions+=3;goto B520df9;
case 0x520dfc:c.instructions+=2;goto B520dfc;
case 0x520e00:c.instructions+=1;goto B520e00;
case 0x520e02:goto L520e02;
case 0x520e04:goto L520e04;
case 0x520e06:c.instructions+=3;goto B520e06;
case 0x520e07:c.instructions+=2;goto B520e07;
case 0x520e09:c.instructions+=1;goto B520e09;
case 0x520e0c:goto L520e0c;
case 0x520e0e:c.instructions+=1;goto B520e0e;
case 0x520e13:goto L520e13;
case 0x520e16:c.instructions+=2;goto B520e16;
case 0x520e18:c.instructions+=1;goto B520e18;
case 0x520e1a:goto L520e1a;
case 0x520e21:c.instructions+=18;goto B520e21;
case 0x520e24:c.instructions+=17;goto B520e24;
case 0x520e27:c.instructions+=16;goto B520e27;
case 0x520e2a:c.instructions+=15;goto B520e2a;
case 0x520e2d:c.instructions+=14;goto B520e2d;
case 0x520e31:c.instructions+=13;goto B520e31;
case 0x520e34:c.instructions+=12;goto B520e34;
case 0x520e37:c.instructions+=11;goto B520e37;
case 0x520e3e:c.instructions+=10;goto B520e3e;
case 0x520e41:c.instructions+=9;goto B520e41;
case 0x520e44:c.instructions+=8;goto B520e44;
case 0x520e47:c.instructions+=7;goto B520e47;
case 0x520e4a:c.instructions+=6;goto B520e4a;
case 0x520e4d:c.instructions+=5;goto B520e4d;
case 0x520e51:c.instructions+=4;goto B520e51;
case 0x520e57:c.instructions+=3;goto B520e57;
case 0x520e5e:c.instructions+=2;goto B520e5e;
case 0x520e62:c.instructions+=1;goto B520e62;
case 0x520e64:goto L520e64;
case 0x520e66:goto L520e66;
case 0x520e68:c.instructions+=3;goto B520e68;
case 0x520e69:c.instructions+=2;goto B520e69;
case 0x520e6b:c.instructions+=1;goto B520e6b;
case 0x520e6e:goto L520e6e;
case 0x520e75:c.instructions+=1;goto B520e75;
case 0x520e77:goto L520e77;
case 0x520e79:c.instructions+=1;goto B520e79;
case 0x520e7e:goto L520e7e;
case 0x520e81:c.instructions+=2;goto B520e81;
case 0x520e83:c.instructions+=1;goto B520e83;
case 0x520e85:goto L520e85;
case 0x520e86:c.instructions+=5;goto B520e86;
case 0x520e8b:c.instructions+=4;goto B520e8b;
case 0x520e90:c.instructions+=3;goto B520e90;
case 0x520e92:c.instructions+=2;goto B520e92;
case 0x520e94:c.instructions+=1;goto B520e94;
case 0x520e99:goto L520e99;
case 0x520e9b:goto L520e9b;
case 0x520e9d:goto L520e9d;
case 0x520e9f:c.instructions+=3;goto B520e9f;
case 0x520ea0:c.instructions+=2;goto B520ea0;
case 0x520ea2:c.instructions+=1;goto B520ea2;
case 0x520ea5:goto L520ea5;
case 0x520ea7:c.instructions+=1;goto B520ea7;
case 0x520eac:goto L520eac;
case 0x520eaf:c.instructions+=2;goto B520eaf;
case 0x520eb1:c.instructions+=1;goto B520eb1;
case 0x520eb3:goto L520eb3;
case 0x520eba:c.instructions+=18;goto B520eba;
case 0x520ebd:c.instructions+=17;goto B520ebd;
case 0x520ec0:c.instructions+=16;goto B520ec0;
case 0x520ec3:c.instructions+=15;goto B520ec3;
case 0x520ec6:c.instructions+=14;goto B520ec6;
case 0x520eca:c.instructions+=13;goto B520eca;
case 0x520ecd:c.instructions+=12;goto B520ecd;
case 0x520ed0:c.instructions+=11;goto B520ed0;
case 0x520ed7:c.instructions+=10;goto B520ed7;
case 0x520eda:c.instructions+=9;goto B520eda;
case 0x520edd:c.instructions+=8;goto B520edd;
case 0x520ee0:c.instructions+=7;goto B520ee0;
case 0x520ee3:c.instructions+=6;goto B520ee3;
case 0x520ee6:c.instructions+=5;goto B520ee6;
case 0x520eea:c.instructions+=4;goto B520eea;
case 0x520ef0:c.instructions+=3;goto B520ef0;
case 0x520ef7:c.instructions+=2;goto B520ef7;
case 0x520efb:c.instructions+=1;goto B520efb;
case 0x520efd:goto L520efd;
case 0x520eff:goto L520eff;
case 0x520f01:c.instructions+=3;goto B520f01;
case 0x520f02:c.instructions+=2;goto B520f02;
case 0x520f04:c.instructions+=1;goto B520f04;
case 0x520f07:goto L520f07;
case 0x520f0c:c.instructions+=3;goto B520f0c;
case 0x520f0f:c.instructions+=2;goto B520f0f;
case 0x520f10:c.instructions+=1;goto B520f10;
case 0x520f12:goto L520f12;
case 0x520f15:c.instructions+=1;goto B520f15;
case 0x520f17:goto L520f17;
case 0x520f1a:c.instructions+=1;goto B520f1a;
case 0x520f1c:goto L520f1c;
case 0x520f26:c.instructions+=1;goto B520f26;
case 0x520f28:goto L520f28;
case 0x520f2a:c.instructions+=1;goto B520f2a;
case 0x520f2f:goto L520f2f;
case 0x520f32:c.instructions+=2;goto B520f32;
case 0x520f34:c.instructions+=1;goto B520f34;
case 0x520f36:goto L520f36;
case 0x520f37:c.instructions+=4;goto B520f37;
case 0x520f3c:c.instructions+=3;goto B520f3c;
case 0x520f41:c.instructions+=2;goto B520f41;
case 0x520f43:c.instructions+=1;goto B520f43;
case 0x520f48:goto L520f48;
case 0x520f4a:goto L520f4a;
case 0x520f4c:goto L520f4c;
case 0x520f4e:c.instructions+=3;goto B520f4e;
case 0x520f4f:c.instructions+=2;goto B520f4f;
case 0x520f51:c.instructions+=1;goto B520f51;
case 0x520f54:goto L520f54;
case 0x520f57:c.instructions+=2;goto B520f57;
case 0x520f58:c.instructions+=1;goto B520f58;
case 0x520f5d:goto L520f5d;
case 0x520f5e:c.instructions+=1;goto B520f5e;
case 0x520f63:goto L520f63;
case 0x520f66:c.instructions+=2;goto B520f66;
case 0x520f68:c.instructions+=1;goto B520f68;
case 0x520f6a:goto L520f6a;
case 0x520f6d:c.instructions+=1;goto B520f6d;
case 0x520f6f:goto L520f6f;
case 0x520f71:goto L520f71;
case 0x520f74:c.instructions+=3;goto B520f74;
case 0x520f77:c.instructions+=2;goto B520f77;
case 0x520f78:c.instructions+=1;goto B520f78;
case 0x520f7b:goto L520f7b;
case 0x520f7d:c.instructions+=4;goto B520f7d;
case 0x520f7f:c.instructions+=3;goto B520f7f;
case 0x520f80:c.instructions+=2;goto B520f80;
case 0x520f81:c.instructions+=1;goto B520f81;
case 0x520f90:goto L520f90;
case 0x520f94:c.instructions+=27;goto B520f94;
case 0x520f96:c.instructions+=26;goto B520f96;
case 0x520f9a:c.instructions+=25;goto B520f9a;
case 0x520f9d:c.instructions+=24;goto B520f9d;
case 0x520fa2:c.instructions+=23;goto B520fa2;
case 0x520fa5:c.instructions+=22;goto B520fa5;
case 0x520fa8:c.instructions+=21;goto B520fa8;
case 0x520fab:c.instructions+=20;goto B520fab;
case 0x520fae:c.instructions+=19;goto B520fae;
case 0x520fb2:c.instructions+=18;goto B520fb2;
case 0x520fb5:c.instructions+=17;goto B520fb5;
case 0x520fb7:c.instructions+=16;goto B520fb7;
case 0x520fba:c.instructions+=15;goto B520fba;
case 0x520fbe:c.instructions+=14;goto B520fbe;
case 0x520fc1:c.instructions+=13;goto B520fc1;
case 0x520fc4:c.instructions+=12;goto B520fc4;
case 0x520fc7:c.instructions+=11;goto B520fc7;
case 0x520fca:c.instructions+=10;goto B520fca;
case 0x520fce:c.instructions+=9;goto B520fce;
case 0x520fd1:c.instructions+=8;goto B520fd1;
case 0x520fd4:c.instructions+=7;goto B520fd4;
case 0x520fd7:c.instructions+=6;goto B520fd7;
case 0x520fdb:c.instructions+=5;goto B520fdb;
case 0x520fe1:c.instructions+=4;goto B520fe1;
case 0x520fe4:c.instructions+=3;goto B520fe4;
case 0x520fe7:c.instructions+=2;goto B520fe7;
case 0x520feb:c.instructions+=1;goto B520feb;
case 0x520ff0:goto L520ff0;
case 0x520ff1:c.instructions+=3;goto B520ff1;
case 0x520ff3:c.instructions+=2;goto B520ff3;
case 0x520ff5:c.instructions+=1;goto B520ff5;
case 0x520ffa:goto L520ffa;
case 0x520ffd:c.instructions+=2;goto B520ffd;
case 0x520fff:c.instructions+=1;goto B520fff;
default:missing_instruction(c.pc);}
B520001:L520001:{c.instructions+=9;NFSU2_TR(0x520001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520007:{NFSU2_TR(0x520007);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B520009:{NFSU2_TR(0x520009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52000a:{NFSU2_TR(0x52000a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B52000c:{NFSU2_TR(0x52000c);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B520012:{NFSU2_TR(0x520012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520013:{NFSU2_TR(0x520013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B520014:{NFSU2_TR(0x520014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B520015:{NFSU2_TR(0x520015);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520020:L520020:{c.instructions+=7;NFSU2_TR(0x520020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520021:{NFSU2_TR(0x520021);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B520024:{NFSU2_TR(0x520024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B520026:{NFSU2_TR(0x520026);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520028:{NFSU2_TR(0x520028);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520029:{NFSU2_TR(0x520029);
w4(R+0,u32(0x1ull));
}
B52002e:{NFSU2_TR(0x52002e);
if(r1(R+518)){{goto L520035;}}
}
B520030:L520030:{c.instructions+=2;NFSU2_TR(0x520030);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B520033:{NFSU2_TR(0x520033);
{goto L520037;}
}
B520035:L520035:{c.instructions+=1;NFSU2_TR(0x520035);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B520037:L520037:{c.instructions+=2;NFSU2_TR(0x520037);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52003b:{NFSU2_TR(0x52003b);
{goto L520040;}
}
B520040:L520040:{c.instructions+=2;NFSU2_TR(0x520040);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520042:{NFSU2_TR(0x520042);
if(r1(R+518)){{goto L520049;}}
}
B520044:L520044:{c.instructions+=2;NFSU2_TR(0x520044);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B520047:{NFSU2_TR(0x520047);
{goto L52004b;}
}
B520049:L520049:{c.instructions+=1;NFSU2_TR(0x520049);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B52004b:L52004b:{c.instructions+=2;NFSU2_TR(0x52004b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52004d:{NFSU2_TR(0x52004d);
if(r1(R+518)){{goto L520064;}}
}
B52004f:L52004f:{c.instructions+=2;NFSU2_TR(0x52004f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B520051:{NFSU2_TR(0x520051);
if(r1(R+518)){{goto L520066;}}
}
B520053:L520053:{c.instructions+=4;NFSU2_TR(0x520053);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520056:{NFSU2_TR(0x520056);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B520057:{NFSU2_TR(0x520057);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520059:{NFSU2_TR(0x520059);
if(r1(R+518)){{goto L520060;}}
}
B52005b:L52005b:{c.instructions+=2;NFSU2_TR(0x52005b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B52005e:{NFSU2_TR(0x52005e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520040u);}goto L520040;}
}
B520060:L520060:{c.instructions+=2;NFSU2_TR(0x520060);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B520062:{NFSU2_TR(0x520062);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520040u);}goto L520040;}
}
B520064:L520064:{c.instructions+=1;NFSU2_TR(0x520064);
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
B520066:L520066:{c.instructions+=3;NFSU2_TR(0x520066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B520067:{NFSU2_TR(0x520067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520068:{NFSU2_TR(0x520068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520070:L520070:{c.instructions+=7;NFSU2_TR(0x520070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B520073:{NFSU2_TR(0x520073);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520077:{NFSU2_TR(0x520077);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52007b:{NFSU2_TR(0x52007b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52007d:{NFSU2_TR(0x52007d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52007f:{NFSU2_TR(0x52007f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520083:{NFSU2_TR(0x520083);
if(r1(R+518)){{goto L520087;}}
}
B520085:L520085:{c.instructions+=1;NFSU2_TR(0x520085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B520087:L520087:{c.instructions+=5;NFSU2_TR(0x520087);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52008b:{NFSU2_TR(0x52008b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52008c:{NFSU2_TR(0x52008c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B520090:{NFSU2_TR(0x520090);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520092:{NFSU2_TR(0x520092);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5202a8;}}
}
B520098:L520098:{c.instructions+=4;NFSU2_TR(0x520098);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520099:{NFSU2_TR(0x520099);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52009a:{NFSU2_TR(0x52009a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52009b:{NFSU2_TR(0x52009b);
{goto L5200a0;}
}
B5200a0:L5200a0:{c.instructions+=17;NFSU2_TR(0x5200a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5200a4:{NFSU2_TR(0x5200a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5200a7:{NFSU2_TR(0x5200a7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x10ull))));
}
B5200aa:{NFSU2_TR(0x5200aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5200ae:{NFSU2_TR(0x5200ae);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5200b2:{NFSU2_TR(0x5200b2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B5200b4:{NFSU2_TR(0x5200b4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5200b6:{NFSU2_TR(0x5200b6);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5200b8:{NFSU2_TR(0x5200b8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5200be:{NFSU2_TR(0x5200be);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5200c0:{NFSU2_TR(0x5200c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5200c4:{NFSU2_TR(0x5200c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5200c8:{NFSU2_TR(0x5200c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5200cc:{NFSU2_TR(0x5200cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5200ce:{NFSU2_TR(0x5200ce);
__builtin_memmove((R+24),(R+20),4);
}
B5200d0:{NFSU2_TR(0x5200d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5200d3:{NFSU2_TR(0x5200d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52020c;}}
}
B5200d9:L5200d9:{c.instructions+=1;NFSU2_TR(0x5200d9);
__builtin_memmove((R+16),(R+16),4);
}
B5200e0:L5200e0:{c.instructions+=2;NFSU2_TR(0x5200e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B5200e4:{NFSU2_TR(0x5200e4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L52020c;}}
}
B5200ea:L5200ea:{c.instructions+=3;NFSU2_TR(0x5200ea);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+20),(U+0),2);
}
B5200ed:{NFSU2_TR(0x5200ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5200f1:{NFSU2_TR(0x5200f1);
if(r1(R+518)){{goto L520208;}}
}
B5200f7:L5200f7:{c.instructions+=2;NFSU2_TR(0x5200f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x5eull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5200fb:{NFSU2_TR(0x5200fb);
if(r1(R+518)){{goto L520208;}}
}
B520101:L520101:{c.instructions+=2;NFSU2_TR(0x520101);
u8 U[4];
__builtin_memmove((U+0),(R+20),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B520105:{NFSU2_TR(0x520105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5201b8;}}
}
B52010b:L52010b:{c.instructions+=6;NFSU2_TR(0x52010b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52010e:{NFSU2_TR(0x52010e);
__builtin_memmove((R+4),(R+12),4);
}
B520110:{NFSU2_TR(0x520110);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B520113:{NFSU2_TR(0x520113);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B520115:{NFSU2_TR(0x520115);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B520118:{NFSU2_TR(0x520118);
if(r1(R+518)){{goto L520133;}}
}
B52011a:L52011a:{c.instructions+=1;NFSU2_TR(0x52011a);
__builtin_memmove((R+12),(R+12),4);
}
B520120:L520120:{c.instructions+=2;NFSU2_TR(0x520120);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B520124:{NFSU2_TR(0x520124);
if(r1(R+518)){{goto L520133;}}
}
B520126:L520126:{c.instructions+=5;NFSU2_TR(0x520126);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B52012a:{NFSU2_TR(0x52012a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B52012d:{NFSU2_TR(0x52012d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B52012e:{NFSU2_TR(0x52012e);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B520131:{NFSU2_TR(0x520131);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520120u);}goto L520120;}}
}
B520133:L520133:{c.instructions+=4;NFSU2_TR(0x520133);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520135:{NFSU2_TR(0x520135);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B520138:{NFSU2_TR(0x520138);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52013a:{NFSU2_TR(0x52013a);
if(r1(R+518)){{goto L5201b4;}}
}
B52013c:L52013c:{c.instructions+=5;NFSU2_TR(0x52013c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520140:{NFSU2_TR(0x520140);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520143:{NFSU2_TR(0x520143);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520144:{NFSU2_TR(0x520144);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52014c:{NFSU2_TR(0x52014c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520151ull));
TAIL_STATIC(0x50bb10u,50b);
}
B520151:L520151:{c.instructions+=2;NFSU2_TR(0x520151);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520153:{NFSU2_TR(0x520153);
if(r1(R+518)){{goto L520163;}}
}
B520155:L520155:{c.instructions+=4;NFSU2_TR(0x520155);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B520159:{NFSU2_TR(0x520159);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52015d:{NFSU2_TR(0x52015d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B520161:{NFSU2_TR(0x520161);
{goto L520167;}
}
B520163:L520163:{c.instructions+=1;NFSU2_TR(0x520163);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B520167:L520167:{c.instructions+=5;NFSU2_TR(0x520167);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B52016b:{NFSU2_TR(0x52016b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52016f:{NFSU2_TR(0x52016f);
__builtin_memmove((R+0),(R+24),4);
}
B520171:{NFSU2_TR(0x520171);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B520175:{NFSU2_TR(0x520175);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52019c;}}
}
B520177:L520177:{c.instructions+=4;NFSU2_TR(0x520177);
__builtin_memmove((R+0),(R+12),4);
}
B520179:{NFSU2_TR(0x520179);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B52017c:{NFSU2_TR(0x52017c);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B520180:{NFSU2_TR(0x520180);
if(r1(R+518)){{goto L52019c;}}
}
B520182:L520182:{c.instructions+=2;NFSU2_TR(0x520182);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B520185:{NFSU2_TR(0x520185);
if(r1(R+518)){{goto L520199;}}
}
B520187:L520187:{c.instructions+=2;NFSU2_TR(0x520187);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B52018b:{NFSU2_TR(0x52018b);
if(r1(R+518)){{goto L520199;}}
}
B52018d:L52018d:{c.instructions+=4;NFSU2_TR(0x52018d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B520191:{NFSU2_TR(0x520191);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B520194:{NFSU2_TR(0x520194);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B520197:{NFSU2_TR(0x520197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520187u);}goto L520187;}}
}
B520199:L520199:{c.instructions+=1;NFSU2_TR(0x520199);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B52019c:L52019c:{c.instructions+=10;NFSU2_TR(0x52019c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5201a0:{NFSU2_TR(0x5201a0);
__builtin_memmove((R+8),(R+0),4);
}
B5201a2:{NFSU2_TR(0x5201a2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B5201a4:{NFSU2_TR(0x5201a4);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5201a6:{NFSU2_TR(0x5201a6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5201a8:{NFSU2_TR(0x5201a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5201ac:{NFSU2_TR(0x5201ac);
__builtin_memmove((R+24),(R+0),4);
}
B5201ae:{NFSU2_TR(0x5201ae);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5201b0:{NFSU2_TR(0x5201b0);
__builtin_memmove((R+12),(R+4),4);
}
B5201b2:{NFSU2_TR(0x5201b2);
{goto L5201dd;}
}
B5201b4:L5201b4:{c.instructions+=1;NFSU2_TR(0x5201b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5201b8:L5201b8:{c.instructions+=6;NFSU2_TR(0x5201b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5201bc:{NFSU2_TR(0x5201bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5201bf:{NFSU2_TR(0x5201bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5201c1:{NFSU2_TR(0x5201c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5201c2:{NFSU2_TR(0x5201c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5201c3:{NFSU2_TR(0x5201c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5201c8ull));
TAIL_STATIC(0x50bc10u,50b);
}
B5201c8:L5201c8:{c.instructions+=7;NFSU2_TR(0x5201c8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5201cc:{NFSU2_TR(0x5201cc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5201cd:{NFSU2_TR(0x5201cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B5201d0:{NFSU2_TR(0x5201d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5201d2:{NFSU2_TR(0x5201d2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5201d6:{NFSU2_TR(0x5201d6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+28),(U+0),2);
}
B5201d9:{NFSU2_TR(0x5201d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5201dd:L5201dd:{c.instructions+=12;NFSU2_TR(0x5201dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5201e1:{NFSU2_TR(0x5201e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5201e4:{NFSU2_TR(0x5201e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5201e8:{NFSU2_TR(0x5201e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5201ec:{NFSU2_TR(0x5201ec);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x10ull))));
}
B5201ef:{NFSU2_TR(0x5201ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5201f3:{NFSU2_TR(0x5201f3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5201f7:{NFSU2_TR(0x5201f7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5201f9:{NFSU2_TR(0x5201f9);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5201fb:{NFSU2_TR(0x5201fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5201fd:{NFSU2_TR(0x5201fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B520200:{NFSU2_TR(0x520200);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5200e0u);}goto L5200e0;}}
}
B520206:L520206:{c.instructions+=1;NFSU2_TR(0x520206);
{goto L52020c;}
}
B520208:L520208:{c.instructions+=1;NFSU2_TR(0x520208);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52020c:L52020c:{c.instructions+=2;NFSU2_TR(0x52020c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52020e:{NFSU2_TR(0x52020e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L520270;}}
}
B520210:L520210:{c.instructions+=3;NFSU2_TR(0x520210);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B520213:{NFSU2_TR(0x520213);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520215:{NFSU2_TR(0x520215);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L520231;}}
}
B520217:L520217:{c.instructions+=2;NFSU2_TR(0x520217);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B52021d:{NFSU2_TR(0x52021d);
if(r1(R+518)){{goto L520226;}}
}
B52021f:L52021f:{c.instructions+=3;NFSU2_TR(0x52021f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B520220:{NFSU2_TR(0x520220);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520222:{NFSU2_TR(0x520222);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520217u);}goto L520217;}}
}
B520224:L520224:{c.instructions+=1;NFSU2_TR(0x520224);
{goto L520231;}
}
B520226:L520226:{c.instructions+=2;NFSU2_TR(0x520226);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520228:{NFSU2_TR(0x520228);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L520231;}}
}
B52022a:L52022a:{c.instructions+=3;NFSU2_TR(0x52022a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52022b:{NFSU2_TR(0x52022b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52022f:{NFSU2_TR(0x52022f);
__builtin_memmove((R+12),(R+0),4);
}
B520231:L520231:{c.instructions+=3;NFSU2_TR(0x520231);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B520235:{NFSU2_TR(0x520235);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B520237:{NFSU2_TR(0x520237);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520244;}}
}
B520239:L520239:{c.instructions+=4;NFSU2_TR(0x520239);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52023d:{NFSU2_TR(0x52023d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52023e:{NFSU2_TR(0x52023e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52023f:{NFSU2_TR(0x52023f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520244ull));
TAIL_STATIC(0x50dbf0u,50d);
}
B520244:L520244:{c.instructions+=3;NFSU2_TR(0x520244);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520248:{NFSU2_TR(0x520248);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52024a:{NFSU2_TR(0x52024a);
if(r1(R+518)){{goto L520255;}}
}
B52024c:L52024c:{c.instructions+=4;NFSU2_TR(0x52024c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52024e:{NFSU2_TR(0x52024e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B520251:{NFSU2_TR(0x520251);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B520253:{NFSU2_TR(0x520253);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B520255:L520255:{c.instructions+=6;NFSU2_TR(0x520255);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B520259:{NFSU2_TR(0x520259);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52025d:{NFSU2_TR(0x52025d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B520261:{NFSU2_TR(0x520261);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520263:{NFSU2_TR(0x520263);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520267:{NFSU2_TR(0x520267);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5202a1;}}
}
B520269:L520269:{c.instructions+=2;NFSU2_TR(0x520269);
__builtin_memmove((R+20),(R+12),4);
}
B52026b:{NFSU2_TR(0x52026b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5200a0u);}goto L5200a0;}
}
B520270:L520270:{c.instructions+=3;NFSU2_TR(0x520270);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B520274:{NFSU2_TR(0x520274);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B520276:{NFSU2_TR(0x520276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520283;}}
}
B520278:L520278:{c.instructions+=4;NFSU2_TR(0x520278);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52027c:{NFSU2_TR(0x52027c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52027d:{NFSU2_TR(0x52027d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52027e:{NFSU2_TR(0x52027e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520283ull));
TAIL_STATIC(0x50dbf0u,50d);
}
B520283:L520283:{c.instructions+=3;NFSU2_TR(0x520283);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520287:{NFSU2_TR(0x520287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520289:{NFSU2_TR(0x520289);
if(r1(R+518)){{goto L520292;}}
}
B52028b:L52028b:{c.instructions+=4;NFSU2_TR(0x52028b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52028d:{NFSU2_TR(0x52028d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B52028e:{NFSU2_TR(0x52028e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B520290:{NFSU2_TR(0x520290);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B520292:L520292:{c.instructions+=8;NFSU2_TR(0x520292);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520296:{NFSU2_TR(0x520296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B520297:{NFSU2_TR(0x520297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520298:{NFSU2_TR(0x520298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B520299:{NFSU2_TR(0x520299);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52029a:{NFSU2_TR(0x52029a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52029b:{NFSU2_TR(0x52029b);
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
B52029e:{NFSU2_TR(0x52029e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5202a1:L5202a1:{c.instructions+=4;NFSU2_TR(0x5202a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5202a5:{NFSU2_TR(0x5202a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5202a6:{NFSU2_TR(0x5202a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5202a7:{NFSU2_TR(0x5202a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5202a8:L5202a8:{c.instructions+=3;NFSU2_TR(0x5202a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5202a9:{NFSU2_TR(0x5202a9);
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
B5202ac:{NFSU2_TR(0x5202ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5202b0:L5202b0:{c.instructions+=42;NFSU2_TR(0x5202b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5202b2:{NFSU2_TR(0x5202b2);
u8 U[4];
w4(U+0,u32(0x77719cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5202b7:{NFSU2_TR(0x5202b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5202bd:{NFSU2_TR(0x5202bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5202be:{NFSU2_TR(0x5202be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5202c5:{NFSU2_TR(0x5202c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5202c6:{NFSU2_TR(0x5202c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5202ca:{NFSU2_TR(0x5202ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5202cb:{NFSU2_TR(0x5202cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5202cc:{NFSU2_TR(0x5202cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5202cd:{NFSU2_TR(0x5202cd);
__builtin_memmove((R+24),(R+4),4);
}
B5202cf:{NFSU2_TR(0x5202cf);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5202d5:{NFSU2_TR(0x5202d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5202d7:{NFSU2_TR(0x5202d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5202da:{NFSU2_TR(0x5202da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5202dd:{NFSU2_TR(0x5202dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5202e1:{NFSU2_TR(0x5202e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5202e4:{NFSU2_TR(0x5202e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5202e6:{NFSU2_TR(0x5202e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5202e9:{NFSU2_TR(0x5202e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5202ec:{NFSU2_TR(0x5202ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5202f0:{NFSU2_TR(0x5202f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5202f4:{NFSU2_TR(0x5202f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5202f7:{NFSU2_TR(0x5202f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5202fb:{NFSU2_TR(0x5202fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xc38a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520302:{NFSU2_TR(0x520302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520309:{NFSU2_TR(0x520309);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52030a:{NFSU2_TR(0x52030a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52030e:{NFSU2_TR(0x52030e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520311:{NFSU2_TR(0x520311);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520314:{NFSU2_TR(0x520314);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520317:{NFSU2_TR(0x520317);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52031b:{NFSU2_TR(0x52031b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52031e:{NFSU2_TR(0x52031e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B520321:{NFSU2_TR(0x520321);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B520324:{NFSU2_TR(0x520324);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B520326:{NFSU2_TR(0x520326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520327:{NFSU2_TR(0x520327);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52032b:{NFSU2_TR(0x52032b);
u8 U[4];
w4(U+0,u32(0x79b4f8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B520331:{NFSU2_TR(0x520331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520338:{NFSU2_TR(0x520338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52033b:{NFSU2_TR(0x52033b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520340ull));
TAIL_STATIC(0x575620u,575);
}
B520340:L520340:{c.instructions+=5;NFSU2_TR(0x520340);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520343:{NFSU2_TR(0x520343);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520347:{NFSU2_TR(0x520347);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520349:{NFSU2_TR(0x520349);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52034e:{NFSU2_TR(0x52034e);
if(r1(R+518)){{goto L52036a;}}
}
B520350:L520350:{c.instructions+=8;NFSU2_TR(0x520350);
u8 U[4];
w4(U+0,u32(0x50ddf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520355:{NFSU2_TR(0x520355);
u8 U[4];
w4(U+0,u32(0x50ddd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52035a:{NFSU2_TR(0x52035a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52035b:{NFSU2_TR(0x52035b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52035e:{NFSU2_TR(0x52035e);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520360:{NFSU2_TR(0x520360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520361:{NFSU2_TR(0x520361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B520363:{NFSU2_TR(0x520363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520368ull));
TAIL_STATIC(0x75c461u,75c);
}
B520368:L520368:{c.instructions+=1;NFSU2_TR(0x520368);
{goto L52036c;}
}
B52036a:L52036a:{c.instructions+=1;NFSU2_TR(0x52036a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52036c:L52036c:{c.instructions+=6;NFSU2_TR(0x52036c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52036f:{NFSU2_TR(0x52036f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B520371:{NFSU2_TR(0x520371);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520373:{NFSU2_TR(0x520373);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520377:{NFSU2_TR(0x520377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52037a:{NFSU2_TR(0x52037a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L520396;}}
}
B52037c:L52037c:{c.instructions+=1;NFSU2_TR(0x52037c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B520380:L520380:{c.instructions+=4;NFSU2_TR(0x520380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520383:{NFSU2_TR(0x520383);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520384:{NFSU2_TR(0x520384);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B520386:{NFSU2_TR(0x520386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52038bull));
TAIL_STATIC(0x50de10u,50d);
}
B52038b:L52038b:{c.instructions+=5;NFSU2_TR(0x52038b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52038e:{NFSU2_TR(0x52038e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B52038f:{NFSU2_TR(0x52038f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B520392:{NFSU2_TR(0x520392);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B520394:{NFSU2_TR(0x520394);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520380u);}goto L520380;}}
}
B520396:L520396:{c.instructions+=9;NFSU2_TR(0x520396);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52039a:{NFSU2_TR(0x52039a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52039b:{NFSU2_TR(0x52039b);
__builtin_memmove((R+0),(R+24),4);
}
B52039d:{NFSU2_TR(0x52039d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52039e:{NFSU2_TR(0x52039e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52039f:{NFSU2_TR(0x52039f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5203a0:{NFSU2_TR(0x5203a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5203a7:{NFSU2_TR(0x5203a7);
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
B5203aa:{NFSU2_TR(0x5203aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5203b0:L5203b0:{c.instructions+=14;NFSU2_TR(0x5203b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203b2:{NFSU2_TR(0x5203b2);
u8 U[4];
w4(U+0,u32(0x777168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203b7:{NFSU2_TR(0x5203b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5203bd:{NFSU2_TR(0x5203bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203be:{NFSU2_TR(0x5203be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5203c5:{NFSU2_TR(0x5203c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203c6:{NFSU2_TR(0x5203c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203c7:{NFSU2_TR(0x5203c7);
__builtin_memmove((R+24),(R+4),4);
}
B5203c9:{NFSU2_TR(0x5203c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5203cd:{NFSU2_TR(0x5203cd);
u8 U[4];
w4(U+0,u32(0x79b4f8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5203d3:{NFSU2_TR(0x5203d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5203d6:{NFSU2_TR(0x5203d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5203d8:{NFSU2_TR(0x5203d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5203e0:{NFSU2_TR(0x5203e0);
if(r1(R+518)){{goto L520401;}}
}
B5203e2:L5203e2:{c.instructions+=8;NFSU2_TR(0x5203e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5203e5:{NFSU2_TR(0x5203e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203e6:{NFSU2_TR(0x5203e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5203e9:{NFSU2_TR(0x5203e9);
u8 U[4];
w4(U+0,u32(0x50ddf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203ee:{NFSU2_TR(0x5203ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203ef:{NFSU2_TR(0x5203ef);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203f1:{NFSU2_TR(0x5203f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203f2:{NFSU2_TR(0x5203f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5203f7ull));
TAIL_STATIC(0x75c401u,75c);
}
B5203f7:L5203f7:{c.instructions+=2;NFSU2_TR(0x5203f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5203f8:{NFSU2_TR(0x5203f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5203fdull));
TAIL_STATIC(0x575630u,575);
}
B5203fd:L5203fd:{c.instructions+=2;NFSU2_TR(0x5203fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520400:{NFSU2_TR(0x520400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B520401:L520401:{c.instructions+=7;NFSU2_TR(0x520401);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520405:{NFSU2_TR(0x520405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52040c:{NFSU2_TR(0x52040c);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+24)),r4(U+0));
}
B520412:{NFSU2_TR(0x520412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520413:{NFSU2_TR(0x520413);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52041a:{NFSU2_TR(0x52041a);
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
B52041d:{NFSU2_TR(0x52041d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520420:L520420:{c.instructions+=8;NFSU2_TR(0x520420);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520421:{NFSU2_TR(0x520421);
__builtin_memmove((R+20),(R+16),4);
}
B520423:{NFSU2_TR(0x520423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520426:{NFSU2_TR(0x520426);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520427:{NFSU2_TR(0x520427);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B520428:{NFSU2_TR(0x520428);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52042a:{NFSU2_TR(0x52042a);
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
B52042d:{NFSU2_TR(0x52042d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52046c;}}
}
B52042f:L52042f:{c.instructions+=1;NFSU2_TR(0x52042f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5204c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520436:L520436:{c.instructions+=2;NFSU2_TR(0x520436);
s4(0x838990,u32(0x2ull));
}
B520440:{NFSU2_TR(0x520440);
{goto L52046c;}
}
B520442:L520442:{c.instructions+=2;NFSU2_TR(0x520442);
__builtin_memmove(gp(0x838990),(R+12),4);
}
B520448:{NFSU2_TR(0x520448);
{goto L52046c;}
}
B52044a:L52044a:{c.instructions+=2;NFSU2_TR(0x52044a);
s4(0x838990,u32(0x1ull));
}
B520454:{NFSU2_TR(0x520454);
{goto L52046c;}
}
B520456:L520456:{c.instructions+=2;NFSU2_TR(0x520456);
s4(0x838990,u32(0x3ull));
}
B520460:{NFSU2_TR(0x520460);
{goto L52046c;}
}
B520462:L520462:{c.instructions+=1;NFSU2_TR(0x520462);
s4(0x838990,u32(0x6ull));
}
B52046c:L52046c:{c.instructions+=7;NFSU2_TR(0x52046c);
__builtin_memmove((R+0),gp(0x863480),4);
}
B520471:{NFSU2_TR(0x520471);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520472:{NFSU2_TR(0x520472);
w4(R+4,u32(0x83ad90ull));
}
B520477:{NFSU2_TR(0x520477);
__builtin_memmove(gp(0x83898c),(R+12),4);
}
B52047d:{NFSU2_TR(0x52047d);
__builtin_memmove(gp(0x838982),(R+12),1);
}
B520483:{NFSU2_TR(0x520483);
__builtin_memmove(gp(0x839bc2),(R+12),1);
}
B520489:{NFSU2_TR(0x520489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52048eull));
TAIL_STATIC(0x5035c0u,503);
}
B52048e:L52048e:{c.instructions+=8;NFSU2_TR(0x52048e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52048f:{NFSU2_TR(0x52048f);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520494:{NFSU2_TR(0x520494);
__builtin_memmove(gp(0x8389ac),(R+0),4);
}
B520499:{NFSU2_TR(0x520499);
__builtin_memmove(gp(0x8389b0),(R+12),4);
}
B52049f:{NFSU2_TR(0x52049f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5204a1:{NFSU2_TR(0x5204a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204a2:{NFSU2_TR(0x5204a2);
__builtin_memmove((R+4),(R+0),4);
}
B5204a4:{NFSU2_TR(0x5204a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5204a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5204a7:L5204a7:{c.instructions+=6;NFSU2_TR(0x5204a7);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5204ad:{NFSU2_TR(0x5204ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5204af:{NFSU2_TR(0x5204af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204b0:{NFSU2_TR(0x5204b0);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204b5:{NFSU2_TR(0x5204b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204b6:{NFSU2_TR(0x5204b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5204b9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5204b9:L5204b9:{c.instructions+=4;NFSU2_TR(0x5204b9);
s1(0x838980,u8(0x1ull));
}
B5204c0:{NFSU2_TR(0x5204c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5204c1:{NFSU2_TR(0x5204c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5204c2:{NFSU2_TR(0x5204c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5204e0:L5204e0:{c.instructions+=6;NFSU2_TR(0x5204e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204e1:{NFSU2_TR(0x5204e1);
__builtin_memmove((R+20),(R+16),4);
}
B5204e3:{NFSU2_TR(0x5204e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204e4:{NFSU2_TR(0x5204e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5204e7:{NFSU2_TR(0x5204e7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x61ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x61ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5204ea:{NFSU2_TR(0x5204ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5205a8;}}
}
B5204f0:L5204f0:{c.instructions+=2;NFSU2_TR(0x5204f0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x98ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x98ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5204f6:{NFSU2_TR(0x5204f6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5205a8;}}
}
B5204fc:L5204fc:{c.instructions+=4;NFSU2_TR(0x5204fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204fd:{NFSU2_TR(0x5204fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204fe:{NFSU2_TR(0x5204fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5204ff:{NFSU2_TR(0x5204ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520504ull));
TAIL_STATIC(0x60fee0u,60f);
}
B520504:L520504:{c.instructions+=4;NFSU2_TR(0x520504);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B52050a:{NFSU2_TR(0x52050a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52050c:{NFSU2_TR(0x52050c);
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
B52050f:{NFSU2_TR(0x52050f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520512ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520512:L520512:{c.instructions+=8;NFSU2_TR(0x520512);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520514:{NFSU2_TR(0x520514);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520516:{NFSU2_TR(0x520516);
__builtin_memmove((R+28),(R+0),4);
}
B520518:{NFSU2_TR(0x520518);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520519:{NFSU2_TR(0x520519);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52051a:{NFSU2_TR(0x52051a);
w4(R+4,u32(0x8a2b68ull));
}
B52051f:{NFSU2_TR(0x52051f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520522:{NFSU2_TR(0x520522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520527ull));
TAIL_STATIC(0x61ba30u,61b);
}
B520527:L520527:{c.instructions+=3;NFSU2_TR(0x520527);
__builtin_memmove((R+24),(R+0),4);
}
B520529:{NFSU2_TR(0x520529);
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
B52052b:{NFSU2_TR(0x52052b);
if(r1(R+518)){{goto L5205a6;}}
}
B52052d:L52052d:{c.instructions+=2;NFSU2_TR(0x52052d);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520532:{NFSU2_TR(0x520532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520537ull));
TAIL_STATIC(0x43db50u,43d);
}
B520537:L520537:{c.instructions+=5;NFSU2_TR(0x520537);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52053a:{NFSU2_TR(0x52053a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52053c:{NFSU2_TR(0x52053c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52053d:{NFSU2_TR(0x52053d);
__builtin_memmove((R+4),(R+24),4);
}
B52053f:{NFSU2_TR(0x52053f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520544ull));
TAIL_STATIC(0x61b500u,61b);
}
B520544:L520544:{c.instructions+=5;NFSU2_TR(0x520544);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520546:{NFSU2_TR(0x520546);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52054b:{NFSU2_TR(0x52054b);
__builtin_memmove((R+4),(R+24),4);
}
B52054d:{NFSU2_TR(0x52054d);
__builtin_memmove((R+28),(R+0),4);
}
B52054f:{NFSU2_TR(0x52054f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520554ull));
TAIL_STATIC(0x61b500u,61b);
}
B520554:L520554:{c.instructions+=6;NFSU2_TR(0x520554);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B520557:{NFSU2_TR(0x520557);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520559:{NFSU2_TR(0x520559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52055c:{NFSU2_TR(0x52055c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B52055f:{NFSU2_TR(0x52055f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B520561:{NFSU2_TR(0x520561);
if(r1(R+518)){{goto L52058f;}}
}
B520563:L520563:{c.instructions+=2;NFSU2_TR(0x520563);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520565:{NFSU2_TR(0x520565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52056aull));
TAIL_STATIC(0x575620u,575);
}
B52056a:L52056a:{c.instructions+=3;NFSU2_TR(0x52056a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52056d:{NFSU2_TR(0x52056d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52056f:{NFSU2_TR(0x52056f);
if(r1(R+518)){{goto L52057d;}}
}
B520571:L520571:{c.instructions+=3;NFSU2_TR(0x520571);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520574:{NFSU2_TR(0x520574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52057b:{NFSU2_TR(0x52057b);
{goto L52057f;}
}
B52057d:L52057d:{c.instructions+=1;NFSU2_TR(0x52057d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52057f:L52057f:{c.instructions+=6;NFSU2_TR(0x52057f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520582:{NFSU2_TR(0x520582);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520585:{NFSU2_TR(0x520585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B520587:{NFSU2_TR(0x520587);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52058a:{NFSU2_TR(0x52058a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52058d:{NFSU2_TR(0x52058d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52058f:L52058f:{c.instructions+=7;NFSU2_TR(0x52058f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520591:{NFSU2_TR(0x520591);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520593:{NFSU2_TR(0x520593);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520594:{NFSU2_TR(0x520594);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520595:{NFSU2_TR(0x520595);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520596:{NFSU2_TR(0x520596);
w4(R+4,u32(0x8a2b68ull));
}
B52059b:{NFSU2_TR(0x52059b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5205a0ull));
TAIL_STATIC(0x61ba50u,61b);
}
B5205a0:L5205a0:{c.instructions+=3;NFSU2_TR(0x5205a0);
__builtin_memmove((R+24),(R+0),4);
}
B5205a2:{NFSU2_TR(0x5205a2);
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
B5205a4:{NFSU2_TR(0x5205a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52052du);}goto L52052d;}}
}
B5205a6:L5205a6:{c.instructions+=2;NFSU2_TR(0x5205a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5205a7:{NFSU2_TR(0x5205a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5205a8:L5205a8:{c.instructions+=3;NFSU2_TR(0x5205a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5205a9:{NFSU2_TR(0x5205a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5205aa:{NFSU2_TR(0x5205aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5205b0:L5205b0:{c.instructions+=11;NFSU2_TR(0x5205b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5205b1:{NFSU2_TR(0x5205b1);
__builtin_memmove((R+20),(R+16),4);
}
B5205b3:{NFSU2_TR(0x5205b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5205b6:{NFSU2_TR(0x5205b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5205b8:{NFSU2_TR(0x5205b8);
u8 U[4];
w4(U+0,u32(0x7771c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5205bd:{NFSU2_TR(0x5205bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5205c3:{NFSU2_TR(0x5205c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5205c4:{NFSU2_TR(0x5205c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5205cb:{NFSU2_TR(0x5205cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5205cc:{NFSU2_TR(0x5205cc);
w4(R+0,u32(0x11ecull));
}
B5205d1:{NFSU2_TR(0x5205d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5205d6ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B5205d6:L5205d6:{c.instructions+=5;NFSU2_TR(0x5205d6);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5205db:{NFSU2_TR(0x5205db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5205dc:{NFSU2_TR(0x5205dc);
w4(R+24,u32(0x1ull));
}
B5205e1:{NFSU2_TR(0x5205e1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5205e3:{NFSU2_TR(0x5205e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520645;}}
}
B5205e5:L5205e5:{c.instructions+=2;NFSU2_TR(0x5205e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5205e9:{NFSU2_TR(0x5205e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5205eeull));
TAIL_STATIC(0x40c910u,40c);
}
B5205ee:L5205ee:{c.instructions+=5;NFSU2_TR(0x5205ee);
__builtin_memmove((R+0),gp(0x863480),4);
}
B5205f3:{NFSU2_TR(0x5205f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5205f4:{NFSU2_TR(0x5205f4);
w4(R+4,u32(0x83ad90ull));
}
B5205f9:{NFSU2_TR(0x5205f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1200ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520604:{NFSU2_TR(0x520604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520609ull));
TAIL_STATIC(0x503510u,503);
}
B520609:L520609:{c.instructions+=3;NFSU2_TR(0x520609);
__builtin_memmove((R+24),(R+0),4);
}
B52060b:{NFSU2_TR(0x52060b);
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
B52060d:{NFSU2_TR(0x52060d);
if(r1(R+518)){{goto L520626;}}
}
B52060f:L52060f:{c.instructions+=3;NFSU2_TR(0x52060f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520611:{NFSU2_TR(0x520611);
__builtin_memmove((R+4),(R+24),4);
}
B520613:{NFSU2_TR(0x520613);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520616ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520616:L520616:{c.instructions+=7;NFSU2_TR(0x520616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B520618:{NFSU2_TR(0x520618);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52061a:{NFSU2_TR(0x52061a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52061e:{NFSU2_TR(0x52061e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52061f:{NFSU2_TR(0x52061f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520621:{NFSU2_TR(0x520621);
__builtin_memmove((R+4),(R+24),4);
}
B520623:{NFSU2_TR(0x520623);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520626ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520626:L520626:{c.instructions+=5;NFSU2_TR(0x520626);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520628:{NFSU2_TR(0x520628);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52062c:{NFSU2_TR(0x52062c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52062e:{NFSU2_TR(0x52062e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52062f:{NFSU2_TR(0x52062f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520634ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B520634:L520634:{c.instructions+=2;NFSU2_TR(0x520634);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B520637:{NFSU2_TR(0x520637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52063cull));
TAIL_STATIC(0x4a78b0u,4a7);
}
B52063c:L52063c:{c.instructions+=2;NFSU2_TR(0x52063c);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B520643:{NFSU2_TR(0x520643);
{goto L5206a8;}
}
B520645:L520645:{c.instructions+=2;NFSU2_TR(0x520645);
u8 U[4];
w4(U+0,u32(u32(u32(0x900ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52064c:{NFSU2_TR(0x52064c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520651ull));
TAIL_STATIC(0x40c910u,40c);
}
B520651:L520651:{c.instructions+=5;NFSU2_TR(0x520651);
__builtin_memmove((R+0),gp(0x83aab8),4);
}
B520656:{NFSU2_TR(0x520656);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520657:{NFSU2_TR(0x520657);
w4(R+4,u32(0x83ad90ull));
}
B52065c:{NFSU2_TR(0x52065c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1200ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520663:{NFSU2_TR(0x520663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520668ull));
TAIL_STATIC(0x503510u,503);
}
B520668:L520668:{c.instructions+=3;NFSU2_TR(0x520668);
__builtin_memmove((R+24),(R+0),4);
}
B52066a:{NFSU2_TR(0x52066a);
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
B52066c:{NFSU2_TR(0x52066c);
if(r1(R+518)){{goto L520688;}}
}
B52066e:L52066e:{c.instructions+=3;NFSU2_TR(0x52066e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520670:{NFSU2_TR(0x520670);
__builtin_memmove((R+4),(R+24),4);
}
B520672:{NFSU2_TR(0x520672);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520675ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520675:L520675:{c.instructions+=7;NFSU2_TR(0x520675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B520677:{NFSU2_TR(0x520677);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520679:{NFSU2_TR(0x520679);
u8 U[4];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B520680:{NFSU2_TR(0x520680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520681:{NFSU2_TR(0x520681);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520683:{NFSU2_TR(0x520683);
__builtin_memmove((R+4),(R+24),4);
}
B520685:{NFSU2_TR(0x520685);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520688ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520688:L520688:{c.instructions+=5;NFSU2_TR(0x520688);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52068a:{NFSU2_TR(0x52068a);
u8 U[4];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B520691:{NFSU2_TR(0x520691);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520693:{NFSU2_TR(0x520693);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520694:{NFSU2_TR(0x520694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520699ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B520699:L520699:{c.instructions+=2;NFSU2_TR(0x520699);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52069c:{NFSU2_TR(0x52069c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5206a1ull));
TAIL_STATIC(0x4a78b0u,4a7);
}
B5206a1:L5206a1:{c.instructions+=1;NFSU2_TR(0x5206a1);
u8 U[4];
w4(U+0,u32(u32(u32(0xc84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5206a8:L5206a8:{c.instructions+=2;NFSU2_TR(0x5206a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x11fcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5206b3:{NFSU2_TR(0x5206b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5206b8ull));
TAIL_STATIC(0x4022c0u,402);
}
B5206b8:L5206b8:{c.instructions+=6;NFSU2_TR(0x5206b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x11f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5206bf:{NFSU2_TR(0x5206bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5206c6:{NFSU2_TR(0x5206c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5206c7:{NFSU2_TR(0x5206c7);
__builtin_memmove((R+16),(R+20),4);
}
B5206c9:{NFSU2_TR(0x5206c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5206ca:{NFSU2_TR(0x5206ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5206d0:L5206d0:{c.instructions+=13;NFSU2_TR(0x5206d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5206d2:{NFSU2_TR(0x5206d2);
u8 U[4];
w4(U+0,u32(0x777217ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5206d7:{NFSU2_TR(0x5206d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5206dd:{NFSU2_TR(0x5206dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5206de:{NFSU2_TR(0x5206de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5206e5:{NFSU2_TR(0x5206e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5206e8:{NFSU2_TR(0x5206e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5206e9:{NFSU2_TR(0x5206e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5206ea:{NFSU2_TR(0x5206ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5206eb:{NFSU2_TR(0x5206eb);
__builtin_memmove((R+24),(R+4),4);
}
B5206ed:{NFSU2_TR(0x5206ed);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5206ef:{NFSU2_TR(0x5206ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5206f3:{NFSU2_TR(0x5206f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5206f8ull));
TAIL_STATIC(0x575620u,575);
}
B5206f8:L5206f8:{c.instructions+=7;NFSU2_TR(0x5206f8);
__builtin_memmove((R+28),(R+0),4);
}
B5206fa:{NFSU2_TR(0x5206fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5206fd:{NFSU2_TR(0x5206fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520701:{NFSU2_TR(0x520701);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B520703:{NFSU2_TR(0x520703);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520705:{NFSU2_TR(0x520705);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520709:{NFSU2_TR(0x520709);
if(r1(R+518)){{goto L520725;}}
}
B52070b:L52070b:{c.instructions+=5;NFSU2_TR(0x52070b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52070d:{NFSU2_TR(0x52070d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B520710:{NFSU2_TR(0x520710);
u8 U[4];
w4(U+0,u32(0x79b558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520715:{NFSU2_TR(0x520715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520716:{NFSU2_TR(0x520716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52071bull));
TAIL_STATIC(0x43dc00u,43d);
}
B52071b:L52071b:{c.instructions+=4;NFSU2_TR(0x52071b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52071e:{NFSU2_TR(0x52071e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520721:{NFSU2_TR(0x520721);
__builtin_memmove((R+0),(R+28),4);
}
B520723:{NFSU2_TR(0x520723);
{goto L520727;}
}
B520725:L520725:{c.instructions+=1;NFSU2_TR(0x520725);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B520727:L520727:{c.instructions+=9;NFSU2_TR(0x520727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52072a:{NFSU2_TR(0x52072a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B52072d:{NFSU2_TR(0x52072d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B52072f:{NFSU2_TR(0x52072f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520732:{NFSU2_TR(0x520732);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520735:{NFSU2_TR(0x520735);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B520737:{NFSU2_TR(0x520737);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B520739:{NFSU2_TR(0x520739);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B520741:{NFSU2_TR(0x520741);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520745:L520745:{c.instructions+=4;NFSU2_TR(0x520745);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B52074b:{NFSU2_TR(0x52074b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B52074e:{NFSU2_TR(0x52074e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520750:{NFSU2_TR(0x520750);
if(r1(R+518)){{goto L5207ad;}}
}
B520752:L520752:{c.instructions+=2;NFSU2_TR(0x520752);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520754:{NFSU2_TR(0x520754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520759ull));
TAIL_STATIC(0x575620u,575);
}
B520759:L520759:{c.instructions+=6;NFSU2_TR(0x520759);
__builtin_memmove((R+28),(R+0),4);
}
B52075b:{NFSU2_TR(0x52075b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52075e:{NFSU2_TR(0x52075e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520762:{NFSU2_TR(0x520762);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520764:{NFSU2_TR(0x520764);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52076c:{NFSU2_TR(0x52076c);
if(r1(R+518)){{goto L520792;}}
}
B52076e:L52076e:{c.instructions+=7;NFSU2_TR(0x52076e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520774:{NFSU2_TR(0x520774);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520776:{NFSU2_TR(0x520776);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B520779:{NFSU2_TR(0x520779);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52077a:{NFSU2_TR(0x52077a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52077b:{NFSU2_TR(0x52077b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52077f:{NFSU2_TR(0x52077f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520784ull));
TAIL_STATIC(0x43dc00u,43d);
}
B520784:L520784:{c.instructions+=5;NFSU2_TR(0x520784);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520788:{NFSU2_TR(0x520788);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52078b:{NFSU2_TR(0x52078b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52078e:{NFSU2_TR(0x52078e);
__builtin_memmove((R+0),(R+28),4);
}
B520790:{NFSU2_TR(0x520790);
{goto L520794;}
}
B520792:L520792:{c.instructions+=1;NFSU2_TR(0x520792);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B520794:L520794:{c.instructions+=7;NFSU2_TR(0x520794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520797:{NFSU2_TR(0x520797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B520799:{NFSU2_TR(0x520799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52079c:{NFSU2_TR(0x52079c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52079f:{NFSU2_TR(0x52079f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5207a1:{NFSU2_TR(0x5207a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5207a5:{NFSU2_TR(0x5207a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5207ad:L5207ad:{c.instructions+=4;NFSU2_TR(0x5207ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x890ull))));
}
B5207b2:{NFSU2_TR(0x5207b2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x189e0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x189e0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x189e0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5207b7:{NFSU2_TR(0x5207b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5207bb:{NFSU2_TR(0x5207bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520745u);}goto L520745;}}
}
B5207bd:L5207bd:{c.instructions+=3;NFSU2_TR(0x5207bd);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5207c3:{NFSU2_TR(0x5207c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5207c5:{NFSU2_TR(0x5207c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5207c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5207c8:L5207c8:{c.instructions+=4;NFSU2_TR(0x5207c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5207ca:{NFSU2_TR(0x5207ca);
__builtin_memmove((R+4),(R+24),4);
}
B5207cc:{NFSU2_TR(0x5207cc);
__builtin_memmove((R+12),(R+0),4);
}
B5207ce:{NFSU2_TR(0x5207ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5207d3ull));
TAIL_STATIC(0x502fd0u,502);
}
B5207d3:L5207d3:{c.instructions+=2;NFSU2_TR(0x5207d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5207d5:{NFSU2_TR(0x5207d5);
if(r1(R+518)){{goto L5207e2;}}
}
B5207d7:L5207d7:{c.instructions+=2;NFSU2_TR(0x5207d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5207da:{NFSU2_TR(0x5207da);
if(r1(R+518)){{goto L5207e4;}}
}
B5207dc:L5207dc:{c.instructions+=3;NFSU2_TR(0x5207dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5207de:{NFSU2_TR(0x5207de);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5207e0:{NFSU2_TR(0x5207e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5207d7u);}goto L5207d7;}}
}
B5207e2:L5207e2:{c.instructions+=1;NFSU2_TR(0x5207e2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5207e4:L5207e4:{c.instructions+=5;NFSU2_TR(0x5207e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5207e8:{NFSU2_TR(0x5207e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5207eb:{NFSU2_TR(0x5207eb);
__builtin_memmove((R+12),(R+0),4);
}
B5207ed:{NFSU2_TR(0x5207ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5207ef:{NFSU2_TR(0x5207ef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x58ull))));
}
B5207f2:L5207f2:{c.instructions+=2;NFSU2_TR(0x5207f2);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5207f4:{NFSU2_TR(0x5207f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5207f9ull));
TAIL_STATIC(0x575620u,575);
}
B5207f9:L5207f9:{c.instructions+=6;NFSU2_TR(0x5207f9);
__builtin_memmove((R+24),(R+0),4);
}
B5207fb:{NFSU2_TR(0x5207fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5207fe:{NFSU2_TR(0x5207fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520802:{NFSU2_TR(0x520802);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520804:{NFSU2_TR(0x520804);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52080c:{NFSU2_TR(0x52080c);
if(r1(R+518)){{goto L52082a;}}
}
B52080e:L52080e:{c.instructions+=2;NFSU2_TR(0x52080e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52080f:{NFSU2_TR(0x52080f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520814ull));
TAIL_STATIC(0x610600u,610);
}
B520814:L520814:{c.instructions+=5;NFSU2_TR(0x520814);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520816:{NFSU2_TR(0x520816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520817:{NFSU2_TR(0x520817);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52081a:{NFSU2_TR(0x52081a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52081b:{NFSU2_TR(0x52081b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520820ull));
TAIL_STATIC(0x43dc00u,43d);
}
B520820:L520820:{c.instructions+=4;NFSU2_TR(0x520820);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B520823:{NFSU2_TR(0x520823);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520826:{NFSU2_TR(0x520826);
__builtin_memmove((R+0),(R+24),4);
}
B520828:{NFSU2_TR(0x520828);
{goto L52082c;}
}
B52082a:L52082a:{c.instructions+=1;NFSU2_TR(0x52082a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52082c:L52082c:{c.instructions+=9;NFSU2_TR(0x52082c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52082f:{NFSU2_TR(0x52082f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B520831:{NFSU2_TR(0x520831);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B520832:{NFSU2_TR(0x520832);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B520838:{NFSU2_TR(0x520838);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52083b:{NFSU2_TR(0x52083b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B520843:{NFSU2_TR(0x520843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520846:{NFSU2_TR(0x520846);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B520848:{NFSU2_TR(0x520848);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5207f2u);}goto L5207f2;}}
}
B52084a:L52084a:{c.instructions+=3;NFSU2_TR(0x52084a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B52084c:{NFSU2_TR(0x52084c);
__builtin_memmove((R+4),(R+12),4);
}
B52084e:{NFSU2_TR(0x52084e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520853ull));
TAIL_STATIC(0x502fd0u,502);
}
B520853:L520853:{c.instructions+=2;NFSU2_TR(0x520853);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520855:{NFSU2_TR(0x520855);
if(r1(R+518)){{goto L52086b;}}
}
B520857:L520857:{c.instructions+=2;NFSU2_TR(0x520857);
__builtin_memmove((R+4),gp(0x838548),4);
}
B52085d:{NFSU2_TR(0x52085d);
__builtin_memmove((R+4),(R+4),4);
}
B520860:L520860:{c.instructions+=2;NFSU2_TR(0x520860);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B520863:{NFSU2_TR(0x520863);
if(r1(R+518)){{goto L52086d;}}
}
B520865:L520865:{c.instructions+=3;NFSU2_TR(0x520865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B520867:{NFSU2_TR(0x520867);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520869:{NFSU2_TR(0x520869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520860u);}goto L520860;}}
}
B52086b:L52086b:{c.instructions+=1;NFSU2_TR(0x52086b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52086d:L52086d:{c.instructions+=4;NFSU2_TR(0x52086d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B520871:{NFSU2_TR(0x520871);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520873:{NFSU2_TR(0x520873);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520876:{NFSU2_TR(0x520876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52087bull));
TAIL_STATIC(0x575620u,575);
}
B52087b:L52087b:{c.instructions+=6;NFSU2_TR(0x52087b);
__builtin_memmove((R+24),(R+0),4);
}
B52087d:{NFSU2_TR(0x52087d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520880:{NFSU2_TR(0x520880);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520884:{NFSU2_TR(0x520884);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520886:{NFSU2_TR(0x520886);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52088e:{NFSU2_TR(0x52088e);
if(r1(R+518)){{goto L5208ae;}}
}
B520890:L520890:{c.instructions+=5;NFSU2_TR(0x520890);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520892:{NFSU2_TR(0x520892);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B520895:{NFSU2_TR(0x520895);
u8 U[4];
w4(U+0,u32(0x79b548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52089a:{NFSU2_TR(0x52089a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52089b:{NFSU2_TR(0x52089b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5208a0ull));
TAIL_STATIC(0x43dc00u,43d);
}
B5208a0:L5208a0:{c.instructions+=4;NFSU2_TR(0x5208a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5208a3:{NFSU2_TR(0x5208a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5208aa:{NFSU2_TR(0x5208aa);
__builtin_memmove((R+0),(R+24),4);
}
B5208ac:{NFSU2_TR(0x5208ac);
{goto L5208b0;}
}
B5208ae:L5208ae:{c.instructions+=1;NFSU2_TR(0x5208ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5208b0:L5208b0:{c.instructions+=15;NFSU2_TR(0x5208b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5208b3:{NFSU2_TR(0x5208b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5208b6:{NFSU2_TR(0x5208b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5208b8:{NFSU2_TR(0x5208b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5208bb:{NFSU2_TR(0x5208bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5208bd:{NFSU2_TR(0x5208bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5208c0:{NFSU2_TR(0x5208c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5208c2:{NFSU2_TR(0x5208c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5208c6:{NFSU2_TR(0x5208c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5208c9:{NFSU2_TR(0x5208c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5208ca:{NFSU2_TR(0x5208ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5208cb:{NFSU2_TR(0x5208cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5208cc:{NFSU2_TR(0x5208cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5208d3:{NFSU2_TR(0x5208d3);
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
B5208d6:{NFSU2_TR(0x5208d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5208e0:L5208e0:{c.instructions+=8;NFSU2_TR(0x5208e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5208e1:{NFSU2_TR(0x5208e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5208e2:{NFSU2_TR(0x5208e2);
__builtin_memmove((R+20),(R+4),4);
}
B5208e4:{NFSU2_TR(0x5208e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5208e7:{NFSU2_TR(0x5208e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5208e8:{NFSU2_TR(0x5208e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5208eb:{NFSU2_TR(0x5208eb);
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
B5208ed:{NFSU2_TR(0x5208ed);
if(r1(R+518)){{goto L520916;}}
}
B5208ef:L5208ef:{c.instructions+=2;NFSU2_TR(0x5208ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5208f0:{NFSU2_TR(0x5208f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5208f4:L5208f4:{c.instructions+=4;NFSU2_TR(0x5208f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5208f7:{NFSU2_TR(0x5208f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5208f8:{NFSU2_TR(0x5208f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5208f9:{NFSU2_TR(0x5208f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5208feull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5208fe:L5208fe:{c.instructions+=3;NFSU2_TR(0x5208fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520901:{NFSU2_TR(0x520901);
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
B520903:{NFSU2_TR(0x520903);
if(r1(R+518)){{goto L520912;}}
}
B520905:L520905:{c.instructions+=3;NFSU2_TR(0x520905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B520907:{NFSU2_TR(0x520907);
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
B520909:{NFSU2_TR(0x520909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5208f4u);}goto L5208f4;}}
}
B52090b:L52090b:{c.instructions+=5;NFSU2_TR(0x52090b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52090c:{NFSU2_TR(0x52090c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52090d:{NFSU2_TR(0x52090d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52090e:{NFSU2_TR(0x52090e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52090f:{NFSU2_TR(0x52090f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520912:L520912:{c.instructions+=2;NFSU2_TR(0x520912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520915:{NFSU2_TR(0x520915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B520916:L520916:{c.instructions+=4;NFSU2_TR(0x520916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B520917:{NFSU2_TR(0x520917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520918:{NFSU2_TR(0x520918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B520919:{NFSU2_TR(0x520919);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520920:L520920:{c.instructions+=8;NFSU2_TR(0x520920);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520921:{NFSU2_TR(0x520921);
__builtin_memmove((R+24),(R+4),4);
}
B520923:{NFSU2_TR(0x520923);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520926:{NFSU2_TR(0x520926);
__builtin_memmove((R+4),gp(0x7fa1b0),4);
}
B52092c:{NFSU2_TR(0x52092c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52092f:{NFSU2_TR(0x52092f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520930:{NFSU2_TR(0x520930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520931:{NFSU2_TR(0x520931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520936ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520936:L520936:{c.instructions+=3;NFSU2_TR(0x520936);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520939:{NFSU2_TR(0x520939);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52093b:{NFSU2_TR(0x52093b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520945;}}
}
B52093d:L52093d:{c.instructions+=3;NFSU2_TR(0x52093d);
__builtin_memmove((R+4),(R+24),4);
}
B52093f:{NFSU2_TR(0x52093f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520940:{NFSU2_TR(0x520940);
TAIL_STATIC(0x50e320u,50e);
}
B520945:L520945:{c.instructions+=6;NFSU2_TR(0x520945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520948:{NFSU2_TR(0x520948);
__builtin_memmove((R+4),gp(0x7fa1b4),4);
}
B52094e:{NFSU2_TR(0x52094e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520951:{NFSU2_TR(0x520951);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520952:{NFSU2_TR(0x520952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520953:{NFSU2_TR(0x520953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520958ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520958:L520958:{c.instructions+=3;NFSU2_TR(0x520958);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52095b:{NFSU2_TR(0x52095b);
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
B52095d:{NFSU2_TR(0x52095d);
if(r1(R+518)){{goto L52099a;}}
}
B52095f:L52095f:{c.instructions+=6;NFSU2_TR(0x52095f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520962:{NFSU2_TR(0x520962);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B520968:{NFSU2_TR(0x520968);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52096b:{NFSU2_TR(0x52096b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52096c:{NFSU2_TR(0x52096c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52096d:{NFSU2_TR(0x52096d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520972ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520972:L520972:{c.instructions+=3;NFSU2_TR(0x520972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520975:{NFSU2_TR(0x520975);
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
B520977:{NFSU2_TR(0x520977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520980;}}
}
B520979:L520979:{c.instructions+=3;NFSU2_TR(0x520979);
__builtin_memmove((R+0),gp(0x7fa1d4),4);
}
B52097e:{NFSU2_TR(0x52097e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52097f:{NFSU2_TR(0x52097f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520980:L520980:{c.instructions+=6;NFSU2_TR(0x520980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520983:{NFSU2_TR(0x520983);
__builtin_memmove((R+4),gp(0x7fa1d4),4);
}
B520989:{NFSU2_TR(0x520989);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52098c:{NFSU2_TR(0x52098c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52098d:{NFSU2_TR(0x52098d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52098e:{NFSU2_TR(0x52098e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520993ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520993:L520993:{c.instructions+=3;NFSU2_TR(0x520993);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520996:{NFSU2_TR(0x520996);
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
B520998:{NFSU2_TR(0x520998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5209a1;}}
}
B52099a:L52099a:{c.instructions+=3;NFSU2_TR(0x52099a);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B52099f:{NFSU2_TR(0x52099f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5209a0:{NFSU2_TR(0x5209a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5209a1:L5209a1:{c.instructions+=6;NFSU2_TR(0x5209a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5209a4:{NFSU2_TR(0x5209a4);
__builtin_memmove((R+4),gp(0x7fa1bc),4);
}
B5209aa:{NFSU2_TR(0x5209aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5209ad:{NFSU2_TR(0x5209ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5209ae:{NFSU2_TR(0x5209ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5209af:{NFSU2_TR(0x5209af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5209b4ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5209b4:L5209b4:{c.instructions+=3;NFSU2_TR(0x5209b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5209b7:{NFSU2_TR(0x5209b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5209b9:{NFSU2_TR(0x5209b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5209c3;}}
}
B5209bb:L5209bb:{c.instructions+=3;NFSU2_TR(0x5209bb);
__builtin_memmove((R+4),(R+24),4);
}
B5209bd:{NFSU2_TR(0x5209bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5209be:{NFSU2_TR(0x5209be);
TAIL_STATIC(0x50e380u,50e);
}
B5209c3:L5209c3:{c.instructions+=6;NFSU2_TR(0x5209c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5209c6:{NFSU2_TR(0x5209c6);
__builtin_memmove((R+4),gp(0x7fa1dc),4);
}
B5209cc:{NFSU2_TR(0x5209cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5209cf:{NFSU2_TR(0x5209cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5209d0:{NFSU2_TR(0x5209d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5209d1:{NFSU2_TR(0x5209d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5209d6ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5209d6:L5209d6:{c.instructions+=3;NFSU2_TR(0x5209d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5209d9:{NFSU2_TR(0x5209d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5209db:{NFSU2_TR(0x5209db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5209e5;}}
}
B5209dd:L5209dd:{c.instructions+=3;NFSU2_TR(0x5209dd);
__builtin_memmove((R+4),(R+24),4);
}
B5209df:{NFSU2_TR(0x5209df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5209e0:{NFSU2_TR(0x5209e0);
TAIL_STATIC(0x50e3b0u,50e);
}
B5209e5:L5209e5:{c.instructions+=6;NFSU2_TR(0x5209e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5209e8:{NFSU2_TR(0x5209e8);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B5209ee:{NFSU2_TR(0x5209ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5209f1:{NFSU2_TR(0x5209f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5209f2:{NFSU2_TR(0x5209f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5209f3:{NFSU2_TR(0x5209f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5209f8ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5209f8:L5209f8:{c.instructions+=3;NFSU2_TR(0x5209f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5209fb:{NFSU2_TR(0x5209fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5209fd:{NFSU2_TR(0x5209fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520a07;}}
}
B5209ff:L5209ff:{c.instructions+=3;NFSU2_TR(0x5209ff);
__builtin_memmove((R+4),(R+24),4);
}
B520a01:{NFSU2_TR(0x520a01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520a02:{NFSU2_TR(0x520a02);
TAIL_STATIC(0x50e3d0u,50e);
}
B520a07:L520a07:{c.instructions+=6;NFSU2_TR(0x520a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520a0a:{NFSU2_TR(0x520a0a);
__builtin_memmove((R+4),gp(0x7fa1b8),4);
}
B520a10:{NFSU2_TR(0x520a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520a13:{NFSU2_TR(0x520a13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a14:{NFSU2_TR(0x520a14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a15:{NFSU2_TR(0x520a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520a1aull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520a1a:L520a1a:{c.instructions+=3;NFSU2_TR(0x520a1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520a1d:{NFSU2_TR(0x520a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520a1f:{NFSU2_TR(0x520a1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520a29;}}
}
B520a21:L520a21:{c.instructions+=3;NFSU2_TR(0x520a21);
__builtin_memmove((R+4),(R+24),4);
}
B520a23:{NFSU2_TR(0x520a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520a24:{NFSU2_TR(0x520a24);
TAIL_STATIC(0x50e3f0u,50e);
}
B520a29:L520a29:{c.instructions+=6;NFSU2_TR(0x520a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520a2c:{NFSU2_TR(0x520a2c);
__builtin_memmove((R+4),gp(0x7fa1d8),4);
}
B520a32:{NFSU2_TR(0x520a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520a35:{NFSU2_TR(0x520a35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a36:{NFSU2_TR(0x520a36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a37:{NFSU2_TR(0x520a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520a3cull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520a3c:L520a3c:{c.instructions+=3;NFSU2_TR(0x520a3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520a3f:{NFSU2_TR(0x520a3f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520a41:{NFSU2_TR(0x520a41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520a4b;}}
}
B520a43:L520a43:{c.instructions+=3;NFSU2_TR(0x520a43);
__builtin_memmove((R+4),(R+24),4);
}
B520a45:{NFSU2_TR(0x520a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520a46:{NFSU2_TR(0x520a46);
TAIL_STATIC(0x50e410u,50e);
}
B520a4b:L520a4b:{c.instructions+=6;NFSU2_TR(0x520a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520a4e:{NFSU2_TR(0x520a4e);
__builtin_memmove((R+4),gp(0x7fa1f0),4);
}
B520a54:{NFSU2_TR(0x520a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520a57:{NFSU2_TR(0x520a57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a58:{NFSU2_TR(0x520a58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a59:{NFSU2_TR(0x520a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520a5eull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520a5e:L520a5e:{c.instructions+=4;NFSU2_TR(0x520a5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520a61:{NFSU2_TR(0x520a61);
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
B520a63:{NFSU2_TR(0x520a63);
__builtin_memmove((R+0),gp(0x7fa1f4),4);
}
B520a68:{NFSU2_TR(0x520a68);
if(r1(R+518)){{goto L520a6f;}}
}
B520a6a:L520a6a:{c.instructions+=1;NFSU2_TR(0x520a6a);
w4(R+0,u32(0x783fe5ull));
}
B520a6f:L520a6f:{c.instructions+=2;NFSU2_TR(0x520a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520a70:{NFSU2_TR(0x520a70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520a80:L520a80:{c.instructions+=8;NFSU2_TR(0x520a80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a81:{NFSU2_TR(0x520a81);
__builtin_memmove((R+24),(R+4),4);
}
B520a83:{NFSU2_TR(0x520a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520a86:{NFSU2_TR(0x520a86);
__builtin_memmove((R+4),gp(0x7fa1b0),4);
}
B520a8c:{NFSU2_TR(0x520a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520a8f:{NFSU2_TR(0x520a8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a90:{NFSU2_TR(0x520a90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520a91:{NFSU2_TR(0x520a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520a96ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520a96:L520a96:{c.instructions+=3;NFSU2_TR(0x520a96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520a99:{NFSU2_TR(0x520a99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520a9b:{NFSU2_TR(0x520a9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520ac8;}}
}
B520a9d:L520a9d:{c.instructions+=4;NFSU2_TR(0x520a9d);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B520aa2:{NFSU2_TR(0x520aa2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B520aa3:{NFSU2_TR(0x520aa3);
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
B520aa6:{NFSU2_TR(0x520aa6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L520c92;}}
}
B520aac:L520aac:{c.instructions+=1;NFSU2_TR(0x520aac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x520c9cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520ab3:L520ab3:{c.instructions+=3;NFSU2_TR(0x520ab3);
w4(R+0,u32(0x78f5a4ull));
}
B520ab8:{NFSU2_TR(0x520ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520ab9:{NFSU2_TR(0x520ab9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520aba:L520aba:{c.instructions+=3;NFSU2_TR(0x520aba);
w4(R+0,u32(0x78f354ull));
}
B520abf:{NFSU2_TR(0x520abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520ac0:{NFSU2_TR(0x520ac0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520ac1:L520ac1:{c.instructions+=3;NFSU2_TR(0x520ac1);
w4(R+0,u32(0x794df0ull));
}
B520ac6:{NFSU2_TR(0x520ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520ac7:{NFSU2_TR(0x520ac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520ac8:L520ac8:{c.instructions+=6;NFSU2_TR(0x520ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520acb:{NFSU2_TR(0x520acb);
__builtin_memmove((R+4),gp(0x7fa1b4),4);
}
B520ad1:{NFSU2_TR(0x520ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520ad4:{NFSU2_TR(0x520ad4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520ad5:{NFSU2_TR(0x520ad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520ad6:{NFSU2_TR(0x520ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520adbull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520adb:L520adb:{c.instructions+=3;NFSU2_TR(0x520adb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520ade:{NFSU2_TR(0x520ade);
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
B520ae0:{NFSU2_TR(0x520ae0);
if(r1(R+518)){{goto L520c01;}}
}
B520ae6:L520ae6:{c.instructions+=6;NFSU2_TR(0x520ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520ae9:{NFSU2_TR(0x520ae9);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B520aef:{NFSU2_TR(0x520aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520af2:{NFSU2_TR(0x520af2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520af3:{NFSU2_TR(0x520af3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520af4:{NFSU2_TR(0x520af4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520af9ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520af9:L520af9:{c.instructions+=3;NFSU2_TR(0x520af9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520afc:{NFSU2_TR(0x520afc);
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
B520afe:{NFSU2_TR(0x520afe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520b07;}}
}
B520b00:L520b00:{c.instructions+=3;NFSU2_TR(0x520b00);
__builtin_memmove((R+0),gp(0x7fa1b4),4);
}
B520b05:{NFSU2_TR(0x520b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520b06:{NFSU2_TR(0x520b06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520b07:L520b07:{c.instructions+=6;NFSU2_TR(0x520b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520b0a:{NFSU2_TR(0x520b0a);
__builtin_memmove((R+4),gp(0x7fa1cc),4);
}
B520b10:{NFSU2_TR(0x520b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520b13:{NFSU2_TR(0x520b13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b14:{NFSU2_TR(0x520b14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b15:{NFSU2_TR(0x520b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520b1aull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520b1a:L520b1a:{c.instructions+=3;NFSU2_TR(0x520b1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520b1d:{NFSU2_TR(0x520b1d);
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
B520b1f:{NFSU2_TR(0x520b1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520b28;}}
}
B520b21:L520b21:{c.instructions+=3;NFSU2_TR(0x520b21);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B520b26:{NFSU2_TR(0x520b26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520b27:{NFSU2_TR(0x520b27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520b28:L520b28:{c.instructions+=6;NFSU2_TR(0x520b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520b2b:{NFSU2_TR(0x520b2b);
__builtin_memmove((R+4),gp(0x7fa1b8),4);
}
B520b31:{NFSU2_TR(0x520b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520b34:{NFSU2_TR(0x520b34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b35:{NFSU2_TR(0x520b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b36:{NFSU2_TR(0x520b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520b3bull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520b3b:L520b3b:{c.instructions+=3;NFSU2_TR(0x520b3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520b3e:{NFSU2_TR(0x520b3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520b40:{NFSU2_TR(0x520b40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520b4a;}}
}
B520b42:L520b42:{c.instructions+=3;NFSU2_TR(0x520b42);
__builtin_memmove((R+4),(R+24),4);
}
B520b44:{NFSU2_TR(0x520b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520b45:{NFSU2_TR(0x520b45);
TAIL_STATIC(0x50e430u,50e);
}
B520b4a:L520b4a:{c.instructions+=6;NFSU2_TR(0x520b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520b4d:{NFSU2_TR(0x520b4d);
__builtin_memmove((R+4),gp(0x7fa1bc),4);
}
B520b53:{NFSU2_TR(0x520b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520b56:{NFSU2_TR(0x520b56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b57:{NFSU2_TR(0x520b57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b58:{NFSU2_TR(0x520b58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520b5dull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520b5d:L520b5d:{c.instructions+=3;NFSU2_TR(0x520b5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520b60:{NFSU2_TR(0x520b60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520b62:{NFSU2_TR(0x520b62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520b6c;}}
}
B520b64:L520b64:{c.instructions+=3;NFSU2_TR(0x520b64);
__builtin_memmove((R+4),(R+24),4);
}
B520b66:{NFSU2_TR(0x520b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520b67:{NFSU2_TR(0x520b67);
TAIL_STATIC(0x50e4c0u,50e);
}
B520b6c:L520b6c:{c.instructions+=6;NFSU2_TR(0x520b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520b6f:{NFSU2_TR(0x520b6f);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B520b75:{NFSU2_TR(0x520b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520b78:{NFSU2_TR(0x520b78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b79:{NFSU2_TR(0x520b79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b7a:{NFSU2_TR(0x520b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520b7full));
TAIL_STATIC(0x43dcc0u,43d);
}
B520b7f:L520b7f:{c.instructions+=3;NFSU2_TR(0x520b7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520b82:{NFSU2_TR(0x520b82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520b84:{NFSU2_TR(0x520b84);
if(r1(R+518)){{goto L520c22;}}
}
B520b8a:L520b8a:{c.instructions+=6;NFSU2_TR(0x520b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520b8d:{NFSU2_TR(0x520b8d);
__builtin_memmove((R+4),gp(0x7fa1d8),4);
}
B520b93:{NFSU2_TR(0x520b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520b96:{NFSU2_TR(0x520b96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b97:{NFSU2_TR(0x520b97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520b98:{NFSU2_TR(0x520b98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520b9dull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520b9d:L520b9d:{c.instructions+=3;NFSU2_TR(0x520b9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520ba0:{NFSU2_TR(0x520ba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520ba2:{NFSU2_TR(0x520ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520bac;}}
}
B520ba4:L520ba4:{c.instructions+=3;NFSU2_TR(0x520ba4);
__builtin_memmove((R+4),(R+24),4);
}
B520ba6:{NFSU2_TR(0x520ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520ba7:{NFSU2_TR(0x520ba7);
TAIL_STATIC(0x50e4e0u,50e);
}
B520bac:L520bac:{c.instructions+=6;NFSU2_TR(0x520bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520baf:{NFSU2_TR(0x520baf);
__builtin_memmove((R+4),gp(0x7fa1dc),4);
}
B520bb5:{NFSU2_TR(0x520bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520bb8:{NFSU2_TR(0x520bb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520bb9:{NFSU2_TR(0x520bb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520bba:{NFSU2_TR(0x520bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520bbfull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520bbf:L520bbf:{c.instructions+=3;NFSU2_TR(0x520bbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520bc2:{NFSU2_TR(0x520bc2);
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
B520bc4:{NFSU2_TR(0x520bc4);
if(r1(R+518)){{goto L520be0;}}
}
B520bc6:L520bc6:{c.instructions+=6;NFSU2_TR(0x520bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520bc9:{NFSU2_TR(0x520bc9);
__builtin_memmove((R+4),gp(0x7fa1e0),4);
}
B520bcf:{NFSU2_TR(0x520bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520bd2:{NFSU2_TR(0x520bd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520bd3:{NFSU2_TR(0x520bd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520bd4:{NFSU2_TR(0x520bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520bd9ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520bd9:L520bd9:{c.instructions+=3;NFSU2_TR(0x520bd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520bdc:{NFSU2_TR(0x520bdc);
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
B520bde:{NFSU2_TR(0x520bde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520be7;}}
}
B520be0:L520be0:{c.instructions+=3;NFSU2_TR(0x520be0);
__builtin_memmove((R+0),gp(0x7fa1bc),4);
}
B520be5:{NFSU2_TR(0x520be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520be6:{NFSU2_TR(0x520be6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520be7:L520be7:{c.instructions+=6;NFSU2_TR(0x520be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520bea:{NFSU2_TR(0x520bea);
__builtin_memmove((R+4),gp(0x7fa1e8),4);
}
B520bf0:{NFSU2_TR(0x520bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520bf3:{NFSU2_TR(0x520bf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520bf4:{NFSU2_TR(0x520bf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520bf5:{NFSU2_TR(0x520bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520bfaull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520bfa:L520bfa:{c.instructions+=3;NFSU2_TR(0x520bfa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520bfd:{NFSU2_TR(0x520bfd);
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
B520bff:{NFSU2_TR(0x520bff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520c08;}}
}
B520c01:L520c01:{c.instructions+=3;NFSU2_TR(0x520c01);
__builtin_memmove((R+0),gp(0x7fa1b0),4);
}
B520c06:{NFSU2_TR(0x520c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520c07:{NFSU2_TR(0x520c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520c08:L520c08:{c.instructions+=6;NFSU2_TR(0x520c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520c0b:{NFSU2_TR(0x520c0b);
__builtin_memmove((R+4),gp(0x7fa1c4),4);
}
B520c11:{NFSU2_TR(0x520c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520c14:{NFSU2_TR(0x520c14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c15:{NFSU2_TR(0x520c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c16:{NFSU2_TR(0x520c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520c1bull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520c1b:L520c1b:{c.instructions+=3;NFSU2_TR(0x520c1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520c1e:{NFSU2_TR(0x520c1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520c20:{NFSU2_TR(0x520c20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520c2a;}}
}
B520c22:L520c22:{c.instructions+=3;NFSU2_TR(0x520c22);
__builtin_memmove((R+4),(R+24),4);
}
B520c24:{NFSU2_TR(0x520c24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520c25:{NFSU2_TR(0x520c25);
TAIL_STATIC(0x50e460u,50e);
}
B520c2a:L520c2a:{c.instructions+=6;NFSU2_TR(0x520c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520c2d:{NFSU2_TR(0x520c2d);
__builtin_memmove((R+4),gp(0x7fa1f0),4);
}
B520c33:{NFSU2_TR(0x520c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520c36:{NFSU2_TR(0x520c36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c37:{NFSU2_TR(0x520c37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c38:{NFSU2_TR(0x520c38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520c3dull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520c3d:L520c3d:{c.instructions+=3;NFSU2_TR(0x520c3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520c40:{NFSU2_TR(0x520c40);
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
B520c42:{NFSU2_TR(0x520c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520c4b;}}
}
B520c44:L520c44:{c.instructions+=3;NFSU2_TR(0x520c44);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B520c49:{NFSU2_TR(0x520c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520c4a:{NFSU2_TR(0x520c4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520c4b:L520c4b:{c.instructions+=6;NFSU2_TR(0x520c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520c4e:{NFSU2_TR(0x520c4e);
__builtin_memmove((R+4),gp(0x7fa1f4),4);
}
B520c54:{NFSU2_TR(0x520c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520c57:{NFSU2_TR(0x520c57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c58:{NFSU2_TR(0x520c58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c59:{NFSU2_TR(0x520c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520c5eull));
TAIL_STATIC(0x43dcc0u,43d);
}
B520c5e:L520c5e:{c.instructions+=3;NFSU2_TR(0x520c5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520c61:{NFSU2_TR(0x520c61);
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
B520c63:{NFSU2_TR(0x520c63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520c6c;}}
}
B520c65:L520c65:{c.instructions+=3;NFSU2_TR(0x520c65);
__builtin_memmove((R+0),gp(0x7fa1f0),4);
}
B520c6a:{NFSU2_TR(0x520c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520c6b:{NFSU2_TR(0x520c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520c6c:L520c6c:{c.instructions+=6;NFSU2_TR(0x520c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520c6f:{NFSU2_TR(0x520c6f);
__builtin_memmove((R+4),gp(0x7fa1f8),4);
}
B520c75:{NFSU2_TR(0x520c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520c78:{NFSU2_TR(0x520c78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c79:{NFSU2_TR(0x520c79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520c7a:{NFSU2_TR(0x520c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520c7full));
TAIL_STATIC(0x43dcc0u,43d);
}
B520c7f:L520c7f:{c.instructions+=3;NFSU2_TR(0x520c7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520c82:{NFSU2_TR(0x520c82);
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
B520c84:{NFSU2_TR(0x520c84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520c92;}}
}
B520c86:L520c86:{c.instructions+=4;NFSU2_TR(0x520c86);
__builtin_memmove(gp(0x838998),(R+0),4);
}
B520c8b:{NFSU2_TR(0x520c8b);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B520c90:{NFSU2_TR(0x520c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520c91:{NFSU2_TR(0x520c91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520c92:L520c92:{c.instructions+=3;NFSU2_TR(0x520c92);
w4(R+0,u32(0x783fe5ull));
}
B520c97:{NFSU2_TR(0x520c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520c98:{NFSU2_TR(0x520c98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520cb0:L520cb0:{c.instructions+=27;NFSU2_TR(0x520cb0);
__builtin_memmove((R+0),(R+4),4);
}
B520cb2:{NFSU2_TR(0x520cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520cb6:{NFSU2_TR(0x520cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520cb9:{NFSU2_TR(0x520cb9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B520cbb:{NFSU2_TR(0x520cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520cbe:{NFSU2_TR(0x520cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520cc1:{NFSU2_TR(0x520cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520cc4:{NFSU2_TR(0x520cc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520cc7:{NFSU2_TR(0x520cc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520cca:{NFSU2_TR(0x520cca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520ccd:{NFSU2_TR(0x520ccd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520cd1:{NFSU2_TR(0x520cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520cd4:{NFSU2_TR(0x520cd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520cd8:{NFSU2_TR(0x520cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520cdb:{NFSU2_TR(0x520cdb);
w4(R+4,u32(0x3f800000ull));
}
B520ce0:{NFSU2_TR(0x520ce0);
w1(R+8,u8(0x1ull));
}
B520ce2:{NFSU2_TR(0x520ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ce5:{NFSU2_TR(0x520ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ce8:{NFSU2_TR(0x520ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ceb:{NFSU2_TR(0x520ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520cee:{NFSU2_TR(0x520cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520cf2:{NFSU2_TR(0x520cf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520cf5:{NFSU2_TR(0x520cf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520cf8:{NFSU2_TR(0x520cf8);
u8 U[4];
w4(U+0,u32(0x79b568ull));
s4(u32(r4(R+0)),r4(U+0));
}
B520cfe:{NFSU2_TR(0x520cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d01:{NFSU2_TR(0x520d01);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520d04:{NFSU2_TR(0x520d04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520d10:L520d10:{c.instructions+=25;NFSU2_TR(0x520d10);
__builtin_memmove((R+0),(R+4),4);
}
B520d12:{NFSU2_TR(0x520d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520d16:{NFSU2_TR(0x520d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d19:{NFSU2_TR(0x520d19);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B520d1b:{NFSU2_TR(0x520d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d1e:{NFSU2_TR(0x520d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d21:{NFSU2_TR(0x520d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d24:{NFSU2_TR(0x520d24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520d27:{NFSU2_TR(0x520d27);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520d2a:{NFSU2_TR(0x520d2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520d2d:{NFSU2_TR(0x520d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520d31:{NFSU2_TR(0x520d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d34:{NFSU2_TR(0x520d34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520d38:{NFSU2_TR(0x520d38);
w1(R+8,u8(0x1ull));
}
B520d3a:{NFSU2_TR(0x520d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d3d:{NFSU2_TR(0x520d3d);
w4(R+4,u32(0x3f800000ull));
}
B520d42:{NFSU2_TR(0x520d42);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520d45:{NFSU2_TR(0x520d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d48:{NFSU2_TR(0x520d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d4b:{NFSU2_TR(0x520d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d4e:{NFSU2_TR(0x520d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520d51:{NFSU2_TR(0x520d51);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520d54:{NFSU2_TR(0x520d54);
u8 U[4];
w4(U+0,u32(0x79b570ull));
s4(u32(r4(R+0)),r4(U+0));
}
B520d5a:{NFSU2_TR(0x520d5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520d5d:{NFSU2_TR(0x520d5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520d60:L520d60:{c.instructions+=7;NFSU2_TR(0x520d60);
__builtin_memmove((R+0),gp(0x850078),4);
}
B520d65:{NFSU2_TR(0x520d65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520d66:{NFSU2_TR(0x520d66);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B520d68:{NFSU2_TR(0x520d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520d6d:{NFSU2_TR(0x520d6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520d6e:{NFSU2_TR(0x520d6e);
__builtin_memmove((R+28),(R+4),4);
}
B520d70:{NFSU2_TR(0x520d70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520da8;}}
}
B520d72:L520d72:{c.instructions+=2;NFSU2_TR(0x520d72);
u8 U[8];
__builtin_memmove((U+0),gp(0x836338),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520d78:{NFSU2_TR(0x520d78);
if(r1(R+518)){{goto L520da8;}}
}
B520d7a:L520d7a:{c.instructions+=2;NFSU2_TR(0x520d7a);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520d7c:{NFSU2_TR(0x520d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520d81ull));
TAIL_STATIC(0x575620u,575);
}
B520d81:L520d81:{c.instructions+=3;NFSU2_TR(0x520d81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520d84:{NFSU2_TR(0x520d84);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520d86:{NFSU2_TR(0x520d86);
if(r1(R+518)){{goto L520d9e;}}
}
B520d88:L520d88:{c.instructions+=6;NFSU2_TR(0x520d88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520d89:{NFSU2_TR(0x520d89);
u8 U[4];
w4(U+0,u32(0x7edc9715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520d8e:{NFSU2_TR(0x520d8e);
u8 U[4];
w4(U+0,u32(0x8244f164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520d93:{NFSU2_TR(0x520d93);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520d95:{NFSU2_TR(0x520d95);
__builtin_memmove((R+4),(R+0),4);
}
B520d97:{NFSU2_TR(0x520d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520d9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520cb0u);}goto L520cb0;}
}
B520d9c:L520d9c:{c.instructions+=1;NFSU2_TR(0x520d9c);
{goto L520da0;}
}
B520d9e:L520d9e:{c.instructions+=1;NFSU2_TR(0x520d9e);
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
B520da0:L520da0:{c.instructions+=4;NFSU2_TR(0x520da0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520da2:{NFSU2_TR(0x520da2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520da3:{NFSU2_TR(0x520da3);
__builtin_memmove((R+4),(R+28),4);
}
B520da5:{NFSU2_TR(0x520da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520da8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520da8:L520da8:{c.instructions+=3;NFSU2_TR(0x520da8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520da9:{NFSU2_TR(0x520da9);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520dab:{NFSU2_TR(0x520dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520db0ull));
TAIL_STATIC(0x575620u,575);
}
B520db0:L520db0:{c.instructions+=4;NFSU2_TR(0x520db0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520db3:{NFSU2_TR(0x520db3);
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
B520db5:{NFSU2_TR(0x520db5);
w4(R+24,u32(0x3f800000ull));
}
B520dba:{NFSU2_TR(0x520dba);
if(r1(R+518)){{goto L520e02;}}
}
B520dbc:L520dbc:{c.instructions+=19;NFSU2_TR(0x520dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xb802f10eull));
s4(u32(r4(U+0)),r4(U+4));
}
B520dc3:{NFSU2_TR(0x520dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520dc6:{NFSU2_TR(0x520dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520dc9:{NFSU2_TR(0x520dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520dcc:{NFSU2_TR(0x520dcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520dcf:{NFSU2_TR(0x520dcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520dd3:{NFSU2_TR(0x520dd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520dd6:{NFSU2_TR(0x520dd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520dd9:{NFSU2_TR(0x520dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xa92b4ae8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520de0:{NFSU2_TR(0x520de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520de3:{NFSU2_TR(0x520de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520de6:{NFSU2_TR(0x520de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520de9:{NFSU2_TR(0x520de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520dec:{NFSU2_TR(0x520dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520def:{NFSU2_TR(0x520def);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520df3:{NFSU2_TR(0x520df3);
u8 U[4];
w4(U+0,u32(0x79b568ull));
s4(u32(r4(R+0)),r4(U+0));
}
B520df9:{NFSU2_TR(0x520df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520dfc:{NFSU2_TR(0x520dfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520e00:{NFSU2_TR(0x520e00);
{goto L520e04;}
}
B520e02:L520e02:{c.instructions+=1;NFSU2_TR(0x520e02);
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
B520e04:L520e04:{c.instructions+=4;NFSU2_TR(0x520e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520e06:{NFSU2_TR(0x520e06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e07:{NFSU2_TR(0x520e07);
__builtin_memmove((R+4),(R+28),4);
}
B520e09:{NFSU2_TR(0x520e09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520e0cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520e0c:L520e0c:{c.instructions+=2;NFSU2_TR(0x520e0c);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e0e:{NFSU2_TR(0x520e0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520e13ull));
TAIL_STATIC(0x575620u,575);
}
B520e13:L520e13:{c.instructions+=3;NFSU2_TR(0x520e13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520e16:{NFSU2_TR(0x520e16);
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
B520e18:{NFSU2_TR(0x520e18);
if(r1(R+518)){{goto L520e64;}}
}
B520e1a:L520e1a:{c.instructions+=19;NFSU2_TR(0x520e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xc56d3032ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520e21:{NFSU2_TR(0x520e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e24:{NFSU2_TR(0x520e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e27:{NFSU2_TR(0x520e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e2a:{NFSU2_TR(0x520e2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520e2d:{NFSU2_TR(0x520e2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520e31:{NFSU2_TR(0x520e31);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520e34:{NFSU2_TR(0x520e34);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520e37:{NFSU2_TR(0x520e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xeca6b0ccull));
s4(u32(r4(U+0)),r4(U+4));
}
B520e3e:{NFSU2_TR(0x520e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e41:{NFSU2_TR(0x520e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e44:{NFSU2_TR(0x520e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e47:{NFSU2_TR(0x520e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e4a:{NFSU2_TR(0x520e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520e4d:{NFSU2_TR(0x520e4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520e51:{NFSU2_TR(0x520e51);
u8 U[4];
w4(U+0,u32(0x79b568ull));
s4(u32(r4(R+0)),r4(U+0));
}
B520e57:{NFSU2_TR(0x520e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520e5e:{NFSU2_TR(0x520e5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520e62:{NFSU2_TR(0x520e62);
{goto L520e66;}
}
B520e64:L520e64:{c.instructions+=1;NFSU2_TR(0x520e64);
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
B520e66:L520e66:{c.instructions+=4;NFSU2_TR(0x520e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520e68:{NFSU2_TR(0x520e68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e69:{NFSU2_TR(0x520e69);
__builtin_memmove((R+4),(R+28),4);
}
B520e6b:{NFSU2_TR(0x520e6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520e6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520e6e:L520e6e:{c.instructions+=2;NFSU2_TR(0x520e6e);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520e75:{NFSU2_TR(0x520e75);
if(r1(R+518)){{goto L520ea5;}}
}
B520e77:L520e77:{c.instructions+=2;NFSU2_TR(0x520e77);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e79:{NFSU2_TR(0x520e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520e7eull));
TAIL_STATIC(0x575620u,575);
}
B520e7e:L520e7e:{c.instructions+=3;NFSU2_TR(0x520e7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520e81:{NFSU2_TR(0x520e81);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520e83:{NFSU2_TR(0x520e83);
if(r1(R+518)){{goto L520e9b;}}
}
B520e85:L520e85:{c.instructions+=6;NFSU2_TR(0x520e85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e86:{NFSU2_TR(0x520e86);
u8 U[4];
w4(U+0,u32(0xc6089ca7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e8b:{NFSU2_TR(0x520e8b);
u8 U[4];
w4(U+0,u32(0xdc99aafeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e90:{NFSU2_TR(0x520e90);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520e92:{NFSU2_TR(0x520e92);
__builtin_memmove((R+4),(R+0),4);
}
B520e94:{NFSU2_TR(0x520e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520e99ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520cb0u);}goto L520cb0;}
}
B520e99:L520e99:{c.instructions+=1;NFSU2_TR(0x520e99);
{goto L520e9d;}
}
B520e9b:L520e9b:{c.instructions+=1;NFSU2_TR(0x520e9b);
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
B520e9d:L520e9d:{c.instructions+=4;NFSU2_TR(0x520e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520e9f:{NFSU2_TR(0x520e9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520ea0:{NFSU2_TR(0x520ea0);
__builtin_memmove((R+4),(R+28),4);
}
B520ea2:{NFSU2_TR(0x520ea2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520ea5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520ea5:L520ea5:{c.instructions+=2;NFSU2_TR(0x520ea5);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520ea7:{NFSU2_TR(0x520ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520eacull));
TAIL_STATIC(0x575620u,575);
}
B520eac:L520eac:{c.instructions+=3;NFSU2_TR(0x520eac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520eaf:{NFSU2_TR(0x520eaf);
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
B520eb1:{NFSU2_TR(0x520eb1);
if(r1(R+518)){{goto L520efd;}}
}
B520eb3:L520eb3:{c.instructions+=19;NFSU2_TR(0x520eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x3f40e75full));
s4(u32(r4(U+0)),r4(U+4));
}
B520eba:{NFSU2_TR(0x520eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ebd:{NFSU2_TR(0x520ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ec0:{NFSU2_TR(0x520ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ec3:{NFSU2_TR(0x520ec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520ec6:{NFSU2_TR(0x520ec6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520eca:{NFSU2_TR(0x520eca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520ecd:{NFSU2_TR(0x520ecd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520ed0:{NFSU2_TR(0x520ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xc10d7979ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520ed7:{NFSU2_TR(0x520ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520eda:{NFSU2_TR(0x520eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520edd:{NFSU2_TR(0x520edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ee0:{NFSU2_TR(0x520ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ee3:{NFSU2_TR(0x520ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520ee6:{NFSU2_TR(0x520ee6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520eea:{NFSU2_TR(0x520eea);
u8 U[4];
w4(U+0,u32(0x79b568ull));
s4(u32(r4(R+0)),r4(U+0));
}
B520ef0:{NFSU2_TR(0x520ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B520ef7:{NFSU2_TR(0x520ef7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520efb:{NFSU2_TR(0x520efb);
{goto L520eff;}
}
B520efd:L520efd:{c.instructions+=1;NFSU2_TR(0x520efd);
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
B520eff:L520eff:{c.instructions+=4;NFSU2_TR(0x520eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520f01:{NFSU2_TR(0x520f01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f02:{NFSU2_TR(0x520f02);
__builtin_memmove((R+4),(R+28),4);
}
B520f04:{NFSU2_TR(0x520f04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520f07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520f07:L520f07:{c.instructions+=4;NFSU2_TR(0x520f07);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B520f0c:{NFSU2_TR(0x520f0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520f0f:{NFSU2_TR(0x520f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B520f10:{NFSU2_TR(0x520f10);
if(r1(R+518)){{goto L520f1c;}}
}
B520f12:L520f12:{c.instructions+=2;NFSU2_TR(0x520f12);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520f15:{NFSU2_TR(0x520f15);
if(r1(R+518)){{goto L520f1c;}}
}
B520f17:L520f17:{c.instructions+=2;NFSU2_TR(0x520f17);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520f1a:{NFSU2_TR(0x520f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L520f54;}}
}
B520f1c:L520f1c:{c.instructions+=2;NFSU2_TR(0x520f1c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520f26:{NFSU2_TR(0x520f26);
if(r1(R+518)){{goto L520f54;}}
}
B520f28:L520f28:{c.instructions+=2;NFSU2_TR(0x520f28);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f2a:{NFSU2_TR(0x520f2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520f2full));
TAIL_STATIC(0x575620u,575);
}
B520f2f:L520f2f:{c.instructions+=3;NFSU2_TR(0x520f2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520f32:{NFSU2_TR(0x520f32);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B520f34:{NFSU2_TR(0x520f34);
if(r1(R+518)){{goto L520f4a;}}
}
B520f36:L520f36:{c.instructions+=5;NFSU2_TR(0x520f36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f37:{NFSU2_TR(0x520f37);
u8 U[4];
w4(U+0,u32(0x8513f2c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f3c:{NFSU2_TR(0x520f3c);
u8 U[4];
w4(U+0,u32(0x7a9b397aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f41:{NFSU2_TR(0x520f41);
__builtin_memmove((R+4),(R+0),4);
}
B520f43:{NFSU2_TR(0x520f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520f48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x520d10u);}goto L520d10;}
}
B520f48:L520f48:{c.instructions+=1;NFSU2_TR(0x520f48);
{goto L520f4c;}
}
B520f4a:L520f4a:{c.instructions+=1;NFSU2_TR(0x520f4a);
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
B520f4c:L520f4c:{c.instructions+=4;NFSU2_TR(0x520f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B520f4e:{NFSU2_TR(0x520f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f4f:{NFSU2_TR(0x520f4f);
__builtin_memmove((R+4),(R+28),4);
}
B520f51:{NFSU2_TR(0x520f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520f54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520f54:L520f54:{c.instructions+=3;NFSU2_TR(0x520f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520f57:{NFSU2_TR(0x520f57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f58:{NFSU2_TR(0x520f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520f5dull));
TAIL_STATIC(0x505450u,505);
}
B520f5d:L520f5d:{c.instructions+=2;NFSU2_TR(0x520f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f5e:{NFSU2_TR(0x520f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520f63ull));
TAIL_STATIC(0x50b840u,50b);
}
B520f63:L520f63:{c.instructions+=3;NFSU2_TR(0x520f63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B520f66:{NFSU2_TR(0x520f66);
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
B520f68:{NFSU2_TR(0x520f68);
if(r1(R+518)){{goto L520f6f;}}
}
B520f6a:L520f6a:{c.instructions+=2;NFSU2_TR(0x520f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B520f6d:{NFSU2_TR(0x520f6d);
{goto L520f71;}
}
B520f6f:L520f6f:{c.instructions+=1;NFSU2_TR(0x520f6f);
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
B520f71:L520f71:{c.instructions+=4;NFSU2_TR(0x520f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520f74:{NFSU2_TR(0x520f74);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B520f77:{NFSU2_TR(0x520f77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520f78:{NFSU2_TR(0x520f78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520f7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B520f7b:L520f7b:{c.instructions+=5;NFSU2_TR(0x520f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B520f7d:{NFSU2_TR(0x520f7d);
__builtin_memmove((R+4),(R+28),4);
}
B520f7f:{NFSU2_TR(0x520f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B520f80:{NFSU2_TR(0x520f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B520f81:{NFSU2_TR(0x520f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B520f90:L520f90:{c.instructions+=28;NFSU2_TR(0x520f90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520f94:{NFSU2_TR(0x520f94);
__builtin_memmove((R+0),(R+4),4);
}
B520f96:{NFSU2_TR(0x520f96);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B520f9a:{NFSU2_TR(0x520f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520f9d:{NFSU2_TR(0x520f9d);
w4(R+8,u32(0x3f800000ull));
}
B520fa2:{NFSU2_TR(0x520fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fa5:{NFSU2_TR(0x520fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fa8:{NFSU2_TR(0x520fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fab:{NFSU2_TR(0x520fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fae:{NFSU2_TR(0x520fae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B520fb2:{NFSU2_TR(0x520fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fb5:{NFSU2_TR(0x520fb5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B520fb7:{NFSU2_TR(0x520fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fba:{NFSU2_TR(0x520fba);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B520fbe:{NFSU2_TR(0x520fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fc1:{NFSU2_TR(0x520fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fc4:{NFSU2_TR(0x520fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fc7:{NFSU2_TR(0x520fc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520fca:{NFSU2_TR(0x520fca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520fce:{NFSU2_TR(0x520fce);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520fd1:{NFSU2_TR(0x520fd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520fd4:{NFSU2_TR(0x520fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fd7:{NFSU2_TR(0x520fd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520fdb:{NFSU2_TR(0x520fdb);
u8 U[4];
w4(U+0,u32(0x79b604ull));
s4(u32(r4(R+0)),r4(U+0));
}
B520fe1:{NFSU2_TR(0x520fe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B520fe4:{NFSU2_TR(0x520fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B520fe7:{NFSU2_TR(0x520fe7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B520feb:{NFSU2_TR(0x520feb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B520ff0:L520ff0:{c.instructions+=4;NFSU2_TR(0x520ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520ff1:{NFSU2_TR(0x520ff1);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B520ff3:{NFSU2_TR(0x520ff3);
__builtin_memmove((R+24),(R+4),4);
}
B520ff5:{NFSU2_TR(0x520ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x520ffaull));
TAIL_STATIC(0x575620u,575);
}
B520ffa:L520ffa:{c.instructions+=3;NFSU2_TR(0x520ffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B520ffd:{NFSU2_TR(0x520ffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B520fff:{NFSU2_TR(0x520fff);
if(r1(R+518)){TAIL_STATIC(0x52102cu,521);}
TAIL_STATIC(0x521001u,521);
}
XIT:NFSU2_TR_EXIT(0x520,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
