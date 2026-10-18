#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46a(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_478(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_47a(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x480,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x480,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_480(u8* __restrict R,Cpu& c);
u32 page_480(Cpu& c){return body_480(c.regs.data(),c);}
__attribute__((noinline)) u32 body_480(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x480002:goto L480002;
case 0x480004:c.instructions+=2;goto B480004;
case 0x480007:c.instructions+=1;goto B480007;
case 0x480009:goto L480009;
case 0x48000b:goto L48000b;
case 0x48000e:c.instructions+=13;goto B48000e;
case 0x480012:c.instructions+=12;goto B480012;
case 0x480014:c.instructions+=11;goto B480014;
case 0x480016:c.instructions+=10;goto B480016;
case 0x480019:c.instructions+=9;goto B480019;
case 0x48001c:c.instructions+=8;goto B48001c;
case 0x48001e:c.instructions+=7;goto B48001e;
case 0x480021:c.instructions+=6;goto B480021;
case 0x480028:c.instructions+=5;goto B480028;
case 0x480029:c.instructions+=4;goto B480029;
case 0x48002a:c.instructions+=3;goto B48002a;
case 0x48002b:c.instructions+=2;goto B48002b;
case 0x48002c:c.instructions+=1;goto B48002c;
case 0x480030:goto L480030;
case 0x480031:c.instructions+=2;goto B480031;
case 0x480033:c.instructions+=1;goto B480033;
case 0x480038:goto L480038;
case 0x48003d:c.instructions+=1;goto B48003d;
case 0x48003f:goto L48003f;
case 0x480040:c.instructions+=1;goto B480040;
case 0x480045:goto L480045;
case 0x480048:goto L480048;
case 0x48004a:c.instructions+=2;goto B48004a;
case 0x48004b:c.instructions+=1;goto B48004b;
case 0x480050:goto L480050;
case 0x480054:c.instructions+=12;goto B480054;
case 0x480055:c.instructions+=11;goto B480055;
case 0x480057:c.instructions+=10;goto B480057;
case 0x48005a:c.instructions+=9;goto B48005a;
case 0x48005e:c.instructions+=8;goto B48005e;
case 0x480061:c.instructions+=7;goto B480061;
case 0x480063:c.instructions+=6;goto B480063;
case 0x480066:c.instructions+=5;goto B480066;
case 0x480068:c.instructions+=4;goto B480068;
case 0x48006c:c.instructions+=3;goto B48006c;
case 0x48006e:c.instructions+=2;goto B48006e;
case 0x48006f:c.instructions+=1;goto B48006f;
case 0x480074:goto L480074;
case 0x480077:c.instructions+=17;goto B480077;
case 0x48007a:c.instructions+=16;goto B48007a;
case 0x48007d:c.instructions+=15;goto B48007d;
case 0x480080:c.instructions+=14;goto B480080;
case 0x480082:c.instructions+=13;goto B480082;
case 0x480085:c.instructions+=12;goto B480085;
case 0x48008a:c.instructions+=11;goto B48008a;
case 0x480090:c.instructions+=10;goto B480090;
case 0x480092:c.instructions+=9;goto B480092;
case 0x480096:c.instructions+=8;goto B480096;
case 0x480099:c.instructions+=7;goto B480099;
case 0x48009b:c.instructions+=6;goto B48009b;
case 0x48009f:c.instructions+=5;goto B48009f;
case 0x4800a2:c.instructions+=4;goto B4800a2;
case 0x4800a5:c.instructions+=3;goto B4800a5;
case 0x4800ac:c.instructions+=2;goto B4800ac;
case 0x4800ad:c.instructions+=1;goto B4800ad;
case 0x4800b0:goto L4800b0;
case 0x4800b1:c.instructions+=6;goto B4800b1;
case 0x4800b3:c.instructions+=5;goto B4800b3;
case 0x4800b6:c.instructions+=4;goto B4800b6;
case 0x4800b7:c.instructions+=3;goto B4800b7;
case 0x4800bc:c.instructions+=2;goto B4800bc;
case 0x4800be:c.instructions+=1;goto B4800be;
case 0x4800c4:goto L4800c4;
case 0x4800c5:c.instructions+=1;goto B4800c5;
case 0x4800c6:goto L4800c6;
case 0x4800c9:c.instructions+=3;goto B4800c9;
case 0x4800cc:c.instructions+=2;goto B4800cc;
case 0x4800ce:c.instructions+=1;goto B4800ce;
case 0x4800d3:goto L4800d3;
case 0x4800d5:c.instructions+=1;goto B4800d5;
case 0x4800da:goto L4800da;
case 0x4800dd:c.instructions+=3;goto B4800dd;
case 0x4800df:c.instructions+=2;goto B4800df;
case 0x4800e1:c.instructions+=1;goto B4800e1;
case 0x4800e3:goto L4800e3;
case 0x4800e6:c.instructions+=5;goto B4800e6;
case 0x4800e9:c.instructions+=4;goto B4800e9;
case 0x4800ee:c.instructions+=3;goto B4800ee;
case 0x4800ef:c.instructions+=2;goto B4800ef;
case 0x4800f0:c.instructions+=1;goto B4800f0;
case 0x4800f5:goto L4800f5;
case 0x4800f8:c.instructions+=4;goto B4800f8;
case 0x4800fb:c.instructions+=3;goto B4800fb;
case 0x4800fc:c.instructions+=2;goto B4800fc;
case 0x4800fe:c.instructions+=1;goto B4800fe;
case 0x480100:goto L480100;
case 0x480102:c.instructions+=1;goto B480102;
case 0x480107:goto L480107;
case 0x480109:c.instructions+=1;goto B480109;
case 0x48010e:goto L48010e;
case 0x480111:c.instructions+=10;goto B480111;
case 0x480113:c.instructions+=9;goto B480113;
case 0x480115:c.instructions+=8;goto B480115;
case 0x480118:c.instructions+=7;goto B480118;
case 0x48011b:c.instructions+=6;goto B48011b;
case 0x48011e:c.instructions+=5;goto B48011e;
case 0x480121:c.instructions+=4;goto B480121;
case 0x480124:c.instructions+=3;goto B480124;
case 0x480127:c.instructions+=2;goto B480127;
case 0x48012a:c.instructions+=1;goto B48012a;
case 0x48012c:goto L48012c;
case 0x48012f:goto L48012f;
case 0x480132:c.instructions+=5;goto B480132;
case 0x480135:c.instructions+=4;goto B480135;
case 0x48013a:c.instructions+=3;goto B48013a;
case 0x48013b:c.instructions+=2;goto B48013b;
case 0x48013c:c.instructions+=1;goto B48013c;
case 0x480141:goto L480141;
case 0x480144:c.instructions+=4;goto B480144;
case 0x480147:c.instructions+=3;goto B480147;
case 0x480148:c.instructions+=2;goto B480148;
case 0x48014a:c.instructions+=1;goto B48014a;
case 0x480150:goto L480150;
case 0x480151:c.instructions+=1;goto B480151;
case 0x480152:goto L480152;
case 0x480155:c.instructions+=2;goto B480155;
case 0x480156:c.instructions+=1;goto B480156;
case 0x48015b:goto L48015b;
case 0x48015e:c.instructions+=4;goto B48015e;
case 0x48015f:c.instructions+=3;goto B48015f;
case 0x480166:c.instructions+=2;goto B480166;
case 0x480167:c.instructions+=1;goto B480167;
case 0x480170:goto L480170;
case 0x480171:c.instructions+=5;goto B480171;
case 0x480175:c.instructions+=4;goto B480175;
case 0x480178:c.instructions+=3;goto B480178;
case 0x480179:c.instructions+=2;goto B480179;
case 0x48017b:c.instructions+=1;goto B48017b;
case 0x480181:goto L480181;
case 0x480184:c.instructions+=5;goto B480184;
case 0x480187:c.instructions+=4;goto B480187;
case 0x480188:c.instructions+=3;goto B480188;
case 0x48018a:c.instructions+=2;goto B48018a;
case 0x48018c:c.instructions+=1;goto B48018c;
case 0x480192:goto L480192;
case 0x480193:goto L480193;
case 0x480196:c.instructions+=3;goto B480196;
case 0x480199:c.instructions+=2;goto B480199;
case 0x48019b:c.instructions+=1;goto B48019b;
case 0x4801a1:goto L4801a1;
case 0x4801a6:goto L4801a6;
case 0x4801a9:c.instructions+=3;goto B4801a9;
case 0x4801ac:c.instructions+=2;goto B4801ac;
case 0x4801ae:c.instructions+=1;goto B4801ae;
case 0x4801b3:goto L4801b3;
case 0x4801b5:c.instructions+=1;goto B4801b5;
case 0x4801ba:goto L4801ba;
case 0x4801bd:c.instructions+=3;goto B4801bd;
case 0x4801bf:c.instructions+=2;goto B4801bf;
case 0x4801c1:c.instructions+=1;goto B4801c1;
case 0x4801c3:goto L4801c3;
case 0x4801c6:c.instructions+=5;goto B4801c6;
case 0x4801c9:c.instructions+=4;goto B4801c9;
case 0x4801cf:c.instructions+=3;goto B4801cf;
case 0x4801d0:c.instructions+=2;goto B4801d0;
case 0x4801d1:c.instructions+=1;goto B4801d1;
case 0x4801d6:goto L4801d6;
case 0x4801d9:c.instructions+=4;goto B4801d9;
case 0x4801dc:c.instructions+=3;goto B4801dc;
case 0x4801dd:c.instructions+=2;goto B4801dd;
case 0x4801df:c.instructions+=1;goto B4801df;
case 0x4801e1:goto L4801e1;
case 0x4801e3:c.instructions+=1;goto B4801e3;
case 0x4801e8:goto L4801e8;
case 0x4801ea:c.instructions+=1;goto B4801ea;
case 0x4801ef:goto L4801ef;
case 0x4801f2:c.instructions+=10;goto B4801f2;
case 0x4801f4:c.instructions+=9;goto B4801f4;
case 0x4801f6:c.instructions+=8;goto B4801f6;
case 0x4801f9:c.instructions+=7;goto B4801f9;
case 0x4801fc:c.instructions+=6;goto B4801fc;
case 0x4801ff:c.instructions+=5;goto B4801ff;
case 0x480202:c.instructions+=4;goto B480202;
case 0x480205:c.instructions+=3;goto B480205;
case 0x480208:c.instructions+=2;goto B480208;
case 0x48020b:c.instructions+=1;goto B48020b;
case 0x48020d:goto L48020d;
case 0x480210:goto L480210;
case 0x480213:c.instructions+=5;goto B480213;
case 0x480216:c.instructions+=4;goto B480216;
case 0x48021c:c.instructions+=3;goto B48021c;
case 0x48021d:c.instructions+=2;goto B48021d;
case 0x48021e:c.instructions+=1;goto B48021e;
case 0x480223:goto L480223;
case 0x480226:goto L480226;
case 0x480229:c.instructions+=4;goto B480229;
case 0x48022c:c.instructions+=3;goto B48022c;
case 0x48022d:c.instructions+=2;goto B48022d;
case 0x48022f:c.instructions+=1;goto B48022f;
case 0x480235:goto L480235;
case 0x480236:goto L480236;
case 0x480239:c.instructions+=2;goto B480239;
case 0x48023a:c.instructions+=1;goto B48023a;
case 0x48023f:goto L48023f;
case 0x480242:c.instructions+=5;goto B480242;
case 0x480243:c.instructions+=4;goto B480243;
case 0x48024a:c.instructions+=3;goto B48024a;
case 0x48024b:c.instructions+=2;goto B48024b;
case 0x48024c:c.instructions+=1;goto B48024c;
case 0x48024f:goto L48024f;
case 0x480252:c.instructions+=3;goto B480252;
case 0x480255:c.instructions+=2;goto B480255;
case 0x480257:c.instructions+=1;goto B480257;
case 0x480259:goto L480259;
case 0x48025e:goto L48025e;
case 0x480261:c.instructions+=1;goto B480261;
case 0x480268:goto L480268;
case 0x480269:c.instructions+=2;goto B480269;
case 0x48026a:c.instructions+=1;goto B48026a;
case 0x480270:goto L480270;
case 0x480271:c.instructions+=9;goto B480271;
case 0x480272:c.instructions+=8;goto B480272;
case 0x480274:c.instructions+=7;goto B480274;
case 0x480277:c.instructions+=6;goto B480277;
case 0x48027a:c.instructions+=5;goto B48027a;
case 0x48027b:c.instructions+=4;goto B48027b;
case 0x48027d:c.instructions+=3;goto B48027d;
case 0x48027f:c.instructions+=2;goto B48027f;
case 0x480282:c.instructions+=1;goto B480282;
case 0x480288:goto L480288;
case 0x48028a:c.instructions+=4;goto B48028a;
case 0x48028d:c.instructions+=3;goto B48028d;
case 0x48028f:c.instructions+=2;goto B48028f;
case 0x480291:c.instructions+=1;goto B480291;
case 0x480297:goto L480297;
case 0x48029a:c.instructions+=3;goto B48029a;
case 0x48029b:c.instructions+=2;goto B48029b;
case 0x48029c:c.instructions+=1;goto B48029c;
case 0x4802a1:goto L4802a1;
case 0x4802a4:c.instructions+=4;goto B4802a4;
case 0x4802a7:c.instructions+=3;goto B4802a7;
case 0x4802a9:c.instructions+=2;goto B4802a9;
case 0x4802ac:c.instructions+=1;goto B4802ac;
case 0x4802ae:goto L4802ae;
case 0x4802af:c.instructions+=1;goto B4802af;
case 0x4802b0:goto L4802b0;
case 0x4802b5:c.instructions+=4;goto B4802b5;
case 0x4802b7:c.instructions+=3;goto B4802b7;
case 0x4802b8:c.instructions+=2;goto B4802b8;
case 0x4802bc:c.instructions+=1;goto B4802bc;
case 0x4802c1:goto L4802c1;
case 0x4802c4:c.instructions+=2;goto B4802c4;
case 0x4802c6:c.instructions+=1;goto B4802c6;
case 0x4802c8:goto L4802c8;
case 0x4802ce:c.instructions+=1;goto B4802ce;
case 0x4802d0:goto L4802d0;
case 0x4802d2:goto L4802d2;
case 0x4802d5:c.instructions+=8;goto B4802d5;
case 0x4802d8:c.instructions+=7;goto B4802d8;
case 0x4802db:c.instructions+=6;goto B4802db;
case 0x4802de:c.instructions+=5;goto B4802de;
case 0x4802e1:c.instructions+=4;goto B4802e1;
case 0x4802e3:c.instructions+=3;goto B4802e3;
case 0x4802e4:c.instructions+=2;goto B4802e4;
case 0x4802e5:c.instructions+=1;goto B4802e5;
case 0x4802e8:goto L4802e8;
case 0x4802eb:c.instructions+=7;goto B4802eb;
case 0x4802ee:c.instructions+=6;goto B4802ee;
case 0x4802f1:c.instructions+=5;goto B4802f1;
case 0x4802f2:c.instructions+=4;goto B4802f2;
case 0x4802f3:c.instructions+=3;goto B4802f3;
case 0x4802f4:c.instructions+=2;goto B4802f4;
case 0x4802f6:c.instructions+=1;goto B4802f6;
case 0x4802fb:goto L4802fb;
case 0x4802fe:c.instructions+=9;goto B4802fe;
case 0x480303:c.instructions+=8;goto B480303;
case 0x480304:c.instructions+=7;goto B480304;
case 0x480307:c.instructions+=6;goto B480307;
case 0x48030a:c.instructions+=5;goto B48030a;
case 0x48030d:c.instructions+=4;goto B48030d;
case 0x48030f:c.instructions+=3;goto B48030f;
case 0x480310:c.instructions+=2;goto B480310;
case 0x480312:c.instructions+=1;goto B480312;
case 0x480314:goto L480314;
case 0x480315:goto L480315;
case 0x480316:goto L480316;
case 0x480317:c.instructions+=3;goto B480317;
case 0x480318:c.instructions+=2;goto B480318;
case 0x480319:c.instructions+=1;goto B480319;
case 0x480320:goto L480320;
case 0x480321:c.instructions+=8;goto B480321;
case 0x480322:c.instructions+=7;goto B480322;
case 0x480324:c.instructions+=6;goto B480324;
case 0x480327:c.instructions+=5;goto B480327;
case 0x48032a:c.instructions+=4;goto B48032a;
case 0x48032b:c.instructions+=3;goto B48032b;
case 0x48032d:c.instructions+=2;goto B48032d;
case 0x48032f:c.instructions+=1;goto B48032f;
case 0x480331:goto L480331;
case 0x480334:c.instructions+=4;goto B480334;
case 0x480335:c.instructions+=3;goto B480335;
case 0x480336:c.instructions+=2;goto B480336;
case 0x480337:c.instructions+=1;goto B480337;
case 0x480338:goto L480338;
case 0x48033a:c.instructions+=17;goto B48033a;
case 0x48033d:c.instructions+=16;goto B48033d;
case 0x480340:c.instructions+=15;goto B480340;
case 0x480343:c.instructions+=14;goto B480343;
case 0x480349:c.instructions+=13;goto B480349;
case 0x48034a:c.instructions+=12;goto B48034a;
case 0x480350:c.instructions+=11;goto B480350;
case 0x480353:c.instructions+=10;goto B480353;
case 0x480355:c.instructions+=9;goto B480355;
case 0x48035b:c.instructions+=8;goto B48035b;
case 0x48035e:c.instructions+=7;goto B48035e;
case 0x480361:c.instructions+=6;goto B480361;
case 0x480364:c.instructions+=5;goto B480364;
case 0x480367:c.instructions+=4;goto B480367;
case 0x480369:c.instructions+=3;goto B480369;
case 0x48036b:c.instructions+=2;goto B48036b;
case 0x48036c:c.instructions+=1;goto B48036c;
case 0x480372:goto L480372;
case 0x480375:c.instructions+=12;goto B480375;
case 0x48037b:c.instructions+=11;goto B48037b;
case 0x480381:c.instructions+=10;goto B480381;
case 0x480383:c.instructions+=9;goto B480383;
case 0x480386:c.instructions+=8;goto B480386;
case 0x48038c:c.instructions+=7;goto B48038c;
case 0x48038f:c.instructions+=6;goto B48038f;
case 0x480392:c.instructions+=5;goto B480392;
case 0x480394:c.instructions+=4;goto B480394;
case 0x480396:c.instructions+=3;goto B480396;
case 0x480398:c.instructions+=2;goto B480398;
case 0x48039b:c.instructions+=1;goto B48039b;
case 0x48039d:goto L48039d;
case 0x48039f:goto L48039f;
case 0x4803a1:goto L4803a1;
case 0x4803a7:c.instructions+=4;goto B4803a7;
case 0x4803aa:c.instructions+=3;goto B4803aa;
case 0x4803ab:c.instructions+=2;goto B4803ab;
case 0x4803af:c.instructions+=1;goto B4803af;
case 0x4803b4:goto L4803b4;
case 0x4803b7:c.instructions+=2;goto B4803b7;
case 0x4803b9:c.instructions+=1;goto B4803b9;
case 0x4803bb:goto L4803bb;
case 0x4803c1:c.instructions+=4;goto B4803c1;
case 0x4803c4:c.instructions+=3;goto B4803c4;
case 0x4803c7:c.instructions+=2;goto B4803c7;
case 0x4803ca:c.instructions+=1;goto B4803ca;
case 0x4803cc:goto L4803cc;
case 0x4803ce:goto L4803ce;
case 0x4803d1:c.instructions+=10;goto B4803d1;
case 0x4803d5:c.instructions+=9;goto B4803d5;
case 0x4803d8:c.instructions+=8;goto B4803d8;
case 0x4803db:c.instructions+=7;goto B4803db;
case 0x4803de:c.instructions+=6;goto B4803de;
case 0x4803e1:c.instructions+=5;goto B4803e1;
case 0x4803e3:c.instructions+=4;goto B4803e3;
case 0x4803e4:c.instructions+=3;goto B4803e4;
case 0x4803e5:c.instructions+=2;goto B4803e5;
case 0x4803e7:c.instructions+=1;goto B4803e7;
case 0x4803ea:goto L4803ea;
case 0x4803ed:c.instructions+=5;goto B4803ed;
case 0x4803ee:c.instructions+=4;goto B4803ee;
case 0x4803ef:c.instructions+=3;goto B4803ef;
case 0x4803f0:c.instructions+=2;goto B4803f0;
case 0x4803f2:c.instructions+=1;goto B4803f2;
case 0x4803f7:goto L4803f7;
case 0x4803fa:c.instructions+=9;goto B4803fa;
case 0x4803ff:c.instructions+=8;goto B4803ff;
case 0x480400:c.instructions+=7;goto B480400;
case 0x480403:c.instructions+=6;goto B480403;
case 0x480406:c.instructions+=5;goto B480406;
case 0x480409:c.instructions+=4;goto B480409;
case 0x48040b:c.instructions+=3;goto B48040b;
case 0x48040c:c.instructions+=2;goto B48040c;
case 0x48040e:c.instructions+=1;goto B48040e;
case 0x480410:goto L480410;
case 0x480411:c.instructions+=5;goto B480411;
case 0x480412:c.instructions+=4;goto B480412;
case 0x480413:c.instructions+=3;goto B480413;
case 0x480414:c.instructions+=2;goto B480414;
case 0x480415:c.instructions+=1;goto B480415;
case 0x480420:goto L480420;
case 0x480423:c.instructions+=12;goto B480423;
case 0x480424:c.instructions+=11;goto B480424;
case 0x480426:c.instructions+=10;goto B480426;
case 0x480429:c.instructions+=9;goto B480429;
case 0x48042c:c.instructions+=8;goto B48042c;
case 0x48042e:c.instructions+=7;goto B48042e;
case 0x480431:c.instructions+=6;goto B480431;
case 0x480432:c.instructions+=5;goto B480432;
case 0x480434:c.instructions+=4;goto B480434;
case 0x480436:c.instructions+=3;goto B480436;
case 0x48043a:c.instructions+=2;goto B48043a;
case 0x48043e:c.instructions+=1;goto B48043e;
case 0x480444:goto L480444;
case 0x480445:c.instructions+=4;goto B480445;
case 0x480446:c.instructions+=3;goto B480446;
case 0x480448:c.instructions+=2;goto B480448;
case 0x48044c:c.instructions+=1;goto B48044c;
case 0x48044e:goto L48044e;
case 0x480452:c.instructions+=1;goto B480452;
case 0x480454:goto L480454;
case 0x480457:c.instructions+=11;goto B480457;
case 0x48045a:c.instructions+=10;goto B48045a;
case 0x48045d:c.instructions+=9;goto B48045d;
case 0x480460:c.instructions+=8;goto B480460;
case 0x480462:c.instructions+=7;goto B480462;
case 0x480466:c.instructions+=6;goto B480466;
case 0x480468:c.instructions+=5;goto B480468;
case 0x48046c:c.instructions+=4;goto B48046c;
case 0x480470:c.instructions+=3;goto B480470;
case 0x480474:c.instructions+=2;goto B480474;
case 0x480478:c.instructions+=1;goto B480478;
case 0x48047b:goto L48047b;
case 0x48047e:c.instructions+=7;goto B48047e;
case 0x480480:c.instructions+=6;goto B480480;
case 0x480482:c.instructions+=5;goto B480482;
case 0x480484:c.instructions+=4;goto B480484;
case 0x480488:c.instructions+=3;goto B480488;
case 0x48048c:c.instructions+=2;goto B48048c;
case 0x480491:c.instructions+=1;goto B480491;
case 0x480493:goto L480493;
case 0x480496:c.instructions+=2;goto B480496;
case 0x48049a:c.instructions+=1;goto B48049a;
case 0x4804a0:goto L4804a0;
case 0x4804a3:c.instructions+=4;goto B4804a3;
case 0x4804a6:c.instructions+=3;goto B4804a6;
case 0x4804a8:c.instructions+=2;goto B4804a8;
case 0x4804ac:c.instructions+=1;goto B4804ac;
case 0x4804af:goto L4804af;
case 0x4804b3:c.instructions+=4;goto B4804b3;
case 0x4804b5:c.instructions+=3;goto B4804b5;
case 0x4804b8:c.instructions+=2;goto B4804b8;
case 0x4804ba:c.instructions+=1;goto B4804ba;
case 0x4804bc:goto L4804bc;
case 0x4804c0:c.instructions+=2;goto B4804c0;
case 0x4804c2:c.instructions+=1;goto B4804c2;
case 0x4804c4:goto L4804c4;
case 0x4804c8:c.instructions+=2;goto B4804c8;
case 0x4804cd:c.instructions+=1;goto B4804cd;
case 0x4804d0:goto L4804d0;
case 0x4804d4:c.instructions+=1;goto B4804d4;
case 0x4804d6:goto L4804d6;
case 0x4804d8:goto L4804d8;
case 0x4804dc:c.instructions+=1;goto B4804dc;
case 0x4804de:goto L4804de;
case 0x4804e2:goto L4804e2;
case 0x4804e5:c.instructions+=3;goto B4804e5;
case 0x4804e6:c.instructions+=2;goto B4804e6;
case 0x4804e8:c.instructions+=1;goto B4804e8;
case 0x4804ea:goto L4804ea;
case 0x4804ed:c.instructions+=3;goto B4804ed;
case 0x4804f2:c.instructions+=2;goto B4804f2;
case 0x4804f7:c.instructions+=1;goto B4804f7;
case 0x4804f9:goto L4804f9;
case 0x4804fc:c.instructions+=4;goto B4804fc;
case 0x4804ff:c.instructions+=3;goto B4804ff;
case 0x480502:c.instructions+=2;goto B480502;
case 0x480504:c.instructions+=1;goto B480504;
case 0x480507:goto L480507;
case 0x48050b:c.instructions+=8;goto B48050b;
case 0x48050e:c.instructions+=7;goto B48050e;
case 0x480510:c.instructions+=6;goto B480510;
case 0x480513:c.instructions+=5;goto B480513;
case 0x480517:c.instructions+=4;goto B480517;
case 0x48051b:c.instructions+=3;goto B48051b;
case 0x48051f:c.instructions+=2;goto B48051f;
case 0x480521:c.instructions+=1;goto B480521;
case 0x480523:goto L480523;
case 0x480525:goto L480525;
case 0x480529:c.instructions+=7;goto B480529;
case 0x48052b:c.instructions+=6;goto B48052b;
case 0x48052e:c.instructions+=5;goto B48052e;
case 0x480532:c.instructions+=4;goto B480532;
case 0x480534:c.instructions+=3;goto B480534;
case 0x48053a:c.instructions+=2;goto B48053a;
case 0x480540:c.instructions+=1;goto B480540;
case 0x480542:goto L480542;
case 0x480546:c.instructions+=1;goto B480546;
case 0x480548:goto L480548;
case 0x48054b:c.instructions+=4;goto B48054b;
case 0x48054e:c.instructions+=3;goto B48054e;
case 0x480553:c.instructions+=2;goto B480553;
case 0x480555:c.instructions+=1;goto B480555;
case 0x480557:goto L480557;
case 0x48055b:c.instructions+=1;goto B48055b;
case 0x48055d:goto L48055d;
case 0x480560:c.instructions+=2;goto B480560;
case 0x480564:c.instructions+=1;goto B480564;
case 0x480568:goto L480568;
case 0x480569:c.instructions+=1;goto B480569;
case 0x48056b:goto L48056b;
case 0x48056e:c.instructions+=10;goto B48056e;
case 0x480571:c.instructions+=9;goto B480571;
case 0x480575:c.instructions+=8;goto B480575;
case 0x480578:c.instructions+=7;goto B480578;
case 0x480579:c.instructions+=6;goto B480579;
case 0x48057c:c.instructions+=5;goto B48057c;
case 0x48057d:c.instructions+=4;goto B48057d;
case 0x48057e:c.instructions+=3;goto B48057e;
case 0x480583:c.instructions+=2;goto B480583;
case 0x480585:c.instructions+=1;goto B480585;
case 0x48058a:goto L48058a;
case 0x48058d:c.instructions+=8;goto B48058d;
case 0x480590:c.instructions+=7;goto B480590;
case 0x480594:c.instructions+=6;goto B480594;
case 0x480597:c.instructions+=5;goto B480597;
case 0x480598:c.instructions+=4;goto B480598;
case 0x480599:c.instructions+=3;goto B480599;
case 0x48059e:c.instructions+=2;goto B48059e;
case 0x4805a0:c.instructions+=1;goto B4805a0;
case 0x4805a5:goto L4805a5;
case 0x4805a8:c.instructions+=20;goto B4805a8;
case 0x4805ab:c.instructions+=19;goto B4805ab;
case 0x4805ae:c.instructions+=18;goto B4805ae;
case 0x4805b1:c.instructions+=17;goto B4805b1;
case 0x4805b7:c.instructions+=16;goto B4805b7;
case 0x4805ba:c.instructions+=15;goto B4805ba;
case 0x4805bd:c.instructions+=14;goto B4805bd;
case 0x4805c1:c.instructions+=13;goto B4805c1;
case 0x4805c3:c.instructions+=12;goto B4805c3;
case 0x4805c7:c.instructions+=11;goto B4805c7;
case 0x4805c9:c.instructions+=10;goto B4805c9;
case 0x4805cf:c.instructions+=9;goto B4805cf;
case 0x4805d2:c.instructions+=8;goto B4805d2;
case 0x4805d5:c.instructions+=7;goto B4805d5;
case 0x4805d8:c.instructions+=6;goto B4805d8;
case 0x4805db:c.instructions+=5;goto B4805db;
case 0x4805dd:c.instructions+=4;goto B4805dd;
case 0x4805e0:c.instructions+=3;goto B4805e0;
case 0x4805e3:c.instructions+=2;goto B4805e3;
case 0x4805e6:c.instructions+=1;goto B4805e6;
case 0x4805e8:goto L4805e8;
case 0x4805eb:c.instructions+=2;goto B4805eb;
case 0x4805ee:c.instructions+=1;goto B4805ee;
case 0x4805f0:goto L4805f0;
case 0x4805f7:goto L4805f7;
case 0x4805fb:c.instructions+=3;goto B4805fb;
case 0x4805fd:c.instructions+=2;goto B4805fd;
case 0x4805ff:c.instructions+=1;goto B4805ff;
case 0x480601:goto L480601;
case 0x480603:goto L480603;
case 0x480605:goto L480605;
case 0x480608:c.instructions+=5;goto B480608;
case 0x48060b:c.instructions+=4;goto B48060b;
case 0x48060e:c.instructions+=3;goto B48060e;
case 0x480610:c.instructions+=2;goto B480610;
case 0x480614:c.instructions+=1;goto B480614;
case 0x480617:goto L480617;
case 0x48061a:c.instructions+=4;goto B48061a;
case 0x48061d:c.instructions+=3;goto B48061d;
case 0x48061f:c.instructions+=2;goto B48061f;
case 0x480622:c.instructions+=1;goto B480622;
case 0x480625:goto L480625;
case 0x48062b:c.instructions+=5;goto B48062b;
case 0x480630:c.instructions+=4;goto B480630;
case 0x480633:c.instructions+=3;goto B480633;
case 0x480635:c.instructions+=2;goto B480635;
case 0x480636:c.instructions+=1;goto B480636;
case 0x48063b:goto L48063b;
case 0x48063d:c.instructions+=3;goto B48063d;
case 0x48063f:c.instructions+=2;goto B48063f;
case 0x480641:c.instructions+=1;goto B480641;
case 0x480647:goto L480647;
case 0x48064a:c.instructions+=6;goto B48064a;
case 0x48064e:c.instructions+=5;goto B48064e;
case 0x480651:c.instructions+=4;goto B480651;
case 0x480654:c.instructions+=3;goto B480654;
case 0x480656:c.instructions+=2;goto B480656;
case 0x48065a:c.instructions+=1;goto B48065a;
case 0x48065c:goto L48065c;
case 0x48065f:c.instructions+=4;goto B48065f;
case 0x480661:c.instructions+=3;goto B480661;
case 0x480664:c.instructions+=2;goto B480664;
case 0x480667:c.instructions+=1;goto B480667;
case 0x48066d:goto L48066d;
case 0x480671:goto L480671;
case 0x480674:c.instructions+=20;goto B480674;
case 0x480678:c.instructions+=19;goto B480678;
case 0x48067b:c.instructions+=18;goto B48067b;
case 0x48067e:c.instructions+=17;goto B48067e;
case 0x480680:c.instructions+=16;goto B480680;
case 0x480683:c.instructions+=15;goto B480683;
case 0x480687:c.instructions+=14;goto B480687;
case 0x480689:c.instructions+=13;goto B480689;
case 0x48068c:c.instructions+=12;goto B48068c;
case 0x48068f:c.instructions+=11;goto B48068f;
case 0x480692:c.instructions+=10;goto B480692;
case 0x480695:c.instructions+=9;goto B480695;
case 0x480698:c.instructions+=8;goto B480698;
case 0x48069c:c.instructions+=7;goto B48069c;
case 0x4806a0:c.instructions+=6;goto B4806a0;
case 0x4806a6:c.instructions+=5;goto B4806a6;
case 0x4806aa:c.instructions+=4;goto B4806aa;
case 0x4806ad:c.instructions+=3;goto B4806ad;
case 0x4806ae:c.instructions+=2;goto B4806ae;
case 0x4806b2:c.instructions+=1;goto B4806b2;
case 0x4806b4:goto L4806b4;
case 0x4806b9:goto L4806b9;
case 0x4806bb:c.instructions+=2;goto B4806bb;
case 0x4806bf:c.instructions+=1;goto B4806bf;
case 0x4806c5:goto L4806c5;
case 0x4806c9:c.instructions+=12;goto B4806c9;
case 0x4806cb:c.instructions+=11;goto B4806cb;
case 0x4806ce:c.instructions+=10;goto B4806ce;
case 0x4806d1:c.instructions+=9;goto B4806d1;
case 0x4806d5:c.instructions+=8;goto B4806d5;
case 0x4806d8:c.instructions+=7;goto B4806d8;
case 0x4806d9:c.instructions+=6;goto B4806d9;
case 0x4806dc:c.instructions+=5;goto B4806dc;
case 0x4806de:c.instructions+=4;goto B4806de;
case 0x4806df:c.instructions+=3;goto B4806df;
case 0x4806e4:c.instructions+=2;goto B4806e4;
case 0x4806e6:c.instructions+=1;goto B4806e6;
case 0x4806eb:goto L4806eb;
case 0x4806ee:c.instructions+=4;goto B4806ee;
case 0x4806f1:c.instructions+=3;goto B4806f1;
case 0x4806f3:c.instructions+=2;goto B4806f3;
case 0x4806f5:c.instructions+=1;goto B4806f5;
case 0x4806f7:goto L4806f7;
case 0x4806fa:c.instructions+=3;goto B4806fa;
case 0x4806fd:c.instructions+=2;goto B4806fd;
case 0x4806ff:c.instructions+=1;goto B4806ff;
case 0x480702:goto L480702;
case 0x480704:c.instructions+=1;goto B480704;
case 0x48070a:goto L48070a;
case 0x48070d:c.instructions+=3;goto B48070d;
case 0x48070e:c.instructions+=2;goto B48070e;
case 0x480710:c.instructions+=1;goto B480710;
case 0x480712:goto L480712;
case 0x480715:c.instructions+=2;goto B480715;
case 0x48071b:c.instructions+=1;goto B48071b;
case 0x48071e:goto L48071e;
case 0x480720:c.instructions+=1;goto B480720;
case 0x480722:goto L480722;
case 0x480724:c.instructions+=2;goto B480724;
case 0x480726:c.instructions+=1;goto B480726;
case 0x480729:goto L480729;
case 0x48072c:c.instructions+=8;goto B48072c;
case 0x480730:c.instructions+=7;goto B480730;
case 0x480733:c.instructions+=6;goto B480733;
case 0x480736:c.instructions+=5;goto B480736;
case 0x48073a:c.instructions+=4;goto B48073a;
case 0x48073d:c.instructions+=3;goto B48073d;
case 0x48073f:c.instructions+=2;goto B48073f;
case 0x480741:c.instructions+=1;goto B480741;
case 0x480744:goto L480744;
case 0x48074a:c.instructions+=5;goto B48074a;
case 0x48074c:c.instructions+=4;goto B48074c;
case 0x480751:c.instructions+=3;goto B480751;
case 0x480756:c.instructions+=2;goto B480756;
case 0x480757:c.instructions+=1;goto B480757;
case 0x48075c:goto L48075c;
case 0x480760:c.instructions+=7;goto B480760;
case 0x480761:c.instructions+=6;goto B480761;
case 0x480764:c.instructions+=5;goto B480764;
case 0x480767:c.instructions+=4;goto B480767;
case 0x480768:c.instructions+=3;goto B480768;
case 0x480769:c.instructions+=2;goto B480769;
case 0x48076b:c.instructions+=1;goto B48076b;
case 0x48076e:goto L48076e;
case 0x480772:c.instructions+=5;goto B480772;
case 0x480776:c.instructions+=4;goto B480776;
case 0x480777:c.instructions+=3;goto B480777;
case 0x480779:c.instructions+=2;goto B480779;
case 0x48077d:c.instructions+=1;goto B48077d;
case 0x480783:goto L480783;
case 0x480787:goto L480787;
case 0x48078a:c.instructions+=5;goto B48078a;
case 0x48078c:c.instructions+=4;goto B48078c;
case 0x48078f:c.instructions+=3;goto B48078f;
case 0x480792:c.instructions+=2;goto B480792;
case 0x480794:c.instructions+=1;goto B480794;
case 0x480796:goto L480796;
case 0x48079a:c.instructions+=1;goto B48079a;
case 0x4807a0:goto L4807a0;
case 0x4807a2:c.instructions+=14;goto B4807a2;
case 0x4807a5:c.instructions+=13;goto B4807a5;
case 0x4807a7:c.instructions+=12;goto B4807a7;
case 0x4807aa:c.instructions+=11;goto B4807aa;
case 0x4807ad:c.instructions+=10;goto B4807ad;
case 0x4807b0:c.instructions+=9;goto B4807b0;
case 0x4807b3:c.instructions+=8;goto B4807b3;
case 0x4807b6:c.instructions+=7;goto B4807b6;
case 0x4807ba:c.instructions+=6;goto B4807ba;
case 0x4807be:c.instructions+=5;goto B4807be;
case 0x4807c1:c.instructions+=4;goto B4807c1;
case 0x4807c2:c.instructions+=3;goto B4807c2;
case 0x4807cc:c.instructions+=2;goto B4807cc;
case 0x4807d0:c.instructions+=1;goto B4807d0;
case 0x4807d2:goto L4807d2;
case 0x4807d6:c.instructions+=10;goto B4807d6;
case 0x4807d8:c.instructions+=9;goto B4807d8;
case 0x4807db:c.instructions+=8;goto B4807db;
case 0x4807df:c.instructions+=7;goto B4807df;
case 0x4807e0:c.instructions+=6;goto B4807e0;
case 0x4807e3:c.instructions+=5;goto B4807e3;
case 0x4807e6:c.instructions+=4;goto B4807e6;
case 0x4807e7:c.instructions+=3;goto B4807e7;
case 0x4807ec:c.instructions+=2;goto B4807ec;
case 0x4807ee:c.instructions+=1;goto B4807ee;
case 0x4807f3:goto L4807f3;
case 0x4807f6:c.instructions+=4;goto B4807f6;
case 0x4807fa:c.instructions+=3;goto B4807fa;
case 0x4807fd:c.instructions+=2;goto B4807fd;
case 0x480800:c.instructions+=1;goto B480800;
case 0x480802:goto L480802;
case 0x480805:c.instructions+=2;goto B480805;
case 0x480808:c.instructions+=1;goto B480808;
case 0x48080d:goto L48080d;
case 0x480810:c.instructions+=6;goto B480810;
case 0x480814:c.instructions+=5;goto B480814;
case 0x480817:c.instructions+=4;goto B480817;
case 0x48081a:c.instructions+=3;goto B48081a;
case 0x48081c:c.instructions+=2;goto B48081c;
case 0x48081d:c.instructions+=1;goto B48081d;
case 0x480820:goto L480820;
case 0x480821:c.instructions+=3;goto B480821;
case 0x480826:c.instructions+=2;goto B480826;
case 0x480827:c.instructions+=1;goto B480827;
case 0x48082c:goto L48082c;
case 0x48082f:goto L48082f;
case 0x480832:goto L480832;
case 0x480836:c.instructions+=8;goto B480836;
case 0x48083a:c.instructions+=7;goto B48083a;
case 0x48083d:c.instructions+=6;goto B48083d;
case 0x48083e:c.instructions+=5;goto B48083e;
case 0x480841:c.instructions+=4;goto B480841;
case 0x480843:c.instructions+=3;goto B480843;
case 0x480847:c.instructions+=2;goto B480847;
case 0x48084b:c.instructions+=1;goto B48084b;
case 0x480851:goto L480851;
case 0x480852:c.instructions+=1;goto B480852;
case 0x480853:goto L480853;
case 0x480854:c.instructions+=3;goto B480854;
case 0x480855:c.instructions+=2;goto B480855;
case 0x480858:c.instructions+=1;goto B480858;
case 0x480860:goto L480860;
case 0x480861:c.instructions+=6;goto B480861;
case 0x480862:c.instructions+=5;goto B480862;
case 0x480864:c.instructions+=4;goto B480864;
case 0x480867:c.instructions+=3;goto B480867;
case 0x480869:c.instructions+=2;goto B480869;
case 0x48086b:c.instructions+=1;goto B48086b;
case 0x480871:goto L480871;
case 0x480872:c.instructions+=1;goto B480872;
case 0x480876:goto L480876;
case 0x480879:c.instructions+=13;goto B480879;
case 0x48087c:c.instructions+=12;goto B48087c;
case 0x48087f:c.instructions+=11;goto B48087f;
case 0x480882:c.instructions+=10;goto B480882;
case 0x480888:c.instructions+=9;goto B480888;
case 0x480889:c.instructions+=8;goto B480889;
case 0x48088a:c.instructions+=7;goto B48088a;
case 0x48088d:c.instructions+=6;goto B48088d;
case 0x48088e:c.instructions+=5;goto B48088e;
case 0x48088f:c.instructions+=4;goto B48088f;
case 0x480890:c.instructions+=3;goto B480890;
case 0x480895:c.instructions+=2;goto B480895;
case 0x480896:c.instructions+=1;goto B480896;
case 0x48089b:goto L48089b;
case 0x48089e:c.instructions+=9;goto B48089e;
case 0x4808a1:c.instructions+=8;goto B4808a1;
case 0x4808a4:c.instructions+=7;goto B4808a4;
case 0x4808a7:c.instructions+=6;goto B4808a7;
case 0x4808aa:c.instructions+=5;goto B4808aa;
case 0x4808b0:c.instructions+=4;goto B4808b0;
case 0x4808b1:c.instructions+=3;goto B4808b1;
case 0x4808b6:c.instructions+=2;goto B4808b6;
case 0x4808b7:c.instructions+=1;goto B4808b7;
case 0x4808bc:goto L4808bc;
case 0x4808bf:c.instructions+=7;goto B4808bf;
case 0x4808c2:c.instructions+=6;goto B4808c2;
case 0x4808c5:c.instructions+=5;goto B4808c5;
case 0x4808c8:c.instructions+=4;goto B4808c8;
case 0x4808cb:c.instructions+=3;goto B4808cb;
case 0x4808ce:c.instructions+=2;goto B4808ce;
case 0x4808d0:c.instructions+=1;goto B4808d0;
case 0x4808d2:goto L4808d2;
case 0x4808d4:c.instructions+=2;goto B4808d4;
case 0x4808d5:c.instructions+=1;goto B4808d5;
case 0x4808da:goto L4808da;
case 0x4808dd:c.instructions+=9;goto B4808dd;
case 0x4808e0:c.instructions+=8;goto B4808e0;
case 0x4808e3:c.instructions+=7;goto B4808e3;
case 0x4808e6:c.instructions+=6;goto B4808e6;
case 0x4808e9:c.instructions+=5;goto B4808e9;
case 0x4808ee:c.instructions+=4;goto B4808ee;
case 0x4808ef:c.instructions+=3;goto B4808ef;
case 0x4808f4:c.instructions+=2;goto B4808f4;
case 0x4808f5:c.instructions+=1;goto B4808f5;
case 0x4808fa:goto L4808fa;
case 0x4808fd:c.instructions+=4;goto B4808fd;
case 0x480900:c.instructions+=3;goto B480900;
case 0x480901:c.instructions+=2;goto B480901;
case 0x480903:c.instructions+=1;goto B480903;
case 0x480909:goto L480909;
case 0x48090a:goto L48090a;
case 0x48090b:c.instructions+=2;goto B48090b;
case 0x48090c:c.instructions+=1;goto B48090c;
case 0x480910:goto L480910;
case 0x480911:c.instructions+=8;goto B480911;
case 0x480912:c.instructions+=7;goto B480912;
case 0x480913:c.instructions+=6;goto B480913;
case 0x480917:c.instructions+=5;goto B480917;
case 0x480919:c.instructions+=4;goto B480919;
case 0x48091e:c.instructions+=3;goto B48091e;
case 0x480923:c.instructions+=2;goto B480923;
case 0x480925:c.instructions+=1;goto B480925;
case 0x480927:goto L480927;
case 0x48092c:c.instructions+=1;goto B48092c;
case 0x48092e:goto L48092e;
case 0x480933:c.instructions+=1;goto B480933;
case 0x480939:goto L480939;
case 0x48093c:c.instructions+=7;goto B48093c;
case 0x48093e:c.instructions+=6;goto B48093e;
case 0x480944:c.instructions+=5;goto B480944;
case 0x480947:c.instructions+=4;goto B480947;
case 0x480949:c.instructions+=3;goto B480949;
case 0x48094f:c.instructions+=2;goto B48094f;
case 0x480950:c.instructions+=1;goto B480950;
case 0x480955:goto L480955;
case 0x480957:c.instructions+=1;goto B480957;
case 0x480959:goto L480959;
case 0x48095c:c.instructions+=5;goto B48095c;
case 0x480960:c.instructions+=4;goto B480960;
case 0x480961:c.instructions+=3;goto B480961;
case 0x480962:c.instructions+=2;goto B480962;
case 0x480963:c.instructions+=1;goto B480963;
case 0x480966:goto L480966;
case 0x480969:c.instructions+=7;goto B480969;
case 0x48096f:c.instructions+=6;goto B48096f;
case 0x480971:c.instructions+=5;goto B480971;
case 0x480974:c.instructions+=4;goto B480974;
case 0x480979:c.instructions+=3;goto B480979;
case 0x48097b:c.instructions+=2;goto B48097b;
case 0x48097c:c.instructions+=1;goto B48097c;
case 0x480981:goto L480981;
case 0x480983:c.instructions+=1;goto B480983;
case 0x480985:goto L480985;
case 0x480988:c.instructions+=5;goto B480988;
case 0x48098c:c.instructions+=4;goto B48098c;
case 0x48098d:c.instructions+=3;goto B48098d;
case 0x48098e:c.instructions+=2;goto B48098e;
case 0x48098f:c.instructions+=1;goto B48098f;
case 0x480992:goto L480992;
case 0x480995:c.instructions+=4;goto B480995;
case 0x480997:c.instructions+=3;goto B480997;
case 0x480999:c.instructions+=2;goto B480999;
case 0x48099b:c.instructions+=1;goto B48099b;
case 0x48099d:goto L48099d;
case 0x4809a0:goto L4809a0;
case 0x4809a3:c.instructions+=3;goto B4809a3;
case 0x4809a6:c.instructions+=2;goto B4809a6;
case 0x4809a8:c.instructions+=1;goto B4809a8;
case 0x4809ab:goto L4809ab;
case 0x4809ad:c.instructions+=1;goto B4809ad;
case 0x4809af:goto L4809af;
case 0x4809b2:c.instructions+=4;goto B4809b2;
case 0x4809b4:c.instructions+=3;goto B4809b4;
case 0x4809b5:c.instructions+=2;goto B4809b5;
case 0x4809b7:c.instructions+=1;goto B4809b7;
case 0x4809b9:goto L4809b9;
case 0x4809ba:c.instructions+=4;goto B4809ba;
case 0x4809bb:c.instructions+=3;goto B4809bb;
case 0x4809c0:c.instructions+=2;goto B4809c0;
case 0x4809c1:c.instructions+=1;goto B4809c1;
case 0x4809c4:goto L4809c4;
case 0x4809c7:c.instructions+=3;goto B4809c7;
case 0x4809ca:c.instructions+=2;goto B4809ca;
case 0x4809cc:c.instructions+=1;goto B4809cc;
case 0x4809cf:goto L4809cf;
case 0x4809d0:c.instructions+=3;goto B4809d0;
case 0x4809d1:c.instructions+=2;goto B4809d1;
case 0x4809d2:c.instructions+=1;goto B4809d2;
case 0x4809e0:goto L4809e0;
case 0x4809e1:c.instructions+=8;goto B4809e1;
case 0x4809e2:c.instructions+=7;goto B4809e2;
case 0x4809e6:c.instructions+=6;goto B4809e6;
case 0x4809e9:c.instructions+=5;goto B4809e9;
case 0x4809eb:c.instructions+=4;goto B4809eb;
case 0x4809f0:c.instructions+=3;goto B4809f0;
case 0x4809f5:c.instructions+=2;goto B4809f5;
case 0x4809f9:c.instructions+=1;goto B4809f9;
case 0x4809ff:goto L4809ff;
case 0x480a01:goto L480a01;
case 0x480a06:c.instructions+=1;goto B480a06;
case 0x480a08:goto L480a08;
case 0x480a0a:c.instructions+=1;goto B480a0a;
case 0x480a10:goto L480a10;
case 0x480a13:c.instructions+=5;goto B480a13;
case 0x480a19:c.instructions+=4;goto B480a19;
case 0x480a1c:c.instructions+=3;goto B480a1c;
case 0x480a1e:c.instructions+=2;goto B480a1e;
case 0x480a20:c.instructions+=1;goto B480a20;
case 0x480a23:goto L480a23;
case 0x480a24:c.instructions+=2;goto B480a24;
case 0x480a26:c.instructions+=1;goto B480a26;
case 0x480a29:goto L480a29;
case 0x480a2a:c.instructions+=2;goto B480a2a;
case 0x480a2b:c.instructions+=1;goto B480a2b;
case 0x480a2e:goto L480a2e;
case 0x480a34:c.instructions+=2;goto B480a34;
case 0x480a35:c.instructions+=1;goto B480a35;
case 0x480a3a:goto L480a3a;
case 0x480a3c:c.instructions+=1;goto B480a3c;
case 0x480a42:goto L480a42;
case 0x480a44:c.instructions+=3;goto B480a44;
case 0x480a46:c.instructions+=2;goto B480a46;
case 0x480a48:c.instructions+=1;goto B480a48;
case 0x480a4b:goto L480a4b;
case 0x480a4c:c.instructions+=2;goto B480a4c;
case 0x480a4e:c.instructions+=1;goto B480a4e;
case 0x480a51:goto L480a51;
case 0x480a52:c.instructions+=2;goto B480a52;
case 0x480a53:c.instructions+=1;goto B480a53;
case 0x480a56:goto L480a56;
case 0x480a5c:c.instructions+=8;goto B480a5c;
case 0x480a5f:c.instructions+=7;goto B480a5f;
case 0x480a64:c.instructions+=6;goto B480a64;
case 0x480a67:c.instructions+=5;goto B480a67;
case 0x480a6a:c.instructions+=4;goto B480a6a;
case 0x480a6d:c.instructions+=3;goto B480a6d;
case 0x480a6f:c.instructions+=2;goto B480a6f;
case 0x480a71:c.instructions+=1;goto B480a71;
case 0x480a73:goto L480a73;
case 0x480a76:c.instructions+=6;goto B480a76;
case 0x480a7c:c.instructions+=5;goto B480a7c;
case 0x480a7f:c.instructions+=4;goto B480a7f;
case 0x480a82:c.instructions+=3;goto B480a82;
case 0x480a83:c.instructions+=2;goto B480a83;
case 0x480a85:c.instructions+=1;goto B480a85;
case 0x480a88:goto L480a88;
case 0x480a89:c.instructions+=2;goto B480a89;
case 0x480a8a:c.instructions+=1;goto B480a8a;
case 0x480a8d:goto L480a8d;
case 0x480a90:c.instructions+=6;goto B480a90;
case 0x480a96:c.instructions+=5;goto B480a96;
case 0x480a99:c.instructions+=4;goto B480a99;
case 0x480a9c:c.instructions+=3;goto B480a9c;
case 0x480a9d:c.instructions+=2;goto B480a9d;
case 0x480a9f:c.instructions+=1;goto B480a9f;
case 0x480aa2:goto L480aa2;
case 0x480aa3:c.instructions+=2;goto B480aa3;
case 0x480aa4:c.instructions+=1;goto B480aa4;
case 0x480aa7:goto L480aa7;
case 0x480aac:c.instructions+=1;goto B480aac;
case 0x480aae:goto L480aae;
case 0x480ab3:c.instructions+=1;goto B480ab3;
case 0x480ab5:goto L480ab5;
case 0x480ab8:c.instructions+=7;goto B480ab8;
case 0x480aba:c.instructions+=6;goto B480aba;
case 0x480ac0:c.instructions+=5;goto B480ac0;
case 0x480ac3:c.instructions+=4;goto B480ac3;
case 0x480ac5:c.instructions+=3;goto B480ac5;
case 0x480acb:c.instructions+=2;goto B480acb;
case 0x480acc:c.instructions+=1;goto B480acc;
case 0x480ad1:goto L480ad1;
case 0x480ad3:goto L480ad3;
case 0x480ad6:c.instructions+=7;goto B480ad6;
case 0x480ad9:c.instructions+=6;goto B480ad9;
case 0x480adb:c.instructions+=5;goto B480adb;
case 0x480ae1:c.instructions+=4;goto B480ae1;
case 0x480ae3:c.instructions+=3;goto B480ae3;
case 0x480ae4:c.instructions+=2;goto B480ae4;
case 0x480aea:c.instructions+=1;goto B480aea;
case 0x480aef:goto L480aef;
case 0x480af1:c.instructions+=1;goto B480af1;
case 0x480af3:goto L480af3;
case 0x480af5:c.instructions+=5;goto B480af5;
case 0x480af8:c.instructions+=4;goto B480af8;
case 0x480afc:c.instructions+=3;goto B480afc;
case 0x480afe:c.instructions+=2;goto B480afe;
case 0x480aff:c.instructions+=1;goto B480aff;
case 0x480b02:goto L480b02;
case 0x480b03:c.instructions+=2;goto B480b03;
case 0x480b04:c.instructions+=1;goto B480b04;
case 0x480b10:goto L480b10;
case 0x480b11:c.instructions+=4;goto B480b11;
case 0x480b13:c.instructions+=3;goto B480b13;
case 0x480b16:c.instructions+=2;goto B480b16;
case 0x480b18:c.instructions+=1;goto B480b18;
case 0x480b1a:goto L480b1a;
case 0x480b1c:c.instructions+=1;goto B480b1c;
case 0x480b21:goto L480b21;
case 0x480b24:c.instructions+=2;goto B480b24;
case 0x480b26:c.instructions+=1;goto B480b26;
case 0x480b28:goto L480b28;
case 0x480b2d:goto L480b2d;
case 0x480b30:c.instructions+=2;goto B480b30;
case 0x480b32:c.instructions+=1;goto B480b32;
case 0x480b34:goto L480b34;
case 0x480b36:c.instructions+=2;goto B480b36;
case 0x480b38:c.instructions+=1;goto B480b38;
case 0x480b3a:goto L480b3a;
case 0x480b3c:goto L480b3c;
case 0x480b3e:goto L480b3e;
case 0x480b3f:c.instructions+=1;goto B480b3f;
case 0x480b44:goto L480b44;
case 0x480b47:c.instructions+=1;goto B480b47;
case 0x480b4e:goto L480b4e;
case 0x480b51:c.instructions+=2;goto B480b51;
case 0x480b53:c.instructions+=1;goto B480b53;
case 0x480b55:goto L480b55;
case 0x480b56:c.instructions+=1;goto B480b56;
case 0x480b5b:goto L480b5b;
case 0x480b5e:c.instructions+=1;goto B480b5e;
case 0x480b65:goto L480b65;
case 0x480b66:c.instructions+=1;goto B480b66;
case 0x480b70:goto L480b70;
case 0x480b71:c.instructions+=2;goto B480b71;
case 0x480b73:c.instructions+=1;goto B480b73;
case 0x480b78:goto L480b78;
case 0x480b7a:c.instructions+=6;goto B480b7a;
case 0x480b80:c.instructions+=5;goto B480b80;
case 0x480b86:c.instructions+=4;goto B480b86;
case 0x480b8c:c.instructions+=3;goto B480b8c;
case 0x480b8e:c.instructions+=2;goto B480b8e;
case 0x480b8f:c.instructions+=1;goto B480b8f;
case 0x480b90:goto L480b90;
case 0x480b91:c.instructions+=2;goto B480b91;
case 0x480b93:c.instructions+=1;goto B480b93;
case 0x480b98:goto L480b98;
case 0x480b9d:c.instructions+=1;goto B480b9d;
case 0x480b9f:goto L480b9f;
case 0x480ba0:c.instructions+=1;goto B480ba0;
case 0x480ba5:goto L480ba5;
case 0x480ba8:goto L480ba8;
case 0x480baa:c.instructions+=2;goto B480baa;
case 0x480bab:c.instructions+=1;goto B480bab;
case 0x480bb0:goto L480bb0;
case 0x480bb6:c.instructions+=1;goto B480bb6;
case 0x480bc0:goto L480bc0;
case 0x480bc1:c.instructions+=2;goto B480bc1;
case 0x480bc3:c.instructions+=1;goto B480bc3;
case 0x480bc8:goto L480bc8;
case 0x480bce:c.instructions+=3;goto B480bce;
case 0x480bd0:c.instructions+=2;goto B480bd0;
case 0x480bd1:c.instructions+=1;goto B480bd1;
case 0x480be0:goto L480be0;
case 0x480be1:c.instructions+=2;goto B480be1;
case 0x480be3:c.instructions+=1;goto B480be3;
case 0x480be8:goto L480be8;
case 0x480bed:c.instructions+=1;goto B480bed;
case 0x480bef:goto L480bef;
case 0x480bf0:c.instructions+=1;goto B480bf0;
case 0x480bf5:goto L480bf5;
case 0x480bf8:goto L480bf8;
case 0x480bfa:c.instructions+=2;goto B480bfa;
case 0x480bfb:c.instructions+=1;goto B480bfb;
case 0x480c00:goto L480c00;
case 0x480c06:c.instructions+=1;goto B480c06;
case 0x480c10:goto L480c10;
case 0x480c16:c.instructions+=2;goto B480c16;
case 0x480c18:c.instructions+=1;goto B480c18;
case 0x480c1a:goto L480c1a;
case 0x480c1f:goto L480c1f;
case 0x480c30:goto L480c30;
case 0x480c36:c.instructions+=2;goto B480c36;
case 0x480c38:c.instructions+=1;goto B480c38;
case 0x480c3a:goto L480c3a;
case 0x480c3e:c.instructions+=3;goto B480c3e;
case 0x480c3f:c.instructions+=2;goto B480c3f;
case 0x480c41:c.instructions+=1;goto B480c41;
case 0x480c46:goto L480c46;
case 0x480c50:goto L480c50;
case 0x480c51:c.instructions+=3;goto B480c51;
case 0x480c57:c.instructions+=2;goto B480c57;
case 0x480c59:c.instructions+=1;goto B480c59;
case 0x480c5b:goto L480c5b;
case 0x480c61:c.instructions+=2;goto B480c61;
case 0x480c64:c.instructions+=1;goto B480c64;
case 0x480c66:goto L480c66;
case 0x480c6c:c.instructions+=4;goto B480c6c;
case 0x480c76:c.instructions+=3;goto B480c76;
case 0x480c7b:c.instructions+=2;goto B480c7b;
case 0x480c7d:c.instructions+=1;goto B480c7d;
case 0x480c7f:goto L480c7f;
case 0x480c85:c.instructions+=2;goto B480c85;
case 0x480c87:c.instructions+=1;goto B480c87;
case 0x480c89:goto L480c89;
case 0x480c8f:c.instructions+=3;goto B480c8f;
case 0x480c91:c.instructions+=2;goto B480c91;
case 0x480c92:c.instructions+=1;goto B480c92;
case 0x480c97:goto L480c97;
case 0x480c9a:c.instructions+=1;goto B480c9a;
case 0x480ca1:goto L480ca1;
case 0x480ca2:c.instructions+=1;goto B480ca2;
case 0x480cb0:goto L480cb0;
case 0x480cb1:c.instructions+=3;goto B480cb1;
case 0x480cb7:c.instructions+=2;goto B480cb7;
case 0x480cb9:c.instructions+=1;goto B480cb9;
case 0x480cbb:goto L480cbb;
case 0x480cc1:c.instructions+=2;goto B480cc1;
case 0x480cc4:c.instructions+=1;goto B480cc4;
case 0x480cc6:goto L480cc6;
case 0x480ccc:c.instructions+=2;goto B480ccc;
case 0x480cd6:c.instructions+=1;goto B480cd6;
case 0x480cdb:goto L480cdb;
case 0x480cdd:c.instructions+=1;goto B480cdd;
case 0x480cdf:goto L480cdf;
case 0x480ce4:c.instructions+=2;goto B480ce4;
case 0x480ce6:c.instructions+=1;goto B480ce6;
case 0x480ce8:goto L480ce8;
case 0x480cee:c.instructions+=2;goto B480cee;
case 0x480cf0:c.instructions+=1;goto B480cf0;
case 0x480cf2:goto L480cf2;
case 0x480cf4:c.instructions+=3;goto B480cf4;
case 0x480cf6:c.instructions+=2;goto B480cf6;
case 0x480cf9:c.instructions+=1;goto B480cf9;
case 0x480cfe:goto L480cfe;
case 0x480d03:c.instructions+=4;goto B480d03;
case 0x480d09:c.instructions+=3;goto B480d09;
case 0x480d0b:c.instructions+=2;goto B480d0b;
case 0x480d0c:c.instructions+=1;goto B480d0c;
case 0x480d11:goto L480d11;
case 0x480d14:c.instructions+=1;goto B480d14;
case 0x480d1b:goto L480d1b;
case 0x480d1c:c.instructions+=1;goto B480d1c;
case 0x480d20:goto L480d20;
case 0x480d25:c.instructions+=6;goto B480d25;
case 0x480d26:c.instructions+=5;goto B480d26;
case 0x480d28:c.instructions+=4;goto B480d28;
case 0x480d2a:c.instructions+=3;goto B480d2a;
case 0x480d2b:c.instructions+=2;goto B480d2b;
case 0x480d2d:c.instructions+=1;goto B480d2d;
case 0x480d33:goto L480d33;
case 0x480d39:c.instructions+=2;goto B480d39;
case 0x480d3b:c.instructions+=1;goto B480d3b;
case 0x480d3d:goto L480d3d;
case 0x480d42:goto L480d42;
case 0x480d48:c.instructions+=2;goto B480d48;
case 0x480d4a:c.instructions+=1;goto B480d4a;
case 0x480d4c:goto L480d4c;
case 0x480d52:c.instructions+=2;goto B480d52;
case 0x480d55:c.instructions+=1;goto B480d55;
case 0x480d57:goto L480d57;
case 0x480d5d:c.instructions+=3;goto B480d5d;
case 0x480d67:c.instructions+=2;goto B480d67;
case 0x480d6d:c.instructions+=1;goto B480d6d;
case 0x480d6f:goto L480d6f;
case 0x480d76:c.instructions+=4;goto B480d76;
case 0x480d7b:c.instructions+=3;goto B480d7b;
case 0x480d81:c.instructions+=2;goto B480d81;
case 0x480d82:c.instructions+=1;goto B480d82;
case 0x480d87:goto L480d87;
case 0x480d8a:goto L480d8a;
case 0x480d8b:c.instructions+=3;goto B480d8b;
case 0x480d8c:c.instructions+=2;goto B480d8c;
case 0x480d92:c.instructions+=1;goto B480d92;
case 0x480d97:goto L480d97;
case 0x480d99:c.instructions+=2;goto B480d99;
case 0x480d9b:c.instructions+=1;goto B480d9b;
case 0x480d9d:goto L480d9d;
case 0x480d9f:c.instructions+=1;goto B480d9f;
case 0x480da2:goto L480da2;
case 0x480da5:c.instructions+=2;goto B480da5;
case 0x480da6:c.instructions+=1;goto B480da6;
case 0x480da8:goto L480da8;
case 0x480dae:c.instructions+=2;goto B480dae;
case 0x480db0:c.instructions+=1;goto B480db0;
case 0x480db2:goto L480db2;
case 0x480db7:goto L480db7;
case 0x480dba:c.instructions+=2;goto B480dba;
case 0x480dbc:c.instructions+=1;goto B480dbc;
case 0x480dbe:goto L480dbe;
case 0x480dc0:c.instructions+=2;goto B480dc0;
case 0x480dc2:c.instructions+=1;goto B480dc2;
case 0x480dc4:goto L480dc4;
case 0x480dc7:goto L480dc7;
case 0x480dca:c.instructions+=2;goto B480dca;
case 0x480dcc:c.instructions+=1;goto B480dcc;
case 0x480dce:goto L480dce;
case 0x480dd0:c.instructions+=2;goto B480dd0;
case 0x480dd2:c.instructions+=1;goto B480dd2;
case 0x480dd4:goto L480dd4;
case 0x480dd7:goto L480dd7;
case 0x480dda:c.instructions+=3;goto B480dda;
case 0x480ddc:c.instructions+=2;goto B480ddc;
case 0x480dde:c.instructions+=1;goto B480dde;
case 0x480de0:goto L480de0;
case 0x480de5:c.instructions+=2;goto B480de5;
case 0x480dea:c.instructions+=1;goto B480dea;
case 0x480df0:goto L480df0;
case 0x480df4:c.instructions+=1;goto B480df4;
case 0x480df6:goto L480df6;
case 0x480df9:c.instructions+=4;goto B480df9;
case 0x480dfe:c.instructions+=3;goto B480dfe;
case 0x480e01:c.instructions+=2;goto B480e01;
case 0x480e02:c.instructions+=1;goto B480e02;
case 0x480e07:goto L480e07;
case 0x480e09:c.instructions+=3;goto B480e09;
case 0x480e0c:c.instructions+=2;goto B480e0c;
case 0x480e0e:c.instructions+=1;goto B480e0e;
case 0x480e10:goto L480e10;
case 0x480e13:c.instructions+=2;goto B480e13;
case 0x480e14:c.instructions+=1;goto B480e14;
case 0x480e19:goto L480e19;
case 0x480e1c:c.instructions+=1;goto B480e1c;
case 0x480e22:goto L480e22;
case 0x480e25:c.instructions+=2;goto B480e25;
case 0x480e27:c.instructions+=1;goto B480e27;
case 0x480e29:goto L480e29;
case 0x480e2c:c.instructions+=2;goto B480e2c;
case 0x480e2d:c.instructions+=1;goto B480e2d;
case 0x480e32:goto L480e32;
case 0x480e35:c.instructions+=1;goto B480e35;
case 0x480e3c:goto L480e3c;
case 0x480e3f:c.instructions+=4;goto B480e3f;
case 0x480e40:c.instructions+=3;goto B480e40;
case 0x480e43:c.instructions+=2;goto B480e43;
case 0x480e45:c.instructions+=1;goto B480e45;
case 0x480e47:goto L480e47;
case 0x480e48:c.instructions+=4;goto B480e48;
case 0x480e49:c.instructions+=3;goto B480e49;
case 0x480e4a:c.instructions+=2;goto B480e4a;
case 0x480e4b:c.instructions+=1;goto B480e4b;
case 0x480e50:goto L480e50;
case 0x480e51:c.instructions+=2;goto B480e51;
case 0x480e52:c.instructions+=1;goto B480e52;
case 0x480e60:goto L480e60;
case 0x480e61:c.instructions+=6;goto B480e61;
case 0x480e63:c.instructions+=5;goto B480e63;
case 0x480e6a:c.instructions+=4;goto B480e6a;
case 0x480e6d:c.instructions+=3;goto B480e6d;
case 0x480e6f:c.instructions+=2;goto B480e6f;
case 0x480e70:c.instructions+=1;goto B480e70;
case 0x480e72:goto L480e72;
case 0x480e74:c.instructions+=1;goto B480e74;
case 0x480e77:goto L480e77;
case 0x480e7d:c.instructions+=2;goto B480e7d;
case 0x480e7f:c.instructions+=1;goto B480e7f;
case 0x480e81:goto L480e81;
case 0x480e86:goto L480e86;
case 0x480e8c:c.instructions+=1;goto B480e8c;
case 0x480e91:goto L480e91;
case 0x480e93:c.instructions+=2;goto B480e93;
case 0x480e95:c.instructions+=1;goto B480e95;
case 0x480e97:goto L480e97;
case 0x480e99:c.instructions+=1;goto B480e99;
case 0x480e9c:goto L480e9c;
case 0x480e9f:c.instructions+=2;goto B480e9f;
case 0x480ea0:c.instructions+=1;goto B480ea0;
case 0x480ea2:goto L480ea2;
case 0x480ea3:c.instructions+=2;goto B480ea3;
case 0x480ea4:c.instructions+=1;goto B480ea4;
case 0x480eb0:goto L480eb0;
case 0x480eb5:c.instructions+=6;goto B480eb5;
case 0x480eb6:c.instructions+=5;goto B480eb6;
case 0x480eb8:c.instructions+=4;goto B480eb8;
case 0x480eba:c.instructions+=3;goto B480eba;
case 0x480ebb:c.instructions+=2;goto B480ebb;
case 0x480ebd:c.instructions+=1;goto B480ebd;
case 0x480ec3:goto L480ec3;
case 0x480ec9:c.instructions+=3;goto B480ec9;
case 0x480ecb:c.instructions+=2;goto B480ecb;
case 0x480ed1:c.instructions+=1;goto B480ed1;
case 0x480ed3:goto L480ed3;
case 0x480ed8:goto L480ed8;
case 0x480ed9:c.instructions+=4;goto B480ed9;
case 0x480edf:c.instructions+=3;goto B480edf;
case 0x480ee1:c.instructions+=2;goto B480ee1;
case 0x480ee2:c.instructions+=1;goto B480ee2;
case 0x480ee4:goto L480ee4;
case 0x480eea:c.instructions+=2;goto B480eea;
case 0x480eed:c.instructions+=1;goto B480eed;
case 0x480eef:goto L480eef;
case 0x480ef5:c.instructions+=4;goto B480ef5;
case 0x480eff:c.instructions+=3;goto B480eff;
case 0x480f04:c.instructions+=2;goto B480f04;
case 0x480f06:c.instructions+=1;goto B480f06;
case 0x480f08:goto L480f08;
case 0x480f0f:c.instructions+=1;goto B480f0f;
case 0x480f11:goto L480f11;
case 0x480f17:c.instructions+=3;goto B480f17;
case 0x480f18:c.instructions+=2;goto B480f18;
case 0x480f19:c.instructions+=1;goto B480f19;
case 0x480f1e:goto L480f1e;
case 0x480f24:c.instructions+=2;goto B480f24;
case 0x480f29:c.instructions+=1;goto B480f29;
case 0x480f2c:goto L480f2c;
case 0x480f32:c.instructions+=2;goto B480f32;
case 0x480f33:c.instructions+=1;goto B480f33;
case 0x480f38:goto L480f38;
case 0x480f3b:goto L480f3b;
case 0x480f40:goto L480f40;
case 0x480f46:c.instructions+=2;goto B480f46;
case 0x480f48:c.instructions+=1;goto B480f48;
case 0x480f4a:goto L480f4a;
case 0x480f4f:goto L480f4f;
case 0x480f52:c.instructions+=2;goto B480f52;
case 0x480f54:c.instructions+=1;goto B480f54;
case 0x480f57:goto L480f57;
case 0x480f5d:c.instructions+=2;goto B480f5d;
case 0x480f5f:c.instructions+=1;goto B480f5f;
case 0x480f61:goto L480f61;
case 0x480f63:c.instructions+=1;goto B480f63;
case 0x480f66:goto L480f66;
case 0x480f69:c.instructions+=3;goto B480f69;
case 0x480f6b:c.instructions+=2;goto B480f6b;
case 0x480f6d:c.instructions+=1;goto B480f6d;
case 0x480f6f:goto L480f6f;
case 0x480f74:goto L480f74;
case 0x480f77:c.instructions+=2;goto B480f77;
case 0x480f7a:c.instructions+=1;goto B480f7a;
case 0x480f7c:goto L480f7c;
case 0x480f7e:c.instructions+=4;goto B480f7e;
case 0x480f81:c.instructions+=3;goto B480f81;
case 0x480f82:c.instructions+=2;goto B480f82;
case 0x480f88:c.instructions+=1;goto B480f88;
case 0x480f8d:goto L480f8d;
case 0x480f8f:c.instructions+=3;goto B480f8f;
case 0x480f92:c.instructions+=2;goto B480f92;
case 0x480f94:c.instructions+=1;goto B480f94;
case 0x480f96:goto L480f96;
case 0x480f99:c.instructions+=2;goto B480f99;
case 0x480f9a:c.instructions+=1;goto B480f9a;
case 0x480f9f:goto L480f9f;
case 0x480fa2:c.instructions+=1;goto B480fa2;
case 0x480fa4:goto L480fa4;
case 0x480fa7:c.instructions+=2;goto B480fa7;
case 0x480fa9:c.instructions+=1;goto B480fa9;
case 0x480fab:goto L480fab;
case 0x480fae:c.instructions+=2;goto B480fae;
case 0x480faf:c.instructions+=1;goto B480faf;
case 0x480fb4:goto L480fb4;
case 0x480fb7:c.instructions+=1;goto B480fb7;
case 0x480fba:goto L480fba;
case 0x480fbd:c.instructions+=4;goto B480fbd;
case 0x480fbe:c.instructions+=3;goto B480fbe;
case 0x480fc1:c.instructions+=2;goto B480fc1;
case 0x480fc3:c.instructions+=1;goto B480fc3;
case 0x480fc5:goto L480fc5;
case 0x480fc7:c.instructions+=2;goto B480fc7;
case 0x480fcc:c.instructions+=1;goto B480fcc;
case 0x480fd1:goto L480fd1;
case 0x480fd3:goto L480fd3;
case 0x480fdd:c.instructions+=5;goto B480fdd;
case 0x480fe3:c.instructions+=4;goto B480fe3;
case 0x480fe5:c.instructions+=3;goto B480fe5;
case 0x480fe6:c.instructions+=2;goto B480fe6;
case 0x480fe7:c.instructions+=1;goto B480fe7;
case 0x480fe9:goto L480fe9;
case 0x480fea:c.instructions+=1;goto B480fea;
case 0x480fef:goto L480fef;
case 0x480ff2:c.instructions+=1;goto B480ff2;
case 0x480ff8:goto L480ff8;
case 0x480ffe:c.instructions+=1;goto B480ffe;
default:missing_instruction(c.pc);}
B480002:L480002:{c.instructions+=3;NFSU2_TR(0x480002);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B480004:{NFSU2_TR(0x480004);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480007:{NFSU2_TR(0x480007);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48000b;}}
}
B480009:L480009:{c.instructions+=1;NFSU2_TR(0x480009);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48000b:L48000b:{c.instructions+=14;NFSU2_TR(0x48000b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48000e:{NFSU2_TR(0x48000e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480012:{NFSU2_TR(0x480012);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B480014:{NFSU2_TR(0x480014);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B480016:{NFSU2_TR(0x480016);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480019:{NFSU2_TR(0x480019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48001c:{NFSU2_TR(0x48001c);
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
B48001e:{NFSU2_TR(0x48001e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480021:{NFSU2_TR(0x480021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B480028:{NFSU2_TR(0x480028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480029:{NFSU2_TR(0x480029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48002a:{NFSU2_TR(0x48002a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48002b:{NFSU2_TR(0x48002b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48002c:{NFSU2_TR(0x48002c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480030:L480030:{c.instructions+=3;NFSU2_TR(0x480030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480031:{NFSU2_TR(0x480031);
__builtin_memmove((R+24),(R+4),4);
}
B480033:{NFSU2_TR(0x480033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480038ull));
TAIL_STATIC(0x477870u,477);
}
B480038:L480038:{c.instructions+=2;NFSU2_TR(0x480038);
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
B48003d:{NFSU2_TR(0x48003d);
if(r1(R+518)){{goto L480048;}}
}
B48003f:L48003f:{c.instructions+=2;NFSU2_TR(0x48003f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480040:{NFSU2_TR(0x480040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480045ull));
TAIL_STATIC(0x440540u,440);
}
B480045:L480045:{c.instructions+=1;NFSU2_TR(0x480045);
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
B480048:L480048:{c.instructions+=3;NFSU2_TR(0x480048);
__builtin_memmove((R+0),(R+24),4);
}
B48004a:{NFSU2_TR(0x48004a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48004b:{NFSU2_TR(0x48004b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480050:L480050:{c.instructions+=13;NFSU2_TR(0x480050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480054:{NFSU2_TR(0x480054);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480055:{NFSU2_TR(0x480055);
__builtin_memmove((R+24),(R+4),4);
}
B480057:{NFSU2_TR(0x480057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48005a:{NFSU2_TR(0x48005a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48005e:{NFSU2_TR(0x48005e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480061:{NFSU2_TR(0x480061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B480063:{NFSU2_TR(0x480063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480066:{NFSU2_TR(0x480066);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B480068:{NFSU2_TR(0x480068);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B48006c:{NFSU2_TR(0x48006c);
__builtin_memmove((R+4),(R+24),4);
}
B48006e:{NFSU2_TR(0x48006e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48006f:{NFSU2_TR(0x48006f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480074ull));
TAIL_STATIC(0x477b60u,477);
}
B480074:L480074:{c.instructions+=18;NFSU2_TR(0x480074);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B480077:{NFSU2_TR(0x480077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48007a:{NFSU2_TR(0x48007a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48007d:{NFSU2_TR(0x48007d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480080:{NFSU2_TR(0x480080);
__builtin_memmove((R+8),(R+0),4);
}
B480082:{NFSU2_TR(0x480082);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B480085:{NFSU2_TR(0x480085);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fff0000ull))));
}
B48008a:{NFSU2_TR(0x48008a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xe000ull))));
}
B480090:{NFSU2_TR(0x480090);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B480092:{NFSU2_TR(0x480092);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480096:{NFSU2_TR(0x480096);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B480099:{NFSU2_TR(0x480099);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B48009b:{NFSU2_TR(0x48009b);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))|u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48009f:{NFSU2_TR(0x48009f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4800a2:{NFSU2_TR(0x4800a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4800a5:{NFSU2_TR(0x4800a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4800ac:{NFSU2_TR(0x4800ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4800ad:{NFSU2_TR(0x4800ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4800b0:L4800b0:{c.instructions+=7;NFSU2_TR(0x4800b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4800b1:{NFSU2_TR(0x4800b1);
__builtin_memmove((R+12),(R+4),4);
}
B4800b3:{NFSU2_TR(0x4800b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4800b6:{NFSU2_TR(0x4800b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4800b7:{NFSU2_TR(0x4800b7);
w4(R+20,u32(0x1ull));
}
B4800bc:{NFSU2_TR(0x4800bc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4800be:{NFSU2_TR(0x4800be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480152;}}
}
B4800c4:L4800c4:{c.instructions+=2;NFSU2_TR(0x4800c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4800c5:{NFSU2_TR(0x4800c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4800c6:L4800c6:{c.instructions+=4;NFSU2_TR(0x4800c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4800c9:{NFSU2_TR(0x4800c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4800cc:{NFSU2_TR(0x4800cc);
__builtin_memmove((R+4),(R+24),4);
}
B4800ce:{NFSU2_TR(0x4800ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4800d3ull));
TAIL_STATIC(0x467c90u,467);
}
B4800d3:L4800d3:{c.instructions+=2;NFSU2_TR(0x4800d3);
__builtin_memmove((R+4),(R+24),4);
}
B4800d5:{NFSU2_TR(0x4800d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4800daull));
TAIL_STATIC(0x467c40u,467);
}
B4800da:L4800da:{c.instructions+=4;NFSU2_TR(0x4800da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4800dd:{NFSU2_TR(0x4800dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4800df:{NFSU2_TR(0x4800df);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4800e1:{NFSU2_TR(0x4800e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480100;}}
}
B4800e3:L4800e3:{c.instructions+=6;NFSU2_TR(0x4800e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4800e6:{NFSU2_TR(0x4800e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4800e9:{NFSU2_TR(0x4800e9);
__builtin_memmove((R+0),gp(0x82af4c),4);
}
B4800ee:{NFSU2_TR(0x4800ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4800ef:{NFSU2_TR(0x4800ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4800f0:{NFSU2_TR(0x4800f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4800f5ull));
TAIL_STATIC(0x43f920u,43f);
}
B4800f5:L4800f5:{c.instructions+=5;NFSU2_TR(0x4800f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4800f8:{NFSU2_TR(0x4800f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4800fb:{NFSU2_TR(0x4800fb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4800fc:{NFSU2_TR(0x4800fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4800fe:{NFSU2_TR(0x4800fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4800e3u);}goto L4800e3;}}
}
B480100:L480100:{c.instructions+=2;NFSU2_TR(0x480100);
__builtin_memmove((R+4),(R+24),4);
}
B480102:{NFSU2_TR(0x480102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480107ull));
TAIL_STATIC(0x467d20u,467);
}
B480107:L480107:{c.instructions+=2;NFSU2_TR(0x480107);
__builtin_memmove((R+4),(R+24),4);
}
B480109:{NFSU2_TR(0x480109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48010eull));
TAIL_STATIC(0x467d70u,467);
}
B48010e:L48010e:{c.instructions+=11;NFSU2_TR(0x48010e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480111:{NFSU2_TR(0x480111);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B480113:{NFSU2_TR(0x480113);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480115:{NFSU2_TR(0x480115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480118:{NFSU2_TR(0x480118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48011b:{NFSU2_TR(0x48011b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48011e:{NFSU2_TR(0x48011e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480121:{NFSU2_TR(0x480121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480124:{NFSU2_TR(0x480124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480127:{NFSU2_TR(0x480127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48012a:{NFSU2_TR(0x48012a);
if(r1(R+518)){{goto L48012f;}}
}
B48012c:L48012c:{c.instructions+=1;NFSU2_TR(0x48012c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48012f:L48012f:{c.instructions+=6;NFSU2_TR(0x48012f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480132:{NFSU2_TR(0x480132);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B480135:{NFSU2_TR(0x480135);
__builtin_memmove((R+0),gp(0x82af48),4);
}
B48013a:{NFSU2_TR(0x48013a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48013b:{NFSU2_TR(0x48013b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48013c:{NFSU2_TR(0x48013c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480141ull));
TAIL_STATIC(0x43f920u,43f);
}
B480141:L480141:{c.instructions+=5;NFSU2_TR(0x480141);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480144:{NFSU2_TR(0x480144);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B480147:{NFSU2_TR(0x480147);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B480148:{NFSU2_TR(0x480148);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48014a:{NFSU2_TR(0x48014a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4800c6u);}goto L4800c6;}}
}
B480150:L480150:{c.instructions+=2;NFSU2_TR(0x480150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480151:{NFSU2_TR(0x480151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480152:L480152:{c.instructions+=3;NFSU2_TR(0x480152);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480155:{NFSU2_TR(0x480155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480156:{NFSU2_TR(0x480156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48015bull));
TAIL_STATIC(0x440540u,440);
}
B48015b:L48015b:{c.instructions+=5;NFSU2_TR(0x48015b);
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
B48015e:{NFSU2_TR(0x48015e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48015f:{NFSU2_TR(0x48015f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B480166:{NFSU2_TR(0x480166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480167:{NFSU2_TR(0x480167);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480170:L480170:{c.instructions+=6;NFSU2_TR(0x480170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480171:{NFSU2_TR(0x480171);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B480175:{NFSU2_TR(0x480175);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480178:{NFSU2_TR(0x480178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480179:{NFSU2_TR(0x480179);
__builtin_memmove((R+28),(R+4),4);
}
B48017b:{NFSU2_TR(0x48017b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48024f;}}
}
B480181:L480181:{c.instructions+=6;NFSU2_TR(0x480181);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480184:{NFSU2_TR(0x480184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480187:{NFSU2_TR(0x480187);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480188:{NFSU2_TR(0x480188);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B48018a:{NFSU2_TR(0x48018a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48018c:{NFSU2_TR(0x48018c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480236;}}
}
B480192:L480192:{c.instructions+=1;NFSU2_TR(0x480192);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480193:L480193:{c.instructions+=4;NFSU2_TR(0x480193);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480196:{NFSU2_TR(0x480196);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B480199:{NFSU2_TR(0x480199);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48019b:{NFSU2_TR(0x48019b);
if(r1(R+518)){{goto L480226;}}
}
B4801a1:L4801a1:{c.instructions+=1;NFSU2_TR(0x4801a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4801a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4800b0u);}goto L4800b0;}
}
B4801a6:L4801a6:{c.instructions+=4;NFSU2_TR(0x4801a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4801a9:{NFSU2_TR(0x4801a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4801ac:{NFSU2_TR(0x4801ac);
__builtin_memmove((R+4),(R+24),4);
}
B4801ae:{NFSU2_TR(0x4801ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4801b3ull));
TAIL_STATIC(0x467c90u,467);
}
B4801b3:L4801b3:{c.instructions+=2;NFSU2_TR(0x4801b3);
__builtin_memmove((R+4),(R+24),4);
}
B4801b5:{NFSU2_TR(0x4801b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4801baull));
TAIL_STATIC(0x467c40u,467);
}
B4801ba:L4801ba:{c.instructions+=4;NFSU2_TR(0x4801ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4801bd:{NFSU2_TR(0x4801bd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4801bf:{NFSU2_TR(0x4801bf);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4801c1:{NFSU2_TR(0x4801c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4801e1;}}
}
B4801c3:L4801c3:{c.instructions+=6;NFSU2_TR(0x4801c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4801c6:{NFSU2_TR(0x4801c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4801c9:{NFSU2_TR(0x4801c9);
__builtin_memmove((R+8),gp(0x82af4c),4);
}
B4801cf:{NFSU2_TR(0x4801cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4801d0:{NFSU2_TR(0x4801d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4801d1:{NFSU2_TR(0x4801d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4801d6ull));
TAIL_STATIC(0x43f920u,43f);
}
B4801d6:L4801d6:{c.instructions+=5;NFSU2_TR(0x4801d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4801d9:{NFSU2_TR(0x4801d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4801dc:{NFSU2_TR(0x4801dc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4801dd:{NFSU2_TR(0x4801dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4801df:{NFSU2_TR(0x4801df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4801c3u);}goto L4801c3;}}
}
B4801e1:L4801e1:{c.instructions+=2;NFSU2_TR(0x4801e1);
__builtin_memmove((R+4),(R+24),4);
}
B4801e3:{NFSU2_TR(0x4801e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4801e8ull));
TAIL_STATIC(0x467d20u,467);
}
B4801e8:L4801e8:{c.instructions+=2;NFSU2_TR(0x4801e8);
__builtin_memmove((R+4),(R+24),4);
}
B4801ea:{NFSU2_TR(0x4801ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4801efull));
TAIL_STATIC(0x467d70u,467);
}
B4801ef:L4801ef:{c.instructions+=11;NFSU2_TR(0x4801ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4801f2:{NFSU2_TR(0x4801f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4801f4:{NFSU2_TR(0x4801f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4801f6:{NFSU2_TR(0x4801f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4801f9:{NFSU2_TR(0x4801f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4801fc:{NFSU2_TR(0x4801fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4801ff:{NFSU2_TR(0x4801ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480202:{NFSU2_TR(0x480202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480205:{NFSU2_TR(0x480205);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480208:{NFSU2_TR(0x480208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48020b:{NFSU2_TR(0x48020b);
if(r1(R+518)){{goto L480210;}}
}
B48020d:L48020d:{c.instructions+=1;NFSU2_TR(0x48020d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480210:L480210:{c.instructions+=6;NFSU2_TR(0x480210);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480213:{NFSU2_TR(0x480213);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B480216:{NFSU2_TR(0x480216);
__builtin_memmove((R+8),gp(0x82af48),4);
}
B48021c:{NFSU2_TR(0x48021c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48021d:{NFSU2_TR(0x48021d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48021e:{NFSU2_TR(0x48021e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480223ull));
TAIL_STATIC(0x43f920u,43f);
}
B480223:L480223:{c.instructions+=1;NFSU2_TR(0x480223);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B480226:L480226:{c.instructions+=5;NFSU2_TR(0x480226);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480229:{NFSU2_TR(0x480229);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48022c:{NFSU2_TR(0x48022c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B48022d:{NFSU2_TR(0x48022d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48022f:{NFSU2_TR(0x48022f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480193u);}goto L480193;}}
}
B480235:L480235:{c.instructions+=1;NFSU2_TR(0x480235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480236:L480236:{c.instructions+=3;NFSU2_TR(0x480236);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480239:{NFSU2_TR(0x480239);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48023a:{NFSU2_TR(0x48023a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48023full));
TAIL_STATIC(0x440540u,440);
}
B48023f:L48023f:{c.instructions+=6;NFSU2_TR(0x48023f);
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
B480242:{NFSU2_TR(0x480242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B480243:{NFSU2_TR(0x480243);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48024a:{NFSU2_TR(0x48024a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48024b:{NFSU2_TR(0x48024b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48024c:{NFSU2_TR(0x48024c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48024f:L48024f:{c.instructions+=4;NFSU2_TR(0x48024f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480252:{NFSU2_TR(0x480252);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B480255:{NFSU2_TR(0x480255);
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
B480257:{NFSU2_TR(0x480257);
if(r1(R+518)){{goto L480268;}}
}
B480259:L480259:{c.instructions+=1;NFSU2_TR(0x480259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48025eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4800b0u);}goto L4800b0;}
}
B48025e:L48025e:{c.instructions+=2;NFSU2_TR(0x48025e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480261:{NFSU2_TR(0x480261);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B480268:L480268:{c.instructions+=3;NFSU2_TR(0x480268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480269:{NFSU2_TR(0x480269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48026a:{NFSU2_TR(0x48026a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480270:L480270:{c.instructions+=10;NFSU2_TR(0x480270);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480271:{NFSU2_TR(0x480271);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480272:{NFSU2_TR(0x480272);
__builtin_memmove((R+24),(R+4),4);
}
B480274:{NFSU2_TR(0x480274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480277:{NFSU2_TR(0x480277);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48027a:{NFSU2_TR(0x48027a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48027b:{NFSU2_TR(0x48027b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48027d:{NFSU2_TR(0x48027d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B48027f:{NFSU2_TR(0x48027f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480282:{NFSU2_TR(0x480282);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L480316;}}
}
B480288:L480288:{c.instructions+=5;NFSU2_TR(0x480288);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B48028a:{NFSU2_TR(0x48028a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48028d:{NFSU2_TR(0x48028d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48028f:{NFSU2_TR(0x48028f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B480291:{NFSU2_TR(0x480291);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480316;}}
}
B480297:L480297:{c.instructions+=4;NFSU2_TR(0x480297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48029a:{NFSU2_TR(0x48029a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48029b:{NFSU2_TR(0x48029b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48029c:{NFSU2_TR(0x48029c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4802a1ull));
TAIL_STATIC(0x477d10u,477);
}
B4802a1:L4802a1:{c.instructions+=5;NFSU2_TR(0x4802a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4802a4:{NFSU2_TR(0x4802a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4802a7:{NFSU2_TR(0x4802a7);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4802a9:{NFSU2_TR(0x4802a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4802ac:{NFSU2_TR(0x4802ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480315;}}
}
B4802ae:L4802ae:{c.instructions+=2;NFSU2_TR(0x4802ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4802af:{NFSU2_TR(0x4802af);
}
B4802b0:L4802b0:{c.instructions+=5;NFSU2_TR(0x4802b0);
__builtin_memmove((R+0),gp(0x82af40),4);
}
B4802b5:{NFSU2_TR(0x4802b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B4802b7:{NFSU2_TR(0x4802b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4802b8:{NFSU2_TR(0x4802b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4802bc:{NFSU2_TR(0x4802bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4802c1ull));
TAIL_STATIC(0x440e50u,440);
}
B4802c1:L4802c1:{c.instructions+=3;NFSU2_TR(0x4802c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4802c4:{NFSU2_TR(0x4802c4);
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
B4802c6:{NFSU2_TR(0x4802c6);
if(r1(R+518)){{goto L4802d0;}}
}
B4802c8:L4802c8:{c.instructions+=2;NFSU2_TR(0x4802c8);
u8 U[4];
w4(U+0,u32(0x78a5b4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4802ce:{NFSU2_TR(0x4802ce);
{goto L4802d2;}
}
B4802d0:L4802d0:{c.instructions+=1;NFSU2_TR(0x4802d0);
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
B4802d2:L4802d2:{c.instructions+=9;NFSU2_TR(0x4802d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4802d5:{NFSU2_TR(0x4802d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4802d8:{NFSU2_TR(0x4802d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4802db:{NFSU2_TR(0x4802db);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4802de:{NFSU2_TR(0x4802de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4802e1:{NFSU2_TR(0x4802e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4802e3:{NFSU2_TR(0x4802e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4802e4:{NFSU2_TR(0x4802e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4802e5:{NFSU2_TR(0x4802e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4802e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4802e8:L4802e8:{c.instructions+=8;NFSU2_TR(0x4802e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4802eb:{NFSU2_TR(0x4802eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4802ee:{NFSU2_TR(0x4802ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4802f1:{NFSU2_TR(0x4802f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4802f2:{NFSU2_TR(0x4802f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4802f3:{NFSU2_TR(0x4802f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4802f4:{NFSU2_TR(0x4802f4);
__builtin_memmove((R+4),(R+24),4);
}
B4802f6:{NFSU2_TR(0x4802f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4802fbull));
TAIL_STATIC(0x479030u,479);
}
B4802fb:L4802fb:{c.instructions+=10;NFSU2_TR(0x4802fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4802fe:{NFSU2_TR(0x4802fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B480303:{NFSU2_TR(0x480303);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B480304:{NFSU2_TR(0x480304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480307:{NFSU2_TR(0x480307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48030a:{NFSU2_TR(0x48030a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B48030d:{NFSU2_TR(0x48030d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48030f:{NFSU2_TR(0x48030f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B480310:{NFSU2_TR(0x480310);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B480312:{NFSU2_TR(0x480312);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4802b0u);}goto L4802b0;}}
}
B480314:L480314:{c.instructions+=1;NFSU2_TR(0x480314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B480315:L480315:{c.instructions+=1;NFSU2_TR(0x480315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480316:L480316:{c.instructions+=4;NFSU2_TR(0x480316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480317:{NFSU2_TR(0x480317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480318:{NFSU2_TR(0x480318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B480319:{NFSU2_TR(0x480319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480320:L480320:{c.instructions+=9;NFSU2_TR(0x480320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480321:{NFSU2_TR(0x480321);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480322:{NFSU2_TR(0x480322);
__builtin_memmove((R+24),(R+4),4);
}
B480324:{NFSU2_TR(0x480324);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480327:{NFSU2_TR(0x480327);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48032a:{NFSU2_TR(0x48032a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48032b:{NFSU2_TR(0x48032b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48032d:{NFSU2_TR(0x48032d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B48032f:{NFSU2_TR(0x48032f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L480338;}}
}
B480331:L480331:{c.instructions+=5;NFSU2_TR(0x480331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480334:{NFSU2_TR(0x480334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480335:{NFSU2_TR(0x480335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480336:{NFSU2_TR(0x480336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B480337:{NFSU2_TR(0x480337);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480338:L480338:{c.instructions+=18;NFSU2_TR(0x480338);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B48033a:{NFSU2_TR(0x48033a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48033d:{NFSU2_TR(0x48033d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480340:{NFSU2_TR(0x480340);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480343:{NFSU2_TR(0x480343);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480349:{NFSU2_TR(0x480349);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48034a:{NFSU2_TR(0x48034a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B480350:{NFSU2_TR(0x480350);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B480353:{NFSU2_TR(0x480353);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B480355:{NFSU2_TR(0x480355);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48035b:{NFSU2_TR(0x48035b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B48035e:{NFSU2_TR(0x48035e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480361:{NFSU2_TR(0x480361);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480364:{NFSU2_TR(0x480364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480367:{NFSU2_TR(0x480367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B480369:{NFSU2_TR(0x480369);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B48036b:{NFSU2_TR(0x48036b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48036c:{NFSU2_TR(0x48036c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480410;}}
}
B480372:L480372:{c.instructions+=13;NFSU2_TR(0x480372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480375:{NFSU2_TR(0x480375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48037b:{NFSU2_TR(0x48037b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480381:{NFSU2_TR(0x480381);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B480383:{NFSU2_TR(0x480383);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B480386:{NFSU2_TR(0x480386);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48038c:{NFSU2_TR(0x48038c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48038f:{NFSU2_TR(0x48038f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480392:{NFSU2_TR(0x480392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B480394:{NFSU2_TR(0x480394);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B480396:{NFSU2_TR(0x480396);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B480398:{NFSU2_TR(0x480398);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48039b:{NFSU2_TR(0x48039b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480410;}}
}
B48039d:L48039d:{c.instructions+=1;NFSU2_TR(0x48039d);
{goto L4803a1;}
}
B48039f:L48039f:{c.instructions+=1;NFSU2_TR(0x48039f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4803a1:L4803a1:{c.instructions+=5;NFSU2_TR(0x4803a1);
__builtin_memmove((R+4),gp(0x82af44),4);
}
B4803a7:{NFSU2_TR(0x4803a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4803aa:{NFSU2_TR(0x4803aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4803ab:{NFSU2_TR(0x4803ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4803af:{NFSU2_TR(0x4803af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4803b4ull));
TAIL_STATIC(0x440e50u,440);
}
B4803b4:L4803b4:{c.instructions+=3;NFSU2_TR(0x4803b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4803b7:{NFSU2_TR(0x4803b7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4803b9:{NFSU2_TR(0x4803b9);
if(r1(R+518)){{goto L4803cc;}}
}
B4803bb:L4803bb:{c.instructions+=5;NFSU2_TR(0x4803bb);
u8 U[4];
w4(U+0,u32(0x78b720ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4803c1:{NFSU2_TR(0x4803c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4803c4:{NFSU2_TR(0x4803c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4803c7:{NFSU2_TR(0x4803c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4803ca:{NFSU2_TR(0x4803ca);
{goto L4803ce;}
}
B4803cc:L4803cc:{c.instructions+=1;NFSU2_TR(0x4803cc);
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
B4803ce:L4803ce:{c.instructions+=11;NFSU2_TR(0x4803ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4803d1:{NFSU2_TR(0x4803d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4803d5:{NFSU2_TR(0x4803d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4803d8:{NFSU2_TR(0x4803d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4803db:{NFSU2_TR(0x4803db);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4803de:{NFSU2_TR(0x4803de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4803e1:{NFSU2_TR(0x4803e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4803e3:{NFSU2_TR(0x4803e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4803e4:{NFSU2_TR(0x4803e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4803e5:{NFSU2_TR(0x4803e5);
__builtin_memmove((R+4),(R+28),4);
}
B4803e7:{NFSU2_TR(0x4803e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4803eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4803ea:L4803ea:{c.instructions+=6;NFSU2_TR(0x4803ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4803ed:{NFSU2_TR(0x4803ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4803ee:{NFSU2_TR(0x4803ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4803ef:{NFSU2_TR(0x4803ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4803f0:{NFSU2_TR(0x4803f0);
__builtin_memmove((R+4),(R+24),4);
}
B4803f2:{NFSU2_TR(0x4803f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4803f7ull));
TAIL_STATIC(0x479030u,479);
}
B4803f7:L4803f7:{c.instructions+=10;NFSU2_TR(0x4803f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4803fa:{NFSU2_TR(0x4803fa);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4803ff:{NFSU2_TR(0x4803ff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B480400:{NFSU2_TR(0x480400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480403:{NFSU2_TR(0x480403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480406:{NFSU2_TR(0x480406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B480409:{NFSU2_TR(0x480409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48040b:{NFSU2_TR(0x48040b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B48040c:{NFSU2_TR(0x48040c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B48040e:{NFSU2_TR(0x48040e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48039fu);}goto L48039f;}}
}
B480410:L480410:{c.instructions+=6;NFSU2_TR(0x480410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B480411:{NFSU2_TR(0x480411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480412:{NFSU2_TR(0x480412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480413:{NFSU2_TR(0x480413);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480414:{NFSU2_TR(0x480414);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B480415:{NFSU2_TR(0x480415);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480420:L480420:{c.instructions+=13;NFSU2_TR(0x480420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B480423:{NFSU2_TR(0x480423);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480424:{NFSU2_TR(0x480424);
__builtin_memmove((R+24),(R+4),4);
}
B480426:{NFSU2_TR(0x480426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480429:{NFSU2_TR(0x480429);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48042c:{NFSU2_TR(0x48042c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B48042e:{NFSU2_TR(0x48042e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480431:{NFSU2_TR(0x480431);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480432:{NFSU2_TR(0x480432);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B480434:{NFSU2_TR(0x480434);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480436:{NFSU2_TR(0x480436);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48043a:{NFSU2_TR(0x48043a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48043e:{NFSU2_TR(0x48043e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480853;}}
}
B480444:L480444:{c.instructions+=5;NFSU2_TR(0x480444);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480445:{NFSU2_TR(0x480445);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480446:{NFSU2_TR(0x480446);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480448:{NFSU2_TR(0x480448);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48044c:{NFSU2_TR(0x48044c);
{goto L480454;}
}
B48044e:L48044e:{c.instructions+=2;NFSU2_TR(0x48044e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B480452:{NFSU2_TR(0x480452);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480454:L480454:{c.instructions+=12;NFSU2_TR(0x480454);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480457:{NFSU2_TR(0x480457);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B48045a:{NFSU2_TR(0x48045a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48045d:{NFSU2_TR(0x48045d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480460:{NFSU2_TR(0x480460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480462:{NFSU2_TR(0x480462);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480466:{NFSU2_TR(0x480466);
__builtin_memmove((R+4),(R+12),4);
}
B480468:{NFSU2_TR(0x480468);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48046c:{NFSU2_TR(0x48046c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480470:{NFSU2_TR(0x480470);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480474:{NFSU2_TR(0x480474);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480478:{NFSU2_TR(0x480478);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48047bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48047b:L48047b:{c.instructions+=8;NFSU2_TR(0x48047b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48047e:{NFSU2_TR(0x48047e);
__builtin_memmove((R+4),(R+0),4);
}
B480480:{NFSU2_TR(0x480480);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B480482:{NFSU2_TR(0x480482);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480484:{NFSU2_TR(0x480484);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480488:{NFSU2_TR(0x480488);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48048c:{NFSU2_TR(0x48048c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B480491:{NFSU2_TR(0x480491);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4804ea;}}
}
B480493:L480493:{c.instructions+=3;NFSU2_TR(0x480493);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480496:{NFSU2_TR(0x480496);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48049a:{NFSU2_TR(0x48049a);
__builtin_memmove((R+12),(R+12),4);
}
B4804a0:L4804a0:{c.instructions+=5;NFSU2_TR(0x4804a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4804a3:{NFSU2_TR(0x4804a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4804a6:{NFSU2_TR(0x4804a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4804a8:{NFSU2_TR(0x4804a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4804ac:{NFSU2_TR(0x4804ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4804afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4804af:L4804af:{c.instructions+=5;NFSU2_TR(0x4804af);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4804b3:{NFSU2_TR(0x4804b3);
__builtin_memmove((R+4),(R+0),4);
}
B4804b5:{NFSU2_TR(0x4804b5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B4804b8:{NFSU2_TR(0x4804b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4804ba:{NFSU2_TR(0x4804ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4804d8;}}
}
B4804bc:L4804bc:{c.instructions+=3;NFSU2_TR(0x4804bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4804c0:{NFSU2_TR(0x4804c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4804c2:{NFSU2_TR(0x4804c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4804d0;}}
}
B4804c4:L4804c4:{c.instructions+=3;NFSU2_TR(0x4804c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4804c8:{NFSU2_TR(0x4804c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4804cd:{NFSU2_TR(0x4804cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4804d0:L4804d0:{c.instructions+=2;NFSU2_TR(0x4804d0);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4804d4:{NFSU2_TR(0x4804d4);
if(r1(R+518)){{goto L4804ea;}}
}
B4804d6:L4804d6:{c.instructions+=1;NFSU2_TR(0x4804d6);
{goto L4804e2;}
}
B4804d8:L4804d8:{c.instructions+=2;NFSU2_TR(0x4804d8);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4804dc:{NFSU2_TR(0x4804dc);
if(r1(R+518)){{goto L4804e2;}}
}
B4804de:L4804de:{c.instructions+=1;NFSU2_TR(0x4804de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4804e2:L4804e2:{c.instructions+=4;NFSU2_TR(0x4804e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4804e5:{NFSU2_TR(0x4804e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4804e6:{NFSU2_TR(0x4804e6);
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
B4804e8:{NFSU2_TR(0x4804e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4804a0u);}goto L4804a0;}}
}
B4804ea:L4804ea:{c.instructions+=4;NFSU2_TR(0x4804ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4804ed:{NFSU2_TR(0x4804ed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B4804f2:{NFSU2_TR(0x4804f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4804f7:{NFSU2_TR(0x4804f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L480507;}}
}
B4804f9:L4804f9:{c.instructions+=5;NFSU2_TR(0x4804f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4804fc:{NFSU2_TR(0x4804fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4804ff:{NFSU2_TR(0x4804ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B480502:{NFSU2_TR(0x480502);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B480504:{NFSU2_TR(0x480504);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480507:L480507:{c.instructions+=9;NFSU2_TR(0x480507);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48050b:{NFSU2_TR(0x48050b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48050e:{NFSU2_TR(0x48050e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480510:{NFSU2_TR(0x480510);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B480513:{NFSU2_TR(0x480513);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B480517:{NFSU2_TR(0x480517);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48051b:{NFSU2_TR(0x48051b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48051f:{NFSU2_TR(0x48051f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480521:{NFSU2_TR(0x480521);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48056b;}}
}
B480523:L480523:{c.instructions+=1;NFSU2_TR(0x480523);
__builtin_memmove((R+8),(R+0),4);
}
B480525:L480525:{c.instructions+=8;NFSU2_TR(0x480525);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480529:{NFSU2_TR(0x480529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48052b:{NFSU2_TR(0x48052b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B48052e:{NFSU2_TR(0x48052e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480532:{NFSU2_TR(0x480532);
__builtin_memmove((R+4),(R+0),4);
}
B480534:{NFSU2_TR(0x480534);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe0000000ull))));
}
B48053a:{NFSU2_TR(0x48053a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480540:{NFSU2_TR(0x480540);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L480548;}}
}
B480542:L480542:{c.instructions+=2;NFSU2_TR(0x480542);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B480546:{NFSU2_TR(0x480546);
{goto L480568;}
}
B480548:L480548:{c.instructions+=5;NFSU2_TR(0x480548);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48054b:{NFSU2_TR(0x48054b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B48054e:{NFSU2_TR(0x48054e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B480553:{NFSU2_TR(0x480553);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480555:{NFSU2_TR(0x480555);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48055d;}}
}
B480557:L480557:{c.instructions+=2;NFSU2_TR(0x480557);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B48055b:{NFSU2_TR(0x48055b);
{goto L480568;}
}
B48055d:L48055d:{c.instructions+=3;NFSU2_TR(0x48055d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480560:{NFSU2_TR(0x480560);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B480564:{NFSU2_TR(0x480564);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B480568:L480568:{c.instructions+=2;NFSU2_TR(0x480568);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B480569:{NFSU2_TR(0x480569);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480525u);}goto L480525;}}
}
B48056b:L48056b:{c.instructions+=11;NFSU2_TR(0x48056b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48056e:{NFSU2_TR(0x48056e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B480571:{NFSU2_TR(0x480571);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480575:{NFSU2_TR(0x480575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480578:{NFSU2_TR(0x480578);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480579:{NFSU2_TR(0x480579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48057c:{NFSU2_TR(0x48057c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48057d:{NFSU2_TR(0x48057d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48057e:{NFSU2_TR(0x48057e);
u8 U[4];
w4(U+0,u32(0x78bdc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480583:{NFSU2_TR(0x480583);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480585:{NFSU2_TR(0x480585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48058aull));
TAIL_STATIC(0x4691c0u,469);
}
B48058a:L48058a:{c.instructions+=9;NFSU2_TR(0x48058a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48058d:{NFSU2_TR(0x48058d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B480590:{NFSU2_TR(0x480590);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B480594:{NFSU2_TR(0x480594);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480597:{NFSU2_TR(0x480597);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480598:{NFSU2_TR(0x480598);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480599:{NFSU2_TR(0x480599);
u8 U[4];
w4(U+0,u32(0x78bd98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48059e:{NFSU2_TR(0x48059e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4805a0:{NFSU2_TR(0x4805a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4805a5ull));
TAIL_STATIC(0x4691c0u,469);
}
B4805a5:L4805a5:{c.instructions+=21;NFSU2_TR(0x4805a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4805a8:{NFSU2_TR(0x4805a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4805ab:{NFSU2_TR(0x4805ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4805ae:{NFSU2_TR(0x4805ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4805b1:{NFSU2_TR(0x4805b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4805b7:{NFSU2_TR(0x4805b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4805ba:{NFSU2_TR(0x4805ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4805bd:{NFSU2_TR(0x4805bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4805c1:{NFSU2_TR(0x4805c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4805c3:{NFSU2_TR(0x4805c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4805c7:{NFSU2_TR(0x4805c7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4805c9:{NFSU2_TR(0x4805c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4805cf:{NFSU2_TR(0x4805cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4805d2:{NFSU2_TR(0x4805d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4805d5:{NFSU2_TR(0x4805d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4805d8:{NFSU2_TR(0x4805d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4805db:{NFSU2_TR(0x4805db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4805dd:{NFSU2_TR(0x4805dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4805e0:{NFSU2_TR(0x4805e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4805e3:{NFSU2_TR(0x4805e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4805e6:{NFSU2_TR(0x4805e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4805f0;}}
}
B4805e8:L4805e8:{c.instructions+=3;NFSU2_TR(0x4805e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4805eb:{NFSU2_TR(0x4805eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4805ee:{NFSU2_TR(0x4805ee);
{goto L4805f7;}
}
B4805f0:L4805f0:{c.instructions+=1;NFSU2_TR(0x4805f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4805f7:L4805f7:{c.instructions+=4;NFSU2_TR(0x4805f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4805fb:{NFSU2_TR(0x4805fb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4805fd:{NFSU2_TR(0x4805fd);
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
B4805ff:{NFSU2_TR(0x4805ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480605;}}
}
B480601:L480601:{c.instructions+=1;NFSU2_TR(0x480601);
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
B480603:L480603:{c.instructions+=1;NFSU2_TR(0x480603);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L480605;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480603u);}goto L480603;}
}
B480605:L480605:{c.instructions+=6;NFSU2_TR(0x480605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480608:{NFSU2_TR(0x480608);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B48060b:{NFSU2_TR(0x48060b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48060e:{NFSU2_TR(0x48060e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480610:{NFSU2_TR(0x480610);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480614:{NFSU2_TR(0x480614);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480617ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480617:L480617:{c.instructions+=5;NFSU2_TR(0x480617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48061a:{NFSU2_TR(0x48061a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B48061d:{NFSU2_TR(0x48061d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48061f:{NFSU2_TR(0x48061f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B480622:{NFSU2_TR(0x480622);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480625ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480625:L480625:{c.instructions+=6;NFSU2_TR(0x480625);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B48062b:{NFSU2_TR(0x48062b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe0ffffffull))));
}
B480630:{NFSU2_TR(0x480630);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B480633:{NFSU2_TR(0x480633);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B480635:{NFSU2_TR(0x480635);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480636:{NFSU2_TR(0x480636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48063bull));
TAIL_STATIC(0x468f70u,468);
}
B48063b:L48063b:{c.instructions+=4;NFSU2_TR(0x48063b);
__builtin_memmove((R+20),(R+0),4);
}
B48063d:{NFSU2_TR(0x48063d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48063f:{NFSU2_TR(0x48063f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B480641:{NFSU2_TR(0x480641);
if(r1(R+518)){{goto L48080d;}}
}
B480647:L480647:{c.instructions+=7;NFSU2_TR(0x480647);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48064a:{NFSU2_TR(0x48064a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48064e:{NFSU2_TR(0x48064e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B480651:{NFSU2_TR(0x480651);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480654:{NFSU2_TR(0x480654);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480656:{NFSU2_TR(0x480656);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48065a:{NFSU2_TR(0x48065a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4806b9;}}
}
B48065c:L48065c:{c.instructions+=5;NFSU2_TR(0x48065c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48065f:{NFSU2_TR(0x48065f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480661:{NFSU2_TR(0x480661);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B480664:{NFSU2_TR(0x480664);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B480667:{NFSU2_TR(0x480667);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480832;}}
}
B48066d:L48066d:{c.instructions+=1;NFSU2_TR(0x48066d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480671:L480671:{c.instructions+=21;NFSU2_TR(0x480671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480674:{NFSU2_TR(0x480674);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B480678:{NFSU2_TR(0x480678);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B48067b:{NFSU2_TR(0x48067b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48067e:{NFSU2_TR(0x48067e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480680:{NFSU2_TR(0x480680);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B480683:{NFSU2_TR(0x480683);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480687:{NFSU2_TR(0x480687);
__builtin_memmove((R+8),(R+0),4);
}
B480689:{NFSU2_TR(0x480689);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B48068c:{NFSU2_TR(0x48068c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B48068f:{NFSU2_TR(0x48068f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B480692:{NFSU2_TR(0x480692);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B480695:{NFSU2_TR(0x480695);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B480698:{NFSU2_TR(0x480698);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B48069c:{NFSU2_TR(0x48069c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4806a0:{NFSU2_TR(0x4806a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4806a6:{NFSU2_TR(0x4806a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4806aa:{NFSU2_TR(0x4806aa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4806ad:{NFSU2_TR(0x4806ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4806ae:{NFSU2_TR(0x4806ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4806b2:{NFSU2_TR(0x4806b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480671u);}goto L480671;}}
}
B4806b4:L4806b4:{c.instructions+=1;NFSU2_TR(0x4806b4);
{goto L480832;}
}
B4806b9:L4806b9:{c.instructions+=3;NFSU2_TR(0x4806b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4806bb:{NFSU2_TR(0x4806bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4806bf:{NFSU2_TR(0x4806bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480787;}}
}
B4806c5:L4806c5:{c.instructions+=13;NFSU2_TR(0x4806c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4806c9:{NFSU2_TR(0x4806c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4806cb:{NFSU2_TR(0x4806cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4806ce:{NFSU2_TR(0x4806ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4806d1:{NFSU2_TR(0x4806d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4806d5:{NFSU2_TR(0x4806d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4806d8:{NFSU2_TR(0x4806d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4806d9:{NFSU2_TR(0x4806d9);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4806dc:{NFSU2_TR(0x4806dc);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B4806de:{NFSU2_TR(0x4806de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4806df:{NFSU2_TR(0x4806df);
u8 U[4];
w4(U+0,u32(0x78bd74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4806e4:{NFSU2_TR(0x4806e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4806e6:{NFSU2_TR(0x4806e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4806ebull));
TAIL_STATIC(0x4691c0u,469);
}
B4806eb:L4806eb:{c.instructions+=5;NFSU2_TR(0x4806eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4806ee:{NFSU2_TR(0x4806ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4806f1:{NFSU2_TR(0x4806f1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4806f3:{NFSU2_TR(0x4806f3);
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
B4806f5:{NFSU2_TR(0x4806f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480712;}}
}
B4806f7:L4806f7:{c.instructions+=4;NFSU2_TR(0x4806f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4806fa:{NFSU2_TR(0x4806fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4806fd:{NFSU2_TR(0x4806fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4806ff:{NFSU2_TR(0x4806ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480702ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480702:L480702:{c.instructions+=2;NFSU2_TR(0x480702);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480704:{NFSU2_TR(0x480704);
if(r1(R+518)){{goto L480802;}}
}
B48070a:L48070a:{c.instructions+=4;NFSU2_TR(0x48070a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48070d:{NFSU2_TR(0x48070d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B48070e:{NFSU2_TR(0x48070e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B480710:{NFSU2_TR(0x480710);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4806f7u);}goto L4806f7;}}
}
B480712:L480712:{c.instructions+=3;NFSU2_TR(0x480712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480715:{NFSU2_TR(0x480715);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B48071b:{NFSU2_TR(0x48071b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B48071e:L48071e:{c.instructions+=2;NFSU2_TR(0x48071e);
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
B480720:{NFSU2_TR(0x480720);
if(r1(R+518)){{goto L480783;}}
}
B480722:L480722:{c.instructions+=3;NFSU2_TR(0x480722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480724:{NFSU2_TR(0x480724);
__builtin_memmove((R+4),(R+28),4);
}
B480726:{NFSU2_TR(0x480726);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480729ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480729:L480729:{c.instructions+=9;NFSU2_TR(0x480729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48072c:{NFSU2_TR(0x48072c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480730:{NFSU2_TR(0x480730);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B480733:{NFSU2_TR(0x480733);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480736:{NFSU2_TR(0x480736);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48073a:{NFSU2_TR(0x48073a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B48073d:{NFSU2_TR(0x48073d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48073f:{NFSU2_TR(0x48073f);
__builtin_memmove((R+4),(R+28),4);
}
B480741:{NFSU2_TR(0x480741);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480744ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480744:L480744:{c.instructions+=6;NFSU2_TR(0x480744);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B48074a:{NFSU2_TR(0x48074a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B48074c:{NFSU2_TR(0x48074c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffff0ull))));
}
B480751:{NFSU2_TR(0x480751);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x60000000ull))));
}
B480756:{NFSU2_TR(0x480756);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480757:{NFSU2_TR(0x480757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48075cull));
TAIL_STATIC(0x468fe0u,468);
}
B48075c:L48075c:{c.instructions+=8;NFSU2_TR(0x48075c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480760:{NFSU2_TR(0x480760);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480761:{NFSU2_TR(0x480761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480764:{NFSU2_TR(0x480764);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B480767:{NFSU2_TR(0x480767);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480768:{NFSU2_TR(0x480768);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480769:{NFSU2_TR(0x480769);
__builtin_memmove((R+4),(R+28),4);
}
B48076b:{NFSU2_TR(0x48076b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48076eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48076e:L48076e:{c.instructions+=6;NFSU2_TR(0x48076e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480772:{NFSU2_TR(0x480772);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480776:{NFSU2_TR(0x480776);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B480777:{NFSU2_TR(0x480777);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B480779:{NFSU2_TR(0x480779);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48077d:{NFSU2_TR(0x48077d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4806c5u);}goto L4806c5;}}
}
B480783:L480783:{c.instructions+=1;NFSU2_TR(0x480783);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B480787:L480787:{c.instructions+=6;NFSU2_TR(0x480787);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48078a:{NFSU2_TR(0x48078a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48078c:{NFSU2_TR(0x48078c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B48078f:{NFSU2_TR(0x48078f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B480792:{NFSU2_TR(0x480792);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480794:{NFSU2_TR(0x480794);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4807d2;}}
}
B480796:L480796:{c.instructions+=2;NFSU2_TR(0x480796);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48079a:{NFSU2_TR(0x48079a);
__builtin_memmove((R+12),(R+12),4);
}
B4807a0:L4807a0:{c.instructions+=15;NFSU2_TR(0x4807a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4807a2:{NFSU2_TR(0x4807a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4807a5:{NFSU2_TR(0x4807a5);
__builtin_memmove((R+8),(R+0),4);
}
B4807a7:{NFSU2_TR(0x4807a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4807aa:{NFSU2_TR(0x4807aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4807ad:{NFSU2_TR(0x4807ad);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B4807b0:{NFSU2_TR(0x4807b0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B4807b3:{NFSU2_TR(0x4807b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4807b6:{NFSU2_TR(0x4807b6);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4807ba:{NFSU2_TR(0x4807ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4807be:{NFSU2_TR(0x4807be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4807c1:{NFSU2_TR(0x4807c1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4807c2:{NFSU2_TR(0x4807c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4807cc:{NFSU2_TR(0x4807cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4807d0:{NFSU2_TR(0x4807d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4807a0u);}goto L4807a0;}}
}
B4807d2:L4807d2:{c.instructions+=11;NFSU2_TR(0x4807d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4807d6:{NFSU2_TR(0x4807d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4807d8:{NFSU2_TR(0x4807d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4807db:{NFSU2_TR(0x4807db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4807df:{NFSU2_TR(0x4807df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4807e0:{NFSU2_TR(0x4807e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4807e3:{NFSU2_TR(0x4807e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4807e6:{NFSU2_TR(0x4807e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4807e7:{NFSU2_TR(0x4807e7);
u8 U[4];
w4(U+0,u32(0x78bd4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4807ec:{NFSU2_TR(0x4807ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4807ee:{NFSU2_TR(0x4807ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4807f3ull));
TAIL_STATIC(0x4691c0u,469);
}
B4807f3:L4807f3:{c.instructions+=5;NFSU2_TR(0x4807f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4807f6:{NFSU2_TR(0x4807f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4807fa:{NFSU2_TR(0x4807fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4807fd:{NFSU2_TR(0x4807fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480800:{NFSU2_TR(0x480800);
{goto L48082f;}
}
B480802:L480802:{c.instructions+=3;NFSU2_TR(0x480802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480805:{NFSU2_TR(0x480805);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B480808:{NFSU2_TR(0x480808);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48071eu);}goto L48071e;}
}
B48080d:L48080d:{c.instructions+=7;NFSU2_TR(0x48080d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480810:{NFSU2_TR(0x480810);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480814:{NFSU2_TR(0x480814);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B480817:{NFSU2_TR(0x480817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48081a:{NFSU2_TR(0x48081a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48081c:{NFSU2_TR(0x48081c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48081d:{NFSU2_TR(0x48081d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480820ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480820:L480820:{c.instructions+=4;NFSU2_TR(0x480820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480821:{NFSU2_TR(0x480821);
u8 U[4];
w4(U+0,u32(0x78bd24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480826:{NFSU2_TR(0x480826);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480827:{NFSU2_TR(0x480827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48082cull));
TAIL_STATIC(0x4691c0u,469);
}
B48082c:L48082c:{c.instructions+=1;NFSU2_TR(0x48082c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48082f:L48082f:{c.instructions+=1;NFSU2_TR(0x48082f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B480832:L480832:{c.instructions+=9;NFSU2_TR(0x480832);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480836:{NFSU2_TR(0x480836);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48083a:{NFSU2_TR(0x48083a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48083d:{NFSU2_TR(0x48083d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48083e:{NFSU2_TR(0x48083e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B480841:{NFSU2_TR(0x480841);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B480843:{NFSU2_TR(0x480843);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480847:{NFSU2_TR(0x480847);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48084b:{NFSU2_TR(0x48084b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48044eu);}goto L48044e;}}
}
B480851:L480851:{c.instructions+=2;NFSU2_TR(0x480851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B480852:{NFSU2_TR(0x480852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480853:L480853:{c.instructions+=4;NFSU2_TR(0x480853);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480854:{NFSU2_TR(0x480854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480855:{NFSU2_TR(0x480855);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480858:{NFSU2_TR(0x480858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480860:L480860:{c.instructions+=7;NFSU2_TR(0x480860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480861:{NFSU2_TR(0x480861);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480862:{NFSU2_TR(0x480862);
__builtin_memmove((R+28),(R+4),4);
}
B480864:{NFSU2_TR(0x480864);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480867:{NFSU2_TR(0x480867);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B480869:{NFSU2_TR(0x480869);
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
B48086b:{NFSU2_TR(0x48086b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48090a;}}
}
B480871:L480871:{c.instructions+=2;NFSU2_TR(0x480871);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480872:{NFSU2_TR(0x480872);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B480876:L480876:{c.instructions+=14;NFSU2_TR(0x480876);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480879:{NFSU2_TR(0x480879);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B48087c:{NFSU2_TR(0x48087c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48087f:{NFSU2_TR(0x48087f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B480882:{NFSU2_TR(0x480882);
__builtin_memmove((R+4),gp(0x82bc80),4);
}
B480888:{NFSU2_TR(0x480888);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480889:{NFSU2_TR(0x480889);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48088a:{NFSU2_TR(0x48088a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48088d:{NFSU2_TR(0x48088d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48088e:{NFSU2_TR(0x48088e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48088f:{NFSU2_TR(0x48088f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480890:{NFSU2_TR(0x480890);
u8 U[4];
w4(U+0,u32(0x78be48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480895:{NFSU2_TR(0x480895);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480896:{NFSU2_TR(0x480896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48089bull));
TAIL_STATIC(0x4691c0u,469);
}
B48089b:L48089b:{c.instructions+=10;NFSU2_TR(0x48089b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48089e:{NFSU2_TR(0x48089e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4808a1:{NFSU2_TR(0x4808a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4808a4:{NFSU2_TR(0x4808a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4808a7:{NFSU2_TR(0x4808a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4808aa:{NFSU2_TR(0x4808aa);
__builtin_memmove((R+4),gp(0x82bc80),4);
}
B4808b0:{NFSU2_TR(0x4808b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808b1:{NFSU2_TR(0x4808b1);
u8 U[4];
w4(U+0,u32(0x78be28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808b6:{NFSU2_TR(0x4808b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808b7:{NFSU2_TR(0x4808b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4808bcull));
TAIL_STATIC(0x4691c0u,469);
}
B4808bc:L4808bc:{c.instructions+=8;NFSU2_TR(0x4808bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4808bf:{NFSU2_TR(0x4808bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4808c2:{NFSU2_TR(0x4808c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4808c5:{NFSU2_TR(0x4808c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4808c8:{NFSU2_TR(0x4808c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4808cb:{NFSU2_TR(0x4808cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4808ce:{NFSU2_TR(0x4808ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4808d0:{NFSU2_TR(0x4808d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4808da;}}
}
B4808d2:L4808d2:{c.instructions+=3;NFSU2_TR(0x4808d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808d4:{NFSU2_TR(0x4808d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808d5:{NFSU2_TR(0x4808d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4808daull));
TAIL_STATIC(0x478240u,478);
}
B4808da:L4808da:{c.instructions+=10;NFSU2_TR(0x4808da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4808dd:{NFSU2_TR(0x4808dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4808e0:{NFSU2_TR(0x4808e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4808e3:{NFSU2_TR(0x4808e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4808e6:{NFSU2_TR(0x4808e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4808e9:{NFSU2_TR(0x4808e9);
__builtin_memmove((R+0),gp(0x82bc80),4);
}
B4808ee:{NFSU2_TR(0x4808ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808ef:{NFSU2_TR(0x4808ef);
u8 U[4];
w4(U+0,u32(0x78be00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808f4:{NFSU2_TR(0x4808f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4808f5:{NFSU2_TR(0x4808f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4808faull));
TAIL_STATIC(0x4691c0u,469);
}
B4808fa:L4808fa:{c.instructions+=5;NFSU2_TR(0x4808fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4808fd:{NFSU2_TR(0x4808fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B480900:{NFSU2_TR(0x480900);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B480901:{NFSU2_TR(0x480901);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B480903:{NFSU2_TR(0x480903);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480876u);}goto L480876;}}
}
B480909:L480909:{c.instructions+=1;NFSU2_TR(0x480909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48090a:L48090a:{c.instructions+=3;NFSU2_TR(0x48090a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48090b:{NFSU2_TR(0x48090b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48090c:{NFSU2_TR(0x48090c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480910:L480910:{c.instructions+=9;NFSU2_TR(0x480910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480911:{NFSU2_TR(0x480911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480912:{NFSU2_TR(0x480912);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480913:{NFSU2_TR(0x480913);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B480917:{NFSU2_TR(0x480917);
__builtin_memmove((R+0),(R+28),4);
}
B480919:{NFSU2_TR(0x480919);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe0000000ull))));
}
B48091e:{NFSU2_TR(0x48091e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480923:{NFSU2_TR(0x480923);
__builtin_memmove((R+24),(R+4),4);
}
B480925:{NFSU2_TR(0x480925);
if(r1(R+518)){{goto L480992;}}
}
B480927:L480927:{c.instructions+=2;NFSU2_TR(0x480927);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48092c:{NFSU2_TR(0x48092c);
if(r1(R+518)){{goto L480966;}}
}
B48092e:L48092e:{c.instructions+=2;NFSU2_TR(0x48092e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x60000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x60000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480933:{NFSU2_TR(0x480933);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4809b9;}}
}
B480939:L480939:{c.instructions+=8;NFSU2_TR(0x480939);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48093c:{NFSU2_TR(0x48093c);
__builtin_memmove((R+4),(R+28),4);
}
B48093e:{NFSU2_TR(0x48093e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe0fffff0ull))));
}
B480944:{NFSU2_TR(0x480944);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B480947:{NFSU2_TR(0x480947);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B480949:{NFSU2_TR(0x480949);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B48094f:{NFSU2_TR(0x48094f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480950:{NFSU2_TR(0x480950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480955ull));
TAIL_STATIC(0x468fe0u,468);
}
B480955:L480955:{c.instructions+=2;NFSU2_TR(0x480955);
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
B480957:{NFSU2_TR(0x480957);
if(r1(R+518)){{goto L4809b9;}}
}
B480959:L480959:{c.instructions+=6;NFSU2_TR(0x480959);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48095c:{NFSU2_TR(0x48095c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B480960:{NFSU2_TR(0x480960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480961:{NFSU2_TR(0x480961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480962:{NFSU2_TR(0x480962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480963:{NFSU2_TR(0x480963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480966:L480966:{c.instructions+=8;NFSU2_TR(0x480966);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B480969:{NFSU2_TR(0x480969);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B48096f:{NFSU2_TR(0x48096f);
__builtin_memmove((R+0),(R+28),4);
}
B480971:{NFSU2_TR(0x480971);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B480974:{NFSU2_TR(0x480974);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe0ffffffull))));
}
B480979:{NFSU2_TR(0x480979);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B48097b:{NFSU2_TR(0x48097b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48097c:{NFSU2_TR(0x48097c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480981ull));
TAIL_STATIC(0x468f70u,468);
}
B480981:L480981:{c.instructions+=2;NFSU2_TR(0x480981);
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
B480983:{NFSU2_TR(0x480983);
if(r1(R+518)){{goto L4809b9;}}
}
B480985:L480985:{c.instructions+=6;NFSU2_TR(0x480985);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480988:{NFSU2_TR(0x480988);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B48098c:{NFSU2_TR(0x48098c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48098d:{NFSU2_TR(0x48098d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48098e:{NFSU2_TR(0x48098e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48098f:{NFSU2_TR(0x48098f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480992:L480992:{c.instructions+=5;NFSU2_TR(0x480992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480995:{NFSU2_TR(0x480995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480997:{NFSU2_TR(0x480997);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B480999:{NFSU2_TR(0x480999);
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
B48099b:{NFSU2_TR(0x48099b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4809b9;}}
}
B48099d:L48099d:{c.instructions+=1;NFSU2_TR(0x48099d);
__builtin_memmove((R+4),(R+4),4);
}
B4809a0:L4809a0:{c.instructions+=4;NFSU2_TR(0x4809a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4809a3:{NFSU2_TR(0x4809a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4809a6:{NFSU2_TR(0x4809a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4809a8:{NFSU2_TR(0x4809a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4809abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4809ab:L4809ab:{c.instructions+=2;NFSU2_TR(0x4809ab);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4809ad:{NFSU2_TR(0x4809ad);
if(r1(R+518)){{goto L4809c4;}}
}
B4809af:L4809af:{c.instructions+=5;NFSU2_TR(0x4809af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4809b2:{NFSU2_TR(0x4809b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4809b4:{NFSU2_TR(0x4809b4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4809b5:{NFSU2_TR(0x4809b5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4809b7:{NFSU2_TR(0x4809b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4809a0u);}goto L4809a0;}}
}
B4809b9:L4809b9:{c.instructions+=5;NFSU2_TR(0x4809b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4809ba:{NFSU2_TR(0x4809ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4809bb:{NFSU2_TR(0x4809bb);
w4(R+0,u32(0x7ede80ull));
}
B4809c0:{NFSU2_TR(0x4809c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4809c1:{NFSU2_TR(0x4809c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4809c4:L4809c4:{c.instructions+=4;NFSU2_TR(0x4809c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4809c7:{NFSU2_TR(0x4809c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4809ca:{NFSU2_TR(0x4809ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4809cc:{NFSU2_TR(0x4809cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4809cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4809cf:L4809cf:{c.instructions+=4;NFSU2_TR(0x4809cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4809d0:{NFSU2_TR(0x4809d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4809d1:{NFSU2_TR(0x4809d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4809d2:{NFSU2_TR(0x4809d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4809e0:L4809e0:{c.instructions+=9;NFSU2_TR(0x4809e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4809e1:{NFSU2_TR(0x4809e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4809e2:{NFSU2_TR(0x4809e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4809e6:{NFSU2_TR(0x4809e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4809e9:{NFSU2_TR(0x4809e9);
__builtin_memmove((R+0),(R+24),4);
}
B4809eb:{NFSU2_TR(0x4809eb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe0000000ull))));
}
B4809f0:{NFSU2_TR(0x4809f0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x20000000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4809f5:{NFSU2_TR(0x4809f5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4809f9:{NFSU2_TR(0x4809f9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L480aa7;}}
}
B4809ff:L4809ff:{c.instructions+=1;NFSU2_TR(0x4809ff);
if(r1(R+518)){{goto L480a56;}}
}
B480a01:L480a01:{c.instructions+=2;NFSU2_TR(0x480a01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480a06:{NFSU2_TR(0x480a06);
if(r1(R+518)){{goto L480a2e;}}
}
B480a08:L480a08:{c.instructions+=2;NFSU2_TR(0x480a08);
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
B480a0a:{NFSU2_TR(0x480a0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L480b02;}}
}
B480a10:L480a10:{c.instructions+=6;NFSU2_TR(0x480a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480a13:{NFSU2_TR(0x480a13);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480a19:{NFSU2_TR(0x480a19);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B480a1c:{NFSU2_TR(0x480a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480a1e:{NFSU2_TR(0x480a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B480a20:{NFSU2_TR(0x480a20);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480a23ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480a23:L480a23:{c.instructions+=3;NFSU2_TR(0x480a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480a24:{NFSU2_TR(0x480a24);
__builtin_memmove((R+4),(R+28),4);
}
B480a26:{NFSU2_TR(0x480a26);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480a29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480a29:L480a29:{c.instructions+=3;NFSU2_TR(0x480a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480a2a:{NFSU2_TR(0x480a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480a2b:{NFSU2_TR(0x480a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480a2e:L480a2e:{c.instructions+=3;NFSU2_TR(0x480a2e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xf00f00ffull))));
}
B480a34:{NFSU2_TR(0x480a34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480a35:{NFSU2_TR(0x480a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480a3aull));
TAIL_STATIC(0x467bf0u,467);
}
B480a3a:L480a3a:{c.instructions+=2;NFSU2_TR(0x480a3a);
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
B480a3c:{NFSU2_TR(0x480a3c);
if(r1(R+518)){{goto L480b02;}}
}
B480a42:L480a42:{c.instructions+=4;NFSU2_TR(0x480a42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480a44:{NFSU2_TR(0x480a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B480a46:{NFSU2_TR(0x480a46);
__builtin_memmove((R+4),(R+0),4);
}
B480a48:{NFSU2_TR(0x480a48);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480a4bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480a4b:L480a4b:{c.instructions+=3;NFSU2_TR(0x480a4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480a4c:{NFSU2_TR(0x480a4c);
__builtin_memmove((R+4),(R+28),4);
}
B480a4e:{NFSU2_TR(0x480a4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480a51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480a51:L480a51:{c.instructions+=3;NFSU2_TR(0x480a51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480a52:{NFSU2_TR(0x480a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480a53:{NFSU2_TR(0x480a53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480a56:L480a56:{c.instructions+=9;NFSU2_TR(0x480a56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480a5c:{NFSU2_TR(0x480a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480a5f:{NFSU2_TR(0x480a5f);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B480a64:{NFSU2_TR(0x480a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480a67:{NFSU2_TR(0x480a67);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B480a6a:{NFSU2_TR(0x480a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480a6d:{NFSU2_TR(0x480a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480a6f:{NFSU2_TR(0x480a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480a71:{NFSU2_TR(0x480a71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L480a8d;}}
}
B480a73:L480a73:{c.instructions+=7;NFSU2_TR(0x480a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480a76:{NFSU2_TR(0x480a76);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B480a7c:{NFSU2_TR(0x480a7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B480a7f:{NFSU2_TR(0x480a7f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x10ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480a82:{NFSU2_TR(0x480a82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480a83:{NFSU2_TR(0x480a83);
__builtin_memmove((R+4),(R+28),4);
}
B480a85:{NFSU2_TR(0x480a85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480a88ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480a88:L480a88:{c.instructions+=3;NFSU2_TR(0x480a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480a89:{NFSU2_TR(0x480a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480a8a:{NFSU2_TR(0x480a8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480a8d:L480a8d:{c.instructions+=7;NFSU2_TR(0x480a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480a90:{NFSU2_TR(0x480a90);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B480a96:{NFSU2_TR(0x480a96);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B480a99:{NFSU2_TR(0x480a99);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x10ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480a9c:{NFSU2_TR(0x480a9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480a9d:{NFSU2_TR(0x480a9d);
__builtin_memmove((R+4),(R+28),4);
}
B480a9f:{NFSU2_TR(0x480a9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480aa2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480aa2:L480aa2:{c.instructions+=3;NFSU2_TR(0x480aa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480aa3:{NFSU2_TR(0x480aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480aa4:{NFSU2_TR(0x480aa4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480aa7:L480aa7:{c.instructions+=2;NFSU2_TR(0x480aa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480aac:{NFSU2_TR(0x480aac);
if(r1(R+518)){{goto L480ad3;}}
}
B480aae:L480aae:{c.instructions+=2;NFSU2_TR(0x480aae);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x60000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x60000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480ab3:{NFSU2_TR(0x480ab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L480b02;}}
}
B480ab5:L480ab5:{c.instructions+=8;NFSU2_TR(0x480ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480ab8:{NFSU2_TR(0x480ab8);
__builtin_memmove((R+4),(R+24),4);
}
B480aba:{NFSU2_TR(0x480aba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe0fffff0ull))));
}
B480ac0:{NFSU2_TR(0x480ac0);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B480ac3:{NFSU2_TR(0x480ac3);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B480ac5:{NFSU2_TR(0x480ac5);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B480acb:{NFSU2_TR(0x480acb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480acc:{NFSU2_TR(0x480acc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480ad1ull));
TAIL_STATIC(0x468fe0u,468);
}
B480ad1:L480ad1:{c.instructions+=1;NFSU2_TR(0x480ad1);
{goto L480aef;}
}
B480ad3:L480ad3:{c.instructions+=8;NFSU2_TR(0x480ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480ad6:{NFSU2_TR(0x480ad6);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B480ad9:{NFSU2_TR(0x480ad9);
__builtin_memmove((R+8),(R+24),4);
}
B480adb:{NFSU2_TR(0x480adb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xe0ffffffull))));
}
B480ae1:{NFSU2_TR(0x480ae1);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B480ae3:{NFSU2_TR(0x480ae3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480ae4:{NFSU2_TR(0x480ae4);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B480aea:{NFSU2_TR(0x480aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480aefull));
TAIL_STATIC(0x468f70u,468);
}
B480aef:L480aef:{c.instructions+=2;NFSU2_TR(0x480aef);
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
B480af1:{NFSU2_TR(0x480af1);
if(r1(R+518)){{goto L480b02;}}
}
B480af3:L480af3:{c.instructions+=6;NFSU2_TR(0x480af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480af5:{NFSU2_TR(0x480af5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480af8:{NFSU2_TR(0x480af8);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B480afc:{NFSU2_TR(0x480afc);
__builtin_memmove((R+4),(R+28),4);
}
B480afe:{NFSU2_TR(0x480afe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480aff:{NFSU2_TR(0x480aff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b02ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480b02:L480b02:{c.instructions+=3;NFSU2_TR(0x480b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480b03:{NFSU2_TR(0x480b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480b04:{NFSU2_TR(0x480b04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480b10:L480b10:{c.instructions+=5;NFSU2_TR(0x480b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480b11:{NFSU2_TR(0x480b11);
__builtin_memmove((R+24),(R+4),4);
}
B480b13:{NFSU2_TR(0x480b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480b16:{NFSU2_TR(0x480b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480b18:{NFSU2_TR(0x480b18);
if(r1(R+518)){{goto L480b21;}}
}
B480b1a:L480b1a:{c.instructions+=2;NFSU2_TR(0x480b1a);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480b1c:{NFSU2_TR(0x480b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b21ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480170u);}goto L480170;}
}
B480b21:L480b21:{c.instructions+=3;NFSU2_TR(0x480b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480b24:{NFSU2_TR(0x480b24);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480b26:{NFSU2_TR(0x480b26);
if(r1(R+518)){{goto L480b4e;}}
}
B480b28:L480b28:{c.instructions+=1;NFSU2_TR(0x480b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b2dull));
TAIL_STATIC(0x467510u,467);
}
B480b2d:L480b2d:{c.instructions+=3;NFSU2_TR(0x480b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480b30:{NFSU2_TR(0x480b30);
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
B480b32:{NFSU2_TR(0x480b32);
if(r1(R+518)){{goto L480b3c;}}
}
B480b34:L480b34:{c.instructions+=3;NFSU2_TR(0x480b34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480b36:{NFSU2_TR(0x480b36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480b38:{NFSU2_TR(0x480b38);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b3aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B480b3a:L480b3a:{c.instructions+=1;NFSU2_TR(0x480b3a);
{goto L480b3e;}
}
B480b3c:L480b3c:{c.instructions+=1;NFSU2_TR(0x480b3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B480b3e:L480b3e:{c.instructions+=2;NFSU2_TR(0x480b3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480b3f:{NFSU2_TR(0x480b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b44ull));
TAIL_STATIC(0x575630u,575);
}
B480b44:L480b44:{c.instructions+=2;NFSU2_TR(0x480b44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480b47:{NFSU2_TR(0x480b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B480b4e:L480b4e:{c.instructions+=3;NFSU2_TR(0x480b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480b51:{NFSU2_TR(0x480b51);
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
B480b53:{NFSU2_TR(0x480b53);
if(r1(R+518)){{goto L480b65;}}
}
B480b55:L480b55:{c.instructions+=2;NFSU2_TR(0x480b55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480b56:{NFSU2_TR(0x480b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b5bull));
TAIL_STATIC(0x440540u,440);
}
B480b5b:L480b5b:{c.instructions+=2;NFSU2_TR(0x480b5b);
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
B480b5e:{NFSU2_TR(0x480b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B480b65:L480b65:{c.instructions+=2;NFSU2_TR(0x480b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480b66:{NFSU2_TR(0x480b66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480b70:L480b70:{c.instructions+=3;NFSU2_TR(0x480b70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480b71:{NFSU2_TR(0x480b71);
__builtin_memmove((R+24),(R+4),4);
}
B480b73:{NFSU2_TR(0x480b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b78ull));
TAIL_STATIC(0x46a080u,46a);
}
B480b78:L480b78:{c.instructions+=7;NFSU2_TR(0x480b78);
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
B480b7a:{NFSU2_TR(0x480b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480b80:{NFSU2_TR(0x480b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480b86:{NFSU2_TR(0x480b86);
u8 U[4];
w4(U+0,u32(0x78be90ull));
s4(u32(r4(R+24)),r4(U+0));
}
B480b8c:{NFSU2_TR(0x480b8c);
__builtin_memmove((R+0),(R+24),4);
}
B480b8e:{NFSU2_TR(0x480b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480b8f:{NFSU2_TR(0x480b8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480b90:L480b90:{c.instructions+=3;NFSU2_TR(0x480b90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480b91:{NFSU2_TR(0x480b91);
__builtin_memmove((R+24),(R+4),4);
}
B480b93:{NFSU2_TR(0x480b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480b98ull));
{goto L480bb0;}
}
B480b98:L480b98:{c.instructions+=2;NFSU2_TR(0x480b98);
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
B480b9d:{NFSU2_TR(0x480b9d);
if(r1(R+518)){{goto L480ba8;}}
}
B480b9f:L480b9f:{c.instructions+=2;NFSU2_TR(0x480b9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480ba0:{NFSU2_TR(0x480ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480ba5ull));
TAIL_STATIC(0x575630u,575);
}
B480ba5:L480ba5:{c.instructions+=1;NFSU2_TR(0x480ba5);
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
B480ba8:L480ba8:{c.instructions+=3;NFSU2_TR(0x480ba8);
__builtin_memmove((R+0),(R+24),4);
}
B480baa:{NFSU2_TR(0x480baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480bab:{NFSU2_TR(0x480bab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480bb0:L480bb0:{c.instructions+=2;NFSU2_TR(0x480bb0);
u8 U[4];
w4(U+0,u32(0x78be90ull));
s4(u32(r4(R+4)),r4(U+0));
}
B480bb6:{NFSU2_TR(0x480bb6);
TAIL_STATIC(0x479880u,479);
}
B480bc0:L480bc0:{c.instructions+=3;NFSU2_TR(0x480bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480bc1:{NFSU2_TR(0x480bc1);
__builtin_memmove((R+24),(R+4),4);
}
B480bc3:{NFSU2_TR(0x480bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480bc8ull));
TAIL_STATIC(0x46a080u,46a);
}
B480bc8:L480bc8:{c.instructions+=4;NFSU2_TR(0x480bc8);
u8 U[4];
w4(U+0,u32(0x78bee0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B480bce:{NFSU2_TR(0x480bce);
__builtin_memmove((R+0),(R+24),4);
}
B480bd0:{NFSU2_TR(0x480bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480bd1:{NFSU2_TR(0x480bd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480be0:L480be0:{c.instructions+=3;NFSU2_TR(0x480be0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480be1:{NFSU2_TR(0x480be1);
__builtin_memmove((R+24),(R+4),4);
}
B480be3:{NFSU2_TR(0x480be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480be8ull));
{goto L480c00;}
}
B480be8:L480be8:{c.instructions+=2;NFSU2_TR(0x480be8);
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
B480bed:{NFSU2_TR(0x480bed);
if(r1(R+518)){{goto L480bf8;}}
}
B480bef:L480bef:{c.instructions+=2;NFSU2_TR(0x480bef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480bf0:{NFSU2_TR(0x480bf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480bf5ull));
TAIL_STATIC(0x575630u,575);
}
B480bf5:L480bf5:{c.instructions+=1;NFSU2_TR(0x480bf5);
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
B480bf8:L480bf8:{c.instructions+=3;NFSU2_TR(0x480bf8);
__builtin_memmove((R+0),(R+24),4);
}
B480bfa:{NFSU2_TR(0x480bfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480bfb:{NFSU2_TR(0x480bfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480c00:L480c00:{c.instructions+=2;NFSU2_TR(0x480c00);
u8 U[4];
w4(U+0,u32(0x78bee0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B480c06:{NFSU2_TR(0x480c06);
TAIL_STATIC(0x479880u,479);
}
B480c10:L480c10:{c.instructions+=3;NFSU2_TR(0x480c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480c16:{NFSU2_TR(0x480c16);
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
B480c18:{NFSU2_TR(0x480c18);
if(r1(R+518)){{goto L480c1f;}}
}
B480c1a:L480c1a:{c.instructions+=1;NFSU2_TR(0x480c1a);
TAIL_STATIC(0x47af90u,47a);
}
B480c1f:L480c1f:{c.instructions+=1;NFSU2_TR(0x480c1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480c30:L480c30:{c.instructions+=3;NFSU2_TR(0x480c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480c36:{NFSU2_TR(0x480c36);
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
B480c38:{NFSU2_TR(0x480c38);
if(r1(R+518)){{goto L480c46;}}
}
B480c3a:L480c3a:{c.instructions+=4;NFSU2_TR(0x480c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480c3e:{NFSU2_TR(0x480c3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480c3f:{NFSU2_TR(0x480c3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480c41:{NFSU2_TR(0x480c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480c46ull));
TAIL_STATIC(0x47ac50u,47a);
}
B480c46:L480c46:{c.instructions+=1;NFSU2_TR(0x480c46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480c50:L480c50:{c.instructions+=4;NFSU2_TR(0x480c50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480c51:{NFSU2_TR(0x480c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B480c57:{NFSU2_TR(0x480c57);
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
B480c59:{NFSU2_TR(0x480c59);
if(r1(R+518)){{goto L480ca1;}}
}
B480c5b:L480c5b:{c.instructions+=3;NFSU2_TR(0x480c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480c61:{NFSU2_TR(0x480c61);
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
B480c64:{NFSU2_TR(0x480c64);
if(r1(R+518)){{goto L480ca1;}}
}
B480c66:L480c66:{c.instructions+=5;NFSU2_TR(0x480c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480c6c:{NFSU2_TR(0x480c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B480c76:{NFSU2_TR(0x480c76);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B480c7b:{NFSU2_TR(0x480c7b);
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
B480c7d:{NFSU2_TR(0x480c7d);
if(r1(R+518)){{goto L480ca1;}}
}
B480c7f:L480c7f:{c.instructions+=3;NFSU2_TR(0x480c7f);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B480c85:{NFSU2_TR(0x480c85);
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
B480c87:{NFSU2_TR(0x480c87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L480ca1;}}
}
B480c89:L480c89:{c.instructions+=4;NFSU2_TR(0x480c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480c8f:{NFSU2_TR(0x480c8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480c91:{NFSU2_TR(0x480c91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480c92:{NFSU2_TR(0x480c92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480c97ull));
TAIL_STATIC(0x739030u,739);
}
B480c97:L480c97:{c.instructions+=2;NFSU2_TR(0x480c97);
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
B480c9a:{NFSU2_TR(0x480c9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B480ca1:L480ca1:{c.instructions+=2;NFSU2_TR(0x480ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480ca2:{NFSU2_TR(0x480ca2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480cb0:L480cb0:{c.instructions+=4;NFSU2_TR(0x480cb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480cb1:{NFSU2_TR(0x480cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B480cb7:{NFSU2_TR(0x480cb7);
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
B480cb9:{NFSU2_TR(0x480cb9);
if(r1(R+518)){{goto L480d1b;}}
}
B480cbb:L480cbb:{c.instructions+=3;NFSU2_TR(0x480cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480cc1:{NFSU2_TR(0x480cc1);
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
B480cc4:{NFSU2_TR(0x480cc4);
if(r1(R+518)){{goto L480d1b;}}
}
B480cc6:L480cc6:{c.instructions+=3;NFSU2_TR(0x480cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480ccc:{NFSU2_TR(0x480ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B480cd6:{NFSU2_TR(0x480cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480cdbull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B480cdb:L480cdb:{c.instructions+=2;NFSU2_TR(0x480cdb);
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
B480cdd:{NFSU2_TR(0x480cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L480d1b;}}
}
B480cdf:L480cdf:{c.instructions+=3;NFSU2_TR(0x480cdf);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B480ce4:{NFSU2_TR(0x480ce4);
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
B480ce6:{NFSU2_TR(0x480ce6);
if(r1(R+518)){{goto L480d1b;}}
}
B480ce8:L480ce8:{c.instructions+=3;NFSU2_TR(0x480ce8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B480cee:{NFSU2_TR(0x480cee);
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
B480cf0:{NFSU2_TR(0x480cf0);
if(r1(R+518)){{goto L480d1b;}}
}
B480cf2:L480cf2:{c.instructions+=4;NFSU2_TR(0x480cf2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480cf4:{NFSU2_TR(0x480cf4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480cf6:{NFSU2_TR(0x480cf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B480cf9:{NFSU2_TR(0x480cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480cfeull));
TAIL_STATIC(0x46c800u,46c);
}
B480cfe:L480cfe:{c.instructions+=5;NFSU2_TR(0x480cfe);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B480d03:{NFSU2_TR(0x480d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480d09:{NFSU2_TR(0x480d09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480d0b:{NFSU2_TR(0x480d0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480d0c:{NFSU2_TR(0x480d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480d11ull));
TAIL_STATIC(0x739030u,739);
}
B480d11:L480d11:{c.instructions+=2;NFSU2_TR(0x480d11);
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
B480d14:{NFSU2_TR(0x480d14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B480d1b:L480d1b:{c.instructions+=2;NFSU2_TR(0x480d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480d1c:{NFSU2_TR(0x480d1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480d20:L480d20:{c.instructions+=7;NFSU2_TR(0x480d20);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B480d25:{NFSU2_TR(0x480d25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480d26:{NFSU2_TR(0x480d26);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B480d28:{NFSU2_TR(0x480d28);
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
B480d2a:{NFSU2_TR(0x480d2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480d2b:{NFSU2_TR(0x480d2b);
__builtin_memmove((R+20),(R+4),4);
}
B480d2d:{NFSU2_TR(0x480d2d);
if(r1(R+518)){{goto L480e50;}}
}
B480d33:L480d33:{c.instructions+=3;NFSU2_TR(0x480d33);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B480d39:{NFSU2_TR(0x480d39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480d3b:{NFSU2_TR(0x480d3b);
if(r1(R+518)){{goto L480d42;}}
}
B480d3d:L480d3d:{c.instructions+=1;NFSU2_TR(0x480d3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480d42ull));
TAIL_STATIC(0x46c860u,46c);
}
B480d42:L480d42:{c.instructions+=3;NFSU2_TR(0x480d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480d48:{NFSU2_TR(0x480d48);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480d4a:{NFSU2_TR(0x480d4a);
if(r1(R+518)){{goto L480d8a;}}
}
B480d4c:L480d4c:{c.instructions+=3;NFSU2_TR(0x480d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480d52:{NFSU2_TR(0x480d52);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480d55:{NFSU2_TR(0x480d55);
if(r1(R+518)){{goto L480d8a;}}
}
B480d57:L480d57:{c.instructions+=4;NFSU2_TR(0x480d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480d5d:{NFSU2_TR(0x480d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B480d67:{NFSU2_TR(0x480d67);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b974),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480d6d:{NFSU2_TR(0x480d6d);
if(r1(R+518)){{goto L480d8a;}}
}
B480d6f:L480d6f:{c.instructions+=5;NFSU2_TR(0x480d6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B480d76:{NFSU2_TR(0x480d76);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B480d7b:{NFSU2_TR(0x480d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480d81:{NFSU2_TR(0x480d81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480d82:{NFSU2_TR(0x480d82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480d87ull));
TAIL_STATIC(0x739320u,739);
}
B480d87:L480d87:{c.instructions+=1;NFSU2_TR(0x480d87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480d8a:L480d8a:{c.instructions+=4;NFSU2_TR(0x480d8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480d8b:{NFSU2_TR(0x480d8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480d8c:{NFSU2_TR(0x480d8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480d92:{NFSU2_TR(0x480d92);
w4(R+28,u32(0x9ull));
}
B480d97:L480d97:{c.instructions+=3;NFSU2_TR(0x480d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B480d99:{NFSU2_TR(0x480d99);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B480d9b:{NFSU2_TR(0x480d9b);
if(r1(R+518)){{goto L480da2;}}
}
B480d9d:L480d9d:{c.instructions+=2;NFSU2_TR(0x480d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480d9f:{NFSU2_TR(0x480d9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480da2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480da2:L480da2:{c.instructions+=3;NFSU2_TR(0x480da2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B480da5:{NFSU2_TR(0x480da5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B480da6:{NFSU2_TR(0x480da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480d97u);}goto L480d97;}}
}
B480da8:L480da8:{c.instructions+=3;NFSU2_TR(0x480da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480dae:{NFSU2_TR(0x480dae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480db0:{NFSU2_TR(0x480db0);
if(r1(R+518)){{goto L480db7;}}
}
B480db2:L480db2:{c.instructions+=1;NFSU2_TR(0x480db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480db7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480b10u);}goto L480b10;}
}
B480db7:L480db7:{c.instructions+=3;NFSU2_TR(0x480db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480dba:{NFSU2_TR(0x480dba);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B480dbc:{NFSU2_TR(0x480dbc);
if(r1(R+518)){{goto L480dc7;}}
}
B480dbe:L480dbe:{c.instructions+=3;NFSU2_TR(0x480dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480dc0:{NFSU2_TR(0x480dc0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480dc2:{NFSU2_TR(0x480dc2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480dc4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B480dc4:L480dc4:{c.instructions+=1;NFSU2_TR(0x480dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480dc7:L480dc7:{c.instructions+=3;NFSU2_TR(0x480dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480dca:{NFSU2_TR(0x480dca);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B480dcc:{NFSU2_TR(0x480dcc);
if(r1(R+518)){{goto L480dd7;}}
}
B480dce:L480dce:{c.instructions+=3;NFSU2_TR(0x480dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480dd0:{NFSU2_TR(0x480dd0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480dd2:{NFSU2_TR(0x480dd2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480dd4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B480dd4:L480dd4:{c.instructions+=1;NFSU2_TR(0x480dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480dd7:L480dd7:{c.instructions+=4;NFSU2_TR(0x480dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480dda:{NFSU2_TR(0x480dda);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B480ddc:{NFSU2_TR(0x480ddc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480dde:{NFSU2_TR(0x480dde);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480e47;}}
}
B480de0:L480de0:{c.instructions+=3;NFSU2_TR(0x480de0);
w4(R+24,u32(0x82b0b0ull));
}
B480de5:{NFSU2_TR(0x480de5);
w4(R+12,u32(0x6ull));
}
B480dea:{NFSU2_TR(0x480dea);
__builtin_memmove((R+12),(R+12),4);
}
B480df0:L480df0:{c.instructions+=2;NFSU2_TR(0x480df0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B480df4:{NFSU2_TR(0x480df4);
if(r1(R+518)){{goto L480e3c;}}
}
B480df6:L480df6:{c.instructions+=5;NFSU2_TR(0x480df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B480df9:{NFSU2_TR(0x480df9);
__builtin_memmove(gp(0x82b920),(R+0),4);
}
B480dfe:{NFSU2_TR(0x480dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480e01:{NFSU2_TR(0x480e01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480e02:{NFSU2_TR(0x480e02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480e07ull));
TAIL_STATIC(0x7211abu,721);
}
B480e07:L480e07:{c.instructions+=4;NFSU2_TR(0x480e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480e09:{NFSU2_TR(0x480e09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480e0c:{NFSU2_TR(0x480e0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480e0e:{NFSU2_TR(0x480e0e);
if(r1(R+518)){{goto L480e22;}}
}
B480e10:L480e10:{c.instructions+=3;NFSU2_TR(0x480e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480e13:{NFSU2_TR(0x480e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480e14:{NFSU2_TR(0x480e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480e19ull));
TAIL_STATIC(0x440540u,440);
}
B480e19:L480e19:{c.instructions+=2;NFSU2_TR(0x480e19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480e1c:{NFSU2_TR(0x480e1c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B480e22:L480e22:{c.instructions+=3;NFSU2_TR(0x480e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480e25:{NFSU2_TR(0x480e25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480e27:{NFSU2_TR(0x480e27);
if(r1(R+518)){{goto L480e3c;}}
}
B480e29:L480e29:{c.instructions+=3;NFSU2_TR(0x480e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480e2c:{NFSU2_TR(0x480e2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480e2d:{NFSU2_TR(0x480e2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480e32ull));
TAIL_STATIC(0x440540u,440);
}
B480e32:L480e32:{c.instructions+=2;NFSU2_TR(0x480e32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480e35:{NFSU2_TR(0x480e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B480e3c:L480e3c:{c.instructions+=5;NFSU2_TR(0x480e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480e3f:{NFSU2_TR(0x480e3f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B480e40:{NFSU2_TR(0x480e40);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cull))));
}
B480e43:{NFSU2_TR(0x480e43);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B480e45:{NFSU2_TR(0x480e45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480df0u);}goto L480df0;}}
}
B480e47:L480e47:{c.instructions+=5;NFSU2_TR(0x480e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480e48:{NFSU2_TR(0x480e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480e49:{NFSU2_TR(0x480e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B480e4a:{NFSU2_TR(0x480e4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480e4b:{NFSU2_TR(0x480e4b);
TAIL_STATIC(0x6f56bdu,6f5);
}
B480e50:L480e50:{c.instructions+=3;NFSU2_TR(0x480e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B480e51:{NFSU2_TR(0x480e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B480e52:{NFSU2_TR(0x480e52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480e60:L480e60:{c.instructions+=7;NFSU2_TR(0x480e60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480e61:{NFSU2_TR(0x480e61);
__builtin_memmove((R+24),(R+4),4);
}
B480e63:{NFSU2_TR(0x480e63);
s1(0x82b90c,u8(0x0ull));
}
B480e6a:{NFSU2_TR(0x480e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480e6d:{NFSU2_TR(0x480e6d);
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
B480e6f:{NFSU2_TR(0x480e6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480e70:{NFSU2_TR(0x480e70);
if(r1(R+518)){{goto L480e77;}}
}
B480e72:L480e72:{c.instructions+=2;NFSU2_TR(0x480e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480e74:{NFSU2_TR(0x480e74);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480e77ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480e77:L480e77:{c.instructions+=3;NFSU2_TR(0x480e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480e7d:{NFSU2_TR(0x480e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B480e7f:{NFSU2_TR(0x480e7f);
if(r1(R+518)){{goto L480e86;}}
}
B480e81:L480e81:{c.instructions+=1;NFSU2_TR(0x480e81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480e86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480b10u);}goto L480b10;}
}
B480e86:L480e86:{c.instructions+=2;NFSU2_TR(0x480e86);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xacull))));
}
B480e8c:{NFSU2_TR(0x480e8c);
w4(R+28,u32(0x8ull));
}
B480e91:L480e91:{c.instructions+=3;NFSU2_TR(0x480e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B480e93:{NFSU2_TR(0x480e93);
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
B480e95:{NFSU2_TR(0x480e95);
if(r1(R+518)){{goto L480e9c;}}
}
B480e97:L480e97:{c.instructions+=2;NFSU2_TR(0x480e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480e99:{NFSU2_TR(0x480e99);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480e9cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480e9c:L480e9c:{c.instructions+=3;NFSU2_TR(0x480e9c);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B480e9f:{NFSU2_TR(0x480e9f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B480ea0:{NFSU2_TR(0x480ea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480e91u);}goto L480e91;}}
}
B480ea2:L480ea2:{c.instructions+=3;NFSU2_TR(0x480ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480ea3:{NFSU2_TR(0x480ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480ea4:{NFSU2_TR(0x480ea4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B480eb0:L480eb0:{c.instructions+=7;NFSU2_TR(0x480eb0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B480eb5:{NFSU2_TR(0x480eb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480eb6:{NFSU2_TR(0x480eb6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B480eb8:{NFSU2_TR(0x480eb8);
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
B480eba:{NFSU2_TR(0x480eba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480ebb:{NFSU2_TR(0x480ebb);
__builtin_memmove((R+20),(R+4),4);
}
B480ebd:{NFSU2_TR(0x480ebd);
if(r1(R+518)){TAIL_STATIC(0x481076u,481);}
}
B480ec3:L480ec3:{c.instructions+=4;NFSU2_TR(0x480ec3);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B480ec9:{NFSU2_TR(0x480ec9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480ecb:{NFSU2_TR(0x480ecb);
__builtin_memmove(gp(0x82b90c),(R+12),1);
}
B480ed1:{NFSU2_TR(0x480ed1);
if(r1(R+518)){{goto L480ed8;}}
}
B480ed3:L480ed3:{c.instructions+=1;NFSU2_TR(0x480ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480ed8ull));
TAIL_STATIC(0x46c860u,46c);
}
B480ed8:L480ed8:{c.instructions+=5;NFSU2_TR(0x480ed8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480ed9:{NFSU2_TR(0x480ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B480edf:{NFSU2_TR(0x480edf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480ee1:{NFSU2_TR(0x480ee1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480ee2:{NFSU2_TR(0x480ee2);
if(r1(R+518)){{goto L480f3b;}}
}
B480ee4:L480ee4:{c.instructions+=3;NFSU2_TR(0x480ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480eea:{NFSU2_TR(0x480eea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480eed:{NFSU2_TR(0x480eed);
if(r1(R+518)){{goto L480f3b;}}
}
B480eef:L480eef:{c.instructions+=5;NFSU2_TR(0x480eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480ef5:{NFSU2_TR(0x480ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B480eff:{NFSU2_TR(0x480eff);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B480f04:{NFSU2_TR(0x480f04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480f06:{NFSU2_TR(0x480f06);
if(r1(R+518)){{goto L480f3b;}}
}
B480f08:L480f08:{c.instructions+=2;NFSU2_TR(0x480f08);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B480f0f:{NFSU2_TR(0x480f0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L480f2c;}}
}
B480f11:L480f11:{c.instructions+=4;NFSU2_TR(0x480f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480f17:{NFSU2_TR(0x480f17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480f18:{NFSU2_TR(0x480f18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480f19:{NFSU2_TR(0x480f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f1eull));
TAIL_STATIC(0x739030u,739);
}
B480f1e:L480f1e:{c.instructions+=3;NFSU2_TR(0x480f1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B480f24:{NFSU2_TR(0x480f24);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B480f29:{NFSU2_TR(0x480f29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B480f2c:L480f2c:{c.instructions+=3;NFSU2_TR(0x480f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480f32:{NFSU2_TR(0x480f32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480f33:{NFSU2_TR(0x480f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f38ull));
TAIL_STATIC(0x739320u,739);
}
B480f38:L480f38:{c.instructions+=1;NFSU2_TR(0x480f38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480f3b:L480f3b:{c.instructions+=1;NFSU2_TR(0x480f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f40ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B480f40:L480f40:{c.instructions+=3;NFSU2_TR(0x480f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480f46:{NFSU2_TR(0x480f46);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B480f48:{NFSU2_TR(0x480f48);
if(r1(R+518)){{goto L480f4f;}}
}
B480f4a:L480f4a:{c.instructions+=1;NFSU2_TR(0x480f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480b10u);}goto L480b10;}
}
B480f4f:L480f4f:{c.instructions+=3;NFSU2_TR(0x480f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480f52:{NFSU2_TR(0x480f52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B480f54:{NFSU2_TR(0x480f54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f57ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480f57:L480f57:{c.instructions+=3;NFSU2_TR(0x480f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480f5d:{NFSU2_TR(0x480f5d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B480f5f:{NFSU2_TR(0x480f5f);
if(r1(R+518)){{goto L480f66;}}
}
B480f61:L480f61:{c.instructions+=2;NFSU2_TR(0x480f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480f63:{NFSU2_TR(0x480f63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f66ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B480f66:L480f66:{c.instructions+=4;NFSU2_TR(0x480f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480f69:{NFSU2_TR(0x480f69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B480f6b:{NFSU2_TR(0x480f6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480f6d:{NFSU2_TR(0x480f6d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L480fc5;}}
}
B480f6f:L480f6f:{c.instructions+=1;NFSU2_TR(0x480f6f);
w4(R+24,u32(0x82b0b0ull));
}
B480f74:L480f74:{c.instructions+=3;NFSU2_TR(0x480f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480f77:{NFSU2_TR(0x480f77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480f7a:{NFSU2_TR(0x480f7a);
if(r1(R+518)){{goto L480fba;}}
}
B480f7c:L480f7c:{c.instructions+=5;NFSU2_TR(0x480f7c);
__builtin_memmove((R+8),(R+0),4);
}
B480f7e:{NFSU2_TR(0x480f7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B480f81:{NFSU2_TR(0x480f81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480f82:{NFSU2_TR(0x480f82);
__builtin_memmove(gp(0x82b920),(R+4),4);
}
B480f88:{NFSU2_TR(0x480f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f8dull));
TAIL_STATIC(0x7211abu,721);
}
B480f8d:L480f8d:{c.instructions+=4;NFSU2_TR(0x480f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B480f8f:{NFSU2_TR(0x480f8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480f92:{NFSU2_TR(0x480f92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480f94:{NFSU2_TR(0x480f94);
if(r1(R+518)){{goto L480fa4;}}
}
B480f96:L480f96:{c.instructions+=3;NFSU2_TR(0x480f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480f99:{NFSU2_TR(0x480f99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480f9a:{NFSU2_TR(0x480f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480f9full));
TAIL_STATIC(0x440540u,440);
}
B480f9f:L480f9f:{c.instructions+=2;NFSU2_TR(0x480f9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480fa2:{NFSU2_TR(0x480fa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B480fa4:L480fa4:{c.instructions+=3;NFSU2_TR(0x480fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480fa7:{NFSU2_TR(0x480fa7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480fa9:{NFSU2_TR(0x480fa9);
if(r1(R+518)){{goto L480fba;}}
}
B480fab:L480fab:{c.instructions+=3;NFSU2_TR(0x480fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B480fae:{NFSU2_TR(0x480fae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480faf:{NFSU2_TR(0x480faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480fb4ull));
TAIL_STATIC(0x440540u,440);
}
B480fb4:L480fb4:{c.instructions+=2;NFSU2_TR(0x480fb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480fb7:{NFSU2_TR(0x480fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480fba:L480fba:{c.instructions+=5;NFSU2_TR(0x480fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480fbd:{NFSU2_TR(0x480fbd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B480fbe:{NFSU2_TR(0x480fbe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cull))));
}
B480fc1:{NFSU2_TR(0x480fc1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B480fc3:{NFSU2_TR(0x480fc3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480f74u);}goto L480f74;}}
}
B480fc5:L480fc5:{c.instructions+=3;NFSU2_TR(0x480fc5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B480fc7:{NFSU2_TR(0x480fc7);
w4(R+4,u32(0x6ull));
}
B480fcc:{NFSU2_TR(0x480fcc);
w4(R+28,u32(0x82a5a0ull));
}
B480fd1:L480fd1:{c.instructions+=1;NFSU2_TR(0x480fd1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L480fd3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x480fd1u);}goto L480fd1;}
}
B480fd3:L480fd3:{c.instructions+=6;NFSU2_TR(0x480fd3);
s4(0x7ed928,u32(0x82a5a0ull));
}
B480fdd:{NFSU2_TR(0x480fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480fe3:{NFSU2_TR(0x480fe3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B480fe5:{NFSU2_TR(0x480fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B480fe6:{NFSU2_TR(0x480fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B480fe7:{NFSU2_TR(0x480fe7);
if(r1(R+518)){{goto L480ff8;}}
}
B480fe9:L480fe9:{c.instructions+=2;NFSU2_TR(0x480fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B480fea:{NFSU2_TR(0x480fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x480fefull));
TAIL_STATIC(0x440540u,440);
}
B480fef:L480fef:{c.instructions+=2;NFSU2_TR(0x480fef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B480ff2:{NFSU2_TR(0x480ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B480ff8:L480ff8:{c.instructions+=2;NFSU2_TR(0x480ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B480ffe:{NFSU2_TR(0x480ffe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x481000u,481);
}
XIT:NFSU2_TR_EXIT(0x480,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
