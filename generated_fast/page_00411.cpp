#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x411,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x411,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_411(u8* __restrict R,Cpu& c);
u32 page_411(Cpu& c){return body_411(c.regs.data(),c);}
__attribute__((noinline)) u32 body_411(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x411000:goto L411000;
case 0x411002:c.instructions+=1;goto B411002;
case 0x411004:goto L411004;
case 0x411006:c.instructions+=1;goto B411006;
case 0x411008:goto L411008;
case 0x41100b:c.instructions+=2;goto B41100b;
case 0x41100f:c.instructions+=1;goto B41100f;
case 0x411011:goto L411011;
case 0x411015:c.instructions+=1;goto B411015;
case 0x411017:goto L411017;
case 0x41101b:goto L41101b;
case 0x41101d:c.instructions+=16;goto B41101d;
case 0x411020:c.instructions+=15;goto B411020;
case 0x411023:c.instructions+=14;goto B411023;
case 0x411026:c.instructions+=13;goto B411026;
case 0x411028:c.instructions+=12;goto B411028;
case 0x41102a:c.instructions+=11;goto B41102a;
case 0x41102c:c.instructions+=10;goto B41102c;
case 0x41102e:c.instructions+=9;goto B41102e;
case 0x411030:c.instructions+=8;goto B411030;
case 0x411032:c.instructions+=7;goto B411032;
case 0x411034:c.instructions+=6;goto B411034;
case 0x411036:c.instructions+=5;goto B411036;
case 0x411038:c.instructions+=4;goto B411038;
case 0x41103a:c.instructions+=3;goto B41103a;
case 0x41103c:c.instructions+=2;goto B41103c;
case 0x41103f:c.instructions+=1;goto B41103f;
case 0x411041:goto L411041;
case 0x411047:c.instructions+=3;goto B411047;
case 0x411049:c.instructions+=2;goto B411049;
case 0x41104b:c.instructions+=1;goto B41104b;
case 0x41104d:goto L41104d;
case 0x41104e:c.instructions+=5;goto B41104e;
case 0x41104f:c.instructions+=4;goto B41104f;
case 0x411050:c.instructions+=3;goto B411050;
case 0x411052:c.instructions+=2;goto B411052;
case 0x411053:c.instructions+=1;goto B411053;
case 0x411054:goto L411054;
case 0x411055:c.instructions+=5;goto B411055;
case 0x411056:c.instructions+=4;goto B411056;
case 0x411057:c.instructions+=3;goto B411057;
case 0x411059:c.instructions+=2;goto B411059;
case 0x41105a:c.instructions+=1;goto B41105a;
case 0x411060:goto L411060;
case 0x411065:c.instructions+=6;goto B411065;
case 0x411066:c.instructions+=5;goto B411066;
case 0x411067:c.instructions+=4;goto B411067;
case 0x411068:c.instructions+=3;goto B411068;
case 0x41106a:c.instructions+=2;goto B41106a;
case 0x41106c:c.instructions+=1;goto B41106c;
case 0x411072:goto L411072;
case 0x411076:goto L411076;
case 0x411079:c.instructions+=3;goto B411079;
case 0x41107b:c.instructions+=2;goto B41107b;
case 0x41107e:c.instructions+=1;goto B41107e;
case 0x411080:goto L411080;
case 0x411083:c.instructions+=1;goto B411083;
case 0x411085:goto L411085;
case 0x411088:c.instructions+=1;goto B411088;
case 0x41108a:goto L41108a;
case 0x41108d:c.instructions+=1;goto B41108d;
case 0x411093:goto L411093;
case 0x411097:c.instructions+=1;goto B411097;
case 0x411099:goto L411099;
case 0x41109b:c.instructions+=1;goto B41109b;
case 0x4110a0:goto L4110a0;
case 0x4110a2:c.instructions+=1;goto B4110a2;
case 0x4110a4:goto L4110a4;
case 0x4110a6:c.instructions+=1;goto B4110a6;
case 0x4110a8:goto L4110a8;
case 0x4110ae:c.instructions+=6;goto B4110ae;
case 0x4110b0:c.instructions+=5;goto B4110b0;
case 0x4110b1:c.instructions+=4;goto B4110b1;
case 0x4110b5:c.instructions+=3;goto B4110b5;
case 0x4110b6:c.instructions+=2;goto B4110b6;
case 0x4110bb:c.instructions+=1;goto B4110bb;
case 0x4110c0:goto L4110c0;
case 0x4110c3:c.instructions+=2;goto B4110c3;
case 0x4110c7:c.instructions+=1;goto B4110c7;
case 0x4110c9:goto L4110c9;
case 0x4110cb:c.instructions+=4;goto B4110cb;
case 0x4110cf:c.instructions+=3;goto B4110cf;
case 0x4110d1:c.instructions+=2;goto B4110d1;
case 0x4110d4:c.instructions+=1;goto B4110d4;
case 0x4110d6:goto L4110d6;
case 0x4110d7:c.instructions+=4;goto B4110d7;
case 0x4110d8:c.instructions+=3;goto B4110d8;
case 0x4110da:c.instructions+=2;goto B4110da;
case 0x4110db:c.instructions+=1;goto B4110db;
case 0x4110de:goto L4110de;
case 0x4110e2:c.instructions+=3;goto B4110e2;
case 0x4110e4:c.instructions+=2;goto B4110e4;
case 0x4110e7:c.instructions+=1;goto B4110e7;
case 0x4110e9:goto L4110e9;
case 0x4110ef:c.instructions+=3;goto B4110ef;
case 0x4110f1:c.instructions+=2;goto B4110f1;
case 0x4110f4:c.instructions+=1;goto B4110f4;
case 0x4110f6:goto L4110f6;
case 0x4110f8:goto L4110f8;
case 0x4110fa:goto L4110fa;
case 0x4110fc:c.instructions+=2;goto B4110fc;
case 0x411102:c.instructions+=1;goto B411102;
case 0x411108:goto L411108;
case 0x411109:c.instructions+=4;goto B411109;
case 0x41110a:c.instructions+=3;goto B41110a;
case 0x41110c:c.instructions+=2;goto B41110c;
case 0x41110d:c.instructions+=1;goto B41110d;
case 0x411110:goto L411110;
case 0x411111:c.instructions+=6;goto B411111;
case 0x411114:c.instructions+=5;goto B411114;
case 0x41111a:c.instructions+=4;goto B41111a;
case 0x41111b:c.instructions+=3;goto B41111b;
case 0x41111c:c.instructions+=2;goto B41111c;
case 0x41111d:c.instructions+=1;goto B41111d;
case 0x411122:goto L411122;
case 0x411126:c.instructions+=5;goto B411126;
case 0x41112b:c.instructions+=4;goto B41112b;
case 0x41112d:c.instructions+=3;goto B41112d;
case 0x41112f:c.instructions+=2;goto B41112f;
case 0x411131:c.instructions+=1;goto B411131;
case 0x411133:goto L411133;
case 0x411134:c.instructions+=3;goto B411134;
case 0x411138:c.instructions+=2;goto B411138;
case 0x411139:c.instructions+=1;goto B411139;
case 0x411140:goto L411140;
case 0x411145:c.instructions+=4;goto B411145;
case 0x411147:c.instructions+=3;goto B411147;
case 0x41114e:c.instructions+=2;goto B41114e;
case 0x411152:c.instructions+=1;goto B411152;
case 0x411154:goto L411154;
case 0x411157:c.instructions+=3;goto B411157;
case 0x41115a:c.instructions+=2;goto B41115a;
case 0x41115c:c.instructions+=1;goto B41115c;
case 0x41115e:goto L41115e;
case 0x411160:c.instructions+=2;goto B411160;
case 0x411163:c.instructions+=1;goto B411163;
case 0x411167:goto L411167;
case 0x411169:c.instructions+=1;goto B411169;
case 0x41116b:goto L41116b;
case 0x41116f:c.instructions+=3;goto B41116f;
case 0x411170:c.instructions+=2;goto B411170;
case 0x411172:c.instructions+=1;goto B411172;
case 0x411177:goto L411177;
case 0x411179:c.instructions+=1;goto B411179;
case 0x41117b:goto L41117b;
case 0x41117f:c.instructions+=4;goto B41117f;
case 0x411181:c.instructions+=3;goto B411181;
case 0x411185:c.instructions+=2;goto B411185;
case 0x411187:c.instructions+=1;goto B411187;
case 0x411189:goto L411189;
case 0x41118e:c.instructions+=3;goto B41118e;
case 0x41118f:c.instructions+=2;goto B41118f;
case 0x411191:c.instructions+=1;goto B411191;
case 0x411193:goto L411193;
case 0x411194:c.instructions+=5;goto B411194;
case 0x411195:c.instructions+=4;goto B411195;
case 0x411196:c.instructions+=3;goto B411196;
case 0x411197:c.instructions+=2;goto B411197;
case 0x411198:c.instructions+=1;goto B411198;
case 0x41119b:goto L41119b;
case 0x41119f:c.instructions+=7;goto B41119f;
case 0x4111a1:c.instructions+=6;goto B4111a1;
case 0x4111a4:c.instructions+=5;goto B4111a4;
case 0x4111ab:c.instructions+=4;goto B4111ab;
case 0x4111ad:c.instructions+=3;goto B4111ad;
case 0x4111ae:c.instructions+=2;goto B4111ae;
case 0x4111b1:c.instructions+=1;goto B4111b1;
case 0x4111b2:goto L4111b2;
case 0x4111b3:c.instructions+=3;goto B4111b3;
case 0x4111b4:c.instructions+=2;goto B4111b4;
case 0x4111b5:c.instructions+=1;goto B4111b5;
case 0x4111c0:goto L4111c0;
case 0x4111c5:c.instructions+=4;goto B4111c5;
case 0x4111c6:c.instructions+=3;goto B4111c6;
case 0x4111c8:c.instructions+=2;goto B4111c8;
case 0x4111ca:c.instructions+=1;goto B4111ca;
case 0x4111cc:goto L4111cc;
case 0x4111cd:c.instructions+=2;goto B4111cd;
case 0x4111ce:c.instructions+=1;goto B4111ce;
case 0x4111d0:goto L4111d0;
case 0x4111d5:c.instructions+=4;goto B4111d5;
case 0x4111d8:c.instructions+=3;goto B4111d8;
case 0x4111da:c.instructions+=2;goto B4111da;
case 0x4111dd:c.instructions+=1;goto B4111dd;
case 0x4111e0:goto L4111e0;
case 0x4111e3:c.instructions+=2;goto B4111e3;
case 0x4111e5:c.instructions+=1;goto B4111e5;
case 0x4111e7:goto L4111e7;
case 0x4111ee:c.instructions+=2;goto B4111ee;
case 0x4111f0:c.instructions+=1;goto B4111f0;
case 0x4111f2:goto L4111f2;
case 0x4111f5:c.instructions+=3;goto B4111f5;
case 0x4111f8:c.instructions+=2;goto B4111f8;
case 0x4111fa:c.instructions+=1;goto B4111fa;
case 0x4111fc:goto L4111fc;
case 0x4111fd:c.instructions+=3;goto B4111fd;
case 0x411200:c.instructions+=2;goto B411200;
case 0x411203:c.instructions+=1;goto B411203;
case 0x411205:goto L411205;
case 0x41120a:goto L41120a;
case 0x41120f:c.instructions+=4;goto B41120f;
case 0x411210:c.instructions+=3;goto B411210;
case 0x411216:c.instructions+=2;goto B411216;
case 0x411218:c.instructions+=1;goto B411218;
case 0x41121a:goto L41121a;
case 0x41121b:c.instructions+=1;goto B41121b;
case 0x41121c:goto L41121c;
case 0x41121d:c.instructions+=1;goto B41121d;
case 0x411220:goto L411220;
case 0x411225:c.instructions+=7;goto B411225;
case 0x411228:c.instructions+=6;goto B411228;
case 0x41122b:c.instructions+=5;goto B41122b;
case 0x41122c:c.instructions+=4;goto B41122c;
case 0x41122e:c.instructions+=3;goto B41122e;
case 0x411230:c.instructions+=2;goto B411230;
case 0x411232:c.instructions+=1;goto B411232;
case 0x411234:goto L411234;
case 0x411235:c.instructions+=3;goto B411235;
case 0x411236:c.instructions+=2;goto B411236;
case 0x411238:c.instructions+=1;goto B411238;
case 0x411240:goto L411240;
case 0x411242:c.instructions+=5;goto B411242;
case 0x411246:c.instructions+=4;goto B411246;
case 0x411249:c.instructions+=3;goto B411249;
case 0x41124f:c.instructions+=2;goto B41124f;
case 0x411251:c.instructions+=1;goto B411251;
case 0x411253:goto L411253;
case 0x411256:c.instructions+=2;goto B411256;
case 0x411259:c.instructions+=1;goto B411259;
case 0x41125e:goto L41125e;
case 0x411261:c.instructions+=2;goto B411261;
case 0x411263:c.instructions+=1;goto B411263;
case 0x411268:goto L411268;
case 0x41126b:c.instructions+=2;goto B41126b;
case 0x41126d:c.instructions+=1;goto B41126d;
case 0x411272:goto L411272;
case 0x411278:goto L411278;
case 0x41127e:c.instructions+=7;goto B41127e;
case 0x411283:c.instructions+=6;goto B411283;
case 0x411286:c.instructions+=5;goto B411286;
case 0x411289:c.instructions+=4;goto B411289;
case 0x41128a:c.instructions+=3;goto B41128a;
case 0x41128c:c.instructions+=2;goto B41128c;
case 0x41128e:c.instructions+=1;goto B41128e;
case 0x411290:goto L411290;
case 0x411291:c.instructions+=1;goto B411291;
case 0x411292:goto L411292;
case 0x411293:c.instructions+=1;goto B411293;
case 0x4112a0:goto L4112a0;
case 0x4112a1:c.instructions+=10;goto B4112a1;
case 0x4112a2:c.instructions+=9;goto B4112a2;
case 0x4112a6:c.instructions+=8;goto B4112a6;
case 0x4112ac:c.instructions+=7;goto B4112ac;
case 0x4112ad:c.instructions+=6;goto B4112ad;
case 0x4112b3:c.instructions+=5;goto B4112b3;
case 0x4112b4:c.instructions+=4;goto B4112b4;
case 0x4112b6:c.instructions+=3;goto B4112b6;
case 0x4112b8:c.instructions+=2;goto B4112b8;
case 0x4112bb:c.instructions+=1;goto B4112bb;
case 0x4112c1:goto L4112c1;
case 0x4112c7:c.instructions+=6;goto B4112c7;
case 0x4112ca:c.instructions+=5;goto B4112ca;
case 0x4112cd:c.instructions+=4;goto B4112cd;
case 0x4112cf:c.instructions+=3;goto B4112cf;
case 0x4112d1:c.instructions+=2;goto B4112d1;
case 0x4112d3:c.instructions+=1;goto B4112d3;
case 0x4112d9:goto L4112d9;
case 0x4112e0:goto L4112e0;
case 0x4112e2:c.instructions+=6;goto B4112e2;
case 0x4112e6:c.instructions+=5;goto B4112e6;
case 0x4112ec:c.instructions+=4;goto B4112ec;
case 0x4112f2:c.instructions+=3;goto B4112f2;
case 0x4112f4:c.instructions+=2;goto B4112f4;
case 0x4112f7:c.instructions+=1;goto B4112f7;
case 0x4112f9:goto L4112f9;
case 0x4112fc:c.instructions+=2;goto B4112fc;
case 0x411300:c.instructions+=1;goto B411300;
case 0x411302:goto L411302;
case 0x411305:c.instructions+=2;goto B411305;
case 0x41130c:c.instructions+=1;goto B41130c;
case 0x41130e:goto L41130e;
case 0x411314:c.instructions+=9;goto B411314;
case 0x41131a:c.instructions+=8;goto B41131a;
case 0x41131c:c.instructions+=7;goto B41131c;
case 0x411320:c.instructions+=6;goto B411320;
case 0x411322:c.instructions+=5;goto B411322;
case 0x411323:c.instructions+=4;goto B411323;
case 0x411324:c.instructions+=3;goto B411324;
case 0x411329:c.instructions+=2;goto B411329;
case 0x41132d:c.instructions+=1;goto B41132d;
case 0x411332:goto L411332;
case 0x411334:c.instructions+=4;goto B411334;
case 0x41133a:c.instructions+=3;goto B41133a;
case 0x41133c:c.instructions+=2;goto B41133c;
case 0x41133f:c.instructions+=1;goto B41133f;
case 0x411341:goto L411341;
case 0x411342:c.instructions+=2;goto B411342;
case 0x411345:c.instructions+=1;goto B411345;
case 0x411347:goto L411347;
case 0x41134d:goto L41134d;
case 0x411350:c.instructions+=5;goto B411350;
case 0x411353:c.instructions+=4;goto B411353;
case 0x411354:c.instructions+=3;goto B411354;
case 0x411356:c.instructions+=2;goto B411356;
case 0x411358:c.instructions+=1;goto B411358;
case 0x41135a:goto L41135a;
case 0x41135b:c.instructions+=5;goto B41135b;
case 0x41135c:c.instructions+=4;goto B41135c;
case 0x41135e:c.instructions+=3;goto B41135e;
case 0x41135f:c.instructions+=2;goto B41135f;
case 0x411360:c.instructions+=1;goto B411360;
case 0x411363:goto L411363;
case 0x411364:c.instructions+=5;goto B411364;
case 0x411365:c.instructions+=4;goto B411365;
case 0x411367:c.instructions+=3;goto B411367;
case 0x411368:c.instructions+=2;goto B411368;
case 0x411369:c.instructions+=1;goto B411369;
case 0x411370:goto L411370;
case 0x411371:c.instructions+=2;goto B411371;
case 0x411373:c.instructions+=1;goto B411373;
case 0x411378:goto L411378;
case 0x41137d:c.instructions+=1;goto B41137d;
case 0x41137f:goto L41137f;
case 0x411380:c.instructions+=1;goto B411380;
case 0x411385:goto L411385;
case 0x411388:goto L411388;
case 0x41138a:c.instructions+=2;goto B41138a;
case 0x41138b:c.instructions+=1;goto B41138b;
case 0x411390:goto L411390;
case 0x411391:c.instructions+=9;goto B411391;
case 0x411395:c.instructions+=8;goto B411395;
case 0x411397:c.instructions+=7;goto B411397;
case 0x41139b:c.instructions+=6;goto B41139b;
case 0x41139f:c.instructions+=5;goto B41139f;
case 0x4113a3:c.instructions+=4;goto B4113a3;
case 0x4113a4:c.instructions+=3;goto B4113a4;
case 0x4113a7:c.instructions+=2;goto B4113a7;
case 0x4113aa:c.instructions+=1;goto B4113aa;
case 0x4113af:goto L4113af;
case 0x4113b3:c.instructions+=3;goto B4113b3;
case 0x4113b6:c.instructions+=2;goto B4113b6;
case 0x4113b9:c.instructions+=1;goto B4113b9;
case 0x4113bf:goto L4113bf;
case 0x4113c6:goto L4113c6;
case 0x4113ca:c.instructions+=5;goto B4113ca;
case 0x4113ce:c.instructions+=4;goto B4113ce;
case 0x4113d2:c.instructions+=3;goto B4113d2;
case 0x4113d4:c.instructions+=2;goto B4113d4;
case 0x4113d5:c.instructions+=1;goto B4113d5;
case 0x4113d8:goto L4113d8;
case 0x4113dc:c.instructions+=9;goto B4113dc;
case 0x4113e0:c.instructions+=8;goto B4113e0;
case 0x4113e4:c.instructions+=7;goto B4113e4;
case 0x4113e6:c.instructions+=6;goto B4113e6;
case 0x4113ea:c.instructions+=5;goto B4113ea;
case 0x4113ee:c.instructions+=4;goto B4113ee;
case 0x4113f1:c.instructions+=3;goto B4113f1;
case 0x4113f3:c.instructions+=2;goto B4113f3;
case 0x4113f4:c.instructions+=1;goto B4113f4;
case 0x4113f7:goto L4113f7;
case 0x4113fb:c.instructions+=3;goto B4113fb;
case 0x4113fc:c.instructions+=2;goto B4113fc;
case 0x4113fe:c.instructions+=1;goto B4113fe;
case 0x411403:goto L411403;
case 0x411407:c.instructions+=4;goto B411407;
case 0x41140b:c.instructions+=3;goto B41140b;
case 0x41140d:c.instructions+=2;goto B41140d;
case 0x41140e:c.instructions+=1;goto B41140e;
case 0x411411:goto L411411;
case 0x411415:c.instructions+=3;goto B411415;
case 0x411416:c.instructions+=2;goto B411416;
case 0x411418:c.instructions+=1;goto B411418;
case 0x41141d:goto L41141d;
case 0x411421:c.instructions+=4;goto B411421;
case 0x411425:c.instructions+=3;goto B411425;
case 0x411427:c.instructions+=2;goto B411427;
case 0x411428:c.instructions+=1;goto B411428;
case 0x41142b:goto L41142b;
case 0x41142f:c.instructions+=3;goto B41142f;
case 0x411430:c.instructions+=2;goto B411430;
case 0x411432:c.instructions+=1;goto B411432;
case 0x411437:goto L411437;
case 0x41143b:c.instructions+=3;goto B41143b;
case 0x41143f:c.instructions+=2;goto B41143f;
case 0x411440:c.instructions+=1;goto B411440;
case 0x411445:goto L411445;
case 0x411449:c.instructions+=4;goto B411449;
case 0x41144d:c.instructions+=3;goto B41144d;
case 0x41144f:c.instructions+=2;goto B41144f;
case 0x411450:c.instructions+=1;goto B411450;
case 0x411453:goto L411453;
case 0x411457:c.instructions+=5;goto B411457;
case 0x41145b:c.instructions+=4;goto B41145b;
case 0x41145f:c.instructions+=3;goto B41145f;
case 0x411461:c.instructions+=2;goto B411461;
case 0x411462:c.instructions+=1;goto B411462;
case 0x411465:goto L411465;
case 0x41146b:c.instructions+=2;goto B41146b;
case 0x41146c:c.instructions+=1;goto B41146c;
case 0x411490:goto L411490;
case 0x411493:c.instructions+=7;goto B411493;
case 0x411494:c.instructions+=6;goto B411494;
case 0x411495:c.instructions+=5;goto B411495;
case 0x411496:c.instructions+=4;goto B411496;
case 0x411498:c.instructions+=3;goto B411498;
case 0x411499:c.instructions+=2;goto B411499;
case 0x41149c:c.instructions+=1;goto B41149c;
case 0x4114a1:goto L4114a1;
case 0x4114a4:c.instructions+=3;goto B4114a4;
case 0x4114a7:c.instructions+=2;goto B4114a7;
case 0x4114a8:c.instructions+=1;goto B4114a8;
case 0x4114aa:goto L4114aa;
case 0x4114ad:c.instructions+=5;goto B4114ad;
case 0x4114af:c.instructions+=4;goto B4114af;
case 0x4114b2:c.instructions+=3;goto B4114b2;
case 0x4114b5:c.instructions+=2;goto B4114b5;
case 0x4114ba:c.instructions+=1;goto B4114ba;
case 0x4114c0:goto L4114c0;
case 0x4114c6:c.instructions+=11;goto B4114c6;
case 0x4114c9:c.instructions+=10;goto B4114c9;
case 0x4114cb:c.instructions+=9;goto B4114cb;
case 0x4114cc:c.instructions+=8;goto B4114cc;
case 0x4114d0:c.instructions+=7;goto B4114d0;
case 0x4114d6:c.instructions+=6;goto B4114d6;
case 0x4114d7:c.instructions+=5;goto B4114d7;
case 0x4114dd:c.instructions+=4;goto B4114dd;
case 0x4114e4:c.instructions+=3;goto B4114e4;
case 0x4114e5:c.instructions+=2;goto B4114e5;
case 0x4114e6:c.instructions+=1;goto B4114e6;
case 0x4114eb:goto L4114eb;
case 0x4114ed:c.instructions+=2;goto B4114ed;
case 0x4114f0:c.instructions+=1;goto B4114f0;
case 0x4114f6:goto L4114f6;
case 0x4114f9:c.instructions+=7;goto B4114f9;
case 0x4114fb:c.instructions+=6;goto B4114fb;
case 0x4114fd:c.instructions+=5;goto B4114fd;
case 0x411500:c.instructions+=4;goto B411500;
case 0x411502:c.instructions+=3;goto B411502;
case 0x411503:c.instructions+=2;goto B411503;
case 0x411504:c.instructions+=1;goto B411504;
case 0x411509:goto L411509;
case 0x41150d:c.instructions+=4;goto B41150d;
case 0x411510:c.instructions+=3;goto B411510;
case 0x411511:c.instructions+=2;goto B411511;
case 0x411512:c.instructions+=1;goto B411512;
case 0x411517:goto L411517;
case 0x41151b:c.instructions+=3;goto B41151b;
case 0x41151d:c.instructions+=2;goto B41151d;
case 0x411520:c.instructions+=1;goto B411520;
case 0x411522:goto L411522;
case 0x411526:c.instructions+=3;goto B411526;
case 0x411527:c.instructions+=2;goto B411527;
case 0x411529:c.instructions+=1;goto B411529;
case 0x41152e:goto L41152e;
case 0x411530:goto L411530;
case 0x411534:c.instructions+=3;goto B411534;
case 0x411535:c.instructions+=2;goto B411535;
case 0x411537:c.instructions+=1;goto B411537;
case 0x41153c:goto L41153c;
case 0x41153e:c.instructions+=3;goto B41153e;
case 0x411542:c.instructions+=2;goto B411542;
case 0x411544:c.instructions+=1;goto B411544;
case 0x411546:goto L411546;
case 0x41154a:c.instructions+=2;goto B41154a;
case 0x41154b:c.instructions+=1;goto B41154b;
case 0x411550:goto L411550;
case 0x411552:goto L411552;
case 0x411556:c.instructions+=2;goto B411556;
case 0x411557:c.instructions+=1;goto B411557;
case 0x41155c:goto L41155c;
case 0x411560:c.instructions+=4;goto B411560;
case 0x411566:c.instructions+=3;goto B411566;
case 0x411568:c.instructions+=2;goto B411568;
case 0x41156b:c.instructions+=1;goto B41156b;
case 0x41156d:goto L41156d;
case 0x411573:c.instructions+=3;goto B411573;
case 0x411575:c.instructions+=2;goto B411575;
case 0x411578:c.instructions+=1;goto B411578;
case 0x41157a:goto L41157a;
case 0x41157c:goto L41157c;
case 0x41157e:goto L41157e;
case 0x411585:goto L411585;
case 0x411588:c.instructions+=2;goto B411588;
case 0x41158a:c.instructions+=1;goto B41158a;
case 0x41158c:goto L41158c;
case 0x411590:c.instructions+=2;goto B411590;
case 0x411592:c.instructions+=1;goto B411592;
case 0x411594:goto L411594;
case 0x411599:goto L411599;
case 0x41159c:c.instructions+=11;goto B41159c;
case 0x4115a2:c.instructions+=10;goto B4115a2;
case 0x4115a4:c.instructions+=9;goto B4115a4;
case 0x4115a8:c.instructions+=8;goto B4115a8;
case 0x4115a9:c.instructions+=7;goto B4115a9;
case 0x4115ab:c.instructions+=6;goto B4115ab;
case 0x4115b1:c.instructions+=5;goto B4115b1;
case 0x4115b2:c.instructions+=4;goto B4115b2;
case 0x4115b3:c.instructions+=3;goto B4115b3;
case 0x4115b7:c.instructions+=2;goto B4115b7;
case 0x4115b8:c.instructions+=1;goto B4115b8;
case 0x4115bd:goto L4115bd;
case 0x4115c0:c.instructions+=2;goto B4115c0;
case 0x4115c2:c.instructions+=1;goto B4115c2;
case 0x4115c4:goto L4115c4;
case 0x4115c8:c.instructions+=2;goto B4115c8;
case 0x4115cb:c.instructions+=1;goto B4115cb;
case 0x4115cd:goto L4115cd;
case 0x4115d0:c.instructions+=9;goto B4115d0;
case 0x4115d6:c.instructions+=8;goto B4115d6;
case 0x4115d8:c.instructions+=7;goto B4115d8;
case 0x4115d9:c.instructions+=6;goto B4115d9;
case 0x4115da:c.instructions+=5;goto B4115da;
case 0x4115db:c.instructions+=4;goto B4115db;
case 0x4115df:c.instructions+=3;goto B4115df;
case 0x4115e0:c.instructions+=2;goto B4115e0;
case 0x4115e4:c.instructions+=1;goto B4115e4;
case 0x4115e9:goto L4115e9;
case 0x4115ec:c.instructions+=2;goto B4115ec;
case 0x4115ee:c.instructions+=1;goto B4115ee;
case 0x4115f0:goto L4115f0;
case 0x4115f4:c.instructions+=1;goto B4115f4;
case 0x4115f7:goto L4115f7;
case 0x4115fd:c.instructions+=10;goto B4115fd;
case 0x411600:c.instructions+=9;goto B411600;
case 0x411603:c.instructions+=8;goto B411603;
case 0x411609:c.instructions+=7;goto B411609;
case 0x41160a:c.instructions+=6;goto B41160a;
case 0x41160d:c.instructions+=5;goto B41160d;
case 0x41160e:c.instructions+=4;goto B41160e;
case 0x41160f:c.instructions+=3;goto B41160f;
case 0x411610:c.instructions+=2;goto B411610;
case 0x411613:c.instructions+=1;goto B411613;
case 0x411620:goto L411620;
case 0x411621:c.instructions+=4;goto B411621;
case 0x411624:c.instructions+=3;goto B411624;
case 0x41162a:c.instructions+=2;goto B41162a;
case 0x41162c:c.instructions+=1;goto B41162c;
case 0x41162e:goto L41162e;
case 0x411632:c.instructions+=23;goto B411632;
case 0x411634:c.instructions+=22;goto B411634;
case 0x411637:c.instructions+=21;goto B411637;
case 0x41163b:c.instructions+=20;goto B41163b;
case 0x41163f:c.instructions+=19;goto B41163f;
case 0x411643:c.instructions+=18;goto B411643;
case 0x411647:c.instructions+=17;goto B411647;
case 0x41164d:c.instructions+=16;goto B41164d;
case 0x411650:c.instructions+=15;goto B411650;
case 0x411654:c.instructions+=14;goto B411654;
case 0x411655:c.instructions+=13;goto B411655;
case 0x41165b:c.instructions+=12;goto B41165b;
case 0x41165d:c.instructions+=11;goto B41165d;
case 0x41165f:c.instructions+=10;goto B41165f;
case 0x411661:c.instructions+=9;goto B411661;
case 0x411664:c.instructions+=8;goto B411664;
case 0x411666:c.instructions+=7;goto B411666;
case 0x411669:c.instructions+=6;goto B411669;
case 0x41166b:c.instructions+=5;goto B41166b;
case 0x41166d:c.instructions+=4;goto B41166d;
case 0x411670:c.instructions+=3;goto B411670;
case 0x411672:c.instructions+=2;goto B411672;
case 0x411674:c.instructions+=1;goto B411674;
case 0x411679:goto L411679;
case 0x41167a:c.instructions+=1;goto B41167a;
case 0x411680:goto L411680;
case 0x411681:c.instructions+=2;goto B411681;
case 0x411683:c.instructions+=1;goto B411683;
case 0x411688:goto L411688;
case 0x41168d:c.instructions+=1;goto B41168d;
case 0x41168f:goto L41168f;
case 0x411690:c.instructions+=1;goto B411690;
case 0x411695:goto L411695;
case 0x411698:goto L411698;
case 0x41169a:c.instructions+=2;goto B41169a;
case 0x41169b:c.instructions+=1;goto B41169b;
case 0x4116a0:goto L4116a0;
case 0x4116a5:c.instructions+=5;goto B4116a5;
case 0x4116a7:c.instructions+=4;goto B4116a7;
case 0x4116a8:c.instructions+=3;goto B4116a8;
case 0x4116a9:c.instructions+=2;goto B4116a9;
case 0x4116ab:c.instructions+=1;goto B4116ab;
case 0x4116ad:goto L4116ad;
case 0x4116b2:c.instructions+=2;goto B4116b2;
case 0x4116b4:c.instructions+=1;goto B4116b4;
case 0x4116b6:goto L4116b6;
case 0x4116ba:c.instructions+=2;goto B4116ba;
case 0x4116bc:c.instructions+=1;goto B4116bc;
case 0x4116be:goto L4116be;
case 0x4116c4:c.instructions+=9;goto B4116c4;
case 0x4116c7:c.instructions+=8;goto B4116c7;
case 0x4116cc:c.instructions+=7;goto B4116cc;
case 0x4116d1:c.instructions+=6;goto B4116d1;
case 0x4116d2:c.instructions+=5;goto B4116d2;
case 0x4116d3:c.instructions+=4;goto B4116d3;
case 0x4116d6:c.instructions+=3;goto B4116d6;
case 0x4116d7:c.instructions+=2;goto B4116d7;
case 0x4116d8:c.instructions+=1;goto B4116d8;
case 0x4116dd:goto L4116dd;
case 0x4116e0:c.instructions+=2;goto B4116e0;
case 0x4116e3:c.instructions+=1;goto B4116e3;
case 0x4116e5:goto L4116e5;
case 0x4116e8:c.instructions+=4;goto B4116e8;
case 0x4116ed:c.instructions+=3;goto B4116ed;
case 0x4116f3:c.instructions+=2;goto B4116f3;
case 0x4116f5:c.instructions+=1;goto B4116f5;
case 0x4116f7:goto L4116f7;
case 0x4116fd:goto L4116fd;
case 0x411700:c.instructions+=3;goto B411700;
case 0x411703:c.instructions+=2;goto B411703;
case 0x411706:c.instructions+=1;goto B411706;
case 0x41170b:goto L41170b;
case 0x41170d:goto L41170d;
case 0x41170e:c.instructions+=2;goto B41170e;
case 0x41170f:c.instructions+=1;goto B41170f;
case 0x411720:goto L411720;
case 0x411724:c.instructions+=7;goto B411724;
case 0x411727:c.instructions+=6;goto B411727;
case 0x41172a:c.instructions+=5;goto B41172a;
case 0x41172d:c.instructions+=4;goto B41172d;
case 0x411730:c.instructions+=3;goto B411730;
case 0x411732:c.instructions+=2;goto B411732;
case 0x411735:c.instructions+=1;goto B411735;
case 0x411740:goto L411740;
case 0x411741:c.instructions+=6;goto B411741;
case 0x411743:c.instructions+=5;goto B411743;
case 0x411744:c.instructions+=4;goto B411744;
case 0x41174a:c.instructions+=3;goto B41174a;
case 0x41174c:c.instructions+=2;goto B41174c;
case 0x411752:c.instructions+=1;goto B411752;
case 0x411754:goto L411754;
case 0x411756:c.instructions+=1;goto B411756;
case 0x41175b:goto L41175b;
case 0x41175c:c.instructions+=1;goto B41175c;
case 0x411761:goto L411761;
case 0x411764:goto L411764;
case 0x411767:c.instructions+=2;goto B411767;
case 0x41176c:c.instructions+=1;goto B41176c;
case 0x411770:goto L411770;
case 0x411772:c.instructions+=2;goto B411772;
case 0x411774:c.instructions+=1;goto B411774;
case 0x411776:goto L411776;
case 0x411778:c.instructions+=2;goto B411778;
case 0x41177a:c.instructions+=1;goto B41177a;
case 0x41177c:goto L41177c;
case 0x41177f:c.instructions+=2;goto B41177f;
case 0x411780:c.instructions+=1;goto B411780;
case 0x411782:goto L411782;
case 0x411783:c.instructions+=2;goto B411783;
case 0x411784:c.instructions+=1;goto B411784;
case 0x411790:goto L411790;
case 0x411796:c.instructions+=12;goto B411796;
case 0x411797:c.instructions+=11;goto B411797;
case 0x411798:c.instructions+=10;goto B411798;
case 0x411799:c.instructions+=9;goto B411799;
case 0x4117a0:c.instructions+=8;goto B4117a0;
case 0x4117a1:c.instructions+=7;goto B4117a1;
case 0x4117a3:c.instructions+=6;goto B4117a3;
case 0x4117a8:c.instructions+=5;goto B4117a8;
case 0x4117aa:c.instructions+=4;goto B4117aa;
case 0x4117ab:c.instructions+=3;goto B4117ab;
case 0x4117ad:c.instructions+=2;goto B4117ad;
case 0x4117b1:c.instructions+=1;goto B4117b1;
case 0x4117b6:goto L4117b6;
case 0x4117b9:c.instructions+=2;goto B4117b9;
case 0x4117bc:c.instructions+=1;goto B4117bc;
case 0x4117be:goto L4117be;
case 0x4117c4:c.instructions+=2;goto B4117c4;
case 0x4117c6:c.instructions+=1;goto B4117c6;
case 0x4117c8:goto L4117c8;
case 0x4117c9:c.instructions+=1;goto B4117c9;
case 0x4117ce:goto L4117ce;
case 0x4117d0:c.instructions+=6;goto B4117d0;
case 0x4117d2:c.instructions+=5;goto B4117d2;
case 0x4117d4:c.instructions+=4;goto B4117d4;
case 0x4117da:c.instructions+=3;goto B4117da;
case 0x4117db:c.instructions+=2;goto B4117db;
case 0x4117dd:c.instructions+=1;goto B4117dd;
case 0x4117e2:goto L4117e2;
case 0x4117e3:c.instructions+=6;goto B4117e3;
case 0x4117e5:c.instructions+=5;goto B4117e5;
case 0x4117e7:c.instructions+=4;goto B4117e7;
case 0x4117ed:c.instructions+=3;goto B4117ed;
case 0x4117ee:c.instructions+=2;goto B4117ee;
case 0x4117f0:c.instructions+=1;goto B4117f0;
case 0x4117f5:goto L4117f5;
case 0x4117f7:c.instructions+=6;goto B4117f7;
case 0x4117f9:c.instructions+=5;goto B4117f9;
case 0x4117fb:c.instructions+=4;goto B4117fb;
case 0x411801:c.instructions+=3;goto B411801;
case 0x411802:c.instructions+=2;goto B411802;
case 0x411804:c.instructions+=1;goto B411804;
case 0x411809:goto L411809;
case 0x41180b:c.instructions+=6;goto B41180b;
case 0x41180d:c.instructions+=5;goto B41180d;
case 0x41180f:c.instructions+=4;goto B41180f;
case 0x411812:c.instructions+=3;goto B411812;
case 0x411813:c.instructions+=2;goto B411813;
case 0x411815:c.instructions+=1;goto B411815;
case 0x41181a:goto L41181a;
case 0x411820:c.instructions+=3;goto B411820;
case 0x411821:c.instructions+=2;goto B411821;
case 0x411823:c.instructions+=1;goto B411823;
case 0x411828:goto L411828;
case 0x41182e:c.instructions+=3;goto B41182e;
case 0x41182f:c.instructions+=2;goto B41182f;
case 0x411831:c.instructions+=1;goto B411831;
case 0x411836:goto L411836;
case 0x411837:c.instructions+=6;goto B411837;
case 0x411839:c.instructions+=5;goto B411839;
case 0x41183b:c.instructions+=4;goto B41183b;
case 0x411841:c.instructions+=3;goto B411841;
case 0x411842:c.instructions+=2;goto B411842;
case 0x411844:c.instructions+=1;goto B411844;
case 0x411849:goto L411849;
case 0x41184a:c.instructions+=6;goto B41184a;
case 0x41184c:c.instructions+=5;goto B41184c;
case 0x41184e:c.instructions+=4;goto B41184e;
case 0x411854:c.instructions+=3;goto B411854;
case 0x411855:c.instructions+=2;goto B411855;
case 0x411857:c.instructions+=1;goto B411857;
case 0x41185c:goto L41185c;
case 0x411862:c.instructions+=3;goto B411862;
case 0x411863:c.instructions+=2;goto B411863;
case 0x411865:c.instructions+=1;goto B411865;
case 0x41186a:goto L41186a;
case 0x41186c:c.instructions+=2;goto B41186c;
case 0x411870:c.instructions+=1;goto B411870;
case 0x411872:goto L411872;
case 0x411875:c.instructions+=3;goto B411875;
case 0x411879:c.instructions+=2;goto B411879;
case 0x41187d:c.instructions+=1;goto B41187d;
case 0x411880:goto L411880;
case 0x411883:c.instructions+=2;goto B411883;
case 0x411885:c.instructions+=1;goto B411885;
case 0x411887:goto L411887;
case 0x41188b:c.instructions+=3;goto B41188b;
case 0x41188d:c.instructions+=2;goto B41188d;
case 0x41188f:c.instructions+=1;goto B41188f;
case 0x411892:goto L411892;
case 0x411895:goto L411895;
case 0x411897:c.instructions+=5;goto B411897;
case 0x411899:c.instructions+=4;goto B411899;
case 0x41189b:c.instructions+=3;goto B41189b;
case 0x41189c:c.instructions+=2;goto B41189c;
case 0x41189e:c.instructions+=1;goto B41189e;
case 0x4118a3:goto L4118a3;
case 0x4118a7:c.instructions+=9;goto B4118a7;
case 0x4118ab:c.instructions+=8;goto B4118ab;
case 0x4118ae:c.instructions+=7;goto B4118ae;
case 0x4118af:c.instructions+=6;goto B4118af;
case 0x4118b3:c.instructions+=5;goto B4118b3;
case 0x4118b5:c.instructions+=4;goto B4118b5;
case 0x4118b8:c.instructions+=3;goto B4118b8;
case 0x4118ba:c.instructions+=2;goto B4118ba;
case 0x4118be:c.instructions+=1;goto B4118be;
case 0x4118c0:goto L4118c0;
case 0x4118c2:goto L4118c2;
case 0x4118c5:c.instructions+=2;goto B4118c5;
case 0x4118c7:c.instructions+=1;goto B4118c7;
case 0x4118cd:goto L4118cd;
case 0x4118cf:c.instructions+=5;goto B4118cf;
case 0x4118d1:c.instructions+=4;goto B4118d1;
case 0x4118d5:c.instructions+=3;goto B4118d5;
case 0x4118d7:c.instructions+=2;goto B4118d7;
case 0x4118db:c.instructions+=1;goto B4118db;
case 0x4118e1:goto L4118e1;
case 0x4118e5:c.instructions+=2;goto B4118e5;
case 0x4118e9:c.instructions+=1;goto B4118e9;
case 0x4118eb:goto L4118eb;
case 0x4118f1:c.instructions+=2;goto B4118f1;
case 0x4118f2:c.instructions+=1;goto B4118f2;
case 0x4118f7:goto L4118f7;
case 0x4118f9:c.instructions+=3;goto B4118f9;
case 0x4118fc:c.instructions+=2;goto B4118fc;
case 0x4118fe:c.instructions+=1;goto B4118fe;
case 0x411900:goto L411900;
case 0x411906:c.instructions+=5;goto B411906;
case 0x411909:c.instructions+=4;goto B411909;
case 0x41190c:c.instructions+=3;goto B41190c;
case 0x41190f:c.instructions+=2;goto B41190f;
case 0x411912:c.instructions+=1;goto B411912;
case 0x411917:goto L411917;
case 0x41191d:c.instructions+=1;goto B41191d;
case 0x41191f:goto L41191f;
case 0x411925:c.instructions+=2;goto B411925;
case 0x411926:c.instructions+=1;goto B411926;
case 0x41192b:goto L41192b;
case 0x41192d:c.instructions+=3;goto B41192d;
case 0x411930:c.instructions+=2;goto B411930;
case 0x411932:c.instructions+=1;goto B411932;
case 0x411934:goto L411934;
case 0x41193a:c.instructions+=5;goto B41193a;
case 0x41193d:c.instructions+=4;goto B41193d;
case 0x411940:c.instructions+=3;goto B411940;
case 0x411943:c.instructions+=2;goto B411943;
case 0x411946:c.instructions+=1;goto B411946;
case 0x41194b:goto L41194b;
case 0x411951:c.instructions+=1;goto B411951;
case 0x411953:goto L411953;
case 0x411955:goto L411955;
case 0x411957:c.instructions+=2;goto B411957;
case 0x41195a:c.instructions+=1;goto B41195a;
case 0x41195c:goto L41195c;
case 0x411960:c.instructions+=3;goto B411960;
case 0x411962:c.instructions+=2;goto B411962;
case 0x411964:c.instructions+=1;goto B411964;
case 0x411966:goto L411966;
case 0x41196a:c.instructions+=6;goto B41196a;
case 0x41196e:c.instructions+=5;goto B41196e;
case 0x411971:c.instructions+=4;goto B411971;
case 0x411973:c.instructions+=3;goto B411973;
case 0x411977:c.instructions+=2;goto B411977;
case 0x41197b:c.instructions+=1;goto B41197b;
case 0x41197e:goto L41197e;
case 0x411980:c.instructions+=1;goto B411980;
case 0x411982:goto L411982;
case 0x411984:c.instructions+=1;goto B411984;
case 0x411986:goto L411986;
case 0x411988:c.instructions+=2;goto B411988;
case 0x41198a:c.instructions+=1;goto B41198a;
case 0x41198c:goto L41198c;
case 0x411990:c.instructions+=5;goto B411990;
case 0x411994:c.instructions+=4;goto B411994;
case 0x411995:c.instructions+=3;goto B411995;
case 0x411997:c.instructions+=2;goto B411997;
case 0x41199b:c.instructions+=1;goto B41199b;
case 0x4119a1:goto L4119a1;
case 0x4119a4:c.instructions+=1;goto B4119a4;
case 0x4119a6:goto L4119a6;
case 0x4119a9:c.instructions+=2;goto B4119a9;
case 0x4119ad:c.instructions+=1;goto B4119ad;
case 0x4119b0:goto L4119b0;
case 0x4119b4:c.instructions+=3;goto B4119b4;
case 0x4119b6:c.instructions+=2;goto B4119b6;
case 0x4119b7:c.instructions+=1;goto B4119b7;
case 0x4119bc:goto L4119bc;
case 0x4119c0:c.instructions+=6;goto B4119c0;
case 0x4119c2:c.instructions+=5;goto B4119c2;
case 0x4119c3:c.instructions+=4;goto B4119c3;
case 0x4119c6:c.instructions+=3;goto B4119c6;
case 0x4119c8:c.instructions+=2;goto B4119c8;
case 0x4119cc:c.instructions+=1;goto B4119cc;
case 0x4119ce:goto L4119ce;
case 0x4119d4:c.instructions+=3;goto B4119d4;
case 0x4119d5:c.instructions+=2;goto B4119d5;
case 0x4119d7:c.instructions+=1;goto B4119d7;
case 0x4119dc:goto L4119dc;
case 0x4119e2:c.instructions+=1;goto B4119e2;
case 0x4119e7:goto L4119e7;
case 0x4119e8:c.instructions+=2;goto B4119e8;
case 0x4119ea:c.instructions+=1;goto B4119ea;
case 0x4119ef:goto L4119ef;
case 0x4119f2:c.instructions+=2;goto B4119f2;
case 0x4119f3:c.instructions+=1;goto B4119f3;
case 0x4119f5:goto L4119f5;
case 0x4119f7:c.instructions+=6;goto B4119f7;
case 0x4119f9:c.instructions+=5;goto B4119f9;
case 0x4119fb:c.instructions+=4;goto B4119fb;
case 0x411a01:c.instructions+=3;goto B411a01;
case 0x411a02:c.instructions+=2;goto B411a02;
case 0x411a04:c.instructions+=1;goto B411a04;
case 0x411a09:goto L411a09;
case 0x411a0c:c.instructions+=2;goto B411a0c;
case 0x411a14:c.instructions+=1;goto B411a14;
case 0x411a1a:goto L411a1a;
case 0x411a22:c.instructions+=2;goto B411a22;
case 0x411a28:c.instructions+=1;goto B411a28;
case 0x411a2a:goto L411a2a;
case 0x411a2e:c.instructions+=1;goto B411a2e;
case 0x411a30:goto L411a30;
case 0x411a33:c.instructions+=3;goto B411a33;
case 0x411a37:c.instructions+=2;goto B411a37;
case 0x411a39:c.instructions+=1;goto B411a39;
case 0x411a41:goto L411a41;
case 0x411a43:c.instructions+=5;goto B411a43;
case 0x411a45:c.instructions+=4;goto B411a45;
case 0x411a47:c.instructions+=3;goto B411a47;
case 0x411a48:c.instructions+=2;goto B411a48;
case 0x411a4a:c.instructions+=1;goto B411a4a;
case 0x411a4f:goto L411a4f;
case 0x411a53:c.instructions+=3;goto B411a53;
case 0x411a54:c.instructions+=2;goto B411a54;
case 0x411a56:c.instructions+=1;goto B411a56;
case 0x411a5b:goto L411a5b;
case 0x411a5f:c.instructions+=7;goto B411a5f;
case 0x411a63:c.instructions+=6;goto B411a63;
case 0x411a66:c.instructions+=5;goto B411a66;
case 0x411a69:c.instructions+=4;goto B411a69;
case 0x411a6a:c.instructions+=3;goto B411a6a;
case 0x411a6e:c.instructions+=2;goto B411a6e;
case 0x411a72:c.instructions+=1;goto B411a72;
case 0x411a74:goto L411a74;
case 0x411a77:c.instructions+=2;goto B411a77;
case 0x411a7f:c.instructions+=1;goto B411a7f;
case 0x411a80:goto L411a80;
case 0x411a83:c.instructions+=3;goto B411a83;
case 0x411a84:c.instructions+=2;goto B411a84;
case 0x411a86:c.instructions+=1;goto B411a86;
case 0x411a8b:goto L411a8b;
case 0x411a8c:c.instructions+=2;goto B411a8c;
case 0x411a8e:c.instructions+=1;goto B411a8e;
case 0x411a93:goto L411a93;
case 0x411a97:c.instructions+=4;goto B411a97;
case 0x411a98:c.instructions+=3;goto B411a98;
case 0x411a99:c.instructions+=2;goto B411a99;
case 0x411a9d:c.instructions+=1;goto B411a9d;
case 0x411a9f:goto L411a9f;
case 0x411aa3:c.instructions+=4;goto B411aa3;
case 0x411aa6:c.instructions+=3;goto B411aa6;
case 0x411aa7:c.instructions+=2;goto B411aa7;
case 0x411aa9:c.instructions+=1;goto B411aa9;
case 0x411aae:goto L411aae;
case 0x411ab1:c.instructions+=3;goto B411ab1;
case 0x411ab4:c.instructions+=2;goto B411ab4;
case 0x411abc:c.instructions+=1;goto B411abc;
case 0x411ac0:goto L411ac0;
case 0x411ac2:c.instructions+=5;goto B411ac2;
case 0x411ac4:c.instructions+=4;goto B411ac4;
case 0x411ac6:c.instructions+=3;goto B411ac6;
case 0x411ac7:c.instructions+=2;goto B411ac7;
case 0x411ac9:c.instructions+=1;goto B411ac9;
case 0x411ace:goto L411ace;
case 0x411acf:c.instructions+=2;goto B411acf;
case 0x411ad1:c.instructions+=1;goto B411ad1;
case 0x411ad6:goto L411ad6;
case 0x411ada:c.instructions+=5;goto B411ada;
case 0x411add:c.instructions+=4;goto B411add;
case 0x411ae0:c.instructions+=3;goto B411ae0;
case 0x411ae1:c.instructions+=2;goto B411ae1;
case 0x411ae5:c.instructions+=1;goto B411ae5;
case 0x411ae7:goto L411ae7;
case 0x411aea:c.instructions+=3;goto B411aea;
case 0x411aeb:c.instructions+=2;goto B411aeb;
case 0x411aed:c.instructions+=1;goto B411aed;
case 0x411af2:goto L411af2;
case 0x411af5:c.instructions+=3;goto B411af5;
case 0x411af6:c.instructions+=2;goto B411af6;
case 0x411af8:c.instructions+=1;goto B411af8;
case 0x411afd:goto L411afd;
case 0x411b00:c.instructions+=3;goto B411b00;
case 0x411b01:c.instructions+=2;goto B411b01;
case 0x411b03:c.instructions+=1;goto B411b03;
case 0x411b08:goto L411b08;
case 0x411b0c:c.instructions+=11;goto B411b0c;
case 0x411b10:c.instructions+=10;goto B411b10;
case 0x411b14:c.instructions+=9;goto B411b14;
case 0x411b1a:c.instructions+=8;goto B411b1a;
case 0x411b20:c.instructions+=7;goto B411b20;
case 0x411b21:c.instructions+=6;goto B411b21;
case 0x411b24:c.instructions+=5;goto B411b24;
case 0x411b2a:c.instructions+=4;goto B411b2a;
case 0x411b2c:c.instructions+=3;goto B411b2c;
case 0x411b30:c.instructions+=2;goto B411b30;
case 0x411b34:c.instructions+=1;goto B411b34;
case 0x411b3a:goto L411b3a;
case 0x411b3c:c.instructions+=1;goto B411b3c;
case 0x411b41:goto L411b41;
case 0x411b42:c.instructions+=5;goto B411b42;
case 0x411b43:c.instructions+=4;goto B411b43;
case 0x411b44:c.instructions+=3;goto B411b44;
case 0x411b45:c.instructions+=2;goto B411b45;
case 0x411b4b:c.instructions+=1;goto B411b4b;
case 0x411b50:goto L411b50;
case 0x411b54:c.instructions+=6;goto B411b54;
case 0x411b55:c.instructions+=5;goto B411b55;
case 0x411b57:c.instructions+=4;goto B411b57;
case 0x411b59:c.instructions+=3;goto B411b59;
case 0x411b5a:c.instructions+=2;goto B411b5a;
case 0x411b5c:c.instructions+=1;goto B411b5c;
case 0x411b5e:goto L411b5e;
case 0x411b63:c.instructions+=2;goto B411b63;
case 0x411b64:c.instructions+=1;goto B411b64;
case 0x411b69:goto L411b69;
case 0x411b6b:c.instructions+=3;goto B411b6b;
case 0x411b6e:c.instructions+=2;goto B411b6e;
case 0x411b70:c.instructions+=1;goto B411b70;
case 0x411b72:goto L411b72;
case 0x411b78:c.instructions+=5;goto B411b78;
case 0x411b7b:c.instructions+=4;goto B411b7b;
case 0x411b7e:c.instructions+=3;goto B411b7e;
case 0x411b81:c.instructions+=2;goto B411b81;
case 0x411b84:c.instructions+=1;goto B411b84;
case 0x411b89:goto L411b89;
case 0x411b8a:c.instructions+=4;goto B411b8a;
case 0x411b90:c.instructions+=3;goto B411b90;
case 0x411b92:c.instructions+=2;goto B411b92;
case 0x411b93:c.instructions+=1;goto B411b93;
case 0x411b96:goto L411b96;
case 0x411b9c:c.instructions+=2;goto B411b9c;
case 0x411b9d:c.instructions+=1;goto B411b9d;
case 0x411ba2:goto L411ba2;
case 0x411ba4:c.instructions+=3;goto B411ba4;
case 0x411ba7:c.instructions+=2;goto B411ba7;
case 0x411ba9:c.instructions+=1;goto B411ba9;
case 0x411bab:goto L411bab;
case 0x411bb1:c.instructions+=5;goto B411bb1;
case 0x411bb4:c.instructions+=4;goto B411bb4;
case 0x411bb7:c.instructions+=3;goto B411bb7;
case 0x411bba:c.instructions+=2;goto B411bba;
case 0x411bbd:c.instructions+=1;goto B411bbd;
case 0x411bc2:goto L411bc2;
case 0x411bc3:c.instructions+=4;goto B411bc3;
case 0x411bc9:c.instructions+=3;goto B411bc9;
case 0x411bcb:c.instructions+=2;goto B411bcb;
case 0x411bcc:c.instructions+=1;goto B411bcc;
case 0x411bcf:goto L411bcf;
case 0x411bd0:c.instructions+=3;goto B411bd0;
case 0x411bd2:c.instructions+=2;goto B411bd2;
case 0x411bd3:c.instructions+=1;goto B411bd3;
case 0x411be0:goto L411be0;
case 0x411be1:c.instructions+=11;goto B411be1;
case 0x411be2:c.instructions+=10;goto B411be2;
case 0x411be4:c.instructions+=9;goto B411be4;
case 0x411bea:c.instructions+=8;goto B411bea;
case 0x411bec:c.instructions+=7;goto B411bec;
case 0x411bed:c.instructions+=6;goto B411bed;
case 0x411bf4:c.instructions+=5;goto B411bf4;
case 0x411bfb:c.instructions+=4;goto B411bfb;
case 0x411c02:c.instructions+=3;goto B411c02;
case 0x411c0c:c.instructions+=2;goto B411c0c;
case 0x411c16:c.instructions+=1;goto B411c16;
case 0x411c18:goto L411c18;
case 0x411c1a:c.instructions+=1;goto B411c1a;
case 0x411c1f:goto L411c1f;
case 0x411c22:c.instructions+=1;goto B411c22;
case 0x411c27:goto L411c27;
case 0x411c29:c.instructions+=2;goto B411c29;
case 0x411c2b:c.instructions+=1;goto B411c2b;
case 0x411c2d:goto L411c2d;
case 0x411c2f:c.instructions+=2;goto B411c2f;
case 0x411c31:c.instructions+=1;goto B411c31;
case 0x411c33:goto L411c33;
case 0x411c39:goto L411c39;
case 0x411c3c:c.instructions+=2;goto B411c3c;
case 0x411c3d:c.instructions+=1;goto B411c3d;
case 0x411c3f:goto L411c3f;
case 0x411c42:c.instructions+=14;goto B411c42;
case 0x411c48:c.instructions+=13;goto B411c48;
case 0x411c4e:c.instructions+=12;goto B411c4e;
case 0x411c55:c.instructions+=11;goto B411c55;
case 0x411c5b:c.instructions+=10;goto B411c5b;
case 0x411c65:c.instructions+=9;goto B411c65;
case 0x411c6a:c.instructions+=8;goto B411c6a;
case 0x411c6c:c.instructions+=7;goto B411c6c;
case 0x411c6f:c.instructions+=6;goto B411c6f;
case 0x411c70:c.instructions+=5;goto B411c70;
case 0x411c73:c.instructions+=4;goto B411c73;
case 0x411c74:c.instructions+=3;goto B411c74;
case 0x411c77:c.instructions+=2;goto B411c77;
case 0x411c78:c.instructions+=1;goto B411c78;
case 0x411c80:goto L411c80;
case 0x411c81:c.instructions+=8;goto B411c81;
case 0x411c82:c.instructions+=7;goto B411c82;
case 0x411c84:c.instructions+=6;goto B411c84;
case 0x411c88:c.instructions+=5;goto B411c88;
case 0x411c89:c.instructions+=4;goto B411c89;
case 0x411c8c:c.instructions+=3;goto B411c8c;
case 0x411c8e:c.instructions+=2;goto B411c8e;
case 0x411c8f:c.instructions+=1;goto B411c8f;
case 0x411c91:goto L411c91;
case 0x411c94:c.instructions+=3;goto B411c94;
case 0x411c96:c.instructions+=2;goto B411c96;
case 0x411c98:c.instructions+=1;goto B411c98;
case 0x411c9a:goto L411c9a;
case 0x411c9d:c.instructions+=1;goto B411c9d;
case 0x411ca0:goto L411ca0;
case 0x411ca3:c.instructions+=4;goto B411ca3;
case 0x411ca5:c.instructions+=3;goto B411ca5;
case 0x411caa:c.instructions+=2;goto B411caa;
case 0x411cae:c.instructions+=1;goto B411cae;
case 0x411cb0:goto L411cb0;
case 0x411cb5:goto L411cb5;
case 0x411cb9:c.instructions+=2;goto B411cb9;
case 0x411cbb:c.instructions+=1;goto B411cbb;
case 0x411cbd:goto L411cbd;
case 0x411cc1:goto L411cc1;
case 0x411cc4:c.instructions+=4;goto B411cc4;
case 0x411cc5:c.instructions+=3;goto B411cc5;
case 0x411cc8:c.instructions+=2;goto B411cc8;
case 0x411cca:c.instructions+=1;goto B411cca;
case 0x411ccc:goto L411ccc;
case 0x411ccd:c.instructions+=5;goto B411ccd;
case 0x411cce:c.instructions+=4;goto B411cce;
case 0x411ccf:c.instructions+=3;goto B411ccf;
case 0x411cd2:c.instructions+=2;goto B411cd2;
case 0x411cd3:c.instructions+=1;goto B411cd3;
case 0x411cd6:goto L411cd6;
case 0x411cd8:goto L411cd8;
case 0x411cd9:c.instructions+=4;goto B411cd9;
case 0x411cda:c.instructions+=3;goto B411cda;
case 0x411cdb:c.instructions+=2;goto B411cdb;
case 0x411cdc:c.instructions+=1;goto B411cdc;
case 0x411ce0:goto L411ce0;
case 0x411ce4:c.instructions+=7;goto B411ce4;
case 0x411ce5:c.instructions+=6;goto B411ce5;
case 0x411ce6:c.instructions+=5;goto B411ce6;
case 0x411ce7:c.instructions+=4;goto B411ce7;
case 0x411ce9:c.instructions+=3;goto B411ce9;
case 0x411cec:c.instructions+=2;goto B411cec;
case 0x411cef:c.instructions+=1;goto B411cef;
case 0x411cf4:goto L411cf4;
case 0x411cf8:c.instructions+=3;goto B411cf8;
case 0x411cfc:c.instructions+=2;goto B411cfc;
case 0x411d00:c.instructions+=1;goto B411d00;
case 0x411d02:goto L411d02;
case 0x411d07:c.instructions+=1;goto B411d07;
case 0x411d09:goto L411d09;
case 0x411d0c:c.instructions+=2;goto B411d0c;
case 0x411d0e:c.instructions+=1;goto B411d0e;
case 0x411d10:goto L411d10;
case 0x411d17:c.instructions+=1;goto B411d17;
case 0x411d19:goto L411d19;
case 0x411d1b:goto L411d1b;
case 0x411d1d:c.instructions+=2;goto B411d1d;
case 0x411d1f:c.instructions+=1;goto B411d1f;
case 0x411d22:goto L411d22;
case 0x411d25:c.instructions+=6;goto B411d25;
case 0x411d27:c.instructions+=5;goto B411d27;
case 0x411d29:c.instructions+=4;goto B411d29;
case 0x411d2b:c.instructions+=3;goto B411d2b;
case 0x411d2d:c.instructions+=2;goto B411d2d;
case 0x411d2f:c.instructions+=1;goto B411d2f;
case 0x411d31:goto L411d31;
case 0x411d34:c.instructions+=1;goto B411d34;
case 0x411d36:goto L411d36;
case 0x411d3c:goto L411d3c;
case 0x411d3e:c.instructions+=5;goto B411d3e;
case 0x411d40:c.instructions+=4;goto B411d40;
case 0x411d43:c.instructions+=3;goto B411d43;
case 0x411d47:c.instructions+=2;goto B411d47;
case 0x411d49:c.instructions+=1;goto B411d49;
case 0x411d4b:goto L411d4b;
case 0x411d4f:c.instructions+=2;goto B411d4f;
case 0x411d51:c.instructions+=1;goto B411d51;
case 0x411d53:goto L411d53;
case 0x411d59:c.instructions+=4;goto B411d59;
case 0x411d5b:c.instructions+=3;goto B411d5b;
case 0x411d5d:c.instructions+=2;goto B411d5d;
case 0x411d60:c.instructions+=1;goto B411d60;
case 0x411d62:goto L411d62;
case 0x411d64:c.instructions+=1;goto B411d64;
case 0x411d66:goto L411d66;
case 0x411d6c:goto L411d6c;
case 0x411d72:c.instructions+=3;goto B411d72;
case 0x411d77:c.instructions+=2;goto B411d77;
case 0x411d7c:c.instructions+=1;goto B411d7c;
case 0x411d80:goto L411d80;
case 0x411d82:c.instructions+=1;goto B411d82;
case 0x411d84:goto L411d84;
case 0x411d86:c.instructions+=1;goto B411d86;
case 0x411d88:goto L411d88;
case 0x411d8b:c.instructions+=1;goto B411d8b;
case 0x411d8d:goto L411d8d;
case 0x411d90:c.instructions+=1;goto B411d90;
case 0x411d92:goto L411d92;
case 0x411d95:c.instructions+=1;goto B411d95;
case 0x411d97:goto L411d97;
case 0x411d9a:c.instructions+=2;goto B411d9a;
case 0x411d9d:c.instructions+=1;goto B411d9d;
case 0x411d9f:goto L411d9f;
case 0x411da1:goto L411da1;
case 0x411da9:c.instructions+=1;goto B411da9;
case 0x411dab:goto L411dab;
case 0x411dad:c.instructions+=4;goto B411dad;
case 0x411daf:c.instructions+=3;goto B411daf;
case 0x411db1:c.instructions+=2;goto B411db1;
case 0x411db4:c.instructions+=1;goto B411db4;
case 0x411db6:goto L411db6;
case 0x411db8:c.instructions+=1;goto B411db8;
case 0x411dba:goto L411dba;
case 0x411dbc:goto L411dbc;
case 0x411dbf:c.instructions+=3;goto B411dbf;
case 0x411dc0:c.instructions+=2;goto B411dc0;
case 0x411dc1:c.instructions+=1;goto B411dc1;
case 0x411dc3:goto L411dc3;
case 0x411dc4:c.instructions+=4;goto B411dc4;
case 0x411dc6:c.instructions+=3;goto B411dc6;
case 0x411dc7:c.instructions+=2;goto B411dc7;
case 0x411dc8:c.instructions+=1;goto B411dc8;
case 0x411dd0:goto L411dd0;
case 0x411dd1:c.instructions+=8;goto B411dd1;
case 0x411dd5:c.instructions+=7;goto B411dd5;
case 0x411dd6:c.instructions+=6;goto B411dd6;
case 0x411dd8:c.instructions+=5;goto B411dd8;
case 0x411dda:c.instructions+=4;goto B411dda;
case 0x411ddc:c.instructions+=3;goto B411ddc;
case 0x411ddd:c.instructions+=2;goto B411ddd;
case 0x411ddf:c.instructions+=1;goto B411ddf;
case 0x411de4:goto L411de4;
case 0x411de7:c.instructions+=1;goto B411de7;
case 0x411de9:goto L411de9;
case 0x411dec:c.instructions+=2;goto B411dec;
case 0x411dee:c.instructions+=1;goto B411dee;
case 0x411df0:goto L411df0;
case 0x411df4:c.instructions+=3;goto B411df4;
case 0x411df8:c.instructions+=2;goto B411df8;
case 0x411dfa:c.instructions+=1;goto B411dfa;
case 0x411dfc:goto L411dfc;
case 0x411dff:c.instructions+=1;goto B411dff;
case 0x411e01:goto L411e01;
case 0x411e04:c.instructions+=3;goto B411e04;
case 0x411e05:c.instructions+=2;goto B411e05;
case 0x411e06:c.instructions+=1;goto B411e06;
case 0x411e09:goto L411e09;
case 0x411e0c:c.instructions+=1;goto B411e0c;
case 0x411e0e:goto L411e0e;
case 0x411e11:c.instructions+=1;goto B411e11;
case 0x411e13:goto L411e13;
case 0x411e17:c.instructions+=3;goto B411e17;
case 0x411e18:c.instructions+=2;goto B411e18;
case 0x411e19:c.instructions+=1;goto B411e19;
case 0x411e1c:goto L411e1c;
case 0x411e22:c.instructions+=3;goto B411e22;
case 0x411e23:c.instructions+=2;goto B411e23;
case 0x411e24:c.instructions+=1;goto B411e24;
case 0x411e27:goto L411e27;
case 0x411e2d:c.instructions+=3;goto B411e2d;
case 0x411e2e:c.instructions+=2;goto B411e2e;
case 0x411e2f:c.instructions+=1;goto B411e2f;
case 0x411e32:goto L411e32;
case 0x411e33:c.instructions+=6;goto B411e33;
case 0x411e34:c.instructions+=5;goto B411e34;
case 0x411e38:c.instructions+=4;goto B411e38;
case 0x411e3c:c.instructions+=3;goto B411e3c;
case 0x411e40:c.instructions+=2;goto B411e40;
case 0x411e41:c.instructions+=1;goto B411e41;
case 0x411e43:goto L411e43;
case 0x411e47:c.instructions+=2;goto B411e47;
case 0x411e4b:c.instructions+=1;goto B411e4b;
case 0x411e4d:goto L411e4d;
case 0x411e50:c.instructions+=2;goto B411e50;
case 0x411e52:c.instructions+=1;goto B411e52;
case 0x411e54:goto L411e54;
case 0x411e5b:c.instructions+=1;goto B411e5b;
case 0x411e5d:goto L411e5d;
case 0x411e5f:goto L411e5f;
case 0x411e62:c.instructions+=4;goto B411e62;
case 0x411e65:c.instructions+=3;goto B411e65;
case 0x411e6c:c.instructions+=2;goto B411e6c;
case 0x411e70:c.instructions+=1;goto B411e70;
case 0x411e72:goto L411e72;
case 0x411e7a:goto L411e7a;
case 0x411e7d:c.instructions+=3;goto B411e7d;
case 0x411e80:c.instructions+=2;goto B411e80;
case 0x411e82:c.instructions+=1;goto B411e82;
case 0x411e84:goto L411e84;
case 0x411e88:c.instructions+=1;goto B411e88;
case 0x411e90:goto L411e90;
case 0x411e92:c.instructions+=3;goto B411e92;
case 0x411e96:c.instructions+=2;goto B411e96;
case 0x411e9a:c.instructions+=1;goto B411e9a;
case 0x411e9c:goto L411e9c;
case 0x411ea0:c.instructions+=2;goto B411ea0;
case 0x411ea4:c.instructions+=1;goto B411ea4;
case 0x411ea6:goto L411ea6;
case 0x411ea9:c.instructions+=2;goto B411ea9;
case 0x411eab:c.instructions+=1;goto B411eab;
case 0x411ead:goto L411ead;
case 0x411eb4:c.instructions+=4;goto B411eb4;
case 0x411eb7:c.instructions+=3;goto B411eb7;
case 0x411eba:c.instructions+=2;goto B411eba;
case 0x411ec1:c.instructions+=1;goto B411ec1;
case 0x411ec3:goto L411ec3;
case 0x411ec6:c.instructions+=4;goto B411ec6;
case 0x411ec8:c.instructions+=3;goto B411ec8;
case 0x411ecb:c.instructions+=2;goto B411ecb;
case 0x411ed2:c.instructions+=1;goto B411ed2;
case 0x411ed4:goto L411ed4;
case 0x411ed6:goto L411ed6;
case 0x411eda:c.instructions+=1;goto B411eda;
case 0x411edc:goto L411edc;
case 0x411edd:c.instructions+=3;goto B411edd;
case 0x411ee0:c.instructions+=2;goto B411ee0;
case 0x411ee2:c.instructions+=1;goto B411ee2;
case 0x411ee4:goto L411ee4;
case 0x411ee8:c.instructions+=2;goto B411ee8;
case 0x411eea:c.instructions+=1;goto B411eea;
case 0x411ef0:goto L411ef0;
case 0x411ef3:c.instructions+=1;goto B411ef3;
case 0x411ef5:goto L411ef5;
case 0x411ef8:c.instructions+=6;goto B411ef8;
case 0x411ef9:c.instructions+=5;goto B411ef9;
case 0x411efa:c.instructions+=4;goto B411efa;
case 0x411efb:c.instructions+=3;goto B411efb;
case 0x411efc:c.instructions+=2;goto B411efc;
case 0x411efd:c.instructions+=1;goto B411efd;
case 0x411f00:goto L411f00;
case 0x411f03:c.instructions+=5;goto B411f03;
case 0x411f07:c.instructions+=4;goto B411f07;
case 0x411f09:c.instructions+=3;goto B411f09;
case 0x411f0c:c.instructions+=2;goto B411f0c;
case 0x411f0f:c.instructions+=1;goto B411f0f;
case 0x411f11:goto L411f11;
case 0x411f14:c.instructions+=1;goto B411f14;
case 0x411f16:goto L411f16;
case 0x411f19:c.instructions+=1;goto B411f19;
case 0x411f1b:goto L411f1b;
case 0x411f1e:c.instructions+=1;goto B411f1e;
case 0x411f20:goto L411f20;
case 0x411f23:c.instructions+=1;goto B411f23;
case 0x411f25:goto L411f25;
case 0x411f29:c.instructions+=1;goto B411f29;
case 0x411f2b:goto L411f2b;
case 0x411f31:goto L411f31;
case 0x411f33:c.instructions+=1;goto B411f33;
case 0x411f35:goto L411f35;
case 0x411f38:c.instructions+=1;goto B411f38;
case 0x411f3a:goto L411f3a;
case 0x411f3d:c.instructions+=1;goto B411f3d;
case 0x411f3f:goto L411f3f;
case 0x411f42:c.instructions+=1;goto B411f42;
case 0x411f44:goto L411f44;
case 0x411f47:c.instructions+=1;goto B411f47;
case 0x411f49:goto L411f49;
case 0x411f4d:c.instructions+=1;goto B411f4d;
case 0x411f4f:goto L411f4f;
case 0x411f55:goto L411f55;
case 0x411f59:c.instructions+=15;goto B411f59;
case 0x411f5a:c.instructions+=14;goto B411f5a;
case 0x411f5c:c.instructions+=13;goto B411f5c;
case 0x411f5d:c.instructions+=12;goto B411f5d;
case 0x411f5f:c.instructions+=11;goto B411f5f;
case 0x411f60:c.instructions+=10;goto B411f60;
case 0x411f62:c.instructions+=9;goto B411f62;
case 0x411f63:c.instructions+=8;goto B411f63;
case 0x411f65:c.instructions+=7;goto B411f65;
case 0x411f67:c.instructions+=6;goto B411f67;
case 0x411f69:c.instructions+=5;goto B411f69;
case 0x411f6b:c.instructions+=4;goto B411f6b;
case 0x411f6d:c.instructions+=3;goto B411f6d;
case 0x411f6f:c.instructions+=2;goto B411f6f;
case 0x411f70:c.instructions+=1;goto B411f70;
case 0x411f73:goto L411f73;
case 0x411f76:c.instructions+=1;goto B411f76;
case 0x411f78:goto L411f78;
case 0x411f7b:c.instructions+=1;goto B411f7b;
case 0x411f7d:goto L411f7d;
case 0x411f81:c.instructions+=6;goto B411f81;
case 0x411f82:c.instructions+=5;goto B411f82;
case 0x411f83:c.instructions+=4;goto B411f83;
case 0x411f84:c.instructions+=3;goto B411f84;
case 0x411f85:c.instructions+=2;goto B411f85;
case 0x411f86:c.instructions+=1;goto B411f86;
case 0x411f89:goto L411f89;
case 0x411f8f:c.instructions+=6;goto B411f8f;
case 0x411f90:c.instructions+=5;goto B411f90;
case 0x411f91:c.instructions+=4;goto B411f91;
case 0x411f92:c.instructions+=3;goto B411f92;
case 0x411f93:c.instructions+=2;goto B411f93;
case 0x411f94:c.instructions+=1;goto B411f94;
case 0x411fa0:goto L411fa0;
case 0x411fa1:c.instructions+=14;goto B411fa1;
case 0x411fa5:c.instructions+=13;goto B411fa5;
case 0x411fa6:c.instructions+=12;goto B411fa6;
case 0x411fa8:c.instructions+=11;goto B411fa8;
case 0x411fae:c.instructions+=10;goto B411fae;
case 0x411fb1:c.instructions+=9;goto B411fb1;
case 0x411fb5:c.instructions+=8;goto B411fb5;
case 0x411fb6:c.instructions+=7;goto B411fb6;
case 0x411fb7:c.instructions+=6;goto B411fb7;
case 0x411fb9:c.instructions+=5;goto B411fb9;
case 0x411fba:c.instructions+=4;goto B411fba;
case 0x411fbb:c.instructions+=3;goto B411fbb;
case 0x411fc3:c.instructions+=2;goto B411fc3;
case 0x411fc5:c.instructions+=1;goto B411fc5;
case 0x411fcb:goto L411fcb;
case 0x411fcf:c.instructions+=8;goto B411fcf;
case 0x411fd0:c.instructions+=7;goto B411fd0;
case 0x411fd3:c.instructions+=6;goto B411fd3;
case 0x411fd6:c.instructions+=5;goto B411fd6;
case 0x411fd8:c.instructions+=4;goto B411fd8;
case 0x411fdc:c.instructions+=3;goto B411fdc;
case 0x411fde:c.instructions+=2;goto B411fde;
case 0x411fe1:c.instructions+=1;goto B411fe1;
case 0x411fe7:goto L411fe7;
case 0x411feb:c.instructions+=2;goto B411feb;
case 0x411fef:c.instructions+=1;goto B411fef;
case 0x411ff1:goto L411ff1;
case 0x411ff5:c.instructions+=2;goto B411ff5;
case 0x411ff9:c.instructions+=1;goto B411ff9;
case 0x411ffb:goto L411ffb;
case 0x411ffe:c.instructions+=1;goto B411ffe;
default:missing_instruction(c.pc);}
B411000:L411000:{c.instructions+=2;NFSU2_TR(0x411000);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411002:{NFSU2_TR(0x411002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411041;}}
}
B411004:L411004:{c.instructions+=2;NFSU2_TR(0x411004);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411006:{NFSU2_TR(0x411006);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411041;}}
}
B411008:L411008:{c.instructions+=3;NFSU2_TR(0x411008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41100b:{NFSU2_TR(0x41100b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41100f:{NFSU2_TR(0x41100f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411017;}}
}
B411011:L411011:{c.instructions+=2;NFSU2_TR(0x411011);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411015:{NFSU2_TR(0x411015);
{goto L41101b;}
}
B411017:L411017:{c.instructions+=1;NFSU2_TR(0x411017);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41101b:L41101b:{c.instructions+=17;NFSU2_TR(0x41101b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41101d:{NFSU2_TR(0x41101d);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B411020:{NFSU2_TR(0x411020);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411023:{NFSU2_TR(0x411023);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B411026:{NFSU2_TR(0x411026);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B411028:{NFSU2_TR(0x411028);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41102a:{NFSU2_TR(0x41102a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B41102c:{NFSU2_TR(0x41102c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41102e:{NFSU2_TR(0x41102e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B411030:{NFSU2_TR(0x411030);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B411032:{NFSU2_TR(0x411032);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B411034:{NFSU2_TR(0x411034);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411036:{NFSU2_TR(0x411036);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B411038:{NFSU2_TR(0x411038);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41103a:{NFSU2_TR(0x41103a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41103c:{NFSU2_TR(0x41103c);
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
B41103f:{NFSU2_TR(0x41103f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L411054;}}
}
B411041:L411041:{c.instructions+=4;NFSU2_TR(0x411041);
__builtin_memmove((R+4),gp(0x890080),4);
}
B411047:{NFSU2_TR(0x411047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B411049:{NFSU2_TR(0x411049);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41104b:{NFSU2_TR(0x41104b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x410fd8u,410);}
}
B41104d:L41104d:{c.instructions+=6;NFSU2_TR(0x41104d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41104e:{NFSU2_TR(0x41104e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41104f:{NFSU2_TR(0x41104f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411050:{NFSU2_TR(0x411050);
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
B411052:{NFSU2_TR(0x411052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411053:{NFSU2_TR(0x411053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411054:L411054:{c.instructions+=6;NFSU2_TR(0x411054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411055:{NFSU2_TR(0x411055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411056:{NFSU2_TR(0x411056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411057:{NFSU2_TR(0x411057);
w1(R+0,u8(0x1ull));
}
B411059:{NFSU2_TR(0x411059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41105a:{NFSU2_TR(0x41105a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411060:L411060:{c.instructions+=7;NFSU2_TR(0x411060);
__builtin_memmove((R+0),gp(0x890080),4);
}
B411065:{NFSU2_TR(0x411065);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411066:{NFSU2_TR(0x411066);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411067:{NFSU2_TR(0x411067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411068:{NFSU2_TR(0x411068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41106a:{NFSU2_TR(0x41106a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41106c:{NFSU2_TR(0x41106c);
if(r1(R+518)){{goto L411108;}}
}
B411072:L411072:{c.instructions+=1;NFSU2_TR(0x411072);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B411076:L411076:{c.instructions+=4;NFSU2_TR(0x411076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411079:{NFSU2_TR(0x411079);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B41107b:{NFSU2_TR(0x41107b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41107e:{NFSU2_TR(0x41107e);
if(r1(R+518)){{goto L41108a;}}
}
B411080:L411080:{c.instructions+=2;NFSU2_TR(0x411080);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411083:{NFSU2_TR(0x411083);
if(r1(R+518)){{goto L41108a;}}
}
B411085:L411085:{c.instructions+=2;NFSU2_TR(0x411085);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411088:{NFSU2_TR(0x411088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411093;}}
}
B41108a:L41108a:{c.instructions+=2;NFSU2_TR(0x41108a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41108d:{NFSU2_TR(0x41108d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B411093:L411093:{c.instructions+=2;NFSU2_TR(0x411093);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
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
B411097:{NFSU2_TR(0x411097);
if(r1(R+518)){{goto L4110fa;}}
}
B411099:L411099:{c.instructions+=2;NFSU2_TR(0x411099);
__builtin_memmove((R+4),(R+24),4);
}
B41109b:{NFSU2_TR(0x41109b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4110a0ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B4110a0:L4110a0:{c.instructions+=2;NFSU2_TR(0x4110a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4110a2:{NFSU2_TR(0x4110a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4110fa;}}
}
B4110a4:L4110a4:{c.instructions+=2;NFSU2_TR(0x4110a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4110a6:{NFSU2_TR(0x4110a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4110fa;}}
}
B4110a8:L4110a8:{c.instructions+=7;NFSU2_TR(0x4110a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4110ae:{NFSU2_TR(0x4110ae);
__builtin_memmove((R+8),(R+4),4);
}
B4110b0:{NFSU2_TR(0x4110b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4110b1:{NFSU2_TR(0x4110b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4110b5:{NFSU2_TR(0x4110b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4110b6:{NFSU2_TR(0x4110b6);
w4(R+4,u32(0x88f298ull));
}
B4110bb:{NFSU2_TR(0x4110bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4110c0ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B4110c0:L4110c0:{c.instructions+=3;NFSU2_TR(0x4110c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4110c3:{NFSU2_TR(0x4110c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4110c7:{NFSU2_TR(0x4110c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4110de;}}
}
B4110c9:L4110c9:{c.instructions+=5;NFSU2_TR(0x4110c9);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4110cb:{NFSU2_TR(0x4110cb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4110cf:{NFSU2_TR(0x4110cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4110d1:{NFSU2_TR(0x4110d1);
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
B4110d4:{NFSU2_TR(0x4110d4);
if(r1(R+514)){{goto L4110fa;}}
}
B4110d6:L4110d6:{c.instructions+=5;NFSU2_TR(0x4110d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4110d7:{NFSU2_TR(0x4110d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4110d8:{NFSU2_TR(0x4110d8);
w1(R+0,u8(0x1ull));
}
B4110da:{NFSU2_TR(0x4110da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4110db:{NFSU2_TR(0x4110db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4110de:L4110de:{c.instructions+=4;NFSU2_TR(0x4110de);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4110e2:{NFSU2_TR(0x4110e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4110e4:{NFSU2_TR(0x4110e4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4110e7:{NFSU2_TR(0x4110e7);
if(r1(R+514)){{goto L4110f8;}}
}
B4110e9:L4110e9:{c.instructions+=4;NFSU2_TR(0x4110e9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4110ef:{NFSU2_TR(0x4110ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4110f1:{NFSU2_TR(0x4110f1);
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
B4110f4:{NFSU2_TR(0x4110f4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4110d6u);}goto L4110d6;}}
}
B4110f6:L4110f6:{c.instructions+=1;NFSU2_TR(0x4110f6);
{goto L4110fa;}
}
B4110f8:L4110f8:{c.instructions+=1;NFSU2_TR(0x4110f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4110fa:L4110fa:{c.instructions+=3;NFSU2_TR(0x4110fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4110fc:{NFSU2_TR(0x4110fc);
u8 U[8];
__builtin_memmove((U+0),gp(0x890080),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411102:{NFSU2_TR(0x411102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411076u);}goto L411076;}}
}
B411108:L411108:{c.instructions+=5;NFSU2_TR(0x411108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411109:{NFSU2_TR(0x411109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41110a:{NFSU2_TR(0x41110a);
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
B41110c:{NFSU2_TR(0x41110c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41110d:{NFSU2_TR(0x41110d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411110:L411110:{c.instructions+=7;NFSU2_TR(0x411110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411111:{NFSU2_TR(0x411111);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411114:{NFSU2_TR(0x411114);
__builtin_memmove((R+4),gp(0x890080),4);
}
B41111a:{NFSU2_TR(0x41111a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41111b:{NFSU2_TR(0x41111b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41111c:{NFSU2_TR(0x41111c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41111d:{NFSU2_TR(0x41111d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411122ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B411122:L411122:{c.instructions+=6;NFSU2_TR(0x411122);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411126:{NFSU2_TR(0x411126);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B41112b:{NFSU2_TR(0x41112b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B41112d:{NFSU2_TR(0x41112d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B41112f:{NFSU2_TR(0x41112f);
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
B411131:{NFSU2_TR(0x411131);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4111b2;}}
}
B411133:L411133:{c.instructions+=4;NFSU2_TR(0x411133);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411134:{NFSU2_TR(0x411134);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B411138:{NFSU2_TR(0x411138);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411139:{NFSU2_TR(0x411139);
__builtin_memmove((R+16),(R+16),4);
}
B411140:L411140:{c.instructions+=5;NFSU2_TR(0x411140);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B411145:{NFSU2_TR(0x411145);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411147:{NFSU2_TR(0x411147);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B41114e:{NFSU2_TR(0x41114e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B411152:{NFSU2_TR(0x411152);
if(r1(R+518)){{goto L411167;}}
}
B411154:L411154:{c.instructions+=4;NFSU2_TR(0x411154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411157:{NFSU2_TR(0x411157);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B41115a:{NFSU2_TR(0x41115a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41115c:{NFSU2_TR(0x41115c);
if(r1(R+518)){{goto L411167;}}
}
B41115e:L41115e:{c.instructions+=3;NFSU2_TR(0x41115e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411160:{NFSU2_TR(0x411160);
__builtin_memmove((R+8),(R+518),1);
}
B411163:{NFSU2_TR(0x411163);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B411167:L411167:{c.instructions+=2;NFSU2_TR(0x411167);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B411169:{NFSU2_TR(0x411169);
if(r1(R+518)){{goto L411189;}}
}
B41116b:L41116b:{c.instructions+=4;NFSU2_TR(0x41116b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41116f:{NFSU2_TR(0x41116f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411170:{NFSU2_TR(0x411170);
__builtin_memmove((R+4),(R+24),4);
}
B411172:{NFSU2_TR(0x411172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411177ull));
TAIL_STATIC(0x5d4480u,5d4);
}
B411177:L411177:{c.instructions+=2;NFSU2_TR(0x411177);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B411179:{NFSU2_TR(0x411179);
if(r1(R+518)){{goto L411189;}}
}
B41117b:L41117b:{c.instructions+=5;NFSU2_TR(0x41117b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41117f:{NFSU2_TR(0x41117f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B411181:{NFSU2_TR(0x411181);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411185:{NFSU2_TR(0x411185);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411187:{NFSU2_TR(0x411187);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41119b;}}
}
B411189:L411189:{c.instructions+=4;NFSU2_TR(0x411189);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B41118e:{NFSU2_TR(0x41118e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41118f:{NFSU2_TR(0x41118f);
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
B411191:{NFSU2_TR(0x411191);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411140u);}goto L411140;}}
}
B411193:L411193:{c.instructions+=6;NFSU2_TR(0x411193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411194:{NFSU2_TR(0x411194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411195:{NFSU2_TR(0x411195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411196:{NFSU2_TR(0x411196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411197:{NFSU2_TR(0x411197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411198:{NFSU2_TR(0x411198);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41119b:L41119b:{c.instructions+=8;NFSU2_TR(0x41119b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41119f:{NFSU2_TR(0x41119f);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4111a1:{NFSU2_TR(0x4111a1);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B4111a4:{NFSU2_TR(0x4111a4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4111ab:{NFSU2_TR(0x4111ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4111ad:{NFSU2_TR(0x4111ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4111ae:{NFSU2_TR(0x4111ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4111b1:{NFSU2_TR(0x4111b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4111b2:L4111b2:{c.instructions+=4;NFSU2_TR(0x4111b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4111b3:{NFSU2_TR(0x4111b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4111b4:{NFSU2_TR(0x4111b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4111b5:{NFSU2_TR(0x4111b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4111c0:L4111c0:{c.instructions+=5;NFSU2_TR(0x4111c0);
__builtin_memmove((R+0),gp(0x883dc0),4);
}
B4111c5:{NFSU2_TR(0x4111c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4111c6:{NFSU2_TR(0x4111c6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4111c8:{NFSU2_TR(0x4111c8);
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
B4111ca:{NFSU2_TR(0x4111ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41121c;}}
}
B4111cc:L4111cc:{c.instructions+=3;NFSU2_TR(0x4111cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4111cd:{NFSU2_TR(0x4111cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4111ce:{NFSU2_TR(0x4111ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4111d0:L4111d0:{c.instructions+=5;NFSU2_TR(0x4111d0);
__builtin_memmove((R+0),gp(0x883dbc),4);
}
B4111d5:{NFSU2_TR(0x4111d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4111d8:{NFSU2_TR(0x4111d8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4111da:{NFSU2_TR(0x4111da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4111dd:{NFSU2_TR(0x4111dd);
__builtin_memmove((R+4),(R+4),4);
}
B4111e0:L4111e0:{c.instructions+=3;NFSU2_TR(0x4111e0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B4111e3:{NFSU2_TR(0x4111e3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4111e5:{NFSU2_TR(0x4111e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41120a;}}
}
B4111e7:L4111e7:{c.instructions+=3;NFSU2_TR(0x4111e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4111ee:{NFSU2_TR(0x4111ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4111f0:{NFSU2_TR(0x4111f0);
if(r1(R+518)){{goto L41120a;}}
}
B4111f2:L4111f2:{c.instructions+=4;NFSU2_TR(0x4111f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4111f5:{NFSU2_TR(0x4111f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4111f8:{NFSU2_TR(0x4111f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4111fa:{NFSU2_TR(0x4111fa);
if(r1(R+518)){{goto L41120a;}}
}
B4111fc:L4111fc:{c.instructions+=4;NFSU2_TR(0x4111fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4111fd:{NFSU2_TR(0x4111fd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B411200:{NFSU2_TR(0x411200);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411203:{NFSU2_TR(0x411203);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4111e0u);}goto L4111e0;}}
}
B411205:L411205:{c.instructions+=1;NFSU2_TR(0x411205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41120aull));
TAIL_STATIC(0x409110u,409);
}
B41120a:L41120a:{c.instructions+=5;NFSU2_TR(0x41120a);
__builtin_memmove((R+0),gp(0x883dc0),4);
}
B41120f:{NFSU2_TR(0x41120f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B411210:{NFSU2_TR(0x411210);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x114ull))));
}
B411216:{NFSU2_TR(0x411216);
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
B411218:{NFSU2_TR(0x411218);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4111d0u);}goto L4111d0;}}
}
B41121a:L41121a:{c.instructions+=2;NFSU2_TR(0x41121a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41121b:{NFSU2_TR(0x41121b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41121c:L41121c:{c.instructions+=2;NFSU2_TR(0x41121c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41121d:{NFSU2_TR(0x41121d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411220:L411220:{c.instructions+=8;NFSU2_TR(0x411220);
__builtin_memmove((R+0),gp(0x890080),4);
}
B411225:{NFSU2_TR(0x411225);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411228:{NFSU2_TR(0x411228);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41122b:{NFSU2_TR(0x41122b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41122c:{NFSU2_TR(0x41122c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B41122e:{NFSU2_TR(0x41122e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B411230:{NFSU2_TR(0x411230);
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
B411232:{NFSU2_TR(0x411232);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L411292;}}
}
B411234:L411234:{c.instructions+=4;NFSU2_TR(0x411234);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411235:{NFSU2_TR(0x411235);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411236:{NFSU2_TR(0x411236);
w1(R+12,u8(0x1ull));
}
B411238:{NFSU2_TR(0x411238);
{goto L411240;}
}
B411240:L411240:{c.instructions+=6;NFSU2_TR(0x411240);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B411242:{NFSU2_TR(0x411242);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B411246:{NFSU2_TR(0x411246);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B411249:{NFSU2_TR(0x411249);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41124f:{NFSU2_TR(0x41124f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411251:{NFSU2_TR(0x411251);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411278;}}
}
B411253:L411253:{c.instructions+=3;NFSU2_TR(0x411253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411256:{NFSU2_TR(0x411256);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411259:{NFSU2_TR(0x411259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41125eull));
TAIL_STATIC(0x5930f0u,593);
}
B41125e:L41125e:{c.instructions+=3;NFSU2_TR(0x41125e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411261:{NFSU2_TR(0x411261);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411263:{NFSU2_TR(0x411263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411268ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B411268:L411268:{c.instructions+=3;NFSU2_TR(0x411268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41126b:{NFSU2_TR(0x41126b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41126d:{NFSU2_TR(0x41126d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411272ull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B411272:L411272:{c.instructions+=1;NFSU2_TR(0x411272);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B411278:L411278:{c.instructions+=8;NFSU2_TR(0x411278);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41127e:{NFSU2_TR(0x41127e);
__builtin_memmove((R+0),gp(0x890080),4);
}
B411283:{NFSU2_TR(0x411283);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411286:{NFSU2_TR(0x411286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B411289:{NFSU2_TR(0x411289);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B41128a:{NFSU2_TR(0x41128a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B41128c:{NFSU2_TR(0x41128c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B41128e:{NFSU2_TR(0x41128e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411240u);}goto L411240;}}
}
B411290:L411290:{c.instructions+=2;NFSU2_TR(0x411290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411291:{NFSU2_TR(0x411291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411292:L411292:{c.instructions+=2;NFSU2_TR(0x411292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411293:{NFSU2_TR(0x411293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4112a0:L4112a0:{c.instructions+=11;NFSU2_TR(0x4112a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4112a1:{NFSU2_TR(0x4112a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4112a2:{NFSU2_TR(0x4112a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4112a6:{NFSU2_TR(0x4112a6);
{u32 ea_=u32(r4(R+12)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4112ac:{NFSU2_TR(0x4112ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4112ad:{NFSU2_TR(0x4112ad);
{u32 ea_=u32(u32(7879668u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4112b3:{NFSU2_TR(0x4112b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4112b4:{NFSU2_TR(0x4112b4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4112b6:{NFSU2_TR(0x4112b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4112b8:{NFSU2_TR(0x4112b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4112bb:{NFSU2_TR(0x4112bb);
if(r1(R+514)){{goto L41135a;}}
}
B4112c1:L4112c1:{c.instructions+=7;NFSU2_TR(0x4112c1);
__builtin_memmove((R+8),gp(0x890080),4);
}
B4112c7:{NFSU2_TR(0x4112c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4112ca:{NFSU2_TR(0x4112ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4112cd:{NFSU2_TR(0x4112cd);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4112cf:{NFSU2_TR(0x4112cf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4112d1:{NFSU2_TR(0x4112d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4112d3:{NFSU2_TR(0x4112d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41135a;}}
}
B4112d9:L4112d9:{c.instructions+=1;NFSU2_TR(0x4112d9);
__builtin_memmove((R+16),(R+16),4);
}
B4112e0:L4112e0:{c.instructions+=7;NFSU2_TR(0x4112e0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4112e2:{NFSU2_TR(0x4112e2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4112e6:{NFSU2_TR(0x4112e6);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4112ec:{NFSU2_TR(0x4112ec);
{u32 ea_=u32(u32(7879664u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4112f2:{NFSU2_TR(0x4112f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4112f4:{NFSU2_TR(0x4112f4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4112f7:{NFSU2_TR(0x4112f7);
if(r1(R+514)){{goto L41134d;}}
}
B4112f9:L4112f9:{c.instructions+=3;NFSU2_TR(0x4112f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4112fc:{NFSU2_TR(0x4112fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B411300:{NFSU2_TR(0x411300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41130e;}}
}
B411302:L411302:{c.instructions+=3;NFSU2_TR(0x411302);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411305:{NFSU2_TR(0x411305);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B41130c:{NFSU2_TR(0x41130c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41134d;}}
}
B41130e:L41130e:{c.instructions+=10;NFSU2_TR(0x41130e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411314:{NFSU2_TR(0x411314);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41131a:{NFSU2_TR(0x41131a);
__builtin_memmove((R+0),(R+4),4);
}
B41131c:{NFSU2_TR(0x41131c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411320:{NFSU2_TR(0x411320);
__builtin_memmove((R+4),(R+8),4);
}
B411322:{NFSU2_TR(0x411322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411323:{NFSU2_TR(0x411323);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411324:{NFSU2_TR(0x411324);
w4(R+4,u32(0x88f298ull));
}
B411329:{NFSU2_TR(0x411329);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41132d:{NFSU2_TR(0x41132d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411332ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B411332:L411332:{c.instructions+=5;NFSU2_TR(0x411332);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B411334:{NFSU2_TR(0x411334);
{u32 ea_=u32(u32(8296224u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41133a:{NFSU2_TR(0x41133a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41133c:{NFSU2_TR(0x41133c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41133f:{NFSU2_TR(0x41133f);
if(r1(R+514)){{goto L411347;}}
}
B411341:L411341:{c.instructions+=3;NFSU2_TR(0x411341);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B411342:{NFSU2_TR(0x411342);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B411345:{NFSU2_TR(0x411345);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411363;}}
}
B411347:L411347:{c.instructions+=1;NFSU2_TR(0x411347);
__builtin_memmove((R+8),gp(0x890080),4);
}
B41134d:L41134d:{c.instructions+=6;NFSU2_TR(0x41134d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411350:{NFSU2_TR(0x411350);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411353:{NFSU2_TR(0x411353);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B411354:{NFSU2_TR(0x411354);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B411356:{NFSU2_TR(0x411356);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411358:{NFSU2_TR(0x411358);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4112e0u);}goto L4112e0;}}
}
B41135a:L41135a:{c.instructions+=6;NFSU2_TR(0x41135a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41135b:{NFSU2_TR(0x41135b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41135c:{NFSU2_TR(0x41135c);
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
B41135e:{NFSU2_TR(0x41135e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41135f:{NFSU2_TR(0x41135f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411360:{NFSU2_TR(0x411360);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411363:L411363:{c.instructions+=6;NFSU2_TR(0x411363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411364:{NFSU2_TR(0x411364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411365:{NFSU2_TR(0x411365);
w1(R+0,u8(0x1ull));
}
B411367:{NFSU2_TR(0x411367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411368:{NFSU2_TR(0x411368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411369:{NFSU2_TR(0x411369);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411370:L411370:{c.instructions+=3;NFSU2_TR(0x411370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411371:{NFSU2_TR(0x411371);
__builtin_memmove((R+24),(R+4),4);
}
B411373:{NFSU2_TR(0x411373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411378ull));
TAIL_STATIC(0x409c50u,409);
}
B411378:L411378:{c.instructions+=2;NFSU2_TR(0x411378);
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
B41137d:{NFSU2_TR(0x41137d);
if(r1(R+518)){{goto L411388;}}
}
B41137f:L41137f:{c.instructions+=2;NFSU2_TR(0x41137f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411380:{NFSU2_TR(0x411380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411385ull));
TAIL_STATIC(0x575630u,575);
}
B411385:L411385:{c.instructions+=1;NFSU2_TR(0x411385);
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
B411388:L411388:{c.instructions+=3;NFSU2_TR(0x411388);
__builtin_memmove((R+0),(R+24),4);
}
B41138a:{NFSU2_TR(0x41138a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41138b:{NFSU2_TR(0x41138b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411390:L411390:{c.instructions+=10;NFSU2_TR(0x411390);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411391:{NFSU2_TR(0x411391);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411395:{NFSU2_TR(0x411395);
__builtin_memmove((R+8),(R+4),4);
}
B411397:{NFSU2_TR(0x411397);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41139b:{NFSU2_TR(0x41139b);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41139f:{NFSU2_TR(0x41139f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4113a3:{NFSU2_TR(0x4113a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4113a4:{NFSU2_TR(0x4113a4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4113a7:{NFSU2_TR(0x4113a7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4113aa:{NFSU2_TR(0x4113aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4113afull));
TAIL_STATIC(0x409ea0u,409);
}
B4113af:L4113af:{c.instructions+=4;NFSU2_TR(0x4113af);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4113b3:{NFSU2_TR(0x4113b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4113b6:{NFSU2_TR(0x4113b6);
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
B4113b9:{NFSU2_TR(0x4113b9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L411465;}}
}
B4113bf:L4113bf:{c.instructions+=1;NFSU2_TR(0x4113bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x411470ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4113c6:L4113c6:{c.instructions+=6;NFSU2_TR(0x4113c6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4113ca:{NFSU2_TR(0x4113ca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4113ce:{NFSU2_TR(0x4113ce);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4113d2:{NFSU2_TR(0x4113d2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4113d4:{NFSU2_TR(0x4113d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4113d5:{NFSU2_TR(0x4113d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4113d8:L4113d8:{c.instructions+=10;NFSU2_TR(0x4113d8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4113dc:{NFSU2_TR(0x4113dc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4113e0:{NFSU2_TR(0x4113e0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4113e4:{NFSU2_TR(0x4113e4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4113e6:{NFSU2_TR(0x4113e6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4113ea:{NFSU2_TR(0x4113ea);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4113ee:{NFSU2_TR(0x4113ee);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4113f1:{NFSU2_TR(0x4113f1);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4113f3:{NFSU2_TR(0x4113f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4113f4:{NFSU2_TR(0x4113f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4113f7:L4113f7:{c.instructions+=4;NFSU2_TR(0x4113f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4113fb:{NFSU2_TR(0x4113fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4113fc:{NFSU2_TR(0x4113fc);
__builtin_memmove((R+4),(R+8),4);
}
B4113fe:{NFSU2_TR(0x4113fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411403ull));
TAIL_STATIC(0x409f40u,409);
}
B411403:L411403:{c.instructions+=5;NFSU2_TR(0x411403);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B411407:{NFSU2_TR(0x411407);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41140b:{NFSU2_TR(0x41140b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41140d:{NFSU2_TR(0x41140d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41140e:{NFSU2_TR(0x41140e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411411:L411411:{c.instructions+=4;NFSU2_TR(0x411411);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411415:{NFSU2_TR(0x411415);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411416:{NFSU2_TR(0x411416);
__builtin_memmove((R+4),(R+8),4);
}
B411418:{NFSU2_TR(0x411418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41141dull));
TAIL_STATIC(0x409f40u,409);
}
B41141d:L41141d:{c.instructions+=5;NFSU2_TR(0x41141d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B411421:{NFSU2_TR(0x411421);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B411425:{NFSU2_TR(0x411425);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B411427:{NFSU2_TR(0x411427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411428:{NFSU2_TR(0x411428);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41142b:L41142b:{c.instructions+=4;NFSU2_TR(0x41142b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41142f:{NFSU2_TR(0x41142f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411430:{NFSU2_TR(0x411430);
__builtin_memmove((R+4),(R+8),4);
}
B411432:{NFSU2_TR(0x411432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411437ull));
TAIL_STATIC(0x409f40u,409);
}
B411437:L411437:{c.instructions+=4;NFSU2_TR(0x411437);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41143b:{NFSU2_TR(0x41143b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41143f:{NFSU2_TR(0x41143f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411440:{NFSU2_TR(0x411440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411445ull));
TAIL_STATIC(0x409f40u,409);
}
B411445:L411445:{c.instructions+=5;NFSU2_TR(0x411445);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B411449:{NFSU2_TR(0x411449);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41144d:{NFSU2_TR(0x41144d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41144f:{NFSU2_TR(0x41144f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411450:{NFSU2_TR(0x411450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411453:L411453:{c.instructions+=6;NFSU2_TR(0x411453);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411457:{NFSU2_TR(0x411457);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41145b:{NFSU2_TR(0x41145b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41145f:{NFSU2_TR(0x41145f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B411461:{NFSU2_TR(0x411461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411462:{NFSU2_TR(0x411462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411465:L411465:{c.instructions+=3;NFSU2_TR(0x411465);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41146b:{NFSU2_TR(0x41146b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41146c:{NFSU2_TR(0x41146c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411490:L411490:{c.instructions+=8;NFSU2_TR(0x411490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B411493:{NFSU2_TR(0x411493);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411494:{NFSU2_TR(0x411494);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411495:{NFSU2_TR(0x411495);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411496:{NFSU2_TR(0x411496);
__builtin_memmove((R+24),(R+4),4);
}
B411498:{NFSU2_TR(0x411498);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411499:{NFSU2_TR(0x411499);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41149c:{NFSU2_TR(0x41149c);
w4(R+4,u32(0x10ull));
}
B4114a1:L4114a1:{c.instructions+=4;NFSU2_TR(0x4114a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B4114a4:{NFSU2_TR(0x4114a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4114a7:{NFSU2_TR(0x4114a7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4114a8:{NFSU2_TR(0x4114a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4114a1u);}goto L4114a1;}}
}
B4114aa:L4114aa:{c.instructions+=6;NFSU2_TR(0x4114aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4114ad:{NFSU2_TR(0x4114ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4114af:{NFSU2_TR(0x4114af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4114b2:{NFSU2_TR(0x4114b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4114b5:{NFSU2_TR(0x4114b5);
w4(R+20,u32(0x420ull));
}
B4114ba:{NFSU2_TR(0x4114ba);
if(r1(R+518)){{goto L411585;}}
}
B4114c0:L4114c0:{c.instructions+=12;NFSU2_TR(0x4114c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4114c6:{NFSU2_TR(0x4114c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4114c9:{NFSU2_TR(0x4114c9);
__builtin_memmove((R+0),(R+8),4);
}
B4114cb:{NFSU2_TR(0x4114cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4114cc:{NFSU2_TR(0x4114cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4114d0:{NFSU2_TR(0x4114d0);
__builtin_memmove((R+8),gp(0x783c20),4);
}
B4114d6:{NFSU2_TR(0x4114d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4114d7:{NFSU2_TR(0x4114d7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B4114dd:{NFSU2_TR(0x4114dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4114e4:{NFSU2_TR(0x4114e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4114e5:{NFSU2_TR(0x4114e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4114e6:{NFSU2_TR(0x4114e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4114ebull));
TAIL_STATIC(0x5e2e40u,5e2);
}
B4114eb:L4114eb:{c.instructions+=3;NFSU2_TR(0x4114eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4114ed:{NFSU2_TR(0x4114ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4114f0:{NFSU2_TR(0x4114f0);
if(r1(R+518)){{goto L411585;}}
}
B4114f6:L4114f6:{c.instructions+=8;NFSU2_TR(0x4114f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4114f9:{NFSU2_TR(0x4114f9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4114fb:{NFSU2_TR(0x4114fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4114fd:{NFSU2_TR(0x4114fd);
__builtin_memmove((R+12),(R+518),1);
}
B411500:{NFSU2_TR(0x411500);
__builtin_memmove((R+4),(R+0),4);
}
B411502:{NFSU2_TR(0x411502);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411503:{NFSU2_TR(0x411503);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411504:{NFSU2_TR(0x411504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411509ull));
TAIL_STATIC(0x40cc40u,40c);
}
B411509:L411509:{c.instructions+=5;NFSU2_TR(0x411509);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41150d:{NFSU2_TR(0x41150d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411510:{NFSU2_TR(0x411510);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411511:{NFSU2_TR(0x411511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411512:{NFSU2_TR(0x411512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411517ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B411517:L411517:{c.instructions+=4;NFSU2_TR(0x411517);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41151b:{NFSU2_TR(0x41151b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41151d:{NFSU2_TR(0x41151d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B411520:{NFSU2_TR(0x411520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411530;}}
}
B411522:L411522:{c.instructions+=4;NFSU2_TR(0x411522);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411526:{NFSU2_TR(0x411526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411527:{NFSU2_TR(0x411527);
__builtin_memmove((R+4),(R+28),4);
}
B411529:{NFSU2_TR(0x411529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41152eull));
TAIL_STATIC(0x401b70u,401);
}
B41152e:L41152e:{c.instructions+=1;NFSU2_TR(0x41152e);
{goto L41153c;}
}
B411530:L411530:{c.instructions+=4;NFSU2_TR(0x411530);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411534:{NFSU2_TR(0x411534);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411535:{NFSU2_TR(0x411535);
__builtin_memmove((R+4),(R+28),4);
}
B411537:{NFSU2_TR(0x411537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41153cull));
TAIL_STATIC(0x401bc0u,401);
}
B41153c:L41153c:{c.instructions+=4;NFSU2_TR(0x41153c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41153e:{NFSU2_TR(0x41153e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B411542:{NFSU2_TR(0x411542);
__builtin_memmove((R+4),(R+28),4);
}
B411544:{NFSU2_TR(0x411544);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411552;}}
}
B411546:L411546:{c.instructions+=3;NFSU2_TR(0x411546);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41154a:{NFSU2_TR(0x41154a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41154b:{NFSU2_TR(0x41154b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411550ull));
TAIL_STATIC(0x40ce10u,40c);
}
B411550:L411550:{c.instructions+=1;NFSU2_TR(0x411550);
{goto L41155c;}
}
B411552:L411552:{c.instructions+=3;NFSU2_TR(0x411552);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411556:{NFSU2_TR(0x411556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411557:{NFSU2_TR(0x411557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41155cull));
TAIL_STATIC(0x40cee0u,40c);
}
B41155c:L41155c:{c.instructions+=5;NFSU2_TR(0x41155c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411560:{NFSU2_TR(0x411560);
{u32 ea_=u32(u32(7879716u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B411566:{NFSU2_TR(0x411566);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B411568:{NFSU2_TR(0x411568);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41156b:{NFSU2_TR(0x41156b);
if(r1(R+518)){{goto L41157c;}}
}
B41156d:L41156d:{c.instructions+=4;NFSU2_TR(0x41156d);
{u32 ea_=u32(u32(7879716u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B411573:{NFSU2_TR(0x411573);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B411575:{NFSU2_TR(0x411575);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411578:{NFSU2_TR(0x411578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411585;}}
}
B41157a:L41157a:{c.instructions+=1;NFSU2_TR(0x41157a);
{goto L41157e;}
}
B41157c:L41157c:{c.instructions+=1;NFSU2_TR(0x41157c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41157e:L41157e:{c.instructions+=1;NFSU2_TR(0x41157e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411585:L411585:{c.instructions+=3;NFSU2_TR(0x411585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411588:{NFSU2_TR(0x411588);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41158a:{NFSU2_TR(0x41158a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4115f7;}}
}
B41158c:L41158c:{c.instructions+=3;NFSU2_TR(0x41158c);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B411590:{NFSU2_TR(0x411590);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411592:{NFSU2_TR(0x411592);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411599;}}
}
B411594:L411594:{c.instructions+=1;NFSU2_TR(0x411594);
w4(R+20,u32(0x460ull));
}
B411599:L411599:{c.instructions+=12;NFSU2_TR(0x411599);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41159c:{NFSU2_TR(0x41159c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4115a2:{NFSU2_TR(0x4115a2);
__builtin_memmove((R+8),(R+4),4);
}
B4115a4:{NFSU2_TR(0x4115a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4115a8:{NFSU2_TR(0x4115a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115a9:{NFSU2_TR(0x4115a9);
__builtin_memmove((R+4),(R+20),4);
}
B4115ab:{NFSU2_TR(0x4115ab);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x28c0ull))));
}
B4115b1:{NFSU2_TR(0x4115b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115b2:{NFSU2_TR(0x4115b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115b3:{NFSU2_TR(0x4115b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4115b7:{NFSU2_TR(0x4115b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115b8:{NFSU2_TR(0x4115b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4115bdull));
TAIL_STATIC(0x40f180u,40f);
}
B4115bd:L4115bd:{c.instructions+=3;NFSU2_TR(0x4115bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4115c0:{NFSU2_TR(0x4115c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4115c2:{NFSU2_TR(0x4115c2);
if(r1(R+518)){{goto L4115cd;}}
}
B4115c4:L4115c4:{c.instructions+=3;NFSU2_TR(0x4115c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4115c8:{NFSU2_TR(0x4115c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4115cb:{NFSU2_TR(0x4115cb);
{goto L4115f7;}
}
B4115cd:L4115cd:{c.instructions+=10;NFSU2_TR(0x4115cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4115d0:{NFSU2_TR(0x4115d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4115d6:{NFSU2_TR(0x4115d6);
__builtin_memmove((R+8),(R+4),4);
}
B4115d8:{NFSU2_TR(0x4115d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115d9:{NFSU2_TR(0x4115d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115da:{NFSU2_TR(0x4115da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115db:{NFSU2_TR(0x4115db);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4115df:{NFSU2_TR(0x4115df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4115e0:{NFSU2_TR(0x4115e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4115e4:{NFSU2_TR(0x4115e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4115e9ull));
TAIL_STATIC(0x40f180u,40f);
}
B4115e9:L4115e9:{c.instructions+=3;NFSU2_TR(0x4115e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4115ec:{NFSU2_TR(0x4115ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4115ee:{NFSU2_TR(0x4115ee);
if(r1(R+518)){{goto L4115f7;}}
}
B4115f0:L4115f0:{c.instructions+=2;NFSU2_TR(0x4115f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4115f4:{NFSU2_TR(0x4115f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4115f7:L4115f7:{c.instructions+=11;NFSU2_TR(0x4115f7);
__builtin_memmove((R+8),gp(0x783c1c),4);
}
B4115fd:{NFSU2_TR(0x4115fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411600:{NFSU2_TR(0x411600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411603:{NFSU2_TR(0x411603);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411609:{NFSU2_TR(0x411609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41160a:{NFSU2_TR(0x41160a);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41160d:{NFSU2_TR(0x41160d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41160e:{NFSU2_TR(0x41160e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41160f:{NFSU2_TR(0x41160f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411610:{NFSU2_TR(0x411610);
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
B411613:{NFSU2_TR(0x411613);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411620:L411620:{c.instructions+=5;NFSU2_TR(0x411620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411621:{NFSU2_TR(0x411621);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411624:{NFSU2_TR(0x411624);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41162a:{NFSU2_TR(0x41162a);
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
B41162c:{NFSU2_TR(0x41162c);
if(r1(R+518)){{goto L411679;}}
}
B41162e:L41162e:{c.instructions+=24;NFSU2_TR(0x41162e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B411632:{NFSU2_TR(0x411632);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411634:{NFSU2_TR(0x411634);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411637:{NFSU2_TR(0x411637);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B41163b:{NFSU2_TR(0x41163b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41163f:{NFSU2_TR(0x41163f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B411643:{NFSU2_TR(0x411643);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B411647:{NFSU2_TR(0x411647);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41164d:{NFSU2_TR(0x41164d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B411650:{NFSU2_TR(0x411650);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B411654:{NFSU2_TR(0x411654);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411655:{NFSU2_TR(0x411655);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41165b:{NFSU2_TR(0x41165b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41165d:{NFSU2_TR(0x41165d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41165f:{NFSU2_TR(0x41165f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B411661:{NFSU2_TR(0x411661);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411664:{NFSU2_TR(0x411664);
__builtin_memmove((R+4),(R+0),4);
}
B411666:{NFSU2_TR(0x411666);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B411669:{NFSU2_TR(0x411669);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41166b:{NFSU2_TR(0x41166b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B41166d:{NFSU2_TR(0x41166d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B411670:{NFSU2_TR(0x411670);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411672:{NFSU2_TR(0x411672);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411674:{NFSU2_TR(0x411674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411679ull));
TAIL_STATIC(0x401b70u,401);
}
B411679:L411679:{c.instructions+=2;NFSU2_TR(0x411679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41167a:{NFSU2_TR(0x41167a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411680:L411680:{c.instructions+=3;NFSU2_TR(0x411680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411681:{NFSU2_TR(0x411681);
__builtin_memmove((R+24),(R+4),4);
}
B411683:{NFSU2_TR(0x411683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411688ull));
TAIL_STATIC(0x40a1c0u,40a);
}
B411688:L411688:{c.instructions+=2;NFSU2_TR(0x411688);
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
B41168d:{NFSU2_TR(0x41168d);
if(r1(R+518)){{goto L411698;}}
}
B41168f:L41168f:{c.instructions+=2;NFSU2_TR(0x41168f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411690:{NFSU2_TR(0x411690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411695ull));
TAIL_STATIC(0x575630u,575);
}
B411695:L411695:{c.instructions+=1;NFSU2_TR(0x411695);
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
B411698:L411698:{c.instructions+=3;NFSU2_TR(0x411698);
__builtin_memmove((R+0),(R+24),4);
}
B41169a:{NFSU2_TR(0x41169a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41169b:{NFSU2_TR(0x41169b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4116a0:L4116a0:{c.instructions+=6;NFSU2_TR(0x4116a0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4116a5:{NFSU2_TR(0x4116a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4116a7:{NFSU2_TR(0x4116a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116a8:{NFSU2_TR(0x4116a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116a9:{NFSU2_TR(0x4116a9);
__builtin_memmove((R+28),(R+4),4);
}
B4116ab:{NFSU2_TR(0x4116ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4116b6;}}
}
B4116ad:L4116ad:{c.instructions+=3;NFSU2_TR(0x4116ad);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4116b2:{NFSU2_TR(0x4116b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4116b4:{NFSU2_TR(0x4116b4);
if(r1(R+518)){{goto L4116fd;}}
}
B4116b6:L4116b6:{c.instructions+=3;NFSU2_TR(0x4116b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4116ba:{NFSU2_TR(0x4116ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4116bc:{NFSU2_TR(0x4116bc);
if(r1(R+518)){{goto L4116fd;}}
}
B4116be:L4116be:{c.instructions+=10;NFSU2_TR(0x4116be);
__builtin_memmove((R+4),gp(0x89e7a4),4);
}
B4116c4:{NFSU2_TR(0x4116c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4116c7:{NFSU2_TR(0x4116c7);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116cc:{NFSU2_TR(0x4116cc);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116d1:{NFSU2_TR(0x4116d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116d2:{NFSU2_TR(0x4116d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116d3:{NFSU2_TR(0x4116d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4116d6:{NFSU2_TR(0x4116d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116d7:{NFSU2_TR(0x4116d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4116d8:{NFSU2_TR(0x4116d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4116ddull));
TAIL_STATIC(0x40f4a0u,40f);
}
B4116dd:L4116dd:{c.instructions+=3;NFSU2_TR(0x4116dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4116e0:{NFSU2_TR(0x4116e0);
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
B4116e3:{NFSU2_TR(0x4116e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41170d;}}
}
B4116e5:L4116e5:{c.instructions+=5;NFSU2_TR(0x4116e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4116e8:{NFSU2_TR(0x4116e8);
__builtin_memmove((R+0),gp(0x7ea100),4);
}
B4116ed:{NFSU2_TR(0x4116ed);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7ffull))));
}
B4116f3:{NFSU2_TR(0x4116f3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4116f5:{NFSU2_TR(0x4116f5);
if(r1(R+518)){{goto L4116fd;}}
}
B4116f7:L4116f7:{c.instructions+=1;NFSU2_TR(0x4116f7);
__builtin_memmove(gp(0x7ea100),(R+24),4);
}
B4116fd:L4116fd:{c.instructions+=4;NFSU2_TR(0x4116fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411700:{NFSU2_TR(0x411700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411703:{NFSU2_TR(0x411703);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B411706:{NFSU2_TR(0x411706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41170bull));
TAIL_STATIC(0x5b5330u,5b5);
}
B41170b:L41170b:{c.instructions+=1;NFSU2_TR(0x41170b);
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
B41170d:L41170d:{c.instructions+=3;NFSU2_TR(0x41170d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41170e:{NFSU2_TR(0x41170e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41170f:{NFSU2_TR(0x41170f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411720:L411720:{c.instructions+=8;NFSU2_TR(0x411720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411724:{NFSU2_TR(0x411724);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B411727:{NFSU2_TR(0x411727);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41172a:{NFSU2_TR(0x41172a);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B41172d:{NFSU2_TR(0x41172d);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B411730:{NFSU2_TR(0x411730);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+8))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B411732:{NFSU2_TR(0x411732);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B411735:{NFSU2_TR(0x411735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411740:L411740:{c.instructions+=7;NFSU2_TR(0x411740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411741:{NFSU2_TR(0x411741);
__builtin_memmove((R+24),(R+4),4);
}
B411743:{NFSU2_TR(0x411743);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411744:{NFSU2_TR(0x411744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41174a:{NFSU2_TR(0x41174a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41174c:{NFSU2_TR(0x41174c);
u8 U[4];
w4(U+0,u32(0x785064ull));
s4(u32(r4(R+24)),r4(U+0));
}
B411752:{NFSU2_TR(0x411752);
if(r1(R+518)){{goto L411764;}}
}
B411754:L411754:{c.instructions+=2;NFSU2_TR(0x411754);
__builtin_memmove((R+4),(R+28),4);
}
B411756:{NFSU2_TR(0x411756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41175bull));
TAIL_STATIC(0x5774a0u,577);
}
B41175b:L41175b:{c.instructions+=2;NFSU2_TR(0x41175b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41175c:{NFSU2_TR(0x41175c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411761ull));
TAIL_STATIC(0x575630u,575);
}
B411761:L411761:{c.instructions+=1;NFSU2_TR(0x411761);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B411764:L411764:{c.instructions+=3;NFSU2_TR(0x411764);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B411767:{NFSU2_TR(0x411767);
w4(R+28,u32(0x28ull));
}
B41176c:{NFSU2_TR(0x41176c);
__builtin_memmove((R+16),(R+16),4);
}
B411770:L411770:{c.instructions+=3;NFSU2_TR(0x411770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B411772:{NFSU2_TR(0x411772);
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
B411774:{NFSU2_TR(0x411774);
if(r1(R+518)){{goto L41177c;}}
}
B411776:L411776:{c.instructions+=3;NFSU2_TR(0x411776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B411778:{NFSU2_TR(0x411778);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41177a:{NFSU2_TR(0x41177a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41177cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41177c:L41177c:{c.instructions+=3;NFSU2_TR(0x41177c);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B41177f:{NFSU2_TR(0x41177f);
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
B411780:{NFSU2_TR(0x411780);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411770u);}goto L411770;}}
}
B411782:L411782:{c.instructions+=3;NFSU2_TR(0x411782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411783:{NFSU2_TR(0x411783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411784:{NFSU2_TR(0x411784);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411790:L411790:{c.instructions+=13;NFSU2_TR(0x411790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B411796:{NFSU2_TR(0x411796);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411797:{NFSU2_TR(0x411797);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411798:{NFSU2_TR(0x411798);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411799:{NFSU2_TR(0x411799);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4117a0:{NFSU2_TR(0x4117a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117a1:{NFSU2_TR(0x4117a1);
__builtin_memmove((R+28),(R+4),4);
}
B4117a3:{NFSU2_TR(0x4117a3);
u8 U[4];
w4(U+0,u32(0x785068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117a8:{NFSU2_TR(0x4117a8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4117aa:{NFSU2_TR(0x4117aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117ab:{NFSU2_TR(0x4117ab);
__builtin_memmove((R+4),(R+24),4);
}
B4117ad:{NFSU2_TR(0x4117ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4117b1:{NFSU2_TR(0x4117b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4117b6ull));
TAIL_STATIC(0x578ce0u,578);
}
B4117b6:L4117b6:{c.instructions+=3;NFSU2_TR(0x4117b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4117b9:{NFSU2_TR(0x4117b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B4117bc:{NFSU2_TR(0x4117bc);
if(r1(R+518)){{goto L4117ce;}}
}
B4117be:L4117be:{c.instructions+=3;NFSU2_TR(0x4117be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4117c4:{NFSU2_TR(0x4117c4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4117c6:{NFSU2_TR(0x4117c6);
if(r1(R+518)){{goto L4117ce;}}
}
B4117c8:L4117c8:{c.instructions+=2;NFSU2_TR(0x4117c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117c9:{NFSU2_TR(0x4117c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4117ceull));
TAIL_STATIC(0x5701d0u,570);
}
B4117ce:L4117ce:{c.instructions+=7;NFSU2_TR(0x4117ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117d0:{NFSU2_TR(0x4117d0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117d2:{NFSU2_TR(0x4117d2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117d4:{NFSU2_TR(0x4117d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4117da:{NFSU2_TR(0x4117da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117db:{NFSU2_TR(0x4117db);
__builtin_memmove((R+4),(R+24),4);
}
B4117dd:{NFSU2_TR(0x4117dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4117e2ull));
TAIL_STATIC(0x571640u,571);
}
B4117e2:L4117e2:{c.instructions+=7;NFSU2_TR(0x4117e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117e3:{NFSU2_TR(0x4117e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117e5:{NFSU2_TR(0x4117e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117e7:{NFSU2_TR(0x4117e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4117ed:{NFSU2_TR(0x4117ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117ee:{NFSU2_TR(0x4117ee);
__builtin_memmove((R+4),(R+24),4);
}
B4117f0:{NFSU2_TR(0x4117f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4117f5ull));
TAIL_STATIC(0x571640u,571);
}
B4117f5:L4117f5:{c.instructions+=7;NFSU2_TR(0x4117f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117f7:{NFSU2_TR(0x4117f7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117f9:{NFSU2_TR(0x4117f9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4117fb:{NFSU2_TR(0x4117fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((R+0),(U+0),4);
}
B411801:{NFSU2_TR(0x411801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411802:{NFSU2_TR(0x411802);
__builtin_memmove((R+4),(R+24),4);
}
B411804:{NFSU2_TR(0x411804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411809ull));
TAIL_STATIC(0x571640u,571);
}
B411809:L411809:{c.instructions+=7;NFSU2_TR(0x411809);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41180b:{NFSU2_TR(0x41180b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41180d:{NFSU2_TR(0x41180d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41180f:{NFSU2_TR(0x41180f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411812:{NFSU2_TR(0x411812);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411813:{NFSU2_TR(0x411813);
__builtin_memmove((R+4),(R+24),4);
}
B411815:{NFSU2_TR(0x411815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41181aull));
TAIL_STATIC(0x571640u,571);
}
B41181a:L41181a:{c.instructions+=4;NFSU2_TR(0x41181a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xadull))));
__builtin_memmove((R+4),(U+0),4);
}
B411820:{NFSU2_TR(0x411820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411821:{NFSU2_TR(0x411821);
__builtin_memmove((R+4),(R+24),4);
}
B411823:{NFSU2_TR(0x411823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411828ull));
TAIL_STATIC(0x5716c0u,571);
}
B411828:L411828:{c.instructions+=4;NFSU2_TR(0x411828);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaeull))));
__builtin_memmove((R+8),(U+0),4);
}
B41182e:{NFSU2_TR(0x41182e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41182f:{NFSU2_TR(0x41182f);
__builtin_memmove((R+4),(R+24),4);
}
B411831:{NFSU2_TR(0x411831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411836ull));
TAIL_STATIC(0x5716c0u,571);
}
B411836:L411836:{c.instructions+=7;NFSU2_TR(0x411836);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411837:{NFSU2_TR(0x411837);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411839:{NFSU2_TR(0x411839);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41183b:{NFSU2_TR(0x41183b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xafull))));
__builtin_memmove((R+0),(U+0),4);
}
B411841:{NFSU2_TR(0x411841);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411842:{NFSU2_TR(0x411842);
__builtin_memmove((R+4),(R+24),4);
}
B411844:{NFSU2_TR(0x411844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411849ull));
TAIL_STATIC(0x571640u,571);
}
B411849:L411849:{c.instructions+=7;NFSU2_TR(0x411849);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41184a:{NFSU2_TR(0x41184a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41184c:{NFSU2_TR(0x41184c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41184e:{NFSU2_TR(0x41184e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((R+4),(U+0),4);
}
B411854:{NFSU2_TR(0x411854);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411855:{NFSU2_TR(0x411855);
__builtin_memmove((R+4),(R+24),4);
}
B411857:{NFSU2_TR(0x411857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41185cull));
TAIL_STATIC(0x571640u,571);
}
B41185c:L41185c:{c.instructions+=4;NFSU2_TR(0x41185c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x354ull))));
__builtin_memmove((R+8),(U+0),4);
}
B411862:{NFSU2_TR(0x411862);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411863:{NFSU2_TR(0x411863);
__builtin_memmove((R+4),(R+24),4);
}
B411865:{NFSU2_TR(0x411865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41186aull));
TAIL_STATIC(0x571770u,571);
}
B41186a:L41186a:{c.instructions+=3;NFSU2_TR(0x41186a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+20)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B41186c:{NFSU2_TR(0x41186c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411870:{NFSU2_TR(0x411870);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4118c2;}}
}
B411872:L411872:{c.instructions+=4;NFSU2_TR(0x411872);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B411875:{NFSU2_TR(0x411875);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B411879:{NFSU2_TR(0x411879);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41187d:{NFSU2_TR(0x41187d);
__builtin_memmove((R+4),(R+4),4);
}
B411880:L411880:{c.instructions+=3;NFSU2_TR(0x411880);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B411883:{NFSU2_TR(0x411883);
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
B411885:{NFSU2_TR(0x411885);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411895;}}
}
B411887:L411887:{c.instructions+=4;NFSU2_TR(0x411887);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41188b:{NFSU2_TR(0x41188b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41188d:{NFSU2_TR(0x41188d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41188f:{NFSU2_TR(0x41188f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411892ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B411892:L411892:{c.instructions+=1;NFSU2_TR(0x411892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B411895:L411895:{c.instructions+=6;NFSU2_TR(0x411895);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411897:{NFSU2_TR(0x411897);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411899:{NFSU2_TR(0x411899);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41189b:{NFSU2_TR(0x41189b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41189c:{NFSU2_TR(0x41189c);
__builtin_memmove((R+4),(R+24),4);
}
B41189e:{NFSU2_TR(0x41189e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4118a3ull));
TAIL_STATIC(0x571640u,571);
}
B4118a3:L4118a3:{c.instructions+=10;NFSU2_TR(0x4118a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4118a7:{NFSU2_TR(0x4118a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4118ab:{NFSU2_TR(0x4118ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4118ae:{NFSU2_TR(0x4118ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4118af:{NFSU2_TR(0x4118af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4118b3:{NFSU2_TR(0x4118b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4118b5:{NFSU2_TR(0x4118b5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B4118b8:{NFSU2_TR(0x4118b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4118ba:{NFSU2_TR(0x4118ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4118be:{NFSU2_TR(0x4118be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411880u);}goto L411880;}}
}
B4118c0:L4118c0:{c.instructions+=1;NFSU2_TR(0x4118c0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4118c2:L4118c2:{c.instructions+=3;NFSU2_TR(0x4118c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4118c5:{NFSU2_TR(0x4118c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4118c7:{NFSU2_TR(0x4118c7);
if(r1(R+518)){{goto L4119a1;}}
}
B4118cd:L4118cd:{c.instructions+=6;NFSU2_TR(0x4118cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4118cf:{NFSU2_TR(0x4118cf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4118d1:{NFSU2_TR(0x4118d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4118d5:{NFSU2_TR(0x4118d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4118d7:{NFSU2_TR(0x4118d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4118db:{NFSU2_TR(0x4118db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4119a1;}}
}
B4118e1:L4118e1:{c.instructions+=3;NFSU2_TR(0x4118e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4118e5:{NFSU2_TR(0x4118e5);
u8 U[24];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+20))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4118e9:{NFSU2_TR(0x4118e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41191f;}}
}
B4118eb:L4118eb:{c.instructions+=3;NFSU2_TR(0x4118eb);
__builtin_memmove((R+4),gp(0x81cbb4),4);
}
B4118f1:{NFSU2_TR(0x4118f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4118f2:{NFSU2_TR(0x4118f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4118f7ull));
TAIL_STATIC(0x440e50u,440);
}
B4118f7:L4118f7:{c.instructions+=4;NFSU2_TR(0x4118f7);
__builtin_memmove((R+4),(R+0),4);
}
B4118f9:{NFSU2_TR(0x4118f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4118fc:{NFSU2_TR(0x4118fc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4118fe:{NFSU2_TR(0x4118fe);
if(r1(R+518)){{goto L411953;}}
}
B411900:L411900:{c.instructions+=6;NFSU2_TR(0x411900);
u8 U[4];
w4(U+0,u32(0x7846f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B411906:{NFSU2_TR(0x411906);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411909:{NFSU2_TR(0x411909);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41190c:{NFSU2_TR(0x41190c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41190f:{NFSU2_TR(0x41190f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411912:{NFSU2_TR(0x411912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411917ull));
TAIL_STATIC(0x40ad20u,40a);
}
B411917:L411917:{c.instructions+=2;NFSU2_TR(0x411917);
u8 U[4];
w4(U+0,u32(0x784a48ull));
s4(u32(r4(R+4)),r4(U+0));
}
B41191d:{NFSU2_TR(0x41191d);
{goto L411955;}
}
B41191f:L41191f:{c.instructions+=3;NFSU2_TR(0x41191f);
__builtin_memmove((R+8),gp(0x81cbb4),4);
}
B411925:{NFSU2_TR(0x411925);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411926:{NFSU2_TR(0x411926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41192bull));
TAIL_STATIC(0x440e50u,440);
}
B41192b:L41192b:{c.instructions+=4;NFSU2_TR(0x41192b);
__builtin_memmove((R+4),(R+0),4);
}
B41192d:{NFSU2_TR(0x41192d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B411930:{NFSU2_TR(0x411930);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411932:{NFSU2_TR(0x411932);
if(r1(R+518)){{goto L411953;}}
}
B411934:L411934:{c.instructions+=6;NFSU2_TR(0x411934);
u8 U[4];
w4(U+0,u32(0x7846f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B41193a:{NFSU2_TR(0x41193a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41193d:{NFSU2_TR(0x41193d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411940:{NFSU2_TR(0x411940);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411943:{NFSU2_TR(0x411943);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411946:{NFSU2_TR(0x411946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41194bull));
TAIL_STATIC(0x40ad20u,40a);
}
B41194b:L41194b:{c.instructions+=2;NFSU2_TR(0x41194b);
u8 U[4];
w4(U+0,u32(0x784aa0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B411951:{NFSU2_TR(0x411951);
{goto L411955;}
}
B411953:L411953:{c.instructions+=1;NFSU2_TR(0x411953);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B411955:L411955:{c.instructions+=3;NFSU2_TR(0x411955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B411957:{NFSU2_TR(0x411957);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x28ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41195a:{NFSU2_TR(0x41195a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411982;}}
}
B41195c:L41195c:{c.instructions+=4;NFSU2_TR(0x41195c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B411960:{NFSU2_TR(0x411960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B411962:{NFSU2_TR(0x411962);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411964:{NFSU2_TR(0x411964);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41197e;}}
}
B411966:L411966:{c.instructions+=7;NFSU2_TR(0x411966);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41196a:{NFSU2_TR(0x41196a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41196e:{NFSU2_TR(0x41196e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411971:{NFSU2_TR(0x411971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B411973:{NFSU2_TR(0x411973);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B411977:{NFSU2_TR(0x411977);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41197b:{NFSU2_TR(0x41197b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41197e:L41197e:{c.instructions+=2;NFSU2_TR(0x41197e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B411980:{NFSU2_TR(0x411980);
{goto L41198c;}
}
B411982:L411982:{c.instructions+=2;NFSU2_TR(0x411982);
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
B411984:{NFSU2_TR(0x411984);
if(r1(R+518)){{goto L41198c;}}
}
B411986:L411986:{c.instructions+=3;NFSU2_TR(0x411986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B411988:{NFSU2_TR(0x411988);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41198a:{NFSU2_TR(0x41198a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41198cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41198c:L41198c:{c.instructions+=6;NFSU2_TR(0x41198c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411990:{NFSU2_TR(0x411990);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411994:{NFSU2_TR(0x411994);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B411995:{NFSU2_TR(0x411995);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411997:{NFSU2_TR(0x411997);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41199b:{NFSU2_TR(0x41199b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4118e1u);}goto L4118e1;}}
}
B4119a1:L4119a1:{c.instructions+=2;NFSU2_TR(0x4119a1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4119a4:{NFSU2_TR(0x4119a4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4119ce;}}
}
B4119a6:L4119a6:{c.instructions+=3;NFSU2_TR(0x4119a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4119a9:{NFSU2_TR(0x4119a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4119ad:{NFSU2_TR(0x4119ad);
__builtin_memmove((R+4),(R+4),4);
}
B4119b0:L4119b0:{c.instructions+=4;NFSU2_TR(0x4119b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4119b4:{NFSU2_TR(0x4119b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4119b6:{NFSU2_TR(0x4119b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4119b7:{NFSU2_TR(0x4119b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4119bcull));
TAIL_STATIC(0x40ac20u,40a);
}
B4119bc:L4119bc:{c.instructions+=7;NFSU2_TR(0x4119bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4119c0:{NFSU2_TR(0x4119c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4119c2:{NFSU2_TR(0x4119c2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4119c3:{NFSU2_TR(0x4119c3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4119c6:{NFSU2_TR(0x4119c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4119c8:{NFSU2_TR(0x4119c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4119cc:{NFSU2_TR(0x4119cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4119b0u);}goto L4119b0;}}
}
B4119ce:L4119ce:{c.instructions+=4;NFSU2_TR(0x4119ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4119d4:{NFSU2_TR(0x4119d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4119d5:{NFSU2_TR(0x4119d5);
__builtin_memmove((R+4),(R+24),4);
}
B4119d7:{NFSU2_TR(0x4119d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4119dcull));
TAIL_STATIC(0x571770u,571);
}
B4119dc:L4119dc:{c.instructions+=2;NFSU2_TR(0x4119dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4119e2:{NFSU2_TR(0x4119e2);
w4(R+20,u32(0x4ull));
}
B4119e7:L4119e7:{c.instructions+=3;NFSU2_TR(0x4119e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4119e8:{NFSU2_TR(0x4119e8);
__builtin_memmove((R+4),(R+24),4);
}
B4119ea:{NFSU2_TR(0x4119ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4119efull));
TAIL_STATIC(0x571770u,571);
}
B4119ef:L4119ef:{c.instructions+=3;NFSU2_TR(0x4119ef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4119f2:{NFSU2_TR(0x4119f2);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B4119f3:{NFSU2_TR(0x4119f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4119e7u);}goto L4119e7;}}
}
B4119f5:L4119f5:{c.instructions+=7;NFSU2_TR(0x4119f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4119f7:{NFSU2_TR(0x4119f7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4119f9:{NFSU2_TR(0x4119f9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4119fb:{NFSU2_TR(0x4119fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411a01:{NFSU2_TR(0x411a01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a02:{NFSU2_TR(0x411a02);
__builtin_memmove((R+4),(R+24),4);
}
B411a04:{NFSU2_TR(0x411a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411a09ull));
TAIL_STATIC(0x571640u,571);
}
B411a09:L411a09:{c.instructions+=3;NFSU2_TR(0x411a09);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B411a0c:{NFSU2_TR(0x411a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411a14:{NFSU2_TR(0x411a14);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L411b3a;}}
}
B411a1a:L411a1a:{c.instructions+=3;NFSU2_TR(0x411a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4dull));
s4(u32(r4(U+0)),r4(U+4));
}
B411a22:{NFSU2_TR(0x411a22);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411a28:{NFSU2_TR(0x411a28);
{goto L411a30;}
}
B411a2a:L411a2a:{c.instructions+=2;NFSU2_TR(0x411a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B411a2e:{NFSU2_TR(0x411a2e);
__builtin_memmove((R+28),(R+28),4);
}
B411a30:L411a30:{c.instructions+=4;NFSU2_TR(0x411a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411a33:{NFSU2_TR(0x411a33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411a37:{NFSU2_TR(0x411a37);
__builtin_memmove((R+20),(R+12),4);
}
B411a39:{NFSU2_TR(0x411a39);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411a41:L411a41:{c.instructions+=6;NFSU2_TR(0x411a41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a43:{NFSU2_TR(0x411a43);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a45:{NFSU2_TR(0x411a45);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a47:{NFSU2_TR(0x411a47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a48:{NFSU2_TR(0x411a48);
__builtin_memmove((R+4),(R+24),4);
}
B411a4a:{NFSU2_TR(0x411a4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411a4full));
TAIL_STATIC(0x571640u,571);
}
B411a4f:L411a4f:{c.instructions+=4;NFSU2_TR(0x411a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B411a53:{NFSU2_TR(0x411a53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a54:{NFSU2_TR(0x411a54);
__builtin_memmove((R+4),(R+24),4);
}
B411a56:{NFSU2_TR(0x411a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411a5bull));
TAIL_STATIC(0x571770u,571);
}
B411a5b:L411a5b:{c.instructions+=8;NFSU2_TR(0x411a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411a5f:{NFSU2_TR(0x411a5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411a63:{NFSU2_TR(0x411a63);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B411a66:{NFSU2_TR(0x411a66);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B411a69:{NFSU2_TR(0x411a69);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B411a6a:{NFSU2_TR(0x411a6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411a6e:{NFSU2_TR(0x411a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411a72:{NFSU2_TR(0x411a72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411a41u);}goto L411a41;}}
}
B411a74:L411a74:{c.instructions+=3;NFSU2_TR(0x411a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x79ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411a77:{NFSU2_TR(0x411a77);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411a7f:{NFSU2_TR(0x411a7f);
}
B411a80:L411a80:{c.instructions+=4;NFSU2_TR(0x411a80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B411a83:{NFSU2_TR(0x411a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a84:{NFSU2_TR(0x411a84);
__builtin_memmove((R+4),(R+24),4);
}
B411a86:{NFSU2_TR(0x411a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411a8bull));
TAIL_STATIC(0x5716c0u,571);
}
B411a8b:L411a8b:{c.instructions+=3;NFSU2_TR(0x411a8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411a8c:{NFSU2_TR(0x411a8c);
__builtin_memmove((R+4),(R+24),4);
}
B411a8e:{NFSU2_TR(0x411a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411a93ull));
TAIL_STATIC(0x5716c0u,571);
}
B411a93:L411a93:{c.instructions+=5;NFSU2_TR(0x411a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411a97:{NFSU2_TR(0x411a97);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B411a98:{NFSU2_TR(0x411a98);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B411a99:{NFSU2_TR(0x411a99);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411a9d:{NFSU2_TR(0x411a9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411a80u);}goto L411a80;}}
}
B411a9f:L411a9f:{c.instructions+=5;NFSU2_TR(0x411a9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411aa3:{NFSU2_TR(0x411aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B411aa6:{NFSU2_TR(0x411aa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411aa7:{NFSU2_TR(0x411aa7);
__builtin_memmove((R+4),(R+24),4);
}
B411aa9:{NFSU2_TR(0x411aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411aaeull));
TAIL_STATIC(0x571770u,571);
}
B411aae:L411aae:{c.instructions+=4;NFSU2_TR(0x411aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411ab1:{NFSU2_TR(0x411ab1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B411ab4:{NFSU2_TR(0x411ab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411abc:{NFSU2_TR(0x411abc);
__builtin_memmove((R+16),(R+16),4);
}
B411ac0:L411ac0:{c.instructions+=6;NFSU2_TR(0x411ac0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ac2:{NFSU2_TR(0x411ac2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ac4:{NFSU2_TR(0x411ac4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ac6:{NFSU2_TR(0x411ac6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ac7:{NFSU2_TR(0x411ac7);
__builtin_memmove((R+4),(R+24),4);
}
B411ac9:{NFSU2_TR(0x411ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411aceull));
TAIL_STATIC(0x571640u,571);
}
B411ace:L411ace:{c.instructions+=3;NFSU2_TR(0x411ace);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411acf:{NFSU2_TR(0x411acf);
__builtin_memmove((R+4),(R+24),4);
}
B411ad1:{NFSU2_TR(0x411ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411ad6ull));
TAIL_STATIC(0x571770u,571);
}
B411ad6:L411ad6:{c.instructions+=6;NFSU2_TR(0x411ad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411ada:{NFSU2_TR(0x411ada);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B411add:{NFSU2_TR(0x411add);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B411ae0:{NFSU2_TR(0x411ae0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B411ae1:{NFSU2_TR(0x411ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411ae5:{NFSU2_TR(0x411ae5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411ac0u);}goto L411ac0;}}
}
B411ae7:L411ae7:{c.instructions+=4;NFSU2_TR(0x411ae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B411aea:{NFSU2_TR(0x411aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411aeb:{NFSU2_TR(0x411aeb);
__builtin_memmove((R+4),(R+24),4);
}
B411aed:{NFSU2_TR(0x411aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411af2ull));
TAIL_STATIC(0x571770u,571);
}
B411af2:L411af2:{c.instructions+=4;NFSU2_TR(0x411af2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411af5:{NFSU2_TR(0x411af5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411af6:{NFSU2_TR(0x411af6);
__builtin_memmove((R+4),(R+24),4);
}
B411af8:{NFSU2_TR(0x411af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411afdull));
TAIL_STATIC(0x5716c0u,571);
}
B411afd:L411afd:{c.instructions+=4;NFSU2_TR(0x411afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7dull))));
__builtin_memmove((R+8),(U+0),4);
}
B411b00:{NFSU2_TR(0x411b00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411b01:{NFSU2_TR(0x411b01);
__builtin_memmove((R+4),(R+24),4);
}
B411b03:{NFSU2_TR(0x411b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411b08ull));
TAIL_STATIC(0x5716c0u,571);
}
B411b08:L411b08:{c.instructions+=12;NFSU2_TR(0x411b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411b0c:{NFSU2_TR(0x411b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411b10:{NFSU2_TR(0x411b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B411b14:{NFSU2_TR(0x411b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B411b1a:{NFSU2_TR(0x411b1a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
}
B411b20:{NFSU2_TR(0x411b20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B411b21:{NFSU2_TR(0x411b21);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B411b24:{NFSU2_TR(0x411b24);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x80ull))));
}
B411b2a:{NFSU2_TR(0x411b2a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411b2c:{NFSU2_TR(0x411b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411b30:{NFSU2_TR(0x411b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411b34:{NFSU2_TR(0x411b34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411a2au);}goto L411a2a;}}
}
B411b3a:L411b3a:{c.instructions+=2;NFSU2_TR(0x411b3a);
__builtin_memmove((R+4),(R+24),4);
}
B411b3c:{NFSU2_TR(0x411b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411b41ull));
TAIL_STATIC(0x578d90u,578);
}
B411b41:L411b41:{c.instructions+=6;NFSU2_TR(0x411b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411b42:{NFSU2_TR(0x411b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411b43:{NFSU2_TR(0x411b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411b44:{NFSU2_TR(0x411b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411b45:{NFSU2_TR(0x411b45);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xb4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xb4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xb4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B411b4b:{NFSU2_TR(0x411b4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411b50:L411b50:{c.instructions+=7;NFSU2_TR(0x411b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411b54:{NFSU2_TR(0x411b54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411b55:{NFSU2_TR(0x411b55);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B411b57:{NFSU2_TR(0x411b57);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411b59:{NFSU2_TR(0x411b59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411b5a:{NFSU2_TR(0x411b5a);
__builtin_memmove((R+28),(R+4),4);
}
B411b5c:{NFSU2_TR(0x411b5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411b96;}}
}
B411b5e:L411b5e:{c.instructions+=3;NFSU2_TR(0x411b5e);
__builtin_memmove((R+0),gp(0x81cbb4),4);
}
B411b63:{NFSU2_TR(0x411b63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411b64:{NFSU2_TR(0x411b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411b69ull));
TAIL_STATIC(0x440e50u,440);
}
B411b69:L411b69:{c.instructions+=4;NFSU2_TR(0x411b69);
__builtin_memmove((R+4),(R+0),4);
}
B411b6b:{NFSU2_TR(0x411b6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B411b6e:{NFSU2_TR(0x411b6e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411b70:{NFSU2_TR(0x411b70);
if(r1(R+518)){{goto L411bcf;}}
}
B411b72:L411b72:{c.instructions+=6;NFSU2_TR(0x411b72);
u8 U[4];
w4(U+0,u32(0x7846f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B411b78:{NFSU2_TR(0x411b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411b7b:{NFSU2_TR(0x411b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411b7e:{NFSU2_TR(0x411b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411b81:{NFSU2_TR(0x411b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411b84:{NFSU2_TR(0x411b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411b89ull));
TAIL_STATIC(0x40ad20u,40a);
}
B411b89:L411b89:{c.instructions+=5;NFSU2_TR(0x411b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411b8a:{NFSU2_TR(0x411b8a);
u8 U[4];
w4(U+0,u32(0x784a48ull));
s4(u32(r4(R+4)),r4(U+0));
}
B411b90:{NFSU2_TR(0x411b90);
__builtin_memmove((R+0),(R+4),4);
}
B411b92:{NFSU2_TR(0x411b92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411b93:{NFSU2_TR(0x411b93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411b96:L411b96:{c.instructions+=3;NFSU2_TR(0x411b96);
__builtin_memmove((R+4),gp(0x81cbb4),4);
}
B411b9c:{NFSU2_TR(0x411b9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411b9d:{NFSU2_TR(0x411b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411ba2ull));
TAIL_STATIC(0x440e50u,440);
}
B411ba2:L411ba2:{c.instructions+=4;NFSU2_TR(0x411ba2);
__builtin_memmove((R+4),(R+0),4);
}
B411ba4:{NFSU2_TR(0x411ba4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B411ba7:{NFSU2_TR(0x411ba7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411ba9:{NFSU2_TR(0x411ba9);
if(r1(R+518)){{goto L411bcf;}}
}
B411bab:L411bab:{c.instructions+=6;NFSU2_TR(0x411bab);
u8 U[4];
w4(U+0,u32(0x7846f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B411bb1:{NFSU2_TR(0x411bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411bb4:{NFSU2_TR(0x411bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411bb7:{NFSU2_TR(0x411bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411bba:{NFSU2_TR(0x411bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411bbd:{NFSU2_TR(0x411bbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411bc2ull));
TAIL_STATIC(0x40ad20u,40a);
}
B411bc2:L411bc2:{c.instructions+=5;NFSU2_TR(0x411bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411bc3:{NFSU2_TR(0x411bc3);
u8 U[4];
w4(U+0,u32(0x784aa0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B411bc9:{NFSU2_TR(0x411bc9);
__builtin_memmove((R+0),(R+4),4);
}
B411bcb:{NFSU2_TR(0x411bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411bcc:{NFSU2_TR(0x411bcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411bcf:L411bcf:{c.instructions+=4;NFSU2_TR(0x411bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411bd0:{NFSU2_TR(0x411bd0);
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
B411bd2:{NFSU2_TR(0x411bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411bd3:{NFSU2_TR(0x411bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411be0:L411be0:{c.instructions+=12;NFSU2_TR(0x411be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411be1:{NFSU2_TR(0x411be1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411be2:{NFSU2_TR(0x411be2);
__builtin_memmove((R+24),(R+4),4);
}
B411be4:{NFSU2_TR(0x411be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411bea:{NFSU2_TR(0x411bea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B411bec:{NFSU2_TR(0x411bec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411bed:{NFSU2_TR(0x411bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411bf4:{NFSU2_TR(0x411bf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B411bfb:{NFSU2_TR(0x411bfb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B411c02:{NFSU2_TR(0x411c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411c0c:{NFSU2_TR(0x411c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
w4(U+4,u32(0xc7c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411c16:{NFSU2_TR(0x411c16);
if(r1(R+518)){{goto L411c1f;}}
}
B411c18:L411c18:{c.instructions+=2;NFSU2_TR(0x411c18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411c1a:{NFSU2_TR(0x411c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411c1full));
TAIL_STATIC(0x5701d0u,570);
}
B411c1f:L411c1f:{c.instructions+=2;NFSU2_TR(0x411c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411c22:{NFSU2_TR(0x411c22);
w4(R+20,u32(0x28ull));
}
B411c27:L411c27:{c.instructions+=3;NFSU2_TR(0x411c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B411c29:{NFSU2_TR(0x411c29);
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
B411c2b:{NFSU2_TR(0x411c2b);
if(r1(R+518)){{goto L411c39;}}
}
B411c2d:L411c2d:{c.instructions+=3;NFSU2_TR(0x411c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B411c2f:{NFSU2_TR(0x411c2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411c31:{NFSU2_TR(0x411c31);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411c33ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B411c33:L411c33:{c.instructions+=1;NFSU2_TR(0x411c33);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B411c39:L411c39:{c.instructions+=3;NFSU2_TR(0x411c39);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B411c3c:{NFSU2_TR(0x411c3c);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B411c3d:{NFSU2_TR(0x411c3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411c27u);}goto L411c27;}}
}
B411c3f:L411c3f:{c.instructions+=15;NFSU2_TR(0x411c3f);
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
B411c42:{NFSU2_TR(0x411c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411c48:{NFSU2_TR(0x411c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411c4e:{NFSU2_TR(0x411c4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B411c55:{NFSU2_TR(0x411c55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B411c5b:{NFSU2_TR(0x411c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411c65:{NFSU2_TR(0x411c65);
w4(R+4,u32(0x47c34f80ull));
}
B411c6a:{NFSU2_TR(0x411c6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B411c6c:{NFSU2_TR(0x411c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411c6f:{NFSU2_TR(0x411c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411c70:{NFSU2_TR(0x411c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411c73:{NFSU2_TR(0x411c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411c74:{NFSU2_TR(0x411c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411c77:{NFSU2_TR(0x411c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411c78:{NFSU2_TR(0x411c78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411c80:L411c80:{c.instructions+=9;NFSU2_TR(0x411c80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411c81:{NFSU2_TR(0x411c81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411c82:{NFSU2_TR(0x411c82);
__builtin_memmove((R+20),(R+4),4);
}
B411c84:{NFSU2_TR(0x411c84);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411c88:{NFSU2_TR(0x411c88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411c89:{NFSU2_TR(0x411c89);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B411c8c:{NFSU2_TR(0x411c8c);
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
B411c8e:{NFSU2_TR(0x411c8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411c8f:{NFSU2_TR(0x411c8f);
if(r1(R+518)){{goto L411cd8;}}
}
B411c91:L411c91:{c.instructions+=4;NFSU2_TR(0x411c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B411c94:{NFSU2_TR(0x411c94);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B411c96:{NFSU2_TR(0x411c96);
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
B411c98:{NFSU2_TR(0x411c98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L411cd8;}}
}
B411c9a:L411c9a:{c.instructions+=2;NFSU2_TR(0x411c9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411c9d:{NFSU2_TR(0x411c9d);
__builtin_memmove((R+4),(R+4),4);
}
B411ca0:L411ca0:{c.instructions+=5;NFSU2_TR(0x411ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411ca3:{NFSU2_TR(0x411ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B411ca5:{NFSU2_TR(0x411ca5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B411caa:{NFSU2_TR(0x411caa);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B411cae:{NFSU2_TR(0x411cae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411cc1;}}
}
B411cb0:L411cb0:{c.instructions+=1;NFSU2_TR(0x411cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411cb5ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B411cb5:L411cb5:{c.instructions+=3;NFSU2_TR(0x411cb5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B411cb9:{NFSU2_TR(0x411cb9);
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
B411cbb:{NFSU2_TR(0x411cbb);
if(r1(R+518)){{goto L411cd6;}}
}
B411cbd:L411cbd:{c.instructions+=1;NFSU2_TR(0x411cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411cc1:L411cc1:{c.instructions+=5;NFSU2_TR(0x411cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411cc4:{NFSU2_TR(0x411cc4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B411cc5:{NFSU2_TR(0x411cc5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B411cc8:{NFSU2_TR(0x411cc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411cca:{NFSU2_TR(0x411cca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411ca0u);}goto L411ca0;}}
}
B411ccc:L411ccc:{c.instructions+=6;NFSU2_TR(0x411ccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411ccd:{NFSU2_TR(0x411ccd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411cce:{NFSU2_TR(0x411cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411ccf:{NFSU2_TR(0x411ccf);
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
B411cd2:{NFSU2_TR(0x411cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411cd3:{NFSU2_TR(0x411cd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411cd6:L411cd6:{c.instructions+=1;NFSU2_TR(0x411cd6);
__builtin_memmove((R+0),(R+12),4);
}
B411cd8:L411cd8:{c.instructions+=5;NFSU2_TR(0x411cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411cd9:{NFSU2_TR(0x411cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411cda:{NFSU2_TR(0x411cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411cdb:{NFSU2_TR(0x411cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411cdc:{NFSU2_TR(0x411cdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411ce0:L411ce0:{c.instructions+=8;NFSU2_TR(0x411ce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411ce4:{NFSU2_TR(0x411ce4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ce5:{NFSU2_TR(0x411ce5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ce6:{NFSU2_TR(0x411ce6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ce7:{NFSU2_TR(0x411ce7);
__builtin_memmove((R+28),(R+4),4);
}
B411ce9:{NFSU2_TR(0x411ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411cec:{NFSU2_TR(0x411cec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B411cef:{NFSU2_TR(0x411cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411cf4ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B411cf4:L411cf4:{c.instructions+=4;NFSU2_TR(0x411cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B411cf8:{NFSU2_TR(0x411cf8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B411cfc:{NFSU2_TR(0x411cfc);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B411d00:{NFSU2_TR(0x411d00);
if(r1(R+518)){{goto L411d19;}}
}
B411d02:L411d02:{c.instructions+=2;NFSU2_TR(0x411d02);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B411d07:{NFSU2_TR(0x411d07);
if(r1(R+518)){{goto L411d19;}}
}
B411d09:L411d09:{c.instructions+=3;NFSU2_TR(0x411d09);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B411d0c:{NFSU2_TR(0x411d0c);
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
B411d0e:{NFSU2_TR(0x411d0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411d19;}}
}
B411d10:L411d10:{c.instructions+=2;NFSU2_TR(0x411d10);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B411d17:{NFSU2_TR(0x411d17);
{goto L411d1b;}
}
B411d19:L411d19:{c.instructions+=1;NFSU2_TR(0x411d19);
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
B411d1b:L411d1b:{c.instructions+=3;NFSU2_TR(0x411d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B411d1d:{NFSU2_TR(0x411d1d);
__builtin_memmove((R+4),(R+24),4);
}
B411d1f:{NFSU2_TR(0x411d1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411d22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B411d22:L411d22:{c.instructions+=7;NFSU2_TR(0x411d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B411d25:{NFSU2_TR(0x411d25);
__builtin_memmove((R+8),(R+0),4);
}
B411d27:{NFSU2_TR(0x411d27);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B411d29:{NFSU2_TR(0x411d29);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(R+8))));
w1(R+8,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B411d2b:{NFSU2_TR(0x411d2b);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x1ull))));
}
B411d2d:{NFSU2_TR(0x411d2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B411d2f:{NFSU2_TR(0x411d2f);
if(r1(R+518)){{goto L411d36;}}
}
B411d31:L411d31:{c.instructions+=2;NFSU2_TR(0x411d31);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411d34:{NFSU2_TR(0x411d34);
{goto L411d3c;}
}
B411d36:L411d36:{c.instructions+=1;NFSU2_TR(0x411d36);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411d3c:L411d3c:{c.instructions+=6;NFSU2_TR(0x411d3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B411d3e:{NFSU2_TR(0x411d3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411d40:{NFSU2_TR(0x411d40);
__builtin_memmove((R+0),(R+518),1);
}
B411d43:{NFSU2_TR(0x411d43);
u8 U[13];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B411d47:{NFSU2_TR(0x411d47);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411d49:{NFSU2_TR(0x411d49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411d6c;}}
}
B411d4b:L411d4b:{c.instructions+=3;NFSU2_TR(0x411d4b);
u8 U[13];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B411d4f:{NFSU2_TR(0x411d4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411d51:{NFSU2_TR(0x411d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411d6c;}}
}
B411d53:L411d53:{c.instructions+=5;NFSU2_TR(0x411d53);
{u32 ea_=u32(r4(R+28)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411d59:{NFSU2_TR(0x411d59);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B411d5b:{NFSU2_TR(0x411d5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B411d5d:{NFSU2_TR(0x411d5d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B411d60:{NFSU2_TR(0x411d60);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L411d66;}}
}
B411d62:L411d62:{c.instructions+=2;NFSU2_TR(0x411d62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411d64:{NFSU2_TR(0x411d64);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B411d66:L411d66:{c.instructions+=1;NFSU2_TR(0x411d66);
{u32 ea_=u32(r4(R+28)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B411d6c:L411d6c:{c.instructions+=4;NFSU2_TR(0x411d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411d72:{NFSU2_TR(0x411d72);
w4(R+4,u32(0x2ull));
}
B411d77:{NFSU2_TR(0x411d77);
w4(R+28,u32(0x4ull));
}
B411d7c:{NFSU2_TR(0x411d7c);
__builtin_memmove((R+16),(R+16),4);
}
B411d80:L411d80:{c.instructions+=2;NFSU2_TR(0x411d80);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B411d82:{NFSU2_TR(0x411d82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411d9f;}}
}
B411d84:L411d84:{c.instructions+=2;NFSU2_TR(0x411d84);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B411d86:{NFSU2_TR(0x411d86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411d92;}}
}
B411d88:L411d88:{c.instructions+=2;NFSU2_TR(0x411d88);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411d8b:{NFSU2_TR(0x411d8b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411d92;}}
}
B411d8d:L411d8d:{c.instructions+=2;NFSU2_TR(0x411d8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B411d90:{NFSU2_TR(0x411d90);
{goto L411da1;}
}
B411d92:L411d92:{c.instructions+=2;NFSU2_TR(0x411d92);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411d95:{NFSU2_TR(0x411d95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411d9f;}}
}
B411d97:L411d97:{c.instructions+=3;NFSU2_TR(0x411d97);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411d9a:{NFSU2_TR(0x411d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B411d9d:{NFSU2_TR(0x411d9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411da1;}}
}
B411d9f:L411d9f:{c.instructions+=1;NFSU2_TR(0x411d9f);
__builtin_memmove((R+0),(R+4),4);
}
B411da1:L411da1:{c.instructions+=2;NFSU2_TR(0x411da1);
u8 U[15];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B411da9:{NFSU2_TR(0x411da9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411dbc;}}
}
B411dab:L411dab:{c.instructions+=5;NFSU2_TR(0x411dab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411dad:{NFSU2_TR(0x411dad);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B411daf:{NFSU2_TR(0x411daf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B411db1:{NFSU2_TR(0x411db1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B411db4:{NFSU2_TR(0x411db4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L411dba;}}
}
B411db6:L411db6:{c.instructions+=2;NFSU2_TR(0x411db6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411db8:{NFSU2_TR(0x411db8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B411dba:L411dba:{c.instructions+=1;NFSU2_TR(0x411dba);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B411dbc:L411dbc:{c.instructions+=4;NFSU2_TR(0x411dbc);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B411dbf:{NFSU2_TR(0x411dbf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B411dc0:{NFSU2_TR(0x411dc0);
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
B411dc1:{NFSU2_TR(0x411dc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411d80u);}goto L411d80;}}
}
B411dc3:L411dc3:{c.instructions+=5;NFSU2_TR(0x411dc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411dc4:{NFSU2_TR(0x411dc4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411dc6:{NFSU2_TR(0x411dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411dc7:{NFSU2_TR(0x411dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411dc8:{NFSU2_TR(0x411dc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411dd0:L411dd0:{c.instructions+=9;NFSU2_TR(0x411dd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411dd1:{NFSU2_TR(0x411dd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411dd5:{NFSU2_TR(0x411dd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411dd6:{NFSU2_TR(0x411dd6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411dd8:{NFSU2_TR(0x411dd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411dda:{NFSU2_TR(0x411dda);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ddc:{NFSU2_TR(0x411ddc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411ddd:{NFSU2_TR(0x411ddd);
__builtin_memmove((R+24),(R+4),4);
}
B411ddf:{NFSU2_TR(0x411ddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x411de4ull));
TAIL_STATIC(0x40ab10u,40a);
}
B411de4:L411de4:{c.instructions+=2;NFSU2_TR(0x411de4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B411de7:{NFSU2_TR(0x411de7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411e32;}}
}
B411de9:L411de9:{c.instructions+=3;NFSU2_TR(0x411de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411dec:{NFSU2_TR(0x411dec);
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
B411dee:{NFSU2_TR(0x411dee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L411e27;}}
}
B411df0:L411df0:{c.instructions+=4;NFSU2_TR(0x411df0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B411df4:{NFSU2_TR(0x411df4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411df8:{NFSU2_TR(0x411df8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B411dfa:{NFSU2_TR(0x411dfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411e09;}}
}
B411dfc:L411dfc:{c.instructions+=2;NFSU2_TR(0x411dfc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B411dff:{NFSU2_TR(0x411dff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411e09;}}
}
B411e01:L411e01:{c.instructions+=4;NFSU2_TR(0x411e01);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411e04:{NFSU2_TR(0x411e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411e05:{NFSU2_TR(0x411e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411e06:{NFSU2_TR(0x411e06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411e09:L411e09:{c.instructions+=2;NFSU2_TR(0x411e09);
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
B411e0c:{NFSU2_TR(0x411e0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411e1c;}}
}
B411e0e:L411e0e:{c.instructions+=2;NFSU2_TR(0x411e0e);
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
B411e11:{NFSU2_TR(0x411e11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411e1c;}}
}
B411e13:L411e13:{c.instructions+=4;NFSU2_TR(0x411e13);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411e17:{NFSU2_TR(0x411e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411e18:{NFSU2_TR(0x411e18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411e19:{NFSU2_TR(0x411e19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411e1c:L411e1c:{c.instructions+=4;NFSU2_TR(0x411e1c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411e22:{NFSU2_TR(0x411e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411e23:{NFSU2_TR(0x411e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411e24:{NFSU2_TR(0x411e24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411e27:L411e27:{c.instructions+=4;NFSU2_TR(0x411e27);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411e2d:{NFSU2_TR(0x411e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411e2e:{NFSU2_TR(0x411e2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411e2f:{NFSU2_TR(0x411e2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411e32:L411e32:{c.instructions+=7;NFSU2_TR(0x411e32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411e33:{NFSU2_TR(0x411e33);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411e34:{NFSU2_TR(0x411e34);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B411e38:{NFSU2_TR(0x411e38);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B411e3c:{NFSU2_TR(0x411e3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B411e40:{NFSU2_TR(0x411e40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411e41:{NFSU2_TR(0x411e41);
if(r1(R+518)){{goto L411e72;}}
}
B411e43:L411e43:{c.instructions+=3;NFSU2_TR(0x411e43);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B411e47:{NFSU2_TR(0x411e47);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B411e4b:{NFSU2_TR(0x411e4b);
if(r1(R+518)){{goto L411e72;}}
}
B411e4d:L411e4d:{c.instructions+=3;NFSU2_TR(0x411e4d);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B411e50:{NFSU2_TR(0x411e50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B411e52:{NFSU2_TR(0x411e52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411e5d;}}
}
B411e54:L411e54:{c.instructions+=2;NFSU2_TR(0x411e54);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B411e5b:{NFSU2_TR(0x411e5b);
{goto L411e5f;}
}
B411e5d:L411e5d:{c.instructions+=1;NFSU2_TR(0x411e5d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B411e5f:L411e5f:{c.instructions+=5;NFSU2_TR(0x411e5f);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B411e62:{NFSU2_TR(0x411e62);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B411e65:{NFSU2_TR(0x411e65);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B411e6c:{NFSU2_TR(0x411e6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B411e70:{NFSU2_TR(0x411e70);
{goto L411e7a;}
}
B411e72:L411e72:{c.instructions+=1;NFSU2_TR(0x411e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411e7a:L411e7a:{c.instructions+=4;NFSU2_TR(0x411e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B411e7d:{NFSU2_TR(0x411e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411e80:{NFSU2_TR(0x411e80);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411e82:{NFSU2_TR(0x411e82);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411ee4;}}
}
B411e84:L411e84:{c.instructions+=2;NFSU2_TR(0x411e84);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B411e88:{NFSU2_TR(0x411e88);
{goto L411e90;}
}
B411e90:L411e90:{c.instructions+=4;NFSU2_TR(0x411e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B411e92:{NFSU2_TR(0x411e92);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B411e96:{NFSU2_TR(0x411e96);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B411e9a:{NFSU2_TR(0x411e9a);
if(r1(R+518)){{goto L411ed4;}}
}
B411e9c:L411e9c:{c.instructions+=3;NFSU2_TR(0x411e9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B411ea0:{NFSU2_TR(0x411ea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B411ea4:{NFSU2_TR(0x411ea4);
if(r1(R+518)){{goto L411ed4;}}
}
B411ea6:L411ea6:{c.instructions+=3;NFSU2_TR(0x411ea6);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B411ea9:{NFSU2_TR(0x411ea9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B411eab:{NFSU2_TR(0x411eab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411ec3;}}
}
B411ead:L411ead:{c.instructions+=5;NFSU2_TR(0x411ead);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B411eb4:{NFSU2_TR(0x411eb4);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B411eb7:{NFSU2_TR(0x411eb7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B411eba:{NFSU2_TR(0x411eba);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B411ec1:{NFSU2_TR(0x411ec1);
{goto L411ed6;}
}
B411ec3:L411ec3:{c.instructions+=5;NFSU2_TR(0x411ec3);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B411ec6:{NFSU2_TR(0x411ec6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B411ec8:{NFSU2_TR(0x411ec8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B411ecb:{NFSU2_TR(0x411ecb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B411ed2:{NFSU2_TR(0x411ed2);
{goto L411ed6;}
}
B411ed4:L411ed4:{c.instructions+=1;NFSU2_TR(0x411ed4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B411ed6:L411ed6:{c.instructions+=2;NFSU2_TR(0x411ed6);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B411eda:{NFSU2_TR(0x411eda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L411f00;}}
}
B411edc:L411edc:{c.instructions+=4;NFSU2_TR(0x411edc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B411edd:{NFSU2_TR(0x411edd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B411ee0:{NFSU2_TR(0x411ee0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411ee2:{NFSU2_TR(0x411ee2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x411e90u);}goto L411e90;}}
}
B411ee4:L411ee4:{c.instructions+=3;NFSU2_TR(0x411ee4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411ee8:{NFSU2_TR(0x411ee8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B411eea:{NFSU2_TR(0x411eea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411f73;}}
}
B411ef0:L411ef0:{c.instructions+=2;NFSU2_TR(0x411ef0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B411ef3:{NFSU2_TR(0x411ef3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411f73;}}
}
B411ef5:L411ef5:{c.instructions+=7;NFSU2_TR(0x411ef5);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411ef8:{NFSU2_TR(0x411ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411ef9:{NFSU2_TR(0x411ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411efa:{NFSU2_TR(0x411efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411efb:{NFSU2_TR(0x411efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411efc:{NFSU2_TR(0x411efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411efd:{NFSU2_TR(0x411efd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411f00:L411f00:{c.instructions+=6;NFSU2_TR(0x411f00);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f03:{NFSU2_TR(0x411f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411f07:{NFSU2_TR(0x411f07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B411f09:{NFSU2_TR(0x411f09);
{u32 ea_=u32(r4(R+20)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f0c:{NFSU2_TR(0x411f0c);
{u32 ea_=u32(r4(R+20)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B411f0f:{NFSU2_TR(0x411f0f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411f1b;}}
}
B411f11:L411f11:{c.instructions+=2;NFSU2_TR(0x411f11);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411f14:{NFSU2_TR(0x411f14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411f1b;}}
}
B411f16:L411f16:{c.instructions+=2;NFSU2_TR(0x411f16);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f19:{NFSU2_TR(0x411f19);
{goto L411f31;}
}
B411f1b:L411f1b:{c.instructions+=2;NFSU2_TR(0x411f1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411f1e:{NFSU2_TR(0x411f1e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411f2b;}}
}
B411f20:L411f20:{c.instructions+=2;NFSU2_TR(0x411f20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B411f23:{NFSU2_TR(0x411f23);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411f2b;}}
}
B411f25:L411f25:{c.instructions+=2;NFSU2_TR(0x411f25);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f29:{NFSU2_TR(0x411f29);
{goto L411f31;}
}
B411f2b:L411f2b:{c.instructions+=1;NFSU2_TR(0x411f2b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f31:L411f31:{c.instructions+=2;NFSU2_TR(0x411f31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B411f33:{NFSU2_TR(0x411f33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411f3f;}}
}
B411f35:L411f35:{c.instructions+=2;NFSU2_TR(0x411f35);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B411f38:{NFSU2_TR(0x411f38);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411f3f;}}
}
B411f3a:L411f3a:{c.instructions+=2;NFSU2_TR(0x411f3a);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f3d:{NFSU2_TR(0x411f3d);
{goto L411f55;}
}
B411f3f:L411f3f:{c.instructions+=2;NFSU2_TR(0x411f3f);
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
B411f42:{NFSU2_TR(0x411f42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411f4f;}}
}
B411f44:L411f44:{c.instructions+=2;NFSU2_TR(0x411f44);
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
B411f47:{NFSU2_TR(0x411f47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411f4f;}}
}
B411f49:L411f49:{c.instructions+=2;NFSU2_TR(0x411f49);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f4d:{NFSU2_TR(0x411f4d);
{goto L411f55;}
}
B411f4f:L411f4f:{c.instructions+=1;NFSU2_TR(0x411f4f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f55:L411f55:{c.instructions+=16;NFSU2_TR(0x411f55);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f59:{NFSU2_TR(0x411f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411f5a:{NFSU2_TR(0x411f5a);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B411f5c:{NFSU2_TR(0x411f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411f5d:{NFSU2_TR(0x411f5d);
__asm__ volatile(".byte 0xd9,0xcc":::"memory");
}
B411f5f:{NFSU2_TR(0x411f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411f60:{NFSU2_TR(0x411f60);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B411f62:{NFSU2_TR(0x411f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411f63:{NFSU2_TR(0x411f63);
__asm__ volatile(".byte 0xde,0xfc":::"memory");
}
B411f65:{NFSU2_TR(0x411f65);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B411f67:{NFSU2_TR(0x411f67);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B411f69:{NFSU2_TR(0x411f69);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B411f6b:{NFSU2_TR(0x411f6b);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B411f6d:{NFSU2_TR(0x411f6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B411f6f:{NFSU2_TR(0x411f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411f70:{NFSU2_TR(0x411f70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411f73:L411f73:{c.instructions+=2;NFSU2_TR(0x411f73);
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
B411f76:{NFSU2_TR(0x411f76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L411f89;}}
}
B411f78:L411f78:{c.instructions+=2;NFSU2_TR(0x411f78);
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
B411f7b:{NFSU2_TR(0x411f7b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L411f89;}}
}
B411f7d:L411f7d:{c.instructions+=7;NFSU2_TR(0x411f7d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f81:{NFSU2_TR(0x411f81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411f82:{NFSU2_TR(0x411f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411f83:{NFSU2_TR(0x411f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411f84:{NFSU2_TR(0x411f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411f85:{NFSU2_TR(0x411f85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411f86:{NFSU2_TR(0x411f86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411f89:L411f89:{c.instructions+=7;NFSU2_TR(0x411f89);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411f8f:{NFSU2_TR(0x411f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B411f90:{NFSU2_TR(0x411f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B411f91:{NFSU2_TR(0x411f91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B411f92:{NFSU2_TR(0x411f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B411f93:{NFSU2_TR(0x411f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B411f94:{NFSU2_TR(0x411f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B411fa0:L411fa0:{c.instructions+=15;NFSU2_TR(0x411fa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411fa1:{NFSU2_TR(0x411fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411fa5:{NFSU2_TR(0x411fa5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411fa6:{NFSU2_TR(0x411fa6);
__builtin_memmove((R+12),(R+4),4);
}
B411fa8:{NFSU2_TR(0x411fa8);
u8 U[4];
w4(U+0,u32(0x47c34f80ull));
s4(u32(r4(R+0)),r4(U+0));
}
B411fae:{NFSU2_TR(0x411fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B411fb1:{NFSU2_TR(0x411fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B411fb5:{NFSU2_TR(0x411fb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411fb6:{NFSU2_TR(0x411fb6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B411fb7:{NFSU2_TR(0x411fb7);
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
B411fb9:{NFSU2_TR(0x411fb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411fba:{NFSU2_TR(0x411fba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B411fbb:{NFSU2_TR(0x411fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B411fc3:{NFSU2_TR(0x411fc3);
__builtin_memmove((R+20),(R+0),4);
}
B411fc5:{NFSU2_TR(0x411fc5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4120a9u,412);}
}
B411fcb:L411fcb:{c.instructions+=9;NFSU2_TR(0x411fcb);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B411fcf:{NFSU2_TR(0x411fcf);
}
B411fd0:{NFSU2_TR(0x411fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B411fd3:{NFSU2_TR(0x411fd3);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B411fd6:{NFSU2_TR(0x411fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B411fd8:{NFSU2_TR(0x411fd8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B411fdc:{NFSU2_TR(0x411fdc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B411fde:{NFSU2_TR(0x411fde);
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
B411fe1:{NFSU2_TR(0x411fe1);
if(r1(R+518)){TAIL_STATIC(0x4120a9u,412);}
}
B411fe7:L411fe7:{c.instructions+=3;NFSU2_TR(0x411fe7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B411feb:{NFSU2_TR(0x411feb);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B411fef:{NFSU2_TR(0x411fef);
if(r1(R+518)){TAIL_STATIC(0x41202au,412);}
}
B411ff1:L411ff1:{c.instructions+=3;NFSU2_TR(0x411ff1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B411ff5:{NFSU2_TR(0x411ff5);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B411ff9:{NFSU2_TR(0x411ff9);
if(r1(R+518)){TAIL_STATIC(0x41202au,412);}
}
B411ffb:L411ffb:{c.instructions+=2;NFSU2_TR(0x411ffb);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B411ffe:{NFSU2_TR(0x411ffe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
TAIL_STATIC(0x412000u,412);
}
XIT:NFSU2_TR_EXIT(0x411,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
