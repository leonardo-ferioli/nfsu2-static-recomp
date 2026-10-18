#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_726(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x721,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x721,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_721(u8* __restrict R,Cpu& c);
u32 page_721(Cpu& c){return body_721(c.regs.data(),c);}
__attribute__((noinline)) u32 body_721(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x721002:goto L721002;
case 0x721004:c.instructions+=2;goto B721004;
case 0x721006:c.instructions+=1;goto B721006;
case 0x721008:goto L721008;
case 0x72100a:goto L72100a;
case 0x72100b:goto L72100b;
case 0x72100f:c.instructions+=5;goto B72100f;
case 0x721012:c.instructions+=4;goto B721012;
case 0x721016:c.instructions+=3;goto B721016;
case 0x721018:c.instructions+=2;goto B721018;
case 0x72101a:c.instructions+=1;goto B72101a;
case 0x72101c:goto L72101c;
case 0x72101e:goto L72101e;
case 0x72101f:goto L72101f;
case 0x721023:c.instructions+=3;goto B721023;
case 0x721027:c.instructions+=2;goto B721027;
case 0x72102b:c.instructions+=1;goto B72102b;
case 0x72102c:goto L72102c;
case 0x721030:c.instructions+=4;goto B721030;
case 0x721032:c.instructions+=3;goto B721032;
case 0x721036:c.instructions+=2;goto B721036;
case 0x721039:c.instructions+=1;goto B721039;
case 0x72103a:goto L72103a;
case 0x72103e:c.instructions+=2;goto B72103e;
case 0x721045:c.instructions+=1;goto B721045;
case 0x721046:goto L721046;
case 0x72104a:c.instructions+=3;goto B72104a;
case 0x72104c:c.instructions+=2;goto B72104c;
case 0x72104f:c.instructions+=1;goto B72104f;
case 0x721051:goto L721051;
case 0x721054:c.instructions+=1;goto B721054;
case 0x721055:goto L721055;
case 0x721059:c.instructions+=7;goto B721059;
case 0x72105c:c.instructions+=6;goto B72105c;
case 0x72105e:c.instructions+=5;goto B72105e;
case 0x721062:c.instructions+=4;goto B721062;
case 0x721063:c.instructions+=3;goto B721063;
case 0x721066:c.instructions+=2;goto B721066;
case 0x721068:c.instructions+=1;goto B721068;
case 0x72106a:goto L72106a;
case 0x72106b:goto L72106b;
case 0x72106c:goto L72106c;
case 0x721070:c.instructions+=3;goto B721070;
case 0x721072:c.instructions+=2;goto B721072;
case 0x721075:c.instructions+=1;goto B721075;
case 0x721077:goto L721077;
case 0x72107a:c.instructions+=1;goto B72107a;
case 0x72107b:goto L72107b;
case 0x72107f:c.instructions+=7;goto B72107f;
case 0x721082:c.instructions+=6;goto B721082;
case 0x721084:c.instructions+=5;goto B721084;
case 0x721088:c.instructions+=4;goto B721088;
case 0x721089:c.instructions+=3;goto B721089;
case 0x72108c:c.instructions+=2;goto B72108c;
case 0x72108e:c.instructions+=1;goto B72108e;
case 0x721090:goto L721090;
case 0x721091:goto L721091;
case 0x721095:c.instructions+=1;goto B721095;
case 0x721096:goto L721096;
case 0x721097:c.instructions+=1;goto B721097;
case 0x72109c:goto L72109c;
case 0x7210a0:c.instructions+=3;goto B7210a0;
case 0x7210a4:c.instructions+=2;goto B7210a4;
case 0x7210a8:c.instructions+=1;goto B7210a8;
case 0x7210aa:goto L7210aa;
case 0x7210ab:c.instructions+=2;goto B7210ab;
case 0x7210ae:c.instructions+=1;goto B7210ae;
case 0x7210b3:goto L7210b3;
case 0x7210b5:c.instructions+=3;goto B7210b5;
case 0x7210b7:c.instructions+=2;goto B7210b7;
case 0x7210b8:c.instructions+=1;goto B7210b8;
case 0x7210ba:goto L7210ba;
case 0x7210bb:goto L7210bb;
case 0x7210bc:c.instructions+=1;goto B7210bc;
case 0x7210c1:goto L7210c1;
case 0x7210c2:c.instructions+=4;goto B7210c2;
case 0x7210c5:c.instructions+=3;goto B7210c5;
case 0x7210c8:c.instructions+=2;goto B7210c8;
case 0x7210c9:c.instructions+=1;goto B7210c9;
case 0x7210ce:goto L7210ce;
case 0x7210d1:c.instructions+=9;goto B7210d1;
case 0x7210d5:c.instructions+=8;goto B7210d5;
case 0x7210d7:c.instructions+=7;goto B7210d7;
case 0x7210da:c.instructions+=6;goto B7210da;
case 0x7210dd:c.instructions+=5;goto B7210dd;
case 0x7210de:c.instructions+=4;goto B7210de;
case 0x7210e1:c.instructions+=3;goto B7210e1;
case 0x7210e3:c.instructions+=2;goto B7210e3;
case 0x7210e6:c.instructions+=1;goto B7210e6;
case 0x7210eb:goto L7210eb;
case 0x7210ee:c.instructions+=7;goto B7210ee;
case 0x7210f1:c.instructions+=6;goto B7210f1;
case 0x7210f4:c.instructions+=5;goto B7210f4;
case 0x7210f7:c.instructions+=4;goto B7210f7;
case 0x7210fa:c.instructions+=3;goto B7210fa;
case 0x7210fb:c.instructions+=2;goto B7210fb;
case 0x721100:c.instructions+=1;goto B721100;
case 0x721105:goto L721105;
case 0x721109:c.instructions+=2;goto B721109;
case 0x72110b:c.instructions+=1;goto B72110b;
case 0x72110d:goto L72110d;
case 0x721111:c.instructions+=4;goto B721111;
case 0x721112:c.instructions+=3;goto B721112;
case 0x721119:c.instructions+=2;goto B721119;
case 0x72111c:c.instructions+=1;goto B72111c;
case 0x721121:goto L721121;
case 0x721124:goto L721124;
case 0x721126:c.instructions+=2;goto B721126;
case 0x72112a:c.instructions+=1;goto B72112a;
case 0x72112c:goto L72112c;
case 0x72112f:c.instructions+=5;goto B72112f;
case 0x721130:c.instructions+=4;goto B721130;
case 0x721131:c.instructions+=3;goto B721131;
case 0x721138:c.instructions+=2;goto B721138;
case 0x72113b:c.instructions+=1;goto B72113b;
case 0x721140:goto L721140;
case 0x721144:c.instructions+=6;goto B721144;
case 0x721147:c.instructions+=5;goto B721147;
case 0x721148:c.instructions+=4;goto B721148;
case 0x72114a:c.instructions+=3;goto B72114a;
case 0x72114b:c.instructions+=2;goto B72114b;
case 0x72114c:c.instructions+=1;goto B72114c;
case 0x72114e:goto L72114e;
case 0x721152:c.instructions+=1;goto B721152;
case 0x721154:goto L721154;
case 0x721158:c.instructions+=4;goto B721158;
case 0x721159:c.instructions+=3;goto B721159;
case 0x721160:c.instructions+=2;goto B721160;
case 0x721163:c.instructions+=1;goto B721163;
case 0x721168:goto L721168;
case 0x72116c:c.instructions+=1;goto B72116c;
case 0x721170:goto L721170;
case 0x721172:c.instructions+=2;goto B721172;
case 0x721176:c.instructions+=1;goto B721176;
case 0x721178:goto L721178;
case 0x72117b:c.instructions+=5;goto B72117b;
case 0x72117c:c.instructions+=4;goto B72117c;
case 0x72117d:c.instructions+=3;goto B72117d;
case 0x721184:c.instructions+=2;goto B721184;
case 0x721187:c.instructions+=1;goto B721187;
case 0x72118c:goto L72118c;
case 0x721190:c.instructions+=7;goto B721190;
case 0x721194:c.instructions+=6;goto B721194;
case 0x721198:c.instructions+=5;goto B721198;
case 0x721199:c.instructions+=4;goto B721199;
case 0x72119b:c.instructions+=3;goto B72119b;
case 0x72119c:c.instructions+=2;goto B72119c;
case 0x72119d:c.instructions+=1;goto B72119d;
case 0x72119f:goto L72119f;
case 0x7211a3:c.instructions+=3;goto B7211a3;
case 0x7211a4:c.instructions+=2;goto B7211a4;
case 0x7211a5:c.instructions+=1;goto B7211a5;
case 0x7211a6:goto L7211a6;
case 0x7211ab:goto L7211ab;
case 0x7211ac:c.instructions+=4;goto B7211ac;
case 0x7211ae:c.instructions+=3;goto B7211ae;
case 0x7211af:c.instructions+=2;goto B7211af;
case 0x7211b6:c.instructions+=1;goto B7211b6;
case 0x7211b8:goto L7211b8;
case 0x7211ba:c.instructions+=3;goto B7211ba;
case 0x7211bb:c.instructions+=2;goto B7211bb;
case 0x7211bc:c.instructions+=1;goto B7211bc;
case 0x7211bd:goto L7211bd;
case 0x7211c2:c.instructions+=2;goto B7211c2;
case 0x7211c4:c.instructions+=1;goto B7211c4;
case 0x7211c6:goto L7211c6;
case 0x7211c8:goto L7211c8;
case 0x7211c9:c.instructions+=2;goto B7211c9;
case 0x7211ca:c.instructions+=1;goto B7211ca;
case 0x7211cf:goto L7211cf;
case 0x7211d5:c.instructions+=2;goto B7211d5;
case 0x7211d8:c.instructions+=1;goto B7211d8;
case 0x7211da:goto L7211da;
case 0x7211dd:c.instructions+=2;goto B7211dd;
case 0x7211e0:c.instructions+=1;goto B7211e0;
case 0x7211e2:goto L7211e2;
case 0x7211e5:c.instructions+=2;goto B7211e5;
case 0x7211e8:c.instructions+=1;goto B7211e8;
case 0x7211ea:goto L7211ea;
case 0x7211ec:c.instructions+=1;goto B7211ec;
case 0x7211ed:goto L7211ed;
case 0x7211f2:goto L7211f2;
case 0x7211f3:c.instructions+=4;goto B7211f3;
case 0x7211f5:c.instructions+=3;goto B7211f5;
case 0x7211f6:c.instructions+=2;goto B7211f6;
case 0x7211f7:c.instructions+=1;goto B7211f7;
case 0x7211f8:goto L7211f8;
case 0x7211fb:c.instructions+=4;goto B7211fb;
case 0x7211ff:c.instructions+=3;goto B7211ff;
case 0x721201:c.instructions+=2;goto B721201;
case 0x721206:c.instructions+=1;goto B721206;
case 0x721208:goto L721208;
case 0x721209:goto L721209;
case 0x72120c:c.instructions+=4;goto B72120c;
case 0x72120d:c.instructions+=3;goto B72120d;
case 0x721210:c.instructions+=2;goto B721210;
case 0x721211:c.instructions+=1;goto B721211;
case 0x721216:goto L721216;
case 0x721217:c.instructions+=4;goto B721217;
case 0x721218:c.instructions+=3;goto B721218;
case 0x72121b:c.instructions+=2;goto B72121b;
case 0x72121d:c.instructions+=1;goto B72121d;
case 0x72121f:goto L72121f;
case 0x721222:c.instructions+=5;goto B721222;
case 0x721224:c.instructions+=4;goto B721224;
case 0x721226:c.instructions+=3;goto B721226;
case 0x721227:c.instructions+=2;goto B721227;
case 0x72122e:c.instructions+=1;goto B72122e;
case 0x721233:goto L721233;
case 0x721235:c.instructions+=3;goto B721235;
case 0x721236:c.instructions+=2;goto B721236;
case 0x721238:c.instructions+=1;goto B721238;
case 0x72123a:goto L72123a;
case 0x72123e:c.instructions+=7;goto B72123e;
case 0x721242:c.instructions+=6;goto B721242;
case 0x721244:c.instructions+=5;goto B721244;
case 0x721247:c.instructions+=4;goto B721247;
case 0x72124b:c.instructions+=3;goto B72124b;
case 0x72124f:c.instructions+=2;goto B72124f;
case 0x721252:c.instructions+=1;goto B721252;
case 0x721254:goto L721254;
case 0x721255:goto L721255;
case 0x721258:c.instructions+=3;goto B721258;
case 0x72125a:c.instructions+=2;goto B72125a;
case 0x72125c:c.instructions+=1;goto B72125c;
case 0x72125e:goto L72125e;
case 0x72125f:c.instructions+=1;goto B72125f;
case 0x721264:goto L721264;
case 0x721265:goto L721265;
case 0x721268:c.instructions+=2;goto B721268;
case 0x72126a:c.instructions+=1;goto B72126a;
case 0x72126c:goto L72126c;
case 0x72126d:c.instructions+=1;goto B72126d;
case 0x721272:goto L721272;
case 0x721273:goto L721273;
case 0x721276:c.instructions+=2;goto B721276;
case 0x721278:c.instructions+=1;goto B721278;
case 0x72127a:goto L72127a;
case 0x72127b:c.instructions+=1;goto B72127b;
case 0x721280:goto L721280;
case 0x721281:goto L721281;
case 0x721284:c.instructions+=3;goto B721284;
case 0x721285:c.instructions+=2;goto B721285;
case 0x72128a:c.instructions+=1;goto B72128a;
case 0x72128f:goto L72128f;
case 0x721295:c.instructions+=1;goto B721295;
case 0x72129b:goto L72129b;
case 0x7212a0:c.instructions+=2;goto B7212a0;
case 0x7212a5:c.instructions+=1;goto B7212a5;
case 0x7212aa:goto L7212aa;
case 0x7212af:goto L7212af;
case 0x7212b5:c.instructions+=1;goto B7212b5;
case 0x7212b7:goto L7212b7;
case 0x7212c1:goto L7212c1;
case 0x7212c6:c.instructions+=1;goto B7212c6;
case 0x7212c7:goto L7212c7;
case 0x7212cc:goto L7212cc;
case 0x7212ce:goto L7212ce;
case 0x7212d1:c.instructions+=1;goto B7212d1;
case 0x7212d6:goto L7212d6;
case 0x7212d7:goto L7212d7;
case 0x7212dc:c.instructions+=2;goto B7212dc;
case 0x7212de:c.instructions+=1;goto B7212de;
case 0x7212e0:goto L7212e0;
case 0x7212e5:goto L7212e5;
case 0x7212e6:c.instructions+=7;goto B7212e6;
case 0x7212e8:c.instructions+=6;goto B7212e8;
case 0x7212eb:c.instructions+=5;goto B7212eb;
case 0x7212ec:c.instructions+=4;goto B7212ec;
case 0x7212ed:c.instructions+=3;goto B7212ed;
case 0x7212ee:c.instructions+=2;goto B7212ee;
case 0x7212f8:c.instructions+=1;goto B7212f8;
case 0x7212fd:goto L7212fd;
case 0x721300:c.instructions+=7;goto B721300;
case 0x721302:c.instructions+=6;goto B721302;
case 0x721308:c.instructions+=5;goto B721308;
case 0x72130b:c.instructions+=4;goto B72130b;
case 0x72130c:c.instructions+=3;goto B72130c;
case 0x721311:c.instructions+=2;goto B721311;
case 0x721315:c.instructions+=1;goto B721315;
case 0x72131a:goto L72131a;
case 0x72131d:c.instructions+=3;goto B72131d;
case 0x72131f:c.instructions+=2;goto B72131f;
case 0x721321:c.instructions+=1;goto B721321;
case 0x721323:goto L721323;
case 0x721326:goto L721326;
case 0x721328:c.instructions+=10;goto B721328;
case 0x72132a:c.instructions+=9;goto B72132a;
case 0x72132c:c.instructions+=8;goto B72132c;
case 0x721333:c.instructions+=7;goto B721333;
case 0x721335:c.instructions+=6;goto B721335;
case 0x721338:c.instructions+=5;goto B721338;
case 0x721339:c.instructions+=4;goto B721339;
case 0x72133b:c.instructions+=3;goto B72133b;
case 0x72133e:c.instructions+=2;goto B72133e;
case 0x721340:c.instructions+=1;goto B721340;
case 0x721342:goto L721342;
case 0x721344:goto L721344;
case 0x721347:c.instructions+=6;goto B721347;
case 0x72134a:c.instructions+=5;goto B72134a;
case 0x72134c:c.instructions+=4;goto B72134c;
case 0x72134e:c.instructions+=3;goto B72134e;
case 0x721350:c.instructions+=2;goto B721350;
case 0x721353:c.instructions+=1;goto B721353;
case 0x721355:goto L721355;
case 0x721358:goto L721358;
case 0x72135a:c.instructions+=6;goto B72135a;
case 0x72135c:c.instructions+=5;goto B72135c;
case 0x72135e:c.instructions+=4;goto B72135e;
case 0x72135f:c.instructions+=3;goto B72135f;
case 0x721362:c.instructions+=2;goto B721362;
case 0x721364:c.instructions+=1;goto B721364;
case 0x721366:goto L721366;
case 0x721369:c.instructions+=4;goto B721369;
case 0x72136c:c.instructions+=3;goto B72136c;
case 0x72136f:c.instructions+=2;goto B72136f;
case 0x721371:c.instructions+=1;goto B721371;
case 0x721373:goto L721373;
case 0x721376:goto L721376;
case 0x721379:c.instructions+=12;goto B721379;
case 0x72137c:c.instructions+=11;goto B72137c;
case 0x72137f:c.instructions+=10;goto B72137f;
case 0x721383:c.instructions+=9;goto B721383;
case 0x721387:c.instructions+=8;goto B721387;
case 0x72138a:c.instructions+=7;goto B72138a;
case 0x72138e:c.instructions+=6;goto B72138e;
case 0x721390:c.instructions+=5;goto B721390;
case 0x721393:c.instructions+=4;goto B721393;
case 0x721396:c.instructions+=3;goto B721396;
case 0x721398:c.instructions+=2;goto B721398;
case 0x72139a:c.instructions+=1;goto B72139a;
case 0x72139c:goto L72139c;
case 0x72139f:c.instructions+=2;goto B72139f;
case 0x7213a0:c.instructions+=1;goto B7213a0;
case 0x7213a5:goto L7213a5;
case 0x7213a7:goto L7213a7;
case 0x7213a9:c.instructions+=3;goto B7213a9;
case 0x7213ac:c.instructions+=2;goto B7213ac;
case 0x7213ad:c.instructions+=1;goto B7213ad;
case 0x7213af:goto L7213af;
case 0x7213b4:goto L7213b4;
case 0x7213b6:goto L7213b6;
case 0x7213bb:goto L7213bb;
case 0x7213be:c.instructions+=4;goto B7213be;
case 0x7213c1:c.instructions+=3;goto B7213c1;
case 0x7213c4:c.instructions+=2;goto B7213c4;
case 0x7213c6:c.instructions+=1;goto B7213c6;
case 0x7213c8:goto L7213c8;
case 0x7213ca:goto L7213ca;
case 0x7213cd:c.instructions+=4;goto B7213cd;
case 0x7213cf:c.instructions+=3;goto B7213cf;
case 0x7213d3:c.instructions+=2;goto B7213d3;
case 0x7213d6:c.instructions+=1;goto B7213d6;
case 0x7213d8:goto L7213d8;
case 0x7213db:c.instructions+=10;goto B7213db;
case 0x7213de:c.instructions+=9;goto B7213de;
case 0x7213e1:c.instructions+=8;goto B7213e1;
case 0x7213e4:c.instructions+=7;goto B7213e4;
case 0x7213e7:c.instructions+=6;goto B7213e7;
case 0x7213e8:c.instructions+=5;goto B7213e8;
case 0x7213ea:c.instructions+=4;goto B7213ea;
case 0x7213ec:c.instructions+=3;goto B7213ec;
case 0x7213ed:c.instructions+=2;goto B7213ed;
case 0x7213ee:c.instructions+=1;goto B7213ee;
case 0x7213f4:goto L7213f4;
case 0x7213f7:c.instructions+=6;goto B7213f7;
case 0x7213f8:c.instructions+=5;goto B7213f8;
case 0x7213fb:c.instructions+=4;goto B7213fb;
case 0x7213fc:c.instructions+=3;goto B7213fc;
case 0x721403:c.instructions+=2;goto B721403;
case 0x721406:c.instructions+=1;goto B721406;
case 0x72140b:goto L72140b;
case 0x72140d:c.instructions+=4;goto B72140d;
case 0x721410:c.instructions+=3;goto B721410;
case 0x721411:c.instructions+=2;goto B721411;
case 0x721412:c.instructions+=1;goto B721412;
case 0x721414:goto L721414;
case 0x721418:c.instructions+=6;goto B721418;
case 0x72141b:c.instructions+=5;goto B72141b;
case 0x72141e:c.instructions+=4;goto B72141e;
case 0x721422:c.instructions+=3;goto B721422;
case 0x721423:c.instructions+=2;goto B721423;
case 0x721425:c.instructions+=1;goto B721425;
case 0x721427:goto L721427;
case 0x72142b:c.instructions+=7;goto B72142b;
case 0x72142f:c.instructions+=6;goto B72142f;
case 0x721431:c.instructions+=5;goto B721431;
case 0x721434:c.instructions+=4;goto B721434;
case 0x721438:c.instructions+=3;goto B721438;
case 0x72143c:c.instructions+=2;goto B72143c;
case 0x72143f:c.instructions+=1;goto B72143f;
case 0x721441:goto L721441;
case 0x721444:c.instructions+=2;goto B721444;
case 0x721446:c.instructions+=1;goto B721446;
case 0x721448:goto L721448;
case 0x72144b:c.instructions+=1;goto B72144b;
case 0x72144d:goto L72144d;
case 0x72144f:c.instructions+=1;goto B72144f;
case 0x721452:goto L721452;
case 0x721454:c.instructions+=3;goto B721454;
case 0x721455:c.instructions+=2;goto B721455;
case 0x721457:c.instructions+=1;goto B721457;
case 0x721459:goto L721459;
case 0x72145b:c.instructions+=3;goto B72145b;
case 0x72145c:c.instructions+=2;goto B72145c;
case 0x72145d:c.instructions+=1;goto B72145d;
case 0x721462:goto L721462;
case 0x721463:c.instructions+=2;goto B721463;
case 0x721466:c.instructions+=1;goto B721466;
case 0x721468:goto L721468;
case 0x72146a:c.instructions+=5;goto B72146a;
case 0x72146b:c.instructions+=4;goto B72146b;
case 0x72146d:c.instructions+=3;goto B72146d;
case 0x72146e:c.instructions+=2;goto B72146e;
case 0x721470:c.instructions+=1;goto B721470;
case 0x721472:goto L721472;
case 0x721475:c.instructions+=2;goto B721475;
case 0x721478:c.instructions+=1;goto B721478;
case 0x72147a:goto L72147a;
case 0x72147d:goto L72147d;
case 0x721481:c.instructions+=1;goto B721481;
case 0x721483:goto L721483;
case 0x721488:c.instructions+=6;goto B721488;
case 0x72148a:c.instructions+=5;goto B72148a;
case 0x721494:c.instructions+=4;goto B721494;
case 0x721499:c.instructions+=3;goto B721499;
case 0x72149f:c.instructions+=2;goto B72149f;
case 0x7214a4:c.instructions+=1;goto B7214a4;
case 0x7214a6:goto L7214a6;
case 0x7214a9:goto L7214a9;
case 0x7214af:goto L7214af;
case 0x7214b4:goto L7214b4;
case 0x7214b5:c.instructions+=4;goto B7214b5;
case 0x7214b6:c.instructions+=3;goto B7214b6;
case 0x7214b7:c.instructions+=2;goto B7214b7;
case 0x7214b8:c.instructions+=1;goto B7214b8;
case 0x7214b9:goto L7214b9;
case 0x7214c0:c.instructions+=4;goto B7214c0;
case 0x7214c4:c.instructions+=3;goto B7214c4;
case 0x7214cb:c.instructions+=2;goto B7214cb;
case 0x7214d1:c.instructions+=1;goto B7214d1;
case 0x7214d2:goto L7214d2;
case 0x7214d9:c.instructions+=3;goto B7214d9;
case 0x7214db:c.instructions+=2;goto B7214db;
case 0x7214dd:c.instructions+=1;goto B7214dd;
case 0x7214df:goto L7214df;
case 0x7214e6:c.instructions+=2;goto B7214e6;
case 0x7214ea:c.instructions+=1;goto B7214ea;
case 0x7214ec:goto L7214ec;
case 0x7214ed:c.instructions+=2;goto B7214ed;
case 0x7214ef:c.instructions+=1;goto B7214ef;
case 0x7214f1:goto L7214f1;
case 0x7214f2:goto L7214f2;
case 0x7214f8:c.instructions+=1;goto B7214f8;
case 0x7214fa:goto L7214fa;
case 0x721501:c.instructions+=2;goto B721501;
case 0x721508:c.instructions+=1;goto B721508;
case 0x721509:goto L721509;
case 0x721510:c.instructions+=2;goto B721510;
case 0x721512:c.instructions+=1;goto B721512;
case 0x721514:goto L721514;
case 0x721515:goto L721515;
case 0x72151c:c.instructions+=1;goto B72151c;
case 0x72151e:goto L72151e;
case 0x72151f:c.instructions+=3;goto B72151f;
case 0x721521:c.instructions+=2;goto B721521;
case 0x721528:c.instructions+=1;goto B721528;
case 0x72152a:goto L72152a;
case 0x721531:goto L721531;
case 0x721538:c.instructions+=3;goto B721538;
case 0x721539:c.instructions+=2;goto B721539;
case 0x72153b:c.instructions+=1;goto B72153b;
case 0x72153d:goto L72153d;
case 0x72153e:goto L72153e;
case 0x72153f:goto L72153f;
case 0x721546:c.instructions+=1;goto B721546;
case 0x721548:goto L721548;
case 0x72154a:c.instructions+=2;goto B72154a;
case 0x72154b:c.instructions+=1;goto B72154b;
case 0x72154c:goto L72154c;
case 0x721553:c.instructions+=1;goto B721553;
case 0x721555:goto L721555;
case 0x72155a:c.instructions+=2;goto B72155a;
case 0x72155c:c.instructions+=1;goto B72155c;
case 0x72155e:goto L72155e;
case 0x721561:c.instructions+=1;goto B721561;
case 0x721562:goto L721562;
case 0x721564:c.instructions+=2;goto B721564;
case 0x721565:c.instructions+=1;goto B721565;
case 0x721566:goto L721566;
case 0x721568:c.instructions+=1;goto B721568;
case 0x721569:goto L721569;
case 0x72156d:c.instructions+=2;goto B72156d;
case 0x721570:c.instructions+=1;goto B721570;
case 0x721572:goto L721572;
case 0x721574:goto L721574;
case 0x721577:c.instructions+=1;goto B721577;
case 0x721579:goto L721579;
case 0x72157c:c.instructions+=1;goto B72157c;
case 0x72157e:goto L72157e;
case 0x721581:c.instructions+=1;goto B721581;
case 0x721583:goto L721583;
case 0x721586:c.instructions+=1;goto B721586;
case 0x721588:goto L721588;
case 0x72158b:c.instructions+=1;goto B72158b;
case 0x72158d:goto L72158d;
case 0x72158f:c.instructions+=2;goto B72158f;
case 0x721590:c.instructions+=1;goto B721590;
case 0x721591:goto L721591;
case 0x721593:c.instructions+=2;goto B721593;
case 0x721594:c.instructions+=1;goto B721594;
case 0x721595:goto L721595;
case 0x721597:c.instructions+=2;goto B721597;
case 0x721598:c.instructions+=1;goto B721598;
case 0x721599:goto L721599;
case 0x72159b:c.instructions+=2;goto B72159b;
case 0x72159c:c.instructions+=1;goto B72159c;
case 0x72159d:goto L72159d;
case 0x7215a0:c.instructions+=1;goto B7215a0;
case 0x7215a1:goto L7215a1;
case 0x7215a4:c.instructions+=1;goto B7215a4;
case 0x7215a6:goto L7215a6;
case 0x7215a9:c.instructions+=1;goto B7215a9;
case 0x7215ab:goto L7215ab;
case 0x7215ae:c.instructions+=1;goto B7215ae;
case 0x7215b0:goto L7215b0;
case 0x7215b2:c.instructions+=1;goto B7215b2;
case 0x7215b4:goto L7215b4;
case 0x7215b6:c.instructions+=2;goto B7215b6;
case 0x7215b7:c.instructions+=1;goto B7215b7;
case 0x7215b8:goto L7215b8;
case 0x7215ba:c.instructions+=1;goto B7215ba;
case 0x7215bb:goto L7215bb;
case 0x7215bd:c.instructions+=2;goto B7215bd;
case 0x7215be:c.instructions+=1;goto B7215be;
case 0x7215bf:goto L7215bf;
case 0x7215c1:c.instructions+=2;goto B7215c1;
case 0x7215c2:c.instructions+=1;goto B7215c2;
case 0x7215c3:goto L7215c3;
case 0x7215c5:c.instructions+=2;goto B7215c5;
case 0x7215c6:c.instructions+=1;goto B7215c6;
case 0x7215c7:goto L7215c7;
case 0x7215c8:c.instructions+=5;goto B7215c8;
case 0x7215cc:c.instructions+=4;goto B7215cc;
case 0x7215d2:c.instructions+=3;goto B7215d2;
case 0x7215d5:c.instructions+=2;goto B7215d5;
case 0x7215d6:c.instructions+=1;goto B7215d6;
case 0x7215db:goto L7215db;
case 0x7215df:c.instructions+=4;goto B7215df;
case 0x7215e3:c.instructions+=3;goto B7215e3;
case 0x7215e6:c.instructions+=2;goto B7215e6;
case 0x7215e7:c.instructions+=1;goto B7215e7;
case 0x7215ec:goto L7215ec;
case 0x7215ed:c.instructions+=5;goto B7215ed;
case 0x7215ee:c.instructions+=4;goto B7215ee;
case 0x7215f0:c.instructions+=3;goto B7215f0;
case 0x7215f3:c.instructions+=2;goto B7215f3;
case 0x7215f4:c.instructions+=1;goto B7215f4;
case 0x7215f5:goto L7215f5;
case 0x7215f6:c.instructions+=7;goto B7215f6;
case 0x7215fa:c.instructions+=6;goto B7215fa;
case 0x721600:c.instructions+=5;goto B721600;
case 0x721603:c.instructions+=4;goto B721603;
case 0x721609:c.instructions+=3;goto B721609;
case 0x72160b:c.instructions+=2;goto B72160b;
case 0x72160e:c.instructions+=1;goto B72160e;
case 0x721610:goto L721610;
case 0x721616:c.instructions+=2;goto B721616;
case 0x721619:c.instructions+=1;goto B721619;
case 0x72161c:goto L72161c;
case 0x72161f:c.instructions+=2;goto B72161f;
case 0x721620:c.instructions+=1;goto B721620;
case 0x721625:goto L721625;
case 0x721628:c.instructions+=4;goto B721628;
case 0x72162b:c.instructions+=3;goto B72162b;
case 0x72162e:c.instructions+=2;goto B72162e;
case 0x72162f:c.instructions+=1;goto B72162f;
case 0x721634:goto L721634;
case 0x721635:c.instructions+=5;goto B721635;
case 0x721636:c.instructions+=4;goto B721636;
case 0x721638:c.instructions+=3;goto B721638;
case 0x72163b:c.instructions+=2;goto B72163b;
case 0x72163c:c.instructions+=1;goto B72163c;
case 0x72163d:goto L72163d;
case 0x72163e:c.instructions+=9;goto B72163e;
case 0x721640:c.instructions+=8;goto B721640;
case 0x721646:c.instructions+=7;goto B721646;
case 0x721647:c.instructions+=6;goto B721647;
case 0x72164a:c.instructions+=5;goto B72164a;
case 0x721650:c.instructions+=4;goto B721650;
case 0x721655:c.instructions+=3;goto B721655;
case 0x721656:c.instructions+=2;goto B721656;
case 0x721659:c.instructions+=1;goto B721659;
case 0x72165e:goto L72165e;
case 0x721660:c.instructions+=3;goto B721660;
case 0x721661:c.instructions+=2;goto B721661;
case 0x721662:c.instructions+=1;goto B721662;
case 0x721664:goto L721664;
case 0x721665:c.instructions+=1;goto B721665;
case 0x72166a:goto L72166a;
case 0x72166b:c.instructions+=1;goto B72166b;
case 0x72166d:goto L72166d;
case 0x721670:c.instructions+=2;goto B721670;
case 0x721677:c.instructions+=1;goto B721677;
case 0x721679:goto L721679;
case 0x72167c:goto L72167c;
case 0x72167e:goto L72167e;
case 0x72167f:c.instructions+=2;goto B72167f;
case 0x721680:c.instructions+=1;goto B721680;
case 0x721681:goto L721681;
case 0x721682:c.instructions+=8;goto B721682;
case 0x721684:c.instructions+=7;goto B721684;
case 0x721685:c.instructions+=6;goto B721685;
case 0x721686:c.instructions+=5;goto B721686;
case 0x721689:c.instructions+=4;goto B721689;
case 0x72168c:c.instructions+=3;goto B72168c;
case 0x72168d:c.instructions+=2;goto B72168d;
case 0x72168e:c.instructions+=1;goto B72168e;
case 0x721693:goto L721693;
case 0x721697:c.instructions+=3;goto B721697;
case 0x721698:c.instructions+=2;goto B721698;
case 0x721699:c.instructions+=1;goto B721699;
case 0x72169b:goto L72169b;
case 0x72169d:c.instructions+=2;goto B72169d;
case 0x72169e:c.instructions+=1;goto B72169e;
case 0x7216a0:goto L7216a0;
case 0x7216a7:c.instructions+=1;goto B7216a7;
case 0x7216a9:goto L7216a9;
case 0x7216af:c.instructions+=1;goto B7216af;
case 0x7216b1:goto L7216b1;
case 0x7216b7:c.instructions+=1;goto B7216b7;
case 0x7216c1:goto L7216c1;
case 0x7216c3:goto L7216c3;
case 0x7216c4:c.instructions+=2;goto B7216c4;
case 0x7216c5:c.instructions+=1;goto B7216c5;
case 0x7216c6:goto L7216c6;
case 0x7216c7:c.instructions+=5;goto B7216c7;
case 0x7216cb:c.instructions+=4;goto B7216cb;
case 0x7216d1:c.instructions+=3;goto B7216d1;
case 0x7216d4:c.instructions+=2;goto B7216d4;
case 0x7216d5:c.instructions+=1;goto B7216d5;
case 0x7216da:goto L7216da;
case 0x7216db:c.instructions+=4;goto B7216db;
case 0x7216de:c.instructions+=3;goto B7216de;
case 0x7216e3:c.instructions+=2;goto B7216e3;
case 0x7216e5:c.instructions+=1;goto B7216e5;
case 0x7216e7:goto L7216e7;
case 0x7216e9:goto L7216e9;
case 0x7216ed:c.instructions+=1;goto B7216ed;
case 0x7216ef:goto L7216ef;
case 0x7216f1:c.instructions+=2;goto B7216f1;
case 0x7216f2:c.instructions+=1;goto B7216f2;
case 0x7216f4:goto L7216f4;
case 0x7216fb:c.instructions+=1;goto B7216fb;
case 0x7216fd:goto L7216fd;
case 0x721700:c.instructions+=3;goto B721700;
case 0x721701:c.instructions+=2;goto B721701;
case 0x721705:c.instructions+=1;goto B721705;
case 0x72170a:goto L72170a;
case 0x72170b:goto L72170b;
case 0x72170d:goto L72170d;
case 0x721710:c.instructions+=2;goto B721710;
case 0x721711:c.instructions+=1;goto B721711;
case 0x721712:goto L721712;
case 0x721719:c.instructions+=2;goto B721719;
case 0x721723:c.instructions+=1;goto B721723;
case 0x721725:goto L721725;
case 0x721726:c.instructions+=5;goto B721726;
case 0x72172a:c.instructions+=4;goto B72172a;
case 0x721730:c.instructions+=3;goto B721730;
case 0x721733:c.instructions+=2;goto B721733;
case 0x721734:c.instructions+=1;goto B721734;
case 0x721739:goto L721739;
case 0x72173d:c.instructions+=2;goto B72173d;
case 0x72173e:c.instructions+=1;goto B72173e;
case 0x721740:goto L721740;
case 0x721742:c.instructions+=2;goto B721742;
case 0x721743:c.instructions+=1;goto B721743;
case 0x721745:goto L721745;
case 0x72174c:c.instructions+=2;goto B72174c;
case 0x72174f:c.instructions+=1;goto B72174f;
case 0x721751:goto L721751;
case 0x721754:c.instructions+=3;goto B721754;
case 0x721757:c.instructions+=2;goto B721757;
case 0x721758:c.instructions+=1;goto B721758;
case 0x72175d:goto L72175d;
case 0x72175e:goto L72175e;
case 0x721760:goto L721760;
case 0x721763:c.instructions+=2;goto B721763;
case 0x721764:c.instructions+=1;goto B721764;
case 0x721765:goto L721765;
case 0x72176a:c.instructions+=2;goto B72176a;
case 0x721774:c.instructions+=1;goto B721774;
case 0x721776:goto L721776;
case 0x721777:c.instructions+=5;goto B721777;
case 0x721779:c.instructions+=4;goto B721779;
case 0x72177f:c.instructions+=3;goto B72177f;
case 0x721785:c.instructions+=2;goto B721785;
case 0x721786:c.instructions+=1;goto B721786;
case 0x72178b:goto L72178b;
case 0x72178f:c.instructions+=2;goto B72178f;
case 0x721790:c.instructions+=1;goto B721790;
case 0x721792:goto L721792;
case 0x721794:c.instructions+=3;goto B721794;
case 0x721795:c.instructions+=2;goto B721795;
case 0x721796:c.instructions+=1;goto B721796;
case 0x721797:goto L721797;
case 0x72179e:c.instructions+=5;goto B72179e;
case 0x7217a1:c.instructions+=4;goto B7217a1;
case 0x7217a3:c.instructions+=3;goto B7217a3;
case 0x7217a5:c.instructions+=2;goto B7217a5;
case 0x7217a6:c.instructions+=1;goto B7217a6;
case 0x7217a7:goto L7217a7;
case 0x7217a8:c.instructions+=5;goto B7217a8;
case 0x7217ac:c.instructions+=4;goto B7217ac;
case 0x7217b2:c.instructions+=3;goto B7217b2;
case 0x7217b5:c.instructions+=2;goto B7217b5;
case 0x7217b6:c.instructions+=1;goto B7217b6;
case 0x7217bb:goto L7217bb;
case 0x7217bc:c.instructions+=1;goto B7217bc;
case 0x7217c1:goto L7217c1;
case 0x7217c2:c.instructions+=4;goto B7217c2;
case 0x7217c3:c.instructions+=3;goto B7217c3;
case 0x7217c5:c.instructions+=2;goto B7217c5;
case 0x7217c7:c.instructions+=1;goto B7217c7;
case 0x7217c9:goto L7217c9;
case 0x7217ca:c.instructions+=1;goto B7217ca;
case 0x7217cf:goto L7217cf;
case 0x7217d0:c.instructions+=1;goto B7217d0;
case 0x7217d2:goto L7217d2;
case 0x7217d4:goto L7217d4;
case 0x7217da:c.instructions+=4;goto B7217da;
case 0x7217e0:c.instructions+=3;goto B7217e0;
case 0x7217e3:c.instructions+=2;goto B7217e3;
case 0x7217e6:c.instructions+=1;goto B7217e6;
case 0x7217e8:goto L7217e8;
case 0x7217ee:c.instructions+=8;goto B7217ee;
case 0x7217f1:c.instructions+=7;goto B7217f1;
case 0x7217f2:c.instructions+=6;goto B7217f2;
case 0x7217f8:c.instructions+=5;goto B7217f8;
case 0x7217fe:c.instructions+=4;goto B7217fe;
case 0x721804:c.instructions+=3;goto B721804;
case 0x721808:c.instructions+=2;goto B721808;
case 0x72180e:c.instructions+=1;goto B72180e;
case 0x721813:goto L721813;
case 0x721816:c.instructions+=2;goto B721816;
case 0x721817:c.instructions+=1;goto B721817;
case 0x72181c:goto L72181c;
case 0x72181f:c.instructions+=3;goto B72181f;
case 0x721825:c.instructions+=2;goto B721825;
case 0x72182b:c.instructions+=1;goto B72182b;
case 0x721830:goto L721830;
case 0x721833:c.instructions+=1;goto B721833;
case 0x721835:goto L721835;
case 0x721838:c.instructions+=2;goto B721838;
case 0x721839:c.instructions+=1;goto B721839;
case 0x72183a:goto L72183a;
case 0x72183b:c.instructions+=4;goto B72183b;
case 0x72183f:c.instructions+=3;goto B72183f;
case 0x721845:c.instructions+=2;goto B721845;
case 0x72184c:c.instructions+=1;goto B72184c;
case 0x721852:goto L721852;
case 0x721855:c.instructions+=2;goto B721855;
case 0x721856:c.instructions+=1;goto B721856;
case 0x72185b:goto L72185b;
case 0x72185d:c.instructions+=2;goto B72185d;
case 0x72185e:c.instructions+=1;goto B72185e;
case 0x721864:goto L721864;
case 0x721869:c.instructions+=3;goto B721869;
case 0x72186b:c.instructions+=2;goto B72186b;
case 0x72186d:c.instructions+=1;goto B72186d;
case 0x72186f:goto L72186f;
case 0x721875:c.instructions+=2;goto B721875;
case 0x721879:c.instructions+=1;goto B721879;
case 0x72187f:goto L72187f;
case 0x721880:c.instructions+=2;goto B721880;
case 0x721882:c.instructions+=1;goto B721882;
case 0x721884:goto L721884;
case 0x721889:goto L721889;
case 0x72188b:c.instructions+=1;goto B72188b;
case 0x721890:goto L721890;
case 0x721893:c.instructions+=2;goto B721893;
case 0x721894:c.instructions+=1;goto B721894;
case 0x721899:goto L721899;
case 0x72189c:c.instructions+=2;goto B72189c;
case 0x72189d:c.instructions+=1;goto B72189d;
case 0x7218a2:goto L7218a2;
case 0x7218a8:c.instructions+=3;goto B7218a8;
case 0x7218ab:c.instructions+=2;goto B7218ab;
case 0x7218ac:c.instructions+=1;goto B7218ac;
case 0x7218b1:goto L7218b1;
case 0x7218b4:c.instructions+=3;goto B7218b4;
case 0x7218b5:c.instructions+=2;goto B7218b5;
case 0x7218bc:c.instructions+=1;goto B7218bc;
case 0x7218c1:goto L7218c1;
case 0x7218c8:c.instructions+=1;goto B7218c8;
case 0x7218cd:goto L7218cd;
case 0x7218d3:c.instructions+=1;goto B7218d3;
case 0x7218d8:goto L7218d8;
case 0x7218dd:goto L7218dd;
case 0x7218e2:goto L7218e2;
case 0x7218e4:c.instructions+=1;goto B7218e4;
case 0x7218e9:goto L7218e9;
case 0x7218ee:c.instructions+=4;goto B7218ee;
case 0x7218f4:c.instructions+=3;goto B7218f4;
case 0x7218f7:c.instructions+=2;goto B7218f7;
case 0x7218fc:c.instructions+=1;goto B7218fc;
case 0x721901:goto L721901;
case 0x721906:goto L721906;
case 0x721908:goto L721908;
case 0x72190b:c.instructions+=2;goto B72190b;
case 0x72190c:c.instructions+=1;goto B72190c;
case 0x72190d:goto L72190d;
case 0x72190f:c.instructions+=2;goto B72190f;
case 0x721910:c.instructions+=1;goto B721910;
case 0x721912:goto L721912;
case 0x721914:c.instructions+=3;goto B721914;
case 0x72191b:c.instructions+=2;goto B72191b;
case 0x72191e:c.instructions+=1;goto B72191e;
case 0x72191f:goto L72191f;
case 0x721924:goto L721924;
case 0x72192b:c.instructions+=2;goto B72192b;
case 0x72192d:c.instructions+=1;goto B72192d;
case 0x72192e:goto L72192e;
case 0x721933:c.instructions+=1;goto B721933;
case 0x721935:goto L721935;
case 0x721937:c.instructions+=2;goto B721937;
case 0x721938:c.instructions+=1;goto B721938;
case 0x721939:goto L721939;
case 0x72193d:c.instructions+=5;goto B72193d;
case 0x721942:c.instructions+=4;goto B721942;
case 0x721946:c.instructions+=3;goto B721946;
case 0x72194b:c.instructions+=2;goto B72194b;
case 0x72194d:c.instructions+=1;goto B72194d;
case 0x72194e:goto L72194e;
case 0x72194f:c.instructions+=4;goto B72194f;
case 0x721953:c.instructions+=3;goto B721953;
case 0x721959:c.instructions+=2;goto B721959;
case 0x72195d:c.instructions+=1;goto B72195d;
case 0x72195f:goto L72195f;
case 0x721961:c.instructions+=2;goto B721961;
case 0x721962:c.instructions+=1;goto B721962;
case 0x721964:goto L721964;
case 0x721967:c.instructions+=2;goto B721967;
case 0x721968:c.instructions+=1;goto B721968;
case 0x72196d:goto L72196d;
case 0x721970:c.instructions+=2;goto B721970;
case 0x721976:c.instructions+=1;goto B721976;
case 0x72197b:goto L72197b;
case 0x72197e:c.instructions+=3;goto B72197e;
case 0x721981:c.instructions+=2;goto B721981;
case 0x721982:c.instructions+=1;goto B721982;
case 0x721987:goto L721987;
case 0x721988:c.instructions+=2;goto B721988;
case 0x721989:c.instructions+=1;goto B721989;
case 0x72198b:goto L72198b;
case 0x72198e:c.instructions+=2;goto B72198e;
case 0x72198f:c.instructions+=1;goto B72198f;
case 0x721990:goto L721990;
case 0x721991:c.instructions+=1;goto B721991;
case 0x721996:goto L721996;
case 0x721998:c.instructions+=1;goto B721998;
case 0x72199d:goto L72199d;
case 0x72199f:c.instructions+=1;goto B72199f;
case 0x7219a4:goto L7219a4;
case 0x7219a6:c.instructions+=2;goto B7219a6;
case 0x7219a7:c.instructions+=1;goto B7219a7;
case 0x7219ac:goto L7219ac;
case 0x7219af:c.instructions+=2;goto B7219af;
case 0x7219b1:c.instructions+=1;goto B7219b1;
case 0x7219b3:goto L7219b3;
case 0x7219b5:c.instructions+=3;goto B7219b5;
case 0x7219b6:c.instructions+=2;goto B7219b6;
case 0x7219b7:c.instructions+=1;goto B7219b7;
case 0x7219b8:goto L7219b8;
case 0x7219bc:c.instructions+=7;goto B7219bc;
case 0x7219bd:c.instructions+=6;goto B7219bd;
case 0x7219c0:c.instructions+=5;goto B7219c0;
case 0x7219c2:c.instructions+=4;goto B7219c2;
case 0x7219c3:c.instructions+=3;goto B7219c3;
case 0x7219c9:c.instructions+=2;goto B7219c9;
case 0x7219cc:c.instructions+=1;goto B7219cc;
case 0x7219d1:goto L7219d1;
case 0x7219d3:goto L7219d3;
case 0x7219d7:c.instructions+=8;goto B7219d7;
case 0x7219da:c.instructions+=7;goto B7219da;
case 0x7219de:c.instructions+=6;goto B7219de;
case 0x7219e5:c.instructions+=5;goto B7219e5;
case 0x7219e7:c.instructions+=4;goto B7219e7;
case 0x7219e8:c.instructions+=3;goto B7219e8;
case 0x7219ea:c.instructions+=2;goto B7219ea;
case 0x7219eb:c.instructions+=1;goto B7219eb;
case 0x7219ec:goto L7219ec;
case 0x7219ed:c.instructions+=3;goto B7219ed;
case 0x7219ef:c.instructions+=2;goto B7219ef;
case 0x7219f0:c.instructions+=1;goto B7219f0;
case 0x7219f5:goto L7219f5;
case 0x7219f6:c.instructions+=5;goto B7219f6;
case 0x7219f9:c.instructions+=4;goto B7219f9;
case 0x721a00:c.instructions+=3;goto B721a00;
case 0x721a02:c.instructions+=2;goto B721a02;
case 0x721a03:c.instructions+=1;goto B721a03;
case 0x721a04:goto L721a04;
case 0x721a05:c.instructions+=3;goto B721a05;
case 0x721a07:c.instructions+=2;goto B721a07;
case 0x721a09:c.instructions+=1;goto B721a09;
case 0x721a0b:goto L721a0b;
case 0x721a11:c.instructions+=1;goto B721a11;
case 0x721a13:goto L721a13;
case 0x721a17:c.instructions+=1;goto B721a17;
case 0x721a19:goto L721a19;
case 0x721a1e:goto L721a1e;
case 0x721a20:c.instructions+=2;goto B721a20;
case 0x721a21:c.instructions+=1;goto B721a21;
case 0x721a26:goto L721a26;
case 0x721a2b:goto L721a2b;
case 0x721a2c:c.instructions+=1;goto B721a2c;
case 0x721a31:goto L721a31;
case 0x721a34:c.instructions+=2;goto B721a34;
case 0x721a35:c.instructions+=1;goto B721a35;
case 0x721a3a:goto L721a3a;
case 0x721a3b:c.instructions+=1;goto B721a3b;
case 0x721a3c:goto L721a3c;
case 0x721a3d:c.instructions+=3;goto B721a3d;
case 0x721a3f:c.instructions+=2;goto B721a3f;
case 0x721a43:c.instructions+=1;goto B721a43;
case 0x721a45:goto L721a45;
case 0x721a4a:goto L721a4a;
case 0x721a4e:c.instructions+=2;goto B721a4e;
case 0x721a4f:c.instructions+=1;goto B721a4f;
case 0x721a54:goto L721a54;
case 0x721a58:c.instructions+=6;goto B721a58;
case 0x721a59:c.instructions+=5;goto B721a59;
case 0x721a5a:c.instructions+=4;goto B721a5a;
case 0x721a5d:c.instructions+=3;goto B721a5d;
case 0x721a5f:c.instructions+=2;goto B721a5f;
case 0x721a60:c.instructions+=1;goto B721a60;
case 0x721a63:goto L721a63;
case 0x721a68:goto L721a68;
case 0x721a6a:c.instructions+=1;goto B721a6a;
case 0x721a6b:goto L721a6b;
case 0x721a6f:c.instructions+=16;goto B721a6f;
case 0x721a75:c.instructions+=15;goto B721a75;
case 0x721a77:c.instructions+=14;goto B721a77;
case 0x721a7b:c.instructions+=13;goto B721a7b;
case 0x721a81:c.instructions+=12;goto B721a81;
case 0x721a87:c.instructions+=11;goto B721a87;
case 0x721a8d:c.instructions+=10;goto B721a8d;
case 0x721a91:c.instructions+=9;goto B721a91;
case 0x721a95:c.instructions+=8;goto B721a95;
case 0x721a98:c.instructions+=7;goto B721a98;
case 0x721a9c:c.instructions+=6;goto B721a9c;
case 0x721aa0:c.instructions+=5;goto B721aa0;
case 0x721aa3:c.instructions+=4;goto B721aa3;
case 0x721aa7:c.instructions+=3;goto B721aa7;
case 0x721aab:c.instructions+=2;goto B721aab;
case 0x721aad:c.instructions+=1;goto B721aad;
case 0x721aae:goto L721aae;
case 0x721ab5:c.instructions+=1;goto B721ab5;
case 0x721ab7:goto L721ab7;
case 0x721abe:c.instructions+=3;goto B721abe;
case 0x721ac2:c.instructions+=2;goto B721ac2;
case 0x721ac9:c.instructions+=1;goto B721ac9;
case 0x721acf:goto L721acf;
case 0x721b27:goto L721b27;
case 0x721b2e:c.instructions+=1;goto B721b2e;
case 0x721b30:goto L721b30;
case 0x721b32:c.instructions+=2;goto B721b32;
case 0x721b33:c.instructions+=1;goto B721b33;
case 0x721b34:goto L721b34;
case 0x721b38:c.instructions+=5;goto B721b38;
case 0x721b3e:c.instructions+=4;goto B721b3e;
case 0x721b41:c.instructions+=3;goto B721b41;
case 0x721b44:c.instructions+=2;goto B721b44;
case 0x721b47:c.instructions+=1;goto B721b47;
case 0x721b48:goto L721b48;
case 0x721b49:c.instructions+=6;goto B721b49;
case 0x721b4b:c.instructions+=5;goto B721b4b;
case 0x721b4e:c.instructions+=4;goto B721b4e;
case 0x721b4f:c.instructions+=3;goto B721b4f;
case 0x721b52:c.instructions+=2;goto B721b52;
case 0x721b56:c.instructions+=1;goto B721b56;
case 0x721b58:goto L721b58;
case 0x721b59:goto L721b59;
case 0x721b5c:c.instructions+=11;goto B721b5c;
case 0x721b5f:c.instructions+=10;goto B721b5f;
case 0x721b62:c.instructions+=9;goto B721b62;
case 0x721b65:c.instructions+=8;goto B721b65;
case 0x721b68:c.instructions+=7;goto B721b68;
case 0x721b6c:c.instructions+=6;goto B721b6c;
case 0x721b6f:c.instructions+=5;goto B721b6f;
case 0x721b73:c.instructions+=4;goto B721b73;
case 0x721b75:c.instructions+=3;goto B721b75;
case 0x721b7c:c.instructions+=2;goto B721b7c;
case 0x721b7f:c.instructions+=1;goto B721b7f;
case 0x721b81:goto L721b81;
case 0x721b84:c.instructions+=2;goto B721b84;
case 0x721b85:c.instructions+=1;goto B721b85;
case 0x721b8c:goto L721b8c;
case 0x721b93:c.instructions+=4;goto B721b93;
case 0x721b94:c.instructions+=3;goto B721b94;
case 0x721b96:c.instructions+=2;goto B721b96;
case 0x721b97:c.instructions+=1;goto B721b97;
case 0x721b99:goto L721b99;
case 0x721b9d:c.instructions+=1;goto B721b9d;
case 0x721b9f:goto L721b9f;
case 0x721ba0:goto L721ba0;
case 0x721ba1:c.instructions+=2;goto B721ba1;
case 0x721ba2:c.instructions+=1;goto B721ba2;
case 0x721ba3:goto L721ba3;
case 0x721ba4:c.instructions+=6;goto B721ba4;
case 0x721ba6:c.instructions+=5;goto B721ba6;
case 0x721bac:c.instructions+=4;goto B721bac;
case 0x721bad:c.instructions+=3;goto B721bad;
case 0x721baf:c.instructions+=2;goto B721baf;
case 0x721bb5:c.instructions+=1;goto B721bb5;
case 0x721bb7:goto L721bb7;
case 0x721bb9:c.instructions+=2;goto B721bb9;
case 0x721bba:c.instructions+=1;goto B721bba;
case 0x721bbf:goto L721bbf;
case 0x721bc0:c.instructions+=3;goto B721bc0;
case 0x721bc1:c.instructions+=2;goto B721bc1;
case 0x721bcb:c.instructions+=1;goto B721bcb;
case 0x721bd0:goto L721bd0;
case 0x721bd3:c.instructions+=8;goto B721bd3;
case 0x721bd6:c.instructions+=7;goto B721bd6;
case 0x721bd8:c.instructions+=6;goto B721bd8;
case 0x721bde:c.instructions+=5;goto B721bde;
case 0x721be1:c.instructions+=4;goto B721be1;
case 0x721be3:c.instructions+=3;goto B721be3;
case 0x721be7:c.instructions+=2;goto B721be7;
case 0x721bed:c.instructions+=1;goto B721bed;
case 0x721bef:goto L721bef;
case 0x721bf3:c.instructions+=2;goto B721bf3;
case 0x721bf6:c.instructions+=1;goto B721bf6;
case 0x721bf8:goto L721bf8;
case 0x721bfb:c.instructions+=2;goto B721bfb;
case 0x721bfc:c.instructions+=1;goto B721bfc;
case 0x721c01:goto L721c01;
case 0x721c03:c.instructions+=4;goto B721c03;
case 0x721c04:c.instructions+=3;goto B721c04;
case 0x721c05:c.instructions+=2;goto B721c05;
case 0x721c08:c.instructions+=1;goto B721c08;
case 0x721c0a:goto L721c0a;
case 0x721c0e:goto L721c0e;
case 0x721c14:c.instructions+=4;goto B721c14;
case 0x721c15:c.instructions+=3;goto B721c15;
case 0x721c18:c.instructions+=2;goto B721c18;
case 0x721c19:c.instructions+=1;goto B721c19;
case 0x721c1e:goto L721c1e;
case 0x721c21:c.instructions+=4;goto B721c21;
case 0x721c27:c.instructions+=3;goto B721c27;
case 0x721c28:c.instructions+=2;goto B721c28;
case 0x721c29:c.instructions+=1;goto B721c29;
case 0x721c2e:goto L721c2e;
case 0x721c31:c.instructions+=2;goto B721c31;
case 0x721c34:c.instructions+=1;goto B721c34;
case 0x721c36:goto L721c36;
case 0x721c3a:c.instructions+=3;goto B721c3a;
case 0x721c3d:c.instructions+=2;goto B721c3d;
case 0x721c40:c.instructions+=1;goto B721c40;
case 0x721c42:goto L721c42;
case 0x721c44:c.instructions+=4;goto B721c44;
case 0x721c45:c.instructions+=3;goto B721c45;
case 0x721c46:c.instructions+=2;goto B721c46;
case 0x721c49:c.instructions+=1;goto B721c49;
case 0x721c4a:goto L721c4a;
case 0x721c4b:c.instructions+=2;goto B721c4b;
case 0x721c4c:c.instructions+=1;goto B721c4c;
case 0x721c4d:goto L721c4d;
case 0x721c4e:c.instructions+=4;goto B721c4e;
case 0x721c50:c.instructions+=3;goto B721c50;
case 0x721c56:c.instructions+=2;goto B721c56;
case 0x721c5d:c.instructions+=1;goto B721c5d;
case 0x721c5f:goto L721c5f;
case 0x721c61:c.instructions+=3;goto B721c61;
case 0x721c62:c.instructions+=2;goto B721c62;
case 0x721c63:c.instructions+=1;goto B721c63;
case 0x721c64:goto L721c64;
case 0x721c65:c.instructions+=4;goto B721c65;
case 0x721c68:c.instructions+=3;goto B721c68;
case 0x721c6b:c.instructions+=2;goto B721c6b;
case 0x721c6c:c.instructions+=1;goto B721c6c;
case 0x721c6e:goto L721c6e;
case 0x721c70:c.instructions+=2;goto B721c70;
case 0x721c77:c.instructions+=1;goto B721c77;
case 0x721c7d:goto L721c7d;
case 0x721c7e:c.instructions+=1;goto B721c7e;
case 0x721c83:goto L721c83;
case 0x721c8a:c.instructions+=4;goto B721c8a;
case 0x721c8b:c.instructions+=3;goto B721c8b;
case 0x721c8d:c.instructions+=2;goto B721c8d;
case 0x721c8e:c.instructions+=1;goto B721c8e;
case 0x721c90:goto L721c90;
case 0x721c95:goto L721c95;
case 0x721c96:c.instructions+=1;goto B721c96;
case 0x721c9b:goto L721c9b;
case 0x721c9d:c.instructions+=2;goto B721c9d;
case 0x721c9e:c.instructions+=1;goto B721c9e;
case 0x721ca0:goto L721ca0;
case 0x721ca2:c.instructions+=2;goto B721ca2;
case 0x721ca3:c.instructions+=1;goto B721ca3;
case 0x721ca8:goto L721ca8;
case 0x721ca9:c.instructions+=1;goto B721ca9;
case 0x721cae:goto L721cae;
case 0x721cb3:c.instructions+=7;goto B721cb3;
case 0x721cb5:c.instructions+=6;goto B721cb5;
case 0x721cb8:c.instructions+=5;goto B721cb8;
case 0x721cbb:c.instructions+=4;goto B721cbb;
case 0x721cbd:c.instructions+=3;goto B721cbd;
case 0x721cc4:c.instructions+=2;goto B721cc4;
case 0x721cc7:c.instructions+=1;goto B721cc7;
case 0x721cc9:goto L721cc9;
case 0x721ccc:goto L721ccc;
case 0x721ccf:c.instructions+=5;goto B721ccf;
case 0x721cd4:c.instructions+=4;goto B721cd4;
case 0x721cd6:c.instructions+=3;goto B721cd6;
case 0x721cda:c.instructions+=2;goto B721cda;
case 0x721cdc:c.instructions+=1;goto B721cdc;
case 0x721cde:goto L721cde;
case 0x721ce0:c.instructions+=1;goto B721ce0;
case 0x721ce5:goto L721ce5;
case 0x721ce6:goto L721ce6;
case 0x721ced:c.instructions+=4;goto B721ced;
case 0x721cf0:c.instructions+=3;goto B721cf0;
case 0x721cf7:c.instructions+=2;goto B721cf7;
case 0x721cfa:c.instructions+=1;goto B721cfa;
case 0x721cfc:goto L721cfc;
case 0x721cfe:c.instructions+=2;goto B721cfe;
case 0x721d02:c.instructions+=1;goto B721d02;
case 0x721d04:goto L721d04;
case 0x721d05:c.instructions+=2;goto B721d05;
case 0x721d06:c.instructions+=1;goto B721d06;
case 0x721d0b:goto L721d0b;
case 0x721d0d:c.instructions+=4;goto B721d0d;
case 0x721d0e:c.instructions+=3;goto B721d0e;
case 0x721d0f:c.instructions+=2;goto B721d0f;
case 0x721d12:c.instructions+=1;goto B721d12;
case 0x721d14:goto L721d14;
case 0x721d18:goto L721d18;
case 0x721d1e:c.instructions+=4;goto B721d1e;
case 0x721d1f:c.instructions+=3;goto B721d1f;
case 0x721d22:c.instructions+=2;goto B721d22;
case 0x721d23:c.instructions+=1;goto B721d23;
case 0x721d28:goto L721d28;
case 0x721d2b:c.instructions+=4;goto B721d2b;
case 0x721d31:c.instructions+=3;goto B721d31;
case 0x721d33:c.instructions+=2;goto B721d33;
case 0x721d34:c.instructions+=1;goto B721d34;
case 0x721d39:goto L721d39;
case 0x721d3c:c.instructions+=2;goto B721d3c;
case 0x721d40:c.instructions+=1;goto B721d40;
case 0x721d42:goto L721d42;
case 0x721d46:c.instructions+=3;goto B721d46;
case 0x721d47:c.instructions+=2;goto B721d47;
case 0x721d49:c.instructions+=1;goto B721d49;
case 0x721d4b:goto L721d4b;
case 0x721d50:c.instructions+=4;goto B721d50;
case 0x721d54:c.instructions+=3;goto B721d54;
case 0x721d59:c.instructions+=2;goto B721d59;
case 0x721d5e:c.instructions+=1;goto B721d5e;
case 0x721d63:goto L721d63;
case 0x721d64:goto L721d64;
case 0x721d66:goto L721d66;
case 0x721d67:c.instructions+=3;goto B721d67;
case 0x721d68:c.instructions+=2;goto B721d68;
case 0x721d69:c.instructions+=1;goto B721d69;
case 0x721d6a:goto L721d6a;
case 0x721d6e:c.instructions+=7;goto B721d6e;
case 0x721d74:c.instructions+=6;goto B721d74;
case 0x721d75:c.instructions+=5;goto B721d75;
case 0x721d79:c.instructions+=4;goto B721d79;
case 0x721d7c:c.instructions+=3;goto B721d7c;
case 0x721d7f:c.instructions+=2;goto B721d7f;
case 0x721d86:c.instructions+=1;goto B721d86;
case 0x721d8b:goto L721d8b;
case 0x721d8c:c.instructions+=3;goto B721d8c;
case 0x721d8e:c.instructions+=2;goto B721d8e;
case 0x721d8f:c.instructions+=1;goto B721d8f;
case 0x721d90:goto L721d90;
case 0x721d91:c.instructions+=5;goto B721d91;
case 0x721d95:c.instructions+=4;goto B721d95;
case 0x721d96:c.instructions+=3;goto B721d96;
case 0x721d9a:c.instructions+=2;goto B721d9a;
case 0x721d9b:c.instructions+=1;goto B721d9b;
case 0x721da0:goto L721da0;
case 0x721da2:c.instructions+=5;goto B721da2;
case 0x721da4:c.instructions+=4;goto B721da4;
case 0x721da7:c.instructions+=3;goto B721da7;
case 0x721da8:c.instructions+=2;goto B721da8;
case 0x721daa:c.instructions+=1;goto B721daa;
case 0x721daf:goto L721daf;
case 0x721db2:c.instructions+=4;goto B721db2;
case 0x721db4:c.instructions+=3;goto B721db4;
case 0x721db5:c.instructions+=2;goto B721db5;
case 0x721db6:c.instructions+=1;goto B721db6;
case 0x721db7:goto L721db7;
case 0x721dbe:c.instructions+=1;goto B721dbe;
case 0x721dc0:goto L721dc0;
case 0x721dc2:c.instructions+=1;goto B721dc2;
case 0x721dc4:goto L721dc4;
case 0x721dc8:c.instructions+=1;goto B721dc8;
case 0x721dcd:goto L721dcd;
case 0x721dcf:c.instructions+=2;goto B721dcf;
case 0x721dd0:c.instructions+=1;goto B721dd0;
case 0x721dd2:goto L721dd2;
case 0x721dd4:goto L721dd4;
case 0x721dd5:c.instructions+=1;goto B721dd5;
case 0x721dd6:goto L721dd6;
case 0x721dda:c.instructions+=2;goto B721dda;
case 0x721ddc:c.instructions+=1;goto B721ddc;
case 0x721de1:goto L721de1;
case 0x721de2:c.instructions+=3;goto B721de2;
case 0x721de3:c.instructions+=2;goto B721de3;
case 0x721de5:c.instructions+=1;goto B721de5;
case 0x721de6:goto L721de6;
case 0x721deb:c.instructions+=2;goto B721deb;
case 0x721df1:c.instructions+=1;goto B721df1;
case 0x721df3:goto L721df3;
case 0x721df8:c.instructions+=3;goto B721df8;
case 0x721dfd:c.instructions+=2;goto B721dfd;
case 0x721dff:c.instructions+=1;goto B721dff;
case 0x721e01:goto L721e01;
case 0x721e02:goto L721e02;
case 0x721e05:c.instructions+=2;goto B721e05;
case 0x721e07:c.instructions+=1;goto B721e07;
case 0x721e0a:goto L721e0a;
case 0x721e0c:c.instructions+=3;goto B721e0c;
case 0x721e0d:c.instructions+=2;goto B721e0d;
case 0x721e0f:c.instructions+=1;goto B721e0f;
case 0x721e11:goto L721e11;
case 0x721e12:goto L721e12;
case 0x721e13:goto L721e13;
case 0x721e14:c.instructions+=5;goto B721e14;
case 0x721e1b:c.instructions+=4;goto B721e1b;
case 0x721e1c:c.instructions+=3;goto B721e1c;
case 0x721e1d:c.instructions+=2;goto B721e1d;
case 0x721e1e:c.instructions+=1;goto B721e1e;
case 0x721e23:goto L721e23;
case 0x721e25:c.instructions+=3;goto B721e25;
case 0x721e27:c.instructions+=2;goto B721e27;
case 0x721e2d:c.instructions+=1;goto B721e2d;
case 0x721e2f:goto L721e2f;
case 0x721e36:goto L721e36;
case 0x721e3d:c.instructions+=3;goto B721e3d;
case 0x721e3e:c.instructions+=2;goto B721e3e;
case 0x721e40:c.instructions+=1;goto B721e40;
case 0x721e42:goto L721e42;
case 0x721e44:c.instructions+=2;goto B721e44;
case 0x721e4b:c.instructions+=1;goto B721e4b;
case 0x721e51:goto L721e51;
case 0x721e55:c.instructions+=1;goto B721e55;
case 0x721e56:goto L721e56;
case 0x721e5b:c.instructions+=4;goto B721e5b;
case 0x721e5f:c.instructions+=3;goto B721e5f;
case 0x721e62:c.instructions+=2;goto B721e62;
case 0x721e66:c.instructions+=1;goto B721e66;
case 0x721e6c:goto L721e6c;
case 0x721e6e:c.instructions+=1;goto B721e6e;
case 0x721e70:goto L721e70;
case 0x721e76:c.instructions+=1;goto B721e76;
case 0x721e78:goto L721e78;
case 0x721e7b:c.instructions+=3;goto B721e7b;
case 0x721e7e:c.instructions+=2;goto B721e7e;
case 0x721e81:c.instructions+=1;goto B721e81;
case 0x721e83:goto L721e83;
case 0x721e86:goto L721e86;
case 0x721e87:c.instructions+=2;goto B721e87;
case 0x721e8e:c.instructions+=1;goto B721e8e;
case 0x721e93:goto L721e93;
case 0x721e94:c.instructions+=1;goto B721e94;
case 0x721e99:goto L721e99;
case 0x721e9a:c.instructions+=1;goto B721e9a;
case 0x721e9b:goto L721e9b;
case 0x721e9d:c.instructions+=2;goto B721e9d;
case 0x721ea0:c.instructions+=1;goto B721ea0;
case 0x721ea2:goto L721ea2;
case 0x721ea5:c.instructions+=4;goto B721ea5;
case 0x721ea8:c.instructions+=3;goto B721ea8;
case 0x721ea9:c.instructions+=2;goto B721ea9;
case 0x721eac:c.instructions+=1;goto B721eac;
case 0x721eae:goto L721eae;
case 0x721eb1:goto L721eb1;
case 0x721eb7:c.instructions+=5;goto B721eb7;
case 0x721eba:c.instructions+=4;goto B721eba;
case 0x721ebc:c.instructions+=3;goto B721ebc;
case 0x721ebe:c.instructions+=2;goto B721ebe;
case 0x721ec1:c.instructions+=1;goto B721ec1;
case 0x721ec3:goto L721ec3;
case 0x721ec6:c.instructions+=11;goto B721ec6;
case 0x721ec8:c.instructions+=10;goto B721ec8;
case 0x721ecb:c.instructions+=9;goto B721ecb;
case 0x721ecc:c.instructions+=8;goto B721ecc;
case 0x721ecf:c.instructions+=7;goto B721ecf;
case 0x721ed2:c.instructions+=6;goto B721ed2;
case 0x721ed8:c.instructions+=5;goto B721ed8;
case 0x721eda:c.instructions+=4;goto B721eda;
case 0x721edd:c.instructions+=3;goto B721edd;
case 0x721ee0:c.instructions+=2;goto B721ee0;
case 0x721ee2:c.instructions+=1;goto B721ee2;
case 0x721ee4:goto L721ee4;
case 0x721ee7:c.instructions+=1;goto B721ee7;
case 0x721ee9:goto L721ee9;
case 0x721eeb:goto L721eeb;
case 0x721eee:c.instructions+=1;goto B721eee;
case 0x721ef0:goto L721ef0;
case 0x721ef3:c.instructions+=3;goto B721ef3;
case 0x721ef5:c.instructions+=2;goto B721ef5;
case 0x721ef8:c.instructions+=1;goto B721ef8;
case 0x721efb:goto L721efb;
case 0x721efe:c.instructions+=4;goto B721efe;
case 0x721f04:c.instructions+=3;goto B721f04;
case 0x721f06:c.instructions+=2;goto B721f06;
case 0x721f09:c.instructions+=1;goto B721f09;
case 0x721f0b:goto L721f0b;
case 0x721f0e:c.instructions+=4;goto B721f0e;
case 0x721f11:c.instructions+=3;goto B721f11;
case 0x721f13:c.instructions+=2;goto B721f13;
case 0x721f16:c.instructions+=1;goto B721f16;
case 0x721f18:goto L721f18;
case 0x721f1b:c.instructions+=2;goto B721f1b;
case 0x721f1d:c.instructions+=1;goto B721f1d;
case 0x721f1e:goto L721f1e;
case 0x721f20:c.instructions+=1;goto B721f20;
case 0x721f22:goto L721f22;
case 0x721f25:c.instructions+=3;goto B721f25;
case 0x721f28:c.instructions+=2;goto B721f28;
case 0x721f2b:c.instructions+=1;goto B721f2b;
case 0x721f2d:goto L721f2d;
case 0x721f2f:c.instructions+=1;goto B721f2f;
case 0x721f34:goto L721f34;
case 0x721f36:goto L721f36;
case 0x721f39:c.instructions+=6;goto B721f39;
case 0x721f3c:c.instructions+=5;goto B721f3c;
case 0x721f3f:c.instructions+=4;goto B721f3f;
case 0x721f41:c.instructions+=3;goto B721f41;
case 0x721f43:c.instructions+=2;goto B721f43;
case 0x721f46:c.instructions+=1;goto B721f46;
case 0x721f48:goto L721f48;
case 0x721f4f:goto L721f4f;
case 0x721f52:c.instructions+=5;goto B721f52;
case 0x721f55:c.instructions+=4;goto B721f55;
case 0x721f58:c.instructions+=3;goto B721f58;
case 0x721f59:c.instructions+=2;goto B721f59;
case 0x721f5c:c.instructions+=1;goto B721f5c;
case 0x721f5f:goto L721f5f;
case 0x721f61:c.instructions+=1;goto B721f61;
case 0x721f63:goto L721f63;
case 0x721f64:c.instructions+=1;goto B721f64;
case 0x721f69:goto L721f69;
case 0x721f6a:c.instructions+=1;goto B721f6a;
case 0x721f6f:goto L721f6f;
case 0x721f70:goto L721f70;
case 0x721f71:goto L721f71;
case 0x721f78:c.instructions+=4;goto B721f78;
case 0x721f80:c.instructions+=3;goto B721f80;
case 0x721f81:c.instructions+=2;goto B721f81;
case 0x721f83:c.instructions+=1;goto B721f83;
case 0x721f89:goto L721f89;
case 0x721f8a:goto L721f8a;
case 0x721f8b:c.instructions+=4;goto B721f8b;
case 0x721f8c:c.instructions+=3;goto B721f8c;
case 0x721f8d:c.instructions+=2;goto B721f8d;
case 0x721f8e:c.instructions+=1;goto B721f8e;
case 0x721f8f:goto L721f8f;
case 0x721f94:goto L721f94;
case 0x721f99:goto L721f99;
case 0x721f9f:goto L721f9f;
case 0x721fa6:c.instructions+=1;goto B721fa6;
case 0x721fa7:goto L721fa7;
case 0x721fae:c.instructions+=1;goto B721fae;
case 0x721fb4:goto L721fb4;
case 0x721fb5:c.instructions+=11;goto B721fb5;
case 0x721fb9:c.instructions+=10;goto B721fb9;
case 0x721fbc:c.instructions+=9;goto B721fbc;
case 0x721fbf:c.instructions+=8;goto B721fbf;
case 0x721fc2:c.instructions+=7;goto B721fc2;
case 0x721fc5:c.instructions+=6;goto B721fc5;
case 0x721fcb:c.instructions+=5;goto B721fcb;
case 0x721fcd:c.instructions+=4;goto B721fcd;
case 0x721fd0:c.instructions+=3;goto B721fd0;
case 0x721fd3:c.instructions+=2;goto B721fd3;
case 0x721fd5:c.instructions+=1;goto B721fd5;
case 0x721fd7:goto L721fd7;
case 0x721fda:c.instructions+=1;goto B721fda;
case 0x721fdc:goto L721fdc;
case 0x721fde:goto L721fde;
case 0x721fe1:c.instructions+=1;goto B721fe1;
case 0x721fe3:goto L721fe3;
case 0x721fe6:c.instructions+=3;goto B721fe6;
case 0x721fe8:c.instructions+=2;goto B721fe8;
case 0x721feb:c.instructions+=1;goto B721feb;
case 0x721fee:goto L721fee;
case 0x721ff2:c.instructions+=7;goto B721ff2;
case 0x721ff5:c.instructions+=6;goto B721ff5;
case 0x721ff8:c.instructions+=5;goto B721ff8;
case 0x721ffa:c.instructions+=4;goto B721ffa;
case 0x721ffc:c.instructions+=3;goto B721ffc;
case 0x721ffd:c.instructions+=2;goto B721ffd;
case 0x721fff:c.instructions+=1;goto B721fff;
default:missing_instruction(c.pc);}
B721002:L721002:{c.instructions+=3;NFSU2_TR(0x721002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B721004:{NFSU2_TR(0x721004);
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
B721006:{NFSU2_TR(0x721006);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72100a;}}
}
B721008:L721008:{c.instructions+=1;NFSU2_TR(0x721008);
__builtin_memmove((R+0),(R+4),4);
}
B72100a:L72100a:{c.instructions+=1;NFSU2_TR(0x72100a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72100b:L72100b:{c.instructions+=6;NFSU2_TR(0x72100b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72100f:{NFSU2_TR(0x72100f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721012:{NFSU2_TR(0x721012);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B721016:{NFSU2_TR(0x721016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B721018:{NFSU2_TR(0x721018);
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
B72101a:{NFSU2_TR(0x72101a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72101e;}}
}
B72101c:L72101c:{c.instructions+=1;NFSU2_TR(0x72101c);
__builtin_memmove((R+0),(R+4),4);
}
B72101e:L72101e:{c.instructions+=1;NFSU2_TR(0x72101e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72101f:L72101f:{c.instructions+=4;NFSU2_TR(0x72101f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721023:{NFSU2_TR(0x721023);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B721027:{NFSU2_TR(0x721027);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72102b:{NFSU2_TR(0x72102b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72102c:L72102c:{c.instructions+=5;NFSU2_TR(0x72102c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721030:{NFSU2_TR(0x721030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B721032:{NFSU2_TR(0x721032);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721036:{NFSU2_TR(0x721036);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721039:{NFSU2_TR(0x721039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72103a:L72103a:{c.instructions+=3;NFSU2_TR(0x72103a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72103e:{NFSU2_TR(0x72103e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B721045:{NFSU2_TR(0x721045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721046:L721046:{c.instructions+=4;NFSU2_TR(0x721046);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72104a:{NFSU2_TR(0x72104a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72104c:{NFSU2_TR(0x72104c);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B72104f:{NFSU2_TR(0x72104f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72106b;}}
}
B721051:L721051:{c.instructions+=2;NFSU2_TR(0x721051);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721054:{NFSU2_TR(0x721054);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721055:L721055:{c.instructions+=8;NFSU2_TR(0x721055);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B721059:{NFSU2_TR(0x721059);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B72105c:{NFSU2_TR(0x72105c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72105e:{NFSU2_TR(0x72105e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B721062:{NFSU2_TR(0x721062);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B721063:{NFSU2_TR(0x721063);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B721066:{NFSU2_TR(0x721066);
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
B721068:{NFSU2_TR(0x721068);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721055u);}goto L721055;}}
}
B72106a:L72106a:{c.instructions+=1;NFSU2_TR(0x72106a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72106b:L72106b:{c.instructions+=1;NFSU2_TR(0x72106b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72106c:L72106c:{c.instructions+=4;NFSU2_TR(0x72106c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721070:{NFSU2_TR(0x721070);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B721072:{NFSU2_TR(0x721072);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B721075:{NFSU2_TR(0x721075);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L721091;}}
}
B721077:L721077:{c.instructions+=2;NFSU2_TR(0x721077);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B72107a:{NFSU2_TR(0x72107a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72107b:L72107b:{c.instructions+=8;NFSU2_TR(0x72107b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72107f:{NFSU2_TR(0x72107f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B721082:{NFSU2_TR(0x721082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B721084:{NFSU2_TR(0x721084);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B721088:{NFSU2_TR(0x721088);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B721089:{NFSU2_TR(0x721089);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72108c:{NFSU2_TR(0x72108c);
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
B72108e:{NFSU2_TR(0x72108e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72107bu);}goto L72107b;}}
}
B721090:L721090:{c.instructions+=1;NFSU2_TR(0x721090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721091:L721091:{c.instructions+=2;NFSU2_TR(0x721091);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B721095:{NFSU2_TR(0x721095);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721096:L721096:{c.instructions+=2;NFSU2_TR(0x721096);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721097:{NFSU2_TR(0x721097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72109cull));
{goto L721f99;}
}
B72109c:L72109c:{c.instructions+=4;NFSU2_TR(0x72109c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7210a0:{NFSU2_TR(0x7210a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7210a4:{NFSU2_TR(0x7210a4);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(R+0),r2(U+6)));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
}
B7210a8:{NFSU2_TR(0x7210a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7210bb;}}
}
B7210aa:L7210aa:{c.instructions+=3;NFSU2_TR(0x7210aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7210ab:{NFSU2_TR(0x7210ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7210ae:{NFSU2_TR(0x7210ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7210b3ull));
TAIL_STATIC(0x724792u,724);
}
B7210b3:L7210b3:{c.instructions+=4;NFSU2_TR(0x7210b3);
__builtin_memmove((R+28),(R+0),4);
}
B7210b5:{NFSU2_TR(0x7210b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7210b7:{NFSU2_TR(0x7210b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7210b8:{NFSU2_TR(0x7210b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7210c1;}}
}
B7210ba:L7210ba:{c.instructions+=1;NFSU2_TR(0x7210ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7210bb:L7210bb:{c.instructions+=2;NFSU2_TR(0x7210bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7210bc:{NFSU2_TR(0x7210bc);
{goto L7211a6;}
}
B7210c1:L7210c1:{c.instructions+=5;NFSU2_TR(0x7210c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7210c2:{NFSU2_TR(0x7210c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7210c5:{NFSU2_TR(0x7210c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7210c8:{NFSU2_TR(0x7210c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7210c9:{NFSU2_TR(0x7210c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7210ceull));
TAIL_STATIC(0x71feccu,71f);
}
B7210ce:L7210ce:{c.instructions+=10;NFSU2_TR(0x7210ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7210d1:{NFSU2_TR(0x7210d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7210d5:{NFSU2_TR(0x7210d5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B7210d7:{NFSU2_TR(0x7210d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7210da:{NFSU2_TR(0x7210da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7210dd:{NFSU2_TR(0x7210dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7210de:{NFSU2_TR(0x7210de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7210e1:{NFSU2_TR(0x7210e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7210e3:{NFSU2_TR(0x7210e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7210e6:{NFSU2_TR(0x7210e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7210ebull));
TAIL_STATIC(0x71fe8au,71f);
}
B7210eb:L7210eb:{c.instructions+=8;NFSU2_TR(0x7210eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7210ee:{NFSU2_TR(0x7210ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7210f1:{NFSU2_TR(0x7210f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7210f4:{NFSU2_TR(0x7210f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7210f7:{NFSU2_TR(0x7210f7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B7210fa:{NFSU2_TR(0x7210fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7210fb:{NFSU2_TR(0x7210fb);
w4(R+4,u32(0x8b446cull));
}
B721100:{NFSU2_TR(0x721100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721105ull));
TAIL_STATIC(0x71fe8au,71f);
}
B721105:L721105:{c.instructions+=3;NFSU2_TR(0x721105);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B721109:{NFSU2_TR(0x721109);
__builtin_memmove((R+28),(R+12),4);
}
B72110b:{NFSU2_TR(0x72110b);
if(r1(R+518)){{goto L721124;}}
}
B72110d:L72110d:{c.instructions+=5;NFSU2_TR(0x72110d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721111:{NFSU2_TR(0x721111);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721112:{NFSU2_TR(0x721112);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x72103aull));
s4(u32(r4(U+0)),r4(U+4));
}
B721119:{NFSU2_TR(0x721119);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72111c:{NFSU2_TR(0x72111c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721121ull));
TAIL_STATIC(0x7350b0u,735);
}
B721121:L721121:{c.instructions+=1;NFSU2_TR(0x721121);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B721124:L721124:{c.instructions+=3;NFSU2_TR(0x721124);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B721126:{NFSU2_TR(0x721126);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B72112a:{NFSU2_TR(0x72112a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72114e;}}
}
B72112c:L72112c:{c.instructions+=6;NFSU2_TR(0x72112c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72112f:{NFSU2_TR(0x72112f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721130:{NFSU2_TR(0x721130);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721131:{NFSU2_TR(0x721131);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x72102cull));
s4(u32(r4(U+0)),r4(U+4));
}
B721138:{NFSU2_TR(0x721138);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72113b:{NFSU2_TR(0x72113b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721140ull));
TAIL_STATIC(0x735740u,735);
}
B721140:L721140:{c.instructions+=7;NFSU2_TR(0x721140);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B721144:{NFSU2_TR(0x721144);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B721147:{NFSU2_TR(0x721147);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B721148:{NFSU2_TR(0x721148);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72114a:{NFSU2_TR(0x72114a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72114b:{NFSU2_TR(0x72114b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72114c:{NFSU2_TR(0x72114c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72112cu);}goto L72112c;}}
}
B72114e:L72114e:{c.instructions+=2;NFSU2_TR(0x72114e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B721152:{NFSU2_TR(0x721152);
if(r1(R+518)){{goto L721170;}}
}
B721154:L721154:{c.instructions+=5;NFSU2_TR(0x721154);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721158:{NFSU2_TR(0x721158);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721159:{NFSU2_TR(0x721159);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x721046ull));
s4(u32(r4(U+0)),r4(U+4));
}
B721160:{NFSU2_TR(0x721160);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721163:{NFSU2_TR(0x721163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721168ull));
TAIL_STATIC(0x735130u,735);
}
B721168:L721168:{c.instructions+=2;NFSU2_TR(0x721168);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72116c:{NFSU2_TR(0x72116c);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B721170:L721170:{c.instructions+=3;NFSU2_TR(0x721170);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B721172:{NFSU2_TR(0x721172);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B721176:{NFSU2_TR(0x721176);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72119f;}}
}
B721178:L721178:{c.instructions+=6;NFSU2_TR(0x721178);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72117b:{NFSU2_TR(0x72117b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72117c:{NFSU2_TR(0x72117c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72117d:{NFSU2_TR(0x72117d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x72106cull));
s4(u32(r4(U+0)),r4(U+4));
}
B721184:{NFSU2_TR(0x721184);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721187:{NFSU2_TR(0x721187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72118cull));
TAIL_STATIC(0x7355d0u,735);
}
B72118c:L72118c:{c.instructions+=8;NFSU2_TR(0x72118c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B721190:{NFSU2_TR(0x721190);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B721194:{NFSU2_TR(0x721194);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B721198:{NFSU2_TR(0x721198);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B721199:{NFSU2_TR(0x721199);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72119b:{NFSU2_TR(0x72119b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72119c:{NFSU2_TR(0x72119c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72119d:{NFSU2_TR(0x72119d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721178u);}goto L721178;}}
}
B72119f:L72119f:{c.instructions+=4;NFSU2_TR(0x72119f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7211a3:{NFSU2_TR(0x7211a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7211a4:{NFSU2_TR(0x7211a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7211a5:{NFSU2_TR(0x7211a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7211a6:L7211a6:{c.instructions+=1;NFSU2_TR(0x7211a6);
{goto L721fa7;}
}
B7211ab:L7211ab:{c.instructions+=5;NFSU2_TR(0x7211ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7211ac:{NFSU2_TR(0x7211ac);
__builtin_memmove((R+20),(R+16),4);
}
B7211ae:{NFSU2_TR(0x7211ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7211af:{NFSU2_TR(0x7211af);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7211b6:{NFSU2_TR(0x7211b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7211bd;}}
}
B7211b8:L7211b8:{c.instructions+=4;NFSU2_TR(0x7211b8);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7211ba:{NFSU2_TR(0x7211ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7211bb:{NFSU2_TR(0x7211bb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7211bc:{NFSU2_TR(0x7211bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7211bd:L7211bd:{c.instructions+=3;NFSU2_TR(0x7211bd);
__builtin_memmove((R+0),gp(0x8b4498),4);
}
B7211c2:{NFSU2_TR(0x7211c2);
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
B7211c4:{NFSU2_TR(0x7211c4);
if(r1(R+518)){{goto L7211c8;}}
}
B7211c6:L7211c6:{c.instructions+=1;NFSU2_TR(0x7211c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7211c8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7211c8:L7211c8:{c.instructions+=3;NFSU2_TR(0x7211c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7211c9:{NFSU2_TR(0x7211c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7211ca:{NFSU2_TR(0x7211ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7211cfull));
{goto L721f99;}
}
B7211cf:L7211cf:{c.instructions+=3;NFSU2_TR(0x7211cf);
__builtin_memmove((R+28),gp(0x8b4470),4);
}
B7211d5:{NFSU2_TR(0x7211d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xffffffb0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7211d8:{NFSU2_TR(0x7211d8);
if(r1(R+518)){{goto L7211ea;}}
}
B7211da:L7211da:{c.instructions+=3;NFSU2_TR(0x7211da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7211dd:{NFSU2_TR(0x7211dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7211e0:{NFSU2_TR(0x7211e0);
if(r1(R+518)){{goto L7211f8;}}
}
B7211e2:L7211e2:{c.instructions+=3;NFSU2_TR(0x7211e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7211e5:{NFSU2_TR(0x7211e5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x50ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7211e8:{NFSU2_TR(0x7211e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7211dau);}goto L7211da;}}
}
B7211ea:L7211ea:{c.instructions+=2;NFSU2_TR(0x7211ea);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7211ec:{NFSU2_TR(0x7211ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7211ed:L7211ed:{c.instructions+=1;NFSU2_TR(0x7211ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7211f2ull));
{goto L721fa7;}
}
B7211f2:L7211f2:{c.instructions+=5;NFSU2_TR(0x7211f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7211f3:{NFSU2_TR(0x7211f3);
__builtin_memmove((R+0),(R+24),4);
}
B7211f5:{NFSU2_TR(0x7211f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7211f6:{NFSU2_TR(0x7211f6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7211f7:{NFSU2_TR(0x7211f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7211f8:L7211f8:{c.instructions+=5;NFSU2_TR(0x7211f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7211fb:{NFSU2_TR(0x7211fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7211ff:{NFSU2_TR(0x7211ff);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B721201:{NFSU2_TR(0x721201);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B721206:{NFSU2_TR(0x721206);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L721255;}}
}
B721208:L721208:{c.instructions+=1;NFSU2_TR(0x721208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721209:L721209:{c.instructions+=5;NFSU2_TR(0x721209);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72120c:{NFSU2_TR(0x72120c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72120d:{NFSU2_TR(0x72120d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721210:{NFSU2_TR(0x721210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721211:{NFSU2_TR(0x721211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721216ull));
TAIL_STATIC(0x735620u,735);
}
B721216:L721216:{c.instructions+=5;NFSU2_TR(0x721216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721217:{NFSU2_TR(0x721217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721218:{NFSU2_TR(0x721218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72121b:{NFSU2_TR(0x72121b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72121d:{NFSU2_TR(0x72121d);
if(r1(R+518)){{goto L72123a;}}
}
B72121f:L72121f:{c.instructions+=6;NFSU2_TR(0x72121f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721222:{NFSU2_TR(0x721222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B721224:{NFSU2_TR(0x721224);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B721226:{NFSU2_TR(0x721226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721227:{NFSU2_TR(0x721227);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72122e:{NFSU2_TR(0x72122e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721233ull));
TAIL_STATIC(0x71ff15u,71f);
}
B721233:L721233:{c.instructions+=4;NFSU2_TR(0x721233);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B721235:{NFSU2_TR(0x721235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721236:{NFSU2_TR(0x721236);
__builtin_memmove((R+4),(R+12),4);
}
B721238:{NFSU2_TR(0x721238);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72121fu);}goto L72121f;}}
}
B72123a:L72123a:{c.instructions+=8;NFSU2_TR(0x72123a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72123e:{NFSU2_TR(0x72123e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B721242:{NFSU2_TR(0x721242);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B721244:{NFSU2_TR(0x721244);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721247:{NFSU2_TR(0x721247);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B72124b:{NFSU2_TR(0x72124b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B72124f:{NFSU2_TR(0x72124f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B721252:{NFSU2_TR(0x721252);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721209u);}goto L721209;}}
}
B721254:L721254:{c.instructions+=1;NFSU2_TR(0x721254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B721255:L721255:{c.instructions+=4;NFSU2_TR(0x721255);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721258:{NFSU2_TR(0x721258);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72125a:{NFSU2_TR(0x72125a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72125c:{NFSU2_TR(0x72125c);
if(r1(R+518)){{goto L721265;}}
}
B72125e:L72125e:{c.instructions+=2;NFSU2_TR(0x72125e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72125f:{NFSU2_TR(0x72125f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721264ull));
TAIL_STATIC(0x724894u,724);
}
B721264:L721264:{c.instructions+=1;NFSU2_TR(0x721264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721265:L721265:{c.instructions+=3;NFSU2_TR(0x721265);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721268:{NFSU2_TR(0x721268);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72126a:{NFSU2_TR(0x72126a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L721273;}}
}
B72126c:L72126c:{c.instructions+=2;NFSU2_TR(0x72126c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72126d:{NFSU2_TR(0x72126d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721272ull));
{goto L721c4d;}
}
B721272:L721272:{c.instructions+=1;NFSU2_TR(0x721272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721273:L721273:{c.instructions+=3;NFSU2_TR(0x721273);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721276:{NFSU2_TR(0x721276);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B721278:{NFSU2_TR(0x721278);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L721281;}}
}
B72127a:L72127a:{c.instructions+=2;NFSU2_TR(0x72127a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72127b:{NFSU2_TR(0x72127b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721280ull));
{goto L721c4d;}
}
B721280:L721280:{c.instructions+=1;NFSU2_TR(0x721280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721281:L721281:{c.instructions+=4;NFSU2_TR(0x721281);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x50ull))));
}
B721284:{NFSU2_TR(0x721284);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721285:{NFSU2_TR(0x721285);
w4(R+4,u32(0x8b4470ull));
}
B72128a:{NFSU2_TR(0x72128a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72128full));
TAIL_STATIC(0x71fea4u,71f);
}
B72128f:L72128f:{c.instructions+=2;NFSU2_TR(0x72128f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4470),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721295:{NFSU2_TR(0x721295);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7211edu);}goto L7211ed;}}
}
B72129b:L72129b:{c.instructions+=3;NFSU2_TR(0x72129b);
u8 U[4];
w4(U+0,u32(0x8b4478ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7212a0:{NFSU2_TR(0x7212a0);
w4(R+4,u32(0x8b405cull));
}
B7212a5:{NFSU2_TR(0x7212a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7212aaull));
TAIL_STATIC(0x71fea4u,71f);
}
B7212aa:L7212aa:{c.instructions+=1;NFSU2_TR(0x7212aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7211edu);}goto L7211ed;}
}
B7212af:L7212af:{c.instructions+=2;NFSU2_TR(0x7212af);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b3fb4),u32(0x1ull)));
s4(0x8b3fb4,u32(u32(m4(0x8b3fb4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b3fb4))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b3fb4))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b3fb4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7212b5:{NFSU2_TR(0x7212b5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7212c1;}}
}
B7212b7:L7212b7:{c.instructions+=1;NFSU2_TR(0x7212b7);
s4(0x8b3fb4,u32(0x1ull));
}
B7212c1:L7212c1:{c.instructions+=2;NFSU2_TR(0x7212c1);
__builtin_memmove((R+0),gp(0x8b3fb4),4);
}
B7212c6:{NFSU2_TR(0x7212c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7212c7:L7212c7:{c.instructions+=1;NFSU2_TR(0x7212c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7212ccull));
{goto L721f99;}
}
B7212cc:L7212cc:{c.instructions+=1;NFSU2_TR(0x7212cc);
{goto L7212d7;}
}
B7212ce:L7212ce:{c.instructions+=2;NFSU2_TR(0x7212ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7212d1:{NFSU2_TR(0x7212d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7212d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7211abu);}goto L7211ab;}
}
B7212d6:L7212d6:{c.instructions+=1;NFSU2_TR(0x7212d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7212d7:L7212d7:{c.instructions+=3;NFSU2_TR(0x7212d7);
__builtin_memmove((R+0),gp(0x8b4470),4);
}
B7212dc:{NFSU2_TR(0x7212dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7212de:{NFSU2_TR(0x7212de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7212ceu);}goto L7212ce;}}
}
B7212e0:L7212e0:{c.instructions+=1;NFSU2_TR(0x7212e0);
{goto L721fa7;}
}
B7212e5:L7212e5:{c.instructions+=8;NFSU2_TR(0x7212e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7212e6:{NFSU2_TR(0x7212e6);
__builtin_memmove((R+20),(R+16),4);
}
B7212e8:{NFSU2_TR(0x7212e8);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7212eb:{NFSU2_TR(0x7212eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7212ec:{NFSU2_TR(0x7212ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7212ed:{NFSU2_TR(0x7212ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7212ee:{NFSU2_TR(0x7212ee);
s4(0x8b4654,u32(0x7212c7ull));
}
B7212f8:{NFSU2_TR(0x7212f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7212fdull));
{goto L721f99;}
}
B7212fd:L7212fd:{c.instructions+=8;NFSU2_TR(0x7212fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B721300:{NFSU2_TR(0x721300);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B721302:{NFSU2_TR(0x721302);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4470),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721308:{NFSU2_TR(0x721308);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72130b:{NFSU2_TR(0x72130b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72130c:{NFSU2_TR(0x72130c);
w4(R+4,u32(0x8b4470ull));
}
B721311:{NFSU2_TR(0x721311);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B721315:{NFSU2_TR(0x721315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72131aull));
TAIL_STATIC(0x71fe8au,71f);
}
B72131a:L72131a:{c.instructions+=4;NFSU2_TR(0x72131a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72131d:{NFSU2_TR(0x72131d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72131f:{NFSU2_TR(0x72131f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+12)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B721321:{NFSU2_TR(0x721321);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721344;}}
}
B721323:L721323:{c.instructions+=1;NFSU2_TR(0x721323);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B721326:L721326:{c.instructions+=11;NFSU2_TR(0x721326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B721328:{NFSU2_TR(0x721328);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B72132a:{NFSU2_TR(0x72132a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B72132c:{NFSU2_TR(0x72132c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817fe0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B721333:{NFSU2_TR(0x721333);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B721335:{NFSU2_TR(0x721335);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x4ull))));
}
B721338:{NFSU2_TR(0x721338);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B721339:{NFSU2_TR(0x721339);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B72133b:{NFSU2_TR(0x72133b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B72133e:{NFSU2_TR(0x72133e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+4)));
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B721340:{NFSU2_TR(0x721340);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721326u);}goto L721326;}}
}
B721342:L721342:{c.instructions+=1;NFSU2_TR(0x721342);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B721344:L721344:{c.instructions+=7;NFSU2_TR(0x721344);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B721347:{NFSU2_TR(0x721347);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72134a:{NFSU2_TR(0x72134a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72134c:{NFSU2_TR(0x72134c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72134e:{NFSU2_TR(0x72134e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+12)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B721350:{NFSU2_TR(0x721350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721353:{NFSU2_TR(0x721353);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721366;}}
}
B721355:L721355:{c.instructions+=1;NFSU2_TR(0x721355);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B721358:L721358:{c.instructions+=7;NFSU2_TR(0x721358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72135a:{NFSU2_TR(0x72135a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B72135c:{NFSU2_TR(0x72135c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+4)),r4(U+0));
}
B72135e:{NFSU2_TR(0x72135e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72135f:{NFSU2_TR(0x72135f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B721362:{NFSU2_TR(0x721362);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+4)));
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B721364:{NFSU2_TR(0x721364);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721358u);}goto L721358;}}
}
B721366:L721366:{c.instructions+=5;NFSU2_TR(0x721366);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B721369:{NFSU2_TR(0x721369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B72136c:{NFSU2_TR(0x72136c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72136f:{NFSU2_TR(0x72136f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+12)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B721371:{NFSU2_TR(0x721371);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7213ca;}}
}
B721373:L721373:{c.instructions+=1;NFSU2_TR(0x721373);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B721376:L721376:{c.instructions+=13;NFSU2_TR(0x721376);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721379:{NFSU2_TR(0x721379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B72137c:{NFSU2_TR(0x72137c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B72137f:{NFSU2_TR(0x72137f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B721383:{NFSU2_TR(0x721383);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B721387:{NFSU2_TR(0x721387);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72138a:{NFSU2_TR(0x72138a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72138e:{NFSU2_TR(0x72138e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B721390:{NFSU2_TR(0x721390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721393:{NFSU2_TR(0x721393);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B721396:{NFSU2_TR(0x721396);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B721398:{NFSU2_TR(0x721398);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72139a:{NFSU2_TR(0x72139a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7213a7;}}
}
B72139c:L72139c:{c.instructions+=3;NFSU2_TR(0x72139c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72139f:{NFSU2_TR(0x72139f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213a0:{NFSU2_TR(0x7213a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7213a5ull));
TAIL_STATIC(0x735410u,735);
}
B7213a5:L7213a5:{c.instructions+=1;NFSU2_TR(0x7213a5);
{goto L7213bb;}
}
B7213a7:L7213a7:{c.instructions+=4;NFSU2_TR(0x7213a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7213a9:{NFSU2_TR(0x7213a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7213ac:{NFSU2_TR(0x7213ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213ad:{NFSU2_TR(0x7213ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7213b6;}}
}
B7213af:L7213af:{c.instructions+=1;NFSU2_TR(0x7213af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7213b4ull));
TAIL_STATIC(0x7353f0u,735);
}
B7213b4:L7213b4:{c.instructions+=1;NFSU2_TR(0x7213b4);
{goto L7213bb;}
}
B7213b6:L7213b6:{c.instructions+=1;NFSU2_TR(0x7213b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7213bbull));
TAIL_STATIC(0x7353d0u,735);
}
B7213bb:L7213bb:{c.instructions+=5;NFSU2_TR(0x7213bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7213be:{NFSU2_TR(0x7213be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7213c1:{NFSU2_TR(0x7213c1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B7213c4:{NFSU2_TR(0x7213c4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B7213c6:{NFSU2_TR(0x7213c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721376u);}goto L721376;}}
}
B7213c8:L7213c8:{c.instructions+=1;NFSU2_TR(0x7213c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7213ca:L7213ca:{c.instructions+=5;NFSU2_TR(0x7213ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7213cd:{NFSU2_TR(0x7213cd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7213cf:{NFSU2_TR(0x7213cf);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7213d3:{NFSU2_TR(0x7213d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7213d6:{NFSU2_TR(0x7213d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L721441;}}
}
B7213d8:L7213d8:{c.instructions+=11;NFSU2_TR(0x7213d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B7213db:{NFSU2_TR(0x7213db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7213de:{NFSU2_TR(0x7213de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B7213e1:{NFSU2_TR(0x7213e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7213e4:{NFSU2_TR(0x7213e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B7213e7:{NFSU2_TR(0x7213e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213e8:{NFSU2_TR(0x7213e8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213ea:{NFSU2_TR(0x7213ea);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7213ec:{NFSU2_TR(0x7213ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213ed:{NFSU2_TR(0x7213ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213ee:{NFSU2_TR(0x7213ee);
u8 U[4];
__builtin_memmove((U+0),gp(0x783244),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7213f4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7213f4:L7213f4:{c.instructions+=7;NFSU2_TR(0x7213f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7213f7:{NFSU2_TR(0x7213f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213f8:{NFSU2_TR(0x7213f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7213fb:{NFSU2_TR(0x7213fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7213fc:{NFSU2_TR(0x7213fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x721096ull));
s4(u32(r4(U+0)),r4(U+4));
}
B721403:{NFSU2_TR(0x721403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721406:{NFSU2_TR(0x721406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72140bull));
TAIL_STATIC(0x7355d0u,735);
}
B72140b:L72140b:{c.instructions+=5;NFSU2_TR(0x72140b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72140d:{NFSU2_TR(0x72140d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+0))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B721410:{NFSU2_TR(0x721410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721411:{NFSU2_TR(0x721411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721412:{NFSU2_TR(0x721412);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L721427;}}
}
B721414:L721414:{c.instructions+=7;NFSU2_TR(0x721414);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B721418:{NFSU2_TR(0x721418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72141b:{NFSU2_TR(0x72141b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B72141e:{NFSU2_TR(0x72141e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B721422:{NFSU2_TR(0x721422);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B721423:{NFSU2_TR(0x721423);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B721425:{NFSU2_TR(0x721425);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721414u);}goto L721414;}}
}
B721427:L721427:{c.instructions+=8;NFSU2_TR(0x721427);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72142b:{NFSU2_TR(0x72142b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72142f:{NFSU2_TR(0x72142f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B721431:{NFSU2_TR(0x721431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721434:{NFSU2_TR(0x721434);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B721438:{NFSU2_TR(0x721438);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B72143c:{NFSU2_TR(0x72143c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72143f:{NFSU2_TR(0x72143f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7213d8u);}goto L7213d8;}}
}
B721441:L721441:{c.instructions+=3;NFSU2_TR(0x721441);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B721444:{NFSU2_TR(0x721444);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721446:{NFSU2_TR(0x721446);
if(r1(R+518)){{goto L72147a;}}
}
B721448:L721448:{c.instructions+=2;NFSU2_TR(0x721448);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B72144b:{NFSU2_TR(0x72144b);
if(r1(R+518)){{goto L72147a;}}
}
B72144d:L72144d:{c.instructions+=2;NFSU2_TR(0x72144d);
__builtin_memmove((R+0),(R+24),4);
}
B72144f:{NFSU2_TR(0x72144f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721452:L721452:{c.instructions+=4;NFSU2_TR(0x721452);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B721454:{NFSU2_TR(0x721454);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B721455:{NFSU2_TR(0x721455);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B721457:{NFSU2_TR(0x721457);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721452u);}goto L721452;}}
}
B721459:L721459:{c.instructions+=4;NFSU2_TR(0x721459);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72145b:{NFSU2_TR(0x72145b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72145c:{NFSU2_TR(0x72145c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72145d:{NFSU2_TR(0x72145d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721462ull));
TAIL_STATIC(0x724792u,724);
}
B721462:L721462:{c.instructions+=3;NFSU2_TR(0x721462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721463:{NFSU2_TR(0x721463);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721466:{NFSU2_TR(0x721466);
__builtin_memmove((R+8),(R+24),4);
}
B721468:L721468:{c.instructions+=6;NFSU2_TR(0x721468);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B72146a:{NFSU2_TR(0x72146a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72146b:{NFSU2_TR(0x72146b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B72146d:{NFSU2_TR(0x72146d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72146e:{NFSU2_TR(0x72146e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B721470:{NFSU2_TR(0x721470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721468u);}goto L721468;}}
}
B721472:L721472:{c.instructions+=3;NFSU2_TR(0x721472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721475:{NFSU2_TR(0x721475);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721478:{NFSU2_TR(0x721478);
{goto L72147d;}
}
B72147a:L72147a:{c.instructions+=1;NFSU2_TR(0x72147a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72147d:L72147d:{c.instructions+=2;NFSU2_TR(0x72147d);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B721481:{NFSU2_TR(0x721481);
if(r1(R+518)){{goto L7214af;}}
}
B721483:L721483:{c.instructions+=7;NFSU2_TR(0x721483);
__builtin_memmove((R+0),gp(0x8b405c),4);
}
B721488:{NFSU2_TR(0x721488);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72148a:{NFSU2_TR(0x72148a);
s4(0x8b4480,u32(0x725520ull));
}
B721494:{NFSU2_TR(0x721494);
__builtin_memmove(gp(0x8b4478),(R+0),4);
}
B721499:{NFSU2_TR(0x721499);
__builtin_memmove(gp(0x8b447c),(R+12),4);
}
B72149f:{NFSU2_TR(0x72149f);
w4(R+4,u32(0x8b4478ull));
}
B7214a4:{NFSU2_TR(0x7214a4);
if(r1(R+518)){{goto L7214a9;}}
}
B7214a6:L7214a6:{c.instructions+=1;NFSU2_TR(0x7214a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7214a9:L7214a9:{c.instructions+=1;NFSU2_TR(0x7214a9);
__builtin_memmove(gp(0x8b405c),(R+4),4);
}
B7214af:L7214af:{c.instructions+=1;NFSU2_TR(0x7214af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7214b4ull));
{goto L721fa7;}
}
B7214b4:L7214b4:{c.instructions+=5;NFSU2_TR(0x7214b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7214b5:{NFSU2_TR(0x7214b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7214b6:{NFSU2_TR(0x7214b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7214b7:{NFSU2_TR(0x7214b7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7214b8:{NFSU2_TR(0x7214b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7214b9:L7214b9:{c.instructions+=5;NFSU2_TR(0x7214b9);
w4(R+0,u32(s32(s8(m1(0x8b460b)))));
}
B7214c0:{NFSU2_TR(0x7214c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7214c4:{NFSU2_TR(0x7214c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b462cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7214cb:{NFSU2_TR(0x7214cb);
u8 U[3];
w1(R+523,scarry<u8>(m1(0x8b460b),u8(0x1ull)));
s1(0x8b460b,u8(u32(m1(0x8b460b))+u32(u8(0x1ull))));
w1(R+519,u8(s8(m1(0x8b460b))<s8(u8(0x0ull))));
w1(R+518,u8((m1(0x8b460b))==(u8(0x0ull))));
w1(U+0,u8(u32(m1(0x8b460b))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7214d1:{NFSU2_TR(0x7214d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7214d2:L7214d2:{c.instructions+=4;NFSU2_TR(0x7214d2);
w4(R+4,u32(s32(s8(m1(0x8b460b)))));
}
B7214d9:{NFSU2_TR(0x7214d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7214db:{NFSU2_TR(0x7214db);
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
B7214dd:{NFSU2_TR(0x7214dd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721514;}}
}
B7214df:L7214df:{c.instructions+=3;NFSU2_TR(0x7214df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b462cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B7214e6:{NFSU2_TR(0x7214e6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7214ea:{NFSU2_TR(0x7214ea);
if(r1(R+518)){{goto L7214f2;}}
}
B7214ec:L7214ec:{c.instructions+=3;NFSU2_TR(0x7214ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7214ed:{NFSU2_TR(0x7214ed);
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
B7214ef:{NFSU2_TR(0x7214ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7214dfu);}goto L7214df;}}
}
B7214f1:L7214f1:{c.instructions+=1;NFSU2_TR(0x7214f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7214f2:L7214f2:{c.instructions+=2;NFSU2_TR(0x7214f2);
s1(0x8b460b,u8(u32(m1(0x8b460b))-u32(u8(0x1ull))));
}
B7214f8:{NFSU2_TR(0x7214f8);
{goto L721509;}
}
B7214fa:L7214fa:{c.instructions+=3;NFSU2_TR(0x7214fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4630ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B721501:{NFSU2_TR(0x721501);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b462cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B721508:{NFSU2_TR(0x721508);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B721509:L721509:{c.instructions+=3;NFSU2_TR(0x721509);
w4(R+4,u32(s32(s8(m1(0x8b460b)))));
}
B721510:{NFSU2_TR(0x721510);
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
B721512:{NFSU2_TR(0x721512);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7214fau);}goto L7214fa;}}
}
B721514:L721514:{c.instructions+=1;NFSU2_TR(0x721514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721515:L721515:{c.instructions+=2;NFSU2_TR(0x721515);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72151c:{NFSU2_TR(0x72151c);
if(r1(R+518)){{goto L72153e;}}
}
B72151e:L72151e:{c.instructions+=4;NFSU2_TR(0x72151e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72151f:{NFSU2_TR(0x72151f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B721521:{NFSU2_TR(0x721521);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b460b),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721528:{NFSU2_TR(0x721528);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72153d;}}
}
B72152a:L72152a:{c.instructions+=1;NFSU2_TR(0x72152a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b462cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721531ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B721531:L721531:{c.instructions+=4;NFSU2_TR(0x721531);
w4(R+0,u32(s32(s8(m1(0x8b460b)))));
}
B721538:{NFSU2_TR(0x721538);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B721539:{NFSU2_TR(0x721539);
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
B72153b:{NFSU2_TR(0x72153b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72152au);}goto L72152a;}}
}
B72153d:L72153d:{c.instructions+=1;NFSU2_TR(0x72153d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72153e:L72153e:{c.instructions+=1;NFSU2_TR(0x72153e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72153f:L72153f:{c.instructions+=2;NFSU2_TR(0x72153f);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721546:{NFSU2_TR(0x721546);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72154c;}}
}
B721548:L721548:{c.instructions+=3;NFSU2_TR(0x721548);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72154a:{NFSU2_TR(0x72154a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72154b:{NFSU2_TR(0x72154b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72154c:L72154c:{c.instructions+=2;NFSU2_TR(0x72154c);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b4477),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B721553:{NFSU2_TR(0x721553);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721566;}}
}
B721555:L721555:{c.instructions+=3;NFSU2_TR(0x721555);
__builtin_memmove((R+0),gp(0x8b3fc0),1);
}
B72155a:{NFSU2_TR(0x72155a);
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
B72155c:{NFSU2_TR(0x72155c);
if(r1(R+518)){{goto L721562;}}
}
B72155e:L72155e:{c.instructions+=2;NFSU2_TR(0x72155e);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B721561:{NFSU2_TR(0x721561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721562:L721562:{c.instructions+=3;NFSU2_TR(0x721562);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B721564:{NFSU2_TR(0x721564);
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
B721565:{NFSU2_TR(0x721565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721566:L721566:{c.instructions+=2;NFSU2_TR(0x721566);
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
B721568:{NFSU2_TR(0x721568);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721569:L721569:{c.instructions+=3;NFSU2_TR(0x721569);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72156d:{NFSU2_TR(0x72156d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffff7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffff7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffff7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B721570:{NFSU2_TR(0x721570);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7215a1;}}
}
B721572:L721572:{c.instructions+=1;NFSU2_TR(0x721572);
if(r1(R+518)){{goto L7215bb;}}
}
B721574:L721574:{c.instructions+=2;NFSU2_TR(0x721574);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffedull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721577:{NFSU2_TR(0x721577);
if(r1(R+518)){{goto L72159d;}}
}
B721579:L721579:{c.instructions+=2;NFSU2_TR(0x721579);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffeeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffeeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffeeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72157c:{NFSU2_TR(0x72157c);
if(r1(R+518)){{goto L721599;}}
}
B72157e:L72157e:{c.instructions+=2;NFSU2_TR(0x72157e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffff1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffff1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffff1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B721581:{NFSU2_TR(0x721581);
if(r1(R+518)){{goto L721595;}}
}
B721583:L721583:{c.instructions+=2;NFSU2_TR(0x721583);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffff2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffff2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffff2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B721586:{NFSU2_TR(0x721586);
if(r1(R+518)){{goto L721591;}}
}
B721588:L721588:{c.instructions+=2;NFSU2_TR(0x721588);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffff6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffff6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffff6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72158b:{NFSU2_TR(0x72158b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7215b4;}}
}
B72158d:L72158d:{c.instructions+=3;NFSU2_TR(0x72158d);
u8 U[4];
w4(U+0,u32(0xfffffff7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72158f:{NFSU2_TR(0x72158f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721590:{NFSU2_TR(0x721590);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721591:L721591:{c.instructions+=3;NFSU2_TR(0x721591);
u8 U[4];
w4(U+0,u32(0xfffffffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721593:{NFSU2_TR(0x721593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721594:{NFSU2_TR(0x721594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721595:L721595:{c.instructions+=3;NFSU2_TR(0x721595);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721597:{NFSU2_TR(0x721597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721598:{NFSU2_TR(0x721598);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721599:L721599:{c.instructions+=3;NFSU2_TR(0x721599);
u8 U[4];
w4(U+0,u32(0xfffffff9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72159b:{NFSU2_TR(0x72159b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72159c:{NFSU2_TR(0x72159c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72159d:L72159d:{c.instructions+=2;NFSU2_TR(0x72159d);
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
B7215a0:{NFSU2_TR(0x7215a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7215a1:L7215a1:{c.instructions+=2;NFSU2_TR(0x7215a1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffff8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffff8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7215a4:{NFSU2_TR(0x7215a4);
if(r1(R+518)){{goto L7215c3;}}
}
B7215a6:L7215a6:{c.instructions+=2;NFSU2_TR(0x7215a6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffff9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffff9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffff9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7215a9:{NFSU2_TR(0x7215a9);
if(r1(R+518)){{goto L7215bf;}}
}
B7215ab:L7215ab:{c.instructions+=2;NFSU2_TR(0x7215ab);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7215ae:{NFSU2_TR(0x7215ae);
if(r1(R+518)){{goto L7215bb;}}
}
B7215b0:L7215b0:{c.instructions+=2;NFSU2_TR(0x7215b0);
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
B7215b2:{NFSU2_TR(0x7215b2);
if(r1(R+518)){{goto L7215b8;}}
}
B7215b4:L7215b4:{c.instructions+=3;NFSU2_TR(0x7215b4);
u8 U[4];
w4(U+0,u32(0xfffffffaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215b6:{NFSU2_TR(0x7215b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7215b7:{NFSU2_TR(0x7215b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7215b8:L7215b8:{c.instructions+=2;NFSU2_TR(0x7215b8);
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
B7215ba:{NFSU2_TR(0x7215ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7215bb:L7215bb:{c.instructions+=3;NFSU2_TR(0x7215bb);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215bd:{NFSU2_TR(0x7215bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7215be:{NFSU2_TR(0x7215be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7215bf:L7215bf:{c.instructions+=3;NFSU2_TR(0x7215bf);
u8 U[4];
w4(U+0,u32(0xfffffff5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215c1:{NFSU2_TR(0x7215c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7215c2:{NFSU2_TR(0x7215c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7215c3:L7215c3:{c.instructions+=3;NFSU2_TR(0x7215c3);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215c5:{NFSU2_TR(0x7215c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7215c6:{NFSU2_TR(0x7215c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7215c7:L7215c7:{c.instructions+=6;NFSU2_TR(0x7215c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215c8:{NFSU2_TR(0x7215c8);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B7215cc:{NFSU2_TR(0x7215cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B7215d2:{NFSU2_TR(0x7215d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7215d5:{NFSU2_TR(0x7215d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215d6:{NFSU2_TR(0x7215d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7215dbull));
TAIL_STATIC(0x7243e4u,724);
}
B7215db:L7215db:{c.instructions+=5;NFSU2_TR(0x7215db);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7215df:{NFSU2_TR(0x7215df);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7215e3:{NFSU2_TR(0x7215e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7215e6:{NFSU2_TR(0x7215e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215e7:{NFSU2_TR(0x7215e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7215ecull));
TAIL_STATIC(0x724459u,724);
}
B7215ec:L7215ec:{c.instructions+=6;NFSU2_TR(0x7215ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7215ed:{NFSU2_TR(0x7215ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7215ee:{NFSU2_TR(0x7215ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7215f0:{NFSU2_TR(0x7215f0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x74ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x74ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7215f3:{NFSU2_TR(0x7215f3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7215f4:{NFSU2_TR(0x7215f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7215f5:L7215f5:{c.instructions+=8;NFSU2_TR(0x7215f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7215f6:{NFSU2_TR(0x7215f6);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B7215fa:{NFSU2_TR(0x7215fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B721600:{NFSU2_TR(0x721600);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721603:{NFSU2_TR(0x721603);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B721609:{NFSU2_TR(0x721609);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72160b:{NFSU2_TR(0x72160b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72160e:{NFSU2_TR(0x72160e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72161c;}}
}
B721610:L721610:{c.instructions+=3;NFSU2_TR(0x721610);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721616:{NFSU2_TR(0x721616);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B721619:{NFSU2_TR(0x721619);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72161c:L72161c:{c.instructions+=3;NFSU2_TR(0x72161c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72161f:{NFSU2_TR(0x72161f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721620:{NFSU2_TR(0x721620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721625ull));
TAIL_STATIC(0x7243e4u,724);
}
B721625:L721625:{c.instructions+=5;NFSU2_TR(0x721625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721628:{NFSU2_TR(0x721628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72162b:{NFSU2_TR(0x72162b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72162e:{NFSU2_TR(0x72162e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72162f:{NFSU2_TR(0x72162f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721634ull));
TAIL_STATIC(0x724459u,724);
}
B721634:L721634:{c.instructions+=6;NFSU2_TR(0x721634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721635:{NFSU2_TR(0x721635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721636:{NFSU2_TR(0x721636);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B721638:{NFSU2_TR(0x721638);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x74ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x74ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72163b:{NFSU2_TR(0x72163b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72163c:{NFSU2_TR(0x72163c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72163d:L72163d:{c.instructions+=10;NFSU2_TR(0x72163d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72163e:{NFSU2_TR(0x72163e);
__builtin_memmove((R+20),(R+16),4);
}
B721640:{NFSU2_TR(0x721640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B721646:{NFSU2_TR(0x721646);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721647:{NFSU2_TR(0x721647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72164a:{NFSU2_TR(0x72164a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721650:{NFSU2_TR(0x721650);
u8 U[4];
w4(U+0,u32(0x8b3ffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721655:{NFSU2_TR(0x721655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721656:{NFSU2_TR(0x721656);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B721659:{NFSU2_TR(0x721659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72165eull));
TAIL_STATIC(0x724a8eu,724);
}
B72165e:L72165e:{c.instructions+=4;NFSU2_TR(0x72165e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B721660:{NFSU2_TR(0x721660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721661:{NFSU2_TR(0x721661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721662:{NFSU2_TR(0x721662);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72166d;}}
}
B721664:L721664:{c.instructions+=2;NFSU2_TR(0x721664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721665:{NFSU2_TR(0x721665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72166aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721569u);}goto L721569;}
}
B72166a:L72166a:{c.instructions+=2;NFSU2_TR(0x72166a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72166b:{NFSU2_TR(0x72166b);
{goto L72167e;}
}
B72166d:L72166d:{c.instructions+=3;NFSU2_TR(0x72166d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721670:{NFSU2_TR(0x721670);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b3ffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B721677:{NFSU2_TR(0x721677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72167c;}}
}
B721679:L721679:{c.instructions+=1;NFSU2_TR(0x721679);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+24)),r1(U+0));
}
B72167c:L72167c:{c.instructions+=1;NFSU2_TR(0x72167c);
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
B72167e:L72167e:{c.instructions+=3;NFSU2_TR(0x72167e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72167f:{NFSU2_TR(0x72167f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721680:{NFSU2_TR(0x721680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721681:L721681:{c.instructions+=9;NFSU2_TR(0x721681);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721682:{NFSU2_TR(0x721682);
__builtin_memmove((R+20),(R+16),4);
}
B721684:{NFSU2_TR(0x721684);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721685:{NFSU2_TR(0x721685);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721686:{NFSU2_TR(0x721686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B721689:{NFSU2_TR(0x721689);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B72168c:{NFSU2_TR(0x72168c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72168d:{NFSU2_TR(0x72168d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72168e:{NFSU2_TR(0x72168e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721693ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72163du);}goto L72163d;}
}
B721693:L721693:{c.instructions+=4;NFSU2_TR(0x721693);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
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
B721697:{NFSU2_TR(0x721697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721698:{NFSU2_TR(0x721698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721699:{NFSU2_TR(0x721699);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7216a0;}}
}
B72169b:L72169b:{c.instructions+=3;NFSU2_TR(0x72169b);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72169d:{NFSU2_TR(0x72169d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72169e:{NFSU2_TR(0x72169e);
{goto L7216c3;}
}
B7216a0:L7216a0:{c.instructions+=2;NFSU2_TR(0x7216a0);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b4608),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7216a7:{NFSU2_TR(0x7216a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7216b1;}}
}
B7216a9:L7216a9:{c.instructions+=2;NFSU2_TR(0x7216a9);
__builtin_memmove(gp(0x818084),(R+24),4);
}
B7216af:{NFSU2_TR(0x7216af);
{goto L7216c1;}
}
B7216b1:L7216b1:{c.instructions+=2;NFSU2_TR(0x7216b1);
__builtin_memmove(gp(0x8b4028),(R+24),4);
}
B7216b7:{NFSU2_TR(0x7216b7);
s4(0x8b402c,u32(0x1ull));
}
B7216c1:L7216c1:{c.instructions+=1;NFSU2_TR(0x7216c1);
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
B7216c3:L7216c3:{c.instructions+=3;NFSU2_TR(0x7216c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7216c4:{NFSU2_TR(0x7216c4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7216c5:{NFSU2_TR(0x7216c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7216c6:L7216c6:{c.instructions+=6;NFSU2_TR(0x7216c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7216c7:{NFSU2_TR(0x7216c7);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B7216cb:{NFSU2_TR(0x7216cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B7216d1:{NFSU2_TR(0x7216d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7216d4:{NFSU2_TR(0x7216d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7216d5:{NFSU2_TR(0x7216d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7216daull));
TAIL_STATIC(0x7243e4u,724);
}
B7216da:L7216da:{c.instructions+=5;NFSU2_TR(0x7216da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7216db:{NFSU2_TR(0x7216db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7216de:{NFSU2_TR(0x7216de);
w4(R+0,u32(0xffffull));
}
B7216e3:{NFSU2_TR(0x7216e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7216e5:{NFSU2_TR(0x7216e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7216e9;}}
}
B7216e7:L7216e7:{c.instructions+=1;NFSU2_TR(0x7216e7);
__builtin_memmove((R+4),(R+0),4);
}
B7216e9:L7216e9:{c.instructions+=2;NFSU2_TR(0x7216e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7216ed:{NFSU2_TR(0x7216ed);
if(r1(R+518)){{goto L7216f4;}}
}
B7216ef:L7216ef:{c.instructions+=3;NFSU2_TR(0x7216ef);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7216f1:{NFSU2_TR(0x7216f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7216f2:{NFSU2_TR(0x7216f2);
{goto L72170d;}
}
B7216f4:L7216f4:{c.instructions+=2;NFSU2_TR(0x7216f4);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7216fb:{NFSU2_TR(0x7216fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721712;}}
}
B7216fd:L7216fd:{c.instructions+=4;NFSU2_TR(0x7216fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721700:{NFSU2_TR(0x721700);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721701:{NFSU2_TR(0x721701);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B721705:{NFSU2_TR(0x721705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72170aull));
TAIL_STATIC(0x724459u,724);
}
B72170a:L72170a:{c.instructions+=1;NFSU2_TR(0x72170a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72170b:L72170b:{c.instructions+=1;NFSU2_TR(0x72170b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72170d:L72170d:{c.instructions+=3;NFSU2_TR(0x72170d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x70ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B721710:{NFSU2_TR(0x721710);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721711:{NFSU2_TR(0x721711);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721712:L721712:{c.instructions+=3;NFSU2_TR(0x721712);
__builtin_memmove(gp(0x8b4030),(R+4),2);
}
B721719:{NFSU2_TR(0x721719);
s4(0x8b4034,u32(0x1ull));
}
B721723:{NFSU2_TR(0x721723);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72170bu);}goto L72170b;}
}
B721725:L721725:{c.instructions+=6;NFSU2_TR(0x721725);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721726:{NFSU2_TR(0x721726);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B72172a:{NFSU2_TR(0x72172a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B721730:{NFSU2_TR(0x721730);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721733:{NFSU2_TR(0x721733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721734:{NFSU2_TR(0x721734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721739ull));
TAIL_STATIC(0x7243e4u,724);
}
B721739:L721739:{c.instructions+=3;NFSU2_TR(0x721739);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72173d:{NFSU2_TR(0x72173d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72173e:{NFSU2_TR(0x72173e);
if(r1(R+518)){{goto L721745;}}
}
B721740:L721740:{c.instructions+=3;NFSU2_TR(0x721740);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721742:{NFSU2_TR(0x721742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721743:{NFSU2_TR(0x721743);
{goto L721760;}
}
B721745:L721745:{c.instructions+=3;NFSU2_TR(0x721745);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72174c:{NFSU2_TR(0x72174c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72174f:{NFSU2_TR(0x72174f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721765;}}
}
B721751:L721751:{c.instructions+=4;NFSU2_TR(0x721751);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffceull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B721754:{NFSU2_TR(0x721754);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721757:{NFSU2_TR(0x721757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721758:{NFSU2_TR(0x721758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72175dull));
TAIL_STATIC(0x724459u,724);
}
B72175d:L72175d:{c.instructions+=1;NFSU2_TR(0x72175d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72175e:L72175e:{c.instructions+=1;NFSU2_TR(0x72175e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B721760:L721760:{c.instructions+=3;NFSU2_TR(0x721760);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x70ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B721763:{NFSU2_TR(0x721763);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721764:{NFSU2_TR(0x721764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721765:L721765:{c.instructions+=3;NFSU2_TR(0x721765);
__builtin_memmove(gp(0x8b4008),(R+0),1);
}
B72176a:{NFSU2_TR(0x72176a);
s4(0x8b400c,u32(0x1ull));
}
B721774:{NFSU2_TR(0x721774);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72175eu);}goto L72175e;}
}
B721776:L721776:{c.instructions+=6;NFSU2_TR(0x721776);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721777:{NFSU2_TR(0x721777);
__builtin_memmove((R+20),(R+16),4);
}
B721779:{NFSU2_TR(0x721779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B72177f:{NFSU2_TR(0x72177f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721785:{NFSU2_TR(0x721785);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721786:{NFSU2_TR(0x721786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72178bull));
TAIL_STATIC(0x7243e4u,724);
}
B72178b:L72178b:{c.instructions+=3;NFSU2_TR(0x72178b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72178f:{NFSU2_TR(0x72178f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721790:{NFSU2_TR(0x721790);
if(r1(R+518)){{goto L721797;}}
}
B721792:L721792:{c.instructions+=4;NFSU2_TR(0x721792);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721794:{NFSU2_TR(0x721794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721795:{NFSU2_TR(0x721795);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721796:{NFSU2_TR(0x721796);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721797:L721797:{c.instructions+=6;NFSU2_TR(0x721797);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72179e:{NFSU2_TR(0x72179e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7217a1:{NFSU2_TR(0x7217a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7217a3:{NFSU2_TR(0x7217a3);
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
B7217a5:{NFSU2_TR(0x7217a5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7217a6:{NFSU2_TR(0x7217a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7217a7:L7217a7:{c.instructions+=6;NFSU2_TR(0x7217a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7217a8:{NFSU2_TR(0x7217a8);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B7217ac:{NFSU2_TR(0x7217ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B7217b2:{NFSU2_TR(0x7217b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7217b5:{NFSU2_TR(0x7217b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7217b6:{NFSU2_TR(0x7217b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7217bbull));
TAIL_STATIC(0x7243e4u,724);
}
B7217bb:L7217bb:{c.instructions+=2;NFSU2_TR(0x7217bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7217bc:{NFSU2_TR(0x7217bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7217c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721569u);}goto L721569;}
}
B7217c1:L7217c1:{c.instructions+=5;NFSU2_TR(0x7217c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7217c2:{NFSU2_TR(0x7217c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7217c3:{NFSU2_TR(0x7217c3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7217c5:{NFSU2_TR(0x7217c5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7217c7:{NFSU2_TR(0x7217c7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7217d2;}}
}
B7217c9:L7217c9:{c.instructions+=2;NFSU2_TR(0x7217c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7217ca:{NFSU2_TR(0x7217ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7217cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721569u);}goto L721569;}
}
B7217cf:L7217cf:{c.instructions+=2;NFSU2_TR(0x7217cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7217d0:{NFSU2_TR(0x7217d0);
{goto L721835;}
}
B7217d2:L7217d2:{c.instructions+=1;NFSU2_TR(0x7217d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7217d4:L7217d4:{c.instructions+=5;NFSU2_TR(0x7217d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b400cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7217da:{NFSU2_TR(0x7217da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b4034ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7217e0:{NFSU2_TR(0x7217e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B7217e3:{NFSU2_TR(0x7217e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7217e6:{NFSU2_TR(0x7217e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7217d4u);}goto L7217d4;}}
}
B7217e8:L7217e8:{c.instructions+=9;NFSU2_TR(0x7217e8);
u8 U[4];
__builtin_memmove((U+0),gp(0x818084),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7217ee:{NFSU2_TR(0x7217ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7217f1:{NFSU2_TR(0x7217f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7217f2:{NFSU2_TR(0x7217f2);
__builtin_memmove(gp(0x8b402c),(R+4),4);
}
B7217f8:{NFSU2_TR(0x7217f8);
__builtin_memmove(gp(0x8b46c9),(R+4),1);
}
B7217fe:{NFSU2_TR(0x7217fe);
__builtin_memmove(gp(0x8b46cc),(R+4),4);
}
B721804:{NFSU2_TR(0x721804);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B721808:{NFSU2_TR(0x721808);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
w2(U+4,u16(0x24ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72180e:{NFSU2_TR(0x72180e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721813ull));
TAIL_STATIC(0x724cd0u,724);
}
B721813:L721813:{c.instructions+=3;NFSU2_TR(0x721813);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721816:{NFSU2_TR(0x721816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721817:{NFSU2_TR(0x721817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72181cull));
TAIL_STATIC(0x724459u,724);
}
B72181c:L72181c:{c.instructions+=4;NFSU2_TR(0x72181c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72181f:{NFSU2_TR(0x72181f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b3ff8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721825:{NFSU2_TR(0x721825);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4050),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72182b:{NFSU2_TR(0x72182b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721830ull));
TAIL_STATIC(0x72461fu,724);
}
B721830:L721830:{c.instructions+=2;NFSU2_TR(0x721830);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B721833:{NFSU2_TR(0x721833);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B721835:L721835:{c.instructions+=3;NFSU2_TR(0x721835);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x74ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x74ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B721838:{NFSU2_TR(0x721838);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721839:{NFSU2_TR(0x721839);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72183a:L72183a:{c.instructions+=5;NFSU2_TR(0x72183a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72183b:{NFSU2_TR(0x72183b);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B72183f:{NFSU2_TR(0x72183f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd8ull))));
}
B721845:{NFSU2_TR(0x721845);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b4608),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72184c:{NFSU2_TR(0x72184c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72190d;}}
}
B721852:L721852:{c.instructions+=3;NFSU2_TR(0x721852);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B721855:{NFSU2_TR(0x721855);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721856:{NFSU2_TR(0x721856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72185bull));
TAIL_STATIC(0x727003u,727);
}
B72185b:L72185b:{c.instructions+=3;NFSU2_TR(0x72185b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72185d:{NFSU2_TR(0x72185d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72185e:{NFSU2_TR(0x72185e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72190d;}}
}
B721864:L721864:{c.instructions+=4;NFSU2_TR(0x721864);
__builtin_memmove((R+0),gp(0x8180b8),4);
}
B721869:{NFSU2_TR(0x721869);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72186b:{NFSU2_TR(0x72186b);
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
B72186d:{NFSU2_TR(0x72186d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721884;}}
}
B72186f:L72186f:{c.instructions+=3;NFSU2_TR(0x72186f);
__builtin_memmove((R+8),gp(0x8b47cc),4);
}
B721875:{NFSU2_TR(0x721875);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B721879:{NFSU2_TR(0x721879);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72190d;}}
}
B72187f:L72187f:{c.instructions+=3;NFSU2_TR(0x72187f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B721880:{NFSU2_TR(0x721880);
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
B721882:{NFSU2_TR(0x721882);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72186fu);}goto L72186f;}}
}
B721884:L721884:{c.instructions+=1;NFSU2_TR(0x721884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721889ull));
TAIL_STATIC(0x7258d0u,725);
}
B721889:L721889:{c.instructions+=2;NFSU2_TR(0x721889);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72188b:{NFSU2_TR(0x72188b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721890ull));
TAIL_STATIC(0x725d92u,725);
}
B721890:L721890:{c.instructions+=3;NFSU2_TR(0x721890);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721893:{NFSU2_TR(0x721893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721894:{NFSU2_TR(0x721894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721899ull));
TAIL_STATIC(0x7243e4u,724);
}
B721899:L721899:{c.instructions+=3;NFSU2_TR(0x721899);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72189c:{NFSU2_TR(0x72189c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72189d:{NFSU2_TR(0x72189d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218a2ull));
TAIL_STATIC(0x7245c1u,724);
}
B7218a2:L7218a2:{c.instructions+=4;NFSU2_TR(0x7218a2);
u8 U[4];
__builtin_memmove((U+0),gp(0x818084),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7218a8:{NFSU2_TR(0x7218a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7218ab:{NFSU2_TR(0x7218ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7218ac:{NFSU2_TR(0x7218ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218b1ull));
TAIL_STATIC(0x724cd0u,724);
}
B7218b1:L7218b1:{c.instructions+=4;NFSU2_TR(0x7218b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7218b4:{NFSU2_TR(0x7218b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7218b5:{NFSU2_TR(0x7218b5);
s1(0x8b4608,u8(0x0ull));
}
B7218bc:{NFSU2_TR(0x7218bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218c1ull));
TAIL_STATIC(0x724459u,724);
}
B7218c1:L7218c1:{c.instructions+=2;NFSU2_TR(0x7218c1);
s1(0x8b4608,u8(0x1ull));
}
B7218c8:{NFSU2_TR(0x7218c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218cdull));
{goto L721f99;}
}
B7218cd:L7218cd:{c.instructions+=2;NFSU2_TR(0x7218cd);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b466c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7218d3:{NFSU2_TR(0x7218d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218d8ull));
TAIL_STATIC(0x724894u,724);
}
B7218d8:L7218d8:{c.instructions+=1;NFSU2_TR(0x7218d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218ddull));
TAIL_STATIC(0x72452fu,724);
}
B7218dd:L7218dd:{c.instructions+=1;NFSU2_TR(0x7218dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218e2ull));
{goto L721fa7;}
}
B7218e2:L7218e2:{c.instructions+=2;NFSU2_TR(0x7218e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7218e4:{NFSU2_TR(0x7218e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7218e9ull));
TAIL_STATIC(0x7264bfu,726);
}
B7218e9:L7218e9:{c.instructions+=5;NFSU2_TR(0x7218e9);
__builtin_memmove((R+0),gp(0x8b44e0),1);
}
B7218ee:{NFSU2_TR(0x7218ee);
w1(R+0,u8(u32(r1(R+0))+u32(m1(0x8b44df))));
}
B7218f4:{NFSU2_TR(0x7218f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B7218f7:{NFSU2_TR(0x7218f7);
__builtin_memmove(gp(0x8b46e8),(R+0),1);
}
B7218fc:{NFSU2_TR(0x7218fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721901ull));
TAIL_STATIC(0x7258e6u,725);
}
B721901:L721901:{c.instructions+=1;NFSU2_TR(0x721901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721906ull));
TAIL_STATIC(0x72559bu,725);
}
B721906:L721906:{c.instructions+=1;NFSU2_TR(0x721906);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B721908:L721908:{c.instructions+=3;NFSU2_TR(0x721908);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x78ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x78ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72190b:{NFSU2_TR(0x72190b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72190c:{NFSU2_TR(0x72190c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72190d:L72190d:{c.instructions+=3;NFSU2_TR(0x72190d);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72190f:{NFSU2_TR(0x72190f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721910:{NFSU2_TR(0x721910);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721908u);}goto L721908;}
}
B721912:L721912:{c.instructions+=4;NFSU2_TR(0x721912);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B721914:{NFSU2_TR(0x721914);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72191b:{NFSU2_TR(0x72191b);
__builtin_memmove((R+0),(R+518),1);
}
B72191e:{NFSU2_TR(0x72191e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72191f:L72191f:{c.instructions+=1;NFSU2_TR(0x72191f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721924ull));
TAIL_STATIC(0x724496u,724);
}
B721924:L721924:{c.instructions+=3;NFSU2_TR(0x721924);
s4(0x8b4050,u32(u32(m4(0x8b4050))&u32(u32(0x0ull))));
}
B72192b:{NFSU2_TR(0x72192b);
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
B72192d:{NFSU2_TR(0x72192d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72192e:L72192e:{c.instructions+=2;NFSU2_TR(0x72192e);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B721933:{NFSU2_TR(0x721933);
if(r1(R+518)){{goto L721939;}}
}
B721935:L721935:{c.instructions+=3;NFSU2_TR(0x721935);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721937:{NFSU2_TR(0x721937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721938:{NFSU2_TR(0x721938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721939:L721939:{c.instructions+=6;NFSU2_TR(0x721939);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72193d:{NFSU2_TR(0x72193d);
__builtin_memmove(gp(0x8b4050),(R+0),4);
}
B721942:{NFSU2_TR(0x721942);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721946:{NFSU2_TR(0x721946);
__builtin_memmove(gp(0x8b3ff8),(R+0),4);
}
B72194b:{NFSU2_TR(0x72194b);
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
B72194d:{NFSU2_TR(0x72194d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72194e:L72194e:{c.instructions+=5;NFSU2_TR(0x72194e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72194f:{NFSU2_TR(0x72194f);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B721953:{NFSU2_TR(0x721953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B721959:{NFSU2_TR(0x721959);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72195d:{NFSU2_TR(0x72195d);
if(r1(R+518)){{goto L721964;}}
}
B72195f:L72195f:{c.instructions+=3;NFSU2_TR(0x72195f);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721961:{NFSU2_TR(0x721961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721962:{NFSU2_TR(0x721962);
{goto L72198b;}
}
B721964:L721964:{c.instructions+=3;NFSU2_TR(0x721964);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721967:{NFSU2_TR(0x721967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721968:{NFSU2_TR(0x721968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72196dull));
TAIL_STATIC(0x7243e4u,724);
}
B72196d:L72196d:{c.instructions+=3;NFSU2_TR(0x72196d);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721970:{NFSU2_TR(0x721970);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B721976:{NFSU2_TR(0x721976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72197bull));
TAIL_STATIC(0x75bed4u,75b);
}
B72197b:L72197b:{c.instructions+=4;NFSU2_TR(0x72197b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72197e:{NFSU2_TR(0x72197e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721981:{NFSU2_TR(0x721981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721982:{NFSU2_TR(0x721982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721987ull));
TAIL_STATIC(0x724459u,724);
}
B721987:L721987:{c.instructions+=3;NFSU2_TR(0x721987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721988:{NFSU2_TR(0x721988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721989:{NFSU2_TR(0x721989);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72198b:L72198b:{c.instructions+=3;NFSU2_TR(0x72198b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x70ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72198e:{NFSU2_TR(0x72198e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72198f:{NFSU2_TR(0x72198f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721990:L721990:{c.instructions+=2;NFSU2_TR(0x721990);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721991:{NFSU2_TR(0x721991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721996ull));
{goto L721f99;}
}
B721996:L721996:{c.instructions+=2;NFSU2_TR(0x721996);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721998:{NFSU2_TR(0x721998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72199dull));
TAIL_STATIC(0x724792u,724);
}
B72199d:L72199d:{c.instructions+=2;NFSU2_TR(0x72199d);
__builtin_memmove((R+24),(R+0),4);
}
B72199f:{NFSU2_TR(0x72199f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7219a4ull));
{goto L721fa7;}
}
B7219a4:L7219a4:{c.instructions+=3;NFSU2_TR(0x7219a4);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7219a6:{NFSU2_TR(0x7219a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7219a7:{NFSU2_TR(0x7219a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7219acull));
TAIL_STATIC(0x727030u,727);
}
B7219ac:L7219ac:{c.instructions+=3;NFSU2_TR(0x7219ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7219af:{NFSU2_TR(0x7219af);
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
B7219b1:{NFSU2_TR(0x7219b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7219b8;}}
}
B7219b3:L7219b3:{c.instructions+=4;NFSU2_TR(0x7219b3);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7219b5:{NFSU2_TR(0x7219b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7219b6:{NFSU2_TR(0x7219b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7219b7:{NFSU2_TR(0x7219b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7219b8:L7219b8:{c.instructions+=8;NFSU2_TR(0x7219b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7219bc:{NFSU2_TR(0x7219bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7219bd:{NFSU2_TR(0x7219bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7219c0:{NFSU2_TR(0x7219c0);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7219c2:{NFSU2_TR(0x7219c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7219c3:{NFSU2_TR(0x7219c3);
u8 U[4];
w4(U+0,u32(0x46584253ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7219c9:{NFSU2_TR(0x7219c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7219cc:{NFSU2_TR(0x7219cc);
w4(R+0,u32(0x3f800000ull));
}
B7219d1:L7219d1:{c.instructions+=1;NFSU2_TR(0x7219d1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7219d3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7219d1u);}goto L7219d1;}
}
B7219d3:L7219d3:{c.instructions+=9;NFSU2_TR(0x7219d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7219d7:{NFSU2_TR(0x7219d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7219da:{NFSU2_TR(0x7219da);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7219de:{NFSU2_TR(0x7219de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7219e5:{NFSU2_TR(0x7219e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7219e7:{NFSU2_TR(0x7219e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7219e8:{NFSU2_TR(0x7219e8);
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
B7219ea:{NFSU2_TR(0x7219ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7219eb:{NFSU2_TR(0x7219eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7219ec:L7219ec:{c.instructions+=4;NFSU2_TR(0x7219ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7219ed:{NFSU2_TR(0x7219ed);
__builtin_memmove((R+24),(R+4),4);
}
B7219ef:{NFSU2_TR(0x7219ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7219f0:{NFSU2_TR(0x7219f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7219f5ull));
TAIL_STATIC(0x72715fu,727);
}
B7219f5:L7219f5:{c.instructions+=6;NFSU2_TR(0x7219f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7219f6:{NFSU2_TR(0x7219f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7219f9:{NFSU2_TR(0x7219f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B721a00:{NFSU2_TR(0x721a00);
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
B721a02:{NFSU2_TR(0x721a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721a03:{NFSU2_TR(0x721a03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721a04:L721a04:{c.instructions+=4;NFSU2_TR(0x721a04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721a05:{NFSU2_TR(0x721a05);
__builtin_memmove((R+24),(R+4),4);
}
B721a07:{NFSU2_TR(0x721a07);
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
B721a09:{NFSU2_TR(0x721a09);
if(r1(R+518)){{goto L721a3a;}}
}
B721a0b:L721a0b:{c.instructions+=2;NFSU2_TR(0x721a0b);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x46584253ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x46584253ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x46584253ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B721a11:{NFSU2_TR(0x721a11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721a3a;}}
}
B721a13:L721a13:{c.instructions+=2;NFSU2_TR(0x721a13);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B721a17:{NFSU2_TR(0x721a17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721a1e;}}
}
B721a19:L721a19:{c.instructions+=1;NFSU2_TR(0x721a19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721a1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7219ecu);}goto L7219ec;}
}
B721a1e:L721a1e:{c.instructions+=3;NFSU2_TR(0x721a1e);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721a20:{NFSU2_TR(0x721a20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721a21:{NFSU2_TR(0x721a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721a26ull));
TAIL_STATIC(0x727030u,727);
}
B721a26:L721a26:{c.instructions+=1;NFSU2_TR(0x721a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721a2bull));
{goto L721f99;}
}
B721a2b:L721a2b:{c.instructions+=2;NFSU2_TR(0x721a2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721a2c:{NFSU2_TR(0x721a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721a31ull));
TAIL_STATIC(0x724894u,724);
}
B721a31:L721a31:{c.instructions+=3;NFSU2_TR(0x721a31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B721a34:{NFSU2_TR(0x721a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721a35:{NFSU2_TR(0x721a35);
{goto L721fa7;}
}
B721a3a:L721a3a:{c.instructions+=2;NFSU2_TR(0x721a3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721a3b:{NFSU2_TR(0x721a3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721a3c:L721a3c:{c.instructions+=4;NFSU2_TR(0x721a3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721a3d:{NFSU2_TR(0x721a3d);
__builtin_memmove((R+24),(R+4),4);
}
B721a3f:{NFSU2_TR(0x721a3f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B721a43:{NFSU2_TR(0x721a43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721a4a;}}
}
B721a45:L721a45:{c.instructions+=1;NFSU2_TR(0x721a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721a4aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7219ecu);}goto L7219ec;}
}
B721a4a:L721a4a:{c.instructions+=3;NFSU2_TR(0x721a4a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B721a4e:{NFSU2_TR(0x721a4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721a4f:{NFSU2_TR(0x721a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721a54ull));
TAIL_STATIC(0x727133u,727);
}
B721a54:L721a54:{c.instructions+=7;NFSU2_TR(0x721a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721a58:{NFSU2_TR(0x721a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721a59:{NFSU2_TR(0x721a59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721a5a:{NFSU2_TR(0x721a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721a5d:{NFSU2_TR(0x721a5d);
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
B721a5f:{NFSU2_TR(0x721a5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721a60:{NFSU2_TR(0x721a60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721a63:L721a63:{c.instructions+=1;NFSU2_TR(0x721a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721a68ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721a04u);}goto L721a04;}
}
B721a68:L721a68:{c.instructions+=2;NFSU2_TR(0x721a68);
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
B721a6a:{NFSU2_TR(0x721a6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721a6b:L721a6b:{c.instructions+=17;NFSU2_TR(0x721a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721a6f:{NFSU2_TR(0x721a6f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B721a75:{NFSU2_TR(0x721a75);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B721a77:{NFSU2_TR(0x721a77);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x3cull));
s1(u32(r4(U+0)),r1(U+4));
}
B721a7b:{NFSU2_TR(0x721a7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w2(U+4,u16(0x1000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B721a81:{NFSU2_TR(0x721a81);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w2(U+4,u16(0x1000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B721a87:{NFSU2_TR(0x721a87);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w2(U+4,u16(0x1000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B721a8d:{NFSU2_TR(0x721a8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B721a91:{NFSU2_TR(0x721a91);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(U+4,u8(0x7full));
s1(u32(r4(U+0)),r1(U+4));
}
B721a95:{NFSU2_TR(0x721a95);
u8 U[1];
w1(U+0,u8(0x7full));
s1(u32(r4(R+0)),r1(U+0));
}
B721a98:{NFSU2_TR(0x721a98);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x7full));
s1(u32(r4(U+0)),r1(U+4));
}
B721a9c:{NFSU2_TR(0x721a9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(U+4,u8(0x40ull));
s1(u32(r4(U+0)),r1(U+4));
}
B721aa0:{NFSU2_TR(0x721aa0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B721aa3:{NFSU2_TR(0x721aa3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B721aa7:{NFSU2_TR(0x721aa7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B721aab:{NFSU2_TR(0x721aab);
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
B721aad:{NFSU2_TR(0x721aad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721aae:L721aae:{c.instructions+=2;NFSU2_TR(0x721aae);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721ab5:{NFSU2_TR(0x721ab5);
if(r1(R+518)){{goto L721acf;}}
}
B721ab7:L721ab7:{c.instructions+=4;NFSU2_TR(0x721ab7);
w4(R+0,u32(s32(s8(m1(0x8b460a)))));
}
B721abe:{NFSU2_TR(0x721abe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721ac2:{NFSU2_TR(0x721ac2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4614ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B721ac9:{NFSU2_TR(0x721ac9);
u8 U[3];
w1(R+523,scarry<u8>(m1(0x8b460a),u8(0x1ull)));
s1(0x8b460a,u8(u32(m1(0x8b460a))+u32(u8(0x1ull))));
w1(R+519,u8(s8(m1(0x8b460a))<s8(u8(0x0ull))));
w1(R+518,u8((m1(0x8b460a))==(u8(0x0ull))));
w1(U+0,u8(u32(m1(0x8b460a))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721acf:L721acf:{c.instructions+=1;NFSU2_TR(0x721acf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721b27:L721b27:{c.instructions+=2;NFSU2_TR(0x721b27);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721b2e:{NFSU2_TR(0x721b2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721b34;}}
}
B721b30:L721b30:{c.instructions+=3;NFSU2_TR(0x721b30);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721b32:{NFSU2_TR(0x721b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721b33:{NFSU2_TR(0x721b33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721b34:L721b34:{c.instructions+=6;NFSU2_TR(0x721b34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721b38:{NFSU2_TR(0x721b38);
__builtin_memmove((R+4),gp(0x8b4670),4);
}
B721b3e:{NFSU2_TR(0x721b3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B721b41:{NFSU2_TR(0x721b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721b44:{NFSU2_TR(0x721b44);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B721b47:{NFSU2_TR(0x721b47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721b48:L721b48:{c.instructions+=7;NFSU2_TR(0x721b48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721b49:{NFSU2_TR(0x721b49);
__builtin_memmove((R+20),(R+16),4);
}
B721b4b:{NFSU2_TR(0x721b4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B721b4e:{NFSU2_TR(0x721b4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721b4f:{NFSU2_TR(0x721b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B721b52:{NFSU2_TR(0x721b52);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
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
B721b56:{NFSU2_TR(0x721b56);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721ba0;}}
}
B721b58:L721b58:{c.instructions+=1;NFSU2_TR(0x721b58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721b59:L721b59:{c.instructions+=12;NFSU2_TR(0x721b59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B721b5c:{NFSU2_TR(0x721b5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B721b5f:{NFSU2_TR(0x721b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721b62:{NFSU2_TR(0x721b62);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B721b65:{NFSU2_TR(0x721b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721b68:{NFSU2_TR(0x721b68);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B721b6c:{NFSU2_TR(0x721b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721b6f:{NFSU2_TR(0x721b6f);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B721b73:{NFSU2_TR(0x721b73);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B721b75:{NFSU2_TR(0x721b75);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b460e),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721b7c:{NFSU2_TR(0x721b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721b7f:{NFSU2_TR(0x721b7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721b99;}}
}
B721b81:L721b81:{c.instructions+=3;NFSU2_TR(0x721b81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B721b84:{NFSU2_TR(0x721b84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721b85:{NFSU2_TR(0x721b85);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4644ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721b8cull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B721b8c:L721b8c:{c.instructions+=5;NFSU2_TR(0x721b8c);
w4(R+0,u32(s32(s8(m1(0x8b460e)))));
}
B721b93:{NFSU2_TR(0x721b93);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B721b94:{NFSU2_TR(0x721b94);
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
B721b96:{NFSU2_TR(0x721b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721b97:{NFSU2_TR(0x721b97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721b81u);}goto L721b81;}}
}
B721b99:L721b99:{c.instructions+=2;NFSU2_TR(0x721b99);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
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
B721b9d:{NFSU2_TR(0x721b9d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721b59u);}goto L721b59;}}
}
B721b9f:L721b9f:{c.instructions+=1;NFSU2_TR(0x721b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B721ba0:L721ba0:{c.instructions+=3;NFSU2_TR(0x721ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721ba1:{NFSU2_TR(0x721ba1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721ba2:{NFSU2_TR(0x721ba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721ba3:L721ba3:{c.instructions+=7;NFSU2_TR(0x721ba3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721ba4:{NFSU2_TR(0x721ba4);
__builtin_memmove((R+20),(R+16),4);
}
B721ba6:{NFSU2_TR(0x721ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd8ull))));
}
B721bac:{NFSU2_TR(0x721bac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721bad:{NFSU2_TR(0x721bad);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B721baf:{NFSU2_TR(0x721baf);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721bb5:{NFSU2_TR(0x721bb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721bbf;}}
}
B721bb7:L721bb7:{c.instructions+=3;NFSU2_TR(0x721bb7);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721bb9:{NFSU2_TR(0x721bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721bba:{NFSU2_TR(0x721bba);
{goto L721c4a;}
}
B721bbf:L721bbf:{c.instructions+=4;NFSU2_TR(0x721bbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721bc0:{NFSU2_TR(0x721bc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721bc1:{NFSU2_TR(0x721bc1);
s4(0x8b4660,u32(0x721c4dull));
}
B721bcb:{NFSU2_TR(0x721bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721bd0ull));
TAIL_STATIC(0x727647u,727);
}
B721bd0:L721bd0:{c.instructions+=9;NFSU2_TR(0x721bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721bd3:{NFSU2_TR(0x721bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B721bd6:{NFSU2_TR(0x721bd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B721bd8:{NFSU2_TR(0x721bd8);
__builtin_memmove((R+4),gp(0x8b4670),4);
}
B721bde:{NFSU2_TR(0x721bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B721be1:{NFSU2_TR(0x721be1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B721be3:{NFSU2_TR(0x721be3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B721be7:{NFSU2_TR(0x721be7);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b460e),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721bed:{NFSU2_TR(0x721bed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721c42;}}
}
B721bef:L721bef:{c.instructions+=3;NFSU2_TR(0x721bef);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B721bf3:{NFSU2_TR(0x721bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721bf6:{NFSU2_TR(0x721bf6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L721c42;}}
}
B721bf8:L721bf8:{c.instructions+=3;NFSU2_TR(0x721bf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B721bfb:{NFSU2_TR(0x721bfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721bfc:{NFSU2_TR(0x721bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721c01ull));
TAIL_STATIC(0x727669u,727);
}
B721c01:L721c01:{c.instructions+=5;NFSU2_TR(0x721c01);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721c03:{NFSU2_TR(0x721c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721c04:{NFSU2_TR(0x721c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721c05:{NFSU2_TR(0x721c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721c08:{NFSU2_TR(0x721c08);
if(r1(R+518)){{goto L721c36;}}
}
B721c0a:L721c0a:{c.instructions+=1;NFSU2_TR(0x721c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721c0e:L721c0e:{c.instructions+=5;NFSU2_TR(0x721c0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721c14:{NFSU2_TR(0x721c14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c15:{NFSU2_TR(0x721c15);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721c18:{NFSU2_TR(0x721c18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c19:{NFSU2_TR(0x721c19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721c1eull));
TAIL_STATIC(0x727181u,727);
}
B721c1e:L721c1e:{c.instructions+=5;NFSU2_TR(0x721c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721c21:{NFSU2_TR(0x721c21);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721c27:{NFSU2_TR(0x721c27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c28:{NFSU2_TR(0x721c28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c29:{NFSU2_TR(0x721c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721c2eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721b48u);}goto L721b48;}
}
B721c2e:L721c2e:{c.instructions+=3;NFSU2_TR(0x721c2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B721c31:{NFSU2_TR(0x721c31);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B721c34:{NFSU2_TR(0x721c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721c0eu);}goto L721c0e;}}
}
B721c36:L721c36:{c.instructions+=4;NFSU2_TR(0x721c36);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B721c3a:{NFSU2_TR(0x721c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721c3d:{NFSU2_TR(0x721c3d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B721c40:{NFSU2_TR(0x721c40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721bf8u);}goto L721bf8;}}
}
B721c42:L721c42:{c.instructions+=5;NFSU2_TR(0x721c42);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c44:{NFSU2_TR(0x721c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721c45:{NFSU2_TR(0x721c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B721c46:{NFSU2_TR(0x721c46);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B721c49:{NFSU2_TR(0x721c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721c4a:L721c4a:{c.instructions+=3;NFSU2_TR(0x721c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B721c4b:{NFSU2_TR(0x721c4b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721c4c:{NFSU2_TR(0x721c4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721c4d:L721c4d:{c.instructions+=5;NFSU2_TR(0x721c4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c4e:{NFSU2_TR(0x721c4e);
__builtin_memmove((R+20),(R+16),4);
}
B721c50:{NFSU2_TR(0x721c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd8ull))));
}
B721c56:{NFSU2_TR(0x721c56);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721c5d:{NFSU2_TR(0x721c5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721c64;}}
}
B721c5f:L721c5f:{c.instructions+=4;NFSU2_TR(0x721c5f);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c61:{NFSU2_TR(0x721c61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721c62:{NFSU2_TR(0x721c62);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721c63:{NFSU2_TR(0x721c63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721c64:L721c64:{c.instructions+=5;NFSU2_TR(0x721c64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c65:{NFSU2_TR(0x721c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B721c68:{NFSU2_TR(0x721c68);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721c6b:{NFSU2_TR(0x721c6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c6c:{NFSU2_TR(0x721c6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721c95;}}
}
B721c6e:L721c6e:{c.instructions+=3;NFSU2_TR(0x721c6e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B721c70:{NFSU2_TR(0x721c70);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b44c4),2);
w1(R+512,u8((r2(U+0))<(r2(R+24))));
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+24))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B721c77:{NFSU2_TR(0x721c77);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L721d64;}}
}
B721c7d:L721c7d:{c.instructions+=2;NFSU2_TR(0x721c7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c7e:{NFSU2_TR(0x721c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721c83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721c4du);}goto L721c4d;}
}
B721c83:L721c83:{c.instructions+=5;NFSU2_TR(0x721c83);
w4(R+0,u32(m2(0x8b44c4)));
}
B721c8a:{NFSU2_TR(0x721c8a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B721c8b:{NFSU2_TR(0x721c8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B721c8d:{NFSU2_TR(0x721c8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721c8e:{NFSU2_TR(0x721c8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721c7du);}goto L721c7d;}}
}
B721c90:L721c90:{c.instructions+=1;NFSU2_TR(0x721c90);
{goto L721d64;}
}
B721c95:L721c95:{c.instructions+=2;NFSU2_TR(0x721c95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721c96:{NFSU2_TR(0x721c96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721c9bull));
TAIL_STATIC(0x72768fu,727);
}
B721c9b:L721c9b:{c.instructions+=3;NFSU2_TR(0x721c9b);
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
B721c9d:{NFSU2_TR(0x721c9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721c9e:{NFSU2_TR(0x721c9e);
if(r1(R+518)){{goto L721ca8;}}
}
B721ca0:L721ca0:{c.instructions+=3;NFSU2_TR(0x721ca0);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721ca2:{NFSU2_TR(0x721ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721ca3:{NFSU2_TR(0x721ca3);
{goto L721d66;}
}
B721ca8:L721ca8:{c.instructions+=2;NFSU2_TR(0x721ca8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721ca9:{NFSU2_TR(0x721ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721caeull));
{goto L721f99;}
}
B721cae:L721cae:{c.instructions+=8;NFSU2_TR(0x721cae);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B721cb3:{NFSU2_TR(0x721cb3);
__builtin_memmove((R+24),(R+12),4);
}
B721cb5:{NFSU2_TR(0x721cb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B721cb8:{NFSU2_TR(0x721cb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B721cbb:{NFSU2_TR(0x721cbb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B721cbd:{NFSU2_TR(0x721cbd);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b460c),2);
w1(R+523,sborrow<u16>(r2(U+0),r2(R+0)));
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B721cc4:{NFSU2_TR(0x721cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721cc7:{NFSU2_TR(0x721cc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721cfc;}}
}
B721cc9:L721cc9:{c.instructions+=1;NFSU2_TR(0x721cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721ccc:L721ccc:{c.instructions+=6;NFSU2_TR(0x721ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721ccf:{NFSU2_TR(0x721ccf);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B721cd4:{NFSU2_TR(0x721cd4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B721cd6:{NFSU2_TR(0x721cd6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B721cda:{NFSU2_TR(0x721cda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721cdc:{NFSU2_TR(0x721cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721ce6;}}
}
B721cde:L721cde:{c.instructions+=2;NFSU2_TR(0x721cde);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B721ce0:{NFSU2_TR(0x721ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721ce5ull));
TAIL_STATIC(0x723e1eu,723);
}
B721ce5:L721ce5:{c.instructions+=1;NFSU2_TR(0x721ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721ce6:L721ce6:{c.instructions+=5;NFSU2_TR(0x721ce6);
w4(R+0,u32(s32(s16(m2(0x8b460c)))));
}
B721ced:{NFSU2_TR(0x721ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721cf0:{NFSU2_TR(0x721cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x90ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721cf7:{NFSU2_TR(0x721cf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B721cfa:{NFSU2_TR(0x721cfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721cccu);}goto L721ccc;}}
}
B721cfc:L721cfc:{c.instructions+=3;NFSU2_TR(0x721cfc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B721cfe:{NFSU2_TR(0x721cfe);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B721d02:{NFSU2_TR(0x721d02);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L721d4b;}}
}
B721d04:L721d04:{c.instructions+=3;NFSU2_TR(0x721d04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d05:{NFSU2_TR(0x721d05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d06:{NFSU2_TR(0x721d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721d0bull));
TAIL_STATIC(0x727669u,727);
}
B721d0b:L721d0b:{c.instructions+=5;NFSU2_TR(0x721d0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B721d0d:{NFSU2_TR(0x721d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721d0e:{NFSU2_TR(0x721d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721d0f:{NFSU2_TR(0x721d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721d12:{NFSU2_TR(0x721d12);
if(r1(R+518)){{goto L721d42;}}
}
B721d14:L721d14:{c.instructions+=1;NFSU2_TR(0x721d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721d18:L721d18:{c.instructions+=5;NFSU2_TR(0x721d18);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721d1e:{NFSU2_TR(0x721d1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d1f:{NFSU2_TR(0x721d1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721d22:{NFSU2_TR(0x721d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d23:{NFSU2_TR(0x721d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721d28ull));
TAIL_STATIC(0x727181u,727);
}
B721d28:L721d28:{c.instructions+=5;NFSU2_TR(0x721d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721d2b:{NFSU2_TR(0x721d2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721d31:{NFSU2_TR(0x721d31);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d33:{NFSU2_TR(0x721d33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d34:{NFSU2_TR(0x721d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721d39ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721b48u);}goto L721b48;}
}
B721d39:L721d39:{c.instructions+=3;NFSU2_TR(0x721d39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B721d3c:{NFSU2_TR(0x721d3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B721d40:{NFSU2_TR(0x721d40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721d18u);}goto L721d18;}}
}
B721d42:L721d42:{c.instructions+=4;NFSU2_TR(0x721d42);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B721d46:{NFSU2_TR(0x721d46);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B721d47:{NFSU2_TR(0x721d47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B721d49:{NFSU2_TR(0x721d49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721d04u);}goto L721d04;}}
}
B721d4b:L721d4b:{c.instructions+=5;NFSU2_TR(0x721d4b);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B721d50:{NFSU2_TR(0x721d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B721d54:{NFSU2_TR(0x721d54);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B721d59:{NFSU2_TR(0x721d59);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B721d5e:{NFSU2_TR(0x721d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721d63ull));
{goto L721fa7;}
}
B721d63:L721d63:{c.instructions+=1;NFSU2_TR(0x721d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B721d64:L721d64:{c.instructions+=1;NFSU2_TR(0x721d64);
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
B721d66:L721d66:{c.instructions+=4;NFSU2_TR(0x721d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721d67:{NFSU2_TR(0x721d67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B721d68:{NFSU2_TR(0x721d68);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B721d69:{NFSU2_TR(0x721d69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721d6a:L721d6a:{c.instructions+=8;NFSU2_TR(0x721d6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721d6e:{NFSU2_TR(0x721d6e);
__builtin_memmove((R+4),gp(0x8180b8),4);
}
B721d74:{NFSU2_TR(0x721d74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d75:{NFSU2_TR(0x721d75);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B721d79:{NFSU2_TR(0x721d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B721d7c:{NFSU2_TR(0x721d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B721d7f:{NFSU2_TR(0x721d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x238ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B721d86:{NFSU2_TR(0x721d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721d8bull));
TAIL_STATIC(0x723124u,723);
}
B721d8b:L721d8b:{c.instructions+=4;NFSU2_TR(0x721d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721d8c:{NFSU2_TR(0x721d8c);
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
B721d8e:{NFSU2_TR(0x721d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721d8f:{NFSU2_TR(0x721d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721d90:L721d90:{c.instructions+=6;NFSU2_TR(0x721d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d91:{NFSU2_TR(0x721d91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B721d95:{NFSU2_TR(0x721d95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d96:{NFSU2_TR(0x721d96);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B721d9a:{NFSU2_TR(0x721d9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721d9b:{NFSU2_TR(0x721d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721da0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721d6au);}goto L721d6a;}
}
B721da0:L721da0:{c.instructions+=6;NFSU2_TR(0x721da0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721da2:{NFSU2_TR(0x721da2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721da4:{NFSU2_TR(0x721da4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B721da7:{NFSU2_TR(0x721da7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721da8:{NFSU2_TR(0x721da8);
__builtin_memmove((R+28),(R+0),4);
}
B721daa:{NFSU2_TR(0x721daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721dafull));
TAIL_STATIC(0x770ddcu,770);
}
B721daf:L721daf:{c.instructions+=5;NFSU2_TR(0x721daf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B721db2:{NFSU2_TR(0x721db2);
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
B721db4:{NFSU2_TR(0x721db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B721db5:{NFSU2_TR(0x721db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721db6:{NFSU2_TR(0x721db6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721db7:L721db7:{c.instructions+=2;NFSU2_TR(0x721db7);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721dbe:{NFSU2_TR(0x721dbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721dc4;}}
}
B721dc0:L721dc0:{c.instructions+=2;NFSU2_TR(0x721dc0);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721dc2:{NFSU2_TR(0x721dc2);
{goto L721dd4;}
}
B721dc4:L721dc4:{c.instructions+=2;NFSU2_TR(0x721dc4);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B721dc8:{NFSU2_TR(0x721dc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721dcdull));
TAIL_STATIC(0x722424u,722);
}
B721dcd:L721dcd:{c.instructions+=3;NFSU2_TR(0x721dcd);
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
B721dcf:{NFSU2_TR(0x721dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721dd0:{NFSU2_TR(0x721dd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721dd6;}}
}
B721dd2:L721dd2:{c.instructions+=1;NFSU2_TR(0x721dd2);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721dd4:L721dd4:{c.instructions+=2;NFSU2_TR(0x721dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B721dd5:{NFSU2_TR(0x721dd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721dd6:L721dd6:{c.instructions+=3;NFSU2_TR(0x721dd6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B721dda:{NFSU2_TR(0x721dda);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B721ddc:{NFSU2_TR(0x721ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721de1ull));
TAIL_STATIC(0x770e00u,770);
}
B721de1:L721de1:{c.instructions+=4;NFSU2_TR(0x721de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721de2:{NFSU2_TR(0x721de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721de3:{NFSU2_TR(0x721de3);
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
B721de5:{NFSU2_TR(0x721de5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721de6:L721de6:{c.instructions+=3;NFSU2_TR(0x721de6);
__builtin_memmove((R+0),gp(0x8b4058),4);
}
B721deb:{NFSU2_TR(0x721deb);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b4060),4);
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
B721df1:{NFSU2_TR(0x721df1);
if(r1(R+518)){{goto L721e12;}}
}
B721df3:L721df3:{c.instructions+=4;NFSU2_TR(0x721df3);
__builtin_memmove(gp(0x8b4060),(R+0),4);
}
B721df8:{NFSU2_TR(0x721df8);
__builtin_memmove((R+0),gp(0x8b405c),4);
}
B721dfd:{NFSU2_TR(0x721dfd);
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
B721dff:{NFSU2_TR(0x721dff);
if(r1(R+518)){{goto L721e12;}}
}
B721e01:L721e01:{c.instructions+=1;NFSU2_TR(0x721e01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e02:L721e02:{c.instructions+=3;NFSU2_TR(0x721e02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B721e05:{NFSU2_TR(0x721e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B721e07:{NFSU2_TR(0x721e07);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721e0aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B721e0a:L721e0a:{c.instructions+=4;NFSU2_TR(0x721e0a);
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
B721e0c:{NFSU2_TR(0x721e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721e0d:{NFSU2_TR(0x721e0d);
__builtin_memmove((R+0),(R+24),4);
}
B721e0f:{NFSU2_TR(0x721e0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721e02u);}goto L721e02;}}
}
B721e11:L721e11:{c.instructions+=1;NFSU2_TR(0x721e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721e12:L721e12:{c.instructions+=1;NFSU2_TR(0x721e12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721e13:L721e13:{c.instructions+=6;NFSU2_TR(0x721e13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e14:{NFSU2_TR(0x721e14);
u8 U[6];
w1(R+512,carry<u32>(m4(0x8b4610),u32(0x1ull)));
w1(R+523,scarry<u32>(m4(0x8b4610),u32(0x1ull)));
s4(0x8b4610,u32(u32(m4(0x8b4610))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b4610))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b4610))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b4610))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B721e1b:{NFSU2_TR(0x721e1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e1c:{NFSU2_TR(0x721e1c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e1d:{NFSU2_TR(0x721e1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e1e:{NFSU2_TR(0x721e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721e23ull));
TAIL_STATIC(0x6996f4u,699);
}
B721e23:L721e23:{c.instructions+=4;NFSU2_TR(0x721e23);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B721e25:{NFSU2_TR(0x721e25);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B721e27:{NFSU2_TR(0x721e27);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b460a),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721e2d:{NFSU2_TR(0x721e2d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721e42;}}
}
B721e2f:L721e2f:{c.instructions+=1;NFSU2_TR(0x721e2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4614ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721e36ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B721e36:L721e36:{c.instructions+=4;NFSU2_TR(0x721e36);
w4(R+0,u32(s32(s8(m1(0x8b460a)))));
}
B721e3d:{NFSU2_TR(0x721e3d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B721e3e:{NFSU2_TR(0x721e3e);
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
B721e40:{NFSU2_TR(0x721e40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721e2fu);}goto L721e2f;}}
}
B721e42:L721e42:{c.instructions+=3;NFSU2_TR(0x721e42);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B721e44:{NFSU2_TR(0x721e44);
u8 U[8];
__builtin_memmove((U+4),gp(0x8b460c),2);
w1(R+512,u8((r2(U+4))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+4),r2(R+12)));
w2(U+6,u16(u32(r2(U+4))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B721e4b:{NFSU2_TR(0x721e4b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L721f8a;}}
}
B721e51:L721e51:{c.instructions+=2;NFSU2_TR(0x721e51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721e55:{NFSU2_TR(0x721e55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e56:L721e56:{c.instructions+=5;NFSU2_TR(0x721e56);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B721e5b:{NFSU2_TR(0x721e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721e5f:{NFSU2_TR(0x721e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B721e62:{NFSU2_TR(0x721e62);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B721e66:{NFSU2_TR(0x721e66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721f71;}}
}
B721e6c:L721e6c:{c.instructions+=2;NFSU2_TR(0x721e6c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+12)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B721e6e:{NFSU2_TR(0x721e6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L721e9b;}}
}
B721e70:L721e70:{c.instructions+=2;NFSU2_TR(0x721e70);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B721e76:{NFSU2_TR(0x721e76);
if(r1(R+518)){{goto L721e9b;}}
}
B721e78:L721e78:{c.instructions+=4;NFSU2_TR(0x721e78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B721e7b:{NFSU2_TR(0x721e7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B721e7e:{NFSU2_TR(0x721e7e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
}
B721e81:{NFSU2_TR(0x721e81);
if(r1(R+512)){{goto L721e86;}}
}
B721e83:L721e83:{c.instructions+=1;NFSU2_TR(0x721e83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B721e86:L721e86:{c.instructions+=3;NFSU2_TR(0x721e86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e87:{NFSU2_TR(0x721e87);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B721e8e:{NFSU2_TR(0x721e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721e93ull));
TAIL_STATIC(0x7277dau,727);
}
B721e93:L721e93:{c.instructions+=2;NFSU2_TR(0x721e93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721e94:{NFSU2_TR(0x721e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721e99ull));
TAIL_STATIC(0x724d0eu,724);
}
B721e99:L721e99:{c.instructions+=2;NFSU2_TR(0x721e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721e9a:{NFSU2_TR(0x721e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721e9b:L721e9b:{c.instructions+=3;NFSU2_TR(0x721e9b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B721e9d:{NFSU2_TR(0x721e9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B721ea0:{NFSU2_TR(0x721ea0);
if(r1(R+518)){{goto L721eb1;}}
}
B721ea2:L721ea2:{c.instructions+=5;NFSU2_TR(0x721ea2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B721ea5:{NFSU2_TR(0x721ea5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B721ea8:{NFSU2_TR(0x721ea8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B721ea9:{NFSU2_TR(0x721ea9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
}
B721eac:{NFSU2_TR(0x721eac);
if(r1(R+512)){{goto L721eb1;}}
}
B721eae:L721eae:{c.instructions+=1;NFSU2_TR(0x721eae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B721eb1:L721eb1:{c.instructions+=6;NFSU2_TR(0x721eb1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721eb7:{NFSU2_TR(0x721eb7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721eba:{NFSU2_TR(0x721eba);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B721ebc:{NFSU2_TR(0x721ebc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B721ebe:{NFSU2_TR(0x721ebe);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721ec1:{NFSU2_TR(0x721ec1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L721f0b;}}
}
B721ec3:L721ec3:{c.instructions+=12;NFSU2_TR(0x721ec3);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721ec6:{NFSU2_TR(0x721ec6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B721ec8:{NFSU2_TR(0x721ec8);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B721ecb:{NFSU2_TR(0x721ecb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B721ecc:{NFSU2_TR(0x721ecc);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B721ecf:{NFSU2_TR(0x721ecf);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721ed2:{NFSU2_TR(0x721ed2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B721ed8:{NFSU2_TR(0x721ed8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B721eda:{NFSU2_TR(0x721eda);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B721edd:{NFSU2_TR(0x721edd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721ee0:{NFSU2_TR(0x721ee0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B721ee2:{NFSU2_TR(0x721ee2);
if(r1(R+514)){{goto L721eeb;}}
}
B721ee4:L721ee4:{c.instructions+=2;NFSU2_TR(0x721ee4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721ee7:{NFSU2_TR(0x721ee7);
if(r1(R+514)){{goto L721efb;}}
}
B721ee9:L721ee9:{c.instructions+=1;NFSU2_TR(0x721ee9);
{goto L721ef0;}
}
B721eeb:L721eeb:{c.instructions+=2;NFSU2_TR(0x721eeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B721eee:{NFSU2_TR(0x721eee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721efb;}}
}
B721ef0:L721ef0:{c.instructions+=4;NFSU2_TR(0x721ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721ef3:{NFSU2_TR(0x721ef3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B721ef5:{NFSU2_TR(0x721ef5);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B721ef8:{NFSU2_TR(0x721ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721efb:L721efb:{c.instructions+=5;NFSU2_TR(0x721efb);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721efe:{NFSU2_TR(0x721efe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B721f04:{NFSU2_TR(0x721f04);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B721f06:{NFSU2_TR(0x721f06);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721f09:{NFSU2_TR(0x721f09);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L721f2d;}}
}
B721f0b:L721f0b:{c.instructions+=5;NFSU2_TR(0x721f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721f0e:{NFSU2_TR(0x721f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721f11:{NFSU2_TR(0x721f11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721f13:{NFSU2_TR(0x721f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721f16:{NFSU2_TR(0x721f16);
if(r1(R+518)){{goto L721f1e;}}
}
B721f18:L721f18:{c.instructions+=3;NFSU2_TR(0x721f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B721f1b:{NFSU2_TR(0x721f1b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B721f1d:{NFSU2_TR(0x721f1d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B721f1e:L721f1e:{c.instructions+=2;NFSU2_TR(0x721f1e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721f20:{NFSU2_TR(0x721f20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721f5f;}}
}
B721f22:L721f22:{c.instructions+=4;NFSU2_TR(0x721f22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B721f25:{NFSU2_TR(0x721f25);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B721f28:{NFSU2_TR(0x721f28);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+5)));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
}
B721f2b:{NFSU2_TR(0x721f2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L721f36;}}
}
B721f2d:L721f2d:{c.instructions+=2;NFSU2_TR(0x721f2d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B721f2f:{NFSU2_TR(0x721f2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721f34ull));
TAIL_STATIC(0x723e1eu,723);
}
B721f34:L721f34:{c.instructions+=1;NFSU2_TR(0x721f34);
{goto L721f70;}
}
B721f36:L721f36:{c.instructions+=7;NFSU2_TR(0x721f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B721f39:{NFSU2_TR(0x721f39);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B721f3c:{NFSU2_TR(0x721f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B721f3f:{NFSU2_TR(0x721f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B721f41:{NFSU2_TR(0x721f41);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B721f43:{NFSU2_TR(0x721f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721f46:{NFSU2_TR(0x721f46);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L721f4f;}}
}
B721f48:L721f48:{c.instructions+=1;NFSU2_TR(0x721f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B721f4f:L721f4f:{c.instructions+=6;NFSU2_TR(0x721f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721f52:{NFSU2_TR(0x721f52);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B721f55:{NFSU2_TR(0x721f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B721f58:{NFSU2_TR(0x721f58);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B721f59:{NFSU2_TR(0x721f59);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x721f59);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x721f59);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B721f5c:{NFSU2_TR(0x721f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721f5f:L721f5f:{c.instructions+=2;NFSU2_TR(0x721f5f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B721f61:{NFSU2_TR(0x721f61);
if(r1(R+518)){{goto L721f71;}}
}
B721f63:L721f63:{c.instructions+=2;NFSU2_TR(0x721f63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721f64:{NFSU2_TR(0x721f64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721f69ull));
TAIL_STATIC(0x7276bfu,727);
}
B721f69:L721f69:{c.instructions+=2;NFSU2_TR(0x721f69);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721f6a:{NFSU2_TR(0x721f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721f6full));
TAIL_STATIC(0x724f5du,724);
}
B721f6f:L721f6f:{c.instructions+=1;NFSU2_TR(0x721f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721f70:L721f70:{c.instructions+=1;NFSU2_TR(0x721f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721f71:L721f71:{c.instructions+=5;NFSU2_TR(0x721f71);
w4(R+0,u32(s32(s16(m2(0x8b460c)))));
}
B721f78:{NFSU2_TR(0x721f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x90ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B721f80:{NFSU2_TR(0x721f80);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B721f81:{NFSU2_TR(0x721f81);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B721f83:{NFSU2_TR(0x721f83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x721e56u);}goto L721e56;}}
}
B721f89:L721f89:{c.instructions+=1;NFSU2_TR(0x721f89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B721f8a:L721f8a:{c.instructions+=5;NFSU2_TR(0x721f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B721f8b:{NFSU2_TR(0x721f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B721f8c:{NFSU2_TR(0x721f8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B721f8d:{NFSU2_TR(0x721f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B721f8e:{NFSU2_TR(0x721f8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721f8f:L721f8f:{c.instructions+=1;NFSU2_TR(0x721f8f);
TAIL_STATIC(0x72789au,727);
}
B721f94:L721f94:{c.instructions+=1;NFSU2_TR(0x721f94);
TAIL_STATIC(0x7278a9u,727);
}
B721f99:L721f99:{c.instructions+=1;NFSU2_TR(0x721f99);
u8 U[4];
__builtin_memmove((U+0),gp(0x818088),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x721f9full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B721f9f:L721f9f:{c.instructions+=2;NFSU2_TR(0x721f9f);
u8 U[3];
w1(R+512,carry<u8>(m1(0x8b4609),u8(0x1ull)));
w1(R+523,scarry<u8>(m1(0x8b4609),u8(0x1ull)));
s1(0x8b4609,u8(u32(m1(0x8b4609))+u32(u8(0x1ull))));
w1(R+519,u8(s8(m1(0x8b4609))<s8(u8(0x0ull))));
w1(R+518,u8((m1(0x8b4609))==(u8(0x0ull))));
w1(U+0,u8(u32(m1(0x8b4609))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721fa6:{NFSU2_TR(0x721fa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B721fa7:L721fa7:{c.instructions+=2;NFSU2_TR(0x721fa7);
u8 U[3];
w1(R+512,u8((m1(0x8b4609))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(m1(0x8b4609),u8(0x1ull)));
s1(0x8b4609,u8(u32(m1(0x8b4609))-u32(u8(0x1ull))));
w1(R+519,u8(s8(m1(0x8b4609))<s8(u8(0x0ull))));
w1(R+518,u8((m1(0x8b4609))==(u8(0x0ull))));
w1(U+0,u8(u32(m1(0x8b4609))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721fae:{NFSU2_TR(0x721fae);
{u32 t_=u32(m4(0x81808c));TAIL_DYNAMIC(t_);}
}
B721fb4:L721fb4:{c.instructions+=12;NFSU2_TR(0x721fb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721fb5:{NFSU2_TR(0x721fb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B721fb9:{NFSU2_TR(0x721fb9);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721fbc:{NFSU2_TR(0x721fbc);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B721fbf:{NFSU2_TR(0x721fbf);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B721fc2:{NFSU2_TR(0x721fc2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B721fc5:{NFSU2_TR(0x721fc5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B721fcb:{NFSU2_TR(0x721fcb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B721fcd:{NFSU2_TR(0x721fcd);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B721fd0:{NFSU2_TR(0x721fd0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721fd3:{NFSU2_TR(0x721fd3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B721fd5:{NFSU2_TR(0x721fd5);
if(r1(R+514)){{goto L721fde;}}
}
B721fd7:L721fd7:{c.instructions+=2;NFSU2_TR(0x721fd7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B721fda:{NFSU2_TR(0x721fda);
if(r1(R+514)){{goto L721fee;}}
}
B721fdc:L721fdc:{c.instructions+=1;NFSU2_TR(0x721fdc);
{goto L721fe3;}
}
B721fde:L721fde:{c.instructions+=2;NFSU2_TR(0x721fde);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B721fe1:{NFSU2_TR(0x721fe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L721fee;}}
}
B721fe3:L721fe3:{c.instructions+=4;NFSU2_TR(0x721fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B721fe6:{NFSU2_TR(0x721fe6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B721fe8:{NFSU2_TR(0x721fe8);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B721feb:{NFSU2_TR(0x721feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B721fee:L721fee:{c.instructions+=8;NFSU2_TR(0x721fee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B721ff2:{NFSU2_TR(0x721ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B721ff5:{NFSU2_TR(0x721ff5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B721ff8:{NFSU2_TR(0x721ff8);
__builtin_memmove((R+4),(R+0),4);
}
B721ffa:{NFSU2_TR(0x721ffa);
__builtin_memmove((R+0),(R+24),4);
}
B721ffc:{NFSU2_TR(0x721ffc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B721ffd:{NFSU2_TR(0x721ffd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B721fff:{NFSU2_TR(0x721fff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x160ull))));
TAIL_STATIC(0x722004u,722);
}
XIT:NFSU2_TR_EXIT(0x721,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
