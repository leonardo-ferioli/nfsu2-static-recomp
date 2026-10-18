#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_651(u8* __restrict R,Cpu& c);
u32 body_652(u8* __restrict R,Cpu& c);
u32 body_654(u8* __restrict R,Cpu& c);
u32 body_655(u8* __restrict R,Cpu& c);
u32 body_656(u8* __restrict R,Cpu& c);
u32 body_657(u8* __restrict R,Cpu& c);
u32 body_659(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x658,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x658,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_658(u8* __restrict R,Cpu& c);
u32 page_658(Cpu& c){return body_658(c.regs.data(),c);}
__attribute__((noinline)) u32 body_658(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x658000:goto L658000;
case 0x658001:c.instructions+=5;goto B658001;
case 0x658003:c.instructions+=4;goto B658003;
case 0x658005:c.instructions+=3;goto B658005;
case 0x658006:c.instructions+=2;goto B658006;
case 0x658009:c.instructions+=1;goto B658009;
case 0x65800b:goto L65800b;
case 0x65800e:c.instructions+=1;goto B65800e;
case 0x658010:goto L658010;
case 0x658013:c.instructions+=6;goto B658013;
case 0x658016:c.instructions+=5;goto B658016;
case 0x658017:c.instructions+=4;goto B658017;
case 0x658019:c.instructions+=3;goto B658019;
case 0x65801c:c.instructions+=2;goto B65801c;
case 0x65801f:c.instructions+=1;goto B65801f;
case 0x658024:goto L658024;
case 0x658026:c.instructions+=1;goto B658026;
case 0x658028:goto L658028;
case 0x65802b:c.instructions+=5;goto B65802b;
case 0x658030:c.instructions+=4;goto B658030;
case 0x658035:c.instructions+=3;goto B658035;
case 0x658036:c.instructions+=2;goto B658036;
case 0x658039:c.instructions+=1;goto B658039;
case 0x65803e:goto L65803e;
case 0x658041:goto L658041;
case 0x658043:goto L658043;
case 0x658044:c.instructions+=4;goto B658044;
case 0x658045:c.instructions+=3;goto B658045;
case 0x658046:c.instructions+=2;goto B658046;
case 0x658047:c.instructions+=1;goto B658047;
case 0x65804a:goto L65804a;
case 0x65804d:c.instructions+=4;goto B65804d;
case 0x658052:c.instructions+=3;goto B658052;
case 0x658054:c.instructions+=2;goto B658054;
case 0x658059:c.instructions+=1;goto B658059;
case 0x65805b:goto L65805b;
case 0x65805d:c.instructions+=1;goto B65805d;
case 0x65805f:goto L65805f;
case 0x658061:c.instructions+=4;goto B658061;
case 0x658064:c.instructions+=3;goto B658064;
case 0x658067:c.instructions+=2;goto B658067;
case 0x65806b:c.instructions+=1;goto B65806b;
case 0x65806d:goto L65806d;
case 0x65806f:c.instructions+=3;goto B65806f;
case 0x658072:c.instructions+=2;goto B658072;
case 0x658075:c.instructions+=1;goto B658075;
case 0x658079:goto L658079;
case 0x65807c:goto L65807c;
case 0x65807e:c.instructions+=1;goto B65807e;
case 0x658083:goto L658083;
case 0x658085:c.instructions+=1;goto B658085;
case 0x658087:goto L658087;
case 0x658088:c.instructions+=7;goto B658088;
case 0x65808a:c.instructions+=6;goto B65808a;
case 0x65808b:c.instructions+=5;goto B65808b;
case 0x65808c:c.instructions+=4;goto B65808c;
case 0x65808e:c.instructions+=3;goto B65808e;
case 0x65808f:c.instructions+=2;goto B65808f;
case 0x658091:c.instructions+=1;goto B658091;
case 0x658096:goto L658096;
case 0x658098:c.instructions+=2;goto B658098;
case 0x65809b:c.instructions+=1;goto B65809b;
case 0x65809d:goto L65809d;
case 0x6580a0:c.instructions+=1;goto B6580a0;
case 0x6580a2:goto L6580a2;
case 0x6580a4:c.instructions+=1;goto B6580a4;
case 0x6580a6:goto L6580a6;
case 0x6580a8:c.instructions+=1;goto B6580a8;
case 0x6580ad:goto L6580ad;
case 0x6580af:c.instructions+=2;goto B6580af;
case 0x6580b4:c.instructions+=1;goto B6580b4;
case 0x6580b6:goto L6580b6;
case 0x6580b7:c.instructions+=6;goto B6580b7;
case 0x6580b9:c.instructions+=5;goto B6580b9;
case 0x6580bb:c.instructions+=4;goto B6580bb;
case 0x6580be:c.instructions+=3;goto B6580be;
case 0x6580c0:c.instructions+=2;goto B6580c0;
case 0x6580c2:c.instructions+=1;goto B6580c2;
case 0x6580c7:goto L6580c7;
case 0x6580c9:goto L6580c9;
case 0x6580cb:goto L6580cb;
case 0x6580cd:c.instructions+=2;goto B6580cd;
case 0x6580d0:c.instructions+=1;goto B6580d0;
case 0x6580d6:goto L6580d6;
case 0x6580d9:c.instructions+=1;goto B6580d9;
case 0x6580de:goto L6580de;
case 0x6580e0:c.instructions+=2;goto B6580e0;
case 0x6580e3:c.instructions+=1;goto B6580e3;
case 0x6580e9:goto L6580e9;
case 0x6580ec:c.instructions+=4;goto B6580ec;
case 0x6580ee:c.instructions+=3;goto B6580ee;
case 0x6580f1:c.instructions+=2;goto B6580f1;
case 0x6580f4:c.instructions+=1;goto B6580f4;
case 0x6580f9:goto L6580f9;
case 0x6580fb:c.instructions+=2;goto B6580fb;
case 0x6580fe:c.instructions+=1;goto B6580fe;
case 0x658104:goto L658104;
case 0x658106:c.instructions+=1;goto B658106;
case 0x65810b:goto L65810b;
case 0x65810d:c.instructions+=1;goto B65810d;
case 0x65810f:goto L65810f;
case 0x658112:c.instructions+=7;goto B658112;
case 0x658114:c.instructions+=6;goto B658114;
case 0x658116:c.instructions+=5;goto B658116;
case 0x658117:c.instructions+=4;goto B658117;
case 0x658118:c.instructions+=3;goto B658118;
case 0x658119:c.instructions+=2;goto B658119;
case 0x65811a:c.instructions+=1;goto B65811a;
case 0x65811f:goto L65811f;
case 0x658121:c.instructions+=1;goto B658121;
case 0x658123:goto L658123;
case 0x658125:goto L658125;
case 0x658127:c.instructions+=1;goto B658127;
case 0x65812d:goto L65812d;
case 0x65812f:c.instructions+=1;goto B65812f;
case 0x658134:goto L658134;
case 0x658136:c.instructions+=1;goto B658136;
case 0x658138:goto L658138;
case 0x658139:c.instructions+=6;goto B658139;
case 0x65813b:c.instructions+=5;goto B65813b;
case 0x65813d:c.instructions+=4;goto B65813d;
case 0x658140:c.instructions+=3;goto B658140;
case 0x658142:c.instructions+=2;goto B658142;
case 0x658144:c.instructions+=1;goto B658144;
case 0x658149:goto L658149;
case 0x65814b:goto L65814b;
case 0x65814d:goto L65814d;
case 0x65814f:c.instructions+=2;goto B65814f;
case 0x658152:c.instructions+=1;goto B658152;
case 0x658158:goto L658158;
case 0x65815a:c.instructions+=1;goto B65815a;
case 0x65815f:goto L65815f;
case 0x658161:c.instructions+=1;goto B658161;
case 0x658163:goto L658163;
case 0x658168:c.instructions+=4;goto B658168;
case 0x658169:c.instructions+=3;goto B658169;
case 0x65816a:c.instructions+=2;goto B65816a;
case 0x65816c:c.instructions+=1;goto B65816c;
case 0x658171:goto L658171;
case 0x658173:goto L658173;
case 0x658175:goto L658175;
case 0x658177:c.instructions+=2;goto B658177;
case 0x65817a:c.instructions+=1;goto B65817a;
case 0x658180:goto L658180;
case 0x658182:c.instructions+=1;goto B658182;
case 0x658187:goto L658187;
case 0x658189:c.instructions+=1;goto B658189;
case 0x65818b:goto L65818b;
case 0x65818e:c.instructions+=4;goto B65818e;
case 0x658190:c.instructions+=3;goto B658190;
case 0x658193:c.instructions+=2;goto B658193;
case 0x658195:c.instructions+=1;goto B658195;
case 0x65819a:goto L65819a;
case 0x65819c:goto L65819c;
case 0x65819e:goto L65819e;
case 0x6581a0:c.instructions+=3;goto B6581a0;
case 0x6581a3:c.instructions+=2;goto B6581a3;
case 0x6581a6:c.instructions+=1;goto B6581a6;
case 0x6581ac:goto L6581ac;
case 0x6581af:c.instructions+=2;goto B6581af;
case 0x6581b0:c.instructions+=1;goto B6581b0;
case 0x6581b5:goto L6581b5;
case 0x6581b7:c.instructions+=1;goto B6581b7;
case 0x6581bc:goto L6581bc;
case 0x6581be:c.instructions+=12;goto B6581be;
case 0x6581bf:c.instructions+=11;goto B6581bf;
case 0x6581c1:c.instructions+=10;goto B6581c1;
case 0x6581c4:c.instructions+=9;goto B6581c4;
case 0x6581c5:c.instructions+=8;goto B6581c5;
case 0x6581c6:c.instructions+=7;goto B6581c6;
case 0x6581c7:c.instructions+=6;goto B6581c7;
case 0x6581c9:c.instructions+=5;goto B6581c9;
case 0x6581cb:c.instructions+=4;goto B6581cb;
case 0x6581cd:c.instructions+=3;goto B6581cd;
case 0x6581d0:c.instructions+=2;goto B6581d0;
case 0x6581d3:c.instructions+=1;goto B6581d3;
case 0x6581d9:goto L6581d9;
case 0x6581dc:c.instructions+=1;goto B6581dc;
case 0x6581de:goto L6581de;
case 0x6581e1:c.instructions+=3;goto B6581e1;
case 0x6581e2:c.instructions+=2;goto B6581e2;
case 0x6581e4:c.instructions+=1;goto B6581e4;
case 0x6581e6:goto L6581e6;
case 0x6581e9:c.instructions+=7;goto B6581e9;
case 0x6581ed:c.instructions+=6;goto B6581ed;
case 0x6581f0:c.instructions+=5;goto B6581f0;
case 0x6581f3:c.instructions+=4;goto B6581f3;
case 0x6581f6:c.instructions+=3;goto B6581f6;
case 0x6581f9:c.instructions+=2;goto B6581f9;
case 0x6581fc:c.instructions+=1;goto B6581fc;
case 0x6581ff:goto L6581ff;
case 0x658201:c.instructions+=1;goto B658201;
case 0x658203:goto L658203;
case 0x658206:c.instructions+=2;goto B658206;
case 0x65820b:c.instructions+=1;goto B65820b;
case 0x658211:goto L658211;
case 0x658218:goto L658218;
case 0x65821d:c.instructions+=1;goto B65821d;
case 0x658222:goto L658222;
case 0x658224:c.instructions+=1;goto B658224;
case 0x658229:goto L658229;
case 0x65822b:c.instructions+=1;goto B65822b;
case 0x65822d:goto L65822d;
case 0x65822e:c.instructions+=3;goto B65822e;
case 0x65822f:c.instructions+=2;goto B65822f;
case 0x658230:c.instructions+=1;goto B658230;
case 0x658231:goto L658231;
case 0x658233:c.instructions+=1;goto B658233;
case 0x658238:goto L658238;
case 0x65823d:goto L65823d;
case 0x65823f:goto L65823f;
case 0x658240:goto L658240;
case 0x658242:c.instructions+=1;goto B658242;
case 0x658247:goto L658247;
case 0x65824c:goto L65824c;
case 0x65824e:c.instructions+=1;goto B65824e;
case 0x658253:goto L658253;
case 0x658255:c.instructions+=1;goto B658255;
case 0x658257:goto L658257;
case 0x65825a:c.instructions+=4;goto B65825a;
case 0x65825d:c.instructions+=3;goto B65825d;
case 0x658260:c.instructions+=2;goto B658260;
case 0x658263:c.instructions+=1;goto B658263;
case 0x658265:goto L658265;
case 0x658268:c.instructions+=1;goto B658268;
case 0x65826d:goto L65826d;
case 0x658270:goto L658270;
case 0x658273:goto L658273;
case 0x658278:goto L658278;
case 0x65827a:c.instructions+=1;goto B65827a;
case 0x65827f:goto L65827f;
case 0x658282:c.instructions+=4;goto B658282;
case 0x658285:c.instructions+=3;goto B658285;
case 0x658286:c.instructions+=2;goto B658286;
case 0x658288:c.instructions+=1;goto B658288;
case 0x65828d:goto L65828d;
case 0x658292:goto L658292;
case 0x658294:c.instructions+=1;goto B658294;
case 0x658299:goto L658299;
case 0x65829b:c.instructions+=1;goto B65829b;
case 0x65829d:goto L65829d;
case 0x65829e:c.instructions+=2;goto B65829e;
case 0x65829f:c.instructions+=1;goto B65829f;
case 0x6582a1:goto L6582a1;
case 0x6582a3:c.instructions+=1;goto B6582a3;
case 0x6582a8:goto L6582a8;
case 0x6582ad:goto L6582ad;
case 0x6582af:c.instructions+=1;goto B6582af;
case 0x6582b4:goto L6582b4;
case 0x6582b6:c.instructions+=1;goto B6582b6;
case 0x6582b8:goto L6582b8;
case 0x6582b9:c.instructions+=3;goto B6582b9;
case 0x6582ba:c.instructions+=2;goto B6582ba;
case 0x6582bc:c.instructions+=1;goto B6582bc;
case 0x6582be:goto L6582be;
case 0x6582c0:c.instructions+=1;goto B6582c0;
case 0x6582c5:goto L6582c5;
case 0x6582c7:c.instructions+=1;goto B6582c7;
case 0x6582cd:goto L6582cd;
case 0x6582ce:c.instructions+=3;goto B6582ce;
case 0x6582cf:c.instructions+=2;goto B6582cf;
case 0x6582d1:c.instructions+=1;goto B6582d1;
case 0x6582d3:goto L6582d3;
case 0x6582d5:c.instructions+=1;goto B6582d5;
case 0x6582da:goto L6582da;
case 0x6582dc:c.instructions+=1;goto B6582dc;
case 0x6582e2:goto L6582e2;
case 0x6582e3:c.instructions+=3;goto B6582e3;
case 0x6582e4:c.instructions+=2;goto B6582e4;
case 0x6582e6:c.instructions+=1;goto B6582e6;
case 0x6582e8:goto L6582e8;
case 0x6582ea:c.instructions+=1;goto B6582ea;
case 0x6582ef:goto L6582ef;
case 0x6582f1:c.instructions+=1;goto B6582f1;
case 0x6582f7:goto L6582f7;
case 0x6582f8:c.instructions+=3;goto B6582f8;
case 0x6582f9:c.instructions+=2;goto B6582f9;
case 0x6582fe:c.instructions+=1;goto B6582fe;
case 0x658300:goto L658300;
case 0x658302:c.instructions+=1;goto B658302;
case 0x658307:goto L658307;
case 0x658309:c.instructions+=1;goto B658309;
case 0x65830f:goto L65830f;
case 0x658310:c.instructions+=3;goto B658310;
case 0x658311:c.instructions+=2;goto B658311;
case 0x658313:c.instructions+=1;goto B658313;
case 0x658315:goto L658315;
case 0x658317:c.instructions+=1;goto B658317;
case 0x65831c:goto L65831c;
case 0x65831e:c.instructions+=1;goto B65831e;
case 0x658324:goto L658324;
case 0x658325:c.instructions+=3;goto B658325;
case 0x658328:c.instructions+=2;goto B658328;
case 0x658329:c.instructions+=1;goto B658329;
case 0x65832e:goto L65832e;
case 0x658330:c.instructions+=1;goto B658330;
case 0x658335:goto L658335;
case 0x658337:c.instructions+=1;goto B658337;
case 0x65833d:goto L65833d;
case 0x65833e:c.instructions+=3;goto B65833e;
case 0x65833f:c.instructions+=2;goto B65833f;
case 0x658344:c.instructions+=1;goto B658344;
case 0x658349:goto L658349;
case 0x65834b:c.instructions+=1;goto B65834b;
case 0x658350:goto L658350;
case 0x658352:c.instructions+=1;goto B658352;
case 0x658358:goto L658358;
case 0x658359:c.instructions+=3;goto B658359;
case 0x65835a:c.instructions+=2;goto B65835a;
case 0x65835f:c.instructions+=1;goto B65835f;
case 0x658364:goto L658364;
case 0x658366:c.instructions+=1;goto B658366;
case 0x65836b:goto L65836b;
case 0x65836d:c.instructions+=1;goto B65836d;
case 0x658373:goto L658373;
case 0x658374:c.instructions+=3;goto B658374;
case 0x658375:c.instructions+=2;goto B658375;
case 0x65837a:c.instructions+=1;goto B65837a;
case 0x65837f:goto L65837f;
case 0x658381:c.instructions+=1;goto B658381;
case 0x658386:goto L658386;
case 0x658388:c.instructions+=1;goto B658388;
case 0x65838a:goto L65838a;
case 0x65838d:c.instructions+=3;goto B65838d;
case 0x65838e:c.instructions+=2;goto B65838e;
case 0x65838f:c.instructions+=1;goto B65838f;
case 0x658394:goto L658394;
case 0x658396:goto L658396;
case 0x658397:c.instructions+=2;goto B658397;
case 0x658399:c.instructions+=1;goto B658399;
case 0x65839e:goto L65839e;
case 0x65839f:goto L65839f;
case 0x6583a1:c.instructions+=1;goto B6583a1;
case 0x6583a6:goto L6583a6;
case 0x6583ab:goto L6583ab;
case 0x6583ae:c.instructions+=3;goto B6583ae;
case 0x6583b1:c.instructions+=2;goto B6583b1;
case 0x6583b4:c.instructions+=1;goto B6583b4;
case 0x6583b6:goto L6583b6;
case 0x6583b9:c.instructions+=6;goto B6583b9;
case 0x6583bc:c.instructions+=5;goto B6583bc;
case 0x6583bf:c.instructions+=4;goto B6583bf;
case 0x6583c2:c.instructions+=3;goto B6583c2;
case 0x6583c3:c.instructions+=2;goto B6583c3;
case 0x6583c4:c.instructions+=1;goto B6583c4;
case 0x6583c9:goto L6583c9;
case 0x6583cc:c.instructions+=2;goto B6583cc;
case 0x6583cd:c.instructions+=1;goto B6583cd;
case 0x6583cf:goto L6583cf;
case 0x6583d2:c.instructions+=7;goto B6583d2;
case 0x6583d5:c.instructions+=6;goto B6583d5;
case 0x6583d8:c.instructions+=5;goto B6583d8;
case 0x6583db:c.instructions+=4;goto B6583db;
case 0x6583dc:c.instructions+=3;goto B6583dc;
case 0x6583de:c.instructions+=2;goto B6583de;
case 0x6583e1:c.instructions+=1;goto B6583e1;
case 0x6583e6:goto L6583e6;
case 0x6583e9:goto L6583e9;
case 0x6583ec:c.instructions+=1;goto B6583ec;
case 0x6583f1:goto L6583f1;
case 0x6583f4:c.instructions+=3;goto B6583f4;
case 0x6583f6:c.instructions+=2;goto B6583f6;
case 0x6583f9:c.instructions+=1;goto B6583f9;
case 0x6583fe:goto L6583fe;
case 0x658403:goto L658403;
case 0x658406:c.instructions+=5;goto B658406;
case 0x658409:c.instructions+=4;goto B658409;
case 0x65840c:c.instructions+=3;goto B65840c;
case 0x65840f:c.instructions+=2;goto B65840f;
case 0x658411:c.instructions+=1;goto B658411;
case 0x658416:goto L658416;
case 0x658418:c.instructions+=3;goto B658418;
case 0x658419:c.instructions+=2;goto B658419;
case 0x65841b:c.instructions+=1;goto B65841b;
case 0x658420:goto L658420;
case 0x658421:c.instructions+=2;goto B658421;
case 0x658422:c.instructions+=1;goto B658422;
case 0x658427:goto L658427;
case 0x658429:c.instructions+=1;goto B658429;
case 0x65842e:goto L65842e;
case 0x658430:c.instructions+=1;goto B658430;
case 0x658436:goto L658436;
case 0x65843b:goto L65843b;
case 0x65843c:goto L65843c;
case 0x65843f:c.instructions+=2;goto B65843f;
case 0x658441:c.instructions+=1;goto B658441;
case 0x658446:goto L658446;
case 0x65844b:goto L65844b;
case 0x65844d:c.instructions+=1;goto B65844d;
case 0x658452:goto L658452;
case 0x658454:c.instructions+=1;goto B658454;
case 0x65845a:goto L65845a;
case 0x65845f:c.instructions+=1;goto B65845f;
case 0x658464:goto L658464;
case 0x658465:c.instructions+=12;goto B658465;
case 0x658468:c.instructions+=11;goto B658468;
case 0x658469:c.instructions+=10;goto B658469;
case 0x65846c:c.instructions+=9;goto B65846c;
case 0x65846e:c.instructions+=8;goto B65846e;
case 0x658471:c.instructions+=7;goto B658471;
case 0x658474:c.instructions+=6;goto B658474;
case 0x658475:c.instructions+=5;goto B658475;
case 0x658476:c.instructions+=4;goto B658476;
case 0x658477:c.instructions+=3;goto B658477;
case 0x658478:c.instructions+=2;goto B658478;
case 0x65847a:c.instructions+=1;goto B65847a;
case 0x65847f:goto L65847f;
case 0x658482:goto L658482;
case 0x658484:c.instructions+=2;goto B658484;
case 0x658487:c.instructions+=1;goto B658487;
case 0x658489:goto L658489;
case 0x65848c:c.instructions+=2;goto B65848c;
case 0x65848e:c.instructions+=1;goto B65848e;
case 0x658494:goto L658494;
case 0x658497:c.instructions+=5;goto B658497;
case 0x65849a:c.instructions+=4;goto B65849a;
case 0x65849d:c.instructions+=3;goto B65849d;
case 0x6584a0:c.instructions+=2;goto B6584a0;
case 0x6584a3:c.instructions+=1;goto B6584a3;
case 0x6584a6:goto L6584a6;
case 0x6584a7:c.instructions+=4;goto B6584a7;
case 0x6584a8:c.instructions+=3;goto B6584a8;
case 0x6584a9:c.instructions+=2;goto B6584a9;
case 0x6584aa:c.instructions+=1;goto B6584aa;
case 0x6584ad:goto L6584ad;
case 0x6584b0:c.instructions+=13;goto B6584b0;
case 0x6584b2:c.instructions+=12;goto B6584b2;
case 0x6584b3:c.instructions+=11;goto B6584b3;
case 0x6584b6:c.instructions+=10;goto B6584b6;
case 0x6584b7:c.instructions+=9;goto B6584b7;
case 0x6584b9:c.instructions+=8;goto B6584b9;
case 0x6584bc:c.instructions+=7;goto B6584bc;
case 0x6584bf:c.instructions+=6;goto B6584bf;
case 0x6584c0:c.instructions+=5;goto B6584c0;
case 0x6584c1:c.instructions+=4;goto B6584c1;
case 0x6584c2:c.instructions+=3;goto B6584c2;
case 0x6584c3:c.instructions+=2;goto B6584c3;
case 0x6584c5:c.instructions+=1;goto B6584c5;
case 0x6584ca:goto L6584ca;
case 0x6584cc:c.instructions+=1;goto B6584cc;
case 0x6584ce:goto L6584ce;
case 0x6584d1:c.instructions+=2;goto B6584d1;
case 0x6584d3:c.instructions+=1;goto B6584d3;
case 0x6584d5:goto L6584d5;
case 0x6584d9:c.instructions+=1;goto B6584d9;
case 0x6584db:goto L6584db;
case 0x6584de:c.instructions+=5;goto B6584de;
case 0x6584e3:c.instructions+=4;goto B6584e3;
case 0x6584e8:c.instructions+=3;goto B6584e8;
case 0x6584e9:c.instructions+=2;goto B6584e9;
case 0x6584ea:c.instructions+=1;goto B6584ea;
case 0x6584ef:goto L6584ef;
case 0x6584f2:c.instructions+=1;goto B6584f2;
case 0x6584f4:goto L6584f4;
case 0x6584f7:c.instructions+=4;goto B6584f7;
case 0x6584f8:c.instructions+=3;goto B6584f8;
case 0x6584fb:c.instructions+=2;goto B6584fb;
case 0x6584fd:c.instructions+=1;goto B6584fd;
case 0x658502:goto L658502;
case 0x658507:goto L658507;
case 0x65850a:c.instructions+=3;goto B65850a;
case 0x65850c:c.instructions+=2;goto B65850c;
case 0x65850f:c.instructions+=1;goto B65850f;
case 0x658514:goto L658514;
case 0x658519:goto L658519;
case 0x65851b:c.instructions+=1;goto B65851b;
case 0x658520:goto L658520;
case 0x658522:c.instructions+=1;goto B658522;
case 0x658528:goto L658528;
case 0x658529:c.instructions+=3;goto B658529;
case 0x65852b:c.instructions+=2;goto B65852b;
case 0x65852d:c.instructions+=1;goto B65852d;
case 0x65852e:goto L65852e;
case 0x65852f:goto L65852f;
case 0x658531:c.instructions+=1;goto B658531;
case 0x658536:goto L658536;
case 0x65853b:goto L65853b;
case 0x65853d:c.instructions+=1;goto B65853d;
case 0x658542:goto L658542;
case 0x658544:c.instructions+=1;goto B658544;
case 0x65854a:goto L65854a;
case 0x65854b:c.instructions+=4;goto B65854b;
case 0x65854d:c.instructions+=3;goto B65854d;
case 0x65854f:c.instructions+=2;goto B65854f;
case 0x658551:c.instructions+=1;goto B658551;
case 0x658553:goto L658553;
case 0x658555:c.instructions+=1;goto B658555;
case 0x65855a:goto L65855a;
case 0x65855c:c.instructions+=1;goto B65855c;
case 0x658562:goto L658562;
case 0x658563:c.instructions+=4;goto B658563;
case 0x658565:c.instructions+=3;goto B658565;
case 0x658567:c.instructions+=2;goto B658567;
case 0x658569:c.instructions+=1;goto B658569;
case 0x65856b:goto L65856b;
case 0x65856d:c.instructions+=1;goto B65856d;
case 0x658572:goto L658572;
case 0x658574:c.instructions+=1;goto B658574;
case 0x65857a:goto L65857a;
case 0x65857b:c.instructions+=4;goto B65857b;
case 0x65857d:c.instructions+=3;goto B65857d;
case 0x65857f:c.instructions+=2;goto B65857f;
case 0x658581:c.instructions+=1;goto B658581;
case 0x658583:goto L658583;
case 0x658585:c.instructions+=1;goto B658585;
case 0x65858a:goto L65858a;
case 0x65858c:c.instructions+=1;goto B65858c;
case 0x658592:goto L658592;
case 0x658593:c.instructions+=4;goto B658593;
case 0x658595:c.instructions+=3;goto B658595;
case 0x658597:c.instructions+=2;goto B658597;
case 0x658599:c.instructions+=1;goto B658599;
case 0x65859b:goto L65859b;
case 0x65859d:c.instructions+=1;goto B65859d;
case 0x6585a2:goto L6585a2;
case 0x6585a4:c.instructions+=1;goto B6585a4;
case 0x6585aa:goto L6585aa;
case 0x6585ab:c.instructions+=5;goto B6585ab;
case 0x6585ad:c.instructions+=4;goto B6585ad;
case 0x6585af:c.instructions+=3;goto B6585af;
case 0x6585b1:c.instructions+=2;goto B6585b1;
case 0x6585b3:c.instructions+=1;goto B6585b3;
case 0x6585b8:goto L6585b8;
case 0x6585bb:c.instructions+=3;goto B6585bb;
case 0x6585bd:c.instructions+=2;goto B6585bd;
case 0x6585c0:c.instructions+=1;goto B6585c0;
case 0x6585c5:goto L6585c5;
case 0x6585ca:goto L6585ca;
case 0x6585cc:c.instructions+=1;goto B6585cc;
case 0x6585d1:goto L6585d1;
case 0x6585d3:c.instructions+=1;goto B6585d3;
case 0x6585d9:goto L6585d9;
case 0x6585da:c.instructions+=5;goto B6585da;
case 0x6585dc:c.instructions+=4;goto B6585dc;
case 0x6585de:c.instructions+=3;goto B6585de;
case 0x6585e0:c.instructions+=2;goto B6585e0;
case 0x6585e2:c.instructions+=1;goto B6585e2;
case 0x6585e7:goto L6585e7;
case 0x6585ea:c.instructions+=4;goto B6585ea;
case 0x6585ec:c.instructions+=3;goto B6585ec;
case 0x6585ef:c.instructions+=2;goto B6585ef;
case 0x6585f2:c.instructions+=1;goto B6585f2;
case 0x6585f7:goto L6585f7;
case 0x6585fc:goto L6585fc;
case 0x6585fe:c.instructions+=1;goto B6585fe;
case 0x658603:goto L658603;
case 0x658605:c.instructions+=1;goto B658605;
case 0x65860b:goto L65860b;
case 0x65860c:c.instructions+=4;goto B65860c;
case 0x65860e:c.instructions+=3;goto B65860e;
case 0x658610:c.instructions+=2;goto B658610;
case 0x658612:c.instructions+=1;goto B658612;
case 0x658617:goto L658617;
case 0x658619:c.instructions+=1;goto B658619;
case 0x65861e:goto L65861e;
case 0x658620:c.instructions+=1;goto B658620;
case 0x658626:goto L658626;
case 0x658627:c.instructions+=4;goto B658627;
case 0x658629:c.instructions+=3;goto B658629;
case 0x65862b:c.instructions+=2;goto B65862b;
case 0x65862d:c.instructions+=1;goto B65862d;
case 0x658632:goto L658632;
case 0x658634:c.instructions+=1;goto B658634;
case 0x658639:goto L658639;
case 0x65863b:c.instructions+=1;goto B65863b;
case 0x658641:goto L658641;
case 0x658642:c.instructions+=4;goto B658642;
case 0x658644:c.instructions+=3;goto B658644;
case 0x658646:c.instructions+=2;goto B658646;
case 0x658648:c.instructions+=1;goto B658648;
case 0x65864d:goto L65864d;
case 0x65864f:c.instructions+=1;goto B65864f;
case 0x658654:goto L658654;
case 0x658656:c.instructions+=1;goto B658656;
case 0x65865c:goto L65865c;
case 0x65865d:c.instructions+=4;goto B65865d;
case 0x65865f:c.instructions+=3;goto B65865f;
case 0x658661:c.instructions+=2;goto B658661;
case 0x658663:c.instructions+=1;goto B658663;
case 0x658668:goto L658668;
case 0x65866a:c.instructions+=1;goto B65866a;
case 0x65866f:goto L65866f;
case 0x658671:c.instructions+=1;goto B658671;
case 0x658677:goto L658677;
case 0x658678:c.instructions+=4;goto B658678;
case 0x65867a:c.instructions+=3;goto B65867a;
case 0x65867c:c.instructions+=2;goto B65867c;
case 0x65867e:c.instructions+=1;goto B65867e;
case 0x658683:goto L658683;
case 0x658685:c.instructions+=1;goto B658685;
case 0x65868a:goto L65868a;
case 0x65868c:c.instructions+=1;goto B65868c;
case 0x658692:goto L658692;
case 0x658693:c.instructions+=4;goto B658693;
case 0x658695:c.instructions+=3;goto B658695;
case 0x658697:c.instructions+=2;goto B658697;
case 0x658699:c.instructions+=1;goto B658699;
case 0x65869e:goto L65869e;
case 0x6586a0:c.instructions+=1;goto B6586a0;
case 0x6586a5:goto L6586a5;
case 0x6586a7:c.instructions+=1;goto B6586a7;
case 0x6586ad:goto L6586ad;
case 0x6586ae:c.instructions+=4;goto B6586ae;
case 0x6586b0:c.instructions+=3;goto B6586b0;
case 0x6586b2:c.instructions+=2;goto B6586b2;
case 0x6586b4:c.instructions+=1;goto B6586b4;
case 0x6586b9:goto L6586b9;
case 0x6586bb:c.instructions+=1;goto B6586bb;
case 0x6586c0:goto L6586c0;
case 0x6586c2:c.instructions+=1;goto B6586c2;
case 0x6586c8:goto L6586c8;
case 0x6586c9:c.instructions+=4;goto B6586c9;
case 0x6586cb:c.instructions+=3;goto B6586cb;
case 0x6586cd:c.instructions+=2;goto B6586cd;
case 0x6586cf:c.instructions+=1;goto B6586cf;
case 0x6586d4:goto L6586d4;
case 0x6586d6:c.instructions+=1;goto B6586d6;
case 0x6586db:goto L6586db;
case 0x6586dd:c.instructions+=1;goto B6586dd;
case 0x6586e3:goto L6586e3;
case 0x6586e4:c.instructions+=4;goto B6586e4;
case 0x6586e6:c.instructions+=3;goto B6586e6;
case 0x6586e8:c.instructions+=2;goto B6586e8;
case 0x6586ea:c.instructions+=1;goto B6586ea;
case 0x6586ef:goto L6586ef;
case 0x6586f1:c.instructions+=1;goto B6586f1;
case 0x6586f6:goto L6586f6;
case 0x6586f8:c.instructions+=1;goto B6586f8;
case 0x6586fe:goto L6586fe;
case 0x6586ff:c.instructions+=4;goto B6586ff;
case 0x658701:c.instructions+=3;goto B658701;
case 0x658703:c.instructions+=2;goto B658703;
case 0x658705:c.instructions+=1;goto B658705;
case 0x65870a:goto L65870a;
case 0x65870c:c.instructions+=1;goto B65870c;
case 0x658711:goto L658711;
case 0x658713:c.instructions+=1;goto B658713;
case 0x658719:goto L658719;
case 0x65871a:c.instructions+=4;goto B65871a;
case 0x65871c:c.instructions+=3;goto B65871c;
case 0x65871e:c.instructions+=2;goto B65871e;
case 0x658720:c.instructions+=1;goto B658720;
case 0x658722:goto L658722;
case 0x658724:c.instructions+=1;goto B658724;
case 0x658729:goto L658729;
case 0x65872b:c.instructions+=1;goto B65872b;
case 0x658731:goto L658731;
case 0x658732:c.instructions+=4;goto B658732;
case 0x658734:c.instructions+=3;goto B658734;
case 0x658736:c.instructions+=2;goto B658736;
case 0x658738:c.instructions+=1;goto B658738;
case 0x65873a:goto L65873a;
case 0x65873c:c.instructions+=1;goto B65873c;
case 0x658741:goto L658741;
case 0x658743:c.instructions+=1;goto B658743;
case 0x658749:goto L658749;
case 0x65874a:c.instructions+=4;goto B65874a;
case 0x65874c:c.instructions+=3;goto B65874c;
case 0x65874e:c.instructions+=2;goto B65874e;
case 0x658750:c.instructions+=1;goto B658750;
case 0x658752:goto L658752;
case 0x658754:c.instructions+=1;goto B658754;
case 0x658759:goto L658759;
case 0x65875b:c.instructions+=1;goto B65875b;
case 0x658761:goto L658761;
case 0x658762:c.instructions+=4;goto B658762;
case 0x658764:c.instructions+=3;goto B658764;
case 0x658766:c.instructions+=2;goto B658766;
case 0x658768:c.instructions+=1;goto B658768;
case 0x65876a:goto L65876a;
case 0x65876c:c.instructions+=1;goto B65876c;
case 0x658771:goto L658771;
case 0x658773:c.instructions+=1;goto B658773;
case 0x658779:goto L658779;
case 0x65877a:c.instructions+=4;goto B65877a;
case 0x65877c:c.instructions+=3;goto B65877c;
case 0x65877e:c.instructions+=2;goto B65877e;
case 0x658780:c.instructions+=1;goto B658780;
case 0x658782:goto L658782;
case 0x658784:c.instructions+=1;goto B658784;
case 0x658789:goto L658789;
case 0x65878b:c.instructions+=1;goto B65878b;
case 0x658791:goto L658791;
case 0x658792:c.instructions+=3;goto B658792;
case 0x658794:c.instructions+=2;goto B658794;
case 0x658796:c.instructions+=1;goto B658796;
case 0x658798:goto L658798;
case 0x65879a:c.instructions+=1;goto B65879a;
case 0x65879f:goto L65879f;
case 0x6587a2:c.instructions+=1;goto B6587a2;
case 0x6587a3:goto L6587a3;
case 0x6587a5:c.instructions+=1;goto B6587a5;
case 0x6587aa:goto L6587aa;
case 0x6587af:goto L6587af;
case 0x6587b2:c.instructions+=2;goto B6587b2;
case 0x6587b5:c.instructions+=1;goto B6587b5;
case 0x6587b7:goto L6587b7;
case 0x6587ba:c.instructions+=5;goto B6587ba;
case 0x6587bd:c.instructions+=4;goto B6587bd;
case 0x6587c0:c.instructions+=3;goto B6587c0;
case 0x6587c2:c.instructions+=2;goto B6587c2;
case 0x6587c3:c.instructions+=1;goto B6587c3;
case 0x6587c8:goto L6587c8;
case 0x6587cd:goto L6587cd;
case 0x6587ce:c.instructions+=1;goto B6587ce;
case 0x6587d0:goto L6587d0;
case 0x6587d2:c.instructions+=2;goto B6587d2;
case 0x6587d4:c.instructions+=1;goto B6587d4;
case 0x6587d9:goto L6587d9;
case 0x6587de:goto L6587de;
case 0x6587e0:goto L6587e0;
case 0x6587e2:c.instructions+=1;goto B6587e2;
case 0x6587e7:goto L6587e7;
case 0x6587ec:goto L6587ec;
case 0x6587ee:c.instructions+=1;goto B6587ee;
case 0x6587f3:goto L6587f3;
case 0x6587f5:c.instructions+=1;goto B6587f5;
case 0x6587fb:goto L6587fb;
case 0x658800:c.instructions+=1;goto B658800;
case 0x658805:goto L658805;
case 0x658808:c.instructions+=2;goto B658808;
case 0x65880b:c.instructions+=1;goto B65880b;
case 0x658810:goto L658810;
case 0x658815:goto L658815;
case 0x658817:c.instructions+=1;goto B658817;
case 0x65881c:goto L65881c;
case 0x65881e:c.instructions+=1;goto B65881e;
case 0x658824:goto L658824;
case 0x658827:c.instructions+=1;goto B658827;
case 0x658828:goto L658828;
case 0x65882a:c.instructions+=1;goto B65882a;
case 0x65882f:goto L65882f;
case 0x658834:goto L658834;
case 0x658836:c.instructions+=1;goto B658836;
case 0x65883b:goto L65883b;
case 0x65883d:c.instructions+=1;goto B65883d;
case 0x658843:goto L658843;
case 0x658846:c.instructions+=2;goto B658846;
case 0x658849:c.instructions+=1;goto B658849;
case 0x65884b:goto L65884b;
case 0x65884c:c.instructions+=2;goto B65884c;
case 0x65884e:c.instructions+=1;goto B65884e;
case 0x658850:goto L658850;
case 0x658853:goto L658853;
case 0x658855:c.instructions+=1;goto B658855;
case 0x65885a:goto L65885a;
case 0x65885f:goto L65885f;
case 0x658862:c.instructions+=2;goto B658862;
case 0x658865:c.instructions+=1;goto B658865;
case 0x65886a:goto L65886a;
case 0x65886c:c.instructions+=1;goto B65886c;
case 0x65886e:goto L65886e;
case 0x658871:c.instructions+=5;goto B658871;
case 0x658873:c.instructions+=4;goto B658873;
case 0x658876:c.instructions+=3;goto B658876;
case 0x658879:c.instructions+=2;goto B658879;
case 0x65887c:c.instructions+=1;goto B65887c;
case 0x658881:goto L658881;
case 0x658886:goto L658886;
case 0x658888:c.instructions+=1;goto B658888;
case 0x65888d:goto L65888d;
case 0x65888f:c.instructions+=1;goto B65888f;
case 0x658895:goto L658895;
case 0x65889a:c.instructions+=1;goto B65889a;
case 0x65889f:goto L65889f;
case 0x6588a1:c.instructions+=1;goto B6588a1;
case 0x6588a6:goto L6588a6;
case 0x6588a8:c.instructions+=1;goto B6588a8;
case 0x6588ae:goto L6588ae;
case 0x6588b3:c.instructions+=1;goto B6588b3;
case 0x6588b8:goto L6588b8;
case 0x6588bb:c.instructions+=2;goto B6588bb;
case 0x6588bd:c.instructions+=1;goto B6588bd;
case 0x6588c2:goto L6588c2;
case 0x6588c5:c.instructions+=1;goto B6588c5;
case 0x6588ca:goto L6588ca;
case 0x6588cd:c.instructions+=2;goto B6588cd;
case 0x6588cf:c.instructions+=1;goto B6588cf;
case 0x6588d5:goto L6588d5;
case 0x6588d8:c.instructions+=2;goto B6588d8;
case 0x6588da:c.instructions+=1;goto B6588da;
case 0x6588e0:goto L6588e0;
case 0x6588e3:c.instructions+=9;goto B6588e3;
case 0x6588e6:c.instructions+=8;goto B6588e6;
case 0x6588e9:c.instructions+=7;goto B6588e9;
case 0x6588ec:c.instructions+=6;goto B6588ec;
case 0x6588ef:c.instructions+=5;goto B6588ef;
case 0x6588f6:c.instructions+=4;goto B6588f6;
case 0x6588f9:c.instructions+=3;goto B6588f9;
case 0x6588fc:c.instructions+=2;goto B6588fc;
case 0x6588ff:c.instructions+=1;goto B6588ff;
case 0x658901:goto L658901;
case 0x658904:c.instructions+=3;goto B658904;
case 0x658906:c.instructions+=2;goto B658906;
case 0x658907:c.instructions+=1;goto B658907;
case 0x65890c:goto L65890c;
case 0x65890e:c.instructions+=2;goto B65890e;
case 0x658911:c.instructions+=1;goto B658911;
case 0x658913:goto L658913;
case 0x658916:c.instructions+=2;goto B658916;
case 0x658918:c.instructions+=1;goto B658918;
case 0x65891a:goto L65891a;
case 0x65891e:c.instructions+=1;goto B65891e;
case 0x658920:goto L658920;
case 0x658923:c.instructions+=2;goto B658923;
case 0x658926:c.instructions+=1;goto B658926;
case 0x658928:goto L658928;
case 0x65892b:c.instructions+=3;goto B65892b;
case 0x65892d:c.instructions+=2;goto B65892d;
case 0x658930:c.instructions+=1;goto B658930;
case 0x658932:goto L658932;
case 0x658935:c.instructions+=1;goto B658935;
case 0x658938:goto L658938;
case 0x65893a:c.instructions+=2;goto B65893a;
case 0x65893d:c.instructions+=1;goto B65893d;
case 0x65893f:goto L65893f;
case 0x658941:goto L658941;
case 0x658944:c.instructions+=3;goto B658944;
case 0x658947:c.instructions+=2;goto B658947;
case 0x65894b:c.instructions+=1;goto B65894b;
case 0x65894d:goto L65894d;
case 0x658950:c.instructions+=5;goto B658950;
case 0x658955:c.instructions+=4;goto B658955;
case 0x65895a:c.instructions+=3;goto B65895a;
case 0x65895b:c.instructions+=2;goto B65895b;
case 0x65895c:c.instructions+=1;goto B65895c;
case 0x658961:goto L658961;
case 0x658964:c.instructions+=1;goto B658964;
case 0x658967:goto L658967;
case 0x65896a:c.instructions+=2;goto B65896a;
case 0x65896d:c.instructions+=1;goto B65896d;
case 0x658974:goto L658974;
case 0x658977:c.instructions+=2;goto B658977;
case 0x658979:c.instructions+=1;goto B658979;
case 0x65897e:goto L65897e;
case 0x658982:c.instructions+=1;goto B658982;
case 0x658987:goto L658987;
case 0x65898a:c.instructions+=4;goto B65898a;
case 0x65898c:c.instructions+=3;goto B65898c;
case 0x65898f:c.instructions+=2;goto B65898f;
case 0x658992:c.instructions+=1;goto B658992;
case 0x658997:goto L658997;
case 0x658999:c.instructions+=3;goto B658999;
case 0x65899a:c.instructions+=2;goto B65899a;
case 0x65899c:c.instructions+=1;goto B65899c;
case 0x6589a1:goto L6589a1;
case 0x6589a6:goto L6589a6;
case 0x6589a9:c.instructions+=2;goto B6589a9;
case 0x6589ab:c.instructions+=1;goto B6589ab;
case 0x6589b0:goto L6589b0;
case 0x6589b2:c.instructions+=1;goto B6589b2;
case 0x6589b7:goto L6589b7;
case 0x6589b9:c.instructions+=1;goto B6589b9;
case 0x6589bf:goto L6589bf;
case 0x6589c2:c.instructions+=2;goto B6589c2;
case 0x6589c3:c.instructions+=1;goto B6589c3;
case 0x6589c5:goto L6589c5;
case 0x6589c7:c.instructions+=1;goto B6589c7;
case 0x6589cc:goto L6589cc;
case 0x6589ce:c.instructions+=1;goto B6589ce;
case 0x6589d3:goto L6589d3;
case 0x6589d6:c.instructions+=4;goto B6589d6;
case 0x6589d9:c.instructions+=3;goto B6589d9;
case 0x6589dc:c.instructions+=2;goto B6589dc;
case 0x6589e0:c.instructions+=1;goto B6589e0;
case 0x6589e6:goto L6589e6;
case 0x6589ea:c.instructions+=1;goto B6589ea;
case 0x6589ef:goto L6589ef;
case 0x6589f1:c.instructions+=1;goto B6589f1;
case 0x6589f6:goto L6589f6;
case 0x6589f8:c.instructions+=1;goto B6589f8;
case 0x6589fe:goto L6589fe;
case 0x6589ff:c.instructions+=3;goto B6589ff;
case 0x658a00:c.instructions+=2;goto B658a00;
case 0x658a02:c.instructions+=1;goto B658a02;
case 0x658a07:goto L658a07;
case 0x658a09:c.instructions+=1;goto B658a09;
case 0x658a0e:goto L658a0e;
case 0x658a10:c.instructions+=1;goto B658a10;
case 0x658a16:goto L658a16;
case 0x658a17:c.instructions+=3;goto B658a17;
case 0x658a18:c.instructions+=2;goto B658a18;
case 0x658a1a:c.instructions+=1;goto B658a1a;
case 0x658a1f:goto L658a1f;
case 0x658a21:c.instructions+=1;goto B658a21;
case 0x658a26:goto L658a26;
case 0x658a28:c.instructions+=1;goto B658a28;
case 0x658a2e:goto L658a2e;
case 0x658a2f:c.instructions+=3;goto B658a2f;
case 0x658a30:c.instructions+=2;goto B658a30;
case 0x658a32:c.instructions+=1;goto B658a32;
case 0x658a37:goto L658a37;
case 0x658a39:c.instructions+=1;goto B658a39;
case 0x658a3e:goto L658a3e;
case 0x658a40:c.instructions+=1;goto B658a40;
case 0x658a46:goto L658a46;
case 0x658a47:c.instructions+=3;goto B658a47;
case 0x658a48:c.instructions+=2;goto B658a48;
case 0x658a4a:c.instructions+=1;goto B658a4a;
case 0x658a4f:goto L658a4f;
case 0x658a51:c.instructions+=1;goto B658a51;
case 0x658a56:goto L658a56;
case 0x658a58:c.instructions+=1;goto B658a58;
case 0x658a5a:goto L658a5a;
case 0x658a5f:c.instructions+=4;goto B658a5f;
case 0x658a60:c.instructions+=3;goto B658a60;
case 0x658a61:c.instructions+=2;goto B658a61;
case 0x658a63:c.instructions+=1;goto B658a63;
case 0x658a68:goto L658a68;
case 0x658a6a:c.instructions+=1;goto B658a6a;
case 0x658a6c:goto L658a6c;
case 0x658a6e:goto L658a6e;
case 0x658a6f:c.instructions+=2;goto B658a6f;
case 0x658a71:c.instructions+=1;goto B658a71;
case 0x658a76:goto L658a76;
case 0x658a78:c.instructions+=1;goto B658a78;
case 0x658a7a:goto L658a7a;
case 0x658a7c:c.instructions+=1;goto B658a7c;
case 0x658a81:goto L658a81;
case 0x658a83:c.instructions+=1;goto B658a83;
case 0x658a85:goto L658a85;
case 0x658a88:c.instructions+=5;goto B658a88;
case 0x658a8a:c.instructions+=4;goto B658a8a;
case 0x658a8d:c.instructions+=3;goto B658a8d;
case 0x658a90:c.instructions+=2;goto B658a90;
case 0x658a92:c.instructions+=1;goto B658a92;
case 0x658a97:goto L658a97;
case 0x658a99:goto L658a99;
case 0x658a9b:goto L658a9b;
case 0x658a9c:c.instructions+=3;goto B658a9c;
case 0x658a9e:c.instructions+=2;goto B658a9e;
case 0x658aa1:c.instructions+=1;goto B658aa1;
case 0x658aa6:goto L658aa6;
case 0x658aa9:c.instructions+=1;goto B658aa9;
case 0x658aae:goto L658aae;
case 0x658aaf:c.instructions+=3;goto B658aaf;
case 0x658ab1:c.instructions+=2;goto B658ab1;
case 0x658ab3:c.instructions+=1;goto B658ab3;
case 0x658ab8:goto L658ab8;
case 0x658aba:c.instructions+=1;goto B658aba;
case 0x658abf:goto L658abf;
case 0x658ac1:c.instructions+=1;goto B658ac1;
case 0x658ac6:goto L658ac6;
case 0x658ac8:c.instructions+=1;goto B658ac8;
case 0x658aca:goto L658aca;
case 0x658acf:c.instructions+=4;goto B658acf;
case 0x658ad0:c.instructions+=3;goto B658ad0;
case 0x658ad1:c.instructions+=2;goto B658ad1;
case 0x658ad3:c.instructions+=1;goto B658ad3;
case 0x658ad8:goto L658ad8;
case 0x658ada:c.instructions+=1;goto B658ada;
case 0x658adc:goto L658adc;
case 0x658ade:goto L658ade;
case 0x658adf:c.instructions+=2;goto B658adf;
case 0x658ae1:c.instructions+=1;goto B658ae1;
case 0x658ae6:goto L658ae6;
case 0x658ae8:c.instructions+=1;goto B658ae8;
case 0x658aee:goto L658aee;
case 0x658af0:c.instructions+=1;goto B658af0;
case 0x658af5:goto L658af5;
case 0x658af7:c.instructions+=1;goto B658af7;
case 0x658af9:goto L658af9;
case 0x658afc:c.instructions+=5;goto B658afc;
case 0x658afe:c.instructions+=4;goto B658afe;
case 0x658b01:c.instructions+=3;goto B658b01;
case 0x658b04:c.instructions+=2;goto B658b04;
case 0x658b06:c.instructions+=1;goto B658b06;
case 0x658b0b:goto L658b0b;
case 0x658b0d:goto L658b0d;
case 0x658b0e:c.instructions+=3;goto B658b0e;
case 0x658b10:c.instructions+=2;goto B658b10;
case 0x658b12:c.instructions+=1;goto B658b12;
case 0x658b17:goto L658b17;
case 0x658b1a:c.instructions+=1;goto B658b1a;
case 0x658b1c:goto L658b1c;
case 0x658b23:c.instructions+=1;goto B658b23;
case 0x658b28:goto L658b28;
case 0x658b2a:c.instructions+=1;goto B658b2a;
case 0x658b2f:goto L658b2f;
case 0x658b31:c.instructions+=1;goto B658b31;
case 0x658b33:goto L658b33;
case 0x658b38:c.instructions+=4;goto B658b38;
case 0x658b39:c.instructions+=3;goto B658b39;
case 0x658b3a:c.instructions+=2;goto B658b3a;
case 0x658b3c:c.instructions+=1;goto B658b3c;
case 0x658b41:goto L658b41;
case 0x658b43:c.instructions+=1;goto B658b43;
case 0x658b45:goto L658b45;
case 0x658b47:goto L658b47;
case 0x658b48:c.instructions+=2;goto B658b48;
case 0x658b4a:c.instructions+=1;goto B658b4a;
case 0x658b4f:goto L658b4f;
case 0x658b51:c.instructions+=1;goto B658b51;
case 0x658b57:goto L658b57;
case 0x658b59:c.instructions+=1;goto B658b59;
case 0x658b5e:goto L658b5e;
case 0x658b60:c.instructions+=1;goto B658b60;
case 0x658b62:goto L658b62;
case 0x658b65:c.instructions+=4;goto B658b65;
case 0x658b67:c.instructions+=3;goto B658b67;
case 0x658b6a:c.instructions+=2;goto B658b6a;
case 0x658b6d:c.instructions+=1;goto B658b6d;
case 0x658b72:goto L658b72;
case 0x658b74:goto L658b74;
case 0x658b76:goto L658b76;
case 0x658b79:c.instructions+=2;goto B658b79;
case 0x658b7a:c.instructions+=1;goto B658b7a;
case 0x658b7f:goto L658b7f;
case 0x658b86:c.instructions+=1;goto B658b86;
case 0x658b8b:goto L658b8b;
case 0x658b8e:c.instructions+=1;goto B658b8e;
case 0x658b93:goto L658b93;
case 0x658b94:c.instructions+=2;goto B658b94;
case 0x658b96:c.instructions+=1;goto B658b96;
case 0x658b9b:goto L658b9b;
case 0x658b9c:c.instructions+=1;goto B658b9c;
case 0x658b9e:goto L658b9e;
case 0x658ba1:goto L658ba1;
case 0x658ba3:c.instructions+=1;goto B658ba3;
case 0x658ba8:goto L658ba8;
case 0x658bad:goto L658bad;
case 0x658bb0:c.instructions+=4;goto B658bb0;
case 0x658bb1:c.instructions+=3;goto B658bb1;
case 0x658bb4:c.instructions+=2;goto B658bb4;
case 0x658bb7:c.instructions+=1;goto B658bb7;
case 0x658bb9:goto L658bb9;
case 0x658bbb:c.instructions+=1;goto B658bbb;
case 0x658bc0:goto L658bc0;
case 0x658bc2:c.instructions+=1;goto B658bc2;
case 0x658bc8:goto L658bc8;
case 0x658bcd:c.instructions+=1;goto B658bcd;
case 0x658bd2:goto L658bd2;
case 0x658bd4:c.instructions+=1;goto B658bd4;
case 0x658bd9:goto L658bd9;
case 0x658bde:goto L658bde;
case 0x658be1:c.instructions+=3;goto B658be1;
case 0x658be2:c.instructions+=2;goto B658be2;
case 0x658be5:c.instructions+=1;goto B658be5;
case 0x658be6:goto L658be6;
case 0x658be8:c.instructions+=1;goto B658be8;
case 0x658bed:goto L658bed;
case 0x658bf2:goto L658bf2;
case 0x658bf5:c.instructions+=5;goto B658bf5;
case 0x658bf7:c.instructions+=4;goto B658bf7;
case 0x658bfa:c.instructions+=3;goto B658bfa;
case 0x658bfd:c.instructions+=2;goto B658bfd;
case 0x658c00:c.instructions+=1;goto B658c00;
case 0x658c05:goto L658c05;
case 0x658c07:c.instructions+=1;goto B658c07;
case 0x658c0c:goto L658c0c;
case 0x658c0d:c.instructions+=1;goto B658c0d;
case 0x658c0f:goto L658c0f;
case 0x658c12:goto L658c12;
case 0x658c15:c.instructions+=3;goto B658c15;
case 0x658c17:c.instructions+=2;goto B658c17;
case 0x658c1a:c.instructions+=1;goto B658c1a;
case 0x658c1f:goto L658c1f;
case 0x658c24:goto L658c24;
case 0x658c25:c.instructions+=2;goto B658c25;
case 0x658c27:c.instructions+=1;goto B658c27;
case 0x658c2c:goto L658c2c;
case 0x658c2f:c.instructions+=2;goto B658c2f;
case 0x658c31:c.instructions+=1;goto B658c31;
case 0x658c36:goto L658c36;
case 0x658c3b:goto L658c3b;
case 0x658c3d:c.instructions+=1;goto B658c3d;
case 0x658c42:goto L658c42;
case 0x658c44:c.instructions+=1;goto B658c44;
case 0x658c4a:goto L658c4a;
case 0x658c4f:c.instructions+=1;goto B658c4f;
case 0x658c54:goto L658c54;
case 0x658c56:c.instructions+=1;goto B658c56;
case 0x658c5b:goto L658c5b;
case 0x658c5d:c.instructions+=1;goto B658c5d;
case 0x658c63:goto L658c63;
case 0x658c68:goto L658c68;
case 0x658c6b:c.instructions+=1;goto B658c6b;
case 0x658c70:goto L658c70;
case 0x658c73:c.instructions+=6;goto B658c73;
case 0x658c75:c.instructions+=5;goto B658c75;
case 0x658c76:c.instructions+=4;goto B658c76;
case 0x658c77:c.instructions+=3;goto B658c77;
case 0x658c78:c.instructions+=2;goto B658c78;
case 0x658c7b:c.instructions+=1;goto B658c7b;
case 0x658c7d:goto L658c7d;
case 0x658c7e:c.instructions+=2;goto B658c7e;
case 0x658c80:c.instructions+=1;goto B658c80;
case 0x658c85:goto L658c85;
case 0x658c8a:goto L658c8a;
case 0x658c8d:c.instructions+=7;goto B658c8d;
case 0x658c8f:c.instructions+=6;goto B658c8f;
case 0x658c90:c.instructions+=5;goto B658c90;
case 0x658c91:c.instructions+=4;goto B658c91;
case 0x658c92:c.instructions+=3;goto B658c92;
case 0x658c95:c.instructions+=2;goto B658c95;
case 0x658c96:c.instructions+=1;goto B658c96;
case 0x658c98:goto L658c98;
case 0x658c9b:c.instructions+=2;goto B658c9b;
case 0x658c9d:c.instructions+=1;goto B658c9d;
case 0x658ca2:goto L658ca2;
case 0x658ca7:goto L658ca7;
case 0x658caa:c.instructions+=2;goto B658caa;
case 0x658cac:c.instructions+=1;goto B658cac;
case 0x658cb1:goto L658cb1;
case 0x658cb6:goto L658cb6;
case 0x658cb7:c.instructions+=3;goto B658cb7;
case 0x658cba:c.instructions+=2;goto B658cba;
case 0x658cbc:c.instructions+=1;goto B658cbc;
case 0x658cc1:goto L658cc1;
case 0x658cc6:goto L658cc6;
case 0x658cc8:c.instructions+=1;goto B658cc8;
case 0x658cca:goto L658cca;
case 0x658ccd:c.instructions+=3;goto B658ccd;
case 0x658ccf:c.instructions+=2;goto B658ccf;
case 0x658cd2:c.instructions+=1;goto B658cd2;
case 0x658cd7:goto L658cd7;
case 0x658cdc:goto L658cdc;
case 0x658cdd:c.instructions+=4;goto B658cdd;
case 0x658ce0:c.instructions+=3;goto B658ce0;
case 0x658ce2:c.instructions+=2;goto B658ce2;
case 0x658ce5:c.instructions+=1;goto B658ce5;
case 0x658cea:goto L658cea;
case 0x658cef:goto L658cef;
case 0x658cf2:c.instructions+=2;goto B658cf2;
case 0x658cf4:c.instructions+=1;goto B658cf4;
case 0x658cf9:goto L658cf9;
case 0x658cfe:goto L658cfe;
case 0x658d01:c.instructions+=1;goto B658d01;
case 0x658d03:goto L658d03;
case 0x658d06:goto L658d06;
case 0x658d08:c.instructions+=1;goto B658d08;
case 0x658d0d:goto L658d0d;
case 0x658d12:goto L658d12;
case 0x658d13:c.instructions+=1;goto B658d13;
case 0x658d15:goto L658d15;
case 0x658d18:c.instructions+=2;goto B658d18;
case 0x658d1a:c.instructions+=1;goto B658d1a;
case 0x658d1f:goto L658d1f;
case 0x658d24:goto L658d24;
case 0x658d26:goto L658d26;
case 0x658d29:c.instructions+=4;goto B658d29;
case 0x658d2b:c.instructions+=3;goto B658d2b;
case 0x658d2e:c.instructions+=2;goto B658d2e;
case 0x658d31:c.instructions+=1;goto B658d31;
case 0x658d36:goto L658d36;
case 0x658d3b:goto L658d3b;
case 0x658d3e:c.instructions+=2;goto B658d3e;
case 0x658d40:c.instructions+=1;goto B658d40;
case 0x658d45:goto L658d45;
case 0x658d4a:goto L658d4a;
case 0x658d4d:c.instructions+=3;goto B658d4d;
case 0x658d4f:c.instructions+=2;goto B658d4f;
case 0x658d52:c.instructions+=1;goto B658d52;
case 0x658d57:goto L658d57;
case 0x658d5c:goto L658d5c;
case 0x658d5f:c.instructions+=3;goto B658d5f;
case 0x658d61:c.instructions+=2;goto B658d61;
case 0x658d64:c.instructions+=1;goto B658d64;
case 0x658d69:goto L658d69;
case 0x658d6e:goto L658d6e;
case 0x658d70:c.instructions+=3;goto B658d70;
case 0x658d71:c.instructions+=2;goto B658d71;
case 0x658d74:c.instructions+=1;goto B658d74;
case 0x658d76:goto L658d76;
case 0x658d78:c.instructions+=1;goto B658d78;
case 0x658d7d:goto L658d7d;
case 0x658d82:goto L658d82;
case 0x658d84:c.instructions+=4;goto B658d84;
case 0x658d85:c.instructions+=3;goto B658d85;
case 0x658d88:c.instructions+=2;goto B658d88;
case 0x658d8a:c.instructions+=1;goto B658d8a;
case 0x658d8c:goto L658d8c;
case 0x658d8e:c.instructions+=4;goto B658d8e;
case 0x658d8f:c.instructions+=3;goto B658d8f;
case 0x658d92:c.instructions+=2;goto B658d92;
case 0x658d94:c.instructions+=1;goto B658d94;
case 0x658d96:goto L658d96;
case 0x658d98:c.instructions+=4;goto B658d98;
case 0x658d99:c.instructions+=3;goto B658d99;
case 0x658d9c:c.instructions+=2;goto B658d9c;
case 0x658d9e:c.instructions+=1;goto B658d9e;
case 0x658da0:goto L658da0;
case 0x658da2:c.instructions+=4;goto B658da2;
case 0x658da3:c.instructions+=3;goto B658da3;
case 0x658da6:c.instructions+=2;goto B658da6;
case 0x658da8:c.instructions+=1;goto B658da8;
case 0x658daa:goto L658daa;
case 0x658dac:c.instructions+=4;goto B658dac;
case 0x658dad:c.instructions+=3;goto B658dad;
case 0x658db0:c.instructions+=2;goto B658db0;
case 0x658db2:c.instructions+=1;goto B658db2;
case 0x658db4:goto L658db4;
case 0x658db6:c.instructions+=4;goto B658db6;
case 0x658db7:c.instructions+=3;goto B658db7;
case 0x658dba:c.instructions+=2;goto B658dba;
case 0x658dbc:c.instructions+=1;goto B658dbc;
case 0x658dbe:goto L658dbe;
case 0x658dc0:c.instructions+=2;goto B658dc0;
case 0x658dc1:c.instructions+=1;goto B658dc1;
case 0x658dc6:goto L658dc6;
case 0x658dc8:c.instructions+=4;goto B658dc8;
case 0x658dcb:c.instructions+=3;goto B658dcb;
case 0x658dce:c.instructions+=2;goto B658dce;
case 0x658dd0:c.instructions+=1;goto B658dd0;
case 0x658dd2:goto L658dd2;
case 0x658dd4:c.instructions+=4;goto B658dd4;
case 0x658dd7:c.instructions+=3;goto B658dd7;
case 0x658dda:c.instructions+=2;goto B658dda;
case 0x658ddc:c.instructions+=1;goto B658ddc;
case 0x658dde:goto L658dde;
case 0x658de0:c.instructions+=4;goto B658de0;
case 0x658de3:c.instructions+=3;goto B658de3;
case 0x658de6:c.instructions+=2;goto B658de6;
case 0x658de8:c.instructions+=1;goto B658de8;
case 0x658dea:goto L658dea;
case 0x658dec:c.instructions+=4;goto B658dec;
case 0x658def:c.instructions+=3;goto B658def;
case 0x658df2:c.instructions+=2;goto B658df2;
case 0x658df4:c.instructions+=1;goto B658df4;
case 0x658df6:goto L658df6;
case 0x658df8:c.instructions+=4;goto B658df8;
case 0x658dfb:c.instructions+=3;goto B658dfb;
case 0x658dfe:c.instructions+=2;goto B658dfe;
case 0x658e00:c.instructions+=1;goto B658e00;
case 0x658e05:goto L658e05;
case 0x658e07:c.instructions+=4;goto B658e07;
case 0x658e0a:c.instructions+=3;goto B658e0a;
case 0x658e0d:c.instructions+=2;goto B658e0d;
case 0x658e0f:c.instructions+=1;goto B658e0f;
case 0x658e14:goto L658e14;
case 0x658e16:c.instructions+=4;goto B658e16;
case 0x658e19:c.instructions+=3;goto B658e19;
case 0x658e1c:c.instructions+=2;goto B658e1c;
case 0x658e1e:c.instructions+=1;goto B658e1e;
case 0x658e23:goto L658e23;
case 0x658e25:c.instructions+=4;goto B658e25;
case 0x658e28:c.instructions+=3;goto B658e28;
case 0x658e2b:c.instructions+=2;goto B658e2b;
case 0x658e2d:c.instructions+=1;goto B658e2d;
case 0x658e32:goto L658e32;
case 0x658e34:c.instructions+=4;goto B658e34;
case 0x658e37:c.instructions+=3;goto B658e37;
case 0x658e3a:c.instructions+=2;goto B658e3a;
case 0x658e3c:c.instructions+=1;goto B658e3c;
case 0x658e41:goto L658e41;
case 0x658e43:c.instructions+=4;goto B658e43;
case 0x658e46:c.instructions+=3;goto B658e46;
case 0x658e49:c.instructions+=2;goto B658e49;
case 0x658e4b:c.instructions+=1;goto B658e4b;
case 0x658e50:goto L658e50;
case 0x658e52:c.instructions+=4;goto B658e52;
case 0x658e55:c.instructions+=3;goto B658e55;
case 0x658e58:c.instructions+=2;goto B658e58;
case 0x658e5a:c.instructions+=1;goto B658e5a;
case 0x658e5f:goto L658e5f;
case 0x658e61:c.instructions+=4;goto B658e61;
case 0x658e64:c.instructions+=3;goto B658e64;
case 0x658e67:c.instructions+=2;goto B658e67;
case 0x658e69:c.instructions+=1;goto B658e69;
case 0x658e6e:goto L658e6e;
case 0x658e70:c.instructions+=4;goto B658e70;
case 0x658e73:c.instructions+=3;goto B658e73;
case 0x658e76:c.instructions+=2;goto B658e76;
case 0x658e78:c.instructions+=1;goto B658e78;
case 0x658e7d:goto L658e7d;
case 0x658e80:c.instructions+=4;goto B658e80;
case 0x658e82:c.instructions+=3;goto B658e82;
case 0x658e85:c.instructions+=2;goto B658e85;
case 0x658e88:c.instructions+=1;goto B658e88;
case 0x658e8d:goto L658e8d;
case 0x658e92:goto L658e92;
case 0x658e94:c.instructions+=4;goto B658e94;
case 0x658e97:c.instructions+=3;goto B658e97;
case 0x658e9a:c.instructions+=2;goto B658e9a;
case 0x658e9c:c.instructions+=1;goto B658e9c;
case 0x658ea1:goto L658ea1;
case 0x658ea3:c.instructions+=4;goto B658ea3;
case 0x658ea6:c.instructions+=3;goto B658ea6;
case 0x658ea9:c.instructions+=2;goto B658ea9;
case 0x658eab:c.instructions+=1;goto B658eab;
case 0x658eb0:goto L658eb0;
case 0x658eb2:c.instructions+=4;goto B658eb2;
case 0x658eb5:c.instructions+=3;goto B658eb5;
case 0x658eb8:c.instructions+=2;goto B658eb8;
case 0x658eba:c.instructions+=1;goto B658eba;
case 0x658ebf:goto L658ebf;
case 0x658ec1:c.instructions+=4;goto B658ec1;
case 0x658ec4:c.instructions+=3;goto B658ec4;
case 0x658ec7:c.instructions+=2;goto B658ec7;
case 0x658ec9:c.instructions+=1;goto B658ec9;
case 0x658ece:goto L658ece;
case 0x658ed0:c.instructions+=4;goto B658ed0;
case 0x658ed3:c.instructions+=3;goto B658ed3;
case 0x658ed6:c.instructions+=2;goto B658ed6;
case 0x658ed8:c.instructions+=1;goto B658ed8;
case 0x658edd:goto L658edd;
case 0x658edf:c.instructions+=4;goto B658edf;
case 0x658ee2:c.instructions+=3;goto B658ee2;
case 0x658ee5:c.instructions+=2;goto B658ee5;
case 0x658ee7:c.instructions+=1;goto B658ee7;
case 0x658eec:goto L658eec;
case 0x658eee:c.instructions+=1;goto B658eee;
case 0x658ef3:goto L658ef3;
case 0x658ef5:c.instructions+=1;goto B658ef5;
case 0x658efb:goto L658efb;
case 0x658f00:c.instructions+=1;goto B658f00;
case 0x658f05:goto L658f05;
case 0x658f07:c.instructions+=1;goto B658f07;
case 0x658f0c:goto L658f0c;
case 0x658f0e:c.instructions+=1;goto B658f0e;
case 0x658f10:goto L658f10;
case 0x658f15:c.instructions+=4;goto B658f15;
case 0x658f16:c.instructions+=3;goto B658f16;
case 0x658f19:c.instructions+=2;goto B658f19;
case 0x658f1b:c.instructions+=1;goto B658f1b;
case 0x658f20:goto L658f20;
case 0x658f22:c.instructions+=1;goto B658f22;
case 0x658f24:goto L658f24;
case 0x658f26:goto L658f26;
case 0x658f27:c.instructions+=2;goto B658f27;
case 0x658f29:c.instructions+=1;goto B658f29;
case 0x658f2e:goto L658f2e;
case 0x658f30:c.instructions+=1;goto B658f30;
case 0x658f36:goto L658f36;
case 0x658f37:c.instructions+=1;goto B658f37;
case 0x658f3c:goto L658f3c;
case 0x658f3e:c.instructions+=1;goto B658f3e;
case 0x658f43:goto L658f43;
case 0x658f45:c.instructions+=1;goto B658f45;
case 0x658f4b:goto L658f4b;
case 0x658f50:c.instructions+=1;goto B658f50;
case 0x658f55:goto L658f55;
case 0x658f58:c.instructions+=2;goto B658f58;
case 0x658f5a:c.instructions+=1;goto B658f5a;
case 0x658f5c:goto L658f5c;
case 0x658f60:c.instructions+=1;goto B658f60;
case 0x658f62:goto L658f62;
case 0x658f65:c.instructions+=2;goto B658f65;
case 0x658f68:c.instructions+=1;goto B658f68;
case 0x658f6a:goto L658f6a;
case 0x658f6d:goto L658f6d;
case 0x658f72:c.instructions+=5;goto B658f72;
case 0x658f77:c.instructions+=4;goto B658f77;
case 0x658f7a:c.instructions+=3;goto B658f7a;
case 0x658f7b:c.instructions+=2;goto B658f7b;
case 0x658f7c:c.instructions+=1;goto B658f7c;
case 0x658f81:goto L658f81;
case 0x658f84:goto L658f84;
case 0x658f85:c.instructions+=4;goto B658f85;
case 0x658f88:c.instructions+=3;goto B658f88;
case 0x658f8b:c.instructions+=2;goto B658f8b;
case 0x658f8d:c.instructions+=1;goto B658f8d;
case 0x658f92:goto L658f92;
case 0x658f95:c.instructions+=2;goto B658f95;
case 0x658f98:c.instructions+=1;goto B658f98;
case 0x658f9d:goto L658f9d;
case 0x658fa0:c.instructions+=4;goto B658fa0;
case 0x658fa3:c.instructions+=3;goto B658fa3;
case 0x658fa5:c.instructions+=2;goto B658fa5;
case 0x658fa8:c.instructions+=1;goto B658fa8;
case 0x658fad:goto L658fad;
case 0x658fb0:c.instructions+=3;goto B658fb0;
case 0x658fb2:c.instructions+=2;goto B658fb2;
case 0x658fb5:c.instructions+=1;goto B658fb5;
case 0x658fba:goto L658fba;
case 0x658fbf:goto L658fbf;
case 0x658fc2:c.instructions+=3;goto B658fc2;
case 0x658fc5:c.instructions+=2;goto B658fc5;
case 0x658fc8:c.instructions+=1;goto B658fc8;
case 0x658fcd:goto L658fcd;
case 0x658fd0:c.instructions+=3;goto B658fd0;
case 0x658fd2:c.instructions+=2;goto B658fd2;
case 0x658fd5:c.instructions+=1;goto B658fd5;
case 0x658fda:goto L658fda;
case 0x658fdf:goto L658fdf;
case 0x658fe1:c.instructions+=1;goto B658fe1;
case 0x658fe6:goto L658fe6;
case 0x658fe8:c.instructions+=1;goto B658fe8;
case 0x658fee:goto L658fee;
case 0x658ff1:c.instructions+=3;goto B658ff1;
case 0x658ff2:c.instructions+=2;goto B658ff2;
case 0x658ff4:c.instructions+=1;goto B658ff4;
case 0x658ff9:goto L658ff9;
case 0x658ffb:c.instructions+=1;goto B658ffb;
default:missing_instruction(c.pc);}
B658000:L658000:{c.instructions+=6;NFSU2_TR(0x658000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658001:{NFSU2_TR(0x658001);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B658003:{NFSU2_TR(0x658003);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658005:{NFSU2_TR(0x658005);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658006:{NFSU2_TR(0x658006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658009:{NFSU2_TR(0x658009);
if(r1(R+518)){{goto L658041;}}
}
B65800b:L65800b:{c.instructions+=2;NFSU2_TR(0x65800b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65800e:{NFSU2_TR(0x65800e);
if(r1(R+518)){{goto L658041;}}
}
B658010:L658010:{c.instructions+=7;NFSU2_TR(0x658010);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B658013:{NFSU2_TR(0x658013);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B658016:{NFSU2_TR(0x658016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658017:{NFSU2_TR(0x658017);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658019:{NFSU2_TR(0x658019);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65801c:{NFSU2_TR(0x65801c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65801f:{NFSU2_TR(0x65801f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658024ull));
TAIL_STATIC(0x672277u,672);
}
B658024:L658024:{c.instructions+=2;NFSU2_TR(0x658024);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B658026:{NFSU2_TR(0x658026);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L65804a;}}
}
B658028:L658028:{c.instructions+=6;NFSU2_TR(0x658028);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65802b:{NFSU2_TR(0x65802b);
u8 U[4];
w4(U+0,u32(0x7b4ee4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658030:{NFSU2_TR(0x658030);
u8 U[4];
w4(U+0,u32(0xbe1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658035:{NFSU2_TR(0x658035);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658036:{NFSU2_TR(0x658036);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658039:{NFSU2_TR(0x658039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65803eull));
TAIL_STATIC(0x64f52au,64f);
}
B65803e:L65803e:{c.instructions+=1;NFSU2_TR(0x65803e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B658041:L658041:{c.instructions+=1;NFSU2_TR(0x658041);
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
B658043:L658043:{c.instructions+=5;NFSU2_TR(0x658043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B658044:{NFSU2_TR(0x658044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B658045:{NFSU2_TR(0x658045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B658046:{NFSU2_TR(0x658046);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B658047:{NFSU2_TR(0x658047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65804a:L65804a:{c.instructions+=5;NFSU2_TR(0x65804a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65804d:{NFSU2_TR(0x65804d);
w4(R+4,u32(0xffff0000ull));
}
B658052:{NFSU2_TR(0x658052);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B658054:{NFSU2_TR(0x658054);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658059:{NFSU2_TR(0x658059);
if(r1(R+518)){{goto L65806d;}}
}
B65805b:L65805b:{c.instructions+=2;NFSU2_TR(0x65805b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65805d:{NFSU2_TR(0x65805d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65807c;}}
}
B65805f:L65805f:{c.instructions+=5;NFSU2_TR(0x65805f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B658061:{NFSU2_TR(0x658061);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B658064:{NFSU2_TR(0x658064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B658067:{NFSU2_TR(0x658067);
u8 U[12];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65806b:{NFSU2_TR(0x65806b);
{goto L658079;}
}
B65806d:L65806d:{c.instructions+=4;NFSU2_TR(0x65806d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65806f:{NFSU2_TR(0x65806f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B658072:{NFSU2_TR(0x658072);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B658075:{NFSU2_TR(0x658075);
u8 U[12];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B658079:L658079:{c.instructions+=1;NFSU2_TR(0x658079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65807c:L65807c:{c.instructions+=2;NFSU2_TR(0x65807c);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65807e:{NFSU2_TR(0x65807e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658083ull));
TAIL_STATIC(0x645362u,645);
}
B658083:L658083:{c.instructions+=2;NFSU2_TR(0x658083);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658085:{NFSU2_TR(0x658085);
if(r1(R+518)){{goto L65809d;}}
}
B658087:L658087:{c.instructions+=8;NFSU2_TR(0x658087);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658088:{NFSU2_TR(0x658088);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65808a:{NFSU2_TR(0x65808a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65808b:{NFSU2_TR(0x65808b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65808c:{NFSU2_TR(0x65808c);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65808e:{NFSU2_TR(0x65808e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65808f:{NFSU2_TR(0x65808f);
__builtin_memmove((R+4),(R+0),4);
}
B658091:{NFSU2_TR(0x658091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658096ull));
TAIL_STATIC(0x672d7bu,672);
}
B658096:L658096:{c.instructions+=3;NFSU2_TR(0x658096);
__builtin_memmove((R+12),(R+0),4);
}
B658098:{NFSU2_TR(0x658098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65809b:{NFSU2_TR(0x65809b);
{goto L6580a2;}
}
B65809d:L65809d:{c.instructions+=2;NFSU2_TR(0x65809d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6580a0:{NFSU2_TR(0x6580a0);
__builtin_memmove((R+12),(R+24),4);
}
B6580a2:L6580a2:{c.instructions+=2;NFSU2_TR(0x6580a2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6580a4:{NFSU2_TR(0x6580a4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B6580a6:L6580a6:{c.instructions+=2;NFSU2_TR(0x6580a6);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6580a8:{NFSU2_TR(0x6580a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6580adull));
TAIL_STATIC(0x645362u,645);
}
B6580ad:L6580ad:{c.instructions+=3;NFSU2_TR(0x6580ad);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6580af:{NFSU2_TR(0x6580af);
w4(R+28,u32(0x200ull));
}
B6580b4:{NFSU2_TR(0x6580b4);
if(r1(R+518)){{goto L6580c9;}}
}
B6580b6:L6580b6:{c.instructions+=7;NFSU2_TR(0x6580b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6580b7:{NFSU2_TR(0x6580b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6580b9:{NFSU2_TR(0x6580b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6580bb:{NFSU2_TR(0x6580bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6580be:{NFSU2_TR(0x6580be);
__builtin_memmove((R+4),(R+0),4);
}
B6580c0:{NFSU2_TR(0x6580c0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6580c2:{NFSU2_TR(0x6580c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6580c7ull));
TAIL_STATIC(0x672a51u,672);
}
B6580c7:L6580c7:{c.instructions+=1;NFSU2_TR(0x6580c7);
{goto L6580cb;}
}
B6580c9:L6580c9:{c.instructions+=1;NFSU2_TR(0x6580c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6580cb:L6580cb:{c.instructions+=3;NFSU2_TR(0x6580cb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6580cd:{NFSU2_TR(0x6580cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6580d0:{NFSU2_TR(0x6580d0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B6580d6:L6580d6:{c.instructions+=2;NFSU2_TR(0x6580d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6580d9:{NFSU2_TR(0x6580d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6580deull));
TAIL_STATIC(0x672440u,672);
}
B6580de:L6580de:{c.instructions+=3;NFSU2_TR(0x6580de);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6580e0:{NFSU2_TR(0x6580e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6580e3:{NFSU2_TR(0x6580e3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B6580e9:L6580e9:{c.instructions+=5;NFSU2_TR(0x6580e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6580ec:{NFSU2_TR(0x6580ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6580ee:{NFSU2_TR(0x6580ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6580f1:{NFSU2_TR(0x6580f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6580f4:{NFSU2_TR(0x6580f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6580f9ull));
TAIL_STATIC(0x657bdcu,657);
}
B6580f9:L6580f9:{c.instructions+=3;NFSU2_TR(0x6580f9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6580fb:{NFSU2_TR(0x6580fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6580fe:{NFSU2_TR(0x6580fe);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B658104:L658104:{c.instructions+=2;NFSU2_TR(0x658104);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658106:{NFSU2_TR(0x658106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65810bull));
TAIL_STATIC(0x645362u,645);
}
B65810b:L65810b:{c.instructions+=2;NFSU2_TR(0x65810b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65810d:{NFSU2_TR(0x65810d);
if(r1(R+518)){{goto L658123;}}
}
B65810f:L65810f:{c.instructions+=8;NFSU2_TR(0x65810f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658112:{NFSU2_TR(0x658112);
__builtin_memmove((R+4),(R+0),4);
}
B658114:{NFSU2_TR(0x658114);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658116:{NFSU2_TR(0x658116);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658117:{NFSU2_TR(0x658117);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658118:{NFSU2_TR(0x658118);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658119:{NFSU2_TR(0x658119);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65811a:{NFSU2_TR(0x65811a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65811full));
TAIL_STATIC(0x672d7bu,672);
}
B65811f:L65811f:{c.instructions+=2;NFSU2_TR(0x65811f);
__builtin_memmove((R+12),(R+0),4);
}
B658121:{NFSU2_TR(0x658121);
{goto L658125;}
}
B658123:L658123:{c.instructions+=1;NFSU2_TR(0x658123);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B658125:L658125:{c.instructions+=2;NFSU2_TR(0x658125);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658127:{NFSU2_TR(0x658127);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B65812d:L65812d:{c.instructions+=2;NFSU2_TR(0x65812d);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65812f:{NFSU2_TR(0x65812f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658134ull));
TAIL_STATIC(0x645362u,645);
}
B658134:L658134:{c.instructions+=2;NFSU2_TR(0x658134);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658136:{NFSU2_TR(0x658136);
if(r1(R+518)){{goto L65814b;}}
}
B658138:L658138:{c.instructions+=7;NFSU2_TR(0x658138);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658139:{NFSU2_TR(0x658139);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65813b:{NFSU2_TR(0x65813b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65813d:{NFSU2_TR(0x65813d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658140:{NFSU2_TR(0x658140);
__builtin_memmove((R+4),(R+0),4);
}
B658142:{NFSU2_TR(0x658142);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658144:{NFSU2_TR(0x658144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658149ull));
TAIL_STATIC(0x672a51u,672);
}
B658149:L658149:{c.instructions+=1;NFSU2_TR(0x658149);
{goto L65814d;}
}
B65814b:L65814b:{c.instructions+=1;NFSU2_TR(0x65814b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65814d:L65814d:{c.instructions+=3;NFSU2_TR(0x65814d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65814f:{NFSU2_TR(0x65814f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658152:{NFSU2_TR(0x658152);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B658158:L658158:{c.instructions+=2;NFSU2_TR(0x658158);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65815a:{NFSU2_TR(0x65815a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65815full));
TAIL_STATIC(0x645362u,645);
}
B65815f:L65815f:{c.instructions+=2;NFSU2_TR(0x65815f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658161:{NFSU2_TR(0x658161);
if(r1(R+518)){{goto L658173;}}
}
B658163:L658163:{c.instructions+=5;NFSU2_TR(0x658163);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658168:{NFSU2_TR(0x658168);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658169:{NFSU2_TR(0x658169);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65816a:{NFSU2_TR(0x65816a);
__builtin_memmove((R+4),(R+0),4);
}
B65816c:{NFSU2_TR(0x65816c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658171ull));
TAIL_STATIC(0x672498u,672);
}
B658171:L658171:{c.instructions+=1;NFSU2_TR(0x658171);
{goto L658175;}
}
B658173:L658173:{c.instructions+=1;NFSU2_TR(0x658173);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B658175:L658175:{c.instructions+=3;NFSU2_TR(0x658175);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658177:{NFSU2_TR(0x658177);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65817a:{NFSU2_TR(0x65817a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B658180:L658180:{c.instructions+=2;NFSU2_TR(0x658180);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658182:{NFSU2_TR(0x658182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658187ull));
TAIL_STATIC(0x645362u,645);
}
B658187:L658187:{c.instructions+=2;NFSU2_TR(0x658187);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658189:{NFSU2_TR(0x658189);
if(r1(R+518)){{goto L65819c;}}
}
B65818b:L65818b:{c.instructions+=5;NFSU2_TR(0x65818b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65818e:{NFSU2_TR(0x65818e);
__builtin_memmove((R+4),(R+0),4);
}
B658190:{NFSU2_TR(0x658190);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658193:{NFSU2_TR(0x658193);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658195:{NFSU2_TR(0x658195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65819aull));
TAIL_STATIC(0x672ec8u,672);
}
B65819a:L65819a:{c.instructions+=1;NFSU2_TR(0x65819a);
{goto L65819e;}
}
B65819c:L65819c:{c.instructions+=1;NFSU2_TR(0x65819c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65819e:L65819e:{c.instructions+=4;NFSU2_TR(0x65819e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6581a0:{NFSU2_TR(0x6581a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6581a3:{NFSU2_TR(0x6581a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6581a6:{NFSU2_TR(0x6581a6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658041u);}goto L658041;}}
}
B6581ac:L6581ac:{c.instructions+=3;NFSU2_TR(0x6581ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6581af:{NFSU2_TR(0x6581af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6581b0:{NFSU2_TR(0x6581b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6581b5ull));
TAIL_STATIC(0x650571u,650);
}
B6581b5:L6581b5:{c.instructions+=2;NFSU2_TR(0x6581b5);
__builtin_memmove((R+0),(R+12),4);
}
B6581b7:{NFSU2_TR(0x6581b7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658043u);}goto L658043;}
}
B6581bc:L6581bc:{c.instructions+=13;NFSU2_TR(0x6581bc);
__builtin_memmove((R+28),(R+28),4);
}
B6581be:{NFSU2_TR(0x6581be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6581bf:{NFSU2_TR(0x6581bf);
__builtin_memmove((R+20),(R+16),4);
}
B6581c1:{NFSU2_TR(0x6581c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B6581c4:{NFSU2_TR(0x6581c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6581c5:{NFSU2_TR(0x6581c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6581c6:{NFSU2_TR(0x6581c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6581c7:{NFSU2_TR(0x6581c7);
__builtin_memmove((R+28),(R+4),4);
}
B6581c9:{NFSU2_TR(0x6581c9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6581cb:{NFSU2_TR(0x6581cb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6581cd:{NFSU2_TR(0x6581cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
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
B6581d0:{NFSU2_TR(0x6581d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6581d3:{NFSU2_TR(0x6581d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6584a6;}}
}
B6581d9:L6581d9:{c.instructions+=2;NFSU2_TR(0x6581d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6581dc:{NFSU2_TR(0x6581dc);
{goto L6581ff;}
}
B6581de:L6581de:{c.instructions+=4;NFSU2_TR(0x6581de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6581e1:{NFSU2_TR(0x6581e1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6581e2:{NFSU2_TR(0x6581e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6581e4:{NFSU2_TR(0x6581e4);
if(r1(R+518)){{goto L658218;}}
}
B6581e6:L6581e6:{c.instructions+=8;NFSU2_TR(0x6581e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6581e9:{NFSU2_TR(0x6581e9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6581ed:{NFSU2_TR(0x6581ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6581f0:{NFSU2_TR(0x6581f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6581f3:{NFSU2_TR(0x6581f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6581f6:{NFSU2_TR(0x6581f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6581f9:{NFSU2_TR(0x6581f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6581fc:{NFSU2_TR(0x6581fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6581ff:L6581ff:{c.instructions+=2;NFSU2_TR(0x6581ff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658201:{NFSU2_TR(0x658201);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6581deu);}goto L6581de;}}
}
B658203:L658203:{c.instructions+=3;NFSU2_TR(0x658203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658206:{NFSU2_TR(0x658206);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x128ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x128ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x128ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65820b:{NFSU2_TR(0x65820b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x65901du,659);}
}
B658211:L658211:{c.instructions+=1;NFSU2_TR(0x658211);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x65906eull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B658218:L658218:{c.instructions+=2;NFSU2_TR(0x658218);
u8 U[4];
w4(U+0,u32(0x7abae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65821d:{NFSU2_TR(0x65821d);
TAIL_STATIC(0x65905eu,659);
}
B658222:L658222:{c.instructions+=2;NFSU2_TR(0x658222);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658224:{NFSU2_TR(0x658224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658229ull));
TAIL_STATIC(0x645362u,645);
}
B658229:L658229:{c.instructions+=2;NFSU2_TR(0x658229);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65822b:{NFSU2_TR(0x65822b);
if(r1(R+518)){{goto L65823d;}}
}
B65822d:L65822d:{c.instructions+=4;NFSU2_TR(0x65822d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65822e:{NFSU2_TR(0x65822e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65822f:{NFSU2_TR(0x65822f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658230:{NFSU2_TR(0x658230);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658231:L658231:{c.instructions+=2;NFSU2_TR(0x658231);
__builtin_memmove((R+4),(R+0),4);
}
B658233:{NFSU2_TR(0x658233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658238ull));
TAIL_STATIC(0x67270fu,672);
}
B658238:L658238:{c.instructions+=1;NFSU2_TR(0x658238);
{goto L658ff9;}
}
B65823d:L65823d:{c.instructions+=1;NFSU2_TR(0x65823d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65823f:L65823f:{c.instructions+=1;NFSU2_TR(0x65823f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658240:L658240:{c.instructions+=2;NFSU2_TR(0x658240);
__builtin_memmove((R+4),(R+28),4);
}
B658242:{NFSU2_TR(0x658242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658247ull));
TAIL_STATIC(0x64f625u,64f);
}
B658247:L658247:{c.instructions+=1;NFSU2_TR(0x658247);
{goto L658482;}
}
B65824c:L65824c:{c.instructions+=2;NFSU2_TR(0x65824c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65824e:{NFSU2_TR(0x65824e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658253ull));
TAIL_STATIC(0x645362u,645);
}
B658253:L658253:{c.instructions+=2;NFSU2_TR(0x658253);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658255:{NFSU2_TR(0x658255);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658257:L658257:{c.instructions+=5;NFSU2_TR(0x658257);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65825a:{NFSU2_TR(0x65825a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65825d:{NFSU2_TR(0x65825d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658260:{NFSU2_TR(0x658260);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658263:{NFSU2_TR(0x658263);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658231u);}goto L658231;}
}
B658265:L658265:{c.instructions+=2;NFSU2_TR(0x658265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658268:{NFSU2_TR(0x658268);
{goto L658482;}
}
B65826d:L65826d:{c.instructions+=1;NFSU2_TR(0x65826d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658270:L658270:{c.instructions+=1;NFSU2_TR(0x658270);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658273:L658273:{c.instructions+=1;NFSU2_TR(0x658273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658278ull));
TAIL_STATIC(0x672459u,672);
}
B658278:L658278:{c.instructions+=2;NFSU2_TR(0x658278);
__builtin_memmove((R+24),(R+0),4);
}
B65827a:{NFSU2_TR(0x65827a);
{goto L658482;}
}
B65827f:L65827f:{c.instructions+=5;NFSU2_TR(0x65827f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658282:{NFSU2_TR(0x658282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658285:{NFSU2_TR(0x658285);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658286:{NFSU2_TR(0x658286);
__builtin_memmove((R+4),(R+28),4);
}
B658288:{NFSU2_TR(0x658288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65828dull));
TAIL_STATIC(0x64f9c3u,64f);
}
B65828d:L65828d:{c.instructions+=1;NFSU2_TR(0x65828d);
{goto L658482;}
}
B658292:L658292:{c.instructions+=2;NFSU2_TR(0x658292);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658294:{NFSU2_TR(0x658294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658299ull));
TAIL_STATIC(0x645362u,645);
}
B658299:L658299:{c.instructions+=2;NFSU2_TR(0x658299);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65829b:{NFSU2_TR(0x65829b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65829d:L65829d:{c.instructions+=3;NFSU2_TR(0x65829d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65829e:{NFSU2_TR(0x65829e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65829f:{NFSU2_TR(0x65829f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582a1:L6582a1:{c.instructions+=2;NFSU2_TR(0x6582a1);
__builtin_memmove((R+4),(R+0),4);
}
B6582a3:{NFSU2_TR(0x6582a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6582a8ull));
TAIL_STATIC(0x672942u,672);
}
B6582a8:L6582a8:{c.instructions+=1;NFSU2_TR(0x6582a8);
{goto L658ff9;}
}
B6582ad:L6582ad:{c.instructions+=2;NFSU2_TR(0x6582ad);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582af:{NFSU2_TR(0x6582af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6582b4ull));
TAIL_STATIC(0x645362u,645);
}
B6582b4:L6582b4:{c.instructions+=2;NFSU2_TR(0x6582b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6582b6:{NFSU2_TR(0x6582b6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6582b8:L6582b8:{c.instructions+=4;NFSU2_TR(0x6582b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582b9:{NFSU2_TR(0x6582b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582ba:{NFSU2_TR(0x6582ba);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582bc:{NFSU2_TR(0x6582bc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B6582be:L6582be:{c.instructions+=2;NFSU2_TR(0x6582be);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582c0:{NFSU2_TR(0x6582c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6582c5ull));
TAIL_STATIC(0x645362u,645);
}
B6582c5:L6582c5:{c.instructions+=2;NFSU2_TR(0x6582c5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6582c7:{NFSU2_TR(0x6582c7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6582cd:L6582cd:{c.instructions+=4;NFSU2_TR(0x6582cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582ce:{NFSU2_TR(0x6582ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582cf:{NFSU2_TR(0x6582cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582d1:{NFSU2_TR(0x6582d1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B6582d3:L6582d3:{c.instructions+=2;NFSU2_TR(0x6582d3);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582d5:{NFSU2_TR(0x6582d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6582daull));
TAIL_STATIC(0x645362u,645);
}
B6582da:L6582da:{c.instructions+=2;NFSU2_TR(0x6582da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6582dc:{NFSU2_TR(0x6582dc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6582e2:L6582e2:{c.instructions+=4;NFSU2_TR(0x6582e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582e3:{NFSU2_TR(0x6582e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582e4:{NFSU2_TR(0x6582e4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582e6:{NFSU2_TR(0x6582e6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B6582e8:L6582e8:{c.instructions+=2;NFSU2_TR(0x6582e8);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582ea:{NFSU2_TR(0x6582ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6582efull));
TAIL_STATIC(0x645362u,645);
}
B6582ef:L6582ef:{c.instructions+=2;NFSU2_TR(0x6582ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6582f1:{NFSU2_TR(0x6582f1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6582f7:L6582f7:{c.instructions+=4;NFSU2_TR(0x6582f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582f8:{NFSU2_TR(0x6582f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582f9:{NFSU2_TR(0x6582f9);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6582fe:{NFSU2_TR(0x6582fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658300:L658300:{c.instructions+=2;NFSU2_TR(0x658300);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658302:{NFSU2_TR(0x658302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658307ull));
TAIL_STATIC(0x645362u,645);
}
B658307:L658307:{c.instructions+=2;NFSU2_TR(0x658307);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658309:{NFSU2_TR(0x658309);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65830f:L65830f:{c.instructions+=4;NFSU2_TR(0x65830f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658310:{NFSU2_TR(0x658310);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658311:{NFSU2_TR(0x658311);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658313:{NFSU2_TR(0x658313);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658315:L658315:{c.instructions+=2;NFSU2_TR(0x658315);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658317:{NFSU2_TR(0x658317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65831cull));
TAIL_STATIC(0x645362u,645);
}
B65831c:L65831c:{c.instructions+=2;NFSU2_TR(0x65831c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65831e:{NFSU2_TR(0x65831e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658324:L658324:{c.instructions+=4;NFSU2_TR(0x658324);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658325:{NFSU2_TR(0x658325);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658328:{NFSU2_TR(0x658328);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658329:{NFSU2_TR(0x658329);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B65832e:L65832e:{c.instructions+=2;NFSU2_TR(0x65832e);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658330:{NFSU2_TR(0x658330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658335ull));
TAIL_STATIC(0x645362u,645);
}
B658335:L658335:{c.instructions+=2;NFSU2_TR(0x658335);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658337:{NFSU2_TR(0x658337);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65833d:L65833d:{c.instructions+=4;NFSU2_TR(0x65833d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65833e:{NFSU2_TR(0x65833e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65833f:{NFSU2_TR(0x65833f);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658344:{NFSU2_TR(0x658344);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658349:L658349:{c.instructions+=2;NFSU2_TR(0x658349);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65834b:{NFSU2_TR(0x65834b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658350ull));
TAIL_STATIC(0x645362u,645);
}
B658350:L658350:{c.instructions+=2;NFSU2_TR(0x658350);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658352:{NFSU2_TR(0x658352);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658358:L658358:{c.instructions+=4;NFSU2_TR(0x658358);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658359:{NFSU2_TR(0x658359);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65835a:{NFSU2_TR(0x65835a);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65835f:{NFSU2_TR(0x65835f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658364:L658364:{c.instructions+=2;NFSU2_TR(0x658364);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658366:{NFSU2_TR(0x658366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65836bull));
TAIL_STATIC(0x645362u,645);
}
B65836b:L65836b:{c.instructions+=2;NFSU2_TR(0x65836b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65836d:{NFSU2_TR(0x65836d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658373:L658373:{c.instructions+=4;NFSU2_TR(0x658373);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658374:{NFSU2_TR(0x658374);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658375:{NFSU2_TR(0x658375);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65837a:{NFSU2_TR(0x65837a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B65837f:L65837f:{c.instructions+=2;NFSU2_TR(0x65837f);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658381:{NFSU2_TR(0x658381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658386ull));
TAIL_STATIC(0x645362u,645);
}
B658386:L658386:{c.instructions+=2;NFSU2_TR(0x658386);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658388:{NFSU2_TR(0x658388);
if(r1(R+518)){{goto L658394;}}
}
B65838a:L65838a:{c.instructions+=4;NFSU2_TR(0x65838a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65838d:{NFSU2_TR(0x65838d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65838e:{NFSU2_TR(0x65838e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65838f:{NFSU2_TR(0x65838f);
{goto L6589c5;}
}
B658394:L658394:{c.instructions+=1;NFSU2_TR(0x658394);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B658396:L658396:{c.instructions+=3;NFSU2_TR(0x658396);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658397:{NFSU2_TR(0x658397);
__builtin_memmove((R+4),(R+28),4);
}
B658399:{NFSU2_TR(0x658399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65839eull));
TAIL_STATIC(0x64f625u,64f);
}
B65839e:L65839e:{c.instructions+=1;NFSU2_TR(0x65839e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65839f:L65839f:{c.instructions+=2;NFSU2_TR(0x65839f);
__builtin_memmove((R+4),(R+28),4);
}
B6583a1:{NFSU2_TR(0x6583a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6583a6ull));
TAIL_STATIC(0x652c77u,652);
}
B6583a6:L6583a6:{c.instructions+=1;NFSU2_TR(0x6583a6);
{goto L658482;}
}
B6583ab:L6583ab:{c.instructions+=4;NFSU2_TR(0x6583ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6583ae:{NFSU2_TR(0x6583ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6583b1:{NFSU2_TR(0x6583b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6583b4:{NFSU2_TR(0x6583b4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65839eu);}goto L65839e;}
}
B6583b6:L6583b6:{c.instructions+=7;NFSU2_TR(0x6583b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6583b9:{NFSU2_TR(0x6583b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6583bc:{NFSU2_TR(0x6583bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6583bf:{NFSU2_TR(0x6583bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6583c2:{NFSU2_TR(0x6583c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6583c3:{NFSU2_TR(0x6583c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6583c4:{NFSU2_TR(0x6583c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6583c9ull));
TAIL_STATIC(0x672942u,672);
}
B6583c9:L6583c9:{c.instructions+=3;NFSU2_TR(0x6583c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6583cc:{NFSU2_TR(0x6583cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6583cd:{NFSU2_TR(0x6583cd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65839fu);}goto L65839f;}
}
B6583cf:L6583cf:{c.instructions+=8;NFSU2_TR(0x6583cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6583d2:{NFSU2_TR(0x6583d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6583d5:{NFSU2_TR(0x6583d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6583d8:{NFSU2_TR(0x6583d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6583db:{NFSU2_TR(0x6583db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6583dc:{NFSU2_TR(0x6583dc);
__builtin_memmove((R+4),(R+28),4);
}
B6583de:{NFSU2_TR(0x6583de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6583e1:{NFSU2_TR(0x6583e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6583e6ull));
TAIL_STATIC(0x652c77u,652);
}
B6583e6:L6583e6:{c.instructions+=1;NFSU2_TR(0x6583e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6583e9:L6583e9:{c.instructions+=2;NFSU2_TR(0x6583e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6583ec:{NFSU2_TR(0x6583ec);
{goto L658482;}
}
B6583f1:L6583f1:{c.instructions+=4;NFSU2_TR(0x6583f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6583f4:{NFSU2_TR(0x6583f4);
__builtin_memmove((R+4),(R+28),4);
}
B6583f6:{NFSU2_TR(0x6583f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6583f9:{NFSU2_TR(0x6583f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6583feull));
TAIL_STATIC(0x656820u,656);
}
B6583fe:L6583fe:{c.instructions+=1;NFSU2_TR(0x6583fe);
{goto L658ff9;}
}
B658403:L658403:{c.instructions+=6;NFSU2_TR(0x658403);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658406:{NFSU2_TR(0x658406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658409:{NFSU2_TR(0x658409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65840c:{NFSU2_TR(0x65840c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65840f:{NFSU2_TR(0x65840f);
__builtin_memmove((R+4),(R+28),4);
}
B658411:{NFSU2_TR(0x658411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658416ull));
TAIL_STATIC(0x656820u,656);
}
B658416:L658416:{c.instructions+=4;NFSU2_TR(0x658416);
__builtin_memmove((R+12),(R+0),4);
}
B658418:{NFSU2_TR(0x658418);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658419:{NFSU2_TR(0x658419);
__builtin_memmove((R+4),(R+28),4);
}
B65841b:{NFSU2_TR(0x65841b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658420ull));
TAIL_STATIC(0x64f625u,64f);
}
B658420:L658420:{c.instructions+=3;NFSU2_TR(0x658420);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658421:{NFSU2_TR(0x658421);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658422:{NFSU2_TR(0x658422);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658273u);}goto L658273;}
}
B658427:L658427:{c.instructions+=2;NFSU2_TR(0x658427);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658429:{NFSU2_TR(0x658429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65842eull));
TAIL_STATIC(0x645362u,645);
}
B65842e:L65842e:{c.instructions+=2;NFSU2_TR(0x65842e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658430:{NFSU2_TR(0x658430);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658436:L658436:{c.instructions+=1;NFSU2_TR(0x658436);
u8 U[4];
w4(U+0,u32(0x7b4fe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65843b:L65843b:{c.instructions+=1;NFSU2_TR(0x65843b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65843c:L65843c:{c.instructions+=3;NFSU2_TR(0x65843c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65843f:{NFSU2_TR(0x65843f);
__builtin_memmove((R+4),(R+0),4);
}
B658441:{NFSU2_TR(0x658441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658446ull));
TAIL_STATIC(0x672498u,672);
}
B658446:L658446:{c.instructions+=1;NFSU2_TR(0x658446);
{goto L658ff9;}
}
B65844b:L65844b:{c.instructions+=2;NFSU2_TR(0x65844b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65844d:{NFSU2_TR(0x65844d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658452ull));
TAIL_STATIC(0x645362u,645);
}
B658452:L658452:{c.instructions+=2;NFSU2_TR(0x658452);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658454:{NFSU2_TR(0x658454);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65845a:L65845a:{c.instructions+=2;NFSU2_TR(0x65845a);
u8 U[4];
w4(U+0,u32(0x7b4fe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65845f:{NFSU2_TR(0x65845f);
{goto L658c68;}
}
B658464:L658464:{c.instructions+=13;NFSU2_TR(0x658464);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658465:{NFSU2_TR(0x658465);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B658468:{NFSU2_TR(0x658468);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658469:{NFSU2_TR(0x658469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65846c:{NFSU2_TR(0x65846c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65846e:{NFSU2_TR(0x65846e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658471:{NFSU2_TR(0x658471);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B658474:{NFSU2_TR(0x658474);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658475:{NFSU2_TR(0x658475);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658476:{NFSU2_TR(0x658476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658477:{NFSU2_TR(0x658477);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658478:{NFSU2_TR(0x658478);
__builtin_memmove((R+4),(R+28),4);
}
B65847a:{NFSU2_TR(0x65847a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65847full));
TAIL_STATIC(0x6540dfu,654);
}
B65847f:L65847f:{c.instructions+=1;NFSU2_TR(0x65847f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658482:L658482:{c.instructions+=3;NFSU2_TR(0x658482);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B658484:{NFSU2_TR(0x658484);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
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
B658487:{NFSU2_TR(0x658487);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6584a6;}}
}
B658489:L658489:{c.instructions+=3;NFSU2_TR(0x658489);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65848c:{NFSU2_TR(0x65848c);
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
B65848e:{NFSU2_TR(0x65848e);
if(r1(R+518)){TAIL_STATIC(0x659032u,659);}
}
B658494:L658494:{c.instructions+=6;NFSU2_TR(0x658494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B658497:{NFSU2_TR(0x658497);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65849a:{NFSU2_TR(0x65849a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65849d:{NFSU2_TR(0x65849d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6584a0:{NFSU2_TR(0x6584a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6584a3:{NFSU2_TR(0x6584a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6584a6:L6584a6:{c.instructions+=5;NFSU2_TR(0x6584a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6584a7:{NFSU2_TR(0x6584a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6584a8:{NFSU2_TR(0x6584a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6584a9:{NFSU2_TR(0x6584a9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6584aa:{NFSU2_TR(0x6584aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6584ad:L6584ad:{c.instructions+=14;NFSU2_TR(0x6584ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6584b0:{NFSU2_TR(0x6584b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6584b2:{NFSU2_TR(0x6584b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584b3:{NFSU2_TR(0x6584b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6584b6:{NFSU2_TR(0x6584b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584b7:{NFSU2_TR(0x6584b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584b9:{NFSU2_TR(0x6584b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6584bc:{NFSU2_TR(0x6584bc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6584bf:{NFSU2_TR(0x6584bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584c0:{NFSU2_TR(0x6584c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584c1:{NFSU2_TR(0x6584c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584c2:{NFSU2_TR(0x6584c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584c3:{NFSU2_TR(0x6584c3);
__builtin_memmove((R+4),(R+28),4);
}
B6584c5:{NFSU2_TR(0x6584c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6584caull));
TAIL_STATIC(0x6540dfu,654);
}
B6584ca:L6584ca:{c.instructions+=2;NFSU2_TR(0x6584ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6584cc:{NFSU2_TR(0x6584cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65847fu);}goto L65847f;}}
}
B6584ce:L6584ce:{c.instructions+=3;NFSU2_TR(0x6584ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6584d1:{NFSU2_TR(0x6584d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6584d3:{NFSU2_TR(0x6584d3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}}
}
B6584d5:L6584d5:{c.instructions+=2;NFSU2_TR(0x6584d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6584d9:{NFSU2_TR(0x6584d9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}}
}
B6584db:L6584db:{c.instructions+=6;NFSU2_TR(0x6584db);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6584de:{NFSU2_TR(0x6584de);
u8 U[4];
w4(U+0,u32(0x7b4fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584e3:{NFSU2_TR(0x6584e3);
u8 U[4];
w4(U+0,u32(0xbbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584e8:{NFSU2_TR(0x6584e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584e9:{NFSU2_TR(0x6584e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584ea:{NFSU2_TR(0x6584ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6584efull));
TAIL_STATIC(0x64f52au,64f);
}
B6584ef:L6584ef:{c.instructions+=2;NFSU2_TR(0x6584ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6584f2:{NFSU2_TR(0x6584f2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B6584f4:L6584f4:{c.instructions+=5;NFSU2_TR(0x6584f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6584f7:{NFSU2_TR(0x6584f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6584f8:{NFSU2_TR(0x6584f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6584fb:{NFSU2_TR(0x6584fb);
__builtin_memmove((R+4),(R+28),4);
}
B6584fd:{NFSU2_TR(0x6584fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658502ull));
TAIL_STATIC(0x651597u,651);
}
B658502:L658502:{c.instructions+=1;NFSU2_TR(0x658502);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658507:L658507:{c.instructions+=4;NFSU2_TR(0x658507);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65850a:{NFSU2_TR(0x65850a);
__builtin_memmove((R+4),(R+28),4);
}
B65850c:{NFSU2_TR(0x65850c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65850f:{NFSU2_TR(0x65850f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658514ull));
TAIL_STATIC(0x656b47u,656);
}
B658514:L658514:{c.instructions+=1;NFSU2_TR(0x658514);
{goto L658ff9;}
}
B658519:L658519:{c.instructions+=2;NFSU2_TR(0x658519);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65851b:{NFSU2_TR(0x65851b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658520ull));
TAIL_STATIC(0x645362u,645);
}
B658520:L658520:{c.instructions+=2;NFSU2_TR(0x658520);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658522:{NFSU2_TR(0x658522);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658528:L658528:{c.instructions+=4;NFSU2_TR(0x658528);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658529:{NFSU2_TR(0x658529);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65852b:{NFSU2_TR(0x65852b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65852d:{NFSU2_TR(0x65852d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65852e:L65852e:{c.instructions+=1;NFSU2_TR(0x65852e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65852f:L65852f:{c.instructions+=2;NFSU2_TR(0x65852f);
__builtin_memmove((R+4),(R+0),4);
}
B658531:{NFSU2_TR(0x658531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658536ull));
TAIL_STATIC(0x672a51u,672);
}
B658536:L658536:{c.instructions+=1;NFSU2_TR(0x658536);
{goto L658ff9;}
}
B65853b:L65853b:{c.instructions+=2;NFSU2_TR(0x65853b);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65853d:{NFSU2_TR(0x65853d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658542ull));
TAIL_STATIC(0x645362u,645);
}
B658542:L658542:{c.instructions+=2;NFSU2_TR(0x658542);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658544:{NFSU2_TR(0x658544);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65854a:L65854a:{c.instructions+=5;NFSU2_TR(0x65854a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65854b:{NFSU2_TR(0x65854b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65854d:{NFSU2_TR(0x65854d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65854f:{NFSU2_TR(0x65854f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658551:{NFSU2_TR(0x658551);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65852eu);}goto L65852e;}
}
B658553:L658553:{c.instructions+=2;NFSU2_TR(0x658553);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658555:{NFSU2_TR(0x658555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65855aull));
TAIL_STATIC(0x645362u,645);
}
B65855a:L65855a:{c.instructions+=2;NFSU2_TR(0x65855a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65855c:{NFSU2_TR(0x65855c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658562:L658562:{c.instructions+=5;NFSU2_TR(0x658562);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658563:{NFSU2_TR(0x658563);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658565:{NFSU2_TR(0x658565);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658567:{NFSU2_TR(0x658567);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658569:{NFSU2_TR(0x658569);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65852eu);}goto L65852e;}
}
B65856b:L65856b:{c.instructions+=2;NFSU2_TR(0x65856b);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65856d:{NFSU2_TR(0x65856d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658572ull));
TAIL_STATIC(0x645362u,645);
}
B658572:L658572:{c.instructions+=2;NFSU2_TR(0x658572);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658574:{NFSU2_TR(0x658574);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65857a:L65857a:{c.instructions+=5;NFSU2_TR(0x65857a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65857b:{NFSU2_TR(0x65857b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65857d:{NFSU2_TR(0x65857d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65857f:{NFSU2_TR(0x65857f);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658581:{NFSU2_TR(0x658581);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65852eu);}goto L65852e;}
}
B658583:L658583:{c.instructions+=2;NFSU2_TR(0x658583);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658585:{NFSU2_TR(0x658585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65858aull));
TAIL_STATIC(0x645362u,645);
}
B65858a:L65858a:{c.instructions+=2;NFSU2_TR(0x65858a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65858c:{NFSU2_TR(0x65858c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658592:L658592:{c.instructions+=5;NFSU2_TR(0x658592);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658593:{NFSU2_TR(0x658593);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658595:{NFSU2_TR(0x658595);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658597:{NFSU2_TR(0x658597);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658599:{NFSU2_TR(0x658599);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65852eu);}goto L65852e;}
}
B65859b:L65859b:{c.instructions+=2;NFSU2_TR(0x65859b);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65859d:{NFSU2_TR(0x65859d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6585a2ull));
TAIL_STATIC(0x645362u,645);
}
B6585a2:L6585a2:{c.instructions+=2;NFSU2_TR(0x6585a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6585a4:{NFSU2_TR(0x6585a4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6585aa:L6585aa:{c.instructions+=6;NFSU2_TR(0x6585aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585ab:{NFSU2_TR(0x6585ab);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585ad:{NFSU2_TR(0x6585ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585af:{NFSU2_TR(0x6585af);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585b1:{NFSU2_TR(0x6585b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585b3:{NFSU2_TR(0x6585b3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65852fu);}goto L65852f;}
}
B6585b8:L6585b8:{c.instructions+=4;NFSU2_TR(0x6585b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6585bb:{NFSU2_TR(0x6585bb);
__builtin_memmove((R+4),(R+28),4);
}
B6585bd:{NFSU2_TR(0x6585bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6585c0:{NFSU2_TR(0x6585c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6585c5ull));
TAIL_STATIC(0x656a18u,656);
}
B6585c5:L6585c5:{c.instructions+=1;NFSU2_TR(0x6585c5);
{goto L658ff9;}
}
B6585ca:L6585ca:{c.instructions+=2;NFSU2_TR(0x6585ca);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585cc:{NFSU2_TR(0x6585cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6585d1ull));
TAIL_STATIC(0x645362u,645);
}
B6585d1:L6585d1:{c.instructions+=2;NFSU2_TR(0x6585d1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6585d3:{NFSU2_TR(0x6585d3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6585d9:L6585d9:{c.instructions+=6;NFSU2_TR(0x6585d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585da:{NFSU2_TR(0x6585da);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585dc:{NFSU2_TR(0x6585dc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585de:{NFSU2_TR(0x6585de);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585e0:{NFSU2_TR(0x6585e0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585e2:{NFSU2_TR(0x6585e2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65852fu);}goto L65852f;}
}
B6585e7:L6585e7:{c.instructions+=5;NFSU2_TR(0x6585e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6585ea:{NFSU2_TR(0x6585ea);
__builtin_memmove((R+4),(R+28),4);
}
B6585ec:{NFSU2_TR(0x6585ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6585ef:{NFSU2_TR(0x6585ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6585f2:{NFSU2_TR(0x6585f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6585f7ull));
TAIL_STATIC(0x656a9eu,656);
}
B6585f7:L6585f7:{c.instructions+=1;NFSU2_TR(0x6585f7);
{goto L658ff9;}
}
B6585fc:L6585fc:{c.instructions+=2;NFSU2_TR(0x6585fc);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6585fe:{NFSU2_TR(0x6585fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658603ull));
TAIL_STATIC(0x645362u,645);
}
B658603:L658603:{c.instructions+=2;NFSU2_TR(0x658603);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658605:{NFSU2_TR(0x658605);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65860b:L65860b:{c.instructions+=5;NFSU2_TR(0x65860b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65860c:{NFSU2_TR(0x65860c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65860e:{NFSU2_TR(0x65860e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658610:{NFSU2_TR(0x658610);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658612:{NFSU2_TR(0x658612);
{goto L658798;}
}
B658617:L658617:{c.instructions+=2;NFSU2_TR(0x658617);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658619:{NFSU2_TR(0x658619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65861eull));
TAIL_STATIC(0x645362u,645);
}
B65861e:L65861e:{c.instructions+=2;NFSU2_TR(0x65861e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658620:{NFSU2_TR(0x658620);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658626:L658626:{c.instructions+=5;NFSU2_TR(0x658626);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658627:{NFSU2_TR(0x658627);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658629:{NFSU2_TR(0x658629);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65862b:{NFSU2_TR(0x65862b);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65862d:{NFSU2_TR(0x65862d);
{goto L658798;}
}
B658632:L658632:{c.instructions+=2;NFSU2_TR(0x658632);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658634:{NFSU2_TR(0x658634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658639ull));
TAIL_STATIC(0x645362u,645);
}
B658639:L658639:{c.instructions+=2;NFSU2_TR(0x658639);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65863b:{NFSU2_TR(0x65863b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658641:L658641:{c.instructions+=5;NFSU2_TR(0x658641);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658642:{NFSU2_TR(0x658642);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658644:{NFSU2_TR(0x658644);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658646:{NFSU2_TR(0x658646);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658648:{NFSU2_TR(0x658648);
{goto L658798;}
}
B65864d:L65864d:{c.instructions+=2;NFSU2_TR(0x65864d);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65864f:{NFSU2_TR(0x65864f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658654ull));
TAIL_STATIC(0x645362u,645);
}
B658654:L658654:{c.instructions+=2;NFSU2_TR(0x658654);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658656:{NFSU2_TR(0x658656);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B65865c:L65865c:{c.instructions+=5;NFSU2_TR(0x65865c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65865d:{NFSU2_TR(0x65865d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65865f:{NFSU2_TR(0x65865f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658661:{NFSU2_TR(0x658661);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658663:{NFSU2_TR(0x658663);
{goto L658798;}
}
B658668:L658668:{c.instructions+=2;NFSU2_TR(0x658668);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65866a:{NFSU2_TR(0x65866a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65866full));
TAIL_STATIC(0x645362u,645);
}
B65866f:L65866f:{c.instructions+=2;NFSU2_TR(0x65866f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658671:{NFSU2_TR(0x658671);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658677:L658677:{c.instructions+=5;NFSU2_TR(0x658677);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658678:{NFSU2_TR(0x658678);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65867a:{NFSU2_TR(0x65867a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65867c:{NFSU2_TR(0x65867c);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65867e:{NFSU2_TR(0x65867e);
{goto L658798;}
}
B658683:L658683:{c.instructions+=2;NFSU2_TR(0x658683);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658685:{NFSU2_TR(0x658685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65868aull));
TAIL_STATIC(0x645362u,645);
}
B65868a:L65868a:{c.instructions+=2;NFSU2_TR(0x65868a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65868c:{NFSU2_TR(0x65868c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658692:L658692:{c.instructions+=5;NFSU2_TR(0x658692);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658693:{NFSU2_TR(0x658693);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658695:{NFSU2_TR(0x658695);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658697:{NFSU2_TR(0x658697);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658699:{NFSU2_TR(0x658699);
{goto L658798;}
}
B65869e:L65869e:{c.instructions+=2;NFSU2_TR(0x65869e);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586a0:{NFSU2_TR(0x6586a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6586a5ull));
TAIL_STATIC(0x645362u,645);
}
B6586a5:L6586a5:{c.instructions+=2;NFSU2_TR(0x6586a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6586a7:{NFSU2_TR(0x6586a7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6586ad:L6586ad:{c.instructions+=5;NFSU2_TR(0x6586ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586ae:{NFSU2_TR(0x6586ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586b0:{NFSU2_TR(0x6586b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586b2:{NFSU2_TR(0x6586b2);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586b4:{NFSU2_TR(0x6586b4);
{goto L658798;}
}
B6586b9:L6586b9:{c.instructions+=2;NFSU2_TR(0x6586b9);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586bb:{NFSU2_TR(0x6586bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6586c0ull));
TAIL_STATIC(0x645362u,645);
}
B6586c0:L6586c0:{c.instructions+=2;NFSU2_TR(0x6586c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6586c2:{NFSU2_TR(0x6586c2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6586c8:L6586c8:{c.instructions+=5;NFSU2_TR(0x6586c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586c9:{NFSU2_TR(0x6586c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586cb:{NFSU2_TR(0x6586cb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586cd:{NFSU2_TR(0x6586cd);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586cf:{NFSU2_TR(0x6586cf);
{goto L658798;}
}
B6586d4:L6586d4:{c.instructions+=2;NFSU2_TR(0x6586d4);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586d6:{NFSU2_TR(0x6586d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6586dbull));
TAIL_STATIC(0x645362u,645);
}
B6586db:L6586db:{c.instructions+=2;NFSU2_TR(0x6586db);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6586dd:{NFSU2_TR(0x6586dd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6586e3:L6586e3:{c.instructions+=5;NFSU2_TR(0x6586e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586e4:{NFSU2_TR(0x6586e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586e6:{NFSU2_TR(0x6586e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586e8:{NFSU2_TR(0x6586e8);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586ea:{NFSU2_TR(0x6586ea);
{goto L658798;}
}
B6586ef:L6586ef:{c.instructions+=2;NFSU2_TR(0x6586ef);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586f1:{NFSU2_TR(0x6586f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6586f6ull));
TAIL_STATIC(0x645362u,645);
}
B6586f6:L6586f6:{c.instructions+=2;NFSU2_TR(0x6586f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6586f8:{NFSU2_TR(0x6586f8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6586fe:L6586fe:{c.instructions+=5;NFSU2_TR(0x6586fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6586ff:{NFSU2_TR(0x6586ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658701:{NFSU2_TR(0x658701);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658703:{NFSU2_TR(0x658703);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658705:{NFSU2_TR(0x658705);
{goto L658798;}
}
B65870a:L65870a:{c.instructions+=2;NFSU2_TR(0x65870a);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65870c:{NFSU2_TR(0x65870c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658711ull));
TAIL_STATIC(0x645362u,645);
}
B658711:L658711:{c.instructions+=2;NFSU2_TR(0x658711);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658713:{NFSU2_TR(0x658713);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658719:L658719:{c.instructions+=5;NFSU2_TR(0x658719);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65871a:{NFSU2_TR(0x65871a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65871c:{NFSU2_TR(0x65871c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65871e:{NFSU2_TR(0x65871e);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658720:{NFSU2_TR(0x658720);
{goto L658798;}
}
B658722:L658722:{c.instructions+=2;NFSU2_TR(0x658722);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658724:{NFSU2_TR(0x658724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658729ull));
TAIL_STATIC(0x645362u,645);
}
B658729:L658729:{c.instructions+=2;NFSU2_TR(0x658729);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65872b:{NFSU2_TR(0x65872b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658731:L658731:{c.instructions+=5;NFSU2_TR(0x658731);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658732:{NFSU2_TR(0x658732);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658734:{NFSU2_TR(0x658734);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658736:{NFSU2_TR(0x658736);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658738:{NFSU2_TR(0x658738);
{goto L658798;}
}
B65873a:L65873a:{c.instructions+=2;NFSU2_TR(0x65873a);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65873c:{NFSU2_TR(0x65873c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658741ull));
TAIL_STATIC(0x645362u,645);
}
B658741:L658741:{c.instructions+=2;NFSU2_TR(0x658741);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658743:{NFSU2_TR(0x658743);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658749:L658749:{c.instructions+=5;NFSU2_TR(0x658749);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65874a:{NFSU2_TR(0x65874a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65874c:{NFSU2_TR(0x65874c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65874e:{NFSU2_TR(0x65874e);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658750:{NFSU2_TR(0x658750);
{goto L658798;}
}
B658752:L658752:{c.instructions+=2;NFSU2_TR(0x658752);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658754:{NFSU2_TR(0x658754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658759ull));
TAIL_STATIC(0x645362u,645);
}
B658759:L658759:{c.instructions+=2;NFSU2_TR(0x658759);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65875b:{NFSU2_TR(0x65875b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658761:L658761:{c.instructions+=5;NFSU2_TR(0x658761);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658762:{NFSU2_TR(0x658762);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658764:{NFSU2_TR(0x658764);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658766:{NFSU2_TR(0x658766);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658768:{NFSU2_TR(0x658768);
{goto L658798;}
}
B65876a:L65876a:{c.instructions+=2;NFSU2_TR(0x65876a);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65876c:{NFSU2_TR(0x65876c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658771ull));
TAIL_STATIC(0x645362u,645);
}
B658771:L658771:{c.instructions+=2;NFSU2_TR(0x658771);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658773:{NFSU2_TR(0x658773);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658779:L658779:{c.instructions+=5;NFSU2_TR(0x658779);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65877a:{NFSU2_TR(0x65877a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65877c:{NFSU2_TR(0x65877c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65877e:{NFSU2_TR(0x65877e);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658780:{NFSU2_TR(0x658780);
{goto L658798;}
}
B658782:L658782:{c.instructions+=2;NFSU2_TR(0x658782);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658784:{NFSU2_TR(0x658784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658789ull));
TAIL_STATIC(0x645362u,645);
}
B658789:L658789:{c.instructions+=2;NFSU2_TR(0x658789);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65878b:{NFSU2_TR(0x65878b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658791:L658791:{c.instructions+=4;NFSU2_TR(0x658791);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658792:{NFSU2_TR(0x658792);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658794:{NFSU2_TR(0x658794);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658796:{NFSU2_TR(0x658796);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658798:L658798:{c.instructions+=2;NFSU2_TR(0x658798);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65879a:{NFSU2_TR(0x65879a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65852fu);}goto L65852f;}
}
B65879f:L65879f:{c.instructions+=2;NFSU2_TR(0x65879f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6587a2:{NFSU2_TR(0x6587a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6587a3:L6587a3:{c.instructions+=2;NFSU2_TR(0x6587a3);
__builtin_memmove((R+4),(R+28),4);
}
B6587a5:{NFSU2_TR(0x6587a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6587aaull));
TAIL_STATIC(0x6569d0u,656);
}
B6587aa:L6587aa:{c.instructions+=1;NFSU2_TR(0x6587aa);
{goto L658ff9;}
}
B6587af:L6587af:{c.instructions+=3;NFSU2_TR(0x6587af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6587b2:{NFSU2_TR(0x6587b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6587b5:{NFSU2_TR(0x6587b5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6587a3u);}goto L6587a3;}
}
B6587b7:L6587b7:{c.instructions+=6;NFSU2_TR(0x6587b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6587ba:{NFSU2_TR(0x6587ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6587bd:{NFSU2_TR(0x6587bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6587c0:{NFSU2_TR(0x6587c0);
__builtin_memmove((R+4),(R+28),4);
}
B6587c2:{NFSU2_TR(0x6587c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6587c3:{NFSU2_TR(0x6587c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6587c8ull));
TAIL_STATIC(0x651597u,651);
}
B6587c8:L6587c8:{c.instructions+=1;NFSU2_TR(0x6587c8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6583e9u);}goto L6583e9;}
}
B6587cd:L6587cd:{c.instructions+=2;NFSU2_TR(0x6587cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6587ce:{NFSU2_TR(0x6587ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6587d0:L6587d0:{c.instructions+=3;NFSU2_TR(0x6587d0);
__builtin_memmove((R+4),(R+28),4);
}
B6587d2:{NFSU2_TR(0x6587d2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6587d4:{NFSU2_TR(0x6587d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6587d9ull));
TAIL_STATIC(0x64f65au,64f);
}
B6587d9:L6587d9:{c.instructions+=1;NFSU2_TR(0x6587d9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B6587de:L6587de:{c.instructions+=1;NFSU2_TR(0x6587de);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6587e0:L6587e0:{c.instructions+=2;NFSU2_TR(0x6587e0);
__builtin_memmove((R+4),(R+28),4);
}
B6587e2:{NFSU2_TR(0x6587e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6587e7ull));
TAIL_STATIC(0x650accu,650);
}
B6587e7:L6587e7:{c.instructions+=1;NFSU2_TR(0x6587e7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B6587ec:L6587ec:{c.instructions+=2;NFSU2_TR(0x6587ec);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6587ee:{NFSU2_TR(0x6587ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6587f3ull));
TAIL_STATIC(0x645362u,645);
}
B6587f3:L6587f3:{c.instructions+=2;NFSU2_TR(0x6587f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6587f5:{NFSU2_TR(0x6587f5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6587fb:L6587fb:{c.instructions+=2;NFSU2_TR(0x6587fb);
u8 U[4];
w4(U+0,u32(0x7b4fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658800:{NFSU2_TR(0x658800);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65843bu);}goto L65843b;}
}
B658805:L658805:{c.instructions+=3;NFSU2_TR(0x658805);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658808:{NFSU2_TR(0x658808);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65880b:{NFSU2_TR(0x65880b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658810ull));
TAIL_STATIC(0x672459u,672);
}
B658810:L658810:{c.instructions+=1;NFSU2_TR(0x658810);
{goto L658ff9;}
}
B658815:L658815:{c.instructions+=2;NFSU2_TR(0x658815);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658817:{NFSU2_TR(0x658817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65881cull));
TAIL_STATIC(0x645362u,645);
}
B65881c:L65881c:{c.instructions+=2;NFSU2_TR(0x65881c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65881e:{NFSU2_TR(0x65881e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658824:L658824:{c.instructions+=2;NFSU2_TR(0x658824);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658827:{NFSU2_TR(0x658827);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658828:L658828:{c.instructions+=2;NFSU2_TR(0x658828);
__builtin_memmove((R+4),(R+0),4);
}
B65882a:{NFSU2_TR(0x65882a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65882full));
TAIL_STATIC(0x673102u,673);
}
B65882f:L65882f:{c.instructions+=1;NFSU2_TR(0x65882f);
{goto L658ff9;}
}
B658834:L658834:{c.instructions+=2;NFSU2_TR(0x658834);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658836:{NFSU2_TR(0x658836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65883bull));
TAIL_STATIC(0x645362u,645);
}
B65883b:L65883b:{c.instructions+=2;NFSU2_TR(0x65883b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65883d:{NFSU2_TR(0x65883d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658843:L658843:{c.instructions+=3;NFSU2_TR(0x658843);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658846:{NFSU2_TR(0x658846);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658849:{NFSU2_TR(0x658849);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658828u);}goto L658828;}
}
B65884b:L65884b:{c.instructions+=3;NFSU2_TR(0x65884b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65884c:{NFSU2_TR(0x65884c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65884e:{NFSU2_TR(0x65884e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6587d0u);}goto L6587d0;}
}
B658850:L658850:{c.instructions+=1;NFSU2_TR(0x658850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658853:L658853:{c.instructions+=2;NFSU2_TR(0x658853);
__builtin_memmove((R+4),(R+28),4);
}
B658855:{NFSU2_TR(0x658855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65885aull));
TAIL_STATIC(0x64f90eu,64f);
}
B65885a:L65885a:{c.instructions+=1;NFSU2_TR(0x65885a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B65885f:L65885f:{c.instructions+=3;NFSU2_TR(0x65885f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658862:{NFSU2_TR(0x658862);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658865:{NFSU2_TR(0x658865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65886aull));
TAIL_STATIC(0x672459u,672);
}
B65886a:L65886a:{c.instructions+=2;NFSU2_TR(0x65886a);
__builtin_memmove((R+24),(R+0),4);
}
B65886c:{NFSU2_TR(0x65886c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658853u);}goto L658853;}
}
B65886e:L65886e:{c.instructions+=6;NFSU2_TR(0x65886e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658871:{NFSU2_TR(0x658871);
__builtin_memmove((R+4),(R+28),4);
}
B658873:{NFSU2_TR(0x658873);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658876:{NFSU2_TR(0x658876);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658879:{NFSU2_TR(0x658879);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65887c:{NFSU2_TR(0x65887c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658881ull));
TAIL_STATIC(0x6572b7u,657);
}
B658881:L658881:{c.instructions+=1;NFSU2_TR(0x658881);
{goto L658ff9;}
}
B658886:L658886:{c.instructions+=2;NFSU2_TR(0x658886);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658888:{NFSU2_TR(0x658888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65888dull));
TAIL_STATIC(0x645362u,645);
}
B65888d:L65888d:{c.instructions+=2;NFSU2_TR(0x65888d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65888f:{NFSU2_TR(0x65888f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658895:L658895:{c.instructions+=2;NFSU2_TR(0x658895);
u8 U[4];
w4(U+0,u32(0x7b4fb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65889a:{NFSU2_TR(0x65889a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65843bu);}goto L65843b;}
}
B65889f:L65889f:{c.instructions+=2;NFSU2_TR(0x65889f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6588a1:{NFSU2_TR(0x6588a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6588a6ull));
TAIL_STATIC(0x645362u,645);
}
B6588a6:L6588a6:{c.instructions+=2;NFSU2_TR(0x6588a6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6588a8:{NFSU2_TR(0x6588a8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6588ae:L6588ae:{c.instructions+=2;NFSU2_TR(0x6588ae);
u8 U[4];
w4(U+0,u32(0x7b4fb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6588b3:{NFSU2_TR(0x6588b3);
{goto L658c68;}
}
B6588b8:L6588b8:{c.instructions+=3;NFSU2_TR(0x6588b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6588bb:{NFSU2_TR(0x6588bb);
__builtin_memmove((R+4),(R+28),4);
}
B6588bd:{NFSU2_TR(0x6588bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6588c2ull));
TAIL_STATIC(0x650accu,650);
}
B6588c2:L6588c2:{c.instructions+=2;NFSU2_TR(0x6588c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6588c5:{NFSU2_TR(0x6588c5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B6588ca:L6588ca:{c.instructions+=3;NFSU2_TR(0x6588ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6588cd:{NFSU2_TR(0x6588cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6588cf:{NFSU2_TR(0x6588cf);
if(r1(R+518)){{goto L658974;}}
}
B6588d5:L6588d5:{c.instructions+=3;NFSU2_TR(0x6588d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6588d8:{NFSU2_TR(0x6588d8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6588da:{NFSU2_TR(0x6588da);
if(r1(R+518)){{goto L658974;}}
}
B6588e0:L6588e0:{c.instructions+=10;NFSU2_TR(0x6588e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6588e3:{NFSU2_TR(0x6588e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6588e6:{NFSU2_TR(0x6588e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6588e9:{NFSU2_TR(0x6588e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6588ec:{NFSU2_TR(0x6588ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6588ef:{NFSU2_TR(0x6588ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6588f6:{NFSU2_TR(0x6588f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6588f9:{NFSU2_TR(0x6588f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6588fc:{NFSU2_TR(0x6588fc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6588ff:{NFSU2_TR(0x6588ff);
{goto L658938;}
}
B658901:L658901:{c.instructions+=4;NFSU2_TR(0x658901);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658904:{NFSU2_TR(0x658904);
__builtin_memmove((R+4),(R+28),4);
}
B658906:{NFSU2_TR(0x658906);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658907:{NFSU2_TR(0x658907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65890cull));
TAIL_STATIC(0x64f7f1u,64f);
}
B65890c:L65890c:{c.instructions+=3;NFSU2_TR(0x65890c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65890e:{NFSU2_TR(0x65890e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658911:{NFSU2_TR(0x658911);
if(r1(R+518)){{goto L658932;}}
}
B658913:L658913:{c.instructions+=3;NFSU2_TR(0x658913);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B658916:{NFSU2_TR(0x658916);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658918:{NFSU2_TR(0x658918);
if(r1(R+518)){{goto L658928;}}
}
B65891a:L65891a:{c.instructions+=2;NFSU2_TR(0x65891a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65891e:{NFSU2_TR(0x65891e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L658928;}}
}
B658920:L658920:{c.instructions+=3;NFSU2_TR(0x658920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B658923:{NFSU2_TR(0x658923);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B658926:{NFSU2_TR(0x658926);
if(r1(R+518)){{goto L658941;}}
}
B658928:L658928:{c.instructions+=4;NFSU2_TR(0x658928);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65892b:{NFSU2_TR(0x65892b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65892d:{NFSU2_TR(0x65892d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658930:{NFSU2_TR(0x658930);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658913u);}goto L658913;}}
}
B658932:L658932:{c.instructions+=2;NFSU2_TR(0x658932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658935:{NFSU2_TR(0x658935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658938:L658938:{c.instructions+=3;NFSU2_TR(0x658938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65893a:{NFSU2_TR(0x65893a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65893d:{NFSU2_TR(0x65893d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658901u);}goto L658901;}}
}
B65893f:L65893f:{c.instructions+=1;NFSU2_TR(0x65893f);
{goto L658974;}
}
B658941:L658941:{c.instructions+=4;NFSU2_TR(0x658941);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B658944:{NFSU2_TR(0x658944);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B658947:{NFSU2_TR(0x658947);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65894b:{NFSU2_TR(0x65894b);
if(r1(R+518)){{goto L658967;}}
}
B65894d:L65894d:{c.instructions+=6;NFSU2_TR(0x65894d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658950:{NFSU2_TR(0x658950);
u8 U[4];
w4(U+0,u32(0x7b4fa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658955:{NFSU2_TR(0x658955);
u8 U[4];
w4(U+0,u32(0xbfdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65895a:{NFSU2_TR(0x65895a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65895b:{NFSU2_TR(0x65895b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65895c:{NFSU2_TR(0x65895c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658961ull));
TAIL_STATIC(0x64f52au,64f);
}
B658961:L658961:{c.instructions+=2;NFSU2_TR(0x658961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658964:{NFSU2_TR(0x658964);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B658967:L658967:{c.instructions+=3;NFSU2_TR(0x658967);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65896a:{NFSU2_TR(0x65896a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65896d:{NFSU2_TR(0x65896d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B658974:L658974:{c.instructions+=3;NFSU2_TR(0x658974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658977:{NFSU2_TR(0x658977);
__builtin_memmove((R+4),(R+28),4);
}
B658979:{NFSU2_TR(0x658979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65897eull));
TAIL_STATIC(0x650accu,650);
}
B65897e:L65897e:{c.instructions+=2;NFSU2_TR(0x65897e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B658982:{NFSU2_TR(0x658982);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658987:L658987:{c.instructions+=5;NFSU2_TR(0x658987);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65898a:{NFSU2_TR(0x65898a);
__builtin_memmove((R+4),(R+28),4);
}
B65898c:{NFSU2_TR(0x65898c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65898f:{NFSU2_TR(0x65898f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658992:{NFSU2_TR(0x658992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658997ull));
TAIL_STATIC(0x65631bu,656);
}
B658997:L658997:{c.instructions+=4;NFSU2_TR(0x658997);
__builtin_memmove((R+24),(R+0),4);
}
B658999:{NFSU2_TR(0x658999);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65899a:{NFSU2_TR(0x65899a);
__builtin_memmove((R+4),(R+28),4);
}
B65899c:{NFSU2_TR(0x65899c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6589a1ull));
TAIL_STATIC(0x64f625u,64f);
}
B6589a1:L6589a1:{c.instructions+=1;NFSU2_TR(0x6589a1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658853u);}goto L658853;}
}
B6589a6:L6589a6:{c.instructions+=3;NFSU2_TR(0x6589a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6589a9:{NFSU2_TR(0x6589a9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6589ab:{NFSU2_TR(0x6589ab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6587d0u);}goto L6587d0;}
}
B6589b0:L6589b0:{c.instructions+=2;NFSU2_TR(0x6589b0);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6589b2:{NFSU2_TR(0x6589b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6589b7ull));
TAIL_STATIC(0x645362u,645);
}
B6589b7:L6589b7:{c.instructions+=2;NFSU2_TR(0x6589b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6589b9:{NFSU2_TR(0x6589b9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658394u);}goto L658394;}}
}
B6589bf:L6589bf:{c.instructions+=3;NFSU2_TR(0x6589bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6589c2:{NFSU2_TR(0x6589c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6589c3:{NFSU2_TR(0x6589c3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6589c5:L6589c5:{c.instructions+=2;NFSU2_TR(0x6589c5);
__builtin_memmove((R+4),(R+0),4);
}
B6589c7:{NFSU2_TR(0x6589c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6589ccull));
TAIL_STATIC(0x672942u,672);
}
B6589cc:L6589cc:{c.instructions+=2;NFSU2_TR(0x6589cc);
__builtin_memmove((R+24),(R+0),4);
}
B6589ce:{NFSU2_TR(0x6589ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658396u);}goto L658396;}
}
B6589d3:L6589d3:{c.instructions+=5;NFSU2_TR(0x6589d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6589d6:{NFSU2_TR(0x6589d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6589d9:{NFSU2_TR(0x6589d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6589dc:{NFSU2_TR(0x6589dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x70ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6589e0:{NFSU2_TR(0x6589e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65839eu);}goto L65839e;}}
}
B6589e6:L6589e6:{c.instructions+=2;NFSU2_TR(0x6589e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6589ea:{NFSU2_TR(0x6589ea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65839eu);}goto L65839e;}
}
B6589ef:L6589ef:{c.instructions+=2;NFSU2_TR(0x6589ef);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6589f1:{NFSU2_TR(0x6589f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6589f6ull));
TAIL_STATIC(0x645362u,645);
}
B6589f6:L6589f6:{c.instructions+=2;NFSU2_TR(0x6589f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6589f8:{NFSU2_TR(0x6589f8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B6589fe:L6589fe:{c.instructions+=4;NFSU2_TR(0x6589fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6589ff:{NFSU2_TR(0x6589ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a00:{NFSU2_TR(0x658a00);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a02:{NFSU2_TR(0x658a02);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658a07:L658a07:{c.instructions+=2;NFSU2_TR(0x658a07);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a09:{NFSU2_TR(0x658a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a0eull));
TAIL_STATIC(0x645362u,645);
}
B658a0e:L658a0e:{c.instructions+=2;NFSU2_TR(0x658a0e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658a10:{NFSU2_TR(0x658a10);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658a16:L658a16:{c.instructions+=4;NFSU2_TR(0x658a16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a17:{NFSU2_TR(0x658a17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a18:{NFSU2_TR(0x658a18);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a1a:{NFSU2_TR(0x658a1a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658a1f:L658a1f:{c.instructions+=2;NFSU2_TR(0x658a1f);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a21:{NFSU2_TR(0x658a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a26ull));
TAIL_STATIC(0x645362u,645);
}
B658a26:L658a26:{c.instructions+=2;NFSU2_TR(0x658a26);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658a28:{NFSU2_TR(0x658a28);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658a2e:L658a2e:{c.instructions+=4;NFSU2_TR(0x658a2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a2f:{NFSU2_TR(0x658a2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a30:{NFSU2_TR(0x658a30);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a32:{NFSU2_TR(0x658a32);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658a37:L658a37:{c.instructions+=2;NFSU2_TR(0x658a37);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a39:{NFSU2_TR(0x658a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a3eull));
TAIL_STATIC(0x645362u,645);
}
B658a3e:L658a3e:{c.instructions+=2;NFSU2_TR(0x658a3e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658a40:{NFSU2_TR(0x658a40);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658a46:L658a46:{c.instructions+=4;NFSU2_TR(0x658a46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a47:{NFSU2_TR(0x658a47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a48:{NFSU2_TR(0x658a48);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a4a:{NFSU2_TR(0x658a4a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6582a1u);}goto L6582a1;}
}
B658a4f:L658a4f:{c.instructions+=2;NFSU2_TR(0x658a4f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a51:{NFSU2_TR(0x658a51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a56ull));
TAIL_STATIC(0x645362u,645);
}
B658a56:L658a56:{c.instructions+=2;NFSU2_TR(0x658a56);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658a58:{NFSU2_TR(0x658a58);
if(r1(R+518)){{goto L658a6c;}}
}
B658a5a:L658a5a:{c.instructions+=5;NFSU2_TR(0x658a5a);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a5f:{NFSU2_TR(0x658a5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a60:{NFSU2_TR(0x658a60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a61:{NFSU2_TR(0x658a61);
__builtin_memmove((R+4),(R+0),4);
}
B658a63:{NFSU2_TR(0x658a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a68ull));
TAIL_STATIC(0x672498u,672);
}
B658a68:L658a68:{c.instructions+=2;NFSU2_TR(0x658a68);
__builtin_memmove((R+24),(R+0),4);
}
B658a6a:{NFSU2_TR(0x658a6a);
{goto L658a6e;}
}
B658a6c:L658a6c:{c.instructions+=1;NFSU2_TR(0x658a6c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B658a6e:L658a6e:{c.instructions+=3;NFSU2_TR(0x658a6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a6f:{NFSU2_TR(0x658a6f);
__builtin_memmove((R+4),(R+28),4);
}
B658a71:{NFSU2_TR(0x658a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a76ull));
TAIL_STATIC(0x64f625u,64f);
}
B658a76:L658a76:{c.instructions+=2;NFSU2_TR(0x658a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658a78:{NFSU2_TR(0x658a78);
if(r1(R+518)){{goto L658aa6;}}
}
B658a7a:L658a7a:{c.instructions+=2;NFSU2_TR(0x658a7a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a7c:{NFSU2_TR(0x658a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a81ull));
TAIL_STATIC(0x645362u,645);
}
B658a81:L658a81:{c.instructions+=2;NFSU2_TR(0x658a81);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658a83:{NFSU2_TR(0x658a83);
if(r1(R+518)){{goto L658a99;}}
}
B658a85:L658a85:{c.instructions+=6;NFSU2_TR(0x658a85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658a88:{NFSU2_TR(0x658a88);
__builtin_memmove((R+4),(R+0),4);
}
B658a8a:{NFSU2_TR(0x658a8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658a8d:{NFSU2_TR(0x658a8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658a90:{NFSU2_TR(0x658a90);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a92:{NFSU2_TR(0x658a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658a97ull));
TAIL_STATIC(0x67286cu,672);
}
B658a97:L658a97:{c.instructions+=1;NFSU2_TR(0x658a97);
{goto L658a9b;}
}
B658a99:L658a99:{c.instructions+=1;NFSU2_TR(0x658a99);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B658a9b:L658a9b:{c.instructions+=4;NFSU2_TR(0x658a9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658a9c:{NFSU2_TR(0x658a9c);
__builtin_memmove((R+4),(R+28),4);
}
B658a9e:{NFSU2_TR(0x658a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658aa1:{NFSU2_TR(0x658aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658aa6ull));
TAIL_STATIC(0x64f625u,64f);
}
B658aa6:L658aa6:{c.instructions+=2;NFSU2_TR(0x658aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B658aa9:{NFSU2_TR(0x658aa9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658aae:L658aae:{c.instructions+=4;NFSU2_TR(0x658aae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658aaf:{NFSU2_TR(0x658aaf);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ab1:{NFSU2_TR(0x658ab1);
__builtin_memmove((R+4),(R+28),4);
}
B658ab3:{NFSU2_TR(0x658ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ab8ull));
TAIL_STATIC(0x64f65au,64f);
}
B658ab8:L658ab8:{c.instructions+=2;NFSU2_TR(0x658ab8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B658aba:{NFSU2_TR(0x658aba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658abf:L658abf:{c.instructions+=2;NFSU2_TR(0x658abf);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ac1:{NFSU2_TR(0x658ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ac6ull));
TAIL_STATIC(0x645362u,645);
}
B658ac6:L658ac6:{c.instructions+=2;NFSU2_TR(0x658ac6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658ac8:{NFSU2_TR(0x658ac8);
if(r1(R+518)){{goto L658adc;}}
}
B658aca:L658aca:{c.instructions+=5;NFSU2_TR(0x658aca);
u8 U[4];
w4(U+0,u32(0x7b4f98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658acf:{NFSU2_TR(0x658acf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ad0:{NFSU2_TR(0x658ad0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ad1:{NFSU2_TR(0x658ad1);
__builtin_memmove((R+4),(R+0),4);
}
B658ad3:{NFSU2_TR(0x658ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ad8ull));
TAIL_STATIC(0x672498u,672);
}
B658ad8:L658ad8:{c.instructions+=2;NFSU2_TR(0x658ad8);
__builtin_memmove((R+24),(R+0),4);
}
B658ada:{NFSU2_TR(0x658ada);
{goto L658ade;}
}
B658adc:L658adc:{c.instructions+=1;NFSU2_TR(0x658adc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B658ade:L658ade:{c.instructions+=3;NFSU2_TR(0x658ade);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658adf:{NFSU2_TR(0x658adf);
__builtin_memmove((R+4),(R+28),4);
}
B658ae1:{NFSU2_TR(0x658ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ae6ull));
TAIL_STATIC(0x64f625u,64f);
}
B658ae6:L658ae6:{c.instructions+=2;NFSU2_TR(0x658ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658ae8:{NFSU2_TR(0x658ae8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}}
}
B658aee:L658aee:{c.instructions+=2;NFSU2_TR(0x658aee);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658af0:{NFSU2_TR(0x658af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658af5ull));
TAIL_STATIC(0x645362u,645);
}
B658af5:L658af5:{c.instructions+=2;NFSU2_TR(0x658af5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658af7:{NFSU2_TR(0x658af7);
if(r1(R+518)){{goto L658b74;}}
}
B658af9:L658af9:{c.instructions+=6;NFSU2_TR(0x658af9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658afc:{NFSU2_TR(0x658afc);
__builtin_memmove((R+4),(R+0),4);
}
B658afe:{NFSU2_TR(0x658afe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658b01:{NFSU2_TR(0x658b01);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658b04:{NFSU2_TR(0x658b04);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b06:{NFSU2_TR(0x658b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658b0bull));
TAIL_STATIC(0x67286cu,672);
}
B658b0b:L658b0b:{c.instructions+=1;NFSU2_TR(0x658b0b);
{goto L658b76;}
}
B658b0d:L658b0d:{c.instructions+=4;NFSU2_TR(0x658b0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b0e:{NFSU2_TR(0x658b0e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b10:{NFSU2_TR(0x658b10);
__builtin_memmove((R+4),(R+28),4);
}
B658b12:{NFSU2_TR(0x658b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658b17ull));
TAIL_STATIC(0x64f65au,64f);
}
B658b17:L658b17:{c.instructions+=2;NFSU2_TR(0x658b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658b1a:{NFSU2_TR(0x658b1a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658ab8u);}goto L658ab8;}
}
B658b1c:L658b1c:{c.instructions+=2;NFSU2_TR(0x658b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B658b23:{NFSU2_TR(0x658b23);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6587deu);}goto L6587de;}
}
B658b28:L658b28:{c.instructions+=2;NFSU2_TR(0x658b28);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b2a:{NFSU2_TR(0x658b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658b2full));
TAIL_STATIC(0x645362u,645);
}
B658b2f:L658b2f:{c.instructions+=2;NFSU2_TR(0x658b2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658b31:{NFSU2_TR(0x658b31);
if(r1(R+518)){{goto L658b45;}}
}
B658b33:L658b33:{c.instructions+=5;NFSU2_TR(0x658b33);
u8 U[4];
w4(U+0,u32(0x7b4f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b38:{NFSU2_TR(0x658b38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b39:{NFSU2_TR(0x658b39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b3a:{NFSU2_TR(0x658b3a);
__builtin_memmove((R+4),(R+0),4);
}
B658b3c:{NFSU2_TR(0x658b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658b41ull));
TAIL_STATIC(0x672498u,672);
}
B658b41:L658b41:{c.instructions+=2;NFSU2_TR(0x658b41);
__builtin_memmove((R+24),(R+0),4);
}
B658b43:{NFSU2_TR(0x658b43);
{goto L658b47;}
}
B658b45:L658b45:{c.instructions+=1;NFSU2_TR(0x658b45);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B658b47:L658b47:{c.instructions+=3;NFSU2_TR(0x658b47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b48:{NFSU2_TR(0x658b48);
__builtin_memmove((R+4),(R+28),4);
}
B658b4a:{NFSU2_TR(0x658b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658b4full));
TAIL_STATIC(0x64f625u,64f);
}
B658b4f:L658b4f:{c.instructions+=2;NFSU2_TR(0x658b4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658b51:{NFSU2_TR(0x658b51);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}}
}
B658b57:L658b57:{c.instructions+=2;NFSU2_TR(0x658b57);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b59:{NFSU2_TR(0x658b59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658b5eull));
TAIL_STATIC(0x645362u,645);
}
B658b5e:L658b5e:{c.instructions+=2;NFSU2_TR(0x658b5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658b60:{NFSU2_TR(0x658b60);
if(r1(R+518)){{goto L658b74;}}
}
B658b62:L658b62:{c.instructions+=5;NFSU2_TR(0x658b62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658b65:{NFSU2_TR(0x658b65);
__builtin_memmove((R+4),(R+0),4);
}
B658b67:{NFSU2_TR(0x658b67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658b6a:{NFSU2_TR(0x658b6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658b6d:{NFSU2_TR(0x658b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658b72ull));
TAIL_STATIC(0x672fdbu,672);
}
B658b72:L658b72:{c.instructions+=1;NFSU2_TR(0x658b72);
{goto L658b76;}
}
B658b74:L658b74:{c.instructions+=1;NFSU2_TR(0x658b74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B658b76:L658b76:{c.instructions+=3;NFSU2_TR(0x658b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658b79:{NFSU2_TR(0x658b79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b7a:{NFSU2_TR(0x658b7a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658240u);}goto L658240;}
}
B658b7f:L658b7f:{c.instructions+=2;NFSU2_TR(0x658b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B658b86:{NFSU2_TR(0x658b86);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658b8b:L658b8b:{c.instructions+=2;NFSU2_TR(0x658b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658b8e:{NFSU2_TR(0x658b8e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658b93:L658b93:{c.instructions+=3;NFSU2_TR(0x658b93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b94:{NFSU2_TR(0x658b94);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b96:{NFSU2_TR(0x658b96);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6587d0u);}goto L6587d0;}
}
B658b9b:L658b9b:{c.instructions+=2;NFSU2_TR(0x658b9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658b9c:{NFSU2_TR(0x658b9c);
{goto L658ba1;}
}
B658b9e:L658b9e:{c.instructions+=1;NFSU2_TR(0x658b9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ba1:L658ba1:{c.instructions+=2;NFSU2_TR(0x658ba1);
__builtin_memmove((R+4),(R+28),4);
}
B658ba3:{NFSU2_TR(0x658ba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ba8ull));
TAIL_STATIC(0x657203u,657);
}
B658ba8:L658ba8:{c.instructions+=1;NFSU2_TR(0x658ba8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658bad:L658bad:{c.instructions+=5;NFSU2_TR(0x658bad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658bb0:{NFSU2_TR(0x658bb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658bb1:{NFSU2_TR(0x658bb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658bb4:{NFSU2_TR(0x658bb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658bb7:{NFSU2_TR(0x658bb7);
{goto L658be6;}
}
B658bb9:L658bb9:{c.instructions+=2;NFSU2_TR(0x658bb9);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658bbb:{NFSU2_TR(0x658bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658bc0ull));
TAIL_STATIC(0x645362u,645);
}
B658bc0:L658bc0:{c.instructions+=2;NFSU2_TR(0x658bc0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658bc2:{NFSU2_TR(0x658bc2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658bc8:L658bc8:{c.instructions+=2;NFSU2_TR(0x658bc8);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658bcd:{NFSU2_TR(0x658bcd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65843bu);}goto L65843b;}
}
B658bd2:L658bd2:{c.instructions+=2;NFSU2_TR(0x658bd2);
__builtin_memmove((R+4),(R+28),4);
}
B658bd4:{NFSU2_TR(0x658bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658bd9ull));
TAIL_STATIC(0x65061bu,650);
}
B658bd9:L658bd9:{c.instructions+=1;NFSU2_TR(0x658bd9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658bde:L658bde:{c.instructions+=4;NFSU2_TR(0x658bde);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658be1:{NFSU2_TR(0x658be1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658be2:{NFSU2_TR(0x658be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658be5:{NFSU2_TR(0x658be5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658be6:L658be6:{c.instructions+=2;NFSU2_TR(0x658be6);
__builtin_memmove((R+4),(R+28),4);
}
B658be8:{NFSU2_TR(0x658be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658bedull));
TAIL_STATIC(0x65069eu,650);
}
B658bed:L658bed:{c.instructions+=1;NFSU2_TR(0x658bed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658bf2:L658bf2:{c.instructions+=6;NFSU2_TR(0x658bf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658bf5:{NFSU2_TR(0x658bf5);
__builtin_memmove((R+4),(R+28),4);
}
B658bf7:{NFSU2_TR(0x658bf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658bfa:{NFSU2_TR(0x658bfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658bfd:{NFSU2_TR(0x658bfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658c00:{NFSU2_TR(0x658c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658c05ull));
TAIL_STATIC(0x65069eu,650);
}
B658c05:L658c05:{c.instructions+=2;NFSU2_TR(0x658c05);
__builtin_memmove((R+24),(R+0),4);
}
B658c07:{NFSU2_TR(0x658c07);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6587e0u);}goto L6587e0;}
}
B658c0c:L658c0c:{c.instructions+=2;NFSU2_TR(0x658c0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c0d:{NFSU2_TR(0x658c0d);
{goto L658c12;}
}
B658c0f:L658c0f:{c.instructions+=1;NFSU2_TR(0x658c0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658c12:L658c12:{c.instructions+=4;NFSU2_TR(0x658c12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658c15:{NFSU2_TR(0x658c15);
__builtin_memmove((R+4),(R+28),4);
}
B658c17:{NFSU2_TR(0x658c17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658c1a:{NFSU2_TR(0x658c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658c1full));
TAIL_STATIC(0x655699u,655);
}
B658c1f:L658c1f:{c.instructions+=1;NFSU2_TR(0x658c1f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658c24:L658c24:{c.instructions+=3;NFSU2_TR(0x658c24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c25:{NFSU2_TR(0x658c25);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c27:{NFSU2_TR(0x658c27);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6587d0u);}goto L6587d0;}
}
B658c2c:L658c2c:{c.instructions+=3;NFSU2_TR(0x658c2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658c2f:{NFSU2_TR(0x658c2f);
__builtin_memmove((R+4),(R+28),4);
}
B658c31:{NFSU2_TR(0x658c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658c36ull));
TAIL_STATIC(0x6505b9u,650);
}
B658c36:L658c36:{c.instructions+=1;NFSU2_TR(0x658c36);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658c3b:L658c3b:{c.instructions+=2;NFSU2_TR(0x658c3b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c3d:{NFSU2_TR(0x658c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658c42ull));
TAIL_STATIC(0x645362u,645);
}
B658c42:L658c42:{c.instructions+=2;NFSU2_TR(0x658c42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658c44:{NFSU2_TR(0x658c44);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658c4a:L658c4a:{c.instructions+=2;NFSU2_TR(0x658c4a);
u8 U[4];
w4(U+0,u32(0x7b4f84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c4f:{NFSU2_TR(0x658c4f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65843bu);}goto L65843b;}
}
B658c54:L658c54:{c.instructions+=2;NFSU2_TR(0x658c54);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c56:{NFSU2_TR(0x658c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658c5bull));
TAIL_STATIC(0x645362u,645);
}
B658c5b:L658c5b:{c.instructions+=2;NFSU2_TR(0x658c5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658c5d:{NFSU2_TR(0x658c5d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658c63:L658c63:{c.instructions+=1;NFSU2_TR(0x658c63);
u8 U[4];
w4(U+0,u32(0x7b4f84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c68:L658c68:{c.instructions+=2;NFSU2_TR(0x658c68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658c6b:{NFSU2_TR(0x658c6b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65843cu);}goto L65843c;}
}
B658c70:L658c70:{c.instructions+=7;NFSU2_TR(0x658c70);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B658c73:{NFSU2_TR(0x658c73);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B658c75:{NFSU2_TR(0x658c75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c76:{NFSU2_TR(0x658c76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c77:{NFSU2_TR(0x658c77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c78:{NFSU2_TR(0x658c78);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B658c7b:{NFSU2_TR(0x658c7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c7d:L658c7d:{c.instructions+=3;NFSU2_TR(0x658c7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c7e:{NFSU2_TR(0x658c7e);
__builtin_memmove((R+4),(R+28),4);
}
B658c80:{NFSU2_TR(0x658c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658c85ull));
TAIL_STATIC(0x651db1u,651);
}
B658c85:L658c85:{c.instructions+=1;NFSU2_TR(0x658c85);
{goto L658ff9;}
}
B658c8a:L658c8a:{c.instructions+=8;NFSU2_TR(0x658c8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B658c8d:{NFSU2_TR(0x658c8d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B658c8f:{NFSU2_TR(0x658c8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c90:{NFSU2_TR(0x658c90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c91:{NFSU2_TR(0x658c91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c92:{NFSU2_TR(0x658c92);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B658c95:{NFSU2_TR(0x658c95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658c96:{NFSU2_TR(0x658c96);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658c7du);}goto L658c7d;}
}
B658c98:L658c98:{c.instructions+=3;NFSU2_TR(0x658c98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658c9b:{NFSU2_TR(0x658c9b);
__builtin_memmove((R+4),(R+28),4);
}
B658c9d:{NFSU2_TR(0x658c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ca2ull));
TAIL_STATIC(0x651ec9u,651);
}
B658ca2:L658ca2:{c.instructions+=1;NFSU2_TR(0x658ca2);
{goto L658ff9;}
}
B658ca7:L658ca7:{c.instructions+=3;NFSU2_TR(0x658ca7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658caa:{NFSU2_TR(0x658caa);
__builtin_memmove((R+4),(R+28),4);
}
B658cac:{NFSU2_TR(0x658cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658cb1ull));
TAIL_STATIC(0x651f4du,651);
}
B658cb1:L658cb1:{c.instructions+=1;NFSU2_TR(0x658cb1);
{goto L658ff9;}
}
B658cb6:L658cb6:{c.instructions+=4;NFSU2_TR(0x658cb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658cb7:{NFSU2_TR(0x658cb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658cba:{NFSU2_TR(0x658cba);
__builtin_memmove((R+4),(R+28),4);
}
B658cbc:{NFSU2_TR(0x658cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658cc1ull));
TAIL_STATIC(0x65479cu,654);
}
B658cc1:L658cc1:{c.instructions+=1;NFSU2_TR(0x658cc1);
{goto L658ff9;}
}
B658cc6:L658cc6:{c.instructions+=2;NFSU2_TR(0x658cc6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658cc8:{NFSU2_TR(0x658cc8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658cca:L658cca:{c.instructions+=4;NFSU2_TR(0x658cca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ccd:{NFSU2_TR(0x658ccd);
__builtin_memmove((R+4),(R+28),4);
}
B658ccf:{NFSU2_TR(0x658ccf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658cd2:{NFSU2_TR(0x658cd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658cd7ull));
TAIL_STATIC(0x6548a3u,654);
}
B658cd7:L658cd7:{c.instructions+=1;NFSU2_TR(0x658cd7);
{goto L658ff9;}
}
B658cdc:L658cdc:{c.instructions+=5;NFSU2_TR(0x658cdc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658cdd:{NFSU2_TR(0x658cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ce0:{NFSU2_TR(0x658ce0);
__builtin_memmove((R+4),(R+28),4);
}
B658ce2:{NFSU2_TR(0x658ce2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ce5:{NFSU2_TR(0x658ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ceaull));
TAIL_STATIC(0x657bdcu,657);
}
B658cea:L658cea:{c.instructions+=1;NFSU2_TR(0x658cea);
{goto L658ff9;}
}
B658cef:L658cef:{c.instructions+=3;NFSU2_TR(0x658cef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658cf2:{NFSU2_TR(0x658cf2);
__builtin_memmove((R+4),(R+28),4);
}
B658cf4:{NFSU2_TR(0x658cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658cf9ull));
TAIL_STATIC(0x6501efu,650);
}
B658cf9:L658cf9:{c.instructions+=1;NFSU2_TR(0x658cf9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658cfe:L658cfe:{c.instructions+=2;NFSU2_TR(0x658cfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d01:{NFSU2_TR(0x658d01);
{goto L658d06;}
}
B658d03:L658d03:{c.instructions+=1;NFSU2_TR(0x658d03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d06:L658d06:{c.instructions+=2;NFSU2_TR(0x658d06);
__builtin_memmove((R+4),(R+28),4);
}
B658d08:{NFSU2_TR(0x658d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658d0dull));
TAIL_STATIC(0x6525acu,652);
}
B658d0d:L658d0d:{c.instructions+=1;NFSU2_TR(0x658d0d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658d12:L658d12:{c.instructions+=2;NFSU2_TR(0x658d12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d13:{NFSU2_TR(0x658d13);
{goto L658d26;}
}
B658d15:L658d15:{c.instructions+=3;NFSU2_TR(0x658d15);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d18:{NFSU2_TR(0x658d18);
__builtin_memmove((R+4),(R+28),4);
}
B658d1a:{NFSU2_TR(0x658d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658d1full));
TAIL_STATIC(0x6526e6u,652);
}
B658d1f:L658d1f:{c.instructions+=1;NFSU2_TR(0x658d1f);
{goto L658ff9;}
}
B658d24:L658d24:{c.instructions+=1;NFSU2_TR(0x658d24);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d26:L658d26:{c.instructions+=5;NFSU2_TR(0x658d26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d29:{NFSU2_TR(0x658d29);
__builtin_memmove((R+4),(R+28),4);
}
B658d2b:{NFSU2_TR(0x658d2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d2e:{NFSU2_TR(0x658d2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d31:{NFSU2_TR(0x658d31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658d36ull));
TAIL_STATIC(0x657ff4u,657);
}
B658d36:L658d36:{c.instructions+=1;NFSU2_TR(0x658d36);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658d3b:L658d3b:{c.instructions+=3;NFSU2_TR(0x658d3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d3e:{NFSU2_TR(0x658d3e);
__builtin_memmove((R+4),(R+28),4);
}
B658d40:{NFSU2_TR(0x658d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658d45ull));
TAIL_STATIC(0x6527c0u,652);
}
B658d45:L658d45:{c.instructions+=1;NFSU2_TR(0x658d45);
{goto L658ff9;}
}
B658d4a:L658d4a:{c.instructions+=4;NFSU2_TR(0x658d4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d4d:{NFSU2_TR(0x658d4d);
__builtin_memmove((R+4),(R+28),4);
}
B658d4f:{NFSU2_TR(0x658d4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d52:{NFSU2_TR(0x658d52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658d57ull));
TAIL_STATIC(0x656bc0u,656);
}
B658d57:L658d57:{c.instructions+=1;NFSU2_TR(0x658d57);
{goto L658ff9;}
}
B658d5c:L658d5c:{c.instructions+=4;NFSU2_TR(0x658d5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d5f:{NFSU2_TR(0x658d5f);
__builtin_memmove((R+4),(R+28),4);
}
B658d61:{NFSU2_TR(0x658d61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d64:{NFSU2_TR(0x658d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658d69ull));
TAIL_STATIC(0x65211bu,652);
}
B658d69:L658d69:{c.instructions+=1;NFSU2_TR(0x658d69);
{goto L658ff9;}
}
B658d6e:L658d6e:{c.instructions+=4;NFSU2_TR(0x658d6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d70:{NFSU2_TR(0x658d70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d71:{NFSU2_TR(0x658d71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d74:{NFSU2_TR(0x658d74);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d76:L658d76:{c.instructions+=2;NFSU2_TR(0x658d76);
__builtin_memmove((R+4),(R+28),4);
}
B658d78:{NFSU2_TR(0x658d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658d7dull));
TAIL_STATIC(0x656deau,656);
}
B658d7d:L658d7d:{c.instructions+=1;NFSU2_TR(0x658d7d);
{goto L658ff9;}
}
B658d82:L658d82:{c.instructions+=5;NFSU2_TR(0x658d82);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d84:{NFSU2_TR(0x658d84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d85:{NFSU2_TR(0x658d85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d88:{NFSU2_TR(0x658d88);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d8a:{NFSU2_TR(0x658d8a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658d8c:L658d8c:{c.instructions+=5;NFSU2_TR(0x658d8c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d8e:{NFSU2_TR(0x658d8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d8f:{NFSU2_TR(0x658d8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d92:{NFSU2_TR(0x658d92);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d94:{NFSU2_TR(0x658d94);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658d96:L658d96:{c.instructions+=5;NFSU2_TR(0x658d96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d98:{NFSU2_TR(0x658d98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d99:{NFSU2_TR(0x658d99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658d9c:{NFSU2_TR(0x658d9c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658d9e:{NFSU2_TR(0x658d9e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658da0:L658da0:{c.instructions+=5;NFSU2_TR(0x658da0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658da2:{NFSU2_TR(0x658da2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658da3:{NFSU2_TR(0x658da3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658da6:{NFSU2_TR(0x658da6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658da8:{NFSU2_TR(0x658da8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658daa:L658daa:{c.instructions+=5;NFSU2_TR(0x658daa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dac:{NFSU2_TR(0x658dac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dad:{NFSU2_TR(0x658dad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658db0:{NFSU2_TR(0x658db0);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658db2:{NFSU2_TR(0x658db2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658db4:L658db4:{c.instructions+=5;NFSU2_TR(0x658db4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658db6:{NFSU2_TR(0x658db6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658db7:{NFSU2_TR(0x658db7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658dba:{NFSU2_TR(0x658dba);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dbc:{NFSU2_TR(0x658dbc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658dbe:L658dbe:{c.instructions+=3;NFSU2_TR(0x658dbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dc0:{NFSU2_TR(0x658dc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dc1:{NFSU2_TR(0x658dc1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658ccau);}goto L658cca;}
}
B658dc6:L658dc6:{c.instructions+=5;NFSU2_TR(0x658dc6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dc8:{NFSU2_TR(0x658dc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658dcb:{NFSU2_TR(0x658dcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658dce:{NFSU2_TR(0x658dce);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dd0:{NFSU2_TR(0x658dd0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658dd2:L658dd2:{c.instructions+=5;NFSU2_TR(0x658dd2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dd4:{NFSU2_TR(0x658dd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658dd7:{NFSU2_TR(0x658dd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658dda:{NFSU2_TR(0x658dda);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ddc:{NFSU2_TR(0x658ddc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658dde:L658dde:{c.instructions+=5;NFSU2_TR(0x658dde);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658de0:{NFSU2_TR(0x658de0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658de3:{NFSU2_TR(0x658de3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658de6:{NFSU2_TR(0x658de6);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658de8:{NFSU2_TR(0x658de8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658dea:L658dea:{c.instructions+=5;NFSU2_TR(0x658dea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658dec:{NFSU2_TR(0x658dec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658def:{NFSU2_TR(0x658def);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658df2:{NFSU2_TR(0x658df2);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658df4:{NFSU2_TR(0x658df4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658df6:L658df6:{c.instructions+=5;NFSU2_TR(0x658df6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658df8:{NFSU2_TR(0x658df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658dfb:{NFSU2_TR(0x658dfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658dfe:{NFSU2_TR(0x658dfe);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e00:{NFSU2_TR(0x658e00);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e05:L658e05:{c.instructions+=5;NFSU2_TR(0x658e05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e07:{NFSU2_TR(0x658e07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e0a:{NFSU2_TR(0x658e0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e0d:{NFSU2_TR(0x658e0d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e0f:{NFSU2_TR(0x658e0f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e14:L658e14:{c.instructions+=5;NFSU2_TR(0x658e14);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e16:{NFSU2_TR(0x658e16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e19:{NFSU2_TR(0x658e19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e1c:{NFSU2_TR(0x658e1c);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e1e:{NFSU2_TR(0x658e1e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e23:L658e23:{c.instructions+=5;NFSU2_TR(0x658e23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e25:{NFSU2_TR(0x658e25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e28:{NFSU2_TR(0x658e28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e2b:{NFSU2_TR(0x658e2b);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e2d:{NFSU2_TR(0x658e2d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e32:L658e32:{c.instructions+=5;NFSU2_TR(0x658e32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e34:{NFSU2_TR(0x658e34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e37:{NFSU2_TR(0x658e37);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e3a:{NFSU2_TR(0x658e3a);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e3c:{NFSU2_TR(0x658e3c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e41:L658e41:{c.instructions+=5;NFSU2_TR(0x658e41);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e43:{NFSU2_TR(0x658e43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e46:{NFSU2_TR(0x658e46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e49:{NFSU2_TR(0x658e49);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e4b:{NFSU2_TR(0x658e4b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e50:L658e50:{c.instructions+=5;NFSU2_TR(0x658e50);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e52:{NFSU2_TR(0x658e52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e55:{NFSU2_TR(0x658e55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e58:{NFSU2_TR(0x658e58);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e5a:{NFSU2_TR(0x658e5a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e5f:L658e5f:{c.instructions+=5;NFSU2_TR(0x658e5f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e61:{NFSU2_TR(0x658e61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e64:{NFSU2_TR(0x658e64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e67:{NFSU2_TR(0x658e67);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e69:{NFSU2_TR(0x658e69);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e6e:L658e6e:{c.instructions+=5;NFSU2_TR(0x658e6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e70:{NFSU2_TR(0x658e70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e73:{NFSU2_TR(0x658e73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e76:{NFSU2_TR(0x658e76);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e78:{NFSU2_TR(0x658e78);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658e7d:L658e7d:{c.instructions+=5;NFSU2_TR(0x658e7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e80:{NFSU2_TR(0x658e80);
__builtin_memmove((R+4),(R+28),4);
}
B658e82:{NFSU2_TR(0x658e82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e85:{NFSU2_TR(0x658e85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e88:{NFSU2_TR(0x658e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658e8dull));
TAIL_STATIC(0x654accu,654);
}
B658e8d:L658e8d:{c.instructions+=1;NFSU2_TR(0x658e8d);
{goto L658ff9;}
}
B658e92:L658e92:{c.instructions+=5;NFSU2_TR(0x658e92);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e94:{NFSU2_TR(0x658e94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e97:{NFSU2_TR(0x658e97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658e9a:{NFSU2_TR(0x658e9a);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658e9c:{NFSU2_TR(0x658e9c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658ea1:L658ea1:{c.instructions+=5;NFSU2_TR(0x658ea1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ea3:{NFSU2_TR(0x658ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ea6:{NFSU2_TR(0x658ea6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ea9:{NFSU2_TR(0x658ea9);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658eab:{NFSU2_TR(0x658eab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658eb0:L658eb0:{c.instructions+=5;NFSU2_TR(0x658eb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658eb2:{NFSU2_TR(0x658eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658eb5:{NFSU2_TR(0x658eb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658eb8:{NFSU2_TR(0x658eb8);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658eba:{NFSU2_TR(0x658eba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658ebf:L658ebf:{c.instructions+=5;NFSU2_TR(0x658ebf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ec1:{NFSU2_TR(0x658ec1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ec4:{NFSU2_TR(0x658ec4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ec7:{NFSU2_TR(0x658ec7);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ec9:{NFSU2_TR(0x658ec9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658ece:L658ece:{c.instructions+=5;NFSU2_TR(0x658ece);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ed0:{NFSU2_TR(0x658ed0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ed3:{NFSU2_TR(0x658ed3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ed6:{NFSU2_TR(0x658ed6);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ed8:{NFSU2_TR(0x658ed8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658edd:L658edd:{c.instructions+=5;NFSU2_TR(0x658edd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658edf:{NFSU2_TR(0x658edf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ee2:{NFSU2_TR(0x658ee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658ee5:{NFSU2_TR(0x658ee5);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ee7:{NFSU2_TR(0x658ee7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658eec:L658eec:{c.instructions+=2;NFSU2_TR(0x658eec);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658eee:{NFSU2_TR(0x658eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ef3ull));
TAIL_STATIC(0x645362u,645);
}
B658ef3:L658ef3:{c.instructions+=2;NFSU2_TR(0x658ef3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658ef5:{NFSU2_TR(0x658ef5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658efb:L658efb:{c.instructions+=2;NFSU2_TR(0x658efb);
u8 U[4];
w4(U+0,u32(0x7b4f78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f00:{NFSU2_TR(0x658f00);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65843bu);}goto L65843b;}
}
B658f05:L658f05:{c.instructions+=2;NFSU2_TR(0x658f05);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f07:{NFSU2_TR(0x658f07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658f0cull));
TAIL_STATIC(0x645362u,645);
}
B658f0c:L658f0c:{c.instructions+=2;NFSU2_TR(0x658f0c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658f0e:{NFSU2_TR(0x658f0e);
if(r1(R+518)){{goto L658f24;}}
}
B658f10:L658f10:{c.instructions+=5;NFSU2_TR(0x658f10);
u8 U[4];
w4(U+0,u32(0x7b4f78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f15:{NFSU2_TR(0x658f15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f16:{NFSU2_TR(0x658f16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658f19:{NFSU2_TR(0x658f19);
__builtin_memmove((R+4),(R+0),4);
}
B658f1b:{NFSU2_TR(0x658f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658f20ull));
TAIL_STATIC(0x672498u,672);
}
B658f20:L658f20:{c.instructions+=2;NFSU2_TR(0x658f20);
__builtin_memmove((R+24),(R+0),4);
}
B658f22:{NFSU2_TR(0x658f22);
{goto L658f26;}
}
B658f24:L658f24:{c.instructions+=1;NFSU2_TR(0x658f24);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B658f26:L658f26:{c.instructions+=3;NFSU2_TR(0x658f26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f27:{NFSU2_TR(0x658f27);
__builtin_memmove((R+4),(R+28),4);
}
B658f29:{NFSU2_TR(0x658f29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658f2eull));
TAIL_STATIC(0x64f625u,64f);
}
B658f2e:L658f2e:{c.instructions+=2;NFSU2_TR(0x658f2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B658f30:{NFSU2_TR(0x658f30);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}}
}
B658f36:L658f36:{c.instructions+=2;NFSU2_TR(0x658f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f37:{NFSU2_TR(0x658f37);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658270u);}goto L658270;}
}
B658f3c:L658f3c:{c.instructions+=2;NFSU2_TR(0x658f3c);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f3e:{NFSU2_TR(0x658f3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658f43ull));
TAIL_STATIC(0x645362u,645);
}
B658f43:L658f43:{c.instructions+=2;NFSU2_TR(0x658f43);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658f45:{NFSU2_TR(0x658f45);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658f4b:L658f4b:{c.instructions+=2;NFSU2_TR(0x658f4b);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f50:{NFSU2_TR(0x658f50);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65843bu);}goto L65843b;}
}
B658f55:L658f55:{c.instructions+=3;NFSU2_TR(0x658f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658f58:{NFSU2_TR(0x658f58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658f5a:{NFSU2_TR(0x658f5a);
if(r1(R+518)){{goto L658f84;}}
}
B658f5c:L658f5c:{c.instructions+=2;NFSU2_TR(0x658f5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B658f60:{NFSU2_TR(0x658f60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L658f84;}}
}
B658f62:L658f62:{c.instructions+=3;NFSU2_TR(0x658f62);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B658f65:{NFSU2_TR(0x658f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658f68:{NFSU2_TR(0x658f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L658f6d;}}
}
B658f6a:L658f6a:{c.instructions+=1;NFSU2_TR(0x658f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658f6d:L658f6d:{c.instructions+=6;NFSU2_TR(0x658f6d);
u8 U[4];
w4(U+0,u32(0x7b4f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f72:{NFSU2_TR(0x658f72);
u8 U[4];
w4(U+0,u32(0xc09ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f77:{NFSU2_TR(0x658f77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B658f7a:{NFSU2_TR(0x658f7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f7b:{NFSU2_TR(0x658f7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f7c:{NFSU2_TR(0x658f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658f81ull));
TAIL_STATIC(0x64f580u,64f);
}
B658f81:L658f81:{c.instructions+=1;NFSU2_TR(0x658f81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B658f84:L658f84:{c.instructions+=5;NFSU2_TR(0x658f84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f85:{NFSU2_TR(0x658f85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658f88:{NFSU2_TR(0x658f88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658f8b:{NFSU2_TR(0x658f8b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658f8d:{NFSU2_TR(0x658f8d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658d76u);}goto L658d76;}
}
B658f92:L658f92:{c.instructions+=3;NFSU2_TR(0x658f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658f95:{NFSU2_TR(0x658f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B658f98:{NFSU2_TR(0x658f98);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658f9d:L658f9d:{c.instructions+=5;NFSU2_TR(0x658f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658fa0:{NFSU2_TR(0x658fa0);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B658fa3:{NFSU2_TR(0x658fa3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B658fa5:{NFSU2_TR(0x658fa5);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B658fa8:{NFSU2_TR(0x658fa8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658fad:L658fad:{c.instructions+=4;NFSU2_TR(0x658fad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658fb0:{NFSU2_TR(0x658fb0);
__builtin_memmove((R+4),(R+28),4);
}
B658fb2:{NFSU2_TR(0x658fb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658fb5:{NFSU2_TR(0x658fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658fbaull));
TAIL_STATIC(0x65090du,650);
}
B658fba:L658fba:{c.instructions+=1;NFSU2_TR(0x658fba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658fbf:L658fbf:{c.instructions+=4;NFSU2_TR(0x658fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B658fc2:{NFSU2_TR(0x658fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B658fc5:{NFSU2_TR(0x658fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B658fc8:{NFSU2_TR(0x658fc8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658482u);}goto L658482;}
}
B658fcd:L658fcd:{c.instructions+=4;NFSU2_TR(0x658fcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658fd0:{NFSU2_TR(0x658fd0);
__builtin_memmove((R+4),(R+28),4);
}
B658fd2:{NFSU2_TR(0x658fd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B658fd5:{NFSU2_TR(0x658fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658fdaull));
TAIL_STATIC(0x6509fcu,650);
}
B658fda:L658fda:{c.instructions+=1;NFSU2_TR(0x658fda);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x658278u);}goto L658278;}
}
B658fdf:L658fdf:{c.instructions+=2;NFSU2_TR(0x658fdf);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658fe1:{NFSU2_TR(0x658fe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658fe6ull));
TAIL_STATIC(0x645362u,645);
}
B658fe6:L658fe6:{c.instructions+=2;NFSU2_TR(0x658fe6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B658fe8:{NFSU2_TR(0x658fe8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823du);}goto L65823d;}}
}
B658fee:L658fee:{c.instructions+=4;NFSU2_TR(0x658fee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B658ff1:{NFSU2_TR(0x658ff1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B658ff2:{NFSU2_TR(0x658ff2);
__builtin_memmove((R+4),(R+0),4);
}
B658ff4:{NFSU2_TR(0x658ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x658ff9ull));
TAIL_STATIC(0x67269fu,672);
}
B658ff9:L658ff9:{c.instructions+=2;NFSU2_TR(0x658ff9);
__builtin_memmove((R+24),(R+0),4);
}
B658ffb:{NFSU2_TR(0x658ffb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65823fu);}goto L65823f;}
}
XIT:NFSU2_TR_EXIT(0x658,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
