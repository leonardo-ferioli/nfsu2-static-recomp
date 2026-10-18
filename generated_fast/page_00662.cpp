#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65d(u8* __restrict R,Cpu& c);
u32 body_65e(u8* __restrict R,Cpu& c);
u32 body_65f(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x662,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x662,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_662(u8* __restrict R,Cpu& c);
u32 page_662(Cpu& c){return body_662(c.regs.data(),c);}
__attribute__((noinline)) u32 body_662(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x662005:goto L662005;
case 0x662008:c.instructions+=1;goto B662008;
case 0x66200e:goto L66200e;
case 0x662011:c.instructions+=1;goto B662011;
case 0x662017:goto L662017;
case 0x66201a:c.instructions+=1;goto B66201a;
case 0x66201c:goto L66201c;
case 0x66201f:c.instructions+=1;goto B66201f;
case 0x662025:goto L662025;
case 0x662028:c.instructions+=4;goto B662028;
case 0x66202b:c.instructions+=3;goto B66202b;
case 0x66202d:c.instructions+=2;goto B66202d;
case 0x662030:c.instructions+=1;goto B662030;
case 0x662032:goto L662032;
case 0x662035:c.instructions+=4;goto B662035;
case 0x662039:c.instructions+=3;goto B662039;
case 0x66203b:c.instructions+=2;goto B66203b;
case 0x66203e:c.instructions+=1;goto B66203e;
case 0x662040:goto L662040;
case 0x662043:c.instructions+=3;goto B662043;
case 0x662046:c.instructions+=2;goto B662046;
case 0x662049:c.instructions+=1;goto B662049;
case 0x66204b:goto L66204b;
case 0x66204d:c.instructions+=1;goto B66204d;
case 0x66204e:goto L66204e;
case 0x66204f:c.instructions+=9;goto B66204f;
case 0x662050:c.instructions+=8;goto B662050;
case 0x662053:c.instructions+=7;goto B662053;
case 0x662054:c.instructions+=6;goto B662054;
case 0x662057:c.instructions+=5;goto B662057;
case 0x662058:c.instructions+=4;goto B662058;
case 0x66205b:c.instructions+=3;goto B66205b;
case 0x66205c:c.instructions+=2;goto B66205c;
case 0x66205e:c.instructions+=1;goto B66205e;
case 0x662063:goto L662063;
case 0x662065:c.instructions+=1;goto B662065;
case 0x66206b:goto L66206b;
case 0x66206e:c.instructions+=2;goto B66206e;
case 0x662071:c.instructions+=1;goto B662071;
case 0x662073:goto L662073;
case 0x662076:c.instructions+=1;goto B662076;
case 0x662078:goto L662078;
case 0x66207a:c.instructions+=1;goto B66207a;
case 0x66207f:goto L66207f;
case 0x662082:c.instructions+=1;goto B662082;
case 0x662088:goto L662088;
case 0x66208a:goto L66208a;
case 0x66208d:c.instructions+=1;goto B66208d;
case 0x662093:goto L662093;
case 0x662096:c.instructions+=1;goto B662096;
case 0x662098:goto L662098;
case 0x66209b:c.instructions+=1;goto B66209b;
case 0x66209d:goto L66209d;
case 0x66209f:c.instructions+=1;goto B66209f;
case 0x6620a1:goto L6620a1;
case 0x6620a7:c.instructions+=9;goto B6620a7;
case 0x6620aa:c.instructions+=8;goto B6620aa;
case 0x6620ad:c.instructions+=7;goto B6620ad;
case 0x6620b0:c.instructions+=6;goto B6620b0;
case 0x6620b3:c.instructions+=5;goto B6620b3;
case 0x6620b5:c.instructions+=4;goto B6620b5;
case 0x6620b8:c.instructions+=3;goto B6620b8;
case 0x6620ba:c.instructions+=2;goto B6620ba;
case 0x6620bc:c.instructions+=1;goto B6620bc;
case 0x6620c1:goto L6620c1;
case 0x6620c3:c.instructions+=1;goto B6620c3;
case 0x6620c9:goto L6620c9;
case 0x6620cd:c.instructions+=3;goto B6620cd;
case 0x6620d1:c.instructions+=2;goto B6620d1;
case 0x6620d4:c.instructions+=1;goto B6620d4;
case 0x6620d6:goto L6620d6;
case 0x6620d8:goto L6620d8;
case 0x6620da:c.instructions+=1;goto B6620da;
case 0x6620dc:goto L6620dc;
case 0x6620e2:c.instructions+=9;goto B6620e2;
case 0x6620e5:c.instructions+=8;goto B6620e5;
case 0x6620e8:c.instructions+=7;goto B6620e8;
case 0x6620eb:c.instructions+=6;goto B6620eb;
case 0x6620ee:c.instructions+=5;goto B6620ee;
case 0x6620f0:c.instructions+=4;goto B6620f0;
case 0x6620f3:c.instructions+=3;goto B6620f3;
case 0x6620f5:c.instructions+=2;goto B6620f5;
case 0x6620f7:c.instructions+=1;goto B6620f7;
case 0x6620fc:goto L6620fc;
case 0x6620fe:c.instructions+=1;goto B6620fe;
case 0x662104:goto L662104;
case 0x662108:c.instructions+=3;goto B662108;
case 0x66210c:c.instructions+=2;goto B66210c;
case 0x66210f:c.instructions+=1;goto B66210f;
case 0x662111:goto L662111;
case 0x662116:goto L662116;
case 0x662118:c.instructions+=1;goto B662118;
case 0x66211e:goto L66211e;
case 0x662124:c.instructions+=9;goto B662124;
case 0x662127:c.instructions+=8;goto B662127;
case 0x66212a:c.instructions+=7;goto B66212a;
case 0x66212d:c.instructions+=6;goto B66212d;
case 0x662130:c.instructions+=5;goto B662130;
case 0x662132:c.instructions+=4;goto B662132;
case 0x662135:c.instructions+=3;goto B662135;
case 0x662137:c.instructions+=2;goto B662137;
case 0x662139:c.instructions+=1;goto B662139;
case 0x66213e:goto L66213e;
case 0x662140:c.instructions+=1;goto B662140;
case 0x662146:goto L662146;
case 0x66214a:c.instructions+=3;goto B66214a;
case 0x66214e:c.instructions+=2;goto B66214e;
case 0x662151:c.instructions+=1;goto B662151;
case 0x662153:goto L662153;
case 0x662158:goto L662158;
case 0x66215a:c.instructions+=1;goto B66215a;
case 0x662160:goto L662160;
case 0x662166:c.instructions+=9;goto B662166;
case 0x662169:c.instructions+=8;goto B662169;
case 0x66216c:c.instructions+=7;goto B66216c;
case 0x66216f:c.instructions+=6;goto B66216f;
case 0x662172:c.instructions+=5;goto B662172;
case 0x662174:c.instructions+=4;goto B662174;
case 0x662177:c.instructions+=3;goto B662177;
case 0x662179:c.instructions+=2;goto B662179;
case 0x66217b:c.instructions+=1;goto B66217b;
case 0x662180:goto L662180;
case 0x662182:c.instructions+=1;goto B662182;
case 0x662188:goto L662188;
case 0x66218c:c.instructions+=3;goto B66218c;
case 0x662190:c.instructions+=2;goto B662190;
case 0x662193:c.instructions+=1;goto B662193;
case 0x662195:goto L662195;
case 0x66219a:goto L66219a;
case 0x66219d:c.instructions+=5;goto B66219d;
case 0x6621a0:c.instructions+=4;goto B6621a0;
case 0x6621a1:c.instructions+=3;goto B6621a1;
case 0x6621a4:c.instructions+=2;goto B6621a4;
case 0x6621a7:c.instructions+=1;goto B6621a7;
case 0x6621ad:goto L6621ad;
case 0x6621ae:c.instructions+=1;goto B6621ae;
case 0x6621b0:goto L6621b0;
case 0x6621b1:c.instructions+=1;goto B6621b1;
case 0x6621b7:goto L6621b7;
case 0x6621b9:c.instructions+=1;goto B6621b9;
case 0x6621bf:goto L6621bf;
case 0x6621c1:c.instructions+=3;goto B6621c1;
case 0x6621c4:c.instructions+=2;goto B6621c4;
case 0x6621c7:c.instructions+=1;goto B6621c7;
case 0x6621ca:goto L6621ca;
case 0x6621ce:c.instructions+=2;goto B6621ce;
case 0x6621d0:c.instructions+=1;goto B6621d0;
case 0x6621d2:goto L6621d2;
case 0x6621d4:c.instructions+=1;goto B6621d4;
case 0x6621d6:goto L6621d6;
case 0x6621d9:c.instructions+=6;goto B6621d9;
case 0x6621db:c.instructions+=5;goto B6621db;
case 0x6621dd:c.instructions+=4;goto B6621dd;
case 0x6621e0:c.instructions+=3;goto B6621e0;
case 0x6621e3:c.instructions+=2;goto B6621e3;
case 0x6621e6:c.instructions+=1;goto B6621e6;
case 0x6621e9:goto L6621e9;
case 0x6621ec:c.instructions+=7;goto B6621ec;
case 0x6621ef:c.instructions+=6;goto B6621ef;
case 0x6621f2:c.instructions+=5;goto B6621f2;
case 0x6621f5:c.instructions+=4;goto B6621f5;
case 0x6621f8:c.instructions+=3;goto B6621f8;
case 0x6621fa:c.instructions+=2;goto B6621fa;
case 0x6621fd:c.instructions+=1;goto B6621fd;
case 0x6621ff:goto L6621ff;
case 0x662202:goto L662202;
case 0x662205:c.instructions+=2;goto B662205;
case 0x662208:c.instructions+=1;goto B662208;
case 0x66220a:goto L66220a;
case 0x66220e:c.instructions+=3;goto B66220e;
case 0x662211:c.instructions+=2;goto B662211;
case 0x662214:c.instructions+=1;goto B662214;
case 0x662216:goto L662216;
case 0x66221b:goto L66221b;
case 0x66221d:c.instructions+=1;goto B66221d;
case 0x662223:goto L662223;
case 0x662225:c.instructions+=3;goto B662225;
case 0x662228:c.instructions+=2;goto B662228;
case 0x66222b:c.instructions+=1;goto B66222b;
case 0x66222e:goto L66222e;
case 0x662232:c.instructions+=2;goto B662232;
case 0x662234:c.instructions+=1;goto B662234;
case 0x662236:goto L662236;
case 0x662238:c.instructions+=1;goto B662238;
case 0x66223a:goto L66223a;
case 0x66223d:c.instructions+=5;goto B66223d;
case 0x66223f:c.instructions+=4;goto B66223f;
case 0x662241:c.instructions+=3;goto B662241;
case 0x662244:c.instructions+=2;goto B662244;
case 0x662247:c.instructions+=1;goto B662247;
case 0x66224a:goto L66224a;
case 0x66224d:c.instructions+=9;goto B66224d;
case 0x662250:c.instructions+=8;goto B662250;
case 0x662253:c.instructions+=7;goto B662253;
case 0x662256:c.instructions+=6;goto B662256;
case 0x662258:c.instructions+=5;goto B662258;
case 0x66225b:c.instructions+=4;goto B66225b;
case 0x66225e:c.instructions+=3;goto B66225e;
case 0x662260:c.instructions+=2;goto B662260;
case 0x662263:c.instructions+=1;goto B662263;
case 0x662265:goto L662265;
case 0x662268:goto L662268;
case 0x66226b:c.instructions+=2;goto B66226b;
case 0x66226e:c.instructions+=1;goto B66226e;
case 0x662270:goto L662270;
case 0x662274:c.instructions+=3;goto B662274;
case 0x662277:c.instructions+=2;goto B662277;
case 0x66227a:c.instructions+=1;goto B66227a;
case 0x66227c:goto L66227c;
case 0x662281:goto L662281;
case 0x662283:c.instructions+=1;goto B662283;
case 0x662289:goto L662289;
case 0x66228b:c.instructions+=3;goto B66228b;
case 0x66228e:c.instructions+=2;goto B66228e;
case 0x662291:c.instructions+=1;goto B662291;
case 0x662294:goto L662294;
case 0x662298:c.instructions+=2;goto B662298;
case 0x66229a:c.instructions+=1;goto B66229a;
case 0x66229c:goto L66229c;
case 0x66229e:c.instructions+=1;goto B66229e;
case 0x6622a0:goto L6622a0;
case 0x6622a3:c.instructions+=5;goto B6622a3;
case 0x6622a5:c.instructions+=4;goto B6622a5;
case 0x6622a7:c.instructions+=3;goto B6622a7;
case 0x6622aa:c.instructions+=2;goto B6622aa;
case 0x6622ad:c.instructions+=1;goto B6622ad;
case 0x6622b0:goto L6622b0;
case 0x6622b3:c.instructions+=11;goto B6622b3;
case 0x6622b5:c.instructions+=10;goto B6622b5;
case 0x6622b8:c.instructions+=9;goto B6622b8;
case 0x6622bb:c.instructions+=8;goto B6622bb;
case 0x6622be:c.instructions+=7;goto B6622be;
case 0x6622c1:c.instructions+=6;goto B6622c1;
case 0x6622c3:c.instructions+=5;goto B6622c3;
case 0x6622c6:c.instructions+=4;goto B6622c6;
case 0x6622c9:c.instructions+=3;goto B6622c9;
case 0x6622cb:c.instructions+=2;goto B6622cb;
case 0x6622ce:c.instructions+=1;goto B6622ce;
case 0x6622d0:goto L6622d0;
case 0x6622d3:goto L6622d3;
case 0x6622d6:c.instructions+=2;goto B6622d6;
case 0x6622d9:c.instructions+=1;goto B6622d9;
case 0x6622db:goto L6622db;
case 0x6622df:c.instructions+=3;goto B6622df;
case 0x6622e2:c.instructions+=2;goto B6622e2;
case 0x6622e5:c.instructions+=1;goto B6622e5;
case 0x6622e7:goto L6622e7;
case 0x6622ec:goto L6622ec;
case 0x6622ef:c.instructions+=9;goto B6622ef;
case 0x6622f2:c.instructions+=8;goto B6622f2;
case 0x6622f5:c.instructions+=7;goto B6622f5;
case 0x6622f7:c.instructions+=6;goto B6622f7;
case 0x6622f8:c.instructions+=5;goto B6622f8;
case 0x6622fa:c.instructions+=4;goto B6622fa;
case 0x6622fd:c.instructions+=3;goto B6622fd;
case 0x662300:c.instructions+=2;goto B662300;
case 0x662302:c.instructions+=1;goto B662302;
case 0x662304:goto L662304;
case 0x662306:c.instructions+=1;goto B662306;
case 0x662308:goto L662308;
case 0x66230b:goto L66230b;
case 0x66230d:c.instructions+=5;goto B66230d;
case 0x66230f:c.instructions+=4;goto B66230f;
case 0x662312:c.instructions+=3;goto B662312;
case 0x662315:c.instructions+=2;goto B662315;
case 0x662318:c.instructions+=1;goto B662318;
case 0x66231a:goto L66231a;
case 0x66231c:goto L66231c;
case 0x66231e:c.instructions+=1;goto B66231e;
case 0x662320:goto L662320;
case 0x662325:goto L662325;
case 0x66232a:goto L66232a;
case 0x66232b:c.instructions+=4;goto B66232b;
case 0x66232c:c.instructions+=3;goto B66232c;
case 0x66232d:c.instructions+=2;goto B66232d;
case 0x66232e:c.instructions+=1;goto B66232e;
case 0x662331:goto L662331;
case 0x662333:c.instructions+=11;goto B662333;
case 0x662334:c.instructions+=10;goto B662334;
case 0x662336:c.instructions+=9;goto B662336;
case 0x662339:c.instructions+=8;goto B662339;
case 0x66233c:c.instructions+=7;goto B66233c;
case 0x66233f:c.instructions+=6;goto B66233f;
case 0x662340:c.instructions+=5;goto B662340;
case 0x662343:c.instructions+=4;goto B662343;
case 0x662344:c.instructions+=3;goto B662344;
case 0x662347:c.instructions+=2;goto B662347;
case 0x662348:c.instructions+=1;goto B662348;
case 0x66234d:goto L66234d;
case 0x66234e:c.instructions+=1;goto B66234e;
case 0x662351:goto L662351;
case 0x662353:c.instructions+=6;goto B662353;
case 0x662354:c.instructions+=5;goto B662354;
case 0x662356:c.instructions+=4;goto B662356;
case 0x662359:c.instructions+=3;goto B662359;
case 0x66235c:c.instructions+=2;goto B66235c;
case 0x66235f:c.instructions+=1;goto B66235f;
case 0x662364:goto L662364;
case 0x662365:c.instructions+=1;goto B662365;
case 0x662368:goto L662368;
case 0x66236a:c.instructions+=4;goto B66236a;
case 0x66236b:c.instructions+=3;goto B66236b;
case 0x66236d:c.instructions+=2;goto B66236d;
case 0x662371:c.instructions+=1;goto B662371;
case 0x662373:goto L662373;
case 0x662378:c.instructions+=1;goto B662378;
case 0x66237a:goto L66237a;
case 0x66237d:c.instructions+=3;goto B66237d;
case 0x662380:c.instructions+=2;goto B662380;
case 0x662383:c.instructions+=1;goto B662383;
case 0x662388:goto L662388;
case 0x662389:c.instructions+=1;goto B662389;
case 0x66238c:goto L66238c;
case 0x66238e:c.instructions+=6;goto B66238e;
case 0x66238f:c.instructions+=5;goto B66238f;
case 0x662391:c.instructions+=4;goto B662391;
case 0x662395:c.instructions+=3;goto B662395;
case 0x662396:c.instructions+=2;goto B662396;
case 0x662398:c.instructions+=1;goto B662398;
case 0x66239a:goto L66239a;
case 0x66239b:c.instructions+=6;goto B66239b;
case 0x6623a0:c.instructions+=5;goto B6623a0;
case 0x6623a3:c.instructions+=4;goto B6623a3;
case 0x6623a5:c.instructions+=3;goto B6623a5;
case 0x6623a7:c.instructions+=2;goto B6623a7;
case 0x6623a8:c.instructions+=1;goto B6623a8;
case 0x6623ad:goto L6623ad;
case 0x6623b1:c.instructions+=1;goto B6623b1;
case 0x6623b3:goto L6623b3;
case 0x6623b4:c.instructions+=1;goto B6623b4;
case 0x6623b9:goto L6623b9;
case 0x6623ba:goto L6623ba;
case 0x6623bc:c.instructions+=2;goto B6623bc;
case 0x6623bd:c.instructions+=1;goto B6623bd;
case 0x6623bf:goto L6623bf;
case 0x6623c1:c.instructions+=1;goto B6623c1;
case 0x6623c6:goto L6623c6;
case 0x6623ca:c.instructions+=1;goto B6623ca;
case 0x6623cc:goto L6623cc;
case 0x6623cd:c.instructions+=1;goto B6623cd;
case 0x6623d2:goto L6623d2;
case 0x6623d3:goto L6623d3;
case 0x6623d5:goto L6623d5;
case 0x6623d6:c.instructions+=2;goto B6623d6;
case 0x6623d7:c.instructions+=1;goto B6623d7;
case 0x6623da:goto L6623da;
case 0x6623dc:c.instructions+=16;goto B6623dc;
case 0x6623dd:c.instructions+=15;goto B6623dd;
case 0x6623df:c.instructions+=14;goto B6623df;
case 0x6623e2:c.instructions+=13;goto B6623e2;
case 0x6623e5:c.instructions+=12;goto B6623e5;
case 0x6623e8:c.instructions+=11;goto B6623e8;
case 0x6623ea:c.instructions+=10;goto B6623ea;
case 0x6623ed:c.instructions+=9;goto B6623ed;
case 0x6623ee:c.instructions+=8;goto B6623ee;
case 0x6623f1:c.instructions+=7;goto B6623f1;
case 0x6623f3:c.instructions+=6;goto B6623f3;
case 0x6623f4:c.instructions+=5;goto B6623f4;
case 0x6623f5:c.instructions+=4;goto B6623f5;
case 0x6623f8:c.instructions+=3;goto B6623f8;
case 0x6623fb:c.instructions+=2;goto B6623fb;
case 0x6623fe:c.instructions+=1;goto B6623fe;
case 0x662400:goto L662400;
case 0x662403:c.instructions+=2;goto B662403;
case 0x662406:c.instructions+=1;goto B662406;
case 0x662408:goto L662408;
case 0x66240a:goto L66240a;
case 0x66240c:c.instructions+=1;goto B66240c;
case 0x66240e:goto L66240e;
case 0x662411:c.instructions+=2;goto B662411;
case 0x662414:c.instructions+=1;goto B662414;
case 0x662416:goto L662416;
case 0x662419:c.instructions+=1;goto B662419;
case 0x66241c:goto L66241c;
case 0x66241f:c.instructions+=2;goto B66241f;
case 0x662422:c.instructions+=1;goto B662422;
case 0x662424:goto L662424;
case 0x662427:c.instructions+=1;goto B662427;
case 0x662429:goto L662429;
case 0x66242c:c.instructions+=3;goto B66242c;
case 0x66242e:c.instructions+=2;goto B66242e;
case 0x662431:c.instructions+=1;goto B662431;
case 0x662433:goto L662433;
case 0x66243a:goto L66243a;
case 0x66243c:c.instructions+=1;goto B66243c;
case 0x662442:goto L662442;
case 0x662445:c.instructions+=1;goto B662445;
case 0x66244b:goto L66244b;
case 0x66244e:c.instructions+=1;goto B66244e;
case 0x662454:goto L662454;
case 0x662457:c.instructions+=1;goto B662457;
case 0x66245d:goto L66245d;
case 0x662460:c.instructions+=1;goto B662460;
case 0x662466:goto L662466;
case 0x66246a:c.instructions+=2;goto B66246a;
case 0x66246c:c.instructions+=1;goto B66246c;
case 0x66246e:goto L66246e;
case 0x662471:c.instructions+=2;goto B662471;
case 0x662473:c.instructions+=1;goto B662473;
case 0x662476:goto L662476;
case 0x66247a:c.instructions+=4;goto B66247a;
case 0x66247e:c.instructions+=3;goto B66247e;
case 0x662481:c.instructions+=2;goto B662481;
case 0x662484:c.instructions+=1;goto B662484;
case 0x66248a:goto L66248a;
case 0x66248e:c.instructions+=1;goto B66248e;
case 0x662494:goto L662494;
case 0x662498:c.instructions+=3;goto B662498;
case 0x66249a:c.instructions+=2;goto B66249a;
case 0x66249d:c.instructions+=1;goto B66249d;
case 0x66249f:goto L66249f;
case 0x6624a2:c.instructions+=1;goto B6624a2;
case 0x6624a5:goto L6624a5;
case 0x6624a9:c.instructions+=1;goto B6624a9;
case 0x6624ab:goto L6624ab;
case 0x6624af:c.instructions+=1;goto B6624af;
case 0x6624b1:goto L6624b1;
case 0x6624b3:c.instructions+=1;goto B6624b3;
case 0x6624b6:goto L6624b6;
case 0x6624b8:c.instructions+=11;goto B6624b8;
case 0x6624bb:c.instructions+=10;goto B6624bb;
case 0x6624bc:c.instructions+=9;goto B6624bc;
case 0x6624bf:c.instructions+=8;goto B6624bf;
case 0x6624c2:c.instructions+=7;goto B6624c2;
case 0x6624c5:c.instructions+=6;goto B6624c5;
case 0x6624c6:c.instructions+=5;goto B6624c6;
case 0x6624c9:c.instructions+=4;goto B6624c9;
case 0x6624ca:c.instructions+=3;goto B6624ca;
case 0x6624cd:c.instructions+=2;goto B6624cd;
case 0x6624ce:c.instructions+=1;goto B6624ce;
case 0x6624d3:goto L6624d3;
case 0x6624d6:c.instructions+=4;goto B6624d6;
case 0x6624d9:c.instructions+=3;goto B6624d9;
case 0x6624dc:c.instructions+=2;goto B6624dc;
case 0x6624df:c.instructions+=1;goto B6624df;
case 0x6624e1:goto L6624e1;
case 0x6624e4:c.instructions+=3;goto B6624e4;
case 0x6624e7:c.instructions+=2;goto B6624e7;
case 0x6624ea:c.instructions+=1;goto B6624ea;
case 0x6624ec:goto L6624ec;
case 0x6624f1:goto L6624f1;
case 0x6624f4:c.instructions+=6;goto B6624f4;
case 0x6624f7:c.instructions+=5;goto B6624f7;
case 0x6624fa:c.instructions+=4;goto B6624fa;
case 0x6624fc:c.instructions+=3;goto B6624fc;
case 0x6624fd:c.instructions+=2;goto B6624fd;
case 0x662500:c.instructions+=1;goto B662500;
case 0x662506:goto L662506;
case 0x662507:c.instructions+=1;goto B662507;
case 0x662509:goto L662509;
case 0x66250a:c.instructions+=1;goto B66250a;
case 0x662510:goto L662510;
case 0x662513:c.instructions+=6;goto B662513;
case 0x662517:c.instructions+=5;goto B662517;
case 0x66251b:c.instructions+=4;goto B66251b;
case 0x66251d:c.instructions+=3;goto B66251d;
case 0x662520:c.instructions+=2;goto B662520;
case 0x662523:c.instructions+=1;goto B662523;
case 0x662525:goto L662525;
case 0x662527:c.instructions+=2;goto B662527;
case 0x662529:c.instructions+=1;goto B662529;
case 0x66252b:goto L66252b;
case 0x66252e:c.instructions+=1;goto B66252e;
case 0x662530:goto L662530;
case 0x662533:goto L662533;
case 0x662535:c.instructions+=1;goto B662535;
case 0x662537:goto L662537;
case 0x662539:c.instructions+=2;goto B662539;
case 0x66253c:c.instructions+=1;goto B66253c;
case 0x66253e:goto L66253e;
case 0x662540:goto L662540;
case 0x662542:c.instructions+=5;goto B662542;
case 0x662545:c.instructions+=4;goto B662545;
case 0x662548:c.instructions+=3;goto B662548;
case 0x662549:c.instructions+=2;goto B662549;
case 0x66254c:c.instructions+=1;goto B66254c;
case 0x66254e:goto L66254e;
case 0x662551:c.instructions+=5;goto B662551;
case 0x662552:c.instructions+=4;goto B662552;
case 0x662553:c.instructions+=3;goto B662553;
case 0x662556:c.instructions+=2;goto B662556;
case 0x662559:c.instructions+=1;goto B662559;
case 0x66255b:goto L66255b;
case 0x66255f:c.instructions+=4;goto B66255f;
case 0x662562:c.instructions+=3;goto B662562;
case 0x662565:c.instructions+=2;goto B662565;
case 0x662568:c.instructions+=1;goto B662568;
case 0x66256a:goto L66256a;
case 0x66256c:c.instructions+=1;goto B66256c;
case 0x662571:goto L662571;
case 0x662575:c.instructions+=3;goto B662575;
case 0x662579:c.instructions+=2;goto B662579;
case 0x66257c:c.instructions+=1;goto B66257c;
case 0x662582:goto L662582;
case 0x662584:c.instructions+=2;goto B662584;
case 0x662586:c.instructions+=1;goto B662586;
case 0x66258c:goto L66258c;
case 0x66258f:c.instructions+=1;goto B66258f;
case 0x662591:goto L662591;
case 0x662593:c.instructions+=2;goto B662593;
case 0x662595:c.instructions+=1;goto B662595;
case 0x662597:goto L662597;
case 0x66259a:c.instructions+=1;goto B66259a;
case 0x66259c:goto L66259c;
case 0x66259e:c.instructions+=1;goto B66259e;
case 0x6625a1:goto L6625a1;
case 0x6625a4:c.instructions+=6;goto B6625a4;
case 0x6625a7:c.instructions+=5;goto B6625a7;
case 0x6625aa:c.instructions+=4;goto B6625aa;
case 0x6625ad:c.instructions+=3;goto B6625ad;
case 0x6625ae:c.instructions+=2;goto B6625ae;
case 0x6625b1:c.instructions+=1;goto B6625b1;
case 0x6625b3:goto L6625b3;
case 0x6625b6:c.instructions+=4;goto B6625b6;
case 0x6625b7:c.instructions+=3;goto B6625b7;
case 0x6625b8:c.instructions+=2;goto B6625b8;
case 0x6625bb:c.instructions+=1;goto B6625bb;
case 0x6625bd:goto L6625bd;
case 0x6625c0:c.instructions+=3;goto B6625c0;
case 0x6625c3:c.instructions+=2;goto B6625c3;
case 0x6625c6:c.instructions+=1;goto B6625c6;
case 0x6625c8:goto L6625c8;
case 0x6625cd:goto L6625cd;
case 0x6625d1:c.instructions+=3;goto B6625d1;
case 0x6625d5:c.instructions+=2;goto B6625d5;
case 0x6625d8:c.instructions+=1;goto B6625d8;
case 0x6625de:goto L6625de;
case 0x6625e0:c.instructions+=2;goto B6625e0;
case 0x6625e2:c.instructions+=1;goto B6625e2;
case 0x6625e8:goto L6625e8;
case 0x6625eb:c.instructions+=1;goto B6625eb;
case 0x6625ed:goto L6625ed;
case 0x6625ef:c.instructions+=2;goto B6625ef;
case 0x6625f1:c.instructions+=1;goto B6625f1;
case 0x6625f3:goto L6625f3;
case 0x6625f6:c.instructions+=1;goto B6625f6;
case 0x6625f8:goto L6625f8;
case 0x6625fa:c.instructions+=1;goto B6625fa;
case 0x6625fd:goto L6625fd;
case 0x662600:c.instructions+=6;goto B662600;
case 0x662603:c.instructions+=5;goto B662603;
case 0x662606:c.instructions+=4;goto B662606;
case 0x662609:c.instructions+=3;goto B662609;
case 0x66260a:c.instructions+=2;goto B66260a;
case 0x66260d:c.instructions+=1;goto B66260d;
case 0x66260f:goto L66260f;
case 0x662612:c.instructions+=4;goto B662612;
case 0x662613:c.instructions+=3;goto B662613;
case 0x662614:c.instructions+=2;goto B662614;
case 0x662617:c.instructions+=1;goto B662617;
case 0x662619:goto L662619;
case 0x66261c:c.instructions+=3;goto B66261c;
case 0x66261f:c.instructions+=2;goto B66261f;
case 0x662622:c.instructions+=1;goto B662622;
case 0x662624:goto L662624;
case 0x662629:goto L662629;
case 0x66262c:c.instructions+=8;goto B66262c;
case 0x66262e:c.instructions+=7;goto B66262e;
case 0x662631:c.instructions+=6;goto B662631;
case 0x662633:c.instructions+=5;goto B662633;
case 0x662636:c.instructions+=4;goto B662636;
case 0x662639:c.instructions+=3;goto B662639;
case 0x66263c:c.instructions+=2;goto B66263c;
case 0x66263f:c.instructions+=1;goto B66263f;
case 0x662641:goto L662641;
case 0x662643:c.instructions+=4;goto B662643;
case 0x662644:c.instructions+=3;goto B662644;
case 0x662646:c.instructions+=2;goto B662646;
case 0x662649:c.instructions+=1;goto B662649;
case 0x66264c:goto L66264c;
case 0x66264d:c.instructions+=1;goto B66264d;
case 0x662653:goto L662653;
case 0x662654:c.instructions+=1;goto B662654;
case 0x662656:goto L662656;
case 0x662657:c.instructions+=1;goto B662657;
case 0x66265d:goto L66265d;
case 0x662660:c.instructions+=4;goto B662660;
case 0x662663:c.instructions+=3;goto B662663;
case 0x662665:c.instructions+=2;goto B662665;
case 0x662668:c.instructions+=1;goto B662668;
case 0x66266e:goto L66266e;
case 0x662670:c.instructions+=1;goto B662670;
case 0x662676:goto L662676;
case 0x662678:c.instructions+=2;goto B662678;
case 0x66267b:c.instructions+=1;goto B66267b;
case 0x66267d:goto L66267d;
case 0x66267f:c.instructions+=1;goto B66267f;
case 0x662681:goto L662681;
case 0x662683:c.instructions+=13;goto B662683;
case 0x662685:c.instructions+=12;goto B662685;
case 0x662688:c.instructions+=11;goto B662688;
case 0x66268b:c.instructions+=10;goto B66268b;
case 0x66268e:c.instructions+=9;goto B66268e;
case 0x662691:c.instructions+=8;goto B662691;
case 0x662694:c.instructions+=7;goto B662694;
case 0x662697:c.instructions+=6;goto B662697;
case 0x66269a:c.instructions+=5;goto B66269a;
case 0x66269d:c.instructions+=4;goto B66269d;
case 0x66269e:c.instructions+=3;goto B66269e;
case 0x66269f:c.instructions+=2;goto B66269f;
case 0x6626a2:c.instructions+=1;goto B6626a2;
case 0x6626a4:goto L6626a4;
case 0x6626a7:c.instructions+=4;goto B6626a7;
case 0x6626a8:c.instructions+=3;goto B6626a8;
case 0x6626ab:c.instructions+=2;goto B6626ab;
case 0x6626ae:c.instructions+=1;goto B6626ae;
case 0x6626b0:goto L6626b0;
case 0x6626b5:goto L6626b5;
case 0x6626b9:c.instructions+=5;goto B6626b9;
case 0x6626bd:c.instructions+=4;goto B6626bd;
case 0x6626c0:c.instructions+=3;goto B6626c0;
case 0x6626c2:c.instructions+=2;goto B6626c2;
case 0x6626c5:c.instructions+=1;goto B6626c5;
case 0x6626cb:goto L6626cb;
case 0x6626cd:c.instructions+=1;goto B6626cd;
case 0x6626d3:goto L6626d3;
case 0x6626d7:c.instructions+=2;goto B6626d7;
case 0x6626db:c.instructions+=1;goto B6626db;
case 0x6626dd:goto L6626dd;
case 0x6626df:c.instructions+=1;goto B6626df;
case 0x6626e1:goto L6626e1;
case 0x6626e5:c.instructions+=1;goto B6626e5;
case 0x6626e7:goto L6626e7;
case 0x6626ea:c.instructions+=3;goto B6626ea;
case 0x6626ec:c.instructions+=2;goto B6626ec;
case 0x6626ee:c.instructions+=1;goto B6626ee;
case 0x6626f0:goto L6626f0;
case 0x6626f3:c.instructions+=4;goto B6626f3;
case 0x6626f5:c.instructions+=3;goto B6626f5;
case 0x6626f8:c.instructions+=2;goto B6626f8;
case 0x6626f9:c.instructions+=1;goto B6626f9;
case 0x6626fb:goto L6626fb;
case 0x6626fe:goto L6626fe;
case 0x662701:c.instructions+=6;goto B662701;
case 0x662704:c.instructions+=5;goto B662704;
case 0x662705:c.instructions+=4;goto B662705;
case 0x662708:c.instructions+=3;goto B662708;
case 0x66270b:c.instructions+=2;goto B66270b;
case 0x66270e:c.instructions+=1;goto B66270e;
case 0x662710:goto L662710;
case 0x662713:c.instructions+=4;goto B662713;
case 0x662716:c.instructions+=3;goto B662716;
case 0x662719:c.instructions+=2;goto B662719;
case 0x66271c:c.instructions+=1;goto B66271c;
case 0x66271e:goto L66271e;
case 0x662720:goto L662720;
case 0x662724:c.instructions+=5;goto B662724;
case 0x662728:c.instructions+=4;goto B662728;
case 0x66272b:c.instructions+=3;goto B66272b;
case 0x66272d:c.instructions+=2;goto B66272d;
case 0x662730:c.instructions+=1;goto B662730;
case 0x662732:goto L662732;
case 0x662734:c.instructions+=1;goto B662734;
case 0x662736:goto L662736;
case 0x66273a:c.instructions+=2;goto B66273a;
case 0x66273e:c.instructions+=1;goto B66273e;
case 0x662740:goto L662740;
case 0x662742:c.instructions+=1;goto B662742;
case 0x662744:goto L662744;
case 0x662748:c.instructions+=1;goto B662748;
case 0x66274a:goto L66274a;
case 0x66274d:c.instructions+=3;goto B66274d;
case 0x66274f:c.instructions+=2;goto B66274f;
case 0x662751:c.instructions+=1;goto B662751;
case 0x662753:goto L662753;
case 0x662756:c.instructions+=4;goto B662756;
case 0x662758:c.instructions+=3;goto B662758;
case 0x66275b:c.instructions+=2;goto B66275b;
case 0x66275c:c.instructions+=1;goto B66275c;
case 0x66275e:goto L66275e;
case 0x662761:goto L662761;
case 0x662764:c.instructions+=6;goto B662764;
case 0x662767:c.instructions+=5;goto B662767;
case 0x662768:c.instructions+=4;goto B662768;
case 0x66276b:c.instructions+=3;goto B66276b;
case 0x66276e:c.instructions+=2;goto B66276e;
case 0x662771:c.instructions+=1;goto B662771;
case 0x662773:goto L662773;
case 0x662776:c.instructions+=4;goto B662776;
case 0x662779:c.instructions+=3;goto B662779;
case 0x66277c:c.instructions+=2;goto B66277c;
case 0x66277f:c.instructions+=1;goto B66277f;
case 0x662781:goto L662781;
case 0x662783:goto L662783;
case 0x662786:c.instructions+=8;goto B662786;
case 0x662789:c.instructions+=7;goto B662789;
case 0x66278a:c.instructions+=6;goto B66278a;
case 0x66278d:c.instructions+=5;goto B66278d;
case 0x66278e:c.instructions+=4;goto B66278e;
case 0x662790:c.instructions+=3;goto B662790;
case 0x662791:c.instructions+=2;goto B662791;
case 0x662792:c.instructions+=1;goto B662792;
case 0x662795:goto L662795;
case 0x662797:c.instructions+=13;goto B662797;
case 0x662798:c.instructions+=12;goto B662798;
case 0x66279a:c.instructions+=11;goto B66279a;
case 0x66279d:c.instructions+=10;goto B66279d;
case 0x6627a0:c.instructions+=9;goto B6627a0;
case 0x6627a3:c.instructions+=8;goto B6627a3;
case 0x6627a5:c.instructions+=7;goto B6627a5;
case 0x6627a8:c.instructions+=6;goto B6627a8;
case 0x6627aa:c.instructions+=5;goto B6627aa;
case 0x6627ad:c.instructions+=4;goto B6627ad;
case 0x6627b0:c.instructions+=3;goto B6627b0;
case 0x6627b3:c.instructions+=2;goto B6627b3;
case 0x6627b6:c.instructions+=1;goto B6627b6;
case 0x6627b8:goto L6627b8;
case 0x6627bb:c.instructions+=2;goto B6627bb;
case 0x6627be:c.instructions+=1;goto B6627be;
case 0x6627c0:goto L6627c0;
case 0x6627c2:goto L6627c2;
case 0x6627c4:c.instructions+=3;goto B6627c4;
case 0x6627c5:c.instructions+=2;goto B6627c5;
case 0x6627c6:c.instructions+=1;goto B6627c6;
case 0x6627c8:goto L6627c8;
case 0x6627cb:c.instructions+=2;goto B6627cb;
case 0x6627ce:c.instructions+=1;goto B6627ce;
case 0x6627d0:goto L6627d0;
case 0x6627d3:c.instructions+=1;goto B6627d3;
case 0x6627d6:goto L6627d6;
case 0x6627d9:c.instructions+=4;goto B6627d9;
case 0x6627db:c.instructions+=3;goto B6627db;
case 0x6627dc:c.instructions+=2;goto B6627dc;
case 0x6627df:c.instructions+=1;goto B6627df;
case 0x6627e1:goto L6627e1;
case 0x6627e4:c.instructions+=1;goto B6627e4;
case 0x6627e6:goto L6627e6;
case 0x6627e9:c.instructions+=3;goto B6627e9;
case 0x6627eb:c.instructions+=2;goto B6627eb;
case 0x6627ee:c.instructions+=1;goto B6627ee;
case 0x6627f0:goto L6627f0;
case 0x6627f3:goto L6627f3;
case 0x6627f5:c.instructions+=1;goto B6627f5;
case 0x6627fb:goto L6627fb;
case 0x6627fd:c.instructions+=2;goto B6627fd;
case 0x6627fe:c.instructions+=1;goto B6627fe;
case 0x662804:goto L662804;
case 0x662807:c.instructions+=1;goto B662807;
case 0x66280d:goto L66280d;
case 0x662810:c.instructions+=1;goto B662810;
case 0x662816:goto L662816;
case 0x662819:c.instructions+=1;goto B662819;
case 0x66281f:goto L66281f;
case 0x662821:c.instructions+=3;goto B662821;
case 0x662824:c.instructions+=2;goto B662824;
case 0x662827:c.instructions+=1;goto B662827;
case 0x662829:goto L662829;
case 0x66282c:c.instructions+=2;goto B66282c;
case 0x66282f:c.instructions+=1;goto B66282f;
case 0x662832:goto L662832;
case 0x662835:c.instructions+=4;goto B662835;
case 0x662838:c.instructions+=3;goto B662838;
case 0x66283b:c.instructions+=2;goto B66283b;
case 0x66283e:c.instructions+=1;goto B66283e;
case 0x662844:goto L662844;
case 0x662848:c.instructions+=1;goto B662848;
case 0x66284e:goto L66284e;
case 0x662852:c.instructions+=3;goto B662852;
case 0x662854:c.instructions+=2;goto B662854;
case 0x662857:c.instructions+=1;goto B662857;
case 0x662859:goto L662859;
case 0x66285c:c.instructions+=1;goto B66285c;
case 0x66285f:goto L66285f;
case 0x662863:c.instructions+=1;goto B662863;
case 0x662865:goto L662865;
case 0x662869:c.instructions+=1;goto B662869;
case 0x66286b:goto L66286b;
case 0x66286d:c.instructions+=1;goto B66286d;
case 0x662870:goto L662870;
case 0x662872:c.instructions+=11;goto B662872;
case 0x662875:c.instructions+=10;goto B662875;
case 0x662876:c.instructions+=9;goto B662876;
case 0x662879:c.instructions+=8;goto B662879;
case 0x66287c:c.instructions+=7;goto B66287c;
case 0x66287f:c.instructions+=6;goto B66287f;
case 0x662880:c.instructions+=5;goto B662880;
case 0x662883:c.instructions+=4;goto B662883;
case 0x662884:c.instructions+=3;goto B662884;
case 0x662887:c.instructions+=2;goto B662887;
case 0x662888:c.instructions+=1;goto B662888;
case 0x66288d:goto L66288d;
case 0x662890:c.instructions+=3;goto B662890;
case 0x662893:c.instructions+=2;goto B662893;
case 0x662896:c.instructions+=1;goto B662896;
case 0x662898:goto L662898;
case 0x66289b:c.instructions+=3;goto B66289b;
case 0x66289e:c.instructions+=2;goto B66289e;
case 0x6628a1:c.instructions+=1;goto B6628a1;
case 0x6628a3:goto L6628a3;
case 0x6628a8:goto L6628a8;
case 0x6628ab:c.instructions+=6;goto B6628ab;
case 0x6628ae:c.instructions+=5;goto B6628ae;
case 0x6628b1:c.instructions+=4;goto B6628b1;
case 0x6628b3:c.instructions+=3;goto B6628b3;
case 0x6628b4:c.instructions+=2;goto B6628b4;
case 0x6628b7:c.instructions+=1;goto B6628b7;
case 0x6628bd:goto L6628bd;
case 0x6628be:c.instructions+=1;goto B6628be;
case 0x6628c4:goto L6628c4;
case 0x6628c5:c.instructions+=1;goto B6628c5;
case 0x6628cb:goto L6628cb;
case 0x6628ce:c.instructions+=7;goto B6628ce;
case 0x6628d2:c.instructions+=6;goto B6628d2;
case 0x6628d6:c.instructions+=5;goto B6628d6;
case 0x6628d9:c.instructions+=4;goto B6628d9;
case 0x6628dc:c.instructions+=3;goto B6628dc;
case 0x6628df:c.instructions+=2;goto B6628df;
case 0x6628e2:c.instructions+=1;goto B6628e2;
case 0x6628e4:goto L6628e4;
case 0x6628e6:c.instructions+=1;goto B6628e6;
case 0x6628e8:goto L6628e8;
case 0x6628ec:c.instructions+=2;goto B6628ec;
case 0x6628f0:c.instructions+=1;goto B6628f0;
case 0x6628f2:goto L6628f2;
case 0x6628f5:c.instructions+=1;goto B6628f5;
case 0x6628f8:goto L6628f8;
case 0x6628fa:c.instructions+=2;goto B6628fa;
case 0x6628fc:c.instructions+=1;goto B6628fc;
case 0x6628fe:goto L6628fe;
case 0x662901:c.instructions+=1;goto B662901;
case 0x662903:goto L662903;
case 0x662906:goto L662906;
case 0x662908:c.instructions+=1;goto B662908;
case 0x66290d:goto L66290d;
case 0x662910:c.instructions+=5;goto B662910;
case 0x662913:c.instructions+=4;goto B662913;
case 0x662914:c.instructions+=3;goto B662914;
case 0x662917:c.instructions+=2;goto B662917;
case 0x66291a:c.instructions+=1;goto B66291a;
case 0x66291c:goto L66291c;
case 0x662920:c.instructions+=6;goto B662920;
case 0x662924:c.instructions+=5;goto B662924;
case 0x662925:c.instructions+=4;goto B662925;
case 0x662928:c.instructions+=3;goto B662928;
case 0x66292b:c.instructions+=2;goto B66292b;
case 0x66292e:c.instructions+=1;goto B66292e;
case 0x662930:goto L662930;
case 0x662934:c.instructions+=4;goto B662934;
case 0x662937:c.instructions+=3;goto B662937;
case 0x66293a:c.instructions+=2;goto B66293a;
case 0x66293d:c.instructions+=1;goto B66293d;
case 0x66293f:goto L66293f;
case 0x662942:c.instructions+=2;goto B662942;
case 0x662945:c.instructions+=1;goto B662945;
case 0x66294a:goto L66294a;
case 0x66294e:c.instructions+=4;goto B66294e;
case 0x662952:c.instructions+=3;goto B662952;
case 0x662955:c.instructions+=2;goto B662955;
case 0x662958:c.instructions+=1;goto B662958;
case 0x66295a:goto L66295a;
case 0x66295c:c.instructions+=2;goto B66295c;
case 0x66295e:c.instructions+=1;goto B66295e;
case 0x662960:goto L662960;
case 0x662963:c.instructions+=1;goto B662963;
case 0x662965:goto L662965;
case 0x662967:c.instructions+=1;goto B662967;
case 0x662969:goto L662969;
case 0x66296b:c.instructions+=2;goto B66296b;
case 0x66296e:c.instructions+=1;goto B66296e;
case 0x662970:goto L662970;
case 0x662972:c.instructions+=1;goto B662972;
case 0x662975:goto L662975;
case 0x662978:c.instructions+=6;goto B662978;
case 0x66297b:c.instructions+=5;goto B66297b;
case 0x66297e:c.instructions+=4;goto B66297e;
case 0x66297f:c.instructions+=3;goto B66297f;
case 0x662982:c.instructions+=2;goto B662982;
case 0x662985:c.instructions+=1;goto B662985;
case 0x662987:goto L662987;
case 0x66298a:c.instructions+=4;goto B66298a;
case 0x66298b:c.instructions+=3;goto B66298b;
case 0x66298c:c.instructions+=2;goto B66298c;
case 0x66298f:c.instructions+=1;goto B66298f;
case 0x662991:goto L662991;
case 0x662994:c.instructions+=3;goto B662994;
case 0x662997:c.instructions+=2;goto B662997;
case 0x66299a:c.instructions+=1;goto B66299a;
case 0x66299c:goto L66299c;
case 0x66299f:c.instructions+=1;goto B66299f;
case 0x6629a4:goto L6629a4;
case 0x6629a8:c.instructions+=4;goto B6629a8;
case 0x6629ac:c.instructions+=3;goto B6629ac;
case 0x6629af:c.instructions+=2;goto B6629af;
case 0x6629b2:c.instructions+=1;goto B6629b2;
case 0x6629b4:goto L6629b4;
case 0x6629b6:c.instructions+=2;goto B6629b6;
case 0x6629b8:c.instructions+=1;goto B6629b8;
case 0x6629ba:goto L6629ba;
case 0x6629bd:c.instructions+=1;goto B6629bd;
case 0x6629bf:goto L6629bf;
case 0x6629c1:c.instructions+=1;goto B6629c1;
case 0x6629c3:goto L6629c3;
case 0x6629c5:c.instructions+=2;goto B6629c5;
case 0x6629c8:c.instructions+=1;goto B6629c8;
case 0x6629ca:goto L6629ca;
case 0x6629cc:c.instructions+=1;goto B6629cc;
case 0x6629cf:goto L6629cf;
case 0x6629d2:c.instructions+=6;goto B6629d2;
case 0x6629d5:c.instructions+=5;goto B6629d5;
case 0x6629d8:c.instructions+=4;goto B6629d8;
case 0x6629d9:c.instructions+=3;goto B6629d9;
case 0x6629dc:c.instructions+=2;goto B6629dc;
case 0x6629df:c.instructions+=1;goto B6629df;
case 0x6629e1:goto L6629e1;
case 0x6629e4:c.instructions+=4;goto B6629e4;
case 0x6629e5:c.instructions+=3;goto B6629e5;
case 0x6629e6:c.instructions+=2;goto B6629e6;
case 0x6629e9:c.instructions+=1;goto B6629e9;
case 0x6629eb:goto L6629eb;
case 0x6629ee:c.instructions+=3;goto B6629ee;
case 0x6629f1:c.instructions+=2;goto B6629f1;
case 0x6629f4:c.instructions+=1;goto B6629f4;
case 0x6629f6:goto L6629f6;
case 0x6629f8:goto L6629f8;
case 0x6629fb:c.instructions+=8;goto B6629fb;
case 0x6629fe:c.instructions+=7;goto B6629fe;
case 0x662a00:c.instructions+=6;goto B662a00;
case 0x662a02:c.instructions+=5;goto B662a02;
case 0x662a05:c.instructions+=4;goto B662a05;
case 0x662a08:c.instructions+=3;goto B662a08;
case 0x662a0b:c.instructions+=2;goto B662a0b;
case 0x662a0e:c.instructions+=1;goto B662a0e;
case 0x662a10:goto L662a10;
case 0x662a12:c.instructions+=4;goto B662a12;
case 0x662a13:c.instructions+=3;goto B662a13;
case 0x662a15:c.instructions+=2;goto B662a15;
case 0x662a18:c.instructions+=1;goto B662a18;
case 0x662a1b:goto L662a1b;
case 0x662a1c:c.instructions+=1;goto B662a1c;
case 0x662a22:goto L662a22;
case 0x662a23:c.instructions+=1;goto B662a23;
case 0x662a29:goto L662a29;
case 0x662a2a:c.instructions+=1;goto B662a2a;
case 0x662a30:goto L662a30;
case 0x662a34:c.instructions+=5;goto B662a34;
case 0x662a38:c.instructions+=4;goto B662a38;
case 0x662a3b:c.instructions+=3;goto B662a3b;
case 0x662a3e:c.instructions+=2;goto B662a3e;
case 0x662a41:c.instructions+=1;goto B662a41;
case 0x662a47:goto L662a47;
case 0x662a49:c.instructions+=1;goto B662a49;
case 0x662a4f:goto L662a4f;
case 0x662a53:c.instructions+=2;goto B662a53;
case 0x662a57:c.instructions+=1;goto B662a57;
case 0x662a59:goto L662a59;
case 0x662a5b:c.instructions+=1;goto B662a5b;
case 0x662a5d:goto L662a5d;
case 0x662a5f:c.instructions+=1;goto B662a5f;
case 0x662a64:goto L662a64;
case 0x662a66:c.instructions+=2;goto B662a66;
case 0x662a69:c.instructions+=1;goto B662a69;
case 0x662a6e:goto L662a6e;
case 0x662a71:c.instructions+=2;goto B662a71;
case 0x662a74:c.instructions+=1;goto B662a74;
case 0x662a79:goto L662a79;
case 0x662a7c:c.instructions+=2;goto B662a7c;
case 0x662a7f:c.instructions+=1;goto B662a7f;
case 0x662a84:goto L662a84;
case 0x662a87:c.instructions+=7;goto B662a87;
case 0x662a8a:c.instructions+=6;goto B662a8a;
case 0x662a8d:c.instructions+=5;goto B662a8d;
case 0x662a8e:c.instructions+=4;goto B662a8e;
case 0x662a91:c.instructions+=3;goto B662a91;
case 0x662a94:c.instructions+=2;goto B662a94;
case 0x662a97:c.instructions+=1;goto B662a97;
case 0x662a99:goto L662a99;
case 0x662a9c:c.instructions+=5;goto B662a9c;
case 0x662a9f:c.instructions+=4;goto B662a9f;
case 0x662aa2:c.instructions+=3;goto B662aa2;
case 0x662aa5:c.instructions+=2;goto B662aa5;
case 0x662aa8:c.instructions+=1;goto B662aa8;
case 0x662aaa:goto L662aaa;
case 0x662aaf:goto L662aaf;
case 0x662ab3:c.instructions+=5;goto B662ab3;
case 0x662ab7:c.instructions+=4;goto B662ab7;
case 0x662aba:c.instructions+=3;goto B662aba;
case 0x662abd:c.instructions+=2;goto B662abd;
case 0x662ac0:c.instructions+=1;goto B662ac0;
case 0x662ac6:goto L662ac6;
case 0x662ac8:c.instructions+=1;goto B662ac8;
case 0x662ace:goto L662ace;
case 0x662ad2:c.instructions+=2;goto B662ad2;
case 0x662ad6:c.instructions+=1;goto B662ad6;
case 0x662ad8:goto L662ad8;
case 0x662ada:c.instructions+=1;goto B662ada;
case 0x662adc:goto L662adc;
case 0x662ade:c.instructions+=1;goto B662ade;
case 0x662ae0:goto L662ae0;
case 0x662ae2:c.instructions+=3;goto B662ae2;
case 0x662ae4:c.instructions+=2;goto B662ae4;
case 0x662ae6:c.instructions+=1;goto B662ae6;
case 0x662ae9:goto L662ae9;
case 0x662aec:c.instructions+=4;goto B662aec;
case 0x662aee:c.instructions+=3;goto B662aee;
case 0x662af1:c.instructions+=2;goto B662af1;
case 0x662af4:c.instructions+=1;goto B662af4;
case 0x662af6:goto L662af6;
case 0x662af9:c.instructions+=1;goto B662af9;
case 0x662afc:goto L662afc;
case 0x662aff:c.instructions+=6;goto B662aff;
case 0x662b02:c.instructions+=5;goto B662b02;
case 0x662b05:c.instructions+=4;goto B662b05;
case 0x662b06:c.instructions+=3;goto B662b06;
case 0x662b09:c.instructions+=2;goto B662b09;
case 0x662b0c:c.instructions+=1;goto B662b0c;
case 0x662b0e:goto L662b0e;
case 0x662b11:c.instructions+=4;goto B662b11;
case 0x662b14:c.instructions+=3;goto B662b14;
case 0x662b17:c.instructions+=2;goto B662b17;
case 0x662b1a:c.instructions+=1;goto B662b1a;
case 0x662b1c:goto L662b1c;
case 0x662b1e:goto L662b1e;
case 0x662b22:c.instructions+=5;goto B662b22;
case 0x662b26:c.instructions+=4;goto B662b26;
case 0x662b29:c.instructions+=3;goto B662b29;
case 0x662b2c:c.instructions+=2;goto B662b2c;
case 0x662b2f:c.instructions+=1;goto B662b2f;
case 0x662b31:goto L662b31;
case 0x662b33:c.instructions+=1;goto B662b33;
case 0x662b35:goto L662b35;
case 0x662b39:c.instructions+=2;goto B662b39;
case 0x662b3d:c.instructions+=1;goto B662b3d;
case 0x662b3f:goto L662b3f;
case 0x662b41:c.instructions+=1;goto B662b41;
case 0x662b43:goto L662b43;
case 0x662b45:c.instructions+=1;goto B662b45;
case 0x662b47:goto L662b47;
case 0x662b49:c.instructions+=3;goto B662b49;
case 0x662b4b:c.instructions+=2;goto B662b4b;
case 0x662b4d:c.instructions+=1;goto B662b4d;
case 0x662b50:goto L662b50;
case 0x662b53:c.instructions+=4;goto B662b53;
case 0x662b55:c.instructions+=3;goto B662b55;
case 0x662b58:c.instructions+=2;goto B662b58;
case 0x662b5b:c.instructions+=1;goto B662b5b;
case 0x662b5d:goto L662b5d;
case 0x662b60:c.instructions+=1;goto B662b60;
case 0x662b63:goto L662b63;
case 0x662b66:c.instructions+=6;goto B662b66;
case 0x662b69:c.instructions+=5;goto B662b69;
case 0x662b6c:c.instructions+=4;goto B662b6c;
case 0x662b6d:c.instructions+=3;goto B662b6d;
case 0x662b70:c.instructions+=2;goto B662b70;
case 0x662b73:c.instructions+=1;goto B662b73;
case 0x662b75:goto L662b75;
case 0x662b78:c.instructions+=4;goto B662b78;
case 0x662b7b:c.instructions+=3;goto B662b7b;
case 0x662b7e:c.instructions+=2;goto B662b7e;
case 0x662b81:c.instructions+=1;goto B662b81;
case 0x662b83:goto L662b83;
case 0x662b86:goto L662b86;
case 0x662b87:goto L662b87;
case 0x662b8a:c.instructions+=8;goto B662b8a;
case 0x662b8d:c.instructions+=7;goto B662b8d;
case 0x662b90:c.instructions+=6;goto B662b90;
case 0x662b93:c.instructions+=5;goto B662b93;
case 0x662b94:c.instructions+=4;goto B662b94;
case 0x662b96:c.instructions+=3;goto B662b96;
case 0x662b97:c.instructions+=2;goto B662b97;
case 0x662b98:c.instructions+=1;goto B662b98;
case 0x662b9b:goto L662b9b;
case 0x662b9d:c.instructions+=16;goto B662b9d;
case 0x662b9e:c.instructions+=15;goto B662b9e;
case 0x662ba0:c.instructions+=14;goto B662ba0;
case 0x662ba3:c.instructions+=13;goto B662ba3;
case 0x662ba6:c.instructions+=12;goto B662ba6;
case 0x662ba9:c.instructions+=11;goto B662ba9;
case 0x662bab:c.instructions+=10;goto B662bab;
case 0x662bae:c.instructions+=9;goto B662bae;
case 0x662baf:c.instructions+=8;goto B662baf;
case 0x662bb0:c.instructions+=7;goto B662bb0;
case 0x662bb1:c.instructions+=6;goto B662bb1;
case 0x662bb4:c.instructions+=5;goto B662bb4;
case 0x662bb6:c.instructions+=4;goto B662bb6;
case 0x662bb9:c.instructions+=3;goto B662bb9;
case 0x662bbc:c.instructions+=2;goto B662bbc;
case 0x662bbf:c.instructions+=1;goto B662bbf;
case 0x662bc1:goto L662bc1;
case 0x662bc4:c.instructions+=2;goto B662bc4;
case 0x662bc7:c.instructions+=1;goto B662bc7;
case 0x662bc9:goto L662bc9;
case 0x662bcb:goto L662bcb;
case 0x662bcd:c.instructions+=1;goto B662bcd;
case 0x662bcf:goto L662bcf;
case 0x662bd2:c.instructions+=2;goto B662bd2;
case 0x662bd5:c.instructions+=1;goto B662bd5;
case 0x662bd7:goto L662bd7;
case 0x662bda:c.instructions+=1;goto B662bda;
case 0x662bdd:goto L662bdd;
case 0x662be0:c.instructions+=2;goto B662be0;
case 0x662be3:c.instructions+=1;goto B662be3;
case 0x662be5:goto L662be5;
case 0x662be8:c.instructions+=1;goto B662be8;
case 0x662bea:goto L662bea;
case 0x662bed:c.instructions+=3;goto B662bed;
case 0x662bef:c.instructions+=2;goto B662bef;
case 0x662bf2:c.instructions+=1;goto B662bf2;
case 0x662bf4:goto L662bf4;
case 0x662bfb:goto L662bfb;
case 0x662bfd:c.instructions+=1;goto B662bfd;
case 0x662c03:goto L662c03;
case 0x662c06:c.instructions+=1;goto B662c06;
case 0x662c0c:goto L662c0c;
case 0x662c0f:c.instructions+=1;goto B662c0f;
case 0x662c15:goto L662c15;
case 0x662c18:c.instructions+=1;goto B662c18;
case 0x662c1e:goto L662c1e;
case 0x662c21:c.instructions+=1;goto B662c21;
case 0x662c27:goto L662c27;
case 0x662c29:c.instructions+=3;goto B662c29;
case 0x662c2b:c.instructions+=2;goto B662c2b;
case 0x662c2e:c.instructions+=1;goto B662c2e;
case 0x662c30:goto L662c30;
case 0x662c33:c.instructions+=2;goto B662c33;
case 0x662c35:c.instructions+=1;goto B662c35;
case 0x662c38:goto L662c38;
case 0x662c3b:c.instructions+=4;goto B662c3b;
case 0x662c3e:c.instructions+=3;goto B662c3e;
case 0x662c41:c.instructions+=2;goto B662c41;
case 0x662c44:c.instructions+=1;goto B662c44;
case 0x662c4a:goto L662c4a;
case 0x662c4e:c.instructions+=1;goto B662c4e;
case 0x662c54:goto L662c54;
case 0x662c58:c.instructions+=3;goto B662c58;
case 0x662c5a:c.instructions+=2;goto B662c5a;
case 0x662c5d:c.instructions+=1;goto B662c5d;
case 0x662c5f:goto L662c5f;
case 0x662c62:c.instructions+=1;goto B662c62;
case 0x662c65:goto L662c65;
case 0x662c69:c.instructions+=1;goto B662c69;
case 0x662c6b:goto L662c6b;
case 0x662c6f:c.instructions+=1;goto B662c6f;
case 0x662c71:goto L662c71;
case 0x662c73:c.instructions+=1;goto B662c73;
case 0x662c76:goto L662c76;
case 0x662c78:c.instructions+=11;goto B662c78;
case 0x662c7b:c.instructions+=10;goto B662c7b;
case 0x662c7c:c.instructions+=9;goto B662c7c;
case 0x662c7f:c.instructions+=8;goto B662c7f;
case 0x662c82:c.instructions+=7;goto B662c82;
case 0x662c85:c.instructions+=6;goto B662c85;
case 0x662c86:c.instructions+=5;goto B662c86;
case 0x662c89:c.instructions+=4;goto B662c89;
case 0x662c8a:c.instructions+=3;goto B662c8a;
case 0x662c8d:c.instructions+=2;goto B662c8d;
case 0x662c8e:c.instructions+=1;goto B662c8e;
case 0x662c93:goto L662c93;
case 0x662c96:c.instructions+=4;goto B662c96;
case 0x662c99:c.instructions+=3;goto B662c99;
case 0x662c9c:c.instructions+=2;goto B662c9c;
case 0x662c9f:c.instructions+=1;goto B662c9f;
case 0x662ca1:goto L662ca1;
case 0x662ca4:c.instructions+=3;goto B662ca4;
case 0x662ca7:c.instructions+=2;goto B662ca7;
case 0x662caa:c.instructions+=1;goto B662caa;
case 0x662cac:goto L662cac;
case 0x662cb1:goto L662cb1;
case 0x662cb4:c.instructions+=4;goto B662cb4;
case 0x662cb6:c.instructions+=3;goto B662cb6;
case 0x662cb7:c.instructions+=2;goto B662cb7;
case 0x662cba:c.instructions+=1;goto B662cba;
case 0x662cc0:goto L662cc0;
case 0x662cc1:c.instructions+=1;goto B662cc1;
case 0x662cc3:goto L662cc3;
case 0x662cc4:c.instructions+=1;goto B662cc4;
case 0x662cca:goto L662cca;
case 0x662ccd:c.instructions+=6;goto B662ccd;
case 0x662cd1:c.instructions+=5;goto B662cd1;
case 0x662cd5:c.instructions+=4;goto B662cd5;
case 0x662cd8:c.instructions+=3;goto B662cd8;
case 0x662cda:c.instructions+=2;goto B662cda;
case 0x662cdd:c.instructions+=1;goto B662cdd;
case 0x662cdf:goto L662cdf;
case 0x662ce1:c.instructions+=2;goto B662ce1;
case 0x662ce3:c.instructions+=1;goto B662ce3;
case 0x662ce5:goto L662ce5;
case 0x662ce8:c.instructions+=1;goto B662ce8;
case 0x662cea:goto L662cea;
case 0x662cec:c.instructions+=1;goto B662cec;
case 0x662cee:goto L662cee;
case 0x662cf1:c.instructions+=2;goto B662cf1;
case 0x662cf4:c.instructions+=1;goto B662cf4;
case 0x662cf9:goto L662cf9;
case 0x662cfb:c.instructions+=5;goto B662cfb;
case 0x662cfe:c.instructions+=4;goto B662cfe;
case 0x662cff:c.instructions+=3;goto B662cff;
case 0x662d00:c.instructions+=2;goto B662d00;
case 0x662d03:c.instructions+=1;goto B662d03;
case 0x662d05:goto L662d05;
case 0x662d09:c.instructions+=4;goto B662d09;
case 0x662d0c:c.instructions+=3;goto B662d0c;
case 0x662d0f:c.instructions+=2;goto B662d0f;
case 0x662d12:c.instructions+=1;goto B662d12;
case 0x662d14:goto L662d14;
case 0x662d16:c.instructions+=1;goto B662d16;
case 0x662d1b:goto L662d1b;
case 0x662d1d:c.instructions+=4;goto B662d1d;
case 0x662d20:c.instructions+=3;goto B662d20;
case 0x662d22:c.instructions+=2;goto B662d22;
case 0x662d25:c.instructions+=1;goto B662d25;
case 0x662d27:goto L662d27;
case 0x662d29:c.instructions+=1;goto B662d29;
case 0x662d2b:goto L662d2b;
case 0x662d2d:c.instructions+=2;goto B662d2d;
case 0x662d30:c.instructions+=1;goto B662d30;
case 0x662d32:goto L662d32;
case 0x662d34:c.instructions+=1;goto B662d34;
case 0x662d36:goto L662d36;
case 0x662d39:c.instructions+=7;goto B662d39;
case 0x662d3c:c.instructions+=6;goto B662d3c;
case 0x662d3e:c.instructions+=5;goto B662d3e;
case 0x662d41:c.instructions+=4;goto B662d41;
case 0x662d42:c.instructions+=3;goto B662d42;
case 0x662d43:c.instructions+=2;goto B662d43;
case 0x662d46:c.instructions+=1;goto B662d46;
case 0x662d48:goto L662d48;
case 0x662d49:c.instructions+=2;goto B662d49;
case 0x662d4c:c.instructions+=1;goto B662d4c;
case 0x662d4e:goto L662d4e;
case 0x662d50:c.instructions+=1;goto B662d50;
case 0x662d55:goto L662d55;
case 0x662d57:c.instructions+=4;goto B662d57;
case 0x662d5a:c.instructions+=3;goto B662d5a;
case 0x662d5c:c.instructions+=2;goto B662d5c;
case 0x662d5f:c.instructions+=1;goto B662d5f;
case 0x662d61:goto L662d61;
case 0x662d63:c.instructions+=1;goto B662d63;
case 0x662d65:goto L662d65;
case 0x662d67:c.instructions+=2;goto B662d67;
case 0x662d6a:c.instructions+=1;goto B662d6a;
case 0x662d6c:goto L662d6c;
case 0x662d6e:c.instructions+=1;goto B662d6e;
case 0x662d70:goto L662d70;
case 0x662d73:c.instructions+=7;goto B662d73;
case 0x662d76:c.instructions+=6;goto B662d76;
case 0x662d78:c.instructions+=5;goto B662d78;
case 0x662d7b:c.instructions+=4;goto B662d7b;
case 0x662d7c:c.instructions+=3;goto B662d7c;
case 0x662d7d:c.instructions+=2;goto B662d7d;
case 0x662d80:c.instructions+=1;goto B662d80;
case 0x662d82:goto L662d82;
case 0x662d83:c.instructions+=2;goto B662d83;
case 0x662d86:c.instructions+=1;goto B662d86;
case 0x662d88:goto L662d88;
case 0x662d8a:goto L662d8a;
case 0x662d8c:c.instructions+=6;goto B662d8c;
case 0x662d8f:c.instructions+=5;goto B662d8f;
case 0x662d91:c.instructions+=4;goto B662d91;
case 0x662d94:c.instructions+=3;goto B662d94;
case 0x662d97:c.instructions+=2;goto B662d97;
case 0x662d9a:c.instructions+=1;goto B662d9a;
case 0x662d9c:goto L662d9c;
case 0x662d9e:c.instructions+=4;goto B662d9e;
case 0x662d9f:c.instructions+=3;goto B662d9f;
case 0x662da1:c.instructions+=2;goto B662da1;
case 0x662da4:c.instructions+=1;goto B662da4;
case 0x662da7:goto L662da7;
case 0x662da8:c.instructions+=1;goto B662da8;
case 0x662dae:goto L662dae;
case 0x662daf:c.instructions+=1;goto B662daf;
case 0x662db5:goto L662db5;
case 0x662db6:c.instructions+=1;goto B662db6;
case 0x662dbc:goto L662dbc;
case 0x662dbf:c.instructions+=7;goto B662dbf;
case 0x662dc2:c.instructions+=6;goto B662dc2;
case 0x662dc5:c.instructions+=5;goto B662dc5;
case 0x662dc7:c.instructions+=4;goto B662dc7;
case 0x662dca:c.instructions+=3;goto B662dca;
case 0x662dcc:c.instructions+=2;goto B662dcc;
case 0x662dcf:c.instructions+=1;goto B662dcf;
case 0x662dd1:goto L662dd1;
case 0x662dd3:goto L662dd3;
case 0x662dd5:goto L662dd5;
case 0x662dd8:c.instructions+=1;goto B662dd8;
case 0x662dda:goto L662dda;
case 0x662ddd:c.instructions+=2;goto B662ddd;
case 0x662de0:c.instructions+=1;goto B662de0;
case 0x662de2:goto L662de2;
case 0x662de6:c.instructions+=1;goto B662de6;
case 0x662de8:goto L662de8;
case 0x662dea:c.instructions+=1;goto B662dea;
case 0x662def:goto L662def;
case 0x662df1:c.instructions+=3;goto B662df1;
case 0x662df4:c.instructions+=2;goto B662df4;
case 0x662df7:c.instructions+=1;goto B662df7;
case 0x662dfc:goto L662dfc;
case 0x662dfe:c.instructions+=2;goto B662dfe;
case 0x662e01:c.instructions+=1;goto B662e01;
case 0x662e06:goto L662e06;
case 0x662e09:c.instructions+=2;goto B662e09;
case 0x662e0c:c.instructions+=1;goto B662e0c;
case 0x662e11:goto L662e11;
case 0x662e14:c.instructions+=8;goto B662e14;
case 0x662e17:c.instructions+=7;goto B662e17;
case 0x662e1a:c.instructions+=6;goto B662e1a;
case 0x662e1d:c.instructions+=5;goto B662e1d;
case 0x662e20:c.instructions+=4;goto B662e20;
case 0x662e23:c.instructions+=3;goto B662e23;
case 0x662e25:c.instructions+=2;goto B662e25;
case 0x662e28:c.instructions+=1;goto B662e28;
case 0x662e2a:goto L662e2a;
case 0x662e2d:c.instructions+=4;goto B662e2d;
case 0x662e30:c.instructions+=3;goto B662e30;
case 0x662e33:c.instructions+=2;goto B662e33;
case 0x662e36:c.instructions+=1;goto B662e36;
case 0x662e38:goto L662e38;
case 0x662e3a:c.instructions+=1;goto B662e3a;
case 0x662e3c:goto L662e3c;
case 0x662e40:c.instructions+=4;goto B662e40;
case 0x662e44:c.instructions+=3;goto B662e44;
case 0x662e47:c.instructions+=2;goto B662e47;
case 0x662e4a:c.instructions+=1;goto B662e4a;
case 0x662e4c:goto L662e4c;
case 0x662e4e:c.instructions+=1;goto B662e4e;
case 0x662e50:goto L662e50;
case 0x662e52:c.instructions+=2;goto B662e52;
case 0x662e55:c.instructions+=1;goto B662e55;
case 0x662e57:goto L662e57;
case 0x662e59:c.instructions+=1;goto B662e59;
case 0x662e5b:goto L662e5b;
case 0x662e5d:c.instructions+=7;goto B662e5d;
case 0x662e60:c.instructions+=6;goto B662e60;
case 0x662e62:c.instructions+=5;goto B662e62;
case 0x662e65:c.instructions+=4;goto B662e65;
case 0x662e66:c.instructions+=3;goto B662e66;
case 0x662e67:c.instructions+=2;goto B662e67;
case 0x662e6a:c.instructions+=1;goto B662e6a;
case 0x662e6c:goto L662e6c;
case 0x662e6f:c.instructions+=4;goto B662e6f;
case 0x662e72:c.instructions+=3;goto B662e72;
case 0x662e75:c.instructions+=2;goto B662e75;
case 0x662e78:c.instructions+=1;goto B662e78;
case 0x662e7a:goto L662e7a;
case 0x662e7c:goto L662e7c;
case 0x662e80:c.instructions+=4;goto B662e80;
case 0x662e84:c.instructions+=3;goto B662e84;
case 0x662e87:c.instructions+=2;goto B662e87;
case 0x662e8a:c.instructions+=1;goto B662e8a;
case 0x662e8c:goto L662e8c;
case 0x662e8e:c.instructions+=1;goto B662e8e;
case 0x662e90:goto L662e90;
case 0x662e92:c.instructions+=2;goto B662e92;
case 0x662e95:c.instructions+=1;goto B662e95;
case 0x662e97:goto L662e97;
case 0x662e99:c.instructions+=1;goto B662e99;
case 0x662e9b:goto L662e9b;
case 0x662e9d:c.instructions+=7;goto B662e9d;
case 0x662ea0:c.instructions+=6;goto B662ea0;
case 0x662ea2:c.instructions+=5;goto B662ea2;
case 0x662ea5:c.instructions+=4;goto B662ea5;
case 0x662ea6:c.instructions+=3;goto B662ea6;
case 0x662ea7:c.instructions+=2;goto B662ea7;
case 0x662eaa:c.instructions+=1;goto B662eaa;
case 0x662eac:goto L662eac;
case 0x662eaf:c.instructions+=4;goto B662eaf;
case 0x662eb2:c.instructions+=3;goto B662eb2;
case 0x662eb5:c.instructions+=2;goto B662eb5;
case 0x662eb8:c.instructions+=1;goto B662eb8;
case 0x662eba:goto L662eba;
case 0x662ebd:c.instructions+=8;goto B662ebd;
case 0x662ec0:c.instructions+=7;goto B662ec0;
case 0x662ec1:c.instructions+=6;goto B662ec1;
case 0x662ec4:c.instructions+=5;goto B662ec4;
case 0x662ec5:c.instructions+=4;goto B662ec5;
case 0x662ec7:c.instructions+=3;goto B662ec7;
case 0x662ec8:c.instructions+=2;goto B662ec8;
case 0x662ec9:c.instructions+=1;goto B662ec9;
case 0x662ecc:goto L662ecc;
case 0x662ece:c.instructions+=16;goto B662ece;
case 0x662ecf:c.instructions+=15;goto B662ecf;
case 0x662ed1:c.instructions+=14;goto B662ed1;
case 0x662ed4:c.instructions+=13;goto B662ed4;
case 0x662ed7:c.instructions+=12;goto B662ed7;
case 0x662eda:c.instructions+=11;goto B662eda;
case 0x662edc:c.instructions+=10;goto B662edc;
case 0x662edf:c.instructions+=9;goto B662edf;
case 0x662ee0:c.instructions+=8;goto B662ee0;
case 0x662ee3:c.instructions+=7;goto B662ee3;
case 0x662ee5:c.instructions+=6;goto B662ee5;
case 0x662ee6:c.instructions+=5;goto B662ee6;
case 0x662ee7:c.instructions+=4;goto B662ee7;
case 0x662eea:c.instructions+=3;goto B662eea;
case 0x662eed:c.instructions+=2;goto B662eed;
case 0x662ef0:c.instructions+=1;goto B662ef0;
case 0x662ef2:goto L662ef2;
case 0x662ef5:c.instructions+=2;goto B662ef5;
case 0x662ef8:c.instructions+=1;goto B662ef8;
case 0x662efa:goto L662efa;
case 0x662efc:goto L662efc;
case 0x662efe:c.instructions+=1;goto B662efe;
case 0x662f00:goto L662f00;
case 0x662f03:c.instructions+=2;goto B662f03;
case 0x662f06:c.instructions+=1;goto B662f06;
case 0x662f08:goto L662f08;
case 0x662f0b:c.instructions+=1;goto B662f0b;
case 0x662f0e:goto L662f0e;
case 0x662f11:c.instructions+=2;goto B662f11;
case 0x662f14:c.instructions+=1;goto B662f14;
case 0x662f16:goto L662f16;
case 0x662f19:c.instructions+=1;goto B662f19;
case 0x662f1b:goto L662f1b;
case 0x662f1e:c.instructions+=3;goto B662f1e;
case 0x662f20:c.instructions+=2;goto B662f20;
case 0x662f23:c.instructions+=1;goto B662f23;
case 0x662f25:goto L662f25;
case 0x662f2c:goto L662f2c;
case 0x662f2e:c.instructions+=1;goto B662f2e;
case 0x662f34:goto L662f34;
case 0x662f37:c.instructions+=1;goto B662f37;
case 0x662f3d:goto L662f3d;
case 0x662f40:c.instructions+=1;goto B662f40;
case 0x662f46:goto L662f46;
case 0x662f49:c.instructions+=1;goto B662f49;
case 0x662f4f:goto L662f4f;
case 0x662f52:c.instructions+=1;goto B662f52;
case 0x662f58:goto L662f58;
case 0x662f5c:c.instructions+=2;goto B662f5c;
case 0x662f5e:c.instructions+=1;goto B662f5e;
case 0x662f60:goto L662f60;
case 0x662f63:c.instructions+=2;goto B662f63;
case 0x662f65:c.instructions+=1;goto B662f65;
case 0x662f68:goto L662f68;
case 0x662f6c:c.instructions+=4;goto B662f6c;
case 0x662f70:c.instructions+=3;goto B662f70;
case 0x662f73:c.instructions+=2;goto B662f73;
case 0x662f76:c.instructions+=1;goto B662f76;
case 0x662f7c:goto L662f7c;
case 0x662f80:c.instructions+=1;goto B662f80;
case 0x662f86:goto L662f86;
case 0x662f8a:c.instructions+=3;goto B662f8a;
case 0x662f8c:c.instructions+=2;goto B662f8c;
case 0x662f8f:c.instructions+=1;goto B662f8f;
case 0x662f91:goto L662f91;
case 0x662f94:c.instructions+=1;goto B662f94;
case 0x662f97:goto L662f97;
case 0x662f9b:c.instructions+=1;goto B662f9b;
case 0x662f9d:goto L662f9d;
case 0x662fa1:c.instructions+=1;goto B662fa1;
case 0x662fa3:goto L662fa3;
case 0x662fa5:c.instructions+=1;goto B662fa5;
case 0x662fa8:goto L662fa8;
case 0x662faa:c.instructions+=11;goto B662faa;
case 0x662fad:c.instructions+=10;goto B662fad;
case 0x662fae:c.instructions+=9;goto B662fae;
case 0x662fb1:c.instructions+=8;goto B662fb1;
case 0x662fb4:c.instructions+=7;goto B662fb4;
case 0x662fb7:c.instructions+=6;goto B662fb7;
case 0x662fb8:c.instructions+=5;goto B662fb8;
case 0x662fbb:c.instructions+=4;goto B662fbb;
case 0x662fbc:c.instructions+=3;goto B662fbc;
case 0x662fbf:c.instructions+=2;goto B662fbf;
case 0x662fc0:c.instructions+=1;goto B662fc0;
case 0x662fc5:goto L662fc5;
case 0x662fc8:c.instructions+=4;goto B662fc8;
case 0x662fcb:c.instructions+=3;goto B662fcb;
case 0x662fce:c.instructions+=2;goto B662fce;
case 0x662fd1:c.instructions+=1;goto B662fd1;
case 0x662fd3:goto L662fd3;
case 0x662fd6:c.instructions+=3;goto B662fd6;
case 0x662fd9:c.instructions+=2;goto B662fd9;
case 0x662fdc:c.instructions+=1;goto B662fdc;
case 0x662fde:goto L662fde;
case 0x662fe3:goto L662fe3;
case 0x662fe6:c.instructions+=6;goto B662fe6;
case 0x662fe9:c.instructions+=5;goto B662fe9;
case 0x662fec:c.instructions+=4;goto B662fec;
case 0x662fee:c.instructions+=3;goto B662fee;
case 0x662fef:c.instructions+=2;goto B662fef;
case 0x662ff2:c.instructions+=1;goto B662ff2;
case 0x662ff8:goto L662ff8;
case 0x662ff9:c.instructions+=1;goto B662ff9;
case 0x662ffb:goto L662ffb;
case 0x662ffc:c.instructions+=1;goto B662ffc;
default:missing_instruction(c.pc);}
B662005:L662005:{c.instructions+=2;NFSU2_TR(0x662005);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662008:{NFSU2_TR(0x662008);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6622ec;}}
}
B66200e:L66200e:{c.instructions+=2;NFSU2_TR(0x66200e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662011:{NFSU2_TR(0x662011);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66219a;}}
}
B662017:L662017:{c.instructions+=2;NFSU2_TR(0x662017);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66201a:{NFSU2_TR(0x66201a);
if(r1(R+518)){{goto L66207f;}}
}
B66201c:L66201c:{c.instructions+=2;NFSU2_TR(0x66201c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66201f:{NFSU2_TR(0x66201f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662325;}}
}
B662025:L662025:{c.instructions+=5;NFSU2_TR(0x662025);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662028:{NFSU2_TR(0x662028);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B66202b:{NFSU2_TR(0x66202b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66202d:{NFSU2_TR(0x66202d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662030:{NFSU2_TR(0x662030);
if(r1(R+518)){{goto L662078;}}
}
B662032:L662032:{c.instructions+=5;NFSU2_TR(0x662032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662035:{NFSU2_TR(0x662035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662039:{NFSU2_TR(0x662039);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66203b:{NFSU2_TR(0x66203b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66203e:{NFSU2_TR(0x66203e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662073;}}
}
B662040:L662040:{c.instructions+=4;NFSU2_TR(0x662040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662043:{NFSU2_TR(0x662043);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662046:{NFSU2_TR(0x662046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B662049:{NFSU2_TR(0x662049);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66204e;}}
}
B66204b:L66204b:{c.instructions+=2;NFSU2_TR(0x66204b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66204d:{NFSU2_TR(0x66204d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66204e:L66204e:{c.instructions+=10;NFSU2_TR(0x66204e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66204f:{NFSU2_TR(0x66204f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662050:{NFSU2_TR(0x662050);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B662053:{NFSU2_TR(0x662053);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662054:{NFSU2_TR(0x662054);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662057:{NFSU2_TR(0x662057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662058:{NFSU2_TR(0x662058);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66205b:{NFSU2_TR(0x66205b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66205c:{NFSU2_TR(0x66205c);
__builtin_memmove((R+4),(R+28),4);
}
B66205e:{NFSU2_TR(0x66205e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662063ull));
TAIL_STATIC(0x65ddc8u,65d);
}
B662063:L662063:{c.instructions+=2;NFSU2_TR(0x662063);
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
B662065:{NFSU2_TR(0x662065);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66232a;}}
}
B66206b:L66206b:{c.instructions+=3;NFSU2_TR(0x66206b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66206e:{NFSU2_TR(0x66206e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B662071:{NFSU2_TR(0x662071);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662040u);}goto L662040;}}
}
B662073:L662073:{c.instructions+=2;NFSU2_TR(0x662073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662076:{NFSU2_TR(0x662076);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662032u);}goto L662032;}}
}
B662078:L662078:{c.instructions+=2;NFSU2_TR(0x662078);
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
B66207a:{NFSU2_TR(0x66207a);
{goto L66232a;}
}
B66207f:L66207f:{c.instructions+=2;NFSU2_TR(0x66207f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662082:{NFSU2_TR(0x662082);
if(r1(R+518)){{goto L662158;}}
}
B662088:L662088:{c.instructions+=1;NFSU2_TR(0x662088);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B66208a:L66208a:{c.instructions+=2;NFSU2_TR(0x66208a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66208d:{NFSU2_TR(0x66208d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L662116;}}
}
B662093:L662093:{c.instructions+=2;NFSU2_TR(0x662093);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662096:{NFSU2_TR(0x662096);
if(r1(R+518)){{goto L6620d8;}}
}
B662098:L662098:{c.instructions+=2;NFSU2_TR(0x662098);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66209b:{NFSU2_TR(0x66209b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B66209d:L66209d:{c.instructions+=2;NFSU2_TR(0x66209d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66209f:{NFSU2_TR(0x66209f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B6620a1:L6620a1:{c.instructions+=10;NFSU2_TR(0x6620a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6620a7:{NFSU2_TR(0x6620a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6620aa:{NFSU2_TR(0x6620aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6620ad:{NFSU2_TR(0x6620ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6620b0:{NFSU2_TR(0x6620b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6620b3:{NFSU2_TR(0x6620b3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6620b5:{NFSU2_TR(0x6620b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6620b8:{NFSU2_TR(0x6620b8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6620ba:{NFSU2_TR(0x6620ba);
__builtin_memmove((R+4),(R+28),4);
}
B6620bc:{NFSU2_TR(0x6620bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6620c1ull));
TAIL_STATIC(0x65cc10u,65c);
}
B6620c1:L6620c1:{c.instructions+=2;NFSU2_TR(0x6620c1);
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
B6620c3:{NFSU2_TR(0x6620c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66232a;}}
}
B6620c9:L6620c9:{c.instructions+=4;NFSU2_TR(0x6620c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6620cd:{NFSU2_TR(0x6620cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6620d1:{NFSU2_TR(0x6620d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6620d4:{NFSU2_TR(0x6620d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6620a1u);}goto L6620a1;}}
}
B6620d6:L6620d6:{c.instructions+=1;NFSU2_TR(0x6620d6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B6620d8:L6620d8:{c.instructions+=2;NFSU2_TR(0x6620d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6620da:{NFSU2_TR(0x6620da);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B6620dc:L6620dc:{c.instructions+=10;NFSU2_TR(0x6620dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6620e2:{NFSU2_TR(0x6620e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6620e5:{NFSU2_TR(0x6620e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6620e8:{NFSU2_TR(0x6620e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6620eb:{NFSU2_TR(0x6620eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6620ee:{NFSU2_TR(0x6620ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6620f0:{NFSU2_TR(0x6620f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6620f3:{NFSU2_TR(0x6620f3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6620f5:{NFSU2_TR(0x6620f5);
__builtin_memmove((R+4),(R+28),4);
}
B6620f7:{NFSU2_TR(0x6620f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6620fcull));
TAIL_STATIC(0x65cc10u,65c);
}
B6620fc:L6620fc:{c.instructions+=2;NFSU2_TR(0x6620fc);
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
B6620fe:{NFSU2_TR(0x6620fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66232a;}}
}
B662104:L662104:{c.instructions+=4;NFSU2_TR(0x662104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662108:{NFSU2_TR(0x662108);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66210c:{NFSU2_TR(0x66210c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66210f:{NFSU2_TR(0x66210f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6620dcu);}goto L6620dc;}}
}
B662111:L662111:{c.instructions+=1;NFSU2_TR(0x662111);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B662116:L662116:{c.instructions+=2;NFSU2_TR(0x662116);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662118:{NFSU2_TR(0x662118);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B66211e:L66211e:{c.instructions+=10;NFSU2_TR(0x66211e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662124:{NFSU2_TR(0x662124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662127:{NFSU2_TR(0x662127);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66212a:{NFSU2_TR(0x66212a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66212d:{NFSU2_TR(0x66212d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662130:{NFSU2_TR(0x662130);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B662132:{NFSU2_TR(0x662132);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662135:{NFSU2_TR(0x662135);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B662137:{NFSU2_TR(0x662137);
__builtin_memmove((R+4),(R+28),4);
}
B662139:{NFSU2_TR(0x662139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66213eull));
TAIL_STATIC(0x65ccc8u,65c);
}
B66213e:L66213e:{c.instructions+=2;NFSU2_TR(0x66213e);
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
B662140:{NFSU2_TR(0x662140);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66232a;}}
}
B662146:L662146:{c.instructions+=4;NFSU2_TR(0x662146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66214a:{NFSU2_TR(0x66214a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66214e:{NFSU2_TR(0x66214e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662151:{NFSU2_TR(0x662151);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66211eu);}goto L66211e;}}
}
B662153:L662153:{c.instructions+=1;NFSU2_TR(0x662153);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B662158:L662158:{c.instructions+=2;NFSU2_TR(0x662158);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66215a:{NFSU2_TR(0x66215a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B662160:L662160:{c.instructions+=10;NFSU2_TR(0x662160);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662166:{NFSU2_TR(0x662166);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662169:{NFSU2_TR(0x662169);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66216c:{NFSU2_TR(0x66216c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66216f:{NFSU2_TR(0x66216f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662172:{NFSU2_TR(0x662172);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B662174:{NFSU2_TR(0x662174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662177:{NFSU2_TR(0x662177);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B662179:{NFSU2_TR(0x662179);
__builtin_memmove((R+4),(R+28),4);
}
B66217b:{NFSU2_TR(0x66217b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662180ull));
TAIL_STATIC(0x65cd6cu,65c);
}
B662180:L662180:{c.instructions+=2;NFSU2_TR(0x662180);
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
B662182:{NFSU2_TR(0x662182);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66232a;}}
}
B662188:L662188:{c.instructions+=4;NFSU2_TR(0x662188);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66218c:{NFSU2_TR(0x66218c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662190:{NFSU2_TR(0x662190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662193:{NFSU2_TR(0x662193);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662160u);}goto L662160;}}
}
B662195:L662195:{c.instructions+=1;NFSU2_TR(0x662195);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B66219a:L66219a:{c.instructions+=6;NFSU2_TR(0x66219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66219d:{NFSU2_TR(0x66219d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6621a0:{NFSU2_TR(0x6621a0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6621a1:{NFSU2_TR(0x6621a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6621a4:{NFSU2_TR(0x6621a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6621a7:{NFSU2_TR(0x6621a7);
if(r1(R+518)){{goto L662281;}}
}
B6621ad:L6621ad:{c.instructions+=2;NFSU2_TR(0x6621ad);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6621ae:{NFSU2_TR(0x6621ae);
if(r1(R+518)){{goto L66221b;}}
}
B6621b0:L6621b0:{c.instructions+=2;NFSU2_TR(0x6621b0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6621b1:{NFSU2_TR(0x6621b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B6621b7:L6621b7:{c.instructions+=2;NFSU2_TR(0x6621b7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6621b9:{NFSU2_TR(0x6621b9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B6621bf:L6621bf:{c.instructions+=4;NFSU2_TR(0x6621bf);
__builtin_memmove((R+28),(R+0),4);
}
B6621c1:{NFSU2_TR(0x6621c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6621c4:{NFSU2_TR(0x6621c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6621c7:{NFSU2_TR(0x6621c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6621ca:L6621ca:{c.instructions+=3;NFSU2_TR(0x6621ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6621ce:{NFSU2_TR(0x6621ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6621d0:{NFSU2_TR(0x6621d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66220a;}}
}
B6621d2:L6621d2:{c.instructions+=2;NFSU2_TR(0x6621d2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6621d4:{NFSU2_TR(0x6621d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662202;}}
}
B6621d6:L6621d6:{c.instructions+=7;NFSU2_TR(0x6621d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6621d9:{NFSU2_TR(0x6621d9);
__builtin_memmove((R+8),(R+24),4);
}
B6621db:{NFSU2_TR(0x6621db);
__builtin_memmove((R+4),(R+0),4);
}
B6621dd:{NFSU2_TR(0x6621dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6621e0:{NFSU2_TR(0x6621e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6621e3:{NFSU2_TR(0x6621e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6621e6:{NFSU2_TR(0x6621e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6621e9:L6621e9:{c.instructions+=8;NFSU2_TR(0x6621e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6621ec:{NFSU2_TR(0x6621ec);
{u32 ea_=u32(r4(R+12)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6621ef:{NFSU2_TR(0x6621ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6621f2:{NFSU2_TR(0x6621f2);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6621f5:{NFSU2_TR(0x6621f5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6621f8:{NFSU2_TR(0x6621f8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6621fa:{NFSU2_TR(0x6621fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6621fd:{NFSU2_TR(0x6621fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6621e9u);}goto L6621e9;}}
}
B6621ff:L6621ff:{c.instructions+=1;NFSU2_TR(0x6621ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662202:L662202:{c.instructions+=3;NFSU2_TR(0x662202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662205:{NFSU2_TR(0x662205);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B662208:{NFSU2_TR(0x662208);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6621d2u);}goto L6621d2;}}
}
B66220a:L66220a:{c.instructions+=4;NFSU2_TR(0x66220a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66220e:{NFSU2_TR(0x66220e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B662211:{NFSU2_TR(0x662211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662214:{NFSU2_TR(0x662214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6621cau);}goto L6621ca;}}
}
B662216:L662216:{c.instructions+=1;NFSU2_TR(0x662216);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B66221b:L66221b:{c.instructions+=2;NFSU2_TR(0x66221b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66221d:{NFSU2_TR(0x66221d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B662223:L662223:{c.instructions+=4;NFSU2_TR(0x662223);
__builtin_memmove((R+28),(R+0),4);
}
B662225:{NFSU2_TR(0x662225);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B662228:{NFSU2_TR(0x662228);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B66222b:{NFSU2_TR(0x66222b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66222e:L66222e:{c.instructions+=3;NFSU2_TR(0x66222e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662232:{NFSU2_TR(0x662232);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662234:{NFSU2_TR(0x662234);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662270;}}
}
B662236:L662236:{c.instructions+=2;NFSU2_TR(0x662236);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662238:{NFSU2_TR(0x662238);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662268;}}
}
B66223a:L66223a:{c.instructions+=6;NFSU2_TR(0x66223a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66223d:{NFSU2_TR(0x66223d);
__builtin_memmove((R+8),(R+4),4);
}
B66223f:{NFSU2_TR(0x66223f);
__builtin_memmove((R+24),(R+4),4);
}
B662241:{NFSU2_TR(0x662241);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B662244:{NFSU2_TR(0x662244);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B662247:{NFSU2_TR(0x662247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66224a:L66224a:{c.instructions+=10;NFSU2_TR(0x66224a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66224d:{NFSU2_TR(0x66224d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B662250:{NFSU2_TR(0x662250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662253:{NFSU2_TR(0x662253);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B662256:{NFSU2_TR(0x662256);
__builtin_memmove((R+4),(R+0),4);
}
B662258:{NFSU2_TR(0x662258);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66225b:{NFSU2_TR(0x66225b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66225e:{NFSU2_TR(0x66225e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B662260:{NFSU2_TR(0x662260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662263:{NFSU2_TR(0x662263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66224au);}goto L66224a;}}
}
B662265:L662265:{c.instructions+=1;NFSU2_TR(0x662265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662268:L662268:{c.instructions+=3;NFSU2_TR(0x662268);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66226b:{NFSU2_TR(0x66226b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B66226e:{NFSU2_TR(0x66226e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662236u);}goto L662236;}}
}
B662270:L662270:{c.instructions+=4;NFSU2_TR(0x662270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662274:{NFSU2_TR(0x662274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B662277:{NFSU2_TR(0x662277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66227a:{NFSU2_TR(0x66227a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66222eu);}goto L66222e;}}
}
B66227c:L66227c:{c.instructions+=1;NFSU2_TR(0x66227c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B662281:L662281:{c.instructions+=2;NFSU2_TR(0x662281);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662283:{NFSU2_TR(0x662283);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}}
}
B662289:L662289:{c.instructions+=4;NFSU2_TR(0x662289);
__builtin_memmove((R+28),(R+0),4);
}
B66228b:{NFSU2_TR(0x66228b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B66228e:{NFSU2_TR(0x66228e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B662291:{NFSU2_TR(0x662291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662294:L662294:{c.instructions+=3;NFSU2_TR(0x662294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662298:{NFSU2_TR(0x662298);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66229a:{NFSU2_TR(0x66229a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6622db;}}
}
B66229c:L66229c:{c.instructions+=2;NFSU2_TR(0x66229c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66229e:{NFSU2_TR(0x66229e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6622d3;}}
}
B6622a0:L6622a0:{c.instructions+=6;NFSU2_TR(0x6622a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6622a3:{NFSU2_TR(0x6622a3);
__builtin_memmove((R+8),(R+4),4);
}
B6622a5:{NFSU2_TR(0x6622a5);
__builtin_memmove((R+24),(R+4),4);
}
B6622a7:{NFSU2_TR(0x6622a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6622aa:{NFSU2_TR(0x6622aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6622ad:{NFSU2_TR(0x6622ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6622b0:L6622b0:{c.instructions+=12;NFSU2_TR(0x6622b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6622b3:{NFSU2_TR(0x6622b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6622b5:{NFSU2_TR(0x6622b5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6622b8:{NFSU2_TR(0x6622b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6622bb:{NFSU2_TR(0x6622bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6622be:{NFSU2_TR(0x6622be);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6622c1:{NFSU2_TR(0x6622c1);
__builtin_memmove((R+4),(R+0),4);
}
B6622c3:{NFSU2_TR(0x6622c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6622c6:{NFSU2_TR(0x6622c6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6622c9:{NFSU2_TR(0x6622c9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6622cb:{NFSU2_TR(0x6622cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6622ce:{NFSU2_TR(0x6622ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6622b0u);}goto L6622b0;}}
}
B6622d0:L6622d0:{c.instructions+=1;NFSU2_TR(0x6622d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6622d3:L6622d3:{c.instructions+=3;NFSU2_TR(0x6622d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6622d6:{NFSU2_TR(0x6622d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6622d9:{NFSU2_TR(0x6622d9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66229cu);}goto L66229c;}}
}
B6622db:L6622db:{c.instructions+=4;NFSU2_TR(0x6622db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6622df:{NFSU2_TR(0x6622df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6622e2:{NFSU2_TR(0x6622e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6622e5:{NFSU2_TR(0x6622e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662294u);}goto L662294;}}
}
B6622e7:L6622e7:{c.instructions+=1;NFSU2_TR(0x6622e7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B6622ec:L6622ec:{c.instructions+=10;NFSU2_TR(0x6622ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6622ef:{NFSU2_TR(0x6622ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6622f2:{NFSU2_TR(0x6622f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6622f5:{NFSU2_TR(0x6622f5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6622f7:{NFSU2_TR(0x6622f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6622f8:{NFSU2_TR(0x6622f8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6622fa:{NFSU2_TR(0x6622fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6622fd:{NFSU2_TR(0x6622fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B662300:{NFSU2_TR(0x662300);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B662302:{NFSU2_TR(0x662302);
{goto L66231c;}
}
B662304:L662304:{c.instructions+=2;NFSU2_TR(0x662304);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662306:{NFSU2_TR(0x662306);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66231a;}}
}
B662308:L662308:{c.instructions+=1;NFSU2_TR(0x662308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66230b:L66230b:{c.instructions+=6;NFSU2_TR(0x66230b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66230d:{NFSU2_TR(0x66230d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66230f:{NFSU2_TR(0x66230f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B662312:{NFSU2_TR(0x662312);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B662315:{NFSU2_TR(0x662315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662318:{NFSU2_TR(0x662318);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66230bu);}goto L66230b;}}
}
B66231a:L66231a:{c.instructions+=1;NFSU2_TR(0x66231a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B66231c:L66231c:{c.instructions+=2;NFSU2_TR(0x66231c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B66231e:{NFSU2_TR(0x66231e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662304u);}goto L662304;}}
}
B662320:L662320:{c.instructions+=1;NFSU2_TR(0x662320);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662078u);}goto L662078;}
}
B662325:L662325:{c.instructions+=1;NFSU2_TR(0x662325);
w4(R+0,u32(0x80004005ull));
}
B66232a:L66232a:{c.instructions+=5;NFSU2_TR(0x66232a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66232b:{NFSU2_TR(0x66232b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66232c:{NFSU2_TR(0x66232c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66232d:{NFSU2_TR(0x66232d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66232e:{NFSU2_TR(0x66232e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B662331:L662331:{c.instructions+=12;NFSU2_TR(0x662331);
__builtin_memmove((R+28),(R+28),4);
}
B662333:{NFSU2_TR(0x662333);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662334:{NFSU2_TR(0x662334);
__builtin_memmove((R+20),(R+16),4);
}
B662336:{NFSU2_TR(0x662336);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B662339:{NFSU2_TR(0x662339);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66233c:{NFSU2_TR(0x66233c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66233f:{NFSU2_TR(0x66233f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662340:{NFSU2_TR(0x662340);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B662343:{NFSU2_TR(0x662343);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662344:{NFSU2_TR(0x662344);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662347:{NFSU2_TR(0x662347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662348:{NFSU2_TR(0x662348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66234dull));
TAIL_STATIC(0x65e168u,65e);
}
B66234d:L66234d:{c.instructions+=2;NFSU2_TR(0x66234d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66234e:{NFSU2_TR(0x66234e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B662351:L662351:{c.instructions+=7;NFSU2_TR(0x662351);
__builtin_memmove((R+28),(R+28),4);
}
B662353:{NFSU2_TR(0x662353);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662354:{NFSU2_TR(0x662354);
__builtin_memmove((R+20),(R+16),4);
}
B662356:{NFSU2_TR(0x662356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662359:{NFSU2_TR(0x662359);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66235c:{NFSU2_TR(0x66235c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66235f:{NFSU2_TR(0x66235f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662364ull));
TAIL_STATIC(0x65e5c6u,65e);
}
B662364:L662364:{c.instructions+=2;NFSU2_TR(0x662364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B662365:{NFSU2_TR(0x662365);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B662368:L662368:{c.instructions+=5;NFSU2_TR(0x662368);
__builtin_memmove((R+28),(R+28),4);
}
B66236a:{NFSU2_TR(0x66236a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66236b:{NFSU2_TR(0x66236b);
__builtin_memmove((R+20),(R+16),4);
}
B66236d:{NFSU2_TR(0x66236d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B662371:{NFSU2_TR(0x662371);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66237a;}}
}
B662373:L662373:{c.instructions+=2;NFSU2_TR(0x662373);
w4(R+0,u32(0x8876086cull));
}
B662378:{NFSU2_TR(0x662378);
{goto L662388;}
}
B66237a:L66237a:{c.instructions+=4;NFSU2_TR(0x66237a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66237d:{NFSU2_TR(0x66237d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B662380:{NFSU2_TR(0x662380);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B662383:{NFSU2_TR(0x662383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662388ull));
TAIL_STATIC(0x65e607u,65e);
}
B662388:L662388:{c.instructions+=2;NFSU2_TR(0x662388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B662389:{NFSU2_TR(0x662389);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66238c:L66238c:{c.instructions+=7;NFSU2_TR(0x66238c);
__builtin_memmove((R+28),(R+28),4);
}
B66238e:{NFSU2_TR(0x66238e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66238f:{NFSU2_TR(0x66238f);
__builtin_memmove((R+20),(R+16),4);
}
B662391:{NFSU2_TR(0x662391);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B662395:{NFSU2_TR(0x662395);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662396:{NFSU2_TR(0x662396);
__builtin_memmove((R+28),(R+4),4);
}
B662398:{NFSU2_TR(0x662398);
if(r1(R+518)){{goto L6623bf;}}
}
B66239a:L66239a:{c.instructions+=7;NFSU2_TR(0x66239a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66239b:{NFSU2_TR(0x66239b);
u8 U[4];
w4(U+0,u32(0x65ee40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623a0:{NFSU2_TR(0x6623a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6623a3:{NFSU2_TR(0x6623a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6623a5:{NFSU2_TR(0x6623a5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623a7:{NFSU2_TR(0x6623a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623a8:{NFSU2_TR(0x6623a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6623adull));
TAIL_STATIC(0x64b5ffu,64b);
}
B6623ad:L6623ad:{c.instructions+=2;NFSU2_TR(0x6623ad);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6623b1:{NFSU2_TR(0x6623b1);
if(r1(R+518)){{goto L6623ba;}}
}
B6623b3:L6623b3:{c.instructions+=2;NFSU2_TR(0x6623b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623b4:{NFSU2_TR(0x6623b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6623b9ull));
TAIL_STATIC(0x575630u,575);
}
B6623b9:L6623b9:{c.instructions+=1;NFSU2_TR(0x6623b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6623ba:L6623ba:{c.instructions+=3;NFSU2_TR(0x6623ba);
__builtin_memmove((R+0),(R+24),4);
}
B6623bc:{NFSU2_TR(0x6623bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6623bd:{NFSU2_TR(0x6623bd);
{goto L6623d5;}
}
B6623bf:L6623bf:{c.instructions+=2;NFSU2_TR(0x6623bf);
__builtin_memmove((R+4),(R+28),4);
}
B6623c1:{NFSU2_TR(0x6623c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6623c6ull));
TAIL_STATIC(0x65ee40u,65e);
}
B6623c6:L6623c6:{c.instructions+=2;NFSU2_TR(0x6623c6);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6623ca:{NFSU2_TR(0x6623ca);
if(r1(R+518)){{goto L6623d3;}}
}
B6623cc:L6623cc:{c.instructions+=2;NFSU2_TR(0x6623cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623cd:{NFSU2_TR(0x6623cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6623d2ull));
TAIL_STATIC(0x575630u,575);
}
B6623d2:L6623d2:{c.instructions+=1;NFSU2_TR(0x6623d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6623d3:L6623d3:{c.instructions+=1;NFSU2_TR(0x6623d3);
__builtin_memmove((R+0),(R+28),4);
}
B6623d5:L6623d5:{c.instructions+=3;NFSU2_TR(0x6623d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6623d6:{NFSU2_TR(0x6623d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6623d7:{NFSU2_TR(0x6623d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6623da:L6623da:{c.instructions+=17;NFSU2_TR(0x6623da);
__builtin_memmove((R+28),(R+28),4);
}
B6623dc:{NFSU2_TR(0x6623dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623dd:{NFSU2_TR(0x6623dd);
__builtin_memmove((R+20),(R+16),4);
}
B6623df:{NFSU2_TR(0x6623df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6623e2:{NFSU2_TR(0x6623e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6623e5:{NFSU2_TR(0x6623e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6623e8:{NFSU2_TR(0x6623e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6623ea:{NFSU2_TR(0x6623ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6623ed:{NFSU2_TR(0x6623ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623ee:{NFSU2_TR(0x6623ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6623f1:{NFSU2_TR(0x6623f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6623f3:{NFSU2_TR(0x6623f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623f4:{NFSU2_TR(0x6623f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6623f5:{NFSU2_TR(0x6623f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6623f8:{NFSU2_TR(0x6623f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6623fb:{NFSU2_TR(0x6623fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6623fe:{NFSU2_TR(0x6623fe);
if(r1(R+518)){{goto L662408;}}
}
B662400:L662400:{c.instructions+=3;NFSU2_TR(0x662400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662403:{NFSU2_TR(0x662403);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662406:{NFSU2_TR(0x662406);
{goto L66240a;}
}
B662408:L662408:{c.instructions+=1;NFSU2_TR(0x662408);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66240a:L66240a:{c.instructions+=2;NFSU2_TR(0x66240a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66240c:{NFSU2_TR(0x66240c);
if(r1(R+518)){{goto L662416;}}
}
B66240e:L66240e:{c.instructions+=3;NFSU2_TR(0x66240e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B662411:{NFSU2_TR(0x662411);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B662414:{NFSU2_TR(0x662414);
{goto L66241c;}
}
B662416:L662416:{c.instructions+=2;NFSU2_TR(0x662416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662419:{NFSU2_TR(0x662419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66241c:L66241c:{c.instructions+=3;NFSU2_TR(0x66241c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66241f:{NFSU2_TR(0x66241f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662422:{NFSU2_TR(0x662422);
if(r1(R+518)){{goto L662429;}}
}
B662424:L662424:{c.instructions+=2;NFSU2_TR(0x662424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662427:{NFSU2_TR(0x662427);
{goto L66243a;}
}
B662429:L662429:{c.instructions+=4;NFSU2_TR(0x662429);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66242c:{NFSU2_TR(0x66242c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66242e:{NFSU2_TR(0x66242e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662431:{NFSU2_TR(0x662431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66243a;}}
}
B662433:L662433:{c.instructions+=1;NFSU2_TR(0x662433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66243a:L66243a:{c.instructions+=2;NFSU2_TR(0x66243a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66243c:{NFSU2_TR(0x66243c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L662783;}}
}
B662442:L662442:{c.instructions+=2;NFSU2_TR(0x662442);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662445:{NFSU2_TR(0x662445);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L662629;}}
}
B66244b:L66244b:{c.instructions+=2;NFSU2_TR(0x66244b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66244e:{NFSU2_TR(0x66244e);
if(r1(R+518)){{goto L6624f1;}}
}
B662454:L662454:{c.instructions+=2;NFSU2_TR(0x662454);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662457:{NFSU2_TR(0x662457);
if(r1(R+518)){{goto L662629;}}
}
B66245d:L66245d:{c.instructions+=2;NFSU2_TR(0x66245d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662460:{NFSU2_TR(0x662460);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662783;}}
}
B662466:L662466:{c.instructions+=3;NFSU2_TR(0x662466);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66246a:{NFSU2_TR(0x66246a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66246c:{NFSU2_TR(0x66246c);
if(r1(R+518)){{goto L662476;}}
}
B66246e:L66246e:{c.instructions+=3;NFSU2_TR(0x66246e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662471:{NFSU2_TR(0x662471);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B662473:{NFSU2_TR(0x662473);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662476:L662476:{c.instructions+=5;NFSU2_TR(0x662476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66247a:{NFSU2_TR(0x66247a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66247e:{NFSU2_TR(0x66247e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662481:{NFSU2_TR(0x662481);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662484:{NFSU2_TR(0x662484);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662783;}}
}
B66248a:L66248a:{c.instructions+=2;NFSU2_TR(0x66248a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66248e:{NFSU2_TR(0x66248e);
if(r1(R+518)){{goto L662783;}}
}
B662494:L662494:{c.instructions+=4;NFSU2_TR(0x662494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662498:{NFSU2_TR(0x662498);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66249a:{NFSU2_TR(0x66249a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66249d:{NFSU2_TR(0x66249d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6624e1;}}
}
B66249f:L66249f:{c.instructions+=2;NFSU2_TR(0x66249f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6624a2:{NFSU2_TR(0x6624a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6624a5:L6624a5:{c.instructions+=2;NFSU2_TR(0x6624a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6624a9:{NFSU2_TR(0x6624a9);
if(r1(R+518)){{goto L6624e1;}}
}
B6624ab:L6624ab:{c.instructions+=2;NFSU2_TR(0x6624ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6624af:{NFSU2_TR(0x6624af);
if(r1(R+518)){{goto L6624b6;}}
}
B6624b1:L6624b1:{c.instructions+=2;NFSU2_TR(0x6624b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6624b3:{NFSU2_TR(0x6624b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6624b6:L6624b6:{c.instructions+=12;NFSU2_TR(0x6624b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6624b8:{NFSU2_TR(0x6624b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6624bb:{NFSU2_TR(0x6624bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6624bc:{NFSU2_TR(0x6624bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6624bf:{NFSU2_TR(0x6624bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6624c2:{NFSU2_TR(0x6624c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6624c5:{NFSU2_TR(0x6624c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6624c6:{NFSU2_TR(0x6624c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6624c9:{NFSU2_TR(0x6624c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6624ca:{NFSU2_TR(0x6624ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6624cd:{NFSU2_TR(0x6624cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6624ce:{NFSU2_TR(0x6624ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6624d3ull));
TAIL_STATIC(0x65ee70u,65e);
}
B6624d3:L6624d3:{c.instructions+=5;NFSU2_TR(0x6624d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6624d6:{NFSU2_TR(0x6624d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6624d9:{NFSU2_TR(0x6624d9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6624dc:{NFSU2_TR(0x6624dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6624df:{NFSU2_TR(0x6624df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6624a5u);}goto L6624a5;}}
}
B6624e1:L6624e1:{c.instructions+=4;NFSU2_TR(0x6624e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6624e4:{NFSU2_TR(0x6624e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6624e7:{NFSU2_TR(0x6624e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6624ea:{NFSU2_TR(0x6624ea);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66248au);}goto L66248a;}}
}
B6624ec:L6624ec:{c.instructions+=1;NFSU2_TR(0x6624ec);
{goto L662783;}
}
B6624f1:L6624f1:{c.instructions+=7;NFSU2_TR(0x6624f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6624f4:{NFSU2_TR(0x6624f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6624f7:{NFSU2_TR(0x6624f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6624fa:{NFSU2_TR(0x6624fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6624fc:{NFSU2_TR(0x6624fc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6624fd:{NFSU2_TR(0x6624fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662500:{NFSU2_TR(0x662500);
if(r1(R+518)){{goto L6625cd;}}
}
B662506:L662506:{c.instructions+=2;NFSU2_TR(0x662506);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B662507:{NFSU2_TR(0x662507);
if(r1(R+518)){{goto L662571;}}
}
B662509:L662509:{c.instructions+=2;NFSU2_TR(0x662509);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66250a:{NFSU2_TR(0x66250a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662783;}}
}
B662510:L662510:{c.instructions+=7;NFSU2_TR(0x662510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662513:{NFSU2_TR(0x662513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662517:{NFSU2_TR(0x662517);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66251b:{NFSU2_TR(0x66251b);
__builtin_memmove((R+24),(R+8),4);
}
B66251d:{NFSU2_TR(0x66251d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662520:{NFSU2_TR(0x662520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662523:{NFSU2_TR(0x662523);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66256a;}}
}
B662525:L662525:{c.instructions+=3;NFSU2_TR(0x662525);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B662527:{NFSU2_TR(0x662527);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662529:{NFSU2_TR(0x662529);
if(r1(R+518)){{goto L66256a;}}
}
B66252b:L66252b:{c.instructions+=2;NFSU2_TR(0x66252b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66252e:{NFSU2_TR(0x66252e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66255b;}}
}
B662530:L662530:{c.instructions+=1;NFSU2_TR(0x662530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662533:L662533:{c.instructions+=2;NFSU2_TR(0x662533);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662535:{NFSU2_TR(0x662535);
if(r1(R+518)){{goto L66255b;}}
}
B662537:L662537:{c.instructions+=3;NFSU2_TR(0x662537);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662539:{NFSU2_TR(0x662539);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66253c:{NFSU2_TR(0x66253c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66254e;}}
}
B66253e:L66253e:{c.instructions+=1;NFSU2_TR(0x66253e);
__builtin_memmove((R+4),(R+12),4);
}
B662540:L662540:{c.instructions+=6;NFSU2_TR(0x662540);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662542:{NFSU2_TR(0x662542);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B662545:{NFSU2_TR(0x662545);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B662548:{NFSU2_TR(0x662548);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B662549:{NFSU2_TR(0x662549);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66254c:{NFSU2_TR(0x66254c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662540u);}goto L662540;}}
}
B66254e:L66254e:{c.instructions+=6;NFSU2_TR(0x66254e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B662551:{NFSU2_TR(0x662551);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B662552:{NFSU2_TR(0x662552);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B662553:{NFSU2_TR(0x662553);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B662556:{NFSU2_TR(0x662556);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B662559:{NFSU2_TR(0x662559);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662533u);}goto L662533;}}
}
B66255b:L66255b:{c.instructions+=5;NFSU2_TR(0x66255b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66255f:{NFSU2_TR(0x66255f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662562:{NFSU2_TR(0x662562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662565:{NFSU2_TR(0x662565);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662568:{NFSU2_TR(0x662568);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662525u);}goto L662525;}}
}
B66256a:L66256a:{c.instructions+=2;NFSU2_TR(0x66256a);
__builtin_memmove((R+8),(R+24),4);
}
B66256c:{NFSU2_TR(0x66256c);
{goto L662783;}
}
B662571:L662571:{c.instructions+=4;NFSU2_TR(0x662571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662575:{NFSU2_TR(0x662575);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662579:{NFSU2_TR(0x662579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66257c:{NFSU2_TR(0x66257c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662783;}}
}
B662582:L662582:{c.instructions+=3;NFSU2_TR(0x662582);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B662584:{NFSU2_TR(0x662584);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662586:{NFSU2_TR(0x662586);
if(r1(R+518)){{goto L662783;}}
}
B66258c:L66258c:{c.instructions+=2;NFSU2_TR(0x66258c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66258f:{NFSU2_TR(0x66258f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6625bd;}}
}
B662591:L662591:{c.instructions+=3;NFSU2_TR(0x662591);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662593:{NFSU2_TR(0x662593);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662595:{NFSU2_TR(0x662595);
if(r1(R+518)){{goto L6625bd;}}
}
B662597:L662597:{c.instructions+=2;NFSU2_TR(0x662597);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66259a:{NFSU2_TR(0x66259a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6625b3;}}
}
B66259c:L66259c:{c.instructions+=2;NFSU2_TR(0x66259c);
__builtin_memmove((R+4),(R+28),4);
}
B66259e:{NFSU2_TR(0x66259e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6625a1:L6625a1:{c.instructions+=7;NFSU2_TR(0x6625a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6625a4:{NFSU2_TR(0x6625a4);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6625a7:{NFSU2_TR(0x6625a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6625aa:{NFSU2_TR(0x6625aa);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6625ad:{NFSU2_TR(0x6625ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6625ae:{NFSU2_TR(0x6625ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6625b1:{NFSU2_TR(0x6625b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6625a1u);}goto L6625a1;}}
}
B6625b3:L6625b3:{c.instructions+=5;NFSU2_TR(0x6625b3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6625b6:{NFSU2_TR(0x6625b6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6625b7:{NFSU2_TR(0x6625b7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6625b8:{NFSU2_TR(0x6625b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6625bb:{NFSU2_TR(0x6625bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662591u);}goto L662591;}}
}
B6625bd:L6625bd:{c.instructions+=4;NFSU2_TR(0x6625bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6625c0:{NFSU2_TR(0x6625c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6625c3:{NFSU2_TR(0x6625c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6625c6:{NFSU2_TR(0x6625c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662582u);}goto L662582;}}
}
B6625c8:L6625c8:{c.instructions+=1;NFSU2_TR(0x6625c8);
{goto L662783;}
}
B6625cd:L6625cd:{c.instructions+=4;NFSU2_TR(0x6625cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6625d1:{NFSU2_TR(0x6625d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6625d5:{NFSU2_TR(0x6625d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6625d8:{NFSU2_TR(0x6625d8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662783;}}
}
B6625de:L6625de:{c.instructions+=3;NFSU2_TR(0x6625de);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6625e0:{NFSU2_TR(0x6625e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6625e2:{NFSU2_TR(0x6625e2);
if(r1(R+518)){{goto L662783;}}
}
B6625e8:L6625e8:{c.instructions+=2;NFSU2_TR(0x6625e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6625eb:{NFSU2_TR(0x6625eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662619;}}
}
B6625ed:L6625ed:{c.instructions+=3;NFSU2_TR(0x6625ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6625ef:{NFSU2_TR(0x6625ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6625f1:{NFSU2_TR(0x6625f1);
if(r1(R+518)){{goto L662619;}}
}
B6625f3:L6625f3:{c.instructions+=2;NFSU2_TR(0x6625f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6625f6:{NFSU2_TR(0x6625f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66260f;}}
}
B6625f8:L6625f8:{c.instructions+=2;NFSU2_TR(0x6625f8);
__builtin_memmove((R+4),(R+28),4);
}
B6625fa:{NFSU2_TR(0x6625fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6625fd:L6625fd:{c.instructions+=7;NFSU2_TR(0x6625fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662600:{NFSU2_TR(0x662600);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B662603:{NFSU2_TR(0x662603);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B662606:{NFSU2_TR(0x662606);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B662609:{NFSU2_TR(0x662609);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66260a:{NFSU2_TR(0x66260a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66260d:{NFSU2_TR(0x66260d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6625fdu);}goto L6625fd;}}
}
B66260f:L66260f:{c.instructions+=5;NFSU2_TR(0x66260f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B662612:{NFSU2_TR(0x662612);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B662613:{NFSU2_TR(0x662613);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B662614:{NFSU2_TR(0x662614);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B662617:{NFSU2_TR(0x662617);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6625edu);}goto L6625ed;}}
}
B662619:L662619:{c.instructions+=4;NFSU2_TR(0x662619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66261c:{NFSU2_TR(0x66261c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66261f:{NFSU2_TR(0x66261f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662622:{NFSU2_TR(0x662622);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6625deu);}goto L6625de;}}
}
B662624:L662624:{c.instructions+=1;NFSU2_TR(0x662624);
{goto L662783;}
}
B662629:L662629:{c.instructions+=9;NFSU2_TR(0x662629);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66262c:{NFSU2_TR(0x66262c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66262e:{NFSU2_TR(0x66262e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662631:{NFSU2_TR(0x662631);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B662633:{NFSU2_TR(0x662633);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662636:{NFSU2_TR(0x662636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662639:{NFSU2_TR(0x662639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66263c:{NFSU2_TR(0x66263c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66263f:{NFSU2_TR(0x66263f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66264c;}}
}
B662641:L662641:{c.instructions+=5;NFSU2_TR(0x662641);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662643:{NFSU2_TR(0x662643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662644:{NFSU2_TR(0x662644);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B662646:{NFSU2_TR(0x662646);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B662649:{NFSU2_TR(0x662649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66264c:L66264c:{c.instructions+=2;NFSU2_TR(0x66264c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66264d:{NFSU2_TR(0x66264d);
if(r1(R+518)){{goto L662720;}}
}
B662653:L662653:{c.instructions+=2;NFSU2_TR(0x662653);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B662654:{NFSU2_TR(0x662654);
if(r1(R+518)){{goto L6626b5;}}
}
B662656:L662656:{c.instructions+=2;NFSU2_TR(0x662656);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B662657:{NFSU2_TR(0x662657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662783;}}
}
B66265d:L66265d:{c.instructions+=5;NFSU2_TR(0x66265d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662660:{NFSU2_TR(0x662660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662663:{NFSU2_TR(0x662663);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662665:{NFSU2_TR(0x662665);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662668:{NFSU2_TR(0x662668);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662783;}}
}
B66266e:L66266e:{c.instructions+=2;NFSU2_TR(0x66266e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662670:{NFSU2_TR(0x662670);
if(r1(R+518)){{goto L662783;}}
}
B662676:L662676:{c.instructions+=3;NFSU2_TR(0x662676);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B662678:{NFSU2_TR(0x662678);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66267b:{NFSU2_TR(0x66267b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6626a4;}}
}
B66267d:L66267d:{c.instructions+=2;NFSU2_TR(0x66267d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66267f:{NFSU2_TR(0x66267f);
if(r1(R+518)){{goto L6626a4;}}
}
B662681:L662681:{c.instructions+=14;NFSU2_TR(0x662681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B662683:{NFSU2_TR(0x662683);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B662685:{NFSU2_TR(0x662685);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662688:{NFSU2_TR(0x662688);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66268b:{NFSU2_TR(0x66268b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66268e:{NFSU2_TR(0x66268e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662691:{NFSU2_TR(0x662691);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662694:{NFSU2_TR(0x662694);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B662697:{NFSU2_TR(0x662697);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B66269a:{NFSU2_TR(0x66269a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66269d:{NFSU2_TR(0x66269d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B66269e:{NFSU2_TR(0x66269e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66269f:{NFSU2_TR(0x66269f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6626a2:{NFSU2_TR(0x6626a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66267du);}goto L66267d;}}
}
B6626a4:L6626a4:{c.instructions+=5;NFSU2_TR(0x6626a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6626a7:{NFSU2_TR(0x6626a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6626a8:{NFSU2_TR(0x6626a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6626ab:{NFSU2_TR(0x6626ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6626ae:{NFSU2_TR(0x6626ae);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66266eu);}goto L66266e;}}
}
B6626b0:L6626b0:{c.instructions+=1;NFSU2_TR(0x6626b0);
{goto L662783;}
}
B6626b5:L6626b5:{c.instructions+=6;NFSU2_TR(0x6626b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6626b9:{NFSU2_TR(0x6626b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6626bd:{NFSU2_TR(0x6626bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6626c0:{NFSU2_TR(0x6626c0);
__builtin_memmove((R+0),(R+8),4);
}
B6626c2:{NFSU2_TR(0x6626c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6626c5:{NFSU2_TR(0x6626c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662781;}}
}
B6626cb:L6626cb:{c.instructions+=2;NFSU2_TR(0x6626cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6626cd:{NFSU2_TR(0x6626cd);
if(r1(R+518)){{goto L662781;}}
}
B6626d3:L6626d3:{c.instructions+=3;NFSU2_TR(0x6626d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6626d7:{NFSU2_TR(0x6626d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6626db:{NFSU2_TR(0x6626db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662710;}}
}
B6626dd:L6626dd:{c.instructions+=2;NFSU2_TR(0x6626dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6626df:{NFSU2_TR(0x6626df);
if(r1(R+518)){{goto L662710;}}
}
B6626e1:L6626e1:{c.instructions+=2;NFSU2_TR(0x6626e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6626e5:{NFSU2_TR(0x6626e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6626fe;}}
}
B6626e7:L6626e7:{c.instructions+=4;NFSU2_TR(0x6626e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6626ea:{NFSU2_TR(0x6626ea);
__builtin_memmove((R+24),(R+8),4);
}
B6626ec:{NFSU2_TR(0x6626ec);
__builtin_memmove((R+4),(R+0),4);
}
B6626ee:{NFSU2_TR(0x6626ee);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6626f0:L6626f0:{c.instructions+=5;NFSU2_TR(0x6626f0);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6626f3:{NFSU2_TR(0x6626f3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6626f5:{NFSU2_TR(0x6626f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6626f8:{NFSU2_TR(0x6626f8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6626f9:{NFSU2_TR(0x6626f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6626f0u);}goto L6626f0;}}
}
B6626fb:L6626fb:{c.instructions+=1;NFSU2_TR(0x6626fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6626fe:L6626fe:{c.instructions+=7;NFSU2_TR(0x6626fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B662701:{NFSU2_TR(0x662701);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B662704:{NFSU2_TR(0x662704);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B662705:{NFSU2_TR(0x662705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662708:{NFSU2_TR(0x662708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66270b:{NFSU2_TR(0x66270b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B66270e:{NFSU2_TR(0x66270e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6626ddu);}goto L6626dd;}}
}
B662710:L662710:{c.instructions+=5;NFSU2_TR(0x662710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662713:{NFSU2_TR(0x662713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662716:{NFSU2_TR(0x662716);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B662719:{NFSU2_TR(0x662719);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66271c:{NFSU2_TR(0x66271c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6626cbu);}goto L6626cb;}}
}
B66271e:L66271e:{c.instructions+=1;NFSU2_TR(0x66271e);
{goto L662781;}
}
B662720:L662720:{c.instructions+=6;NFSU2_TR(0x662720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662724:{NFSU2_TR(0x662724);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662728:{NFSU2_TR(0x662728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66272b:{NFSU2_TR(0x66272b);
__builtin_memmove((R+0),(R+8),4);
}
B66272d:{NFSU2_TR(0x66272d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662730:{NFSU2_TR(0x662730);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662781;}}
}
B662732:L662732:{c.instructions+=2;NFSU2_TR(0x662732);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662734:{NFSU2_TR(0x662734);
if(r1(R+518)){{goto L662781;}}
}
B662736:L662736:{c.instructions+=3;NFSU2_TR(0x662736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66273a:{NFSU2_TR(0x66273a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66273e:{NFSU2_TR(0x66273e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662773;}}
}
B662740:L662740:{c.instructions+=2;NFSU2_TR(0x662740);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662742:{NFSU2_TR(0x662742);
if(r1(R+518)){{goto L662773;}}
}
B662744:L662744:{c.instructions+=2;NFSU2_TR(0x662744);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662748:{NFSU2_TR(0x662748);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662761;}}
}
B66274a:L66274a:{c.instructions+=4;NFSU2_TR(0x66274a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66274d:{NFSU2_TR(0x66274d);
__builtin_memmove((R+24),(R+8),4);
}
B66274f:{NFSU2_TR(0x66274f);
__builtin_memmove((R+4),(R+0),4);
}
B662751:{NFSU2_TR(0x662751);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B662753:L662753:{c.instructions+=5;NFSU2_TR(0x662753);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B662756:{NFSU2_TR(0x662756);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B662758:{NFSU2_TR(0x662758);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66275b:{NFSU2_TR(0x66275b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B66275c:{NFSU2_TR(0x66275c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662753u);}goto L662753;}}
}
B66275e:L66275e:{c.instructions+=1;NFSU2_TR(0x66275e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662761:L662761:{c.instructions+=7;NFSU2_TR(0x662761);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B662764:{NFSU2_TR(0x662764);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B662767:{NFSU2_TR(0x662767);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B662768:{NFSU2_TR(0x662768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66276b:{NFSU2_TR(0x66276b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66276e:{NFSU2_TR(0x66276e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B662771:{NFSU2_TR(0x662771);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662740u);}goto L662740;}}
}
B662773:L662773:{c.instructions+=5;NFSU2_TR(0x662773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662776:{NFSU2_TR(0x662776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662779:{NFSU2_TR(0x662779);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B66277c:{NFSU2_TR(0x66277c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66277f:{NFSU2_TR(0x66277f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662732u);}goto L662732;}}
}
B662781:L662781:{c.instructions+=1;NFSU2_TR(0x662781);
__builtin_memmove((R+8),(R+0),4);
}
B662783:L662783:{c.instructions+=9;NFSU2_TR(0x662783);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+8))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B662786:{NFSU2_TR(0x662786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662789:{NFSU2_TR(0x662789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66278a:{NFSU2_TR(0x66278a);
u8 U[48];
w4(U+40,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B66278d:{NFSU2_TR(0x66278d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66278e:{NFSU2_TR(0x66278e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B662790:{NFSU2_TR(0x662790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662791:{NFSU2_TR(0x662791);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B662792:{NFSU2_TR(0x662792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B662795:L662795:{c.instructions+=14;NFSU2_TR(0x662795);
__builtin_memmove((R+28),(R+28),4);
}
B662797:{NFSU2_TR(0x662797);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662798:{NFSU2_TR(0x662798);
__builtin_memmove((R+20),(R+16),4);
}
B66279a:{NFSU2_TR(0x66279a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B66279d:{NFSU2_TR(0x66279d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6627a0:{NFSU2_TR(0x6627a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6627a3:{NFSU2_TR(0x6627a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6627a5:{NFSU2_TR(0x6627a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6627a8:{NFSU2_TR(0x6627a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6627aa:{NFSU2_TR(0x6627aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6627ad:{NFSU2_TR(0x6627ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6627b0:{NFSU2_TR(0x6627b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6627b3:{NFSU2_TR(0x6627b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6627b6:{NFSU2_TR(0x6627b6);
if(r1(R+518)){{goto L6627c0;}}
}
B6627b8:L6627b8:{c.instructions+=3;NFSU2_TR(0x6627b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6627bb:{NFSU2_TR(0x6627bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6627be:{NFSU2_TR(0x6627be);
{goto L6627c2;}
}
B6627c0:L6627c0:{c.instructions+=1;NFSU2_TR(0x6627c0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6627c2:L6627c2:{c.instructions+=4;NFSU2_TR(0x6627c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6627c4:{NFSU2_TR(0x6627c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6627c5:{NFSU2_TR(0x6627c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6627c6:{NFSU2_TR(0x6627c6);
if(r1(R+518)){{goto L6627d0;}}
}
B6627c8:L6627c8:{c.instructions+=3;NFSU2_TR(0x6627c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6627cb:{NFSU2_TR(0x6627cb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6627ce:{NFSU2_TR(0x6627ce);
{goto L6627d6;}
}
B6627d0:L6627d0:{c.instructions+=2;NFSU2_TR(0x6627d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6627d3:{NFSU2_TR(0x6627d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6627d6:L6627d6:{c.instructions+=5;NFSU2_TR(0x6627d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6627d9:{NFSU2_TR(0x6627d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6627db:{NFSU2_TR(0x6627db);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6627dc:{NFSU2_TR(0x6627dc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6627df:{NFSU2_TR(0x6627df);
if(r1(R+518)){{goto L6627e6;}}
}
B6627e1:L6627e1:{c.instructions+=2;NFSU2_TR(0x6627e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6627e4:{NFSU2_TR(0x6627e4);
{goto L6627f3;}
}
B6627e6:L6627e6:{c.instructions+=4;NFSU2_TR(0x6627e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6627e9:{NFSU2_TR(0x6627e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6627eb:{NFSU2_TR(0x6627eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6627ee:{NFSU2_TR(0x6627ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6627f3;}}
}
B6627f0:L6627f0:{c.instructions+=1;NFSU2_TR(0x6627f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6627f3:L6627f3:{c.instructions+=2;NFSU2_TR(0x6627f3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6627f5:{NFSU2_TR(0x6627f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L662b87;}}
}
B6627fb:L6627fb:{c.instructions+=3;NFSU2_TR(0x6627fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6627fd:{NFSU2_TR(0x6627fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6627fe:{NFSU2_TR(0x6627fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6629f8;}}
}
B662804:L662804:{c.instructions+=2;NFSU2_TR(0x662804);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662807:{NFSU2_TR(0x662807);
if(r1(R+518)){{goto L6628a8;}}
}
B66280d:L66280d:{c.instructions+=2;NFSU2_TR(0x66280d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662810:{NFSU2_TR(0x662810);
if(r1(R+518)){{goto L6629f8;}}
}
B662816:L662816:{c.instructions+=2;NFSU2_TR(0x662816);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662819:{NFSU2_TR(0x662819);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662b86;}}
}
B66281f:L66281f:{c.instructions+=4;NFSU2_TR(0x66281f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B662821:{NFSU2_TR(0x662821);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662824:{NFSU2_TR(0x662824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662827:{NFSU2_TR(0x662827);
if(r1(R+518)){{goto L662832;}}
}
B662829:L662829:{c.instructions+=3;NFSU2_TR(0x662829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66282c:{NFSU2_TR(0x66282c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B66282f:{NFSU2_TR(0x66282f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662832:L662832:{c.instructions+=5;NFSU2_TR(0x662832);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662835:{NFSU2_TR(0x662835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662838:{NFSU2_TR(0x662838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66283b:{NFSU2_TR(0x66283b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66283e:{NFSU2_TR(0x66283e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662b86;}}
}
B662844:L662844:{c.instructions+=2;NFSU2_TR(0x662844);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662848:{NFSU2_TR(0x662848);
if(r1(R+518)){{goto L662b86;}}
}
B66284e:L66284e:{c.instructions+=4;NFSU2_TR(0x66284e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662852:{NFSU2_TR(0x662852);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662854:{NFSU2_TR(0x662854);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662857:{NFSU2_TR(0x662857);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662898;}}
}
B662859:L662859:{c.instructions+=2;NFSU2_TR(0x662859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66285c:{NFSU2_TR(0x66285c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66285f:L66285f:{c.instructions+=2;NFSU2_TR(0x66285f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662863:{NFSU2_TR(0x662863);
if(r1(R+518)){{goto L662898;}}
}
B662865:L662865:{c.instructions+=2;NFSU2_TR(0x662865);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662869:{NFSU2_TR(0x662869);
if(r1(R+518)){{goto L662870;}}
}
B66286b:L66286b:{c.instructions+=2;NFSU2_TR(0x66286b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66286d:{NFSU2_TR(0x66286d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662870:L662870:{c.instructions+=12;NFSU2_TR(0x662870);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662872:{NFSU2_TR(0x662872);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662875:{NFSU2_TR(0x662875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662876:{NFSU2_TR(0x662876);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B662879:{NFSU2_TR(0x662879);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66287c:{NFSU2_TR(0x66287c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66287f:{NFSU2_TR(0x66287f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662880:{NFSU2_TR(0x662880);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B662883:{NFSU2_TR(0x662883);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662884:{NFSU2_TR(0x662884);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662887:{NFSU2_TR(0x662887);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662888:{NFSU2_TR(0x662888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66288dull));
TAIL_STATIC(0x65f297u,65f);
}
B66288d:L66288d:{c.instructions+=4;NFSU2_TR(0x66288d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662890:{NFSU2_TR(0x662890);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B662893:{NFSU2_TR(0x662893);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B662896:{NFSU2_TR(0x662896);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66285fu);}goto L66285f;}}
}
B662898:L662898:{c.instructions+=4;NFSU2_TR(0x662898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66289b:{NFSU2_TR(0x66289b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66289e:{NFSU2_TR(0x66289e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6628a1:{NFSU2_TR(0x6628a1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662844u);}goto L662844;}}
}
B6628a3:L6628a3:{c.instructions+=1;NFSU2_TR(0x6628a3);
{goto L662b86;}
}
B6628a8:L6628a8:{c.instructions+=7;NFSU2_TR(0x6628a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6628ab:{NFSU2_TR(0x6628ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6628ae:{NFSU2_TR(0x6628ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6628b1:{NFSU2_TR(0x6628b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6628b3:{NFSU2_TR(0x6628b3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6628b4:{NFSU2_TR(0x6628b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6628b7:{NFSU2_TR(0x6628b7);
if(r1(R+518)){{goto L6629a4;}}
}
B6628bd:L6628bd:{c.instructions+=2;NFSU2_TR(0x6628bd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6628be:{NFSU2_TR(0x6628be);
if(r1(R+518)){{goto L66294a;}}
}
B6628c4:L6628c4:{c.instructions+=2;NFSU2_TR(0x6628c4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6628c5:{NFSU2_TR(0x6628c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662b86;}}
}
B6628cb:L6628cb:{c.instructions+=8;NFSU2_TR(0x6628cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6628ce:{NFSU2_TR(0x6628ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6628d2:{NFSU2_TR(0x6628d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6628d6:{NFSU2_TR(0x6628d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6628d9:{NFSU2_TR(0x6628d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6628dc:{NFSU2_TR(0x6628dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6628df:{NFSU2_TR(0x6628df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6628e2:{NFSU2_TR(0x6628e2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66293f;}}
}
B6628e4:L6628e4:{c.instructions+=2;NFSU2_TR(0x6628e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6628e6:{NFSU2_TR(0x6628e6);
if(r1(R+518)){{goto L66293f;}}
}
B6628e8:L6628e8:{c.instructions+=3;NFSU2_TR(0x6628e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6628ec:{NFSU2_TR(0x6628ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6628f0:{NFSU2_TR(0x6628f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662930;}}
}
B6628f2:L6628f2:{c.instructions+=2;NFSU2_TR(0x6628f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6628f5:{NFSU2_TR(0x6628f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6628f8:L6628f8:{c.instructions+=3;NFSU2_TR(0x6628f8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6628fa:{NFSU2_TR(0x6628fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6628fc:{NFSU2_TR(0x6628fc);
if(r1(R+518)){{goto L662930;}}
}
B6628fe:L6628fe:{c.instructions+=2;NFSU2_TR(0x6628fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662901:{NFSU2_TR(0x662901);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66291c;}}
}
B662903:L662903:{c.instructions+=1;NFSU2_TR(0x662903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662906:L662906:{c.instructions+=2;NFSU2_TR(0x662906);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662908:{NFSU2_TR(0x662908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66290dull));
TAIL_STATIC(0x75dd28u,75d);
}
B66290d:L66290d:{c.instructions+=6;NFSU2_TR(0x66290d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662910:{NFSU2_TR(0x662910);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B662913:{NFSU2_TR(0x662913);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B662914:{NFSU2_TR(0x662914);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B662917:{NFSU2_TR(0x662917);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B66291a:{NFSU2_TR(0x66291a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662906u);}goto L662906;}}
}
B66291c:L66291c:{c.instructions+=7;NFSU2_TR(0x66291c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662920:{NFSU2_TR(0x662920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662924:{NFSU2_TR(0x662924);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B662925:{NFSU2_TR(0x662925);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662928:{NFSU2_TR(0x662928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66292b:{NFSU2_TR(0x66292b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66292e:{NFSU2_TR(0x66292e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6628f8u);}goto L6628f8;}}
}
B662930:L662930:{c.instructions+=5;NFSU2_TR(0x662930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662934:{NFSU2_TR(0x662934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662937:{NFSU2_TR(0x662937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66293a:{NFSU2_TR(0x66293a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66293d:{NFSU2_TR(0x66293d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6628e4u);}goto L6628e4;}}
}
B66293f:L66293f:{c.instructions+=3;NFSU2_TR(0x66293f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662942:{NFSU2_TR(0x662942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662945:{NFSU2_TR(0x662945);
{goto L662b86;}
}
B66294a:L66294a:{c.instructions+=5;NFSU2_TR(0x66294a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66294e:{NFSU2_TR(0x66294e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662952:{NFSU2_TR(0x662952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662955:{NFSU2_TR(0x662955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662958:{NFSU2_TR(0x662958);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66299c;}}
}
B66295a:L66295a:{c.instructions+=3;NFSU2_TR(0x66295a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66295c:{NFSU2_TR(0x66295c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66295e:{NFSU2_TR(0x66295e);
if(r1(R+518)){{goto L66299c;}}
}
B662960:L662960:{c.instructions+=2;NFSU2_TR(0x662960);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662963:{NFSU2_TR(0x662963);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662991;}}
}
B662965:L662965:{c.instructions+=2;NFSU2_TR(0x662965);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662967:{NFSU2_TR(0x662967);
if(r1(R+518)){{goto L662991;}}
}
B662969:L662969:{c.instructions+=3;NFSU2_TR(0x662969);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66296b:{NFSU2_TR(0x66296b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66296e:{NFSU2_TR(0x66296e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662987;}}
}
B662970:L662970:{c.instructions+=2;NFSU2_TR(0x662970);
__builtin_memmove((R+4),(R+28),4);
}
B662972:{NFSU2_TR(0x662972);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B662975:L662975:{c.instructions+=7;NFSU2_TR(0x662975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662978:{NFSU2_TR(0x662978);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B66297b:{NFSU2_TR(0x66297b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66297e:{NFSU2_TR(0x66297e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66297f:{NFSU2_TR(0x66297f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B662982:{NFSU2_TR(0x662982);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662985:{NFSU2_TR(0x662985);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662975u);}goto L662975;}}
}
B662987:L662987:{c.instructions+=5;NFSU2_TR(0x662987);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B66298a:{NFSU2_TR(0x66298a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B66298b:{NFSU2_TR(0x66298b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66298c:{NFSU2_TR(0x66298c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66298f:{NFSU2_TR(0x66298f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662965u);}goto L662965;}}
}
B662991:L662991:{c.instructions+=4;NFSU2_TR(0x662991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662994:{NFSU2_TR(0x662994);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662997:{NFSU2_TR(0x662997);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66299a:{NFSU2_TR(0x66299a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66295au);}goto L66295a;}}
}
B66299c:L66299c:{c.instructions+=2;NFSU2_TR(0x66299c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66299f:{NFSU2_TR(0x66299f);
{goto L662b86;}
}
B6629a4:L6629a4:{c.instructions+=5;NFSU2_TR(0x6629a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6629a8:{NFSU2_TR(0x6629a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6629ac:{NFSU2_TR(0x6629ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6629af:{NFSU2_TR(0x6629af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6629b2:{NFSU2_TR(0x6629b2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66299cu);}goto L66299c;}}
}
B6629b4:L6629b4:{c.instructions+=3;NFSU2_TR(0x6629b4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6629b6:{NFSU2_TR(0x6629b6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6629b8:{NFSU2_TR(0x6629b8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66299cu);}goto L66299c;}}
}
B6629ba:L6629ba:{c.instructions+=2;NFSU2_TR(0x6629ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6629bd:{NFSU2_TR(0x6629bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6629eb;}}
}
B6629bf:L6629bf:{c.instructions+=2;NFSU2_TR(0x6629bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6629c1:{NFSU2_TR(0x6629c1);
if(r1(R+518)){{goto L6629eb;}}
}
B6629c3:L6629c3:{c.instructions+=3;NFSU2_TR(0x6629c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6629c5:{NFSU2_TR(0x6629c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6629c8:{NFSU2_TR(0x6629c8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6629e1;}}
}
B6629ca:L6629ca:{c.instructions+=2;NFSU2_TR(0x6629ca);
__builtin_memmove((R+4),(R+28),4);
}
B6629cc:{NFSU2_TR(0x6629cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6629cf:L6629cf:{c.instructions+=7;NFSU2_TR(0x6629cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6629d2:{NFSU2_TR(0x6629d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6629d5:{NFSU2_TR(0x6629d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6629d8:{NFSU2_TR(0x6629d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6629d9:{NFSU2_TR(0x6629d9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6629dc:{NFSU2_TR(0x6629dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6629df:{NFSU2_TR(0x6629df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6629cfu);}goto L6629cf;}}
}
B6629e1:L6629e1:{c.instructions+=5;NFSU2_TR(0x6629e1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6629e4:{NFSU2_TR(0x6629e4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6629e5:{NFSU2_TR(0x6629e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6629e6:{NFSU2_TR(0x6629e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6629e9:{NFSU2_TR(0x6629e9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6629bfu);}goto L6629bf;}}
}
B6629eb:L6629eb:{c.instructions+=4;NFSU2_TR(0x6629eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6629ee:{NFSU2_TR(0x6629ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6629f1:{NFSU2_TR(0x6629f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6629f4:{NFSU2_TR(0x6629f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6629b4u);}goto L6629b4;}}
}
B6629f6:L6629f6:{c.instructions+=1;NFSU2_TR(0x6629f6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66299cu);}goto L66299c;}
}
B6629f8:L6629f8:{c.instructions+=9;NFSU2_TR(0x6629f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6629fb:{NFSU2_TR(0x6629fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6629fe:{NFSU2_TR(0x6629fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B662a00:{NFSU2_TR(0x662a00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662a02:{NFSU2_TR(0x662a02);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662a05:{NFSU2_TR(0x662a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662a08:{NFSU2_TR(0x662a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662a0b:{NFSU2_TR(0x662a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662a0e:{NFSU2_TR(0x662a0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662a1b;}}
}
B662a10:L662a10:{c.instructions+=5;NFSU2_TR(0x662a10);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662a12:{NFSU2_TR(0x662a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662a13:{NFSU2_TR(0x662a13);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B662a15:{NFSU2_TR(0x662a15);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B662a18:{NFSU2_TR(0x662a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662a1b:L662a1b:{c.instructions+=2;NFSU2_TR(0x662a1b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B662a1c:{NFSU2_TR(0x662a1c);
if(r1(R+518)){{goto L662b1e;}}
}
B662a22:L662a22:{c.instructions+=2;NFSU2_TR(0x662a22);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B662a23:{NFSU2_TR(0x662a23);
if(r1(R+518)){{goto L662aaf;}}
}
B662a29:L662a29:{c.instructions+=2;NFSU2_TR(0x662a29);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B662a2a:{NFSU2_TR(0x662a2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662b86;}}
}
B662a30:L662a30:{c.instructions+=6;NFSU2_TR(0x662a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662a34:{NFSU2_TR(0x662a34);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662a38:{NFSU2_TR(0x662a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662a3b:{NFSU2_TR(0x662a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662a3e:{NFSU2_TR(0x662a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662a41:{NFSU2_TR(0x662a41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662b83;}}
}
B662a47:L662a47:{c.instructions+=2;NFSU2_TR(0x662a47);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662a49:{NFSU2_TR(0x662a49);
if(r1(R+518)){{goto L662b83;}}
}
B662a4f:L662a4f:{c.instructions+=3;NFSU2_TR(0x662a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662a53:{NFSU2_TR(0x662a53);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662a57:{NFSU2_TR(0x662a57);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662a99;}}
}
B662a59:L662a59:{c.instructions+=2;NFSU2_TR(0x662a59);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662a5b:{NFSU2_TR(0x662a5b);
if(r1(R+518)){{goto L662a99;}}
}
B662a5d:L662a5d:{c.instructions+=2;NFSU2_TR(0x662a5d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662a5f:{NFSU2_TR(0x662a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662a64ull));
TAIL_STATIC(0x75dd28u,75d);
}
B662a64:L662a64:{c.instructions+=3;NFSU2_TR(0x662a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B662a66:{NFSU2_TR(0x662a66);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662a69:{NFSU2_TR(0x662a69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662a6eull));
TAIL_STATIC(0x75dd28u,75d);
}
B662a6e:L662a6e:{c.instructions+=3;NFSU2_TR(0x662a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662a71:{NFSU2_TR(0x662a71);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662a74:{NFSU2_TR(0x662a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662a79ull));
TAIL_STATIC(0x75dd28u,75d);
}
B662a79:L662a79:{c.instructions+=3;NFSU2_TR(0x662a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662a7c:{NFSU2_TR(0x662a7c);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662a7f:{NFSU2_TR(0x662a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662a84ull));
TAIL_STATIC(0x75dd28u,75d);
}
B662a84:L662a84:{c.instructions+=8;NFSU2_TR(0x662a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662a87:{NFSU2_TR(0x662a87);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B662a8a:{NFSU2_TR(0x662a8a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B662a8d:{NFSU2_TR(0x662a8d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B662a8e:{NFSU2_TR(0x662a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662a91:{NFSU2_TR(0x662a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662a94:{NFSU2_TR(0x662a94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662a97:{NFSU2_TR(0x662a97);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662a59u);}goto L662a59;}}
}
B662a99:L662a99:{c.instructions+=6;NFSU2_TR(0x662a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662a9c:{NFSU2_TR(0x662a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662a9f:{NFSU2_TR(0x662a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B662aa2:{NFSU2_TR(0x662aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662aa5:{NFSU2_TR(0x662aa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662aa8:{NFSU2_TR(0x662aa8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662a47u);}goto L662a47;}}
}
B662aaa:L662aaa:{c.instructions+=1;NFSU2_TR(0x662aaa);
{goto L662b83;}
}
B662aaf:L662aaf:{c.instructions+=6;NFSU2_TR(0x662aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662ab3:{NFSU2_TR(0x662ab3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662ab7:{NFSU2_TR(0x662ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662aba:{NFSU2_TR(0x662aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662abd:{NFSU2_TR(0x662abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662ac0:{NFSU2_TR(0x662ac0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662b83;}}
}
B662ac6:L662ac6:{c.instructions+=2;NFSU2_TR(0x662ac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662ac8:{NFSU2_TR(0x662ac8);
if(r1(R+518)){{goto L662b83;}}
}
B662ace:L662ace:{c.instructions+=3;NFSU2_TR(0x662ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662ad2:{NFSU2_TR(0x662ad2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662ad6:{NFSU2_TR(0x662ad6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662b0e;}}
}
B662ad8:L662ad8:{c.instructions+=2;NFSU2_TR(0x662ad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662ada:{NFSU2_TR(0x662ada);
if(r1(R+518)){{goto L662b0e;}}
}
B662adc:L662adc:{c.instructions+=2;NFSU2_TR(0x662adc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662ade:{NFSU2_TR(0x662ade);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662afc;}}
}
B662ae0:L662ae0:{c.instructions+=4;NFSU2_TR(0x662ae0);
__builtin_memmove((R+8),(R+4),4);
}
B662ae2:{NFSU2_TR(0x662ae2);
__builtin_memmove((R+0),(R+28),4);
}
B662ae4:{NFSU2_TR(0x662ae4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B662ae6:{NFSU2_TR(0x662ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662ae9:L662ae9:{c.instructions+=5;NFSU2_TR(0x662ae9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B662aec:{NFSU2_TR(0x662aec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B662aee:{NFSU2_TR(0x662aee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B662af1:{NFSU2_TR(0x662af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662af4:{NFSU2_TR(0x662af4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662ae9u);}goto L662ae9;}}
}
B662af6:L662af6:{c.instructions+=2;NFSU2_TR(0x662af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662af9:{NFSU2_TR(0x662af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662afc:L662afc:{c.instructions+=7;NFSU2_TR(0x662afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662aff:{NFSU2_TR(0x662aff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B662b02:{NFSU2_TR(0x662b02);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B662b05:{NFSU2_TR(0x662b05);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B662b06:{NFSU2_TR(0x662b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662b09:{NFSU2_TR(0x662b09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B662b0c:{NFSU2_TR(0x662b0c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662ad8u);}goto L662ad8;}}
}
B662b0e:L662b0e:{c.instructions+=5;NFSU2_TR(0x662b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662b11:{NFSU2_TR(0x662b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662b14:{NFSU2_TR(0x662b14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B662b17:{NFSU2_TR(0x662b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B662b1a:{NFSU2_TR(0x662b1a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662ac6u);}goto L662ac6;}}
}
B662b1c:L662b1c:{c.instructions+=1;NFSU2_TR(0x662b1c);
{goto L662b83;}
}
B662b1e:L662b1e:{c.instructions+=6;NFSU2_TR(0x662b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662b22:{NFSU2_TR(0x662b22);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662b26:{NFSU2_TR(0x662b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662b29:{NFSU2_TR(0x662b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662b2c:{NFSU2_TR(0x662b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662b2f:{NFSU2_TR(0x662b2f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662b83;}}
}
B662b31:L662b31:{c.instructions+=2;NFSU2_TR(0x662b31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662b33:{NFSU2_TR(0x662b33);
if(r1(R+518)){{goto L662b83;}}
}
B662b35:L662b35:{c.instructions+=3;NFSU2_TR(0x662b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662b39:{NFSU2_TR(0x662b39);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662b3d:{NFSU2_TR(0x662b3d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662b75;}}
}
B662b3f:L662b3f:{c.instructions+=2;NFSU2_TR(0x662b3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662b41:{NFSU2_TR(0x662b41);
if(r1(R+518)){{goto L662b75;}}
}
B662b43:L662b43:{c.instructions+=2;NFSU2_TR(0x662b43);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662b45:{NFSU2_TR(0x662b45);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662b63;}}
}
B662b47:L662b47:{c.instructions+=4;NFSU2_TR(0x662b47);
__builtin_memmove((R+8),(R+4),4);
}
B662b49:{NFSU2_TR(0x662b49);
__builtin_memmove((R+0),(R+28),4);
}
B662b4b:{NFSU2_TR(0x662b4b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B662b4d:{NFSU2_TR(0x662b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662b50:L662b50:{c.instructions+=5;NFSU2_TR(0x662b50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B662b53:{NFSU2_TR(0x662b53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B662b55:{NFSU2_TR(0x662b55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B662b58:{NFSU2_TR(0x662b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662b5b:{NFSU2_TR(0x662b5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662b50u);}goto L662b50;}}
}
B662b5d:L662b5d:{c.instructions+=2;NFSU2_TR(0x662b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662b60:{NFSU2_TR(0x662b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662b63:L662b63:{c.instructions+=7;NFSU2_TR(0x662b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662b66:{NFSU2_TR(0x662b66);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B662b69:{NFSU2_TR(0x662b69);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B662b6c:{NFSU2_TR(0x662b6c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B662b6d:{NFSU2_TR(0x662b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662b70:{NFSU2_TR(0x662b70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B662b73:{NFSU2_TR(0x662b73);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662b3fu);}goto L662b3f;}}
}
B662b75:L662b75:{c.instructions+=5;NFSU2_TR(0x662b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662b78:{NFSU2_TR(0x662b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662b7b:{NFSU2_TR(0x662b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B662b7e:{NFSU2_TR(0x662b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B662b81:{NFSU2_TR(0x662b81);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662b31u);}goto L662b31;}}
}
B662b83:L662b83:{c.instructions+=1;NFSU2_TR(0x662b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662b86:L662b86:{c.instructions+=1;NFSU2_TR(0x662b86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662b87:L662b87:{c.instructions+=9;NFSU2_TR(0x662b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662b8a:{NFSU2_TR(0x662b8a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B662b8d:{NFSU2_TR(0x662b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662b90:{NFSU2_TR(0x662b90);
u8 U[48];
w4(U+40,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B662b93:{NFSU2_TR(0x662b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B662b94:{NFSU2_TR(0x662b94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B662b96:{NFSU2_TR(0x662b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B662b97:{NFSU2_TR(0x662b97);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B662b98:{NFSU2_TR(0x662b98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B662b9b:L662b9b:{c.instructions+=17;NFSU2_TR(0x662b9b);
__builtin_memmove((R+28),(R+28),4);
}
B662b9d:{NFSU2_TR(0x662b9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662b9e:{NFSU2_TR(0x662b9e);
__builtin_memmove((R+20),(R+16),4);
}
B662ba0:{NFSU2_TR(0x662ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B662ba3:{NFSU2_TR(0x662ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662ba6:{NFSU2_TR(0x662ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662ba9:{NFSU2_TR(0x662ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B662bab:{NFSU2_TR(0x662bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662bae:{NFSU2_TR(0x662bae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662baf:{NFSU2_TR(0x662baf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662bb0:{NFSU2_TR(0x662bb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662bb1:{NFSU2_TR(0x662bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662bb4:{NFSU2_TR(0x662bb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662bb6:{NFSU2_TR(0x662bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662bb9:{NFSU2_TR(0x662bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662bbc:{NFSU2_TR(0x662bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662bbf:{NFSU2_TR(0x662bbf);
if(r1(R+518)){{goto L662bc9;}}
}
B662bc1:L662bc1:{c.instructions+=3;NFSU2_TR(0x662bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662bc4:{NFSU2_TR(0x662bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662bc7:{NFSU2_TR(0x662bc7);
{goto L662bcb;}
}
B662bc9:L662bc9:{c.instructions+=1;NFSU2_TR(0x662bc9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B662bcb:L662bcb:{c.instructions+=2;NFSU2_TR(0x662bcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662bcd:{NFSU2_TR(0x662bcd);
if(r1(R+518)){{goto L662bd7;}}
}
B662bcf:L662bcf:{c.instructions+=3;NFSU2_TR(0x662bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B662bd2:{NFSU2_TR(0x662bd2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(r2(U+0)));
}
B662bd5:{NFSU2_TR(0x662bd5);
{goto L662bdd;}
}
B662bd7:L662bd7:{c.instructions+=2;NFSU2_TR(0x662bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662bda:{NFSU2_TR(0x662bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662bdd:L662bdd:{c.instructions+=3;NFSU2_TR(0x662bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662be0:{NFSU2_TR(0x662be0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662be3:{NFSU2_TR(0x662be3);
if(r1(R+518)){{goto L662bea;}}
}
B662be5:L662be5:{c.instructions+=2;NFSU2_TR(0x662be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662be8:{NFSU2_TR(0x662be8);
{goto L662bfb;}
}
B662bea:L662bea:{c.instructions+=4;NFSU2_TR(0x662bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662bed:{NFSU2_TR(0x662bed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662bef:{NFSU2_TR(0x662bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662bf2:{NFSU2_TR(0x662bf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662bfb;}}
}
B662bf4:L662bf4:{c.instructions+=1;NFSU2_TR(0x662bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B662bfb:L662bfb:{c.instructions+=2;NFSU2_TR(0x662bfb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B662bfd:{NFSU2_TR(0x662bfd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L662eba;}}
}
B662c03:L662c03:{c.instructions+=2;NFSU2_TR(0x662c03);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662c06:{NFSU2_TR(0x662c06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L662d8a;}}
}
B662c0c:L662c0c:{c.instructions+=2;NFSU2_TR(0x662c0c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662c0f:{NFSU2_TR(0x662c0f);
if(r1(R+518)){{goto L662cb1;}}
}
B662c15:L662c15:{c.instructions+=2;NFSU2_TR(0x662c15);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662c18:{NFSU2_TR(0x662c18);
if(r1(R+518)){{goto L662d8a;}}
}
B662c1e:L662c1e:{c.instructions+=2;NFSU2_TR(0x662c1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662c21:{NFSU2_TR(0x662c21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662eba;}}
}
B662c27:L662c27:{c.instructions+=4;NFSU2_TR(0x662c27);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B662c29:{NFSU2_TR(0x662c29);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662c2b:{NFSU2_TR(0x662c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662c2e:{NFSU2_TR(0x662c2e);
if(r1(R+518)){{goto L662c38;}}
}
B662c30:L662c30:{c.instructions+=3;NFSU2_TR(0x662c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662c33:{NFSU2_TR(0x662c33);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B662c35:{NFSU2_TR(0x662c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662c38:L662c38:{c.instructions+=5;NFSU2_TR(0x662c38);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662c3b:{NFSU2_TR(0x662c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662c3e:{NFSU2_TR(0x662c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B662c41:{NFSU2_TR(0x662c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662c44:{NFSU2_TR(0x662c44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662eba;}}
}
B662c4a:L662c4a:{c.instructions+=2;NFSU2_TR(0x662c4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662c4e:{NFSU2_TR(0x662c4e);
if(r1(R+518)){{goto L662eba;}}
}
B662c54:L662c54:{c.instructions+=4;NFSU2_TR(0x662c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662c58:{NFSU2_TR(0x662c58);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662c5a:{NFSU2_TR(0x662c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662c5d:{NFSU2_TR(0x662c5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662ca1;}}
}
B662c5f:L662c5f:{c.instructions+=2;NFSU2_TR(0x662c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662c62:{NFSU2_TR(0x662c62);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B662c65:L662c65:{c.instructions+=2;NFSU2_TR(0x662c65);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662c69:{NFSU2_TR(0x662c69);
if(r1(R+518)){{goto L662ca1;}}
}
B662c6b:L662c6b:{c.instructions+=2;NFSU2_TR(0x662c6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662c6f:{NFSU2_TR(0x662c6f);
if(r1(R+518)){{goto L662c76;}}
}
B662c71:L662c71:{c.instructions+=2;NFSU2_TR(0x662c71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B662c73:{NFSU2_TR(0x662c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662c76:L662c76:{c.instructions+=12;NFSU2_TR(0x662c76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662c78:{NFSU2_TR(0x662c78);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662c7b:{NFSU2_TR(0x662c7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662c7c:{NFSU2_TR(0x662c7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B662c7f:{NFSU2_TR(0x662c7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B662c82:{NFSU2_TR(0x662c82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B662c85:{NFSU2_TR(0x662c85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662c86:{NFSU2_TR(0x662c86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B662c89:{NFSU2_TR(0x662c89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662c8a:{NFSU2_TR(0x662c8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662c8d:{NFSU2_TR(0x662c8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662c8e:{NFSU2_TR(0x662c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662c93ull));
TAIL_STATIC(0x65f709u,65f);
}
B662c93:L662c93:{c.instructions+=5;NFSU2_TR(0x662c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662c96:{NFSU2_TR(0x662c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662c99:{NFSU2_TR(0x662c99);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B662c9c:{NFSU2_TR(0x662c9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B662c9f:{NFSU2_TR(0x662c9f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662c65u);}goto L662c65;}}
}
B662ca1:L662ca1:{c.instructions+=4;NFSU2_TR(0x662ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662ca4:{NFSU2_TR(0x662ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662ca7:{NFSU2_TR(0x662ca7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662caa:{NFSU2_TR(0x662caa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662c4au);}goto L662c4a;}}
}
B662cac:L662cac:{c.instructions+=1;NFSU2_TR(0x662cac);
{goto L662eba;}
}
B662cb1:L662cb1:{c.instructions+=5;NFSU2_TR(0x662cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662cb4:{NFSU2_TR(0x662cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B662cb6:{NFSU2_TR(0x662cb6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B662cb7:{NFSU2_TR(0x662cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662cba:{NFSU2_TR(0x662cba);
if(r1(R+518)){{goto L662d55;}}
}
B662cc0:L662cc0:{c.instructions+=2;NFSU2_TR(0x662cc0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B662cc1:{NFSU2_TR(0x662cc1);
if(r1(R+518)){{goto L662d1b;}}
}
B662cc3:L662cc3:{c.instructions+=2;NFSU2_TR(0x662cc3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B662cc4:{NFSU2_TR(0x662cc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662eba;}}
}
B662cca:L662cca:{c.instructions+=7;NFSU2_TR(0x662cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662ccd:{NFSU2_TR(0x662ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662cd1:{NFSU2_TR(0x662cd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662cd5:{NFSU2_TR(0x662cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662cd8:{NFSU2_TR(0x662cd8);
__builtin_memmove((R+12),(R+8),4);
}
B662cda:{NFSU2_TR(0x662cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662cdd:{NFSU2_TR(0x662cdd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662d14;}}
}
B662cdf:L662cdf:{c.instructions+=3;NFSU2_TR(0x662cdf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B662ce1:{NFSU2_TR(0x662ce1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662ce3:{NFSU2_TR(0x662ce3);
if(r1(R+518)){{goto L662d14;}}
}
B662ce5:L662ce5:{c.instructions+=2;NFSU2_TR(0x662ce5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662ce8:{NFSU2_TR(0x662ce8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662d05;}}
}
B662cea:L662cea:{c.instructions+=2;NFSU2_TR(0x662cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662cec:{NFSU2_TR(0x662cec);
if(r1(R+518)){{goto L662d05;}}
}
B662cee:L662cee:{c.instructions+=3;NFSU2_TR(0x662cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662cf1:{NFSU2_TR(0x662cf1);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662cf4:{NFSU2_TR(0x662cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662cf9ull));
TAIL_STATIC(0x75dd28u,75d);
}
B662cf9:L662cf9:{c.instructions+=6;NFSU2_TR(0x662cf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B662cfb:{NFSU2_TR(0x662cfb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B662cfe:{NFSU2_TR(0x662cfe);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B662cff:{NFSU2_TR(0x662cff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B662d00:{NFSU2_TR(0x662d00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B662d03:{NFSU2_TR(0x662d03);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662ceau);}goto L662cea;}}
}
B662d05:L662d05:{c.instructions+=5;NFSU2_TR(0x662d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662d09:{NFSU2_TR(0x662d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662d0c:{NFSU2_TR(0x662d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662d0f:{NFSU2_TR(0x662d0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662d12:{NFSU2_TR(0x662d12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662cdfu);}goto L662cdf;}}
}
B662d14:L662d14:{c.instructions+=2;NFSU2_TR(0x662d14);
__builtin_memmove((R+8),(R+12),4);
}
B662d16:{NFSU2_TR(0x662d16);
{goto L662eba;}
}
B662d1b:L662d1b:{c.instructions+=5;NFSU2_TR(0x662d1b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B662d1d:{NFSU2_TR(0x662d1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662d20:{NFSU2_TR(0x662d20);
__builtin_memmove((R+4),(R+8),4);
}
B662d22:{NFSU2_TR(0x662d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662d25:{NFSU2_TR(0x662d25);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662d4e;}}
}
B662d27:L662d27:{c.instructions+=2;NFSU2_TR(0x662d27);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662d29:{NFSU2_TR(0x662d29);
if(r1(R+518)){{goto L662d4e;}}
}
B662d2b:L662d2b:{c.instructions+=3;NFSU2_TR(0x662d2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662d2d:{NFSU2_TR(0x662d2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662d30:{NFSU2_TR(0x662d30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662d48;}}
}
B662d32:L662d32:{c.instructions+=2;NFSU2_TR(0x662d32);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662d34:{NFSU2_TR(0x662d34);
if(r1(R+518)){{goto L662d48;}}
}
B662d36:L662d36:{c.instructions+=8;NFSU2_TR(0x662d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662d39:{NFSU2_TR(0x662d39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B662d3c:{NFSU2_TR(0x662d3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B662d3e:{NFSU2_TR(0x662d3e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B662d41:{NFSU2_TR(0x662d41);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B662d42:{NFSU2_TR(0x662d42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B662d43:{NFSU2_TR(0x662d43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662d46:{NFSU2_TR(0x662d46);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662d32u);}goto L662d32;}}
}
B662d48:L662d48:{c.instructions+=3;NFSU2_TR(0x662d48);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B662d49:{NFSU2_TR(0x662d49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B662d4c:{NFSU2_TR(0x662d4c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662d27u);}goto L662d27;}}
}
B662d4e:L662d4e:{c.instructions+=2;NFSU2_TR(0x662d4e);
__builtin_memmove((R+8),(R+4),4);
}
B662d50:{NFSU2_TR(0x662d50);
{goto L662eba;}
}
B662d55:L662d55:{c.instructions+=5;NFSU2_TR(0x662d55);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B662d57:{NFSU2_TR(0x662d57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662d5a:{NFSU2_TR(0x662d5a);
__builtin_memmove((R+4),(R+8),4);
}
B662d5c:{NFSU2_TR(0x662d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662d5f:{NFSU2_TR(0x662d5f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662d4eu);}goto L662d4e;}}
}
B662d61:L662d61:{c.instructions+=2;NFSU2_TR(0x662d61);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662d63:{NFSU2_TR(0x662d63);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662d4eu);}goto L662d4e;}}
}
B662d65:L662d65:{c.instructions+=3;NFSU2_TR(0x662d65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662d67:{NFSU2_TR(0x662d67);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662d6a:{NFSU2_TR(0x662d6a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662d82;}}
}
B662d6c:L662d6c:{c.instructions+=2;NFSU2_TR(0x662d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662d6e:{NFSU2_TR(0x662d6e);
if(r1(R+518)){{goto L662d82;}}
}
B662d70:L662d70:{c.instructions+=8;NFSU2_TR(0x662d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662d73:{NFSU2_TR(0x662d73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B662d76:{NFSU2_TR(0x662d76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B662d78:{NFSU2_TR(0x662d78);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B662d7b:{NFSU2_TR(0x662d7b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B662d7c:{NFSU2_TR(0x662d7c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B662d7d:{NFSU2_TR(0x662d7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662d80:{NFSU2_TR(0x662d80);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662d6cu);}goto L662d6c;}}
}
B662d82:L662d82:{c.instructions+=3;NFSU2_TR(0x662d82);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B662d83:{NFSU2_TR(0x662d83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B662d86:{NFSU2_TR(0x662d86);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662d61u);}goto L662d61;}}
}
B662d88:L662d88:{c.instructions+=1;NFSU2_TR(0x662d88);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662d4eu);}goto L662d4e;}
}
B662d8a:L662d8a:{c.instructions+=7;NFSU2_TR(0x662d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B662d8c:{NFSU2_TR(0x662d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662d8f:{NFSU2_TR(0x662d8f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B662d91:{NFSU2_TR(0x662d91);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662d94:{NFSU2_TR(0x662d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662d97:{NFSU2_TR(0x662d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662d9a:{NFSU2_TR(0x662d9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662da7;}}
}
B662d9c:L662d9c:{c.instructions+=5;NFSU2_TR(0x662d9c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662d9e:{NFSU2_TR(0x662d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662d9f:{NFSU2_TR(0x662d9f);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B662da1:{NFSU2_TR(0x662da1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B662da4:{NFSU2_TR(0x662da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662da7:L662da7:{c.instructions+=2;NFSU2_TR(0x662da7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B662da8:{NFSU2_TR(0x662da8);
if(r1(R+518)){{goto L662e7c;}}
}
B662dae:L662dae:{c.instructions+=2;NFSU2_TR(0x662dae);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B662daf:{NFSU2_TR(0x662daf);
if(r1(R+518)){{goto L662e3c;}}
}
B662db5:L662db5:{c.instructions+=2;NFSU2_TR(0x662db5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B662db6:{NFSU2_TR(0x662db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662eba;}}
}
B662dbc:L662dbc:{c.instructions+=8;NFSU2_TR(0x662dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662dbf:{NFSU2_TR(0x662dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662dc2:{NFSU2_TR(0x662dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662dc5:{NFSU2_TR(0x662dc5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662dc7:{NFSU2_TR(0x662dc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662dca:{NFSU2_TR(0x662dca);
__builtin_memmove((R+28),(R+8),4);
}
B662dcc:{NFSU2_TR(0x662dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662dcf:{NFSU2_TR(0x662dcf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662e38;}}
}
B662dd1:L662dd1:{c.instructions+=1;NFSU2_TR(0x662dd1);
{goto L662dd5;}
}
B662dd3:L662dd3:{c.instructions+=1;NFSU2_TR(0x662dd3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B662dd5:L662dd5:{c.instructions+=2;NFSU2_TR(0x662dd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662dd8:{NFSU2_TR(0x662dd8);
if(r1(R+518)){{goto L662e38;}}
}
B662dda:L662dda:{c.instructions+=3;NFSU2_TR(0x662dda);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662ddd:{NFSU2_TR(0x662ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662de0:{NFSU2_TR(0x662de0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662e2a;}}
}
B662de2:L662de2:{c.instructions+=2;NFSU2_TR(0x662de2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662de6:{NFSU2_TR(0x662de6);
if(r1(R+518)){{goto L662e2a;}}
}
B662de8:L662de8:{c.instructions+=2;NFSU2_TR(0x662de8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662dea:{NFSU2_TR(0x662dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662defull));
TAIL_STATIC(0x75dd28u,75d);
}
B662def:L662def:{c.instructions+=4;NFSU2_TR(0x662def);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B662df1:{NFSU2_TR(0x662df1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662df4:{NFSU2_TR(0x662df4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662df7:{NFSU2_TR(0x662df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662dfcull));
TAIL_STATIC(0x75dd28u,75d);
}
B662dfc:L662dfc:{c.instructions+=3;NFSU2_TR(0x662dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B662dfe:{NFSU2_TR(0x662dfe);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662e01:{NFSU2_TR(0x662e01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662e06ull));
TAIL_STATIC(0x75dd28u,75d);
}
B662e06:L662e06:{c.instructions+=3;NFSU2_TR(0x662e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662e09:{NFSU2_TR(0x662e09);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B662e0c:{NFSU2_TR(0x662e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662e11ull));
TAIL_STATIC(0x75dd28u,75d);
}
B662e11:L662e11:{c.instructions+=9;NFSU2_TR(0x662e11);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B662e14:{NFSU2_TR(0x662e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662e17:{NFSU2_TR(0x662e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662e1a:{NFSU2_TR(0x662e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662e1d:{NFSU2_TR(0x662e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662e20:{NFSU2_TR(0x662e20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662e23:{NFSU2_TR(0x662e23);
__builtin_memmove((R+28),(R+12),4);
}
B662e25:{NFSU2_TR(0x662e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662e28:{NFSU2_TR(0x662e28);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662de2u);}goto L662de2;}}
}
B662e2a:L662e2a:{c.instructions+=5;NFSU2_TR(0x662e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662e2d:{NFSU2_TR(0x662e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662e30:{NFSU2_TR(0x662e30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662e33:{NFSU2_TR(0x662e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B662e36:{NFSU2_TR(0x662e36);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662dd3u);}goto L662dd3;}}
}
B662e38:L662e38:{c.instructions+=2;NFSU2_TR(0x662e38);
__builtin_memmove((R+8),(R+28),4);
}
B662e3a:{NFSU2_TR(0x662e3a);
{goto L662eba;}
}
B662e3c:L662e3c:{c.instructions+=5;NFSU2_TR(0x662e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662e40:{NFSU2_TR(0x662e40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662e44:{NFSU2_TR(0x662e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662e47:{NFSU2_TR(0x662e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662e4a:{NFSU2_TR(0x662e4a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662eba;}}
}
B662e4c:L662e4c:{c.instructions+=2;NFSU2_TR(0x662e4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662e4e:{NFSU2_TR(0x662e4e);
if(r1(R+518)){{goto L662eba;}}
}
B662e50:L662e50:{c.instructions+=3;NFSU2_TR(0x662e50);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B662e52:{NFSU2_TR(0x662e52);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662e55:{NFSU2_TR(0x662e55);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662e6c;}}
}
B662e57:L662e57:{c.instructions+=2;NFSU2_TR(0x662e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662e59:{NFSU2_TR(0x662e59);
if(r1(R+518)){{goto L662e6c;}}
}
B662e5b:L662e5b:{c.instructions+=8;NFSU2_TR(0x662e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B662e5d:{NFSU2_TR(0x662e5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B662e60:{NFSU2_TR(0x662e60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B662e62:{NFSU2_TR(0x662e62);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B662e65:{NFSU2_TR(0x662e65);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B662e66:{NFSU2_TR(0x662e66);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B662e67:{NFSU2_TR(0x662e67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B662e6a:{NFSU2_TR(0x662e6a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662e57u);}goto L662e57;}}
}
B662e6c:L662e6c:{c.instructions+=5;NFSU2_TR(0x662e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662e6f:{NFSU2_TR(0x662e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662e72:{NFSU2_TR(0x662e72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B662e75:{NFSU2_TR(0x662e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B662e78:{NFSU2_TR(0x662e78);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662e4cu);}goto L662e4c;}}
}
B662e7a:L662e7a:{c.instructions+=1;NFSU2_TR(0x662e7a);
{goto L662eba;}
}
B662e7c:L662e7c:{c.instructions+=5;NFSU2_TR(0x662e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662e80:{NFSU2_TR(0x662e80);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662e84:{NFSU2_TR(0x662e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662e87:{NFSU2_TR(0x662e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662e8a:{NFSU2_TR(0x662e8a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662eba;}}
}
B662e8c:L662e8c:{c.instructions+=2;NFSU2_TR(0x662e8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662e8e:{NFSU2_TR(0x662e8e);
if(r1(R+518)){{goto L662eba;}}
}
B662e90:L662e90:{c.instructions+=3;NFSU2_TR(0x662e90);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B662e92:{NFSU2_TR(0x662e92);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662e95:{NFSU2_TR(0x662e95);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662eac;}}
}
B662e97:L662e97:{c.instructions+=2;NFSU2_TR(0x662e97);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662e99:{NFSU2_TR(0x662e99);
if(r1(R+518)){{goto L662eac;}}
}
B662e9b:L662e9b:{c.instructions+=8;NFSU2_TR(0x662e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B662e9d:{NFSU2_TR(0x662e9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B662ea0:{NFSU2_TR(0x662ea0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B662ea2:{NFSU2_TR(0x662ea2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B662ea5:{NFSU2_TR(0x662ea5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B662ea6:{NFSU2_TR(0x662ea6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B662ea7:{NFSU2_TR(0x662ea7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B662eaa:{NFSU2_TR(0x662eaa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662e97u);}goto L662e97;}}
}
B662eac:L662eac:{c.instructions+=5;NFSU2_TR(0x662eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662eaf:{NFSU2_TR(0x662eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662eb2:{NFSU2_TR(0x662eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B662eb5:{NFSU2_TR(0x662eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B662eb8:{NFSU2_TR(0x662eb8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662e8cu);}goto L662e8c;}}
}
B662eba:L662eba:{c.instructions+=9;NFSU2_TR(0x662eba);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+8))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B662ebd:{NFSU2_TR(0x662ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662ec0:{NFSU2_TR(0x662ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B662ec1:{NFSU2_TR(0x662ec1);
u8 U[48];
w4(U+40,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B662ec4:{NFSU2_TR(0x662ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B662ec5:{NFSU2_TR(0x662ec5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B662ec7:{NFSU2_TR(0x662ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662ec8:{NFSU2_TR(0x662ec8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B662ec9:{NFSU2_TR(0x662ec9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B662ecc:L662ecc:{c.instructions+=17;NFSU2_TR(0x662ecc);
__builtin_memmove((R+28),(R+28),4);
}
B662ece:{NFSU2_TR(0x662ece);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662ecf:{NFSU2_TR(0x662ecf);
__builtin_memmove((R+20),(R+16),4);
}
B662ed1:{NFSU2_TR(0x662ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B662ed4:{NFSU2_TR(0x662ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662ed7:{NFSU2_TR(0x662ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662eda:{NFSU2_TR(0x662eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B662edc:{NFSU2_TR(0x662edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662edf:{NFSU2_TR(0x662edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662ee0:{NFSU2_TR(0x662ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B662ee3:{NFSU2_TR(0x662ee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662ee5:{NFSU2_TR(0x662ee5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662ee6:{NFSU2_TR(0x662ee6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662ee7:{NFSU2_TR(0x662ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662eea:{NFSU2_TR(0x662eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662eed:{NFSU2_TR(0x662eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662ef0:{NFSU2_TR(0x662ef0);
if(r1(R+518)){{goto L662efa;}}
}
B662ef2:L662ef2:{c.instructions+=3;NFSU2_TR(0x662ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662ef5:{NFSU2_TR(0x662ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662ef8:{NFSU2_TR(0x662ef8);
{goto L662efc;}
}
B662efa:L662efa:{c.instructions+=1;NFSU2_TR(0x662efa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B662efc:L662efc:{c.instructions+=2;NFSU2_TR(0x662efc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662efe:{NFSU2_TR(0x662efe);
if(r1(R+518)){{goto L662f08;}}
}
B662f00:L662f00:{c.instructions+=3;NFSU2_TR(0x662f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B662f03:{NFSU2_TR(0x662f03);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B662f06:{NFSU2_TR(0x662f06);
{goto L662f0e;}
}
B662f08:L662f08:{c.instructions+=2;NFSU2_TR(0x662f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662f0b:{NFSU2_TR(0x662f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662f0e:L662f0e:{c.instructions+=3;NFSU2_TR(0x662f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662f11:{NFSU2_TR(0x662f11);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662f14:{NFSU2_TR(0x662f14);
if(r1(R+518)){{goto L662f1b;}}
}
B662f16:L662f16:{c.instructions+=2;NFSU2_TR(0x662f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662f19:{NFSU2_TR(0x662f19);
{goto L662f2c;}
}
B662f1b:L662f1b:{c.instructions+=4;NFSU2_TR(0x662f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662f1e:{NFSU2_TR(0x662f1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662f20:{NFSU2_TR(0x662f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662f23:{NFSU2_TR(0x662f23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L662f2c;}}
}
B662f25:L662f25:{c.instructions+=1;NFSU2_TR(0x662f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B662f2c:L662f2c:{c.instructions+=2;NFSU2_TR(0x662f2c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B662f2e:{NFSU2_TR(0x662f2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x663253u,663);}
}
B662f34:L662f34:{c.instructions+=2;NFSU2_TR(0x662f34);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662f37:{NFSU2_TR(0x662f37);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x66311bu,663);}
}
B662f3d:L662f3d:{c.instructions+=2;NFSU2_TR(0x662f3d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662f40:{NFSU2_TR(0x662f40);
if(r1(R+518)){{goto L662fe3;}}
}
B662f46:L662f46:{c.instructions+=2;NFSU2_TR(0x662f46);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662f49:{NFSU2_TR(0x662f49);
if(r1(R+518)){TAIL_STATIC(0x66311bu,663);}
}
B662f4f:L662f4f:{c.instructions+=2;NFSU2_TR(0x662f4f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B662f52:{NFSU2_TR(0x662f52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x663253u,663);}
}
B662f58:L662f58:{c.instructions+=3;NFSU2_TR(0x662f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662f5c:{NFSU2_TR(0x662f5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662f5e:{NFSU2_TR(0x662f5e);
if(r1(R+518)){{goto L662f68;}}
}
B662f60:L662f60:{c.instructions+=3;NFSU2_TR(0x662f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662f63:{NFSU2_TR(0x662f63);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B662f65:{NFSU2_TR(0x662f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662f68:L662f68:{c.instructions+=5;NFSU2_TR(0x662f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662f6c:{NFSU2_TR(0x662f6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662f70:{NFSU2_TR(0x662f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B662f73:{NFSU2_TR(0x662f73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B662f76:{NFSU2_TR(0x662f76);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x663253u,663);}
}
B662f7c:L662f7c:{c.instructions+=2;NFSU2_TR(0x662f7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662f80:{NFSU2_TR(0x662f80);
if(r1(R+518)){TAIL_STATIC(0x663253u,663);}
}
B662f86:L662f86:{c.instructions+=4;NFSU2_TR(0x662f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662f8a:{NFSU2_TR(0x662f8a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B662f8c:{NFSU2_TR(0x662f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662f8f:{NFSU2_TR(0x662f8f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L662fd3;}}
}
B662f91:L662f91:{c.instructions+=2;NFSU2_TR(0x662f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B662f94:{NFSU2_TR(0x662f94);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B662f97:L662f97:{c.instructions+=2;NFSU2_TR(0x662f97);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662f9b:{NFSU2_TR(0x662f9b);
if(r1(R+518)){{goto L662fd3;}}
}
B662f9d:L662f9d:{c.instructions+=2;NFSU2_TR(0x662f9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B662fa1:{NFSU2_TR(0x662fa1);
if(r1(R+518)){{goto L662fa8;}}
}
B662fa3:L662fa3:{c.instructions+=2;NFSU2_TR(0x662fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B662fa5:{NFSU2_TR(0x662fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662fa8:L662fa8:{c.instructions+=12;NFSU2_TR(0x662fa8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662faa:{NFSU2_TR(0x662faa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662fad:{NFSU2_TR(0x662fad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662fae:{NFSU2_TR(0x662fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B662fb1:{NFSU2_TR(0x662fb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B662fb4:{NFSU2_TR(0x662fb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B662fb7:{NFSU2_TR(0x662fb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662fb8:{NFSU2_TR(0x662fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B662fbb:{NFSU2_TR(0x662fbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662fbc:{NFSU2_TR(0x662fbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B662fbf:{NFSU2_TR(0x662fbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B662fc0:{NFSU2_TR(0x662fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x662fc5ull));
TAIL_STATIC(0x65fab5u,65f);
}
B662fc5:L662fc5:{c.instructions+=5;NFSU2_TR(0x662fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662fc8:{NFSU2_TR(0x662fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B662fcb:{NFSU2_TR(0x662fcb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B662fce:{NFSU2_TR(0x662fce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B662fd1:{NFSU2_TR(0x662fd1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662f97u);}goto L662f97;}}
}
B662fd3:L662fd3:{c.instructions+=4;NFSU2_TR(0x662fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B662fd6:{NFSU2_TR(0x662fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B662fd9:{NFSU2_TR(0x662fd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B662fdc:{NFSU2_TR(0x662fdc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x662f7cu);}goto L662f7c;}}
}
B662fde:L662fde:{c.instructions+=1;NFSU2_TR(0x662fde);
TAIL_STATIC(0x663253u,663);
}
B662fe3:L662fe3:{c.instructions+=7;NFSU2_TR(0x662fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662fe6:{NFSU2_TR(0x662fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662fe9:{NFSU2_TR(0x662fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B662fec:{NFSU2_TR(0x662fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B662fee:{NFSU2_TR(0x662fee);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B662fef:{NFSU2_TR(0x662fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B662ff2:{NFSU2_TR(0x662ff2);
if(r1(R+518)){TAIL_STATIC(0x6630bfu,663);}
}
B662ff8:L662ff8:{c.instructions+=2;NFSU2_TR(0x662ff8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B662ff9:{NFSU2_TR(0x662ff9);
if(r1(R+518)){TAIL_STATIC(0x663063u,663);}
}
B662ffb:L662ffb:{c.instructions+=2;NFSU2_TR(0x662ffb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B662ffc:{NFSU2_TR(0x662ffc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x663253u,663);}
TAIL_STATIC(0x663002u,663);
}
XIT:NFSU2_TR_EXIT(0x662,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
