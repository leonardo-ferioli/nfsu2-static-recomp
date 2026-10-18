#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_536(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x542,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x542,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_542(u8* __restrict R,Cpu& c);
u32 page_542(Cpu& c){return body_542(c.regs.data(),c);}
__attribute__((noinline)) u32 body_542(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x542003:goto L542003;
case 0x542005:c.instructions+=10;goto B542005;
case 0x542006:c.instructions+=9;goto B542006;
case 0x542009:c.instructions+=8;goto B542009;
case 0x54200a:c.instructions+=7;goto B54200a;
case 0x54200d:c.instructions+=6;goto B54200d;
case 0x54200e:c.instructions+=5;goto B54200e;
case 0x542011:c.instructions+=4;goto B542011;
case 0x542012:c.instructions+=3;goto B542012;
case 0x542015:c.instructions+=2;goto B542015;
case 0x542016:c.instructions+=1;goto B542016;
case 0x542019:goto L542019;
case 0x54201c:c.instructions+=2;goto B54201c;
case 0x54201f:c.instructions+=1;goto B54201f;
case 0x542025:goto L542025;
case 0x54202b:goto L54202b;
case 0x54202d:c.instructions+=1;goto B54202d;
case 0x54202f:goto L54202f;
case 0x542032:c.instructions+=1;goto B542032;
case 0x542034:goto L542034;
case 0x542037:c.instructions+=1;goto B542037;
case 0x54203d:goto L54203d;
case 0x542040:c.instructions+=10;goto B542040;
case 0x542046:c.instructions+=9;goto B542046;
case 0x542048:c.instructions+=8;goto B542048;
case 0x542049:c.instructions+=7;goto B542049;
case 0x54204c:c.instructions+=6;goto B54204c;
case 0x54204d:c.instructions+=5;goto B54204d;
case 0x542050:c.instructions+=4;goto B542050;
case 0x542051:c.instructions+=3;goto B542051;
case 0x542054:c.instructions+=2;goto B542054;
case 0x542055:c.instructions+=1;goto B542055;
case 0x542058:goto L542058;
case 0x54205d:goto L54205d;
case 0x542060:c.instructions+=2;goto B542060;
case 0x542065:c.instructions+=1;goto B542065;
case 0x542067:goto L542067;
case 0x54206c:c.instructions+=1;goto B54206c;
case 0x542072:goto L542072;
case 0x542076:c.instructions+=1;goto B542076;
case 0x54207b:goto L54207b;
case 0x54207f:c.instructions+=1;goto B54207f;
case 0x542084:goto L542084;
case 0x54208a:c.instructions+=2;goto B54208a;
case 0x54208c:c.instructions+=1;goto B54208c;
case 0x542092:goto L542092;
case 0x542095:c.instructions+=4;goto B542095;
case 0x542097:c.instructions+=3;goto B542097;
case 0x54209a:c.instructions+=2;goto B54209a;
case 0x54209d:c.instructions+=1;goto B54209d;
case 0x54209f:goto L54209f;
case 0x5420a0:goto L5420a0;
case 0x5420a3:c.instructions+=1;goto B5420a3;
case 0x5420a5:goto L5420a5;
case 0x5420a8:c.instructions+=2;goto B5420a8;
case 0x5420aa:c.instructions+=1;goto B5420aa;
case 0x5420ac:goto L5420ac;
case 0x5420ae:goto L5420ae;
case 0x5420b0:c.instructions+=1;goto B5420b0;
case 0x5420b2:goto L5420b2;
case 0x5420b6:c.instructions+=5;goto B5420b6;
case 0x5420b7:c.instructions+=4;goto B5420b7;
case 0x5420b8:c.instructions+=3;goto B5420b8;
case 0x5420ba:c.instructions+=2;goto B5420ba;
case 0x5420bb:c.instructions+=1;goto B5420bb;
case 0x5420c0:goto L5420c0;
case 0x5420c3:c.instructions+=3;goto B5420c3;
case 0x5420c5:c.instructions+=2;goto B5420c5;
case 0x5420c7:c.instructions+=1;goto B5420c7;
case 0x5420c9:goto L5420c9;
case 0x5420cc:c.instructions+=3;goto B5420cc;
case 0x5420cf:c.instructions+=2;goto B5420cf;
case 0x5420d3:c.instructions+=1;goto B5420d3;
case 0x5420d5:goto L5420d5;
case 0x5420d7:c.instructions+=1;goto B5420d7;
case 0x5420d9:goto L5420d9;
case 0x5420da:c.instructions+=3;goto B5420da;
case 0x5420dd:c.instructions+=2;goto B5420dd;
case 0x5420df:c.instructions+=1;goto B5420df;
case 0x5420e1:goto L5420e1;
case 0x5420e3:goto L5420e3;
case 0x5420e6:c.instructions+=4;goto B5420e6;
case 0x5420e8:c.instructions+=3;goto B5420e8;
case 0x5420ea:c.instructions+=2;goto B5420ea;
case 0x5420ec:c.instructions+=1;goto B5420ec;
case 0x5420ee:goto L5420ee;
case 0x5420f1:c.instructions+=4;goto B5420f1;
case 0x5420f3:c.instructions+=3;goto B5420f3;
case 0x5420f5:c.instructions+=2;goto B5420f5;
case 0x5420f9:c.instructions+=1;goto B5420f9;
case 0x5420fb:goto L5420fb;
case 0x542100:goto L542100;
case 0x542103:c.instructions+=9;goto B542103;
case 0x542107:c.instructions+=8;goto B542107;
case 0x54210a:c.instructions+=7;goto B54210a;
case 0x54210b:c.instructions+=6;goto B54210b;
case 0x54210e:c.instructions+=5;goto B54210e;
case 0x54210f:c.instructions+=4;goto B54210f;
case 0x542113:c.instructions+=3;goto B542113;
case 0x542114:c.instructions+=2;goto B542114;
case 0x542115:c.instructions+=1;goto B542115;
case 0x54211a:goto L54211a;
case 0x54211e:c.instructions+=3;goto B54211e;
case 0x54211f:c.instructions+=2;goto B54211f;
case 0x542121:c.instructions+=1;goto B542121;
case 0x542123:goto L542123;
case 0x542126:c.instructions+=2;goto B542126;
case 0x542128:c.instructions+=1;goto B542128;
case 0x54212e:goto L54212e;
case 0x542133:goto L542133;
case 0x542139:c.instructions+=2;goto B542139;
case 0x54213b:c.instructions+=1;goto B54213b;
case 0x542141:goto L542141;
case 0x542144:goto L542144;
case 0x542146:c.instructions+=1;goto B542146;
case 0x542148:goto L542148;
case 0x54214b:c.instructions+=2;goto B54214b;
case 0x54214d:c.instructions+=1;goto B54214d;
case 0x54214f:goto L54214f;
case 0x542154:goto L542154;
case 0x542156:c.instructions+=1;goto B542156;
case 0x54215c:goto L54215c;
case 0x54215f:c.instructions+=4;goto B54215f;
case 0x542161:c.instructions+=3;goto B542161;
case 0x542164:c.instructions+=2;goto B542164;
case 0x542167:c.instructions+=1;goto B542167;
case 0x542169:goto L542169;
case 0x542170:goto L542170;
case 0x542173:c.instructions+=1;goto B542173;
case 0x542175:goto L542175;
case 0x542178:c.instructions+=2;goto B542178;
case 0x54217a:c.instructions+=1;goto B54217a;
case 0x54217c:goto L54217c;
case 0x54217e:goto L54217e;
case 0x542180:c.instructions+=1;goto B542180;
case 0x542182:goto L542182;
case 0x542183:c.instructions+=5;goto B542183;
case 0x542184:c.instructions+=4;goto B542184;
case 0x542186:c.instructions+=3;goto B542186;
case 0x542187:c.instructions+=2;goto B542187;
case 0x542189:c.instructions+=1;goto B542189;
case 0x54218e:goto L54218e;
case 0x542191:c.instructions+=3;goto B542191;
case 0x542193:c.instructions+=2;goto B542193;
case 0x542195:c.instructions+=1;goto B542195;
case 0x54219b:goto L54219b;
case 0x54219e:c.instructions+=3;goto B54219e;
case 0x5421a1:c.instructions+=2;goto B5421a1;
case 0x5421a5:c.instructions+=1;goto B5421a5;
case 0x5421a7:goto L5421a7;
case 0x5421a9:c.instructions+=1;goto B5421a9;
case 0x5421ab:goto L5421ab;
case 0x5421ac:c.instructions+=3;goto B5421ac;
case 0x5421af:c.instructions+=2;goto B5421af;
case 0x5421b1:c.instructions+=1;goto B5421b1;
case 0x5421b3:goto L5421b3;
case 0x5421b8:goto L5421b8;
case 0x5421bb:c.instructions+=4;goto B5421bb;
case 0x5421bd:c.instructions+=3;goto B5421bd;
case 0x5421bf:c.instructions+=2;goto B5421bf;
case 0x5421c1:c.instructions+=1;goto B5421c1;
case 0x5421c7:goto L5421c7;
case 0x5421ca:c.instructions+=4;goto B5421ca;
case 0x5421cc:c.instructions+=3;goto B5421cc;
case 0x5421ce:c.instructions+=2;goto B5421ce;
case 0x5421d2:c.instructions+=1;goto B5421d2;
case 0x5421d8:goto L5421d8;
case 0x5421e0:goto L5421e0;
case 0x5421e3:c.instructions+=9;goto B5421e3;
case 0x5421e7:c.instructions+=8;goto B5421e7;
case 0x5421ea:c.instructions+=7;goto B5421ea;
case 0x5421eb:c.instructions+=6;goto B5421eb;
case 0x5421ee:c.instructions+=5;goto B5421ee;
case 0x5421ef:c.instructions+=4;goto B5421ef;
case 0x5421f0:c.instructions+=3;goto B5421f0;
case 0x5421f1:c.instructions+=2;goto B5421f1;
case 0x5421f5:c.instructions+=1;goto B5421f5;
case 0x5421fa:goto L5421fa;
case 0x5421fe:c.instructions+=3;goto B5421fe;
case 0x5421ff:c.instructions+=2;goto B5421ff;
case 0x542201:c.instructions+=1;goto B542201;
case 0x542203:goto L542203;
case 0x542208:goto L542208;
case 0x54220b:c.instructions+=1;goto B54220b;
case 0x542211:goto L542211;
case 0x542214:c.instructions+=1;goto B542214;
case 0x542216:goto L542216;
case 0x542219:c.instructions+=1;goto B542219;
case 0x54221b:goto L54221b;
case 0x54221e:c.instructions+=8;goto B54221e;
case 0x542221:c.instructions+=7;goto B542221;
case 0x542222:c.instructions+=6;goto B542222;
case 0x542225:c.instructions+=5;goto B542225;
case 0x542226:c.instructions+=4;goto B542226;
case 0x542227:c.instructions+=3;goto B542227;
case 0x542228:c.instructions+=2;goto B542228;
case 0x54222a:c.instructions+=1;goto B54222a;
case 0x54222f:goto L54222f;
case 0x542234:goto L542234;
case 0x542237:c.instructions+=10;goto B542237;
case 0x54223d:c.instructions+=9;goto B54223d;
case 0x54223f:c.instructions+=8;goto B54223f;
case 0x542240:c.instructions+=7;goto B542240;
case 0x542243:c.instructions+=6;goto B542243;
case 0x542244:c.instructions+=5;goto B542244;
case 0x542247:c.instructions+=4;goto B542247;
case 0x542248:c.instructions+=3;goto B542248;
case 0x54224b:c.instructions+=2;goto B54224b;
case 0x54224c:c.instructions+=1;goto B54224c;
case 0x54224f:goto L54224f;
case 0x542251:goto L542251;
case 0x542255:c.instructions+=3;goto B542255;
case 0x54225b:c.instructions+=2;goto B54225b;
case 0x54225d:c.instructions+=1;goto B54225d;
case 0x54225f:goto L54225f;
case 0x542261:goto L542261;
case 0x542264:c.instructions+=4;goto B542264;
case 0x542266:c.instructions+=3;goto B542266;
case 0x542269:c.instructions+=2;goto B542269;
case 0x54226c:c.instructions+=1;goto B54226c;
case 0x54226e:goto L54226e;
case 0x542270:goto L542270;
case 0x542273:c.instructions+=1;goto B542273;
case 0x542275:goto L542275;
case 0x542278:c.instructions+=2;goto B542278;
case 0x54227a:c.instructions+=1;goto B54227a;
case 0x54227c:goto L54227c;
case 0x54227e:goto L54227e;
case 0x542280:c.instructions+=1;goto B542280;
case 0x542282:goto L542282;
case 0x542283:c.instructions+=5;goto B542283;
case 0x542284:c.instructions+=4;goto B542284;
case 0x542286:c.instructions+=3;goto B542286;
case 0x542287:c.instructions+=2;goto B542287;
case 0x542289:c.instructions+=1;goto B542289;
case 0x54228e:goto L54228e;
case 0x542291:c.instructions+=2;goto B542291;
case 0x542293:c.instructions+=1;goto B542293;
case 0x542295:goto L542295;
case 0x542297:goto L542297;
case 0x54229a:c.instructions+=5;goto B54229a;
case 0x54229d:c.instructions+=4;goto B54229d;
case 0x54229f:c.instructions+=3;goto B54229f;
case 0x5422a2:c.instructions+=2;goto B5422a2;
case 0x5422a5:c.instructions+=1;goto B5422a5;
case 0x5422a7:goto L5422a7;
case 0x5422aa:c.instructions+=1;goto B5422aa;
case 0x5422ac:goto L5422ac;
case 0x5422af:c.instructions+=2;goto B5422af;
case 0x5422b1:c.instructions+=1;goto B5422b1;
case 0x5422b3:goto L5422b3;
case 0x5422b5:goto L5422b5;
case 0x5422b7:c.instructions+=1;goto B5422b7;
case 0x5422b9:goto L5422b9;
case 0x5422ba:c.instructions+=5;goto B5422ba;
case 0x5422bb:c.instructions+=4;goto B5422bb;
case 0x5422bd:c.instructions+=3;goto B5422bd;
case 0x5422be:c.instructions+=2;goto B5422be;
case 0x5422c0:c.instructions+=1;goto B5422c0;
case 0x5422c5:goto L5422c5;
case 0x5422c7:c.instructions+=3;goto B5422c7;
case 0x5422c9:c.instructions+=2;goto B5422c9;
case 0x5422cb:c.instructions+=1;goto B5422cb;
case 0x5422cd:goto L5422cd;
case 0x5422d1:c.instructions+=3;goto B5422d1;
case 0x5422d7:c.instructions+=2;goto B5422d7;
case 0x5422d9:c.instructions+=1;goto B5422d9;
case 0x5422db:goto L5422db;
case 0x5422de:c.instructions+=3;goto B5422de;
case 0x5422e4:c.instructions+=2;goto B5422e4;
case 0x5422ea:c.instructions+=1;goto B5422ea;
case 0x5422ec:goto L5422ec;
case 0x5422ef:c.instructions+=1;goto B5422ef;
case 0x5422f5:goto L5422f5;
case 0x5422f8:c.instructions+=2;goto B5422f8;
case 0x5422fa:c.instructions+=1;goto B5422fa;
case 0x5422fc:goto L5422fc;
case 0x5422ff:c.instructions+=1;goto B5422ff;
case 0x542302:goto L542302;
case 0x542305:c.instructions+=2;goto B542305;
case 0x542307:c.instructions+=1;goto B542307;
case 0x542309:goto L542309;
case 0x54230c:c.instructions+=1;goto B54230c;
case 0x54230f:goto L54230f;
case 0x542314:c.instructions+=7;goto B542314;
case 0x542317:c.instructions+=6;goto B542317;
case 0x54231a:c.instructions+=5;goto B54231a;
case 0x542320:c.instructions+=4;goto B542320;
case 0x542321:c.instructions+=3;goto B542321;
case 0x542323:c.instructions+=2;goto B542323;
case 0x542329:c.instructions+=1;goto B542329;
case 0x54232f:goto L54232f;
case 0x542330:c.instructions+=5;goto B542330;
case 0x542331:c.instructions+=4;goto B542331;
case 0x542332:c.instructions+=3;goto B542332;
case 0x542333:c.instructions+=2;goto B542333;
case 0x542336:c.instructions+=1;goto B542336;
case 0x542340:goto L542340;
case 0x542341:c.instructions+=6;goto B542341;
case 0x542343:c.instructions+=5;goto B542343;
case 0x542346:c.instructions+=4;goto B542346;
case 0x542347:c.instructions+=3;goto B542347;
case 0x542348:c.instructions+=2;goto B542348;
case 0x54234d:c.instructions+=1;goto B54234d;
case 0x542352:goto L542352;
case 0x542355:c.instructions+=3;goto B542355;
case 0x542358:c.instructions+=2;goto B542358;
case 0x54235a:c.instructions+=1;goto B54235a;
case 0x54235c:goto L54235c;
case 0x54235d:c.instructions+=1;goto B54235d;
case 0x542362:goto L542362;
case 0x542368:c.instructions+=3;goto B542368;
case 0x54236b:c.instructions+=2;goto B54236b;
case 0x54236d:c.instructions+=1;goto B54236d;
case 0x54236f:goto L54236f;
case 0x542372:c.instructions+=3;goto B542372;
case 0x542375:c.instructions+=2;goto B542375;
case 0x542376:c.instructions+=1;goto B542376;
case 0x54237b:goto L54237b;
case 0x54237d:c.instructions+=2;goto B54237d;
case 0x54237e:c.instructions+=1;goto B54237e;
case 0x542383:goto L542383;
case 0x542384:c.instructions+=1;goto B542384;
case 0x542390:goto L542390;
case 0x542391:c.instructions+=10;goto B542391;
case 0x542393:c.instructions+=9;goto B542393;
case 0x542396:c.instructions+=8;goto B542396;
case 0x54239c:c.instructions+=7;goto B54239c;
case 0x54239d:c.instructions+=6;goto B54239d;
case 0x54239e:c.instructions+=5;goto B54239e;
case 0x54239f:c.instructions+=4;goto B54239f;
case 0x5423a1:c.instructions+=3;goto B5423a1;
case 0x5423a3:c.instructions+=2;goto B5423a3;
case 0x5423a8:c.instructions+=1;goto B5423a8;
case 0x5423ac:goto L5423ac;
case 0x5423ae:goto L5423ae;
case 0x5423b1:c.instructions+=5;goto B5423b1;
case 0x5423b4:c.instructions+=4;goto B5423b4;
case 0x5423b6:c.instructions+=3;goto B5423b6;
case 0x5423b8:c.instructions+=2;goto B5423b8;
case 0x5423bc:c.instructions+=1;goto B5423bc;
case 0x5423be:goto L5423be;
case 0x5423c1:c.instructions+=1;goto B5423c1;
case 0x5423c3:goto L5423c3;
case 0x5423c5:goto L5423c5;
case 0x5423c7:c.instructions+=1;goto B5423c7;
case 0x5423c9:goto L5423c9;
case 0x5423cc:c.instructions+=1;goto B5423cc;
case 0x5423ce:goto L5423ce;
case 0x5423d0:goto L5423d0;
case 0x5423d2:c.instructions+=1;goto B5423d2;
case 0x5423d4:goto L5423d4;
case 0x5423d9:c.instructions+=1;goto B5423d9;
case 0x5423db:goto L5423db;
case 0x5423de:c.instructions+=2;goto B5423de;
case 0x5423e0:c.instructions+=1;goto B5423e0;
case 0x5423e2:goto L5423e2;
case 0x5423e5:c.instructions+=2;goto B5423e5;
case 0x5423e7:c.instructions+=1;goto B5423e7;
case 0x5423e9:goto L5423e9;
case 0x5423ea:c.instructions+=1;goto B5423ea;
case 0x5423ef:goto L5423ef;
case 0x5423f2:c.instructions+=1;goto B5423f2;
case 0x5423f4:goto L5423f4;
case 0x5423f8:c.instructions+=1;goto B5423f8;
case 0x5423f9:goto L5423f9;
case 0x5423fc:c.instructions+=2;goto B5423fc;
case 0x5423fe:c.instructions+=1;goto B5423fe;
case 0x542400:goto L542400;
case 0x542403:c.instructions+=1;goto B542403;
case 0x542405:goto L542405;
case 0x542407:c.instructions+=4;goto B542407;
case 0x542409:c.instructions+=3;goto B542409;
case 0x54240d:c.instructions+=2;goto B54240d;
case 0x542411:c.instructions+=1;goto B542411;
case 0x542417:goto L542417;
case 0x54241b:c.instructions+=5;goto B54241b;
case 0x54241e:c.instructions+=4;goto B54241e;
case 0x54241f:c.instructions+=3;goto B54241f;
case 0x542420:c.instructions+=2;goto B542420;
case 0x542425:c.instructions+=1;goto B542425;
case 0x54242a:goto L54242a;
case 0x54242d:c.instructions+=3;goto B54242d;
case 0x542430:c.instructions+=2;goto B542430;
case 0x542432:c.instructions+=1;goto B542432;
case 0x542438:goto L542438;
case 0x542439:c.instructions+=1;goto B542439;
case 0x54243e:goto L54243e;
case 0x542443:c.instructions+=5;goto B542443;
case 0x542446:c.instructions+=4;goto B542446;
case 0x542449:c.instructions+=3;goto B542449;
case 0x54244c:c.instructions+=2;goto B54244c;
case 0x54244e:c.instructions+=1;goto B54244e;
case 0x542450:goto L542450;
case 0x542453:c.instructions+=5;goto B542453;
case 0x542457:c.instructions+=4;goto B542457;
case 0x54245a:c.instructions+=3;goto B54245a;
case 0x54245c:c.instructions+=2;goto B54245c;
case 0x542460:c.instructions+=1;goto B542460;
case 0x542462:goto L542462;
case 0x542465:c.instructions+=3;goto B542465;
case 0x542466:c.instructions+=2;goto B542466;
case 0x542467:c.instructions+=1;goto B542467;
case 0x54246c:goto L54246c;
case 0x54246f:c.instructions+=2;goto B54246f;
case 0x542471:c.instructions+=1;goto B542471;
case 0x542473:goto L542473;
case 0x542475:c.instructions+=2;goto B542475;
case 0x542479:c.instructions+=1;goto B542479;
case 0x54247b:goto L54247b;
case 0x54247d:goto L54247d;
case 0x54247e:c.instructions+=2;goto B54247e;
case 0x542483:c.instructions+=1;goto B542483;
case 0x542488:goto L542488;
case 0x54248c:c.instructions+=3;goto B54248c;
case 0x54248f:c.instructions+=2;goto B54248f;
case 0x542490:c.instructions+=1;goto B542490;
case 0x542495:goto L542495;
case 0x542497:c.instructions+=7;goto B542497;
case 0x54249a:c.instructions+=6;goto B54249a;
case 0x54249c:c.instructions+=5;goto B54249c;
case 0x54249f:c.instructions+=4;goto B54249f;
case 0x5424a5:c.instructions+=3;goto B5424a5;
case 0x5424a6:c.instructions+=2;goto B5424a6;
case 0x5424a7:c.instructions+=1;goto B5424a7;
case 0x5424ac:goto L5424ac;
case 0x5424af:goto L5424af;
case 0x5424b2:c.instructions+=2;goto B5424b2;
case 0x5424b4:c.instructions+=1;goto B5424b4;
case 0x5424b6:goto L5424b6;
case 0x5424b8:c.instructions+=2;goto B5424b8;
case 0x5424ba:c.instructions+=1;goto B5424ba;
case 0x5424bc:goto L5424bc;
case 0x5424bf:c.instructions+=6;goto B5424bf;
case 0x5424c0:c.instructions+=5;goto B5424c0;
case 0x5424c1:c.instructions+=4;goto B5424c1;
case 0x5424c3:c.instructions+=3;goto B5424c3;
case 0x5424c8:c.instructions+=2;goto B5424c8;
case 0x5424cb:c.instructions+=1;goto B5424cb;
case 0x5424d0:goto L5424d0;
case 0x5424d3:c.instructions+=3;goto B5424d3;
case 0x5424d6:c.instructions+=2;goto B5424d6;
case 0x5424d8:c.instructions+=1;goto B5424d8;
case 0x5424da:goto L5424da;
case 0x5424dd:c.instructions+=3;goto B5424dd;
case 0x5424de:c.instructions+=2;goto B5424de;
case 0x5424e3:c.instructions+=1;goto B5424e3;
case 0x5424e8:goto L5424e8;
case 0x5424eb:c.instructions+=2;goto B5424eb;
case 0x5424ee:c.instructions+=1;goto B5424ee;
case 0x5424f1:goto L5424f1;
case 0x5424f4:c.instructions+=3;goto B5424f4;
case 0x5424f7:c.instructions+=2;goto B5424f7;
case 0x5424fd:c.instructions+=1;goto B5424fd;
case 0x5424ff:goto L5424ff;
case 0x542502:c.instructions+=2;goto B542502;
case 0x542503:c.instructions+=1;goto B542503;
case 0x542508:goto L542508;
case 0x54250b:c.instructions+=1;goto B54250b;
case 0x542512:goto L542512;
case 0x542516:goto L542516;
case 0x54251a:c.instructions+=4;goto B54251a;
case 0x54251b:c.instructions+=3;goto B54251b;
case 0x54251d:c.instructions+=2;goto B54251d;
case 0x542521:c.instructions+=1;goto B542521;
case 0x542527:goto L542527;
case 0x542528:c.instructions+=5;goto B542528;
case 0x542529:c.instructions+=4;goto B542529;
case 0x54252a:c.instructions+=3;goto B54252a;
case 0x54252c:c.instructions+=2;goto B54252c;
case 0x54252d:c.instructions+=1;goto B54252d;
case 0x542530:goto L542530;
case 0x542531:c.instructions+=3;goto B542531;
case 0x542536:c.instructions+=2;goto B542536;
case 0x542538:c.instructions+=1;goto B542538;
case 0x54253d:goto L54253d;
case 0x542540:c.instructions+=1;goto B542540;
case 0x542545:goto L542545;
case 0x542549:c.instructions+=3;goto B542549;
case 0x54254a:c.instructions+=2;goto B54254a;
case 0x54254c:c.instructions+=1;goto B54254c;
case 0x542551:goto L542551;
case 0x542553:c.instructions+=2;goto B542553;
case 0x542555:c.instructions+=1;goto B542555;
case 0x542557:goto L542557;
case 0x542559:c.instructions+=1;goto B542559;
case 0x54255e:goto L54255e;
case 0x54255f:c.instructions+=2;goto B54255f;
case 0x542564:c.instructions+=1;goto B542564;
case 0x542569:goto L542569;
case 0x54256c:c.instructions+=3;goto B54256c;
case 0x54256e:c.instructions+=2;goto B54256e;
case 0x542575:c.instructions+=1;goto B542575;
case 0x54257a:goto L54257a;
case 0x54257d:c.instructions+=7;goto B54257d;
case 0x542580:c.instructions+=6;goto B542580;
case 0x542582:c.instructions+=5;goto B542582;
case 0x542585:c.instructions+=4;goto B542585;
case 0x542587:c.instructions+=3;goto B542587;
case 0x542589:c.instructions+=2;goto B542589;
case 0x54258b:c.instructions+=1;goto B54258b;
case 0x54258d:goto L54258d;
case 0x542592:c.instructions+=1;goto B542592;
case 0x542597:goto L542597;
case 0x54259a:goto L54259a;
case 0x54259b:c.instructions+=1;goto B54259b;
case 0x5425a0:goto L5425a0;
case 0x5425a1:c.instructions+=4;goto B5425a1;
case 0x5425a5:c.instructions+=3;goto B5425a5;
case 0x5425a7:c.instructions+=2;goto B5425a7;
case 0x5425ac:c.instructions+=1;goto B5425ac;
case 0x5425ae:goto L5425ae;
case 0x5425b3:c.instructions+=1;goto B5425b3;
case 0x5425b5:goto L5425b5;
case 0x5425b7:c.instructions+=2;goto B5425b7;
case 0x5425b8:c.instructions+=1;goto B5425b8;
case 0x5425b9:goto L5425b9;
case 0x5425be:goto L5425be;
case 0x5425c3:c.instructions+=3;goto B5425c3;
case 0x5425c4:c.instructions+=2;goto B5425c4;
case 0x5425c5:c.instructions+=1;goto B5425c5;
case 0x5425ca:goto L5425ca;
case 0x5425cf:c.instructions+=2;goto B5425cf;
case 0x5425d0:c.instructions+=1;goto B5425d0;
case 0x5425e0:goto L5425e0;
case 0x5425e1:c.instructions+=2;goto B5425e1;
case 0x5425e3:c.instructions+=1;goto B5425e3;
case 0x5425e8:goto L5425e8;
case 0x5425ed:c.instructions+=1;goto B5425ed;
case 0x5425ef:goto L5425ef;
case 0x5425f0:c.instructions+=1;goto B5425f0;
case 0x5425f5:goto L5425f5;
case 0x5425f8:goto L5425f8;
case 0x5425fa:c.instructions+=2;goto B5425fa;
case 0x5425fb:c.instructions+=1;goto B5425fb;
case 0x542600:goto L542600;
case 0x542604:c.instructions+=4;goto B542604;
case 0x542608:c.instructions+=3;goto B542608;
case 0x542609:c.instructions+=2;goto B542609;
case 0x54260a:c.instructions+=1;goto B54260a;
case 0x54260f:goto L54260f;
case 0x542612:c.instructions+=2;goto B542612;
case 0x542614:c.instructions+=1;goto B542614;
case 0x542616:goto L542616;
case 0x54261a:c.instructions+=5;goto B54261a;
case 0x54261e:c.instructions+=4;goto B54261e;
case 0x54261f:c.instructions+=3;goto B54261f;
case 0x542620:c.instructions+=2;goto B542620;
case 0x542621:c.instructions+=1;goto B542621;
case 0x542626:goto L542626;
case 0x542629:c.instructions+=1;goto B542629;
case 0x54262a:goto L54262a;
case 0x54262c:c.instructions+=1;goto B54262c;
case 0x542630:goto L542630;
case 0x542634:c.instructions+=4;goto B542634;
case 0x542635:c.instructions+=3;goto B542635;
case 0x542636:c.instructions+=2;goto B542636;
case 0x542637:c.instructions+=1;goto B542637;
case 0x54263c:goto L54263c;
case 0x542640:c.instructions+=4;goto B542640;
case 0x542643:c.instructions+=3;goto B542643;
case 0x542645:c.instructions+=2;goto B542645;
case 0x542647:c.instructions+=1;goto B542647;
case 0x542649:goto L542649;
case 0x54264a:c.instructions+=1;goto B54264a;
case 0x54264f:goto L54264f;
case 0x542652:c.instructions+=2;goto B542652;
case 0x542654:c.instructions+=1;goto B542654;
case 0x542656:goto L542656;
case 0x542657:c.instructions+=2;goto B542657;
case 0x542659:c.instructions+=1;goto B542659;
case 0x54265e:goto L54265e;
case 0x542660:c.instructions+=1;goto B542660;
case 0x542662:goto L542662;
case 0x542667:c.instructions+=2;goto B542667;
case 0x542669:c.instructions+=1;goto B542669;
case 0x54266b:goto L54266b;
case 0x54266e:c.instructions+=3;goto B54266e;
case 0x54266f:c.instructions+=2;goto B54266f;
case 0x542670:c.instructions+=1;goto B542670;
case 0x542675:goto L542675;
case 0x542677:c.instructions+=2;goto B542677;
case 0x542679:c.instructions+=1;goto B542679;
case 0x54267b:goto L54267b;
case 0x542682:c.instructions+=1;goto B542682;
case 0x542684:goto L542684;
case 0x542687:c.instructions+=5;goto B542687;
case 0x54268b:c.instructions+=4;goto B54268b;
case 0x54268e:c.instructions+=3;goto B54268e;
case 0x54268f:c.instructions+=2;goto B54268f;
case 0x542690:c.instructions+=1;goto B542690;
case 0x542695:goto L542695;
case 0x542698:c.instructions+=2;goto B542698;
case 0x54269a:c.instructions+=1;goto B54269a;
case 0x54269c:goto L54269c;
case 0x5426a3:goto L5426a3;
case 0x5426a5:c.instructions+=4;goto B5426a5;
case 0x5426a6:c.instructions+=3;goto B5426a6;
case 0x5426a8:c.instructions+=2;goto B5426a8;
case 0x5426aa:c.instructions+=1;goto B5426aa;
case 0x5426af:goto L5426af;
case 0x5426b0:c.instructions+=2;goto B5426b0;
case 0x5426b1:c.instructions+=1;goto B5426b1;
case 0x5426c0:goto L5426c0;
case 0x5426c4:c.instructions+=4;goto B5426c4;
case 0x5426c5:c.instructions+=3;goto B5426c5;
case 0x5426c6:c.instructions+=2;goto B5426c6;
case 0x5426c7:c.instructions+=1;goto B5426c7;
case 0x5426cc:goto L5426cc;
case 0x5426d0:c.instructions+=4;goto B5426d0;
case 0x5426d3:c.instructions+=3;goto B5426d3;
case 0x5426d5:c.instructions+=2;goto B5426d5;
case 0x5426d7:c.instructions+=1;goto B5426d7;
case 0x5426d9:goto L5426d9;
case 0x5426da:c.instructions+=1;goto B5426da;
case 0x5426df:goto L5426df;
case 0x5426e2:c.instructions+=2;goto B5426e2;
case 0x5426e4:c.instructions+=1;goto B5426e4;
case 0x5426e6:goto L5426e6;
case 0x5426e7:c.instructions+=2;goto B5426e7;
case 0x5426e9:c.instructions+=1;goto B5426e9;
case 0x5426ee:goto L5426ee;
case 0x5426f0:c.instructions+=1;goto B5426f0;
case 0x5426f2:goto L5426f2;
case 0x5426f7:c.instructions+=2;goto B5426f7;
case 0x5426f9:c.instructions+=1;goto B5426f9;
case 0x5426fb:goto L5426fb;
case 0x5426fe:c.instructions+=3;goto B5426fe;
case 0x5426ff:c.instructions+=2;goto B5426ff;
case 0x542700:c.instructions+=1;goto B542700;
case 0x542705:goto L542705;
case 0x542707:goto L542707;
case 0x542709:goto L542709;
case 0x54270d:c.instructions+=5;goto B54270d;
case 0x542711:c.instructions+=4;goto B542711;
case 0x542712:c.instructions+=3;goto B542712;
case 0x542713:c.instructions+=2;goto B542713;
case 0x542714:c.instructions+=1;goto B542714;
case 0x542719:goto L542719;
case 0x54271c:c.instructions+=3;goto B54271c;
case 0x54271d:c.instructions+=2;goto B54271d;
case 0x54271e:c.instructions+=1;goto B54271e;
case 0x542720:goto L542720;
case 0x542721:c.instructions+=6;goto B542721;
case 0x542722:c.instructions+=5;goto B542722;
case 0x542723:c.instructions+=4;goto B542723;
case 0x542724:c.instructions+=3;goto B542724;
case 0x542726:c.instructions+=2;goto B542726;
case 0x542728:c.instructions+=1;goto B542728;
case 0x542730:goto L542730;
case 0x542733:c.instructions+=4;goto B542733;
case 0x542734:c.instructions+=3;goto B542734;
case 0x542739:c.instructions+=2;goto B542739;
case 0x54273d:c.instructions+=1;goto B54273d;
case 0x542742:goto L542742;
case 0x542745:c.instructions+=3;goto B542745;
case 0x542748:c.instructions+=2;goto B542748;
case 0x54274a:c.instructions+=1;goto B54274a;
case 0x542750:goto L542750;
case 0x542757:goto L542757;
case 0x54275e:c.instructions+=1;goto B54275e;
case 0x542760:goto L542760;
case 0x542763:c.instructions+=2;goto B542763;
case 0x542768:c.instructions+=1;goto B542768;
case 0x54276d:goto L54276d;
case 0x54276e:c.instructions+=3;goto B54276e;
case 0x54276f:c.instructions+=2;goto B54276f;
case 0x542770:c.instructions+=1;goto B542770;
case 0x542775:goto L542775;
case 0x542778:c.instructions+=3;goto B542778;
case 0x542779:c.instructions+=2;goto B542779;
case 0x54277a:c.instructions+=1;goto B54277a;
case 0x54277f:goto L54277f;
case 0x542782:c.instructions+=5;goto B542782;
case 0x542784:c.instructions+=4;goto B542784;
case 0x542789:c.instructions+=3;goto B542789;
case 0x54278a:c.instructions+=2;goto B54278a;
case 0x54278b:c.instructions+=1;goto B54278b;
case 0x542790:goto L542790;
case 0x542793:c.instructions+=1;goto B542793;
case 0x542798:goto L542798;
case 0x54279b:c.instructions+=3;goto B54279b;
case 0x54279c:c.instructions+=2;goto B54279c;
case 0x54279d:c.instructions+=1;goto B54279d;
case 0x5427a2:goto L5427a2;
case 0x5427a5:c.instructions+=5;goto B5427a5;
case 0x5427a7:c.instructions+=4;goto B5427a7;
case 0x5427ac:c.instructions+=3;goto B5427ac;
case 0x5427ad:c.instructions+=2;goto B5427ad;
case 0x5427ae:c.instructions+=1;goto B5427ae;
case 0x5427b3:goto L5427b3;
case 0x5427ba:c.instructions+=1;goto B5427ba;
case 0x5427bc:goto L5427bc;
case 0x5427c1:goto L5427c1;
case 0x5427c4:c.instructions+=1;goto B5427c4;
case 0x5427c9:goto L5427c9;
case 0x5427ca:c.instructions+=3;goto B5427ca;
case 0x5427cb:c.instructions+=2;goto B5427cb;
case 0x5427cc:c.instructions+=1;goto B5427cc;
case 0x5427d1:goto L5427d1;
case 0x5427d4:c.instructions+=3;goto B5427d4;
case 0x5427d5:c.instructions+=2;goto B5427d5;
case 0x5427d6:c.instructions+=1;goto B5427d6;
case 0x5427db:goto L5427db;
case 0x5427de:c.instructions+=5;goto B5427de;
case 0x5427e0:c.instructions+=4;goto B5427e0;
case 0x5427e5:c.instructions+=3;goto B5427e5;
case 0x5427e6:c.instructions+=2;goto B5427e6;
case 0x5427e7:c.instructions+=1;goto B5427e7;
case 0x5427ec:goto L5427ec;
case 0x5427ef:c.instructions+=1;goto B5427ef;
case 0x5427f4:goto L5427f4;
case 0x5427f7:c.instructions+=5;goto B5427f7;
case 0x5427f9:c.instructions+=4;goto B5427f9;
case 0x5427fe:c.instructions+=3;goto B5427fe;
case 0x5427ff:c.instructions+=2;goto B5427ff;
case 0x542800:c.instructions+=1;goto B542800;
case 0x542805:goto L542805;
case 0x542808:c.instructions+=3;goto B542808;
case 0x542809:c.instructions+=2;goto B542809;
case 0x54280a:c.instructions+=1;goto B54280a;
case 0x54280f:goto L54280f;
case 0x542811:goto L542811;
case 0x542818:c.instructions+=1;goto B542818;
case 0x54281a:goto L54281a;
case 0x54281d:c.instructions+=2;goto B54281d;
case 0x542822:c.instructions+=1;goto B542822;
case 0x542827:goto L542827;
case 0x542828:c.instructions+=3;goto B542828;
case 0x542829:c.instructions+=2;goto B542829;
case 0x54282a:c.instructions+=1;goto B54282a;
case 0x54282f:goto L54282f;
case 0x542832:c.instructions+=5;goto B542832;
case 0x542834:c.instructions+=4;goto B542834;
case 0x542839:c.instructions+=3;goto B542839;
case 0x54283a:c.instructions+=2;goto B54283a;
case 0x54283b:c.instructions+=1;goto B54283b;
case 0x542840:goto L542840;
case 0x542843:c.instructions+=1;goto B542843;
case 0x542845:goto L542845;
case 0x542848:c.instructions+=5;goto B542848;
case 0x54284a:c.instructions+=4;goto B54284a;
case 0x54284f:c.instructions+=3;goto B54284f;
case 0x542850:c.instructions+=2;goto B542850;
case 0x542851:c.instructions+=1;goto B542851;
case 0x542856:goto L542856;
case 0x542859:c.instructions+=1;goto B542859;
case 0x54285b:goto L54285b;
case 0x542862:c.instructions+=1;goto B542862;
case 0x542864:goto L542864;
case 0x542869:c.instructions+=1;goto B542869;
case 0x54286e:goto L54286e;
case 0x542871:c.instructions+=3;goto B542871;
case 0x542872:c.instructions+=2;goto B542872;
case 0x542873:c.instructions+=1;goto B542873;
case 0x542878:goto L542878;
case 0x54287b:c.instructions+=4;goto B54287b;
case 0x54287d:c.instructions+=3;goto B54287d;
case 0x542882:c.instructions+=2;goto B542882;
case 0x542883:c.instructions+=1;goto B542883;
case 0x542884:goto L542884;
case 0x542889:goto L542889;
case 0x54288c:goto L54288c;
case 0x542890:c.instructions+=2;goto B542890;
case 0x542893:c.instructions+=1;goto B542893;
case 0x542899:goto L542899;
case 0x54289a:c.instructions+=4;goto B54289a;
case 0x54289b:c.instructions+=3;goto B54289b;
case 0x54289c:c.instructions+=2;goto B54289c;
case 0x54289d:c.instructions+=1;goto B54289d;
case 0x5428b0:goto L5428b0;
case 0x5428b4:c.instructions+=4;goto B5428b4;
case 0x5428b9:c.instructions+=3;goto B5428b9;
case 0x5428ba:c.instructions+=2;goto B5428ba;
case 0x5428bc:c.instructions+=1;goto B5428bc;
case 0x5428be:goto L5428be;
case 0x5428c0:c.instructions+=2;goto B5428c0;
case 0x5428c4:c.instructions+=1;goto B5428c4;
case 0x5428c6:goto L5428c6;
case 0x5428cb:c.instructions+=1;goto B5428cb;
case 0x5428d0:goto L5428d0;
case 0x5428d7:c.instructions+=1;goto B5428d7;
case 0x5428d9:goto L5428d9;
case 0x5428db:c.instructions+=1;goto B5428db;
case 0x5428dd:goto L5428dd;
case 0x5428e2:c.instructions+=1;goto B5428e2;
case 0x5428e7:goto L5428e7;
case 0x5428ee:c.instructions+=1;goto B5428ee;
case 0x5428f0:goto L5428f0;
case 0x5428f5:c.instructions+=1;goto B5428f5;
case 0x5428f7:goto L5428f7;
case 0x5428fc:c.instructions+=1;goto B5428fc;
case 0x542901:goto L542901;
case 0x542908:c.instructions+=1;goto B542908;
case 0x54290a:goto L54290a;
case 0x54290f:c.instructions+=1;goto B54290f;
case 0x542914:goto L542914;
case 0x54291b:goto L54291b;
case 0x54291e:c.instructions+=3;goto B54291e;
case 0x542923:c.instructions+=2;goto B542923;
case 0x542924:c.instructions+=1;goto B542924;
case 0x542929:goto L542929;
case 0x54292c:c.instructions+=2;goto B54292c;
case 0x54292d:c.instructions+=1;goto B54292d;
case 0x542930:goto L542930;
case 0x542931:c.instructions+=4;goto B542931;
case 0x542935:c.instructions+=3;goto B542935;
case 0x542938:c.instructions+=2;goto B542938;
case 0x54293a:c.instructions+=1;goto B54293a;
case 0x54293c:goto L54293c;
case 0x54293e:c.instructions+=3;goto B54293e;
case 0x542943:c.instructions+=2;goto B542943;
case 0x542944:c.instructions+=1;goto B542944;
case 0x542949:goto L542949;
case 0x54294c:goto L54294c;
case 0x54294f:c.instructions+=2;goto B54294f;
case 0x542951:c.instructions+=1;goto B542951;
case 0x542953:goto L542953;
case 0x542955:c.instructions+=3;goto B542955;
case 0x54295a:c.instructions+=2;goto B54295a;
case 0x54295b:c.instructions+=1;goto B54295b;
case 0x542960:goto L542960;
case 0x542963:goto L542963;
case 0x542968:c.instructions+=4;goto B542968;
case 0x54296d:c.instructions+=3;goto B54296d;
case 0x542970:c.instructions+=2;goto B542970;
case 0x542971:c.instructions+=1;goto B542971;
case 0x542976:goto L542976;
case 0x542979:c.instructions+=4;goto B542979;
case 0x54297a:c.instructions+=3;goto B54297a;
case 0x542981:c.instructions+=2;goto B542981;
case 0x542982:c.instructions+=1;goto B542982;
case 0x542990:goto L542990;
case 0x542991:c.instructions+=6;goto B542991;
case 0x542992:c.instructions+=5;goto B542992;
case 0x542994:c.instructions+=4;goto B542994;
case 0x542997:c.instructions+=3;goto B542997;
case 0x54299a:c.instructions+=2;goto B54299a;
case 0x54299c:c.instructions+=1;goto B54299c;
case 0x5429a2:goto L5429a2;
case 0x5429a4:c.instructions+=1;goto B5429a4;
case 0x5429a6:goto L5429a6;
case 0x5429a9:c.instructions+=1;goto B5429a9;
case 0x5429ab:goto L5429ab;
case 0x5429ad:goto L5429ad;
case 0x5429ae:c.instructions+=1;goto B5429ae;
case 0x5429b2:goto L5429b2;
case 0x5429b4:c.instructions+=1;goto B5429b4;
case 0x5429b6:goto L5429b6;
case 0x5429b9:c.instructions+=1;goto B5429b9;
case 0x5429bb:goto L5429bb;
case 0x5429bd:goto L5429bd;
case 0x5429bf:c.instructions+=1;goto B5429bf;
case 0x5429c1:goto L5429c1;
case 0x5429c3:c.instructions+=1;goto B5429c3;
case 0x5429c5:goto L5429c5;
case 0x5429c8:c.instructions+=2;goto B5429c8;
case 0x5429ca:c.instructions+=1;goto B5429ca;
case 0x5429cc:goto L5429cc;
case 0x5429cf:c.instructions+=2;goto B5429cf;
case 0x5429d1:c.instructions+=1;goto B5429d1;
case 0x5429d3:goto L5429d3;
case 0x5429d4:c.instructions+=1;goto B5429d4;
case 0x5429d9:goto L5429d9;
case 0x5429dc:goto L5429dc;
case 0x5429df:c.instructions+=2;goto B5429df;
case 0x5429e1:c.instructions+=1;goto B5429e1;
case 0x5429e3:goto L5429e3;
case 0x5429e4:c.instructions+=1;goto B5429e4;
case 0x5429e9:goto L5429e9;
case 0x5429eb:goto L5429eb;
case 0x5429ee:c.instructions+=2;goto B5429ee;
case 0x5429f0:c.instructions+=1;goto B5429f0;
case 0x5429f2:goto L5429f2;
case 0x5429f3:c.instructions+=1;goto B5429f3;
case 0x5429f8:goto L5429f8;
case 0x5429fb:goto L5429fb;
case 0x5429fe:c.instructions+=2;goto B5429fe;
case 0x542a00:c.instructions+=1;goto B542a00;
case 0x542a02:goto L542a02;
case 0x542a03:c.instructions+=1;goto B542a03;
case 0x542a08:goto L542a08;
case 0x542a0b:goto L542a0b;
case 0x542a0e:c.instructions+=2;goto B542a0e;
case 0x542a10:c.instructions+=1;goto B542a10;
case 0x542a12:goto L542a12;
case 0x542a15:c.instructions+=1;goto B542a15;
case 0x542a17:goto L542a17;
case 0x542a19:c.instructions+=1;goto B542a19;
case 0x542a1b:goto L542a1b;
case 0x542a1d:c.instructions+=2;goto B542a1d;
case 0x542a1e:c.instructions+=1;goto B542a1e;
case 0x542a20:goto L542a20;
case 0x542a27:c.instructions+=1;goto B542a27;
case 0x542a29:goto L542a29;
case 0x542a2c:c.instructions+=3;goto B542a2c;
case 0x542a31:c.instructions+=2;goto B542a31;
case 0x542a32:c.instructions+=1;goto B542a32;
case 0x542a37:goto L542a37;
case 0x542a3a:c.instructions+=3;goto B542a3a;
case 0x542a3b:c.instructions+=2;goto B542a3b;
case 0x542a3c:c.instructions+=1;goto B542a3c;
case 0x542a3f:goto L542a3f;
case 0x542a42:c.instructions+=2;goto B542a42;
case 0x542a44:c.instructions+=1;goto B542a44;
case 0x542a46:goto L542a46;
case 0x542a47:c.instructions+=1;goto B542a47;
case 0x542a4c:goto L542a4c;
case 0x542a4f:c.instructions+=2;goto B542a4f;
case 0x542a51:c.instructions+=1;goto B542a51;
case 0x542a53:goto L542a53;
case 0x542a58:c.instructions+=2;goto B542a58;
case 0x542a5a:c.instructions+=1;goto B542a5a;
case 0x542a5f:goto L542a5f;
case 0x542a61:c.instructions+=1;goto B542a61;
case 0x542a63:goto L542a63;
case 0x542a68:c.instructions+=2;goto B542a68;
case 0x542a6a:c.instructions+=1;goto B542a6a;
case 0x542a6c:goto L542a6c;
case 0x542a6f:c.instructions+=3;goto B542a6f;
case 0x542a70:c.instructions+=2;goto B542a70;
case 0x542a75:c.instructions+=1;goto B542a75;
case 0x542a7a:goto L542a7a;
case 0x542a7c:c.instructions+=1;goto B542a7c;
case 0x542a7e:goto L542a7e;
case 0x542a84:c.instructions+=2;goto B542a84;
case 0x542a86:c.instructions+=1;goto B542a86;
case 0x542a88:goto L542a88;
case 0x542a8c:c.instructions+=1;goto B542a8c;
case 0x542a8e:goto L542a8e;
case 0x542a95:goto L542a95;
case 0x542a99:c.instructions+=1;goto B542a99;
case 0x542a9b:goto L542a9b;
case 0x542a9e:c.instructions+=3;goto B542a9e;
case 0x542aa1:c.instructions+=2;goto B542aa1;
case 0x542aa3:c.instructions+=1;goto B542aa3;
case 0x542aa5:goto L542aa5;
case 0x542aa7:goto L542aa7;
case 0x542aa8:c.instructions+=1;goto B542aa8;
case 0x542aad:goto L542aad;
case 0x542ab0:c.instructions+=3;goto B542ab0;
case 0x542ab3:c.instructions+=2;goto B542ab3;
case 0x542ab4:c.instructions+=1;goto B542ab4;
case 0x542ab6:goto L542ab6;
case 0x542ab7:c.instructions+=2;goto B542ab7;
case 0x542ab8:c.instructions+=1;goto B542ab8;
case 0x542ac0:goto L542ac0;
case 0x542ac4:c.instructions+=34;goto B542ac4;
case 0x542ac8:c.instructions+=33;goto B542ac8;
case 0x542acb:c.instructions+=32;goto B542acb;
case 0x542acc:c.instructions+=31;goto B542acc;
case 0x542ace:c.instructions+=30;goto B542ace;
case 0x542acf:c.instructions+=29;goto B542acf;
case 0x542ad1:c.instructions+=28;goto B542ad1;
case 0x542ad5:c.instructions+=27;goto B542ad5;
case 0x542ad7:c.instructions+=26;goto B542ad7;
case 0x542ada:c.instructions+=25;goto B542ada;
case 0x542add:c.instructions+=24;goto B542add;
case 0x542ae0:c.instructions+=23;goto B542ae0;
case 0x542ae3:c.instructions+=22;goto B542ae3;
case 0x542ae6:c.instructions+=21;goto B542ae6;
case 0x542ae9:c.instructions+=20;goto B542ae9;
case 0x542aec:c.instructions+=19;goto B542aec;
case 0x542aef:c.instructions+=18;goto B542aef;
case 0x542af2:c.instructions+=17;goto B542af2;
case 0x542af5:c.instructions+=16;goto B542af5;
case 0x542af8:c.instructions+=15;goto B542af8;
case 0x542afb:c.instructions+=14;goto B542afb;
case 0x542afe:c.instructions+=13;goto B542afe;
case 0x542b01:c.instructions+=12;goto B542b01;
case 0x542b04:c.instructions+=11;goto B542b04;
case 0x542b07:c.instructions+=10;goto B542b07;
case 0x542b08:c.instructions+=9;goto B542b08;
case 0x542b0c:c.instructions+=8;goto B542b0c;
case 0x542b0e:c.instructions+=7;goto B542b0e;
case 0x542b11:c.instructions+=6;goto B542b11;
case 0x542b14:c.instructions+=5;goto B542b14;
case 0x542b17:c.instructions+=4;goto B542b17;
case 0x542b1a:c.instructions+=3;goto B542b1a;
case 0x542b1d:c.instructions+=2;goto B542b1d;
case 0x542b20:c.instructions+=1;goto B542b20;
case 0x542b26:goto L542b26;
case 0x542b27:c.instructions+=7;goto B542b27;
case 0x542b2c:c.instructions+=6;goto B542b2c;
case 0x542b2d:c.instructions+=5;goto B542b2d;
case 0x542b32:c.instructions+=4;goto B542b32;
case 0x542b36:c.instructions+=3;goto B542b36;
case 0x542b38:c.instructions+=2;goto B542b38;
case 0x542b39:c.instructions+=1;goto B542b39;
case 0x542b3e:goto L542b3e;
case 0x542b42:c.instructions+=4;goto B542b42;
case 0x542b46:c.instructions+=3;goto B542b46;
case 0x542b47:c.instructions+=2;goto B542b47;
case 0x542b48:c.instructions+=1;goto B542b48;
case 0x542b4d:goto L542b4d;
case 0x542b52:c.instructions+=7;goto B542b52;
case 0x542b53:c.instructions+=6;goto B542b53;
case 0x542b58:c.instructions+=5;goto B542b58;
case 0x542b5c:c.instructions+=4;goto B542b5c;
case 0x542b5e:c.instructions+=3;goto B542b5e;
case 0x542b5f:c.instructions+=2;goto B542b5f;
case 0x542b62:c.instructions+=1;goto B542b62;
case 0x542b67:goto L542b67;
case 0x542b6b:c.instructions+=3;goto B542b6b;
case 0x542b6c:c.instructions+=2;goto B542b6c;
case 0x542b6d:c.instructions+=1;goto B542b6d;
case 0x542b72:goto L542b72;
case 0x542b77:c.instructions+=7;goto B542b77;
case 0x542b78:c.instructions+=6;goto B542b78;
case 0x542b7d:c.instructions+=5;goto B542b7d;
case 0x542b81:c.instructions+=4;goto B542b81;
case 0x542b83:c.instructions+=3;goto B542b83;
case 0x542b84:c.instructions+=2;goto B542b84;
case 0x542b87:c.instructions+=1;goto B542b87;
case 0x542b8c:goto L542b8c;
case 0x542b8f:c.instructions+=4;goto B542b8f;
case 0x542b93:c.instructions+=3;goto B542b93;
case 0x542b94:c.instructions+=2;goto B542b94;
case 0x542b95:c.instructions+=1;goto B542b95;
case 0x542b9a:goto L542b9a;
case 0x542b9f:c.instructions+=7;goto B542b9f;
case 0x542ba0:c.instructions+=6;goto B542ba0;
case 0x542ba5:c.instructions+=5;goto B542ba5;
case 0x542ba8:c.instructions+=4;goto B542ba8;
case 0x542bac:c.instructions+=3;goto B542bac;
case 0x542bae:c.instructions+=2;goto B542bae;
case 0x542baf:c.instructions+=1;goto B542baf;
case 0x542bb4:goto L542bb4;
case 0x542bb8:c.instructions+=3;goto B542bb8;
case 0x542bb9:c.instructions+=2;goto B542bb9;
case 0x542bba:c.instructions+=1;goto B542bba;
case 0x542bbf:goto L542bbf;
case 0x542bc4:c.instructions+=7;goto B542bc4;
case 0x542bc5:c.instructions+=6;goto B542bc5;
case 0x542bca:c.instructions+=5;goto B542bca;
case 0x542bce:c.instructions+=4;goto B542bce;
case 0x542bd0:c.instructions+=3;goto B542bd0;
case 0x542bd1:c.instructions+=2;goto B542bd1;
case 0x542bd4:c.instructions+=1;goto B542bd4;
case 0x542bd9:goto L542bd9;
case 0x542bdd:c.instructions+=3;goto B542bdd;
case 0x542bde:c.instructions+=2;goto B542bde;
case 0x542bdf:c.instructions+=1;goto B542bdf;
case 0x542be4:goto L542be4;
case 0x542be7:c.instructions+=8;goto B542be7;
case 0x542bec:c.instructions+=7;goto B542bec;
case 0x542bed:c.instructions+=6;goto B542bed;
case 0x542bf2:c.instructions+=5;goto B542bf2;
case 0x542bf6:c.instructions+=4;goto B542bf6;
case 0x542bf8:c.instructions+=3;goto B542bf8;
case 0x542bf9:c.instructions+=2;goto B542bf9;
case 0x542bfc:c.instructions+=1;goto B542bfc;
case 0x542c01:goto L542c01;
case 0x542c05:c.instructions+=3;goto B542c05;
case 0x542c06:c.instructions+=2;goto B542c06;
case 0x542c07:c.instructions+=1;goto B542c07;
case 0x542c0c:goto L542c0c;
case 0x542c0f:c.instructions+=7;goto B542c0f;
case 0x542c12:c.instructions+=6;goto B542c12;
case 0x542c15:c.instructions+=5;goto B542c15;
case 0x542c16:c.instructions+=4;goto B542c16;
case 0x542c19:c.instructions+=3;goto B542c19;
case 0x542c1a:c.instructions+=2;goto B542c1a;
case 0x542c1b:c.instructions+=1;goto B542c1b;
case 0x542c20:goto L542c20;
case 0x542c23:c.instructions+=6;goto B542c23;
case 0x542c26:c.instructions+=5;goto B542c26;
case 0x542c27:c.instructions+=4;goto B542c27;
case 0x542c2a:c.instructions+=3;goto B542c2a;
case 0x542c2b:c.instructions+=2;goto B542c2b;
case 0x542c2c:c.instructions+=1;goto B542c2c;
case 0x542c31:goto L542c31;
case 0x542c34:c.instructions+=3;goto B542c34;
case 0x542c37:c.instructions+=2;goto B542c37;
case 0x542c39:c.instructions+=1;goto B542c39;
case 0x542c3b:goto L542c3b;
case 0x542c3d:c.instructions+=1;goto B542c3d;
case 0x542c3f:goto L542c3f;
case 0x542c42:c.instructions+=10;goto B542c42;
case 0x542c43:c.instructions+=9;goto B542c43;
case 0x542c46:c.instructions+=8;goto B542c46;
case 0x542c47:c.instructions+=7;goto B542c47;
case 0x542c4a:c.instructions+=6;goto B542c4a;
case 0x542c4d:c.instructions+=5;goto B542c4d;
case 0x542c4f:c.instructions+=4;goto B542c4f;
case 0x542c50:c.instructions+=3;goto B542c50;
case 0x542c51:c.instructions+=2;goto B542c51;
case 0x542c54:c.instructions+=1;goto B542c54;
case 0x542c57:goto L542c57;
case 0x542c59:c.instructions+=10;goto B542c59;
case 0x542c5a:c.instructions+=9;goto B542c5a;
case 0x542c5d:c.instructions+=8;goto B542c5d;
case 0x542c5e:c.instructions+=7;goto B542c5e;
case 0x542c61:c.instructions+=6;goto B542c61;
case 0x542c64:c.instructions+=5;goto B542c64;
case 0x542c66:c.instructions+=4;goto B542c66;
case 0x542c67:c.instructions+=3;goto B542c67;
case 0x542c68:c.instructions+=2;goto B542c68;
case 0x542c6b:c.instructions+=1;goto B542c6b;
case 0x542c6e:goto L542c6e;
case 0x542c71:c.instructions+=6;goto B542c71;
case 0x542c74:c.instructions+=5;goto B542c74;
case 0x542c75:c.instructions+=4;goto B542c75;
case 0x542c78:c.instructions+=3;goto B542c78;
case 0x542c79:c.instructions+=2;goto B542c79;
case 0x542c7a:c.instructions+=1;goto B542c7a;
case 0x542c7f:goto L542c7f;
case 0x542c82:c.instructions+=2;goto B542c82;
case 0x542c85:c.instructions+=1;goto B542c85;
case 0x542c86:goto L542c86;
case 0x542c87:c.instructions+=5;goto B542c87;
case 0x542c89:c.instructions+=4;goto B542c89;
case 0x542c8a:c.instructions+=3;goto B542c8a;
case 0x542c8b:c.instructions+=2;goto B542c8b;
case 0x542c8e:c.instructions+=1;goto B542c8e;
case 0x542ca0:goto L542ca0;
case 0x542ca2:c.instructions+=40;goto B542ca2;
case 0x542ca7:c.instructions+=39;goto B542ca7;
case 0x542cad:c.instructions+=38;goto B542cad;
case 0x542cae:c.instructions+=37;goto B542cae;
case 0x542cb5:c.instructions+=36;goto B542cb5;
case 0x542cb6:c.instructions+=35;goto B542cb6;
case 0x542cba:c.instructions+=34;goto B542cba;
case 0x542cbb:c.instructions+=33;goto B542cbb;
case 0x542cbc:c.instructions+=32;goto B542cbc;
case 0x542cbd:c.instructions+=31;goto B542cbd;
case 0x542cbf:c.instructions+=30;goto B542cbf;
case 0x542cc2:c.instructions+=29;goto B542cc2;
case 0x542cc8:c.instructions+=28;goto B542cc8;
case 0x542ccb:c.instructions+=27;goto B542ccb;
case 0x542ccc:c.instructions+=26;goto B542ccc;
case 0x542cd0:c.instructions+=25;goto B542cd0;
case 0x542cd2:c.instructions+=24;goto B542cd2;
case 0x542cd5:c.instructions+=23;goto B542cd5;
case 0x542cd8:c.instructions+=22;goto B542cd8;
case 0x542cda:c.instructions+=21;goto B542cda;
case 0x542cde:c.instructions+=20;goto B542cde;
case 0x542ce0:c.instructions+=19;goto B542ce0;
case 0x542ce3:c.instructions+=18;goto B542ce3;
case 0x542ce7:c.instructions+=17;goto B542ce7;
case 0x542ce8:c.instructions+=16;goto B542ce8;
case 0x542ce9:c.instructions+=15;goto B542ce9;
case 0x542ced:c.instructions+=14;goto B542ced;
case 0x542cee:c.instructions+=13;goto B542cee;
case 0x542cf2:c.instructions+=12;goto B542cf2;
case 0x542cf3:c.instructions+=11;goto B542cf3;
case 0x542cf6:c.instructions+=10;goto B542cf6;
case 0x542cf7:c.instructions+=9;goto B542cf7;
case 0x542cfc:c.instructions+=8;goto B542cfc;
case 0x542cff:c.instructions+=7;goto B542cff;
case 0x542d02:c.instructions+=6;goto B542d02;
case 0x542d05:c.instructions+=5;goto B542d05;
case 0x542d08:c.instructions+=4;goto B542d08;
case 0x542d0b:c.instructions+=3;goto B542d0b;
case 0x542d0e:c.instructions+=2;goto B542d0e;
case 0x542d11:c.instructions+=1;goto B542d11;
case 0x542d16:goto L542d16;
case 0x542d1a:c.instructions+=17;goto B542d1a;
case 0x542d1c:c.instructions+=16;goto B542d1c;
case 0x542d20:c.instructions+=15;goto B542d20;
case 0x542d24:c.instructions+=14;goto B542d24;
case 0x542d2a:c.instructions+=13;goto B542d2a;
case 0x542d30:c.instructions+=12;goto B542d30;
case 0x542d36:c.instructions+=11;goto B542d36;
case 0x542d3c:c.instructions+=10;goto B542d3c;
case 0x542d42:c.instructions+=9;goto B542d42;
case 0x542d48:c.instructions+=8;goto B542d48;
case 0x542d4f:c.instructions+=7;goto B542d4f;
case 0x542d55:c.instructions+=6;goto B542d55;
case 0x542d5b:c.instructions+=5;goto B542d5b;
case 0x542d61:c.instructions+=4;goto B542d61;
case 0x542d67:c.instructions+=3;goto B542d67;
case 0x542d6d:c.instructions+=2;goto B542d6d;
case 0x542d73:c.instructions+=1;goto B542d73;
case 0x542d75:goto L542d75;
case 0x542d76:c.instructions+=3;goto B542d76;
case 0x542d7a:c.instructions+=2;goto B542d7a;
case 0x542d7b:c.instructions+=1;goto B542d7b;
case 0x542d80:goto L542d80;
case 0x542d86:c.instructions+=5;goto B542d86;
case 0x542d87:c.instructions+=4;goto B542d87;
case 0x542d88:c.instructions+=3;goto B542d88;
case 0x542d89:c.instructions+=2;goto B542d89;
case 0x542d8c:c.instructions+=1;goto B542d8c;
case 0x542d91:goto L542d91;
case 0x542d94:c.instructions+=5;goto B542d94;
case 0x542d9a:c.instructions+=4;goto B542d9a;
case 0x542d9b:c.instructions+=3;goto B542d9b;
case 0x542d9c:c.instructions+=2;goto B542d9c;
case 0x542d9d:c.instructions+=1;goto B542d9d;
case 0x542da2:goto L542da2;
case 0x542da5:c.instructions+=1;goto B542da5;
case 0x542da7:goto L542da7;
case 0x542dad:goto L542dad;
case 0x542db0:c.instructions+=2;goto B542db0;
case 0x542db1:c.instructions+=1;goto B542db1;
case 0x542db6:goto L542db6;
case 0x542db9:c.instructions+=2;goto B542db9;
case 0x542dba:c.instructions+=1;goto B542dba;
case 0x542dbf:goto L542dbf;
case 0x542dc5:c.instructions+=2;goto B542dc5;
case 0x542dc6:c.instructions+=1;goto B542dc6;
case 0x542dcb:goto L542dcb;
case 0x542dcf:c.instructions+=9;goto B542dcf;
case 0x542dd2:c.instructions+=8;goto B542dd2;
case 0x542dd3:c.instructions+=7;goto B542dd3;
case 0x542dd5:c.instructions+=6;goto B542dd5;
case 0x542dd6:c.instructions+=5;goto B542dd6;
case 0x542dd7:c.instructions+=4;goto B542dd7;
case 0x542dd8:c.instructions+=3;goto B542dd8;
case 0x542ddf:c.instructions+=2;goto B542ddf;
case 0x542de2:c.instructions+=1;goto B542de2;
case 0x542df0:goto L542df0;
case 0x542df3:c.instructions+=10;goto B542df3;
case 0x542df4:c.instructions+=9;goto B542df4;
case 0x542df5:c.instructions+=8;goto B542df5;
case 0x542df6:c.instructions+=7;goto B542df6;
case 0x542df7:c.instructions+=6;goto B542df7;
case 0x542df9:c.instructions+=5;goto B542df9;
case 0x542dfc:c.instructions+=4;goto B542dfc;
case 0x542dff:c.instructions+=3;goto B542dff;
case 0x542e01:c.instructions+=2;goto B542e01;
case 0x542e06:c.instructions+=1;goto B542e06;
case 0x542e0c:goto L542e0c;
case 0x542e0f:c.instructions+=3;goto B542e0f;
case 0x542e12:c.instructions+=2;goto B542e12;
case 0x542e14:c.instructions+=1;goto B542e14;
case 0x542e1a:goto L542e1a;
case 0x542e20:c.instructions+=2;goto B542e20;
case 0x542e22:c.instructions+=1;goto B542e22;
case 0x542e24:goto L542e24;
case 0x542e26:c.instructions+=1;goto B542e26;
case 0x542e2b:goto L542e2b;
case 0x542e30:goto L542e30;
case 0x542e34:c.instructions+=6;goto B542e34;
case 0x542e37:c.instructions+=5;goto B542e37;
case 0x542e3a:c.instructions+=4;goto B542e3a;
case 0x542e3d:c.instructions+=3;goto B542e3d;
case 0x542e40:c.instructions+=2;goto B542e40;
case 0x542e44:c.instructions+=1;goto B542e44;
case 0x542e4a:goto L542e4a;
case 0x542e4d:c.instructions+=1;goto B542e4d;
case 0x542e50:goto L542e50;
case 0x542e52:c.instructions+=1;goto B542e52;
case 0x542e54:goto L542e54;
case 0x542e57:c.instructions+=1;goto B542e57;
case 0x542e59:goto L542e59;
case 0x542e5b:goto L542e5b;
case 0x542e5d:c.instructions+=1;goto B542e5d;
case 0x542e63:goto L542e63;
case 0x542e66:c.instructions+=2;goto B542e66;
case 0x542e68:c.instructions+=1;goto B542e68;
case 0x542e6a:goto L542e6a;
case 0x542e6d:c.instructions+=1;goto B542e6d;
case 0x542e6f:goto L542e6f;
case 0x542e71:goto L542e71;
case 0x542e72:c.instructions+=2;goto B542e72;
case 0x542e74:c.instructions+=1;goto B542e74;
case 0x542e79:goto L542e79;
case 0x542e7c:c.instructions+=4;goto B542e7c;
case 0x542e80:c.instructions+=3;goto B542e80;
case 0x542e82:c.instructions+=2;goto B542e82;
case 0x542e84:c.instructions+=1;goto B542e84;
case 0x542e86:goto L542e86;
case 0x542e89:c.instructions+=4;goto B542e89;
case 0x542e8a:c.instructions+=3;goto B542e8a;
case 0x542e8c:c.instructions+=2;goto B542e8c;
case 0x542e90:c.instructions+=1;goto B542e90;
case 0x542e92:goto L542e92;
case 0x542e95:c.instructions+=1;goto B542e95;
case 0x542e97:goto L542e97;
case 0x542e99:goto L542e99;
case 0x542e9c:c.instructions+=2;goto B542e9c;
case 0x542e9e:c.instructions+=1;goto B542e9e;
case 0x542ea0:goto L542ea0;
case 0x542ea4:c.instructions+=1;goto B542ea4;
case 0x542ea8:goto L542ea8;
case 0x542eab:c.instructions+=1;goto B542eab;
case 0x542ead:goto L542ead;
case 0x542eb0:c.instructions+=5;goto B542eb0;
case 0x542eb1:c.instructions+=4;goto B542eb1;
case 0x542eb3:c.instructions+=3;goto B542eb3;
case 0x542eb6:c.instructions+=2;goto B542eb6;
case 0x542eb9:c.instructions+=1;goto B542eb9;
case 0x542ebe:goto L542ebe;
case 0x542ec0:c.instructions+=1;goto B542ec0;
case 0x542ec5:goto L542ec5;
case 0x542eca:goto L542eca;
case 0x542ecc:c.instructions+=2;goto B542ecc;
case 0x542ece:c.instructions+=1;goto B542ece;
case 0x542ed1:goto L542ed1;
case 0x542ed7:c.instructions+=2;goto B542ed7;
case 0x542ed9:c.instructions+=1;goto B542ed9;
case 0x542edb:goto L542edb;
case 0x542edd:c.instructions+=1;goto B542edd;
case 0x542ee2:goto L542ee2;
case 0x542ee6:c.instructions+=6;goto B542ee6;
case 0x542ee7:c.instructions+=5;goto B542ee7;
case 0x542ee8:c.instructions+=4;goto B542ee8;
case 0x542ee9:c.instructions+=3;goto B542ee9;
case 0x542eea:c.instructions+=2;goto B542eea;
case 0x542eed:c.instructions+=1;goto B542eed;
case 0x542ef0:goto L542ef0;
case 0x542ef3:c.instructions+=1;goto B542ef3;
case 0x542ef5:goto L542ef5;
case 0x542ef7:goto L542ef7;
case 0x542ef9:c.instructions+=1;goto B542ef9;
case 0x542efb:goto L542efb;
case 0x542efe:c.instructions+=1;goto B542efe;
case 0x542f00:goto L542f00;
case 0x542f02:goto L542f02;
case 0x542f04:c.instructions+=1;goto B542f04;
case 0x542f06:goto L542f06;
case 0x542f09:c.instructions+=2;goto B542f09;
case 0x542f0b:c.instructions+=1;goto B542f0b;
case 0x542f0d:goto L542f0d;
case 0x542f10:c.instructions+=1;goto B542f10;
case 0x542f12:goto L542f12;
case 0x542f14:goto L542f14;
case 0x542f17:c.instructions+=2;goto B542f17;
case 0x542f19:c.instructions+=1;goto B542f19;
case 0x542f1b:goto L542f1b;
case 0x542f1e:c.instructions+=1;goto B542f1e;
case 0x542f20:goto L542f20;
case 0x542f22:goto L542f22;
case 0x542f24:c.instructions+=1;goto B542f24;
case 0x542f26:goto L542f26;
case 0x542f27:c.instructions+=1;goto B542f27;
case 0x542f29:goto L542f29;
case 0x542f2c:c.instructions+=2;goto B542f2c;
case 0x542f2e:c.instructions+=1;goto B542f2e;
case 0x542f30:goto L542f30;
case 0x542f35:goto L542f35;
case 0x542f36:c.instructions+=6;goto B542f36;
case 0x542f37:c.instructions+=5;goto B542f37;
case 0x542f38:c.instructions+=4;goto B542f38;
case 0x542f3a:c.instructions+=3;goto B542f3a;
case 0x542f3b:c.instructions+=2;goto B542f3b;
case 0x542f3e:c.instructions+=1;goto B542f3e;
case 0x542f50:goto L542f50;
case 0x542f51:c.instructions+=7;goto B542f51;
case 0x542f52:c.instructions+=6;goto B542f52;
case 0x542f54:c.instructions+=5;goto B542f54;
case 0x542f57:c.instructions+=4;goto B542f57;
case 0x542f5a:c.instructions+=3;goto B542f5a;
case 0x542f5c:c.instructions+=2;goto B542f5c;
case 0x542f61:c.instructions+=1;goto B542f61;
case 0x542f67:goto L542f67;
case 0x542f6a:c.instructions+=3;goto B542f6a;
case 0x542f6d:c.instructions+=2;goto B542f6d;
case 0x542f6f:c.instructions+=1;goto B542f6f;
case 0x542f75:goto L542f75;
case 0x542f7b:c.instructions+=2;goto B542f7b;
case 0x542f7d:c.instructions+=1;goto B542f7d;
case 0x542f7f:goto L542f7f;
case 0x542f81:c.instructions+=1;goto B542f81;
case 0x542f86:goto L542f86;
case 0x542f8b:goto L542f8b;
case 0x542f8f:c.instructions+=8;goto B542f8f;
case 0x542f92:c.instructions+=7;goto B542f92;
case 0x542f93:c.instructions+=6;goto B542f93;
case 0x542f96:c.instructions+=5;goto B542f96;
case 0x542f97:c.instructions+=4;goto B542f97;
case 0x542f9a:c.instructions+=3;goto B542f9a;
case 0x542f9b:c.instructions+=2;goto B542f9b;
case 0x542f9e:c.instructions+=1;goto B542f9e;
case 0x542fa0:goto L542fa0;
case 0x542fa3:c.instructions+=2;goto B542fa3;
case 0x542fa5:c.instructions+=1;goto B542fa5;
case 0x542fa7:goto L542fa7;
case 0x542faa:c.instructions+=1;goto B542faa;
case 0x542fac:goto L542fac;
case 0x542fae:goto L542fae;
case 0x542fb0:c.instructions+=1;goto B542fb0;
case 0x542fb2:goto L542fb2;
case 0x542fb5:c.instructions+=2;goto B542fb5;
case 0x542fb7:c.instructions+=1;goto B542fb7;
case 0x542fb9:goto L542fb9;
case 0x542fbc:c.instructions+=3;goto B542fbc;
case 0x542fc1:c.instructions+=2;goto B542fc1;
case 0x542fc3:c.instructions+=1;goto B542fc3;
case 0x542fc5:goto L542fc5;
case 0x542fc7:c.instructions+=3;goto B542fc7;
case 0x542fcc:c.instructions+=2;goto B542fcc;
case 0x542fce:c.instructions+=1;goto B542fce;
case 0x542fd0:goto L542fd0;
case 0x542fd3:c.instructions+=2;goto B542fd3;
case 0x542fd5:c.instructions+=1;goto B542fd5;
case 0x542fd7:goto L542fd7;
case 0x542fda:c.instructions+=1;goto B542fda;
case 0x542fdc:goto L542fdc;
case 0x542fde:goto L542fde;
case 0x542fdf:c.instructions+=2;goto B542fdf;
case 0x542fe1:c.instructions+=1;goto B542fe1;
case 0x542fe6:goto L542fe6;
case 0x542fe9:c.instructions+=3;goto B542fe9;
case 0x542feb:c.instructions+=2;goto B542feb;
case 0x542fed:c.instructions+=1;goto B542fed;
case 0x542fef:goto L542fef;
case 0x542ff2:c.instructions+=3;goto B542ff2;
case 0x542ff3:c.instructions+=2;goto B542ff3;
case 0x542ff5:c.instructions+=1;goto B542ff5;
case 0x542ff7:goto L542ff7;
case 0x542ffa:c.instructions+=1;goto B542ffa;
case 0x542ffc:goto L542ffc;
case 0x542ffe:goto L542ffe;
default:missing_instruction(c.pc);}
B542003:L542003:{c.instructions+=11;NFSU2_TR(0x542003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B542005:{NFSU2_TR(0x542005);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542006:{NFSU2_TR(0x542006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542009:{NFSU2_TR(0x542009);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54200a:{NFSU2_TR(0x54200a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54200d:{NFSU2_TR(0x54200d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54200e:{NFSU2_TR(0x54200e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542011:{NFSU2_TR(0x542011);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542012:{NFSU2_TR(0x542012);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542015:{NFSU2_TR(0x542015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542016:{NFSU2_TR(0x542016);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542019ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B542019:L542019:{c.instructions+=3;NFSU2_TR(0x542019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54201c:{NFSU2_TR(0x54201c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xfffffffcull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54201f:{NFSU2_TR(0x54201f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L542208;}}
}
B542025:L542025:{c.instructions+=1;NFSU2_TR(0x542025);
if(r1(R+518)){{goto L542133;}}
}
B54202b:L54202b:{c.instructions+=2;NFSU2_TR(0x54202b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54202d:{NFSU2_TR(0x54202d);
if(r1(R+518)){{goto L542084;}}
}
B54202f:L54202f:{c.instructions+=2;NFSU2_TR(0x54202f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542032:{NFSU2_TR(0x542032);
if(r1(R+518)){{goto L54205d;}}
}
B542034:L542034:{c.instructions+=2;NFSU2_TR(0x542034);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B542037:{NFSU2_TR(0x542037);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54221b;}}
}
B54203d:L54203d:{c.instructions+=11;NFSU2_TR(0x54203d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542040:{NFSU2_TR(0x542040);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542046:{NFSU2_TR(0x542046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B542048:{NFSU2_TR(0x542048);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542049:{NFSU2_TR(0x542049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54204c:{NFSU2_TR(0x54204c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54204d:{NFSU2_TR(0x54204d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542050:{NFSU2_TR(0x542050);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542051:{NFSU2_TR(0x542051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542054:{NFSU2_TR(0x542054);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542055:{NFSU2_TR(0x542055);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542058ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B542058:L542058:{c.instructions+=1;NFSU2_TR(0x542058);
{goto L5422c5;}
}
B54205d:L54205d:{c.instructions+=3;NFSU2_TR(0x54205d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542060:{NFSU2_TR(0x542060);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x59bed120ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x59bed120ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x59bed120ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B542065:{NFSU2_TR(0x542065);
if(r1(R+518)){{goto L54207b;}}
}
B542067:L542067:{c.instructions+=2;NFSU2_TR(0x542067);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x5d4ce32dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5d4ce32dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x5d4ce32dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54206c:{NFSU2_TR(0x54206c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5422c5;}}
}
B542072:L542072:{c.instructions+=2;NFSU2_TR(0x542072);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B542076:{NFSU2_TR(0x542076);
{goto L5422c5;}
}
B54207b:L54207b:{c.instructions+=2;NFSU2_TR(0x54207b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54207f:{NFSU2_TR(0x54207f);
{goto L5422c5;}
}
B542084:L542084:{c.instructions+=3;NFSU2_TR(0x542084);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54208a:{NFSU2_TR(0x54208a);
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
B54208c:{NFSU2_TR(0x54208c);
if(r1(R+518)){{goto L5422c5;}}
}
B542092:L542092:{c.instructions+=5;NFSU2_TR(0x542092);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542095:{NFSU2_TR(0x542095);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542097:{NFSU2_TR(0x542097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54209a:{NFSU2_TR(0x54209a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54209d:{NFSU2_TR(0x54209d);
if(r1(R+518)){{goto L5420c0;}}
}
B54209f:L54209f:{c.instructions+=1;NFSU2_TR(0x54209f);
}
B5420a0:L5420a0:{c.instructions+=2;NFSU2_TR(0x5420a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5420a3:{NFSU2_TR(0x5420a3);
if(r1(R+518)){{goto L5420ae;}}
}
B5420a5:L5420a5:{c.instructions+=3;NFSU2_TR(0x5420a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5420a8:{NFSU2_TR(0x5420a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5420aa:{NFSU2_TR(0x5420aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5420a0u);}goto L5420a0;}}
}
B5420ac:L5420ac:{c.instructions+=1;NFSU2_TR(0x5420ac);
{goto L5420c0;}
}
B5420ae:L5420ae:{c.instructions+=2;NFSU2_TR(0x5420ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5420b0:{NFSU2_TR(0x5420b0);
if(r1(R+518)){{goto L5420c0;}}
}
B5420b2:L5420b2:{c.instructions+=6;NFSU2_TR(0x5420b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5420b6:{NFSU2_TR(0x5420b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5420b7:{NFSU2_TR(0x5420b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5420b8:{NFSU2_TR(0x5420b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5420ba:{NFSU2_TR(0x5420ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5420bb:{NFSU2_TR(0x5420bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5420c0ull));
TAIL_STATIC(0x52c7c0u,52c);
}
B5420c0:L5420c0:{c.instructions+=4;NFSU2_TR(0x5420c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5420c3:{NFSU2_TR(0x5420c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5420c5:{NFSU2_TR(0x5420c5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5420c7:{NFSU2_TR(0x5420c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L542123;}}
}
B5420c9:L5420c9:{c.instructions+=4;NFSU2_TR(0x5420c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5420cc:{NFSU2_TR(0x5420cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5420cf:{NFSU2_TR(0x5420cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5420d3:{NFSU2_TR(0x5420d3);
__builtin_memmove((R+4),(R+28),4);
}
B5420d5:L5420d5:{c.instructions+=2;NFSU2_TR(0x5420d5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5420d7:{NFSU2_TR(0x5420d7);
if(r1(R+518)){{goto L5420e3;}}
}
B5420d9:L5420d9:{c.instructions+=4;NFSU2_TR(0x5420d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5420da:{NFSU2_TR(0x5420da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5420dd:{NFSU2_TR(0x5420dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5420df:{NFSU2_TR(0x5420df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5420d5u);}goto L5420d5;}}
}
B5420e1:L5420e1:{c.instructions+=1;NFSU2_TR(0x5420e1);
{goto L542123;}
}
B5420e3:L5420e3:{c.instructions+=5;NFSU2_TR(0x5420e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5420e6:{NFSU2_TR(0x5420e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5420e8:{NFSU2_TR(0x5420e8);
__builtin_memmove((R+12),(R+0),4);
}
B5420ea:{NFSU2_TR(0x5420ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5420ec:{NFSU2_TR(0x5420ec);
if(r1(R+518)){{goto L542123;}}
}
B5420ee:L5420ee:{c.instructions+=5;NFSU2_TR(0x5420ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5420f1:{NFSU2_TR(0x5420f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5420f3:{NFSU2_TR(0x5420f3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5420f5:{NFSU2_TR(0x5420f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5420f9:{NFSU2_TR(0x5420f9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L542123;}}
}
B5420fb:L5420fb:{c.instructions+=1;NFSU2_TR(0x5420fb);
{goto L542100;}
}
B542100:L542100:{c.instructions+=10;NFSU2_TR(0x542100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542103:{NFSU2_TR(0x542103);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542107:{NFSU2_TR(0x542107);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54210a:{NFSU2_TR(0x54210a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54210b:{NFSU2_TR(0x54210b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B54210e:{NFSU2_TR(0x54210e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54210f:{NFSU2_TR(0x54210f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542113:{NFSU2_TR(0x542113);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542114:{NFSU2_TR(0x542114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542115:{NFSU2_TR(0x542115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54211aull));
TAIL_STATIC(0x5367e0u,536);
}
B54211a:L54211a:{c.instructions+=4;NFSU2_TR(0x54211a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54211e:{NFSU2_TR(0x54211e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B54211f:{NFSU2_TR(0x54211f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B542121:{NFSU2_TR(0x542121);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542100u);}goto L542100;}}
}
B542123:L542123:{c.instructions+=3;NFSU2_TR(0x542123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B542126:{NFSU2_TR(0x542126);
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
B542128:{NFSU2_TR(0x542128);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542092u);}goto L542092;}}
}
B54212e:L54212e:{c.instructions+=1;NFSU2_TR(0x54212e);
{goto L5422c5;}
}
B542133:L542133:{c.instructions+=3;NFSU2_TR(0x542133);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B542139:{NFSU2_TR(0x542139);
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
B54213b:{NFSU2_TR(0x54213b);
if(r1(R+518)){{goto L5422c5;}}
}
B542141:L542141:{c.instructions+=1;NFSU2_TR(0x542141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542144:L542144:{c.instructions+=2;NFSU2_TR(0x542144);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542146:{NFSU2_TR(0x542146);
if(r1(R+518)){{goto L542154;}}
}
B542148:L542148:{c.instructions+=3;NFSU2_TR(0x542148);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54214b:{NFSU2_TR(0x54214b);
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
B54214d:{NFSU2_TR(0x54214d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542144u);}goto L542144;}}
}
B54214f:L54214f:{c.instructions+=1;NFSU2_TR(0x54214f);
{goto L5422c5;}
}
B542154:L542154:{c.instructions+=2;NFSU2_TR(0x542154);
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
B542156:{NFSU2_TR(0x542156);
if(r1(R+518)){{goto L5422c5;}}
}
B54215c:L54215c:{c.instructions+=5;NFSU2_TR(0x54215c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54215f:{NFSU2_TR(0x54215f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542161:{NFSU2_TR(0x542161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542164:{NFSU2_TR(0x542164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542167:{NFSU2_TR(0x542167);
if(r1(R+518)){{goto L54218e;}}
}
B542169:L542169:{c.instructions+=1;NFSU2_TR(0x542169);
__builtin_memmove((R+16),(R+16),4);
}
B542170:L542170:{c.instructions+=2;NFSU2_TR(0x542170);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B542173:{NFSU2_TR(0x542173);
if(r1(R+518)){{goto L54217e;}}
}
B542175:L542175:{c.instructions+=3;NFSU2_TR(0x542175);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542178:{NFSU2_TR(0x542178);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54217a:{NFSU2_TR(0x54217a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542170u);}goto L542170;}}
}
B54217c:L54217c:{c.instructions+=1;NFSU2_TR(0x54217c);
{goto L54218e;}
}
B54217e:L54217e:{c.instructions+=2;NFSU2_TR(0x54217e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542180:{NFSU2_TR(0x542180);
if(r1(R+518)){{goto L54218e;}}
}
B542182:L542182:{c.instructions+=6;NFSU2_TR(0x542182);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542183:{NFSU2_TR(0x542183);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542184:{NFSU2_TR(0x542184);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542186:{NFSU2_TR(0x542186);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542187:{NFSU2_TR(0x542187);
__builtin_memmove((R+4),(R+12),4);
}
B542189:{NFSU2_TR(0x542189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54218eull));
TAIL_STATIC(0x52c7c0u,52c);
}
B54218e:L54218e:{c.instructions+=4;NFSU2_TR(0x54218e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542191:{NFSU2_TR(0x542191);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B542193:{NFSU2_TR(0x542193);
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
B542195:{NFSU2_TR(0x542195);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5422c5;}}
}
B54219b:L54219b:{c.instructions+=4;NFSU2_TR(0x54219b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54219e:{NFSU2_TR(0x54219e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5421a1:{NFSU2_TR(0x5421a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5421a5:{NFSU2_TR(0x5421a5);
__builtin_memmove((R+4),(R+28),4);
}
B5421a7:L5421a7:{c.instructions+=2;NFSU2_TR(0x5421a7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5421a9:{NFSU2_TR(0x5421a9);
if(r1(R+518)){{goto L5421b8;}}
}
B5421ab:L5421ab:{c.instructions+=4;NFSU2_TR(0x5421ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5421ac:{NFSU2_TR(0x5421ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5421af:{NFSU2_TR(0x5421af);
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
B5421b1:{NFSU2_TR(0x5421b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5421a7u);}goto L5421a7;}}
}
B5421b3:L5421b3:{c.instructions+=1;NFSU2_TR(0x5421b3);
{goto L5422c5;}
}
B5421b8:L5421b8:{c.instructions+=5;NFSU2_TR(0x5421b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5421bb:{NFSU2_TR(0x5421bb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5421bd:{NFSU2_TR(0x5421bd);
__builtin_memmove((R+12),(R+0),4);
}
B5421bf:{NFSU2_TR(0x5421bf);
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
B5421c1:{NFSU2_TR(0x5421c1);
if(r1(R+518)){{goto L5422c5;}}
}
B5421c7:L5421c7:{c.instructions+=5;NFSU2_TR(0x5421c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5421ca:{NFSU2_TR(0x5421ca);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5421cc:{NFSU2_TR(0x5421cc);
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
B5421ce:{NFSU2_TR(0x5421ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5421d2:{NFSU2_TR(0x5421d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5422c5;}}
}
B5421d8:L5421d8:{c.instructions+=1;NFSU2_TR(0x5421d8);
{goto L5421e0;}
}
B5421e0:L5421e0:{c.instructions+=10;NFSU2_TR(0x5421e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5421e3:{NFSU2_TR(0x5421e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5421e7:{NFSU2_TR(0x5421e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5421ea:{NFSU2_TR(0x5421ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5421eb:{NFSU2_TR(0x5421eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5421ee:{NFSU2_TR(0x5421ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5421ef:{NFSU2_TR(0x5421ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5421f0:{NFSU2_TR(0x5421f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5421f1:{NFSU2_TR(0x5421f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5421f5:{NFSU2_TR(0x5421f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5421faull));
TAIL_STATIC(0x5367e0u,536);
}
B5421fa:L5421fa:{c.instructions+=4;NFSU2_TR(0x5421fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5421fe:{NFSU2_TR(0x5421fe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5421ff:{NFSU2_TR(0x5421ff);
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
B542201:{NFSU2_TR(0x542201);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5421e0u);}goto L5421e0;}}
}
B542203:L542203:{c.instructions+=1;NFSU2_TR(0x542203);
{goto L5422c5;}
}
B542208:L542208:{c.instructions+=2;NFSU2_TR(0x542208);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54220b:{NFSU2_TR(0x54220b);
if(r1(R+518)){{goto L542297;}}
}
B542211:L542211:{c.instructions+=2;NFSU2_TR(0x542211);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542214:{NFSU2_TR(0x542214);
if(r1(R+518)){{goto L542251;}}
}
B542216:L542216:{c.instructions+=2;NFSU2_TR(0x542216);
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
B542219:{NFSU2_TR(0x542219);
if(r1(R+518)){{goto L542234;}}
}
B54221b:L54221b:{c.instructions+=9;NFSU2_TR(0x54221b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54221e:{NFSU2_TR(0x54221e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542221:{NFSU2_TR(0x542221);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542222:{NFSU2_TR(0x542222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542225:{NFSU2_TR(0x542225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542226:{NFSU2_TR(0x542226);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542227:{NFSU2_TR(0x542227);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542228:{NFSU2_TR(0x542228);
__builtin_memmove((R+4),(R+12),4);
}
B54222a:{NFSU2_TR(0x54222a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54222full));
TAIL_STATIC(0x5367e0u,536);
}
B54222f:L54222f:{c.instructions+=1;NFSU2_TR(0x54222f);
{goto L5422c5;}
}
B542234:L542234:{c.instructions+=11;NFSU2_TR(0x542234);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542237:{NFSU2_TR(0x542237);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54223d:{NFSU2_TR(0x54223d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54223f:{NFSU2_TR(0x54223f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542240:{NFSU2_TR(0x542240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542243:{NFSU2_TR(0x542243);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542244:{NFSU2_TR(0x542244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542247:{NFSU2_TR(0x542247);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542248:{NFSU2_TR(0x542248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54224b:{NFSU2_TR(0x54224b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54224c:{NFSU2_TR(0x54224c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54224full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54224f:L54224f:{c.instructions+=1;NFSU2_TR(0x54224f);
{goto L5422c5;}
}
B542251:L542251:{c.instructions+=4;NFSU2_TR(0x542251);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542255:{NFSU2_TR(0x542255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54225b:{NFSU2_TR(0x54225b);
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
B54225d:{NFSU2_TR(0x54225d);
if(r1(R+518)){{goto L5422c5;}}
}
B54225f:L54225f:{c.instructions+=1;NFSU2_TR(0x54225f);
__builtin_memmove((R+12),(R+0),4);
}
B542261:L542261:{c.instructions+=5;NFSU2_TR(0x542261);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542264:{NFSU2_TR(0x542264);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542266:{NFSU2_TR(0x542266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542269:{NFSU2_TR(0x542269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54226c:{NFSU2_TR(0x54226c);
if(r1(R+518)){{goto L54228e;}}
}
B54226e:L54226e:{c.instructions+=1;NFSU2_TR(0x54226e);
__builtin_memmove((R+28),(R+28),4);
}
B542270:L542270:{c.instructions+=2;NFSU2_TR(0x542270);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B542273:{NFSU2_TR(0x542273);
if(r1(R+518)){{goto L54227e;}}
}
B542275:L542275:{c.instructions+=3;NFSU2_TR(0x542275);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542278:{NFSU2_TR(0x542278);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54227a:{NFSU2_TR(0x54227a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542270u);}goto L542270;}}
}
B54227c:L54227c:{c.instructions+=1;NFSU2_TR(0x54227c);
{goto L54228e;}
}
B54227e:L54227e:{c.instructions+=2;NFSU2_TR(0x54227e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542280:{NFSU2_TR(0x542280);
if(r1(R+518)){{goto L54228e;}}
}
B542282:L542282:{c.instructions+=6;NFSU2_TR(0x542282);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542283:{NFSU2_TR(0x542283);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542284:{NFSU2_TR(0x542284);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542286:{NFSU2_TR(0x542286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542287:{NFSU2_TR(0x542287);
__builtin_memmove((R+4),(R+12),4);
}
B542289:{NFSU2_TR(0x542289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54228eull));
TAIL_STATIC(0x52c7c0u,52c);
}
B54228e:L54228e:{c.instructions+=3;NFSU2_TR(0x54228e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B542291:{NFSU2_TR(0x542291);
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
B542293:{NFSU2_TR(0x542293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542261u);}goto L542261;}}
}
B542295:L542295:{c.instructions+=1;NFSU2_TR(0x542295);
{goto L5422c5;}
}
B542297:L542297:{c.instructions+=6;NFSU2_TR(0x542297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54229a:{NFSU2_TR(0x54229a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54229d:{NFSU2_TR(0x54229d);
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
B54229f:{NFSU2_TR(0x54229f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5422a2:{NFSU2_TR(0x5422a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5422a5:{NFSU2_TR(0x5422a5);
if(r1(R+518)){{goto L5422c5;}}
}
B5422a7:L5422a7:{c.instructions+=2;NFSU2_TR(0x5422a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5422aa:{NFSU2_TR(0x5422aa);
if(r1(R+518)){{goto L5422b5;}}
}
B5422ac:L5422ac:{c.instructions+=3;NFSU2_TR(0x5422ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5422af:{NFSU2_TR(0x5422af);
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
B5422b1:{NFSU2_TR(0x5422b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5422a7u);}goto L5422a7;}}
}
B5422b3:L5422b3:{c.instructions+=1;NFSU2_TR(0x5422b3);
{goto L5422c5;}
}
B5422b5:L5422b5:{c.instructions+=2;NFSU2_TR(0x5422b5);
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
B5422b7:{NFSU2_TR(0x5422b7);
if(r1(R+518)){{goto L5422c5;}}
}
B5422b9:L5422b9:{c.instructions+=6;NFSU2_TR(0x5422b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5422ba:{NFSU2_TR(0x5422ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5422bb:{NFSU2_TR(0x5422bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5422bd:{NFSU2_TR(0x5422bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5422be:{NFSU2_TR(0x5422be);
__builtin_memmove((R+4),(R+12),4);
}
B5422c0:{NFSU2_TR(0x5422c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5422c5ull));
TAIL_STATIC(0x52c7c0u,52c);
}
B5422c5:L5422c5:{c.instructions+=4;NFSU2_TR(0x5422c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5422c7:{NFSU2_TR(0x5422c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5422c9:{NFSU2_TR(0x5422c9);
__builtin_memmove((R+4),(R+24),4);
}
B5422cb:{NFSU2_TR(0x5422cb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5422cdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5422cd:L5422cd:{c.instructions+=4;NFSU2_TR(0x5422cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5422d1:{NFSU2_TR(0x5422d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x411cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5422d7:{NFSU2_TR(0x5422d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5422d9:{NFSU2_TR(0x5422d9);
if(r1(R+518)){{goto L54232f;}}
}
B5422db:L5422db:{c.instructions+=4;NFSU2_TR(0x5422db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5422de:{NFSU2_TR(0x5422de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x411cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5422e4:{NFSU2_TR(0x5422e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5422ea:{NFSU2_TR(0x5422ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5422f5;}}
}
B5422ec:L5422ec:{c.instructions+=2;NFSU2_TR(0x5422ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5422ef:{NFSU2_TR(0x5422ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5422f5:L5422f5:{c.instructions+=3;NFSU2_TR(0x5422f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5422f8:{NFSU2_TR(0x5422f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5422fa:{NFSU2_TR(0x5422fa);
if(r1(R+518)){{goto L542302;}}
}
B5422fc:L5422fc:{c.instructions+=2;NFSU2_TR(0x5422fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5422ff:{NFSU2_TR(0x5422ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542302:L542302:{c.instructions+=3;NFSU2_TR(0x542302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542305:{NFSU2_TR(0x542305);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542307:{NFSU2_TR(0x542307);
if(r1(R+518)){{goto L54230f;}}
}
B542309:L542309:{c.instructions+=2;NFSU2_TR(0x542309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54230c:{NFSU2_TR(0x54230c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54230f:L54230f:{c.instructions+=8;NFSU2_TR(0x54230f);
w4(R+0,u32(0xabadcafeull));
}
B542314:{NFSU2_TR(0x542314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542317:{NFSU2_TR(0x542317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54231a:{NFSU2_TR(0x54231a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542320:{NFSU2_TR(0x542320);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B542321:{NFSU2_TR(0x542321);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542323:{NFSU2_TR(0x542323);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542329:{NFSU2_TR(0x542329);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x541ff0u,541);}
}
B54232f:L54232f:{c.instructions+=6;NFSU2_TR(0x54232f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542330:{NFSU2_TR(0x542330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542331:{NFSU2_TR(0x542331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542332:{NFSU2_TR(0x542332);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542333:{NFSU2_TR(0x542333);
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
B542336:{NFSU2_TR(0x542336);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542340:L542340:{c.instructions+=7;NFSU2_TR(0x542340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542341:{NFSU2_TR(0x542341);
__builtin_memmove((R+24),(R+4),4);
}
B542343:{NFSU2_TR(0x542343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542346:{NFSU2_TR(0x542346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542347:{NFSU2_TR(0x542347);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542348:{NFSU2_TR(0x542348);
u8 U[4];
w4(U+0,u32(0x79bfc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54234d:{NFSU2_TR(0x54234d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542352ull));
TAIL_STATIC(0x50d510u,50d);
}
B542352:L542352:{c.instructions+=4;NFSU2_TR(0x542352);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542355:{NFSU2_TR(0x542355);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B542358:{NFSU2_TR(0x542358);
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
B54235a:{NFSU2_TR(0x54235a);
if(r1(R+518)){{goto L542383;}}
}
B54235c:L54235c:{c.instructions+=2;NFSU2_TR(0x54235c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54235d:{NFSU2_TR(0x54235d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542362ull));
TAIL_STATIC(0x50c550u,50c);
}
B542362:L542362:{c.instructions+=4;NFSU2_TR(0x542362);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B542368:{NFSU2_TR(0x542368);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54236b:{NFSU2_TR(0x54236b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54236d:{NFSU2_TR(0x54236d);
if(r1(R+518)){{goto L54237b;}}
}
B54236f:L54236f:{c.instructions+=4;NFSU2_TR(0x54236f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542372:{NFSU2_TR(0x542372);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542375:{NFSU2_TR(0x542375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542376:{NFSU2_TR(0x542376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54237bull));
TAIL_STATIC(0x537750u,537);
}
B54237b:L54237b:{c.instructions+=3;NFSU2_TR(0x54237b);
__builtin_memmove((R+4),(R+24),4);
}
B54237d:{NFSU2_TR(0x54237d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54237e:{NFSU2_TR(0x54237e);
TAIL_STATIC(0x51ba60u,51b);
}
B542383:L542383:{c.instructions+=2;NFSU2_TR(0x542383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542384:{NFSU2_TR(0x542384);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542390:L542390:{c.instructions+=11;NFSU2_TR(0x542390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542391:{NFSU2_TR(0x542391);
__builtin_memmove((R+20),(R+16),4);
}
B542393:{NFSU2_TR(0x542393);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B542396:{NFSU2_TR(0x542396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B54239c:{NFSU2_TR(0x54239c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54239d:{NFSU2_TR(0x54239d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54239e:{NFSU2_TR(0x54239e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54239f:{NFSU2_TR(0x54239f);
__builtin_memmove((R+8),(R+4),4);
}
B5423a1:{NFSU2_TR(0x5423a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5423a3:{NFSU2_TR(0x5423a3);
w4(R+4,u32(0x100ull));
}
B5423a8:{NFSU2_TR(0x5423a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5423ac:L5423ac:{c.instructions+=1;NFSU2_TR(0x5423ac);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5423ae;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5423acu);}goto L5423ac;}
}
B5423ae:L5423ae:{c.instructions+=6;NFSU2_TR(0x5423ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5423b1:{NFSU2_TR(0x5423b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5423b4:{NFSU2_TR(0x5423b4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5423b6:{NFSU2_TR(0x5423b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5423b8:{NFSU2_TR(0x5423b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5423bc:{NFSU2_TR(0x5423bc);
if(r1(R+518)){{goto L5423c3;}}
}
B5423be:L5423be:{c.instructions+=2;NFSU2_TR(0x5423be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5423c1:{NFSU2_TR(0x5423c1);
{goto L5423c5;}
}
B5423c3:L5423c3:{c.instructions+=1;NFSU2_TR(0x5423c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5423c5:L5423c5:{c.instructions+=2;NFSU2_TR(0x5423c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5423c7:{NFSU2_TR(0x5423c7);
if(r1(R+518)){{goto L5423ce;}}
}
B5423c9:L5423c9:{c.instructions+=2;NFSU2_TR(0x5423c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5423cc:{NFSU2_TR(0x5423cc);
{goto L5423d0;}
}
B5423ce:L5423ce:{c.instructions+=1;NFSU2_TR(0x5423ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5423d0:L5423d0:{c.instructions+=2;NFSU2_TR(0x5423d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5423d2:{NFSU2_TR(0x5423d2);
if(r1(R+518)){{goto L542405;}}
}
B5423d4:L5423d4:{c.instructions+=2;NFSU2_TR(0x5423d4);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5423d9:{NFSU2_TR(0x5423d9);
if(r1(R+518)){{goto L5423f4;}}
}
B5423db:L5423db:{c.instructions+=3;NFSU2_TR(0x5423db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5423de:{NFSU2_TR(0x5423de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5423e0:{NFSU2_TR(0x5423e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5423f4;}}
}
B5423e2:L5423e2:{c.instructions+=3;NFSU2_TR(0x5423e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5423e5:{NFSU2_TR(0x5423e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5423e7:{NFSU2_TR(0x5423e7);
if(r1(R+518)){{goto L5423f9;}}
}
B5423e9:L5423e9:{c.instructions+=2;NFSU2_TR(0x5423e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5423ea:{NFSU2_TR(0x5423ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5423efull));
TAIL_STATIC(0x50c550u,50c);
}
B5423ef:L5423ef:{c.instructions+=2;NFSU2_TR(0x5423ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5423f2:{NFSU2_TR(0x5423f2);
{goto L5423f9;}
}
B5423f4:L5423f4:{c.instructions+=2;NFSU2_TR(0x5423f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5423f8:{NFSU2_TR(0x5423f8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5423f9:L5423f9:{c.instructions+=3;NFSU2_TR(0x5423f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5423fc:{NFSU2_TR(0x5423fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5423fe:{NFSU2_TR(0x5423fe);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5423c3u);}goto L5423c3;}}
}
B542400:L542400:{c.instructions+=2;NFSU2_TR(0x542400);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B542403:{NFSU2_TR(0x542403);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5423c5u);}goto L5423c5;}
}
B542405:L542405:{c.instructions+=5;NFSU2_TR(0x542405);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B542407:{NFSU2_TR(0x542407);
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
B542409:{NFSU2_TR(0x542409);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54240d:{NFSU2_TR(0x54240d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542411:{NFSU2_TR(0x542411);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L542527;}}
}
B542417:L542417:{c.instructions+=6;NFSU2_TR(0x542417);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B54241b:{NFSU2_TR(0x54241b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54241e:{NFSU2_TR(0x54241e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54241f:{NFSU2_TR(0x54241f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542420:{NFSU2_TR(0x542420);
u8 U[4];
w4(U+0,u32(0x79bfc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542425:{NFSU2_TR(0x542425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54242aull));
TAIL_STATIC(0x50d510u,50d);
}
B54242a:L54242a:{c.instructions+=4;NFSU2_TR(0x54242a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54242d:{NFSU2_TR(0x54242d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B542430:{NFSU2_TR(0x542430);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542432:{NFSU2_TR(0x542432);
if(r1(R+518)){{goto L542516;}}
}
B542438:L542438:{c.instructions+=2;NFSU2_TR(0x542438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542439:{NFSU2_TR(0x542439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54243eull));
TAIL_STATIC(0x50c550u,50c);
}
B54243e:L54243e:{c.instructions+=6;NFSU2_TR(0x54243e);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B542443:{NFSU2_TR(0x542443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542446:{NFSU2_TR(0x542446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B542449:{NFSU2_TR(0x542449);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54244c:{NFSU2_TR(0x54244c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54244e:{NFSU2_TR(0x54244e);
if(r1(R+518)){{goto L5424af;}}
}
B542450:L542450:{c.instructions+=6;NFSU2_TR(0x542450);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B542453:{NFSU2_TR(0x542453);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542457:{NFSU2_TR(0x542457);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B54245a:{NFSU2_TR(0x54245a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54245c:{NFSU2_TR(0x54245c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542460:{NFSU2_TR(0x542460);
if(r1(R+518)){{goto L5424af;}}
}
B542462:L542462:{c.instructions+=4;NFSU2_TR(0x542462);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542465:{NFSU2_TR(0x542465);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542466:{NFSU2_TR(0x542466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542467:{NFSU2_TR(0x542467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54246cull));
TAIL_STATIC(0x43dcc0u,43d);
}
B54246c:L54246c:{c.instructions+=3;NFSU2_TR(0x54246c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54246f:{NFSU2_TR(0x54246f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542471:{NFSU2_TR(0x542471);
if(r1(R+518)){{goto L54247d;}}
}
B542473:L542473:{c.instructions+=3;NFSU2_TR(0x542473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B542475:{NFSU2_TR(0x542475);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B542479:{NFSU2_TR(0x542479);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542462u);}goto L542462;}}
}
B54247b:L54247b:{c.instructions+=1;NFSU2_TR(0x54247b);
{goto L5424af;}
}
B54247d:L54247d:{c.instructions+=3;NFSU2_TR(0x54247d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54247e:{NFSU2_TR(0x54247e);
u8 U[4];
w4(U+0,u32(0x79bd78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542483:{NFSU2_TR(0x542483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542488ull));
TAIL_STATIC(0x50d510u,50d);
}
B542488:L542488:{c.instructions+=4;NFSU2_TR(0x542488);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54248c:{NFSU2_TR(0x54248c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54248f:{NFSU2_TR(0x54248f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542490:{NFSU2_TR(0x542490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542495ull));
TAIL_STATIC(0x537580u,537);
}
B542495:L542495:{c.instructions+=8;NFSU2_TR(0x542495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B542497:{NFSU2_TR(0x542497);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54249a:{NFSU2_TR(0x54249a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54249c:{NFSU2_TR(0x54249c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54249f:{NFSU2_TR(0x54249f);
__builtin_memmove((R+8),gp(0x8384b0),4);
}
B5424a5:{NFSU2_TR(0x5424a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424a6:{NFSU2_TR(0x5424a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424a7:{NFSU2_TR(0x5424a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5424acull));
TAIL_STATIC(0x43f920u,43f);
}
B5424ac:L5424ac:{c.instructions+=1;NFSU2_TR(0x5424ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5424af:L5424af:{c.instructions+=3;NFSU2_TR(0x5424af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5424b2:{NFSU2_TR(0x5424b2);
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
B5424b4:{NFSU2_TR(0x5424b4);
if(r1(R+518)){{goto L5424bc;}}
}
B5424b6:L5424b6:{c.instructions+=3;NFSU2_TR(0x5424b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5424b8:{NFSU2_TR(0x5424b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424ba:{NFSU2_TR(0x5424ba);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5424bcull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5424bc:L5424bc:{c.instructions+=7;NFSU2_TR(0x5424bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5424bf:{NFSU2_TR(0x5424bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424c0:{NFSU2_TR(0x5424c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424c1:{NFSU2_TR(0x5424c1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5424c3:{NFSU2_TR(0x5424c3);
u8 U[4];
w4(U+0,u32(0x79b178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424c8:{NFSU2_TR(0x5424c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5424cb:{NFSU2_TR(0x5424cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5424d0ull));
TAIL_STATIC(0x50d510u,50d);
}
B5424d0:L5424d0:{c.instructions+=4;NFSU2_TR(0x5424d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5424d3:{NFSU2_TR(0x5424d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5424d6:{NFSU2_TR(0x5424d6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5424d8:{NFSU2_TR(0x5424d8);
if(r1(R+518)){{goto L5424f1;}}
}
B5424da:L5424da:{c.instructions+=4;NFSU2_TR(0x5424da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5424dd:{NFSU2_TR(0x5424dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424de:{NFSU2_TR(0x5424de);
u8 U[4];
w4(U+0,u32(0x79b160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5424e3:{NFSU2_TR(0x5424e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5424e8ull));
TAIL_STATIC(0x50d510u,50d);
}
B5424e8:L5424e8:{c.instructions+=3;NFSU2_TR(0x5424e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5424eb:{NFSU2_TR(0x5424eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5424ee:{NFSU2_TR(0x5424ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5424f1:L5424f1:{c.instructions+=4;NFSU2_TR(0x5424f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5424f4:{NFSU2_TR(0x5424f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5424f7:{NFSU2_TR(0x5424f7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x30210ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5424fd:{NFSU2_TR(0x5424fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542512;}}
}
B5424ff:L5424ff:{c.instructions+=3;NFSU2_TR(0x5424ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542502:{NFSU2_TR(0x542502);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542503:{NFSU2_TR(0x542503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542508ull));
TAIL_STATIC(0x440540u,440);
}
B542508:L542508:{c.instructions+=2;NFSU2_TR(0x542508);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54250b:{NFSU2_TR(0x54250b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B542512:L542512:{c.instructions+=1;NFSU2_TR(0x542512);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B542516:L542516:{c.instructions+=5;NFSU2_TR(0x542516);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54251a:{NFSU2_TR(0x54251a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54251b:{NFSU2_TR(0x54251b);
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
B54251d:{NFSU2_TR(0x54251d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542521:{NFSU2_TR(0x542521);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542417u);}goto L542417;}}
}
B542527:L542527:{c.instructions+=6;NFSU2_TR(0x542527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542528:{NFSU2_TR(0x542528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542529:{NFSU2_TR(0x542529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54252a:{NFSU2_TR(0x54252a);
__builtin_memmove((R+16),(R+20),4);
}
B54252c:{NFSU2_TR(0x54252c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54252d:{NFSU2_TR(0x54252d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542530:L542530:{c.instructions+=4;NFSU2_TR(0x542530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542531:{NFSU2_TR(0x542531);
u8 U[4];
w4(U+0,u32(0x79c004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542536:{NFSU2_TR(0x542536);
__builtin_memmove((R+24),(R+4),4);
}
B542538:{NFSU2_TR(0x542538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54253dull));
TAIL_STATIC(0x50d510u,50d);
}
B54253d:L54253d:{c.instructions+=2;NFSU2_TR(0x54253d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B542540:{NFSU2_TR(0x542540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542545ull));
TAIL_STATIC(0x558ee0u,558);
}
B542545:L542545:{c.instructions+=4;NFSU2_TR(0x542545);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542549:{NFSU2_TR(0x542549);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54254a:{NFSU2_TR(0x54254a);
__builtin_memmove((R+4),(R+24),4);
}
B54254c:{NFSU2_TR(0x54254c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542551ull));
TAIL_STATIC(0x51bb30u,51b);
}
B542551:L542551:{c.instructions+=3;NFSU2_TR(0x542551);
__builtin_memmove((R+24),(R+0),4);
}
B542553:{NFSU2_TR(0x542553);
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
B542555:{NFSU2_TR(0x542555);
if(r1(R+518)){{goto L54259a;}}
}
B542557:L542557:{c.instructions+=2;NFSU2_TR(0x542557);
__builtin_memmove((R+4),(R+24),4);
}
B542559:{NFSU2_TR(0x542559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54255eull));
TAIL_STATIC(0x50b920u,50b);
}
B54255e:L54255e:{c.instructions+=3;NFSU2_TR(0x54255e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54255f:{NFSU2_TR(0x54255f);
u8 U[4];
w4(U+0,u32(0x79bff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542564:{NFSU2_TR(0x542564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542569ull));
TAIL_STATIC(0x50d510u,50d);
}
B542569:L542569:{c.instructions+=4;NFSU2_TR(0x542569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54256c:{NFSU2_TR(0x54256c);
__builtin_memmove((R+4),(R+24),4);
}
B54256e:{NFSU2_TR(0x54256e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B542575:{NFSU2_TR(0x542575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54257aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542340u);}goto L542340;}
}
B54257a:L54257a:{c.instructions+=8;NFSU2_TR(0x54257a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54257d:{NFSU2_TR(0x54257d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542580:{NFSU2_TR(0x542580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B542582:{NFSU2_TR(0x542582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542585:{NFSU2_TR(0x542585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B542587:{NFSU2_TR(0x542587);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542589:{NFSU2_TR(0x542589);
__builtin_memmove((R+4),(R+24),4);
}
B54258b:{NFSU2_TR(0x54258b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54258dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B54258d:L54258d:{c.instructions+=2;NFSU2_TR(0x54258d);
u8 U[4];
w4(U+0,u32(0x79bfdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542592:{NFSU2_TR(0x542592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542597ull));
TAIL_STATIC(0x50d510u,50d);
}
B542597:L542597:{c.instructions+=1;NFSU2_TR(0x542597);
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
B54259a:L54259a:{c.instructions+=2;NFSU2_TR(0x54259a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54259b:{NFSU2_TR(0x54259b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5425a0:L5425a0:{c.instructions+=5;NFSU2_TR(0x5425a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5425a1:{NFSU2_TR(0x5425a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5425a5:{NFSU2_TR(0x5425a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5425a7:{NFSU2_TR(0x5425a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30203ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5425ac:{NFSU2_TR(0x5425ac);
if(r1(R+518)){{goto L5425b9;}}
}
B5425ae:L5425ae:{c.instructions+=2;NFSU2_TR(0x5425ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5425b3:{NFSU2_TR(0x5425b3);
if(r1(R+518)){{goto L5425b9;}}
}
B5425b5:L5425b5:{c.instructions+=3;NFSU2_TR(0x5425b5);
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
B5425b7:{NFSU2_TR(0x5425b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5425b8:{NFSU2_TR(0x5425b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5425b9:L5425b9:{c.instructions+=1;NFSU2_TR(0x5425b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5425beull));
TAIL_STATIC(0x571090u,571);
}
B5425be:L5425be:{c.instructions+=4;NFSU2_TR(0x5425be);
w4(R+4,u32(0x8637b0ull));
}
B5425c3:{NFSU2_TR(0x5425c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5425c4:{NFSU2_TR(0x5425c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5425c5:{NFSU2_TR(0x5425c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5425caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542530u);}goto L542530;}
}
B5425ca:L5425ca:{c.instructions+=3;NFSU2_TR(0x5425ca);
w4(R+0,u32(0x1ull));
}
B5425cf:{NFSU2_TR(0x5425cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5425d0:{NFSU2_TR(0x5425d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5425e0:L5425e0:{c.instructions+=3;NFSU2_TR(0x5425e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5425e1:{NFSU2_TR(0x5425e1);
__builtin_memmove((R+24),(R+4),4);
}
B5425e3:{NFSU2_TR(0x5425e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5425e8ull));
TAIL_STATIC(0x5373f0u,537);
}
B5425e8:L5425e8:{c.instructions+=2;NFSU2_TR(0x5425e8);
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
B5425ed:{NFSU2_TR(0x5425ed);
if(r1(R+518)){{goto L5425f8;}}
}
B5425ef:L5425ef:{c.instructions+=2;NFSU2_TR(0x5425ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5425f0:{NFSU2_TR(0x5425f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5425f5ull));
TAIL_STATIC(0x575630u,575);
}
B5425f5:L5425f5:{c.instructions+=1;NFSU2_TR(0x5425f5);
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
B5425f8:L5425f8:{c.instructions+=3;NFSU2_TR(0x5425f8);
__builtin_memmove((R+0),(R+24),4);
}
B5425fa:{NFSU2_TR(0x5425fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5425fb:{NFSU2_TR(0x5425fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542600:L542600:{c.instructions+=5;NFSU2_TR(0x542600);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542604:{NFSU2_TR(0x542604);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542608:{NFSU2_TR(0x542608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542609:{NFSU2_TR(0x542609);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54260a:{NFSU2_TR(0x54260a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54260full));
TAIL_STATIC(0x4953c0u,495);
}
B54260f:L54260f:{c.instructions+=3;NFSU2_TR(0x54260f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B542612:{NFSU2_TR(0x542612);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542614:{NFSU2_TR(0x542614);
if(r1(R+518)){{goto L54262a;}}
}
B542616:L542616:{c.instructions+=6;NFSU2_TR(0x542616);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54261a:{NFSU2_TR(0x54261a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54261e:{NFSU2_TR(0x54261e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54261f:{NFSU2_TR(0x54261f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542620:{NFSU2_TR(0x542620);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542621:{NFSU2_TR(0x542621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542626ull));
TAIL_STATIC(0x537b30u,537);
}
B542626:L542626:{c.instructions+=2;NFSU2_TR(0x542626);
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
B542629:{NFSU2_TR(0x542629);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54262a:L54262a:{c.instructions+=2;NFSU2_TR(0x54262a);
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
B54262c:{NFSU2_TR(0x54262c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542630:L542630:{c.instructions+=5;NFSU2_TR(0x542630);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542634:{NFSU2_TR(0x542634);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542635:{NFSU2_TR(0x542635);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542636:{NFSU2_TR(0x542636);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542637:{NFSU2_TR(0x542637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54263cull));
TAIL_STATIC(0x505450u,505);
}
B54263c:L54263c:{c.instructions+=5;NFSU2_TR(0x54263c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B542640:{NFSU2_TR(0x542640);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B542643:{NFSU2_TR(0x542643);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542645:{NFSU2_TR(0x542645);
__builtin_memmove((R+24),(R+0),4);
}
B542647:{NFSU2_TR(0x542647);
if(r1(R+518)){{goto L542662;}}
}
B542649:L542649:{c.instructions+=2;NFSU2_TR(0x542649);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54264a:{NFSU2_TR(0x54264a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54264full));
TAIL_STATIC(0x52cef0u,52c);
}
B54264f:L54264f:{c.instructions+=3;NFSU2_TR(0x54264f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B542652:{NFSU2_TR(0x542652);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542654:{NFSU2_TR(0x542654);
if(r1(R+518)){{goto L542662;}}
}
B542656:L542656:{c.instructions+=3;NFSU2_TR(0x542656);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542657:{NFSU2_TR(0x542657);
__builtin_memmove((R+4),(R+0),4);
}
B542659:{NFSU2_TR(0x542659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54265eull));
TAIL_STATIC(0x517f80u,517);
}
B54265e:L54265e:{c.instructions+=2;NFSU2_TR(0x54265e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542660:{NFSU2_TR(0x542660);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542675;}}
}
B542662:L542662:{c.instructions+=3;NFSU2_TR(0x542662);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B542667:{NFSU2_TR(0x542667);
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
B542669:{NFSU2_TR(0x542669);
if(r1(R+518)){{goto L5426af;}}
}
B54266b:L54266b:{c.instructions+=4;NFSU2_TR(0x54266b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54266e:{NFSU2_TR(0x54266e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54266f:{NFSU2_TR(0x54266f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542670:{NFSU2_TR(0x542670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542675ull));
TAIL_STATIC(0x52c570u,52c);
}
B542675:L542675:{c.instructions+=3;NFSU2_TR(0x542675);
__builtin_memmove((R+24),(R+0),4);
}
B542677:{NFSU2_TR(0x542677);
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
B542679:{NFSU2_TR(0x542679);
if(r1(R+518)){{goto L5426af;}}
}
B54267b:L54267b:{c.instructions+=2;NFSU2_TR(0x54267b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x100ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B542682:{NFSU2_TR(0x542682);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5426af;}}
}
B542684:L542684:{c.instructions+=6;NFSU2_TR(0x542684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542687:{NFSU2_TR(0x542687);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54268b:{NFSU2_TR(0x54268b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B54268e:{NFSU2_TR(0x54268e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54268f:{NFSU2_TR(0x54268f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542690:{NFSU2_TR(0x542690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542695ull));
TAIL_STATIC(0x504500u,504);
}
B542695:L542695:{c.instructions+=3;NFSU2_TR(0x542695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B542698:{NFSU2_TR(0x542698);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54269a:{NFSU2_TR(0x54269a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5426a3;}}
}
B54269c:L54269c:{c.instructions+=1;NFSU2_TR(0x54269c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5426a3:L5426a3:{c.instructions+=5;NFSU2_TR(0x5426a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426a5:{NFSU2_TR(0x5426a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426a6:{NFSU2_TR(0x5426a6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426a8:{NFSU2_TR(0x5426a8);
__builtin_memmove((R+4),(R+24),4);
}
B5426aa:{NFSU2_TR(0x5426aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5426afull));
TAIL_STATIC(0x5178d0u,517);
}
B5426af:L5426af:{c.instructions+=3;NFSU2_TR(0x5426af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5426b0:{NFSU2_TR(0x5426b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5426b1:{NFSU2_TR(0x5426b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5426c0:L5426c0:{c.instructions+=5;NFSU2_TR(0x5426c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5426c4:{NFSU2_TR(0x5426c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426c5:{NFSU2_TR(0x5426c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426c6:{NFSU2_TR(0x5426c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426c7:{NFSU2_TR(0x5426c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5426ccull));
TAIL_STATIC(0x505450u,505);
}
B5426cc:L5426cc:{c.instructions+=5;NFSU2_TR(0x5426cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5426d0:{NFSU2_TR(0x5426d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5426d3:{NFSU2_TR(0x5426d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5426d5:{NFSU2_TR(0x5426d5);
__builtin_memmove((R+24),(R+0),4);
}
B5426d7:{NFSU2_TR(0x5426d7);
if(r1(R+518)){{goto L5426f2;}}
}
B5426d9:L5426d9:{c.instructions+=2;NFSU2_TR(0x5426d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426da:{NFSU2_TR(0x5426da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5426dfull));
TAIL_STATIC(0x52cef0u,52c);
}
B5426df:L5426df:{c.instructions+=3;NFSU2_TR(0x5426df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5426e2:{NFSU2_TR(0x5426e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5426e4:{NFSU2_TR(0x5426e4);
if(r1(R+518)){{goto L5426f2;}}
}
B5426e6:L5426e6:{c.instructions+=3;NFSU2_TR(0x5426e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426e7:{NFSU2_TR(0x5426e7);
__builtin_memmove((R+4),(R+0),4);
}
B5426e9:{NFSU2_TR(0x5426e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5426eeull));
TAIL_STATIC(0x517f80u,517);
}
B5426ee:L5426ee:{c.instructions+=2;NFSU2_TR(0x5426ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5426f0:{NFSU2_TR(0x5426f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542709;}}
}
B5426f2:L5426f2:{c.instructions+=3;NFSU2_TR(0x5426f2);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5426f7:{NFSU2_TR(0x5426f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5426f9:{NFSU2_TR(0x5426f9);
if(r1(R+518)){{goto L542707;}}
}
B5426fb:L5426fb:{c.instructions+=4;NFSU2_TR(0x5426fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5426fe:{NFSU2_TR(0x5426fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5426ff:{NFSU2_TR(0x5426ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542700:{NFSU2_TR(0x542700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542705ull));
TAIL_STATIC(0x52c570u,52c);
}
B542705:L542705:{c.instructions+=1;NFSU2_TR(0x542705);
{goto L542709;}
}
B542707:L542707:{c.instructions+=1;NFSU2_TR(0x542707);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B542709:L542709:{c.instructions+=6;NFSU2_TR(0x542709);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54270d:{NFSU2_TR(0x54270d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542711:{NFSU2_TR(0x542711);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542712:{NFSU2_TR(0x542712);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542713:{NFSU2_TR(0x542713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542714:{NFSU2_TR(0x542714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542719ull));
TAIL_STATIC(0x51cf70u,51c);
}
B542719:L542719:{c.instructions+=4;NFSU2_TR(0x542719);
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
B54271c:{NFSU2_TR(0x54271c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54271d:{NFSU2_TR(0x54271d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54271e:{NFSU2_TR(0x54271e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542720:L542720:{c.instructions+=7;NFSU2_TR(0x542720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542721:{NFSU2_TR(0x542721);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542722:{NFSU2_TR(0x542722);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542723:{NFSU2_TR(0x542723);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542724:{NFSU2_TR(0x542724);
__builtin_memmove((R+28),(R+4),4);
}
B542726:{NFSU2_TR(0x542726);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B542728:{NFSU2_TR(0x542728);
{goto L542730;}
}
B542730:L542730:{c.instructions+=5;NFSU2_TR(0x542730);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542733:{NFSU2_TR(0x542733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542734:{NFSU2_TR(0x542734);
u8 U[4];
w4(U+0,u32(0x79c05cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542739:{NFSU2_TR(0x542739);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54273d:{NFSU2_TR(0x54273d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542742ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B542742:L542742:{c.instructions+=4;NFSU2_TR(0x542742);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B542745:{NFSU2_TR(0x542745);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B542748:{NFSU2_TR(0x542748);
__builtin_memmove((R+24),(R+0),4);
}
B54274a:{NFSU2_TR(0x54274a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54288c;}}
}
B542750:L542750:{c.instructions+=1;NFSU2_TR(0x542750);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5428a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B542757:L542757:{c.instructions+=2;NFSU2_TR(0x542757);
u8 U[1];
w1(U+0,u8(u32(m1(0x838524))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54275e:{NFSU2_TR(0x54275e);
if(r1(R+518)){{goto L542798;}}
}
B542760:L542760:{c.instructions+=3;NFSU2_TR(0x542760);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B542763:{NFSU2_TR(0x542763);
u8 U[4];
w4(U+0,u32(0x79c050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542768:{NFSU2_TR(0x542768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54276dull));
TAIL_STATIC(0x50b9c0u,50b);
}
B54276d:L54276d:{c.instructions+=4;NFSU2_TR(0x54276d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54276e:{NFSU2_TR(0x54276e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54276f:{NFSU2_TR(0x54276f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542770:{NFSU2_TR(0x542770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542775ull));
TAIL_STATIC(0x495430u,495);
}
B542775:L542775:{c.instructions+=4;NFSU2_TR(0x542775);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542778:{NFSU2_TR(0x542778);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542779:{NFSU2_TR(0x542779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54277a:{NFSU2_TR(0x54277a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54277full));
TAIL_STATIC(0x495520u,495);
}
B54277f:L54277f:{c.instructions+=6;NFSU2_TR(0x54277f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542782:{NFSU2_TR(0x542782);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542784:{NFSU2_TR(0x542784);
u8 U[4];
w4(U+0,u32(0x79c048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542789:{NFSU2_TR(0x542789);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54278a:{NFSU2_TR(0x54278a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54278b:{NFSU2_TR(0x54278b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542790ull));
TAIL_STATIC(0x537c00u,537);
}
B542790:L542790:{c.instructions+=2;NFSU2_TR(0x542790);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B542793:{NFSU2_TR(0x542793);
{goto L54288c;}
}
B542798:L542798:{c.instructions+=4;NFSU2_TR(0x542798);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54279b:{NFSU2_TR(0x54279b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54279c:{NFSU2_TR(0x54279c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54279d:{NFSU2_TR(0x54279d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5427a2ull));
TAIL_STATIC(0x4954e0u,495);
}
B5427a2:L5427a2:{c.instructions+=6;NFSU2_TR(0x5427a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5427a5:{NFSU2_TR(0x5427a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427a7:{NFSU2_TR(0x5427a7);
u8 U[4];
w4(U+0,u32(0x78feecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427ac:{NFSU2_TR(0x5427ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427ad:{NFSU2_TR(0x5427ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427ae:{NFSU2_TR(0x5427ae);
{goto L542884;}
}
B5427b3:L5427b3:{c.instructions+=2;NFSU2_TR(0x5427b3);
u8 U[1];
w1(U+0,u8(u32(m1(0x838524))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5427ba:{NFSU2_TR(0x5427ba);
if(r1(R+518)){{goto L5427f4;}}
}
B5427bc:L5427bc:{c.instructions+=1;NFSU2_TR(0x5427bc);
u8 U[4];
w4(U+0,u32(0x79c02cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427c1:L5427c1:{c.instructions+=2;NFSU2_TR(0x5427c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5427c4:{NFSU2_TR(0x5427c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5427c9ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B5427c9:L5427c9:{c.instructions+=4;NFSU2_TR(0x5427c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427ca:{NFSU2_TR(0x5427ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427cb:{NFSU2_TR(0x5427cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427cc:{NFSU2_TR(0x5427cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5427d1ull));
TAIL_STATIC(0x495430u,495);
}
B5427d1:L5427d1:{c.instructions+=4;NFSU2_TR(0x5427d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5427d4:{NFSU2_TR(0x5427d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427d5:{NFSU2_TR(0x5427d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427d6:{NFSU2_TR(0x5427d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5427dbull));
TAIL_STATIC(0x495520u,495);
}
B5427db:L5427db:{c.instructions+=6;NFSU2_TR(0x5427db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5427de:{NFSU2_TR(0x5427de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427e0:{NFSU2_TR(0x5427e0);
u8 U[4];
w4(U+0,u32(0x79c048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427e5:{NFSU2_TR(0x5427e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427e6:{NFSU2_TR(0x5427e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427e7:{NFSU2_TR(0x5427e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5427ecull));
TAIL_STATIC(0x537c00u,537);
}
B5427ec:L5427ec:{c.instructions+=2;NFSU2_TR(0x5427ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5427ef:{NFSU2_TR(0x5427ef);
{goto L54288c;}
}
B5427f4:L5427f4:{c.instructions+=6;NFSU2_TR(0x5427f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5427f7:{NFSU2_TR(0x5427f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427f9:{NFSU2_TR(0x5427f9);
u8 U[4];
w4(U+0,u32(0x78feecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427fe:{NFSU2_TR(0x5427fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5427ff:{NFSU2_TR(0x5427ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542800:{NFSU2_TR(0x542800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542805ull));
TAIL_STATIC(0x537c00u,537);
}
B542805:L542805:{c.instructions+=4;NFSU2_TR(0x542805);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542808:{NFSU2_TR(0x542808);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542809:{NFSU2_TR(0x542809);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54280a:{NFSU2_TR(0x54280a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54280full));
TAIL_STATIC(0x4954e0u,495);
}
B54280f:L54280f:{c.instructions+=1;NFSU2_TR(0x54280f);
{goto L542889;}
}
B542811:L542811:{c.instructions+=2;NFSU2_TR(0x542811);
u8 U[1];
w1(U+0,u8(u32(m1(0x838524))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542818:{NFSU2_TR(0x542818);
if(r1(R+518)){{goto L542845;}}
}
B54281a:L54281a:{c.instructions+=3;NFSU2_TR(0x54281a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54281d:{NFSU2_TR(0x54281d);
u8 U[4];
w4(U+0,u32(0x79c014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542822:{NFSU2_TR(0x542822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542827ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B542827:L542827:{c.instructions+=4;NFSU2_TR(0x542827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542828:{NFSU2_TR(0x542828);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542829:{NFSU2_TR(0x542829);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54282a:{NFSU2_TR(0x54282a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54282full));
TAIL_STATIC(0x495430u,495);
}
B54282f:L54282f:{c.instructions+=6;NFSU2_TR(0x54282f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542832:{NFSU2_TR(0x542832);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542834:{NFSU2_TR(0x542834);
u8 U[4];
w4(U+0,u32(0x79c048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542839:{NFSU2_TR(0x542839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54283a:{NFSU2_TR(0x54283a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54283b:{NFSU2_TR(0x54283b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542840ull));
TAIL_STATIC(0x537c00u,537);
}
B542840:L542840:{c.instructions+=2;NFSU2_TR(0x542840);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B542843:{NFSU2_TR(0x542843);
{goto L54288c;}
}
B542845:L542845:{c.instructions+=6;NFSU2_TR(0x542845);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542848:{NFSU2_TR(0x542848);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54284a:{NFSU2_TR(0x54284a);
u8 U[4];
w4(U+0,u32(0x78feecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54284f:{NFSU2_TR(0x54284f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542850:{NFSU2_TR(0x542850);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542851:{NFSU2_TR(0x542851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542856ull));
TAIL_STATIC(0x537c00u,537);
}
B542856:L542856:{c.instructions+=2;NFSU2_TR(0x542856);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B542859:{NFSU2_TR(0x542859);
{goto L54288c;}
}
B54285b:L54285b:{c.instructions+=2;NFSU2_TR(0x54285b);
u8 U[1];
w1(U+0,u8(u32(m1(0x838524))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542862:{NFSU2_TR(0x542862);
if(r1(R+518)){{goto L54286e;}}
}
B542864:L542864:{c.instructions+=2;NFSU2_TR(0x542864);
u8 U[4];
w4(U+0,u32(0x79023cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542869:{NFSU2_TR(0x542869);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5427c1u);}goto L5427c1;}
}
B54286e:L54286e:{c.instructions+=4;NFSU2_TR(0x54286e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542871:{NFSU2_TR(0x542871);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542872:{NFSU2_TR(0x542872);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542873:{NFSU2_TR(0x542873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542878ull));
TAIL_STATIC(0x4954e0u,495);
}
B542878:L542878:{c.instructions+=5;NFSU2_TR(0x542878);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54287b:{NFSU2_TR(0x54287b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54287d:{NFSU2_TR(0x54287d);
u8 U[4];
w4(U+0,u32(0x78feecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542882:{NFSU2_TR(0x542882);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542883:{NFSU2_TR(0x542883);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542884:L542884:{c.instructions+=1;NFSU2_TR(0x542884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542889ull));
TAIL_STATIC(0x537c00u,537);
}
B542889:L542889:{c.instructions+=1;NFSU2_TR(0x542889);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54288c:L54288c:{c.instructions+=3;NFSU2_TR(0x54288c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B542890:{NFSU2_TR(0x542890);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B542893:{NFSU2_TR(0x542893);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542730u);}goto L542730;}}
}
B542899:L542899:{c.instructions+=5;NFSU2_TR(0x542899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54289a:{NFSU2_TR(0x54289a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54289b:{NFSU2_TR(0x54289b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54289c:{NFSU2_TR(0x54289c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54289d:{NFSU2_TR(0x54289d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5428b0:L5428b0:{c.instructions+=5;NFSU2_TR(0x5428b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5428b4:{NFSU2_TR(0x5428b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5428b9:{NFSU2_TR(0x5428b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5428ba:{NFSU2_TR(0x5428ba);
__builtin_memmove((R+28),(R+4),4);
}
B5428bc:{NFSU2_TR(0x5428bc);
if(r1(R+518)){{goto L542930;}}
}
B5428be:L5428be:{c.instructions+=3;NFSU2_TR(0x5428be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5428c0:{NFSU2_TR(0x5428c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5428c4:{NFSU2_TR(0x5428c4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5428d9;}}
}
B5428c6:L5428c6:{c.instructions+=2;NFSU2_TR(0x5428c6);
u8 U[4];
w4(U+0,u32(0x79c0a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5428cb:{NFSU2_TR(0x5428cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5428d0ull));
TAIL_STATIC(0x51dbe0u,51d);
}
B5428d0:L5428d0:{c.instructions+=2;NFSU2_TR(0x5428d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w4(U+4,u32(0x339f3277ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5428d7:{NFSU2_TR(0x5428d7);
{goto L54291b;}
}
B5428d9:L5428d9:{c.instructions+=2;NFSU2_TR(0x5428d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5428db:{NFSU2_TR(0x5428db);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5428f0;}}
}
B5428dd:L5428dd:{c.instructions+=2;NFSU2_TR(0x5428dd);
u8 U[4];
w4(U+0,u32(0x79c090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5428e2:{NFSU2_TR(0x5428e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5428e7ull));
TAIL_STATIC(0x51dbe0u,51d);
}
B5428e7:L5428e7:{c.instructions+=2;NFSU2_TR(0x5428e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w4(U+4,u32(0xdd0f9cdaull));
s4(u32(r4(U+0)),r4(U+4));
}
B5428ee:{NFSU2_TR(0x5428ee);
{goto L54291b;}
}
B5428f0:L5428f0:{c.instructions+=2;NFSU2_TR(0x5428f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5428f5:{NFSU2_TR(0x5428f5);
if(r1(R+518)){{goto L54290a;}}
}
B5428f7:L5428f7:{c.instructions+=2;NFSU2_TR(0x5428f7);
u8 U[4];
w4(U+0,u32(0x79c080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5428fc:{NFSU2_TR(0x5428fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542901ull));
TAIL_STATIC(0x51dbe0u,51d);
}
B542901:L542901:{c.instructions+=2;NFSU2_TR(0x542901);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w4(U+4,u32(0x40aaac1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B542908:{NFSU2_TR(0x542908);
{goto L54291b;}
}
B54290a:L54290a:{c.instructions+=2;NFSU2_TR(0x54290a);
u8 U[4];
w4(U+0,u32(0x79c070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54290f:{NFSU2_TR(0x54290f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542914ull));
TAIL_STATIC(0x51dbe0u,51d);
}
B542914:L542914:{c.instructions+=1;NFSU2_TR(0x542914);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w4(U+4,u32(0x1d39c830ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54291b:L54291b:{c.instructions+=4;NFSU2_TR(0x54291b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54291e:{NFSU2_TR(0x54291e);
u8 U[4];
w4(U+0,u32(0x3b949cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542923:{NFSU2_TR(0x542923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542924:{NFSU2_TR(0x542924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542929ull));
TAIL_STATIC(0x4954e0u,495);
}
B542929:L542929:{c.instructions+=3;NFSU2_TR(0x542929);
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
B54292c:{NFSU2_TR(0x54292c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54292d:{NFSU2_TR(0x54292d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542930:L542930:{c.instructions+=5;NFSU2_TR(0x542930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542931:{NFSU2_TR(0x542931);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B542935:{NFSU2_TR(0x542935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542938:{NFSU2_TR(0x542938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54293a:{NFSU2_TR(0x54293a);
if(r1(R+518)){{goto L54294c;}}
}
B54293c:L54293c:{c.instructions+=4;NFSU2_TR(0x54293c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54293e:{NFSU2_TR(0x54293e);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542943:{NFSU2_TR(0x542943);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542944:{NFSU2_TR(0x542944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542949ull));
TAIL_STATIC(0x51cf70u,51c);
}
B542949:L542949:{c.instructions+=1;NFSU2_TR(0x542949);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54294c:L54294c:{c.instructions+=3;NFSU2_TR(0x54294c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54294f:{NFSU2_TR(0x54294f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542951:{NFSU2_TR(0x542951);
if(r1(R+518)){{goto L542963;}}
}
B542953:L542953:{c.instructions+=4;NFSU2_TR(0x542953);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542955:{NFSU2_TR(0x542955);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54295a:{NFSU2_TR(0x54295a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54295b:{NFSU2_TR(0x54295b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542960ull));
TAIL_STATIC(0x51cf70u,51c);
}
B542960:L542960:{c.instructions+=1;NFSU2_TR(0x542960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B542963:L542963:{c.instructions+=5;NFSU2_TR(0x542963);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542968:{NFSU2_TR(0x542968);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54296d:{NFSU2_TR(0x54296d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B542970:{NFSU2_TR(0x542970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542971:{NFSU2_TR(0x542971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542976ull));
TAIL_STATIC(0x50c960u,50c);
}
B542976:L542976:{c.instructions+=5;NFSU2_TR(0x542976);
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
B542979:{NFSU2_TR(0x542979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54297a:{NFSU2_TR(0x54297a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w4(U+4,u32(0xa3e4657bull));
s4(u32(r4(U+0)),r4(U+4));
}
B542981:{NFSU2_TR(0x542981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542982:{NFSU2_TR(0x542982);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542990:L542990:{c.instructions+=7;NFSU2_TR(0x542990);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542991:{NFSU2_TR(0x542991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542992:{NFSU2_TR(0x542992);
__builtin_memmove((R+28),(R+4),4);
}
B542994:{NFSU2_TR(0x542994);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542997:{NFSU2_TR(0x542997);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B54299a:{NFSU2_TR(0x54299a);
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
B54299c:{NFSU2_TR(0x54299c);
if(r1(R+518)){{goto L542ab6;}}
}
B5429a2:L5429a2:{c.instructions+=2;NFSU2_TR(0x5429a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5429a4:{NFSU2_TR(0x5429a4);
if(r1(R+518)){{goto L5429ab;}}
}
B5429a6:L5429a6:{c.instructions+=2;NFSU2_TR(0x5429a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5429a9:{NFSU2_TR(0x5429a9);
{goto L5429ad;}
}
B5429ab:L5429ab:{c.instructions+=1;NFSU2_TR(0x5429ab);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5429ad:L5429ad:{c.instructions+=2;NFSU2_TR(0x5429ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5429ae:{NFSU2_TR(0x5429ae);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5429b2:L5429b2:{c.instructions+=2;NFSU2_TR(0x5429b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5429b4:{NFSU2_TR(0x5429b4);
if(r1(R+518)){{goto L5429bb;}}
}
B5429b6:L5429b6:{c.instructions+=2;NFSU2_TR(0x5429b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5429b9:{NFSU2_TR(0x5429b9);
{goto L5429bd;}
}
B5429bb:L5429bb:{c.instructions+=1;NFSU2_TR(0x5429bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5429bd:L5429bd:{c.instructions+=2;NFSU2_TR(0x5429bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5429bf:{NFSU2_TR(0x5429bf);
if(r1(R+518)){{goto L542a1b;}}
}
B5429c1:L5429c1:{c.instructions+=2;NFSU2_TR(0x5429c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5429c3:{NFSU2_TR(0x5429c3);
if(r1(R+518)){{goto L5429eb;}}
}
B5429c5:L5429c5:{c.instructions+=3;NFSU2_TR(0x5429c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5429c8:{NFSU2_TR(0x5429c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5429ca:{NFSU2_TR(0x5429ca);
if(r1(R+518)){{goto L5429eb;}}
}
B5429cc:L5429cc:{c.instructions+=3;NFSU2_TR(0x5429cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5429cf:{NFSU2_TR(0x5429cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5429d1:{NFSU2_TR(0x5429d1);
if(r1(R+518)){{goto L5429dc;}}
}
B5429d3:L5429d3:{c.instructions+=2;NFSU2_TR(0x5429d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5429d4:{NFSU2_TR(0x5429d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5429d9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5429d9:L5429d9:{c.instructions+=1;NFSU2_TR(0x5429d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5429dc:L5429dc:{c.instructions+=3;NFSU2_TR(0x5429dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5429df:{NFSU2_TR(0x5429df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5429e1:{NFSU2_TR(0x5429e1);
if(r1(R+518)){{goto L542a0b;}}
}
B5429e3:L5429e3:{c.instructions+=2;NFSU2_TR(0x5429e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5429e4:{NFSU2_TR(0x5429e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5429e9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5429e9:L5429e9:{c.instructions+=1;NFSU2_TR(0x5429e9);
{goto L542a08;}
}
B5429eb:L5429eb:{c.instructions+=3;NFSU2_TR(0x5429eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5429ee:{NFSU2_TR(0x5429ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5429f0:{NFSU2_TR(0x5429f0);
if(r1(R+518)){{goto L5429fb;}}
}
B5429f2:L5429f2:{c.instructions+=2;NFSU2_TR(0x5429f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5429f3:{NFSU2_TR(0x5429f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5429f8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5429f8:L5429f8:{c.instructions+=1;NFSU2_TR(0x5429f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5429fb:L5429fb:{c.instructions+=3;NFSU2_TR(0x5429fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5429fe:{NFSU2_TR(0x5429fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542a00:{NFSU2_TR(0x542a00);
if(r1(R+518)){{goto L542a0b;}}
}
B542a02:L542a02:{c.instructions+=2;NFSU2_TR(0x542a02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542a03:{NFSU2_TR(0x542a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542a08ull));
TAIL_STATIC(0x50ca00u,50c);
}
B542a08:L542a08:{c.instructions+=1;NFSU2_TR(0x542a08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B542a0b:L542a0b:{c.instructions+=3;NFSU2_TR(0x542a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542a0e:{NFSU2_TR(0x542a0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542a10:{NFSU2_TR(0x542a10);
if(r1(R+518)){{goto L542a17;}}
}
B542a12:L542a12:{c.instructions+=2;NFSU2_TR(0x542a12);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B542a15:{NFSU2_TR(0x542a15);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5429b2u);}goto L5429b2;}
}
B542a17:L542a17:{c.instructions+=2;NFSU2_TR(0x542a17);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B542a19:{NFSU2_TR(0x542a19);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5429b2u);}goto L5429b2;}
}
B542a1b:L542a1b:{c.instructions+=3;NFSU2_TR(0x542a1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542a1d:{NFSU2_TR(0x542a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542a1e:{NFSU2_TR(0x542a1e);
if(r1(R+518)){{goto L542a3f;}}
}
B542a20:L542a20:{c.instructions+=2;NFSU2_TR(0x542a20);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B542a27:{NFSU2_TR(0x542a27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542a3f;}}
}
B542a29:L542a29:{c.instructions+=4;NFSU2_TR(0x542a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542a2c:{NFSU2_TR(0x542a2c);
u8 U[4];
w4(U+0,u32(0x3b949cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542a31:{NFSU2_TR(0x542a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542a32:{NFSU2_TR(0x542a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542a37ull));
TAIL_STATIC(0x495520u,495);
}
B542a37:L542a37:{c.instructions+=4;NFSU2_TR(0x542a37);
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
B542a3a:{NFSU2_TR(0x542a3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542a3b:{NFSU2_TR(0x542a3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542a3c:{NFSU2_TR(0x542a3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542a3f:L542a3f:{c.instructions+=3;NFSU2_TR(0x542a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B542a42:{NFSU2_TR(0x542a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542a44:{NFSU2_TR(0x542a44);
if(r1(R+518)){{goto L542a63;}}
}
B542a46:L542a46:{c.instructions+=2;NFSU2_TR(0x542a46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542a47:{NFSU2_TR(0x542a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542a4cull));
TAIL_STATIC(0x52cef0u,52c);
}
B542a4c:L542a4c:{c.instructions+=3;NFSU2_TR(0x542a4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B542a4f:{NFSU2_TR(0x542a4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542a51:{NFSU2_TR(0x542a51);
if(r1(R+518)){{goto L542a63;}}
}
B542a53:L542a53:{c.instructions+=3;NFSU2_TR(0x542a53);
u8 U[4];
w4(U+0,u32(0x3b949cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542a58:{NFSU2_TR(0x542a58);
__builtin_memmove((R+4),(R+0),4);
}
B542a5a:{NFSU2_TR(0x542a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542a5full));
TAIL_STATIC(0x517f80u,517);
}
B542a5f:L542a5f:{c.instructions+=2;NFSU2_TR(0x542a5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542a61:{NFSU2_TR(0x542a61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542a7e;}}
}
B542a63:L542a63:{c.instructions+=3;NFSU2_TR(0x542a63);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B542a68:{NFSU2_TR(0x542a68);
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
B542a6a:{NFSU2_TR(0x542a6a);
if(r1(R+518)){{goto L542ab6;}}
}
B542a6c:L542a6c:{c.instructions+=4;NFSU2_TR(0x542a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542a6f:{NFSU2_TR(0x542a6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542a70:{NFSU2_TR(0x542a70);
u8 U[4];
w4(U+0,u32(0x3b949cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542a75:{NFSU2_TR(0x542a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542a7aull));
TAIL_STATIC(0x52c570u,52c);
}
B542a7a:L542a7a:{c.instructions+=2;NFSU2_TR(0x542a7a);
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
B542a7c:{NFSU2_TR(0x542a7c);
if(r1(R+518)){{goto L542ab6;}}
}
B542a7e:L542a7e:{c.instructions+=3;NFSU2_TR(0x542a7e);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B542a84:{NFSU2_TR(0x542a84);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542a86:{NFSU2_TR(0x542a86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542a8e;}}
}
B542a88:L542a88:{c.instructions+=2;NFSU2_TR(0x542a88);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B542a8c:{NFSU2_TR(0x542a8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542a95;}}
}
B542a8e:L542a8e:{c.instructions+=1;NFSU2_TR(0x542a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B542a95:L542a95:{c.instructions+=2;NFSU2_TR(0x542a95);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B542a99:{NFSU2_TR(0x542a99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542ab6;}}
}
B542a9b:L542a9b:{c.instructions+=4;NFSU2_TR(0x542a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542a9e:{NFSU2_TR(0x542a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542aa1:{NFSU2_TR(0x542aa1);
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
B542aa3:{NFSU2_TR(0x542aa3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L542ab6;}}
}
B542aa5:L542aa5:{c.instructions+=1;NFSU2_TR(0x542aa5);
__builtin_memmove((R+24),(R+0),4);
}
B542aa7:L542aa7:{c.instructions+=2;NFSU2_TR(0x542aa7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542aa8:{NFSU2_TR(0x542aa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542aadull));
TAIL_STATIC(0x50ca00u,50c);
}
B542aad:L542aad:{c.instructions+=4;NFSU2_TR(0x542aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542ab0:{NFSU2_TR(0x542ab0);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B542ab3:{NFSU2_TR(0x542ab3);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B542ab4:{NFSU2_TR(0x542ab4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542aa7u);}goto L542aa7;}}
}
B542ab6:L542ab6:{c.instructions+=3;NFSU2_TR(0x542ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542ab7:{NFSU2_TR(0x542ab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542ab8:{NFSU2_TR(0x542ab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542ac0:L542ac0:{c.instructions+=35;NFSU2_TR(0x542ac0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B542ac4:{NFSU2_TR(0x542ac4);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B542ac8:{NFSU2_TR(0x542ac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B542acb:{NFSU2_TR(0x542acb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542acc:{NFSU2_TR(0x542acc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B542ace:{NFSU2_TR(0x542ace);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542acf:{NFSU2_TR(0x542acf);
__builtin_memmove((R+24),(R+4),4);
}
B542ad1:{NFSU2_TR(0x542ad1);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B542ad5:{NFSU2_TR(0x542ad5);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B542ad7:{NFSU2_TR(0x542ad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542ada:{NFSU2_TR(0x542ada);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542add:{NFSU2_TR(0x542add);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542ae0:{NFSU2_TR(0x542ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542ae3:{NFSU2_TR(0x542ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542ae6:{NFSU2_TR(0x542ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542ae9:{NFSU2_TR(0x542ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542aec:{NFSU2_TR(0x542aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542aef:{NFSU2_TR(0x542aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542af2:{NFSU2_TR(0x542af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542af5:{NFSU2_TR(0x542af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542af8:{NFSU2_TR(0x542af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542afb:{NFSU2_TR(0x542afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542afe:{NFSU2_TR(0x542afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b01:{NFSU2_TR(0x542b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b04:{NFSU2_TR(0x542b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b07:{NFSU2_TR(0x542b07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b08:{NFSU2_TR(0x542b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B542b0c:{NFSU2_TR(0x542b0c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542b0e:{NFSU2_TR(0x542b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b11:{NFSU2_TR(0x542b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b14:{NFSU2_TR(0x542b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b17:{NFSU2_TR(0x542b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b1a:{NFSU2_TR(0x542b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b1d:{NFSU2_TR(0x542b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b20:{NFSU2_TR(0x542b20);
if(r1(R+518)){{goto L542c86;}}
}
B542b26:L542b26:{c.instructions+=8;NFSU2_TR(0x542b26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b27:{NFSU2_TR(0x542b27);
u8 U[4];
w4(U+0,u32(0x79c0e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b2c:{NFSU2_TR(0x542b2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b2d:{NFSU2_TR(0x542b2d);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b32:{NFSU2_TR(0x542b32);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B542b36:{NFSU2_TR(0x542b36);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b38:{NFSU2_TR(0x542b38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b39:{NFSU2_TR(0x542b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542b3eull));
TAIL_STATIC(0x50c960u,50c);
}
B542b3e:L542b3e:{c.instructions+=5;NFSU2_TR(0x542b3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B542b42:{NFSU2_TR(0x542b42);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B542b46:{NFSU2_TR(0x542b46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b47:{NFSU2_TR(0x542b47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b48:{NFSU2_TR(0x542b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542b4dull));
TAIL_STATIC(0x4953e0u,495);
}
B542b4d:L542b4d:{c.instructions+=8;NFSU2_TR(0x542b4d);
u8 U[4];
w4(U+0,u32(0x79c0e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b52:{NFSU2_TR(0x542b52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b53:{NFSU2_TR(0x542b53);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b58:{NFSU2_TR(0x542b58);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B542b5c:{NFSU2_TR(0x542b5c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b5e:{NFSU2_TR(0x542b5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b5f:{NFSU2_TR(0x542b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b62:{NFSU2_TR(0x542b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542b67ull));
TAIL_STATIC(0x50c960u,50c);
}
B542b67:L542b67:{c.instructions+=4;NFSU2_TR(0x542b67);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B542b6b:{NFSU2_TR(0x542b6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b6c:{NFSU2_TR(0x542b6c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b6d:{NFSU2_TR(0x542b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542b72ull));
TAIL_STATIC(0x4953e0u,495);
}
B542b72:L542b72:{c.instructions+=8;NFSU2_TR(0x542b72);
u8 U[4];
w4(U+0,u32(0x79c0d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b77:{NFSU2_TR(0x542b77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b78:{NFSU2_TR(0x542b78);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b7d:{NFSU2_TR(0x542b7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B542b81:{NFSU2_TR(0x542b81);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b83:{NFSU2_TR(0x542b83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b84:{NFSU2_TR(0x542b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542b87:{NFSU2_TR(0x542b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542b8cull));
TAIL_STATIC(0x50c960u,50c);
}
B542b8c:L542b8c:{c.instructions+=5;NFSU2_TR(0x542b8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4cull))));
}
B542b8f:{NFSU2_TR(0x542b8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B542b93:{NFSU2_TR(0x542b93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b94:{NFSU2_TR(0x542b94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b95:{NFSU2_TR(0x542b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542b9aull));
TAIL_STATIC(0x4953e0u,495);
}
B542b9a:L542b9a:{c.instructions+=8;NFSU2_TR(0x542b9a);
u8 U[4];
w4(U+0,u32(0x79c0c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542b9f:{NFSU2_TR(0x542b9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542ba0:{NFSU2_TR(0x542ba0);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542ba5:{NFSU2_TR(0x542ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542ba8:{NFSU2_TR(0x542ba8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B542bac:{NFSU2_TR(0x542bac);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bae:{NFSU2_TR(0x542bae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542baf:{NFSU2_TR(0x542baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542bb4ull));
TAIL_STATIC(0x50c960u,50c);
}
B542bb4:L542bb4:{c.instructions+=4;NFSU2_TR(0x542bb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B542bb8:{NFSU2_TR(0x542bb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bb9:{NFSU2_TR(0x542bb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bba:{NFSU2_TR(0x542bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542bbfull));
TAIL_STATIC(0x4953e0u,495);
}
B542bbf:L542bbf:{c.instructions+=8;NFSU2_TR(0x542bbf);
u8 U[4];
w4(U+0,u32(0x79c0b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bc4:{NFSU2_TR(0x542bc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bc5:{NFSU2_TR(0x542bc5);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bca:{NFSU2_TR(0x542bca);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B542bce:{NFSU2_TR(0x542bce);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bd0:{NFSU2_TR(0x542bd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bd1:{NFSU2_TR(0x542bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542bd4:{NFSU2_TR(0x542bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542bd9ull));
TAIL_STATIC(0x50c960u,50c);
}
B542bd9:L542bd9:{c.instructions+=4;NFSU2_TR(0x542bd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B542bdd:{NFSU2_TR(0x542bdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bde:{NFSU2_TR(0x542bde);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bdf:{NFSU2_TR(0x542bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542be4ull));
TAIL_STATIC(0x4953e0u,495);
}
B542be4:L542be4:{c.instructions+=9;NFSU2_TR(0x542be4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B542be7:{NFSU2_TR(0x542be7);
u8 U[4];
w4(U+0,u32(0x79c0a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bec:{NFSU2_TR(0x542bec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bed:{NFSU2_TR(0x542bed);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bf2:{NFSU2_TR(0x542bf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B542bf6:{NFSU2_TR(0x542bf6);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bf8:{NFSU2_TR(0x542bf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542bf9:{NFSU2_TR(0x542bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542bfc:{NFSU2_TR(0x542bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542c01ull));
TAIL_STATIC(0x50c960u,50c);
}
B542c01:L542c01:{c.instructions+=4;NFSU2_TR(0x542c01);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B542c05:{NFSU2_TR(0x542c05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c06:{NFSU2_TR(0x542c06);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c07:{NFSU2_TR(0x542c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542c0cull));
TAIL_STATIC(0x4953e0u,495);
}
B542c0c:L542c0c:{c.instructions+=8;NFSU2_TR(0x542c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542c0f:{NFSU2_TR(0x542c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542c12:{NFSU2_TR(0x542c12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542c15:{NFSU2_TR(0x542c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c16:{NFSU2_TR(0x542c16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B542c19:{NFSU2_TR(0x542c19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c1a:{NFSU2_TR(0x542c1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c1b:{NFSU2_TR(0x542c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542c20ull));
TAIL_STATIC(0x51d070u,51d);
}
B542c20:L542c20:{c.instructions+=7;NFSU2_TR(0x542c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542c23:{NFSU2_TR(0x542c23);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542c26:{NFSU2_TR(0x542c26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c27:{NFSU2_TR(0x542c27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542c2a:{NFSU2_TR(0x542c2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c2b:{NFSU2_TR(0x542c2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c2c:{NFSU2_TR(0x542c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542c31ull));
TAIL_STATIC(0x51d730u,51d);
}
B542c31:L542c31:{c.instructions+=4;NFSU2_TR(0x542c31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B542c34:{NFSU2_TR(0x542c34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B542c37:{NFSU2_TR(0x542c37);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B542c39:{NFSU2_TR(0x542c39);
if(r1(R+518)){{goto L542c6e;}}
}
B542c3b:L542c3b:{c.instructions+=2;NFSU2_TR(0x542c3b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B542c3d:{NFSU2_TR(0x542c3d);
if(r1(R+518)){{goto L542c57;}}
}
B542c3f:L542c3f:{c.instructions+=11;NFSU2_TR(0x542c3f);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B542c42:{NFSU2_TR(0x542c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542c43:{NFSU2_TR(0x542c43);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B542c46:{NFSU2_TR(0x542c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542c47:{NFSU2_TR(0x542c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542c4a:{NFSU2_TR(0x542c4a);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B542c4d:{NFSU2_TR(0x542c4d);
__builtin_memmove((R+0),(R+24),4);
}
B542c4f:{NFSU2_TR(0x542c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542c50:{NFSU2_TR(0x542c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542c51:{NFSU2_TR(0x542c51);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B542c54:{NFSU2_TR(0x542c54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542c57:L542c57:{c.instructions+=11;NFSU2_TR(0x542c57);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B542c59:{NFSU2_TR(0x542c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542c5a:{NFSU2_TR(0x542c5a);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B542c5d:{NFSU2_TR(0x542c5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542c5e:{NFSU2_TR(0x542c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542c61:{NFSU2_TR(0x542c61);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B542c64:{NFSU2_TR(0x542c64);
__builtin_memmove((R+0),(R+24),4);
}
B542c66:{NFSU2_TR(0x542c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542c67:{NFSU2_TR(0x542c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542c68:{NFSU2_TR(0x542c68);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B542c6b:{NFSU2_TR(0x542c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542c6e:L542c6e:{c.instructions+=7;NFSU2_TR(0x542c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542c71:{NFSU2_TR(0x542c71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542c74:{NFSU2_TR(0x542c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c75:{NFSU2_TR(0x542c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B542c78:{NFSU2_TR(0x542c78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c79:{NFSU2_TR(0x542c79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542c7a:{NFSU2_TR(0x542c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542c7full));
TAIL_STATIC(0x51d730u,51d);
}
B542c7f:L542c7f:{c.instructions+=3;NFSU2_TR(0x542c7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B542c82:{NFSU2_TR(0x542c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542c85:{NFSU2_TR(0x542c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542c86:L542c86:{c.instructions+=6;NFSU2_TR(0x542c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542c87:{NFSU2_TR(0x542c87);
__builtin_memmove((R+0),(R+24),4);
}
B542c89:{NFSU2_TR(0x542c89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542c8a:{NFSU2_TR(0x542c8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542c8b:{NFSU2_TR(0x542c8b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B542c8e:{NFSU2_TR(0x542c8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542ca0:L542ca0:{c.instructions+=41;NFSU2_TR(0x542ca0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542ca2:{NFSU2_TR(0x542ca2);
u8 U[4];
w4(U+0,u32(0x7779a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542ca7:{NFSU2_TR(0x542ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542cad:{NFSU2_TR(0x542cad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cae:{NFSU2_TR(0x542cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542cb5:{NFSU2_TR(0x542cb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cb6:{NFSU2_TR(0x542cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542cba:{NFSU2_TR(0x542cba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cbb:{NFSU2_TR(0x542cbb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cbc:{NFSU2_TR(0x542cbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cbd:{NFSU2_TR(0x542cbd);
__builtin_memmove((R+24),(R+4),4);
}
B542cbf:{NFSU2_TR(0x542cbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542cc2:{NFSU2_TR(0x542cc2);
u8 U[4];
w4(U+0,u32(0x795cb4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B542cc8:{NFSU2_TR(0x542cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542ccb:{NFSU2_TR(0x542ccb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542ccc:{NFSU2_TR(0x542ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542cd0:{NFSU2_TR(0x542cd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B542cd2:{NFSU2_TR(0x542cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542cd5:{NFSU2_TR(0x542cd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542cd8:{NFSU2_TR(0x542cd8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B542cda:{NFSU2_TR(0x542cda);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542cde:{NFSU2_TR(0x542cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B542ce0:{NFSU2_TR(0x542ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542ce3:{NFSU2_TR(0x542ce3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542ce7:{NFSU2_TR(0x542ce7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542ce8:{NFSU2_TR(0x542ce8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542ce9:{NFSU2_TR(0x542ce9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542ced:{NFSU2_TR(0x542ced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cee:{NFSU2_TR(0x542cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542cf2:{NFSU2_TR(0x542cf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cf3:{NFSU2_TR(0x542cf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B542cf6:{NFSU2_TR(0x542cf6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542cf7:{NFSU2_TR(0x542cf7);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B542cfc:{NFSU2_TR(0x542cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542cff:{NFSU2_TR(0x542cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d02:{NFSU2_TR(0x542d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d05:{NFSU2_TR(0x542d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d08:{NFSU2_TR(0x542d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d0b:{NFSU2_TR(0x542d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d0e:{NFSU2_TR(0x542d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d11:{NFSU2_TR(0x542d11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542d16ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542ac0u);}goto L542ac0;}
}
B542d16:L542d16:{c.instructions+=18;NFSU2_TR(0x542d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542d1a:{NFSU2_TR(0x542d1a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542d1c:{NFSU2_TR(0x542d1c);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B542d20:{NFSU2_TR(0x542d20);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B542d24:{NFSU2_TR(0x542d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d2a:{NFSU2_TR(0x542d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d30:{NFSU2_TR(0x542d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d36:{NFSU2_TR(0x542d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d3c:{NFSU2_TR(0x542d3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B542d42:{NFSU2_TR(0x542d42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542d48:{NFSU2_TR(0x542d48);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B542d4f:{NFSU2_TR(0x542d4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542d55:{NFSU2_TR(0x542d55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542d5b:{NFSU2_TR(0x542d5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542d61:{NFSU2_TR(0x542d61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542d67:{NFSU2_TR(0x542d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d6d:{NFSU2_TR(0x542d6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542d73:{NFSU2_TR(0x542d73);
if(r1(R+518)){{goto L542da7;}}
}
B542d75:L542d75:{c.instructions+=4;NFSU2_TR(0x542d75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d76:{NFSU2_TR(0x542d76);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542d7a:{NFSU2_TR(0x542d7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d7b:{NFSU2_TR(0x542d7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542d80ull));
TAIL_STATIC(0x4953e0u,495);
}
B542d80:L542d80:{c.instructions+=6;NFSU2_TR(0x542d80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B542d86:{NFSU2_TR(0x542d86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d87:{NFSU2_TR(0x542d87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d88:{NFSU2_TR(0x542d88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d89:{NFSU2_TR(0x542d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542d8c:{NFSU2_TR(0x542d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542d91ull));
TAIL_STATIC(0x51d070u,51d);
}
B542d91:L542d91:{c.instructions+=6;NFSU2_TR(0x542d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542d94:{NFSU2_TR(0x542d94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+8),(U+0),4);
}
B542d9a:{NFSU2_TR(0x542d9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d9b:{NFSU2_TR(0x542d9b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d9c:{NFSU2_TR(0x542d9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542d9d:{NFSU2_TR(0x542d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542da2ull));
TAIL_STATIC(0x51d730u,51d);
}
B542da2:L542da2:{c.instructions+=2;NFSU2_TR(0x542da2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B542da5:{NFSU2_TR(0x542da5);
{goto L542dad;}
}
B542da7:L542da7:{c.instructions+=1;NFSU2_TR(0x542da7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B542dad:L542dad:{c.instructions+=3;NFSU2_TR(0x542dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542db0:{NFSU2_TR(0x542db0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542db1:{NFSU2_TR(0x542db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542db6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B542db6:L542db6:{c.instructions+=3;NFSU2_TR(0x542db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542db9:{NFSU2_TR(0x542db9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542dba:{NFSU2_TR(0x542dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542dbfull));
TAIL_STATIC(0x50ca00u,50c);
}
B542dbf:L542dbf:{c.instructions+=3;NFSU2_TR(0x542dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542dc5:{NFSU2_TR(0x542dc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542dc6:{NFSU2_TR(0x542dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542dcbull));
TAIL_STATIC(0x50ca00u,50c);
}
B542dcb:L542dcb:{c.instructions+=10;NFSU2_TR(0x542dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542dcf:{NFSU2_TR(0x542dcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B542dd2:{NFSU2_TR(0x542dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542dd3:{NFSU2_TR(0x542dd3);
__builtin_memmove((R+0),(R+24),4);
}
B542dd5:{NFSU2_TR(0x542dd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542dd6:{NFSU2_TR(0x542dd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542dd7:{NFSU2_TR(0x542dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542dd8:{NFSU2_TR(0x542dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542ddf:{NFSU2_TR(0x542ddf);
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
B542de2:{NFSU2_TR(0x542de2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542df0:L542df0:{c.instructions+=11;NFSU2_TR(0x542df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B542df3:{NFSU2_TR(0x542df3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542df4:{NFSU2_TR(0x542df4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542df5:{NFSU2_TR(0x542df5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542df6:{NFSU2_TR(0x542df6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542df7:{NFSU2_TR(0x542df7);
__builtin_memmove((R+28),(R+4),4);
}
B542df9:{NFSU2_TR(0x542df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542dfc:{NFSU2_TR(0x542dfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542dff:{NFSU2_TR(0x542dff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542e01:{NFSU2_TR(0x542e01);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B542e06:{NFSU2_TR(0x542e06);
if(r1(R+518)){{goto L542f35;}}
}
B542e0c:L542e0c:{c.instructions+=4;NFSU2_TR(0x542e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542e0f:{NFSU2_TR(0x542e0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542e12:{NFSU2_TR(0x542e12);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542e14:{NFSU2_TR(0x542e14);
if(r1(R+518)){{goto L542f35;}}
}
B542e1a:L542e1a:{c.instructions+=3;NFSU2_TR(0x542e1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B542e20:{NFSU2_TR(0x542e20);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542e22:{NFSU2_TR(0x542e22);
if(r1(R+518)){{goto L542e30;}}
}
B542e24:L542e24:{c.instructions+=2;NFSU2_TR(0x542e24);
__builtin_memmove((R+4),(R+28),4);
}
B542e26:{NFSU2_TR(0x542e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542e2bull));
TAIL_STATIC(0x538240u,538);
}
B542e2b:L542e2b:{c.instructions+=1;NFSU2_TR(0x542e2b);
{goto L542eca;}
}
B542e30:L542e30:{c.instructions+=7;NFSU2_TR(0x542e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B542e34:{NFSU2_TR(0x542e34);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542e37:{NFSU2_TR(0x542e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542e3a:{NFSU2_TR(0x542e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B542e3d:{NFSU2_TR(0x542e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B542e40:{NFSU2_TR(0x542e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542e44:{NFSU2_TR(0x542e44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542ef0;}}
}
B542e4a:L542e4a:{c.instructions+=2;NFSU2_TR(0x542e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B542e4d:{NFSU2_TR(0x542e4d);
__builtin_memmove((R+4),(R+4),4);
}
B542e50:L542e50:{c.instructions+=2;NFSU2_TR(0x542e50);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542e52:{NFSU2_TR(0x542e52);
if(r1(R+518)){{goto L542e59;}}
}
B542e54:L542e54:{c.instructions+=2;NFSU2_TR(0x542e54);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B542e57:{NFSU2_TR(0x542e57);
{goto L542e5b;}
}
B542e59:L542e59:{c.instructions+=1;NFSU2_TR(0x542e59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B542e5b:L542e5b:{c.instructions+=2;NFSU2_TR(0x542e5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542e5d:{NFSU2_TR(0x542e5d);
if(r1(R+518)){{goto L542f35;}}
}
B542e63:L542e63:{c.instructions+=3;NFSU2_TR(0x542e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B542e66:{NFSU2_TR(0x542e66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542e68:{NFSU2_TR(0x542e68);
if(r1(R+518)){{goto L542e6f;}}
}
B542e6a:L542e6a:{c.instructions+=2;NFSU2_TR(0x542e6a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B542e6d:{NFSU2_TR(0x542e6d);
{goto L542e71;}
}
B542e6f:L542e6f:{c.instructions+=1;NFSU2_TR(0x542e6f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B542e71:L542e71:{c.instructions+=3;NFSU2_TR(0x542e71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542e72:{NFSU2_TR(0x542e72);
__builtin_memmove((R+4),(R+28),4);
}
B542e74:{NFSU2_TR(0x542e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542e79ull));
TAIL_STATIC(0x51f440u,51f);
}
B542e79:L542e79:{c.instructions+=5;NFSU2_TR(0x542e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542e7c:{NFSU2_TR(0x542e7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542e80:{NFSU2_TR(0x542e80);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B542e82:{NFSU2_TR(0x542e82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B542e84:{NFSU2_TR(0x542e84);
if(r1(R+512)){{goto L542e99;}}
}
B542e86:L542e86:{c.instructions+=5;NFSU2_TR(0x542e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542e89:{NFSU2_TR(0x542e89);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B542e8a:{NFSU2_TR(0x542e8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542e8c:{NFSU2_TR(0x542e8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542e90:{NFSU2_TR(0x542e90);
if(r1(R+518)){{goto L542e97;}}
}
B542e92:L542e92:{c.instructions+=2;NFSU2_TR(0x542e92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B542e95:{NFSU2_TR(0x542e95);
{goto L542e99;}
}
B542e97:L542e97:{c.instructions+=1;NFSU2_TR(0x542e97);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B542e99:L542e99:{c.instructions+=3;NFSU2_TR(0x542e99);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B542e9c:{NFSU2_TR(0x542e9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542e9e:{NFSU2_TR(0x542e9e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542e50u);}goto L542e50;}}
}
B542ea0:L542ea0:{c.instructions+=2;NFSU2_TR(0x542ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B542ea4:{NFSU2_TR(0x542ea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542ea8:L542ea8:{c.instructions+=2;NFSU2_TR(0x542ea8);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B542eab:{NFSU2_TR(0x542eab);
if(r1(R+518)){{goto L542eca;}}
}
B542ead:L542ead:{c.instructions+=6;NFSU2_TR(0x542ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542eb0:{NFSU2_TR(0x542eb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542eb1:{NFSU2_TR(0x542eb1);
__builtin_memmove((R+4),(R+28),4);
}
B542eb3:{NFSU2_TR(0x542eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542eb6:{NFSU2_TR(0x542eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B542eb9:{NFSU2_TR(0x542eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542ebeull));
TAIL_STATIC(0x52e8c0u,52e);
}
B542ebe:L542ebe:{c.instructions+=2;NFSU2_TR(0x542ebe);
__builtin_memmove((R+4),(R+28),4);
}
B542ec0:{NFSU2_TR(0x542ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542ec5ull));
TAIL_STATIC(0x52e9c0u,52e);
}
B542ec5:L542ec5:{c.instructions+=1;NFSU2_TR(0x542ec5);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B542eca:L542eca:{c.instructions+=3;NFSU2_TR(0x542eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B542ecc:{NFSU2_TR(0x542ecc);
__builtin_memmove((R+4),(R+28),4);
}
B542ece:{NFSU2_TR(0x542ece);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542ed1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B542ed1:L542ed1:{c.instructions+=3;NFSU2_TR(0x542ed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B542ed7:{NFSU2_TR(0x542ed7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542ed9:{NFSU2_TR(0x542ed9);
if(r1(R+518)){{goto L542ee2;}}
}
B542edb:L542edb:{c.instructions+=2;NFSU2_TR(0x542edb);
__builtin_memmove((R+4),(R+28),4);
}
B542edd:{NFSU2_TR(0x542edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542ee2ull));
TAIL_STATIC(0x538490u,538);
}
B542ee2:L542ee2:{c.instructions+=7;NFSU2_TR(0x542ee2);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B542ee6:{NFSU2_TR(0x542ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542ee7:{NFSU2_TR(0x542ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542ee8:{NFSU2_TR(0x542ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542ee9:{NFSU2_TR(0x542ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542eea:{NFSU2_TR(0x542eea);
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
B542eed:{NFSU2_TR(0x542eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542ef0:L542ef0:{c.instructions+=2;NFSU2_TR(0x542ef0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542ef3:{NFSU2_TR(0x542ef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542ea8u);}goto L542ea8;}}
}
B542ef5:L542ef5:{c.instructions+=1;NFSU2_TR(0x542ef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B542ef7:L542ef7:{c.instructions+=2;NFSU2_TR(0x542ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542ef9:{NFSU2_TR(0x542ef9);
if(r1(R+518)){{goto L542f00;}}
}
B542efb:L542efb:{c.instructions+=2;NFSU2_TR(0x542efb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B542efe:{NFSU2_TR(0x542efe);
{goto L542f02;}
}
B542f00:L542f00:{c.instructions+=1;NFSU2_TR(0x542f00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B542f02:L542f02:{c.instructions+=2;NFSU2_TR(0x542f02);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542f04:{NFSU2_TR(0x542f04);
if(r1(R+518)){{goto L542f35;}}
}
B542f06:L542f06:{c.instructions+=3;NFSU2_TR(0x542f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B542f09:{NFSU2_TR(0x542f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542f0b:{NFSU2_TR(0x542f0b);
if(r1(R+518)){{goto L542f12;}}
}
B542f0d:L542f0d:{c.instructions+=2;NFSU2_TR(0x542f0d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B542f10:{NFSU2_TR(0x542f10);
{goto L542f14;}
}
B542f12:L542f12:{c.instructions+=1;NFSU2_TR(0x542f12);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B542f14:L542f14:{c.instructions+=3;NFSU2_TR(0x542f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542f17:{NFSU2_TR(0x542f17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542f19:{NFSU2_TR(0x542f19);
if(r1(R+518)){{goto L542f20;}}
}
B542f1b:L542f1b:{c.instructions+=2;NFSU2_TR(0x542f1b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B542f1e:{NFSU2_TR(0x542f1e);
{goto L542f22;}
}
B542f20:L542f20:{c.instructions+=1;NFSU2_TR(0x542f20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B542f22:L542f22:{c.instructions+=2;NFSU2_TR(0x542f22);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542f24:{NFSU2_TR(0x542f24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542f29;}}
}
B542f26:L542f26:{c.instructions+=2;NFSU2_TR(0x542f26);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B542f27:{NFSU2_TR(0x542f27);
__builtin_memmove((R+20),(R+24),4);
}
B542f29:L542f29:{c.instructions+=3;NFSU2_TR(0x542f29);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B542f2c:{NFSU2_TR(0x542f2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542f2e:{NFSU2_TR(0x542f2e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542ef7u);}goto L542ef7;}}
}
B542f30:L542f30:{c.instructions+=1;NFSU2_TR(0x542f30);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x542ea8u);}goto L542ea8;}
}
B542f35:L542f35:{c.instructions+=7;NFSU2_TR(0x542f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B542f36:{NFSU2_TR(0x542f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B542f37:{NFSU2_TR(0x542f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B542f38:{NFSU2_TR(0x542f38);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B542f3a:{NFSU2_TR(0x542f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B542f3b:{NFSU2_TR(0x542f3b);
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
B542f3e:{NFSU2_TR(0x542f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B542f50:L542f50:{c.instructions+=8;NFSU2_TR(0x542f50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542f51:{NFSU2_TR(0x542f51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542f52:{NFSU2_TR(0x542f52);
__builtin_memmove((R+28),(R+4),4);
}
B542f54:{NFSU2_TR(0x542f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542f57:{NFSU2_TR(0x542f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542f5a:{NFSU2_TR(0x542f5a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542f5c:{NFSU2_TR(0x542f5c);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B542f61:{NFSU2_TR(0x542f61);
if(r1(R+518)){TAIL_STATIC(0x5430afu,543);}
}
B542f67:L542f67:{c.instructions+=4;NFSU2_TR(0x542f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542f6a:{NFSU2_TR(0x542f6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B542f6d:{NFSU2_TR(0x542f6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542f6f:{NFSU2_TR(0x542f6f);
if(r1(R+518)){TAIL_STATIC(0x5430afu,543);}
}
B542f75:L542f75:{c.instructions+=3;NFSU2_TR(0x542f75);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B542f7b:{NFSU2_TR(0x542f7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B542f7d:{NFSU2_TR(0x542f7d);
if(r1(R+518)){{goto L542f8b;}}
}
B542f7f:L542f7f:{c.instructions+=2;NFSU2_TR(0x542f7f);
__builtin_memmove((R+4),(R+28),4);
}
B542f81:{NFSU2_TR(0x542f81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542f86ull));
TAIL_STATIC(0x538240u,538);
}
B542f86:L542f86:{c.instructions+=1;NFSU2_TR(0x542f86);
TAIL_STATIC(0x54308eu,543);
}
B542f8b:L542f8b:{c.instructions+=9;NFSU2_TR(0x542f8b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B542f8f:{NFSU2_TR(0x542f8f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542f92:{NFSU2_TR(0x542f92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542f93:{NFSU2_TR(0x542f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B542f96:{NFSU2_TR(0x542f96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542f97:{NFSU2_TR(0x542f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B542f9a:{NFSU2_TR(0x542f9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542f9b:{NFSU2_TR(0x542f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B542f9e:{NFSU2_TR(0x542f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x54300bu,543);}
}
B542fa0:L542fa0:{c.instructions+=3;NFSU2_TR(0x542fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542fa3:{NFSU2_TR(0x542fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542fa5:{NFSU2_TR(0x542fa5);
if(r1(R+518)){{goto L542fac;}}
}
B542fa7:L542fa7:{c.instructions+=2;NFSU2_TR(0x542fa7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B542faa:{NFSU2_TR(0x542faa);
{goto L542fae;}
}
B542fac:L542fac:{c.instructions+=1;NFSU2_TR(0x542fac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B542fae:L542fae:{c.instructions+=2;NFSU2_TR(0x542fae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B542fb0:{NFSU2_TR(0x542fb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L542fd0;}}
}
B542fb2:L542fb2:{c.instructions+=3;NFSU2_TR(0x542fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542fb5:{NFSU2_TR(0x542fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542fb7:{NFSU2_TR(0x542fb7);
if(r1(R+518)){{goto L542fc5;}}
}
B542fb9:L542fb9:{c.instructions+=4;NFSU2_TR(0x542fb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B542fbc:{NFSU2_TR(0x542fbc);
w4(R+20,u32(0x1ull));
}
B542fc1:{NFSU2_TR(0x542fc1);
__builtin_memmove((R+12),(R+24),4);
}
B542fc3:{NFSU2_TR(0x542fc3);
{goto L542ffe;}
}
B542fc5:L542fc5:{c.instructions+=4;NFSU2_TR(0x542fc5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B542fc7:{NFSU2_TR(0x542fc7);
w4(R+20,u32(0x1ull));
}
B542fcc:{NFSU2_TR(0x542fcc);
__builtin_memmove((R+12),(R+24),4);
}
B542fce:{NFSU2_TR(0x542fce);
{goto L542ffe;}
}
B542fd0:L542fd0:{c.instructions+=3;NFSU2_TR(0x542fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B542fd3:{NFSU2_TR(0x542fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542fd5:{NFSU2_TR(0x542fd5);
if(r1(R+518)){{goto L542fdc;}}
}
B542fd7:L542fd7:{c.instructions+=2;NFSU2_TR(0x542fd7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B542fda:{NFSU2_TR(0x542fda);
{goto L542fde;}
}
B542fdc:L542fdc:{c.instructions+=1;NFSU2_TR(0x542fdc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B542fde:L542fde:{c.instructions+=3;NFSU2_TR(0x542fde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B542fdf:{NFSU2_TR(0x542fdf);
__builtin_memmove((R+4),(R+28),4);
}
B542fe1:{NFSU2_TR(0x542fe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x542fe6ull));
TAIL_STATIC(0x51f440u,51f);
}
B542fe6:L542fe6:{c.instructions+=4;NFSU2_TR(0x542fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B542fe9:{NFSU2_TR(0x542fe9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B542feb:{NFSU2_TR(0x542feb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B542fed:{NFSU2_TR(0x542fed);
if(r1(R+512)){{goto L542ffe;}}
}
B542fef:L542fef:{c.instructions+=4;NFSU2_TR(0x542fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B542ff2:{NFSU2_TR(0x542ff2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B542ff3:{NFSU2_TR(0x542ff3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B542ff5:{NFSU2_TR(0x542ff5);
if(r1(R+518)){{goto L542ffc;}}
}
B542ff7:L542ff7:{c.instructions+=2;NFSU2_TR(0x542ff7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B542ffa:{NFSU2_TR(0x542ffa);
{goto L542ffe;}
}
B542ffc:L542ffc:{c.instructions+=1;NFSU2_TR(0x542ffc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B542ffe:L542ffe:{c.instructions+=1;NFSU2_TR(0x542ffe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
TAIL_STATIC(0x543001u,543);
}
XIT:NFSU2_TR_EXIT(0x542,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
