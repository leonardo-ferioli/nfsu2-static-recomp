#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_676(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_679(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_682(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x681,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x681,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_681(u8* __restrict R,Cpu& c);
u32 page_681(Cpu& c){return body_681(c.regs.data(),c);}
__attribute__((noinline)) u32 body_681(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x681002:goto L681002;
case 0x681004:c.instructions+=10;goto B681004;
case 0x681007:c.instructions+=9;goto B681007;
case 0x681008:c.instructions+=8;goto B681008;
case 0x68100b:c.instructions+=7;goto B68100b;
case 0x68100c:c.instructions+=6;goto B68100c;
case 0x68100f:c.instructions+=5;goto B68100f;
case 0x681010:c.instructions+=4;goto B681010;
case 0x681011:c.instructions+=3;goto B681011;
case 0x681012:c.instructions+=2;goto B681012;
case 0x681014:c.instructions+=1;goto B681014;
case 0x681019:goto L681019;
case 0x68101b:c.instructions+=1;goto B68101b;
case 0x681021:goto L681021;
case 0x681024:c.instructions+=12;goto B681024;
case 0x681027:c.instructions+=11;goto B681027;
case 0x681029:c.instructions+=10;goto B681029;
case 0x68102c:c.instructions+=9;goto B68102c;
case 0x68102d:c.instructions+=8;goto B68102d;
case 0x681030:c.instructions+=7;goto B681030;
case 0x681031:c.instructions+=6;goto B681031;
case 0x681034:c.instructions+=5;goto B681034;
case 0x681035:c.instructions+=4;goto B681035;
case 0x681036:c.instructions+=3;goto B681036;
case 0x681039:c.instructions+=2;goto B681039;
case 0x68103b:c.instructions+=1;goto B68103b;
case 0x681040:goto L681040;
case 0x681042:c.instructions+=1;goto B681042;
case 0x681048:goto L681048;
case 0x68104b:c.instructions+=5;goto B68104b;
case 0x68104e:c.instructions+=4;goto B68104e;
case 0x681051:c.instructions+=3;goto B681051;
case 0x681053:c.instructions+=2;goto B681053;
case 0x681056:c.instructions+=1;goto B681056;
case 0x681058:goto L681058;
case 0x68105c:c.instructions+=10;goto B68105c;
case 0x68105e:c.instructions+=9;goto B68105e;
case 0x68105f:c.instructions+=8;goto B68105f;
case 0x681062:c.instructions+=7;goto B681062;
case 0x681063:c.instructions+=6;goto B681063;
case 0x681066:c.instructions+=5;goto B681066;
case 0x681067:c.instructions+=4;goto B681067;
case 0x68106c:c.instructions+=3;goto B68106c;
case 0x68106f:c.instructions+=2;goto B68106f;
case 0x681071:c.instructions+=1;goto B681071;
case 0x681076:goto L681076;
case 0x681078:c.instructions+=1;goto B681078;
case 0x68107e:goto L68107e;
case 0x681081:c.instructions+=6;goto B681081;
case 0x681084:c.instructions+=5;goto B681084;
case 0x681087:c.instructions+=4;goto B681087;
case 0x68108a:c.instructions+=3;goto B68108a;
case 0x68108d:c.instructions+=2;goto B68108d;
case 0x681093:c.instructions+=1;goto B681093;
case 0x681096:goto L681096;
case 0x681099:c.instructions+=2;goto B681099;
case 0x68109c:c.instructions+=1;goto B68109c;
case 0x6810a2:goto L6810a2;
case 0x6810a5:c.instructions+=4;goto B6810a5;
case 0x6810a8:c.instructions+=3;goto B6810a8;
case 0x6810aa:c.instructions+=2;goto B6810aa;
case 0x6810ad:c.instructions+=1;goto B6810ad;
case 0x6810b0:goto L6810b0;
case 0x6810b3:c.instructions+=8;goto B6810b3;
case 0x6810b5:c.instructions+=7;goto B6810b5;
case 0x6810b6:c.instructions+=6;goto B6810b6;
case 0x6810b7:c.instructions+=5;goto B6810b7;
case 0x6810ba:c.instructions+=4;goto B6810ba;
case 0x6810bc:c.instructions+=3;goto B6810bc;
case 0x6810be:c.instructions+=2;goto B6810be;
case 0x6810c4:c.instructions+=1;goto B6810c4;
case 0x6810c9:goto L6810c9;
case 0x6810cc:c.instructions+=3;goto B6810cc;
case 0x6810cf:c.instructions+=2;goto B6810cf;
case 0x6810d2:c.instructions+=1;goto B6810d2;
case 0x6810d8:goto L6810d8;
case 0x6810db:c.instructions+=7;goto B6810db;
case 0x6810de:c.instructions+=6;goto B6810de;
case 0x6810e1:c.instructions+=5;goto B6810e1;
case 0x6810e4:c.instructions+=4;goto B6810e4;
case 0x6810e6:c.instructions+=3;goto B6810e6;
case 0x6810e9:c.instructions+=2;goto B6810e9;
case 0x6810eb:c.instructions+=1;goto B6810eb;
case 0x6810f0:goto L6810f0;
case 0x6810f4:c.instructions+=10;goto B6810f4;
case 0x6810f7:c.instructions+=9;goto B6810f7;
case 0x6810fa:c.instructions+=8;goto B6810fa;
case 0x6810fd:c.instructions+=7;goto B6810fd;
case 0x681100:c.instructions+=6;goto B681100;
case 0x681106:c.instructions+=5;goto B681106;
case 0x68110c:c.instructions+=4;goto B68110c;
case 0x68110f:c.instructions+=3;goto B68110f;
case 0x681115:c.instructions+=2;goto B681115;
case 0x681118:c.instructions+=1;goto B681118;
case 0x68111a:goto L68111a;
case 0x68111d:c.instructions+=5;goto B68111d;
case 0x681121:c.instructions+=4;goto B681121;
case 0x681124:c.instructions+=3;goto B681124;
case 0x681127:c.instructions+=2;goto B681127;
case 0x68112a:c.instructions+=1;goto B68112a;
case 0x68112d:goto L68112d;
case 0x681130:c.instructions+=7;goto B681130;
case 0x681132:c.instructions+=6;goto B681132;
case 0x681135:c.instructions+=5;goto B681135;
case 0x681138:c.instructions+=4;goto B681138;
case 0x68113a:c.instructions+=3;goto B68113a;
case 0x68113c:c.instructions+=2;goto B68113c;
case 0x681140:c.instructions+=1;goto B681140;
case 0x681142:goto L681142;
case 0x681145:c.instructions+=4;goto B681145;
case 0x681148:c.instructions+=3;goto B681148;
case 0x68114a:c.instructions+=2;goto B68114a;
case 0x68114d:c.instructions+=1;goto B68114d;
case 0x68114f:goto L68114f;
case 0x681152:c.instructions+=1;goto B681152;
case 0x681155:goto L681155;
case 0x681158:c.instructions+=4;goto B681158;
case 0x68115b:c.instructions+=3;goto B68115b;
case 0x68115d:c.instructions+=2;goto B68115d;
case 0x681160:c.instructions+=1;goto B681160;
case 0x681162:goto L681162;
case 0x681165:c.instructions+=1;goto B681165;
case 0x681168:goto L681168;
case 0x68116b:c.instructions+=4;goto B68116b;
case 0x68116e:c.instructions+=3;goto B68116e;
case 0x681170:c.instructions+=2;goto B681170;
case 0x681171:c.instructions+=1;goto B681171;
case 0x681173:goto L681173;
case 0x681176:goto L681176;
case 0x681179:c.instructions+=4;goto B681179;
case 0x68117c:c.instructions+=3;goto B68117c;
case 0x68117e:c.instructions+=2;goto B68117e;
case 0x681181:c.instructions+=1;goto B681181;
case 0x681183:goto L681183;
case 0x681187:goto L681187;
case 0x68118a:c.instructions+=5;goto B68118a;
case 0x68118d:c.instructions+=4;goto B68118d;
case 0x68118f:c.instructions+=3;goto B68118f;
case 0x681191:c.instructions+=2;goto B681191;
case 0x681194:c.instructions+=1;goto B681194;
case 0x681196:goto L681196;
case 0x681199:goto L681199;
case 0x68119c:c.instructions+=4;goto B68119c;
case 0x68119f:c.instructions+=3;goto B68119f;
case 0x6811a3:c.instructions+=2;goto B6811a3;
case 0x6811a6:c.instructions+=1;goto B6811a6;
case 0x6811ac:goto L6811ac;
case 0x6811b1:goto L6811b1;
case 0x6811b4:c.instructions+=1;goto B6811b4;
case 0x6811b6:goto L6811b6;
case 0x6811b9:c.instructions+=1;goto B6811b9;
case 0x6811bb:goto L6811bb;
case 0x6811c0:c.instructions+=4;goto B6811c0;
case 0x6811c5:c.instructions+=3;goto B6811c5;
case 0x6811c8:c.instructions+=2;goto B6811c8;
case 0x6811c9:c.instructions+=1;goto B6811c9;
case 0x6811ce:goto L6811ce;
case 0x6811d1:c.instructions+=1;goto B6811d1;
case 0x6811d3:goto L6811d3;
case 0x6811da:goto L6811da;
case 0x6811df:c.instructions+=1;goto B6811df;
case 0x6811e4:goto L6811e4;
case 0x6811e7:c.instructions+=6;goto B6811e7;
case 0x6811ea:c.instructions+=5;goto B6811ea;
case 0x6811ec:c.instructions+=4;goto B6811ec;
case 0x6811ef:c.instructions+=3;goto B6811ef;
case 0x6811f2:c.instructions+=2;goto B6811f2;
case 0x6811f5:c.instructions+=1;goto B6811f5;
case 0x6811f7:goto L6811f7;
case 0x6811f8:c.instructions+=2;goto B6811f8;
case 0x6811fa:c.instructions+=1;goto B6811fa;
case 0x6811ff:goto L6811ff;
case 0x681201:c.instructions+=2;goto B681201;
case 0x681203:c.instructions+=1;goto B681203;
case 0x681209:goto L681209;
case 0x68120b:c.instructions+=2;goto B68120b;
case 0x68120d:c.instructions+=1;goto B68120d;
case 0x68120f:goto L68120f;
case 0x681212:c.instructions+=5;goto B681212;
case 0x681214:c.instructions+=4;goto B681214;
case 0x681217:c.instructions+=3;goto B681217;
case 0x681218:c.instructions+=2;goto B681218;
case 0x68121a:c.instructions+=1;goto B68121a;
case 0x68121c:goto L68121c;
case 0x68121d:c.instructions+=3;goto B68121d;
case 0x681220:c.instructions+=2;goto B681220;
case 0x681222:c.instructions+=1;goto B681222;
case 0x681227:goto L681227;
case 0x681229:c.instructions+=1;goto B681229;
case 0x68122f:goto L68122f;
case 0x681230:c.instructions+=8;goto B681230;
case 0x681231:c.instructions+=7;goto B681231;
case 0x681234:c.instructions+=6;goto B681234;
case 0x681235:c.instructions+=5;goto B681235;
case 0x681236:c.instructions+=4;goto B681236;
case 0x681239:c.instructions+=3;goto B681239;
case 0x68123b:c.instructions+=2;goto B68123b;
case 0x68123e:c.instructions+=1;goto B68123e;
case 0x681243:goto L681243;
case 0x681245:c.instructions+=1;goto B681245;
case 0x68124b:goto L68124b;
case 0x681250:goto L681250;
case 0x681253:c.instructions+=6;goto B681253;
case 0x681256:c.instructions+=5;goto B681256;
case 0x681258:c.instructions+=4;goto B681258;
case 0x681259:c.instructions+=3;goto B681259;
case 0x68125c:c.instructions+=2;goto B68125c;
case 0x68125f:c.instructions+=1;goto B68125f;
case 0x681265:goto L681265;
case 0x681268:c.instructions+=1;goto B681268;
case 0x68126a:goto L68126a;
case 0x68126e:c.instructions+=1;goto B68126e;
case 0x681270:goto L681270;
case 0x681274:c.instructions+=1;goto B681274;
case 0x68127a:goto L68127a;
case 0x68127e:c.instructions+=1;goto B68127e;
case 0x681284:goto L681284;
case 0x681288:c.instructions+=1;goto B681288;
case 0x68128a:goto L68128a;
case 0x68128d:c.instructions+=1;goto B68128d;
case 0x68128f:goto L68128f;
case 0x681293:c.instructions+=1;goto B681293;
case 0x681295:goto L681295;
case 0x681298:goto L681298;
case 0x68129a:c.instructions+=5;goto B68129a;
case 0x68129d:c.instructions+=4;goto B68129d;
case 0x6812a0:c.instructions+=3;goto B6812a0;
case 0x6812a1:c.instructions+=2;goto B6812a1;
case 0x6812a3:c.instructions+=1;goto B6812a3;
case 0x6812a8:goto L6812a8;
case 0x6812aa:c.instructions+=2;goto B6812aa;
case 0x6812ac:c.instructions+=1;goto B6812ac;
case 0x6812b2:goto L6812b2;
case 0x6812b3:c.instructions+=3;goto B6812b3;
case 0x6812b4:c.instructions+=2;goto B6812b4;
case 0x6812b6:c.instructions+=1;goto B6812b6;
case 0x6812bb:goto L6812bb;
case 0x6812bd:c.instructions+=1;goto B6812bd;
case 0x6812c3:goto L6812c3;
case 0x6812c5:c.instructions+=1;goto B6812c5;
case 0x6812c7:goto L6812c7;
case 0x6812cb:c.instructions+=4;goto B6812cb;
case 0x6812ce:c.instructions+=3;goto B6812ce;
case 0x6812cf:c.instructions+=2;goto B6812cf;
case 0x6812d2:c.instructions+=1;goto B6812d2;
case 0x6812d4:goto L6812d4;
case 0x6812d6:c.instructions+=2;goto B6812d6;
case 0x6812d7:c.instructions+=1;goto B6812d7;
case 0x6812da:goto L6812da;
case 0x6812de:c.instructions+=4;goto B6812de;
case 0x6812e0:c.instructions+=3;goto B6812e0;
case 0x6812e1:c.instructions+=2;goto B6812e1;
case 0x6812e4:c.instructions+=1;goto B6812e4;
case 0x6812e6:goto L6812e6;
case 0x6812e9:c.instructions+=9;goto B6812e9;
case 0x6812eb:c.instructions+=8;goto B6812eb;
case 0x6812ee:c.instructions+=7;goto B6812ee;
case 0x6812f1:c.instructions+=6;goto B6812f1;
case 0x6812f4:c.instructions+=5;goto B6812f4;
case 0x6812f7:c.instructions+=4;goto B6812f7;
case 0x6812fa:c.instructions+=3;goto B6812fa;
case 0x6812fd:c.instructions+=2;goto B6812fd;
case 0x681302:c.instructions+=1;goto B681302;
case 0x681308:goto L681308;
case 0x68130c:c.instructions+=1;goto B68130c;
case 0x68130e:goto L68130e;
case 0x681312:c.instructions+=1;goto B681312;
case 0x681318:goto L681318;
case 0x68131a:c.instructions+=8;goto B68131a;
case 0x68131c:c.instructions+=7;goto B68131c;
case 0x68131f:c.instructions+=6;goto B68131f;
case 0x681320:c.instructions+=5;goto B681320;
case 0x681323:c.instructions+=4;goto B681323;
case 0x681325:c.instructions+=3;goto B681325;
case 0x68132a:c.instructions+=2;goto B68132a;
case 0x68132b:c.instructions+=1;goto B68132b;
case 0x681330:goto L681330;
case 0x681332:c.instructions+=1;goto B681332;
case 0x681338:goto L681338;
case 0x68133a:c.instructions+=7;goto B68133a;
case 0x68133c:c.instructions+=6;goto B68133c;
case 0x68133f:c.instructions+=5;goto B68133f;
case 0x681341:c.instructions+=4;goto B681341;
case 0x681344:c.instructions+=3;goto B681344;
case 0x681349:c.instructions+=2;goto B681349;
case 0x68134a:c.instructions+=1;goto B68134a;
case 0x68134f:goto L68134f;
case 0x681351:c.instructions+=1;goto B681351;
case 0x681357:goto L681357;
case 0x681359:c.instructions+=7;goto B681359;
case 0x68135b:c.instructions+=6;goto B68135b;
case 0x68135e:c.instructions+=5;goto B68135e;
case 0x681360:c.instructions+=4;goto B681360;
case 0x681363:c.instructions+=3;goto B681363;
case 0x681368:c.instructions+=2;goto B681368;
case 0x681369:c.instructions+=1;goto B681369;
case 0x68136e:goto L68136e;
case 0x681370:c.instructions+=1;goto B681370;
case 0x681376:goto L681376;
case 0x681378:c.instructions+=7;goto B681378;
case 0x68137b:c.instructions+=6;goto B68137b;
case 0x68137d:c.instructions+=5;goto B68137d;
case 0x681380:c.instructions+=4;goto B681380;
case 0x681383:c.instructions+=3;goto B681383;
case 0x681384:c.instructions+=2;goto B681384;
case 0x681385:c.instructions+=1;goto B681385;
case 0x68138a:goto L68138a;
case 0x68138c:c.instructions+=1;goto B68138c;
case 0x681392:goto L681392;
case 0x681395:c.instructions+=2;goto B681395;
case 0x681397:c.instructions+=1;goto B681397;
case 0x68139a:goto L68139a;
case 0x68139d:c.instructions+=2;goto B68139d;
case 0x6813a1:c.instructions+=1;goto B6813a1;
case 0x6813a7:goto L6813a7;
case 0x6813aa:c.instructions+=2;goto B6813aa;
case 0x6813ac:c.instructions+=1;goto B6813ac;
case 0x6813ae:goto L6813ae;
case 0x6813b1:c.instructions+=2;goto B6813b1;
case 0x6813b4:c.instructions+=1;goto B6813b4;
case 0x6813b6:goto L6813b6;
case 0x6813bc:goto L6813bc;
case 0x6813bd:c.instructions+=7;goto B6813bd;
case 0x6813bf:c.instructions+=6;goto B6813bf;
case 0x6813c0:c.instructions+=5;goto B6813c0;
case 0x6813c3:c.instructions+=4;goto B6813c3;
case 0x6813c5:c.instructions+=3;goto B6813c5;
case 0x6813c7:c.instructions+=2;goto B6813c7;
case 0x6813ca:c.instructions+=1;goto B6813ca;
case 0x6813cf:goto L6813cf;
case 0x6813d2:c.instructions+=2;goto B6813d2;
case 0x6813d5:c.instructions+=1;goto B6813d5;
case 0x6813db:goto L6813db;
case 0x6813df:c.instructions+=11;goto B6813df;
case 0x6813e1:c.instructions+=10;goto B6813e1;
case 0x6813e4:c.instructions+=9;goto B6813e4;
case 0x6813e5:c.instructions+=8;goto B6813e5;
case 0x6813e8:c.instructions+=7;goto B6813e8;
case 0x6813e9:c.instructions+=6;goto B6813e9;
case 0x6813ec:c.instructions+=5;goto B6813ec;
case 0x6813ed:c.instructions+=4;goto B6813ed;
case 0x6813ee:c.instructions+=3;goto B6813ee;
case 0x6813ef:c.instructions+=2;goto B6813ef;
case 0x6813f1:c.instructions+=1;goto B6813f1;
case 0x6813f6:goto L6813f6;
case 0x6813f8:c.instructions+=1;goto B6813f8;
case 0x6813fe:goto L6813fe;
case 0x681401:c.instructions+=1;goto B681401;
case 0x681404:goto L681404;
case 0x681407:c.instructions+=2;goto B681407;
case 0x68140b:c.instructions+=1;goto B68140b;
case 0x68140d:goto L68140d;
case 0x681411:c.instructions+=10;goto B681411;
case 0x681413:c.instructions+=9;goto B681413;
case 0x681415:c.instructions+=8;goto B681415;
case 0x681418:c.instructions+=7;goto B681418;
case 0x681419:c.instructions+=6;goto B681419;
case 0x68141c:c.instructions+=5;goto B68141c;
case 0x68141d:c.instructions+=4;goto B68141d;
case 0x681422:c.instructions+=3;goto B681422;
case 0x681423:c.instructions+=2;goto B681423;
case 0x681425:c.instructions+=1;goto B681425;
case 0x68142a:goto L68142a;
case 0x68142c:c.instructions+=1;goto B68142c;
case 0x681432:goto L681432;
case 0x681435:c.instructions+=6;goto B681435;
case 0x681438:c.instructions+=5;goto B681438;
case 0x68143b:c.instructions+=4;goto B68143b;
case 0x68143e:c.instructions+=3;goto B68143e;
case 0x681441:c.instructions+=2;goto B681441;
case 0x681447:c.instructions+=1;goto B681447;
case 0x68144a:goto L68144a;
case 0x68144e:c.instructions+=1;goto B68144e;
case 0x681450:goto L681450;
case 0x681453:c.instructions+=5;goto B681453;
case 0x681455:c.instructions+=4;goto B681455;
case 0x681457:c.instructions+=3;goto B681457;
case 0x68145c:c.instructions+=2;goto B68145c;
case 0x681461:c.instructions+=1;goto B681461;
case 0x681466:goto L681466;
case 0x681469:c.instructions+=2;goto B681469;
case 0x68146c:c.instructions+=1;goto B68146c;
case 0x681472:goto L681472;
case 0x681474:goto L681474;
case 0x681476:goto L681476;
case 0x681478:c.instructions+=1;goto B681478;
case 0x68147a:goto L68147a;
case 0x68147c:c.instructions+=1;goto B68147c;
case 0x68147e:goto L68147e;
case 0x681480:goto L681480;
case 0x681481:c.instructions+=7;goto B681481;
case 0x681482:c.instructions+=6;goto B681482;
case 0x681485:c.instructions+=5;goto B681485;
case 0x681488:c.instructions+=4;goto B681488;
case 0x681489:c.instructions+=3;goto B681489;
case 0x68148a:c.instructions+=2;goto B68148a;
case 0x68148d:c.instructions+=1;goto B68148d;
case 0x681492:goto L681492;
case 0x681495:c.instructions+=1;goto B681495;
case 0x68149b:goto L68149b;
case 0x68149c:c.instructions+=2;goto B68149c;
case 0x68149f:c.instructions+=1;goto B68149f;
case 0x6814a1:goto L6814a1;
case 0x6814a2:c.instructions+=2;goto B6814a2;
case 0x6814a5:c.instructions+=1;goto B6814a5;
case 0x6814a7:goto L6814a7;
case 0x6814a9:c.instructions+=2;goto B6814a9;
case 0x6814ac:c.instructions+=1;goto B6814ac;
case 0x6814b2:goto L6814b2;
case 0x6814b3:c.instructions+=8;goto B6814b3;
case 0x6814b5:c.instructions+=7;goto B6814b5;
case 0x6814b6:c.instructions+=6;goto B6814b6;
case 0x6814b9:c.instructions+=5;goto B6814b9;
case 0x6814bc:c.instructions+=4;goto B6814bc;
case 0x6814bd:c.instructions+=3;goto B6814bd;
case 0x6814bf:c.instructions+=2;goto B6814bf;
case 0x6814c2:c.instructions+=1;goto B6814c2;
case 0x6814c7:goto L6814c7;
case 0x6814ca:c.instructions+=4;goto B6814ca;
case 0x6814cd:c.instructions+=3;goto B6814cd;
case 0x6814d0:c.instructions+=2;goto B6814d0;
case 0x6814d2:c.instructions+=1;goto B6814d2;
case 0x6814d8:goto L6814d8;
case 0x6814db:c.instructions+=12;goto B6814db;
case 0x6814dd:c.instructions+=11;goto B6814dd;
case 0x6814e0:c.instructions+=10;goto B6814e0;
case 0x6814e3:c.instructions+=9;goto B6814e3;
case 0x6814e6:c.instructions+=8;goto B6814e6;
case 0x6814e9:c.instructions+=7;goto B6814e9;
case 0x6814eb:c.instructions+=6;goto B6814eb;
case 0x6814ec:c.instructions+=5;goto B6814ec;
case 0x6814ef:c.instructions+=4;goto B6814ef;
case 0x6814f2:c.instructions+=3;goto B6814f2;
case 0x6814f5:c.instructions+=2;goto B6814f5;
case 0x6814fb:c.instructions+=1;goto B6814fb;
case 0x6814fd:goto L6814fd;
case 0x681502:goto L681502;
case 0x681505:c.instructions+=3;goto B681505;
case 0x681507:c.instructions+=2;goto B681507;
case 0x68150a:c.instructions+=1;goto B68150a;
case 0x68150c:goto L68150c;
case 0x68150f:c.instructions+=3;goto B68150f;
case 0x681511:c.instructions+=2;goto B681511;
case 0x681514:c.instructions+=1;goto B681514;
case 0x681516:goto L681516;
case 0x681519:goto L681519;
case 0x68151c:c.instructions+=8;goto B68151c;
case 0x68151f:c.instructions+=7;goto B68151f;
case 0x681522:c.instructions+=6;goto B681522;
case 0x681525:c.instructions+=5;goto B681525;
case 0x681527:c.instructions+=4;goto B681527;
case 0x681529:c.instructions+=3;goto B681529;
case 0x68152c:c.instructions+=2;goto B68152c;
case 0x68152f:c.instructions+=1;goto B68152f;
case 0x681531:goto L681531;
case 0x681537:goto L681537;
case 0x681538:c.instructions+=7;goto B681538;
case 0x68153a:c.instructions+=6;goto B68153a;
case 0x68153b:c.instructions+=5;goto B68153b;
case 0x68153e:c.instructions+=4;goto B68153e;
case 0x681540:c.instructions+=3;goto B681540;
case 0x681542:c.instructions+=2;goto B681542;
case 0x681545:c.instructions+=1;goto B681545;
case 0x68154a:goto L68154a;
case 0x68154d:c.instructions+=2;goto B68154d;
case 0x68154f:c.instructions+=1;goto B68154f;
case 0x681555:goto L681555;
case 0x681556:c.instructions+=3;goto B681556;
case 0x681559:c.instructions+=2;goto B681559;
case 0x68155c:c.instructions+=1;goto B68155c;
case 0x68155e:goto L68155e;
case 0x681561:c.instructions+=11;goto B681561;
case 0x681563:c.instructions+=10;goto B681563;
case 0x681566:c.instructions+=9;goto B681566;
case 0x68156c:c.instructions+=8;goto B68156c;
case 0x68156f:c.instructions+=7;goto B68156f;
case 0x681571:c.instructions+=6;goto B681571;
case 0x681574:c.instructions+=5;goto B681574;
case 0x681579:c.instructions+=4;goto B681579;
case 0x68157a:c.instructions+=3;goto B68157a;
case 0x68157d:c.instructions+=2;goto B68157d;
case 0x68157f:c.instructions+=1;goto B68157f;
case 0x681584:goto L681584;
case 0x681586:c.instructions+=1;goto B681586;
case 0x68158c:goto L68158c;
case 0x68158f:c.instructions+=6;goto B68158f;
case 0x681591:c.instructions+=5;goto B681591;
case 0x681594:c.instructions+=4;goto B681594;
case 0x681597:c.instructions+=3;goto B681597;
case 0x68159a:c.instructions+=2;goto B68159a;
case 0x68159d:c.instructions+=1;goto B68159d;
case 0x6815a2:goto L6815a2;
case 0x6815a4:c.instructions+=1;goto B6815a4;
case 0x6815aa:goto L6815aa;
case 0x6815ac:c.instructions+=8;goto B6815ac;
case 0x6815af:c.instructions+=7;goto B6815af;
case 0x6815b5:c.instructions+=6;goto B6815b5;
case 0x6815b8:c.instructions+=5;goto B6815b8;
case 0x6815ba:c.instructions+=4;goto B6815ba;
case 0x6815bd:c.instructions+=3;goto B6815bd;
case 0x6815be:c.instructions+=2;goto B6815be;
case 0x6815c1:c.instructions+=1;goto B6815c1;
case 0x6815c6:goto L6815c6;
case 0x6815c8:c.instructions+=1;goto B6815c8;
case 0x6815ce:goto L6815ce;
case 0x6815d1:c.instructions+=3;goto B6815d1;
case 0x6815d3:c.instructions+=2;goto B6815d3;
case 0x6815d6:c.instructions+=1;goto B6815d6;
case 0x6815db:goto L6815db;
case 0x6815dd:c.instructions+=1;goto B6815dd;
case 0x6815e3:goto L6815e3;
case 0x6815e7:c.instructions+=2;goto B6815e7;
case 0x6815eb:c.instructions+=1;goto B6815eb;
case 0x6815f1:goto L6815f1;
case 0x6815f4:c.instructions+=5;goto B6815f4;
case 0x6815f7:c.instructions+=4;goto B6815f7;
case 0x6815fa:c.instructions+=3;goto B6815fa;
case 0x681600:c.instructions+=2;goto B681600;
case 0x681606:c.instructions+=1;goto B681606;
case 0x681609:goto L681609;
case 0x68160b:c.instructions+=2;goto B68160b;
case 0x68160e:c.instructions+=1;goto B68160e;
case 0x681610:goto L681610;
case 0x681613:c.instructions+=4;goto B681613;
case 0x681617:c.instructions+=3;goto B681617;
case 0x68161a:c.instructions+=2;goto B68161a;
case 0x68161d:c.instructions+=1;goto B68161d;
case 0x681620:goto L681620;
case 0x681622:c.instructions+=7;goto B681622;
case 0x681625:c.instructions+=6;goto B681625;
case 0x681628:c.instructions+=5;goto B681628;
case 0x68162b:c.instructions+=4;goto B68162b;
case 0x68162c:c.instructions+=3;goto B68162c;
case 0x68162e:c.instructions+=2;goto B68162e;
case 0x681631:c.instructions+=1;goto B681631;
case 0x681633:goto L681633;
case 0x681635:c.instructions+=7;goto B681635;
case 0x681638:c.instructions+=6;goto B681638;
case 0x68163a:c.instructions+=5;goto B68163a;
case 0x68163b:c.instructions+=4;goto B68163b;
case 0x68163e:c.instructions+=3;goto B68163e;
case 0x68163f:c.instructions+=2;goto B68163f;
case 0x681642:c.instructions+=1;goto B681642;
case 0x681647:goto L681647;
case 0x681649:c.instructions+=1;goto B681649;
case 0x68164f:goto L68164f;
case 0x681652:c.instructions+=4;goto B681652;
case 0x681655:c.instructions+=3;goto B681655;
case 0x681659:c.instructions+=2;goto B681659;
case 0x68165c:c.instructions+=1;goto B68165c;
case 0x68165e:goto L68165e;
case 0x681663:goto L681663;
case 0x681667:c.instructions+=1;goto B681667;
case 0x681669:goto L681669;
case 0x68166c:goto L68166c;
case 0x68166f:c.instructions+=6;goto B68166f;
case 0x681672:c.instructions+=5;goto B681672;
case 0x681674:c.instructions+=4;goto B681674;
case 0x681678:c.instructions+=3;goto B681678;
case 0x681679:c.instructions+=2;goto B681679;
case 0x68167b:c.instructions+=1;goto B68167b;
case 0x681680:goto L681680;
case 0x681682:c.instructions+=2;goto B681682;
case 0x681684:c.instructions+=1;goto B681684;
case 0x68168a:goto L68168a;
case 0x68168b:c.instructions+=3;goto B68168b;
case 0x68168c:c.instructions+=2;goto B68168c;
case 0x68168e:c.instructions+=1;goto B68168e;
case 0x681693:goto L681693;
case 0x681695:c.instructions+=1;goto B681695;
case 0x68169b:goto L68169b;
case 0x68169d:c.instructions+=1;goto B68169d;
case 0x68169f:goto L68169f;
case 0x6816a3:c.instructions+=4;goto B6816a3;
case 0x6816a6:c.instructions+=3;goto B6816a6;
case 0x6816a7:c.instructions+=2;goto B6816a7;
case 0x6816aa:c.instructions+=1;goto B6816aa;
case 0x6816ac:goto L6816ac;
case 0x6816ae:c.instructions+=2;goto B6816ae;
case 0x6816af:c.instructions+=1;goto B6816af;
case 0x6816b2:goto L6816b2;
case 0x6816b6:c.instructions+=4;goto B6816b6;
case 0x6816b8:c.instructions+=3;goto B6816b8;
case 0x6816b9:c.instructions+=2;goto B6816b9;
case 0x6816bc:c.instructions+=1;goto B6816bc;
case 0x6816be:goto L6816be;
case 0x6816c1:c.instructions+=3;goto B6816c1;
case 0x6816c3:c.instructions+=2;goto B6816c3;
case 0x6816c4:c.instructions+=1;goto B6816c4;
case 0x6816c7:goto L6816c7;
case 0x6816cb:c.instructions+=4;goto B6816cb;
case 0x6816cd:c.instructions+=3;goto B6816cd;
case 0x6816ce:c.instructions+=2;goto B6816ce;
case 0x6816d1:c.instructions+=1;goto B6816d1;
case 0x6816d3:goto L6816d3;
case 0x6816d6:c.instructions+=9;goto B6816d6;
case 0x6816d8:c.instructions+=8;goto B6816d8;
case 0x6816db:c.instructions+=7;goto B6816db;
case 0x6816de:c.instructions+=6;goto B6816de;
case 0x6816e1:c.instructions+=5;goto B6816e1;
case 0x6816e4:c.instructions+=4;goto B6816e4;
case 0x6816e7:c.instructions+=3;goto B6816e7;
case 0x6816ea:c.instructions+=2;goto B6816ea;
case 0x6816ef:c.instructions+=1;goto B6816ef;
case 0x6816f5:goto L6816f5;
case 0x6816f7:c.instructions+=8;goto B6816f7;
case 0x6816f9:c.instructions+=7;goto B6816f9;
case 0x6816fc:c.instructions+=6;goto B6816fc;
case 0x6816fd:c.instructions+=5;goto B6816fd;
case 0x681700:c.instructions+=4;goto B681700;
case 0x681702:c.instructions+=3;goto B681702;
case 0x681707:c.instructions+=2;goto B681707;
case 0x681708:c.instructions+=1;goto B681708;
case 0x68170d:goto L68170d;
case 0x68170f:c.instructions+=1;goto B68170f;
case 0x681715:goto L681715;
case 0x681717:c.instructions+=7;goto B681717;
case 0x681719:c.instructions+=6;goto B681719;
case 0x68171c:c.instructions+=5;goto B68171c;
case 0x68171e:c.instructions+=4;goto B68171e;
case 0x681721:c.instructions+=3;goto B681721;
case 0x681726:c.instructions+=2;goto B681726;
case 0x681727:c.instructions+=1;goto B681727;
case 0x68172c:goto L68172c;
case 0x68172e:c.instructions+=1;goto B68172e;
case 0x681734:goto L681734;
case 0x681736:c.instructions+=7;goto B681736;
case 0x681738:c.instructions+=6;goto B681738;
case 0x68173b:c.instructions+=5;goto B68173b;
case 0x68173d:c.instructions+=4;goto B68173d;
case 0x681740:c.instructions+=3;goto B681740;
case 0x681745:c.instructions+=2;goto B681745;
case 0x681746:c.instructions+=1;goto B681746;
case 0x68174b:goto L68174b;
case 0x68174d:c.instructions+=1;goto B68174d;
case 0x681753:goto L681753;
case 0x681755:c.instructions+=7;goto B681755;
case 0x681758:c.instructions+=6;goto B681758;
case 0x68175a:c.instructions+=5;goto B68175a;
case 0x68175d:c.instructions+=4;goto B68175d;
case 0x681760:c.instructions+=3;goto B681760;
case 0x681761:c.instructions+=2;goto B681761;
case 0x681762:c.instructions+=1;goto B681762;
case 0x681767:goto L681767;
case 0x681769:c.instructions+=1;goto B681769;
case 0x68176f:goto L68176f;
case 0x681772:c.instructions+=2;goto B681772;
case 0x681774:c.instructions+=1;goto B681774;
case 0x681777:goto L681777;
case 0x68177a:c.instructions+=2;goto B68177a;
case 0x68177e:c.instructions+=1;goto B68177e;
case 0x681784:goto L681784;
case 0x681788:c.instructions+=1;goto B681788;
case 0x68178e:goto L68178e;
case 0x681791:c.instructions+=2;goto B681791;
case 0x681793:c.instructions+=1;goto B681793;
case 0x681795:goto L681795;
case 0x681798:c.instructions+=2;goto B681798;
case 0x68179b:c.instructions+=1;goto B68179b;
case 0x68179d:goto L68179d;
case 0x6817a3:goto L6817a3;
case 0x6817a4:c.instructions+=7;goto B6817a4;
case 0x6817a6:c.instructions+=6;goto B6817a6;
case 0x6817a7:c.instructions+=5;goto B6817a7;
case 0x6817aa:c.instructions+=4;goto B6817aa;
case 0x6817ac:c.instructions+=3;goto B6817ac;
case 0x6817ae:c.instructions+=2;goto B6817ae;
case 0x6817b1:c.instructions+=1;goto B6817b1;
case 0x6817b6:goto L6817b6;
case 0x6817b9:c.instructions+=2;goto B6817b9;
case 0x6817bc:c.instructions+=1;goto B6817bc;
case 0x6817c2:goto L6817c2;
case 0x6817c6:c.instructions+=11;goto B6817c6;
case 0x6817c8:c.instructions+=10;goto B6817c8;
case 0x6817cb:c.instructions+=9;goto B6817cb;
case 0x6817cc:c.instructions+=8;goto B6817cc;
case 0x6817cf:c.instructions+=7;goto B6817cf;
case 0x6817d0:c.instructions+=6;goto B6817d0;
case 0x6817d3:c.instructions+=5;goto B6817d3;
case 0x6817d4:c.instructions+=4;goto B6817d4;
case 0x6817d5:c.instructions+=3;goto B6817d5;
case 0x6817d6:c.instructions+=2;goto B6817d6;
case 0x6817d8:c.instructions+=1;goto B6817d8;
case 0x6817dd:goto L6817dd;
case 0x6817df:c.instructions+=1;goto B6817df;
case 0x6817e5:goto L6817e5;
case 0x6817e8:c.instructions+=1;goto B6817e8;
case 0x6817eb:goto L6817eb;
case 0x6817ee:c.instructions+=2;goto B6817ee;
case 0x6817f2:c.instructions+=1;goto B6817f2;
case 0x6817f4:goto L6817f4;
case 0x6817f8:c.instructions+=10;goto B6817f8;
case 0x6817fa:c.instructions+=9;goto B6817fa;
case 0x6817fc:c.instructions+=8;goto B6817fc;
case 0x6817ff:c.instructions+=7;goto B6817ff;
case 0x681800:c.instructions+=6;goto B681800;
case 0x681803:c.instructions+=5;goto B681803;
case 0x681804:c.instructions+=4;goto B681804;
case 0x681809:c.instructions+=3;goto B681809;
case 0x68180a:c.instructions+=2;goto B68180a;
case 0x68180c:c.instructions+=1;goto B68180c;
case 0x681811:goto L681811;
case 0x681813:c.instructions+=1;goto B681813;
case 0x681819:goto L681819;
case 0x68181c:c.instructions+=6;goto B68181c;
case 0x68181f:c.instructions+=5;goto B68181f;
case 0x681822:c.instructions+=4;goto B681822;
case 0x681825:c.instructions+=3;goto B681825;
case 0x681828:c.instructions+=2;goto B681828;
case 0x68182e:c.instructions+=1;goto B68182e;
case 0x681831:goto L681831;
case 0x681835:c.instructions+=1;goto B681835;
case 0x681837:goto L681837;
case 0x68183a:c.instructions+=5;goto B68183a;
case 0x68183c:c.instructions+=4;goto B68183c;
case 0x68183e:c.instructions+=3;goto B68183e;
case 0x681843:c.instructions+=2;goto B681843;
case 0x681848:c.instructions+=1;goto B681848;
case 0x68184d:goto L68184d;
case 0x681850:c.instructions+=2;goto B681850;
case 0x681853:c.instructions+=1;goto B681853;
case 0x681859:goto L681859;
case 0x68185b:goto L68185b;
case 0x68185d:goto L68185d;
case 0x68185f:c.instructions+=1;goto B68185f;
case 0x681861:goto L681861;
case 0x681863:c.instructions+=1;goto B681863;
case 0x681865:goto L681865;
case 0x681867:goto L681867;
case 0x681868:c.instructions+=7;goto B681868;
case 0x681869:c.instructions+=6;goto B681869;
case 0x68186c:c.instructions+=5;goto B68186c;
case 0x68186f:c.instructions+=4;goto B68186f;
case 0x681870:c.instructions+=3;goto B681870;
case 0x681871:c.instructions+=2;goto B681871;
case 0x681874:c.instructions+=1;goto B681874;
case 0x681879:goto L681879;
case 0x68187c:c.instructions+=1;goto B68187c;
case 0x681882:goto L681882;
case 0x681883:c.instructions+=2;goto B681883;
case 0x681886:c.instructions+=1;goto B681886;
case 0x681888:goto L681888;
case 0x681889:c.instructions+=2;goto B681889;
case 0x68188c:c.instructions+=1;goto B68188c;
case 0x68188e:goto L68188e;
case 0x681890:c.instructions+=2;goto B681890;
case 0x681893:c.instructions+=1;goto B681893;
case 0x681899:goto L681899;
case 0x68189a:c.instructions+=8;goto B68189a;
case 0x68189c:c.instructions+=7;goto B68189c;
case 0x68189d:c.instructions+=6;goto B68189d;
case 0x6818a0:c.instructions+=5;goto B6818a0;
case 0x6818a3:c.instructions+=4;goto B6818a3;
case 0x6818a4:c.instructions+=3;goto B6818a4;
case 0x6818a6:c.instructions+=2;goto B6818a6;
case 0x6818a9:c.instructions+=1;goto B6818a9;
case 0x6818ae:goto L6818ae;
case 0x6818b1:c.instructions+=4;goto B6818b1;
case 0x6818b4:c.instructions+=3;goto B6818b4;
case 0x6818b7:c.instructions+=2;goto B6818b7;
case 0x6818b9:c.instructions+=1;goto B6818b9;
case 0x6818bf:goto L6818bf;
case 0x6818c2:c.instructions+=12;goto B6818c2;
case 0x6818c4:c.instructions+=11;goto B6818c4;
case 0x6818c7:c.instructions+=10;goto B6818c7;
case 0x6818ca:c.instructions+=9;goto B6818ca;
case 0x6818cd:c.instructions+=8;goto B6818cd;
case 0x6818d0:c.instructions+=7;goto B6818d0;
case 0x6818d2:c.instructions+=6;goto B6818d2;
case 0x6818d3:c.instructions+=5;goto B6818d3;
case 0x6818d6:c.instructions+=4;goto B6818d6;
case 0x6818d9:c.instructions+=3;goto B6818d9;
case 0x6818dc:c.instructions+=2;goto B6818dc;
case 0x6818e2:c.instructions+=1;goto B6818e2;
case 0x6818e4:goto L6818e4;
case 0x6818e9:goto L6818e9;
case 0x6818ec:c.instructions+=3;goto B6818ec;
case 0x6818ee:c.instructions+=2;goto B6818ee;
case 0x6818f1:c.instructions+=1;goto B6818f1;
case 0x6818f3:goto L6818f3;
case 0x6818f6:c.instructions+=3;goto B6818f6;
case 0x6818f8:c.instructions+=2;goto B6818f8;
case 0x6818fb:c.instructions+=1;goto B6818fb;
case 0x6818fd:goto L6818fd;
case 0x681900:goto L681900;
case 0x681903:c.instructions+=8;goto B681903;
case 0x681906:c.instructions+=7;goto B681906;
case 0x681909:c.instructions+=6;goto B681909;
case 0x68190c:c.instructions+=5;goto B68190c;
case 0x68190e:c.instructions+=4;goto B68190e;
case 0x681910:c.instructions+=3;goto B681910;
case 0x681913:c.instructions+=2;goto B681913;
case 0x681916:c.instructions+=1;goto B681916;
case 0x681918:goto L681918;
case 0x68191e:goto L68191e;
case 0x68191f:c.instructions+=7;goto B68191f;
case 0x681921:c.instructions+=6;goto B681921;
case 0x681922:c.instructions+=5;goto B681922;
case 0x681925:c.instructions+=4;goto B681925;
case 0x681927:c.instructions+=3;goto B681927;
case 0x681929:c.instructions+=2;goto B681929;
case 0x68192c:c.instructions+=1;goto B68192c;
case 0x681931:goto L681931;
case 0x681934:c.instructions+=2;goto B681934;
case 0x681936:c.instructions+=1;goto B681936;
case 0x68193c:goto L68193c;
case 0x68193d:c.instructions+=3;goto B68193d;
case 0x681940:c.instructions+=2;goto B681940;
case 0x681943:c.instructions+=1;goto B681943;
case 0x681945:goto L681945;
case 0x681948:c.instructions+=11;goto B681948;
case 0x68194a:c.instructions+=10;goto B68194a;
case 0x68194d:c.instructions+=9;goto B68194d;
case 0x681953:c.instructions+=8;goto B681953;
case 0x681956:c.instructions+=7;goto B681956;
case 0x681958:c.instructions+=6;goto B681958;
case 0x68195b:c.instructions+=5;goto B68195b;
case 0x681960:c.instructions+=4;goto B681960;
case 0x681961:c.instructions+=3;goto B681961;
case 0x681964:c.instructions+=2;goto B681964;
case 0x681966:c.instructions+=1;goto B681966;
case 0x68196b:goto L68196b;
case 0x68196d:c.instructions+=1;goto B68196d;
case 0x681973:goto L681973;
case 0x681976:c.instructions+=6;goto B681976;
case 0x681978:c.instructions+=5;goto B681978;
case 0x68197b:c.instructions+=4;goto B68197b;
case 0x68197e:c.instructions+=3;goto B68197e;
case 0x681981:c.instructions+=2;goto B681981;
case 0x681984:c.instructions+=1;goto B681984;
case 0x681989:goto L681989;
case 0x68198b:c.instructions+=1;goto B68198b;
case 0x681991:goto L681991;
case 0x681993:c.instructions+=8;goto B681993;
case 0x681996:c.instructions+=7;goto B681996;
case 0x68199c:c.instructions+=6;goto B68199c;
case 0x68199f:c.instructions+=5;goto B68199f;
case 0x6819a1:c.instructions+=4;goto B6819a1;
case 0x6819a4:c.instructions+=3;goto B6819a4;
case 0x6819a5:c.instructions+=2;goto B6819a5;
case 0x6819a8:c.instructions+=1;goto B6819a8;
case 0x6819ad:goto L6819ad;
case 0x6819af:c.instructions+=1;goto B6819af;
case 0x6819b5:goto L6819b5;
case 0x6819b7:c.instructions+=3;goto B6819b7;
case 0x6819b9:c.instructions+=2;goto B6819b9;
case 0x6819bc:c.instructions+=1;goto B6819bc;
case 0x6819be:goto L6819be;
case 0x6819c1:c.instructions+=5;goto B6819c1;
case 0x6819c4:c.instructions+=4;goto B6819c4;
case 0x6819c7:c.instructions+=3;goto B6819c7;
case 0x6819c8:c.instructions+=2;goto B6819c8;
case 0x6819cb:c.instructions+=1;goto B6819cb;
case 0x6819cd:goto L6819cd;
case 0x6819d0:c.instructions+=2;goto B6819d0;
case 0x6819d3:c.instructions+=1;goto B6819d3;
case 0x6819d9:goto L6819d9;
case 0x6819dc:c.instructions+=6;goto B6819dc;
case 0x6819df:c.instructions+=5;goto B6819df;
case 0x6819e2:c.instructions+=4;goto B6819e2;
case 0x6819e5:c.instructions+=3;goto B6819e5;
case 0x6819e9:c.instructions+=2;goto B6819e9;
case 0x6819ec:c.instructions+=1;goto B6819ec;
case 0x6819ef:goto L6819ef;
case 0x6819f2:c.instructions+=2;goto B6819f2;
case 0x6819f4:c.instructions+=1;goto B6819f4;
case 0x6819f6:goto L6819f6;
case 0x6819f9:c.instructions+=4;goto B6819f9;
case 0x6819fc:c.instructions+=3;goto B6819fc;
case 0x6819ff:c.instructions+=2;goto B6819ff;
case 0x681a01:c.instructions+=1;goto B681a01;
case 0x681a03:goto L681a03;
case 0x681a06:c.instructions+=7;goto B681a06;
case 0x681a08:c.instructions+=6;goto B681a08;
case 0x681a0b:c.instructions+=5;goto B681a0b;
case 0x681a0d:c.instructions+=4;goto B681a0d;
case 0x681a10:c.instructions+=3;goto B681a10;
case 0x681a13:c.instructions+=2;goto B681a13;
case 0x681a14:c.instructions+=1;goto B681a14;
case 0x681a16:goto L681a16;
case 0x681a19:c.instructions+=3;goto B681a19;
case 0x681a1b:c.instructions+=2;goto B681a1b;
case 0x681a1e:c.instructions+=1;goto B681a1e;
case 0x681a23:goto L681a23;
case 0x681a25:c.instructions+=1;goto B681a25;
case 0x681a2b:goto L681a2b;
case 0x681a2e:c.instructions+=3;goto B681a2e;
case 0x681a31:c.instructions+=2;goto B681a31;
case 0x681a33:c.instructions+=1;goto B681a33;
case 0x681a35:goto L681a35;
case 0x681a37:c.instructions+=1;goto B681a37;
case 0x681a39:goto L681a39;
case 0x681a3c:c.instructions+=7;goto B681a3c;
case 0x681a3e:c.instructions+=6;goto B681a3e;
case 0x681a41:c.instructions+=5;goto B681a41;
case 0x681a44:c.instructions+=4;goto B681a44;
case 0x681a47:c.instructions+=3;goto B681a47;
case 0x681a4a:c.instructions+=2;goto B681a4a;
case 0x681a4d:c.instructions+=1;goto B681a4d;
case 0x681a52:goto L681a52;
case 0x681a54:goto L681a54;
case 0x681a59:c.instructions+=1;goto B681a59;
case 0x681a5b:goto L681a5b;
case 0x681a5e:c.instructions+=11;goto B681a5e;
case 0x681a60:c.instructions+=10;goto B681a60;
case 0x681a63:c.instructions+=9;goto B681a63;
case 0x681a69:c.instructions+=8;goto B681a69;
case 0x681a6c:c.instructions+=7;goto B681a6c;
case 0x681a6e:c.instructions+=6;goto B681a6e;
case 0x681a71:c.instructions+=5;goto B681a71;
case 0x681a76:c.instructions+=4;goto B681a76;
case 0x681a77:c.instructions+=3;goto B681a77;
case 0x681a7a:c.instructions+=2;goto B681a7a;
case 0x681a7c:c.instructions+=1;goto B681a7c;
case 0x681a81:goto L681a81;
case 0x681a83:c.instructions+=1;goto B681a83;
case 0x681a85:goto L681a85;
case 0x681a87:c.instructions+=8;goto B681a87;
case 0x681a8a:c.instructions+=7;goto B681a8a;
case 0x681a90:c.instructions+=6;goto B681a90;
case 0x681a93:c.instructions+=5;goto B681a93;
case 0x681a95:c.instructions+=4;goto B681a95;
case 0x681a98:c.instructions+=3;goto B681a98;
case 0x681a99:c.instructions+=2;goto B681a99;
case 0x681a9c:c.instructions+=1;goto B681a9c;
case 0x681aa1:goto L681aa1;
case 0x681aa3:c.instructions+=1;goto B681aa3;
case 0x681aa5:goto L681aa5;
case 0x681aa8:c.instructions+=7;goto B681aa8;
case 0x681aab:c.instructions+=6;goto B681aab;
case 0x681aaf:c.instructions+=5;goto B681aaf;
case 0x681ab2:c.instructions+=4;goto B681ab2;
case 0x681ab5:c.instructions+=3;goto B681ab5;
case 0x681ab8:c.instructions+=2;goto B681ab8;
case 0x681abb:c.instructions+=1;goto B681abb;
case 0x681ac1:goto L681ac1;
case 0x681ac3:goto L681ac3;
case 0x681ac4:c.instructions+=4;goto B681ac4;
case 0x681ac5:c.instructions+=3;goto B681ac5;
case 0x681ac6:c.instructions+=2;goto B681ac6;
case 0x681ac7:c.instructions+=1;goto B681ac7;
case 0x681aca:goto L681aca;
case 0x681acc:c.instructions+=10;goto B681acc;
case 0x681acd:c.instructions+=9;goto B681acd;
case 0x681acf:c.instructions+=8;goto B681acf;
case 0x681ad2:c.instructions+=7;goto B681ad2;
case 0x681ad5:c.instructions+=6;goto B681ad5;
case 0x681ad6:c.instructions+=5;goto B681ad6;
case 0x681ad7:c.instructions+=4;goto B681ad7;
case 0x681ad9:c.instructions+=3;goto B681ad9;
case 0x681adb:c.instructions+=2;goto B681adb;
case 0x681add:c.instructions+=1;goto B681add;
case 0x681adf:goto L681adf;
case 0x681ae2:c.instructions+=1;goto B681ae2;
case 0x681ae4:goto L681ae4;
case 0x681ae7:c.instructions+=2;goto B681ae7;
case 0x681aeb:c.instructions+=1;goto B681aeb;
case 0x681aed:goto L681aed;
case 0x681aee:c.instructions+=3;goto B681aee;
case 0x681aef:c.instructions+=2;goto B681aef;
case 0x681af1:c.instructions+=1;goto B681af1;
case 0x681af6:goto L681af6;
case 0x681af8:c.instructions+=1;goto B681af8;
case 0x681afe:goto L681afe;
case 0x681b01:c.instructions+=1;goto B681b01;
case 0x681b03:goto L681b03;
case 0x681b06:c.instructions+=1;goto B681b06;
case 0x681b08:goto L681b08;
case 0x681b0b:goto L681b0b;
case 0x681b0e:c.instructions+=11;goto B681b0e;
case 0x681b11:c.instructions+=10;goto B681b11;
case 0x681b14:c.instructions+=9;goto B681b14;
case 0x681b17:c.instructions+=8;goto B681b17;
case 0x681b1a:c.instructions+=7;goto B681b1a;
case 0x681b1b:c.instructions+=6;goto B681b1b;
case 0x681b1d:c.instructions+=5;goto B681b1d;
case 0x681b20:c.instructions+=4;goto B681b20;
case 0x681b21:c.instructions+=3;goto B681b21;
case 0x681b24:c.instructions+=2;goto B681b24;
case 0x681b27:c.instructions+=1;goto B681b27;
case 0x681b2c:goto L681b2c;
case 0x681b2e:c.instructions+=4;goto B681b2e;
case 0x681b30:c.instructions+=3;goto B681b30;
case 0x681b31:c.instructions+=2;goto B681b31;
case 0x681b34:c.instructions+=1;goto B681b34;
case 0x681b36:goto L681b36;
case 0x681b3d:c.instructions+=1;goto B681b3d;
case 0x681b42:goto L681b42;
case 0x681b44:c.instructions+=1;goto B681b44;
case 0x681b49:goto L681b49;
case 0x681b4b:c.instructions+=4;goto B681b4b;
case 0x681b4e:c.instructions+=3;goto B681b4e;
case 0x681b50:c.instructions+=2;goto B681b50;
case 0x681b53:c.instructions+=1;goto B681b53;
case 0x681b55:goto L681b55;
case 0x681b57:goto L681b57;
case 0x681b59:c.instructions+=1;goto B681b59;
case 0x681b5c:goto L681b5c;
case 0x681b5e:goto L681b5e;
case 0x681b61:c.instructions+=3;goto B681b61;
case 0x681b63:c.instructions+=2;goto B681b63;
case 0x681b66:c.instructions+=1;goto B681b66;
case 0x681b68:goto L681b68;
case 0x681b6b:c.instructions+=13;goto B681b6b;
case 0x681b6e:c.instructions+=12;goto B681b6e;
case 0x681b71:c.instructions+=11;goto B681b71;
case 0x681b72:c.instructions+=10;goto B681b72;
case 0x681b75:c.instructions+=9;goto B681b75;
case 0x681b78:c.instructions+=8;goto B681b78;
case 0x681b7b:c.instructions+=7;goto B681b7b;
case 0x681b7d:c.instructions+=6;goto B681b7d;
case 0x681b80:c.instructions+=5;goto B681b80;
case 0x681b87:c.instructions+=4;goto B681b87;
case 0x681b8a:c.instructions+=3;goto B681b8a;
case 0x681b8d:c.instructions+=2;goto B681b8d;
case 0x681b90:c.instructions+=1;goto B681b90;
case 0x681b95:goto L681b95;
case 0x681b98:c.instructions+=10;goto B681b98;
case 0x681b9b:c.instructions+=9;goto B681b9b;
case 0x681b9d:c.instructions+=8;goto B681b9d;
case 0x681ba0:c.instructions+=7;goto B681ba0;
case 0x681ba3:c.instructions+=6;goto B681ba3;
case 0x681ba6:c.instructions+=5;goto B681ba6;
case 0x681ba9:c.instructions+=4;goto B681ba9;
case 0x681bac:c.instructions+=3;goto B681bac;
case 0x681baf:c.instructions+=2;goto B681baf;
case 0x681bb2:c.instructions+=1;goto B681bb2;
case 0x681bb4:goto L681bb4;
case 0x681bb7:c.instructions+=4;goto B681bb7;
case 0x681bb9:c.instructions+=3;goto B681bb9;
case 0x681bbc:c.instructions+=2;goto B681bbc;
case 0x681bbf:c.instructions+=1;goto B681bbf;
case 0x681bc4:goto L681bc4;
case 0x681bc7:c.instructions+=6;goto B681bc7;
case 0x681bc9:c.instructions+=5;goto B681bc9;
case 0x681bcc:c.instructions+=4;goto B681bcc;
case 0x681bcf:c.instructions+=3;goto B681bcf;
case 0x681bd2:c.instructions+=2;goto B681bd2;
case 0x681bd5:c.instructions+=1;goto B681bd5;
case 0x681bda:goto L681bda;
case 0x681bdc:c.instructions+=2;goto B681bdc;
case 0x681bdf:c.instructions+=1;goto B681bdf;
case 0x681be1:goto L681be1;
case 0x681be5:goto L681be5;
case 0x681be8:c.instructions+=1;goto B681be8;
case 0x681bed:goto L681bed;
case 0x681bf0:c.instructions+=2;goto B681bf0;
case 0x681bf1:c.instructions+=1;goto B681bf1;
case 0x681bf2:goto L681bf2;
case 0x681bf3:c.instructions+=3;goto B681bf3;
case 0x681bf4:c.instructions+=2;goto B681bf4;
case 0x681bf5:c.instructions+=1;goto B681bf5;
case 0x681bf8:goto L681bf8;
case 0x681bfa:c.instructions+=11;goto B681bfa;
case 0x681bfb:c.instructions+=10;goto B681bfb;
case 0x681bfd:c.instructions+=9;goto B681bfd;
case 0x681c00:c.instructions+=8;goto B681c00;
case 0x681c01:c.instructions+=7;goto B681c01;
case 0x681c02:c.instructions+=6;goto B681c02;
case 0x681c05:c.instructions+=5;goto B681c05;
case 0x681c06:c.instructions+=4;goto B681c06;
case 0x681c08:c.instructions+=3;goto B681c08;
case 0x681c0a:c.instructions+=2;goto B681c0a;
case 0x681c0c:c.instructions+=1;goto B681c0c;
case 0x681c12:goto L681c12;
case 0x681c15:c.instructions+=1;goto B681c15;
case 0x681c1b:goto L681c1b;
case 0x681c1e:c.instructions+=1;goto B681c1e;
case 0x681c24:goto L681c24;
case 0x681c27:c.instructions+=7;goto B681c27;
case 0x681c2a:c.instructions+=6;goto B681c2a;
case 0x681c2d:c.instructions+=5;goto B681c2d;
case 0x681c2f:c.instructions+=4;goto B681c2f;
case 0x681c30:c.instructions+=3;goto B681c30;
case 0x681c33:c.instructions+=2;goto B681c33;
case 0x681c36:c.instructions+=1;goto B681c36;
case 0x681c3c:goto L681c3c;
case 0x681c3f:c.instructions+=2;goto B681c3f;
case 0x681c41:c.instructions+=1;goto B681c41;
case 0x681c43:goto L681c43;
case 0x681c46:c.instructions+=7;goto B681c46;
case 0x681c49:c.instructions+=6;goto B681c49;
case 0x681c4c:c.instructions+=5;goto B681c4c;
case 0x681c4f:c.instructions+=4;goto B681c4f;
case 0x681c52:c.instructions+=3;goto B681c52;
case 0x681c55:c.instructions+=2;goto B681c55;
case 0x681c57:c.instructions+=1;goto B681c57;
case 0x681c59:goto L681c59;
case 0x681c5d:c.instructions+=2;goto B681c5d;
case 0x681c60:c.instructions+=1;goto B681c60;
case 0x681c62:goto L681c62;
case 0x681c65:goto L681c65;
case 0x681c67:c.instructions+=1;goto B681c67;
case 0x681c69:goto L681c69;
case 0x681c6d:c.instructions+=2;goto B681c6d;
case 0x681c70:c.instructions+=1;goto B681c70;
case 0x681c72:goto L681c72;
case 0x681c75:goto L681c75;
case 0x681c78:c.instructions+=10;goto B681c78;
case 0x681c7b:c.instructions+=9;goto B681c7b;
case 0x681c7d:c.instructions+=8;goto B681c7d;
case 0x681c80:c.instructions+=7;goto B681c80;
case 0x681c83:c.instructions+=6;goto B681c83;
case 0x681c89:c.instructions+=5;goto B681c89;
case 0x681c8f:c.instructions+=4;goto B681c8f;
case 0x681c92:c.instructions+=3;goto B681c92;
case 0x681c95:c.instructions+=2;goto B681c95;
case 0x681c98:c.instructions+=1;goto B681c98;
case 0x681c9a:goto L681c9a;
case 0x681c9d:c.instructions+=1;goto B681c9d;
case 0x681ca3:goto L681ca3;
case 0x681ca6:c.instructions+=11;goto B681ca6;
case 0x681ca9:c.instructions+=10;goto B681ca9;
case 0x681cac:c.instructions+=9;goto B681cac;
case 0x681caf:c.instructions+=8;goto B681caf;
case 0x681cb2:c.instructions+=7;goto B681cb2;
case 0x681cb4:c.instructions+=6;goto B681cb4;
case 0x681cb8:c.instructions+=5;goto B681cb8;
case 0x681cbb:c.instructions+=4;goto B681cbb;
case 0x681cbe:c.instructions+=3;goto B681cbe;
case 0x681cc1:c.instructions+=2;goto B681cc1;
case 0x681cc4:c.instructions+=1;goto B681cc4;
case 0x681cc7:goto L681cc7;
case 0x681cc9:c.instructions+=2;goto B681cc9;
case 0x681ccb:c.instructions+=1;goto B681ccb;
case 0x681ccd:goto L681ccd;
case 0x681cce:c.instructions+=7;goto B681cce;
case 0x681cd1:c.instructions+=6;goto B681cd1;
case 0x681cd4:c.instructions+=5;goto B681cd4;
case 0x681cd5:c.instructions+=4;goto B681cd5;
case 0x681cd8:c.instructions+=3;goto B681cd8;
case 0x681cdb:c.instructions+=2;goto B681cdb;
case 0x681cdd:c.instructions+=1;goto B681cdd;
case 0x681ce2:goto L681ce2;
case 0x681ce7:goto L681ce7;
case 0x681cea:c.instructions+=2;goto B681cea;
case 0x681ced:c.instructions+=1;goto B681ced;
case 0x681cef:goto L681cef;
case 0x681cf1:c.instructions+=2;goto B681cf1;
case 0x681cf4:c.instructions+=1;goto B681cf4;
case 0x681cf7:goto L681cf7;
case 0x681cfa:c.instructions+=1;goto B681cfa;
case 0x681cfc:goto L681cfc;
case 0x681cff:c.instructions+=3;goto B681cff;
case 0x681d02:c.instructions+=2;goto B681d02;
case 0x681d06:c.instructions+=1;goto B681d06;
case 0x681d08:goto L681d08;
case 0x681d0b:c.instructions+=2;goto B681d0b;
case 0x681d0e:c.instructions+=1;goto B681d0e;
case 0x681d10:goto L681d10;
case 0x681d13:c.instructions+=1;goto B681d13;
case 0x681d15:goto L681d15;
case 0x681d18:goto L681d18;
case 0x681d19:c.instructions+=7;goto B681d19;
case 0x681d1b:c.instructions+=6;goto B681d1b;
case 0x681d1c:c.instructions+=5;goto B681d1c;
case 0x681d1f:c.instructions+=4;goto B681d1f;
case 0x681d21:c.instructions+=3;goto B681d21;
case 0x681d23:c.instructions+=2;goto B681d23;
case 0x681d24:c.instructions+=1;goto B681d24;
case 0x681d29:goto L681d29;
case 0x681d2c:c.instructions+=2;goto B681d2c;
case 0x681d2f:c.instructions+=1;goto B681d2f;
case 0x681d31:goto L681d31;
case 0x681d34:c.instructions+=2;goto B681d34;
case 0x681d37:c.instructions+=1;goto B681d37;
case 0x681d39:goto L681d39;
case 0x681d3b:goto L681d3b;
case 0x681d3d:c.instructions+=1;goto B681d3d;
case 0x681d3f:goto L681d3f;
case 0x681d42:c.instructions+=5;goto B681d42;
case 0x681d44:c.instructions+=4;goto B681d44;
case 0x681d47:c.instructions+=3;goto B681d47;
case 0x681d4a:c.instructions+=2;goto B681d4a;
case 0x681d4d:c.instructions+=1;goto B681d4d;
case 0x681d50:goto L681d50;
case 0x681d53:c.instructions+=3;goto B681d53;
case 0x681d56:c.instructions+=2;goto B681d56;
case 0x681d59:c.instructions+=1;goto B681d59;
case 0x681d5b:goto L681d5b;
case 0x681d5e:c.instructions+=4;goto B681d5e;
case 0x681d61:c.instructions+=3;goto B681d61;
case 0x681d65:c.instructions+=2;goto B681d65;
case 0x681d68:c.instructions+=1;goto B681d68;
case 0x681d6a:goto L681d6a;
case 0x681d6d:c.instructions+=1;goto B681d6d;
case 0x681d73:goto L681d73;
case 0x681d76:c.instructions+=7;goto B681d76;
case 0x681d79:c.instructions+=6;goto B681d79;
case 0x681d7c:c.instructions+=5;goto B681d7c;
case 0x681d7e:c.instructions+=4;goto B681d7e;
case 0x681d7f:c.instructions+=3;goto B681d7f;
case 0x681d82:c.instructions+=2;goto B681d82;
case 0x681d84:c.instructions+=1;goto B681d84;
case 0x681d89:goto L681d89;
case 0x681d8b:c.instructions+=1;goto B681d8b;
case 0x681d91:goto L681d91;
case 0x681d94:c.instructions+=11;goto B681d94;
case 0x681d97:c.instructions+=10;goto B681d97;
case 0x681d99:c.instructions+=9;goto B681d99;
case 0x681d9b:c.instructions+=8;goto B681d9b;
case 0x681d9d:c.instructions+=7;goto B681d9d;
case 0x681da0:c.instructions+=6;goto B681da0;
case 0x681da3:c.instructions+=5;goto B681da3;
case 0x681da5:c.instructions+=4;goto B681da5;
case 0x681da6:c.instructions+=3;goto B681da6;
case 0x681da9:c.instructions+=2;goto B681da9;
case 0x681dab:c.instructions+=1;goto B681dab;
case 0x681db0:goto L681db0;
case 0x681db2:c.instructions+=1;goto B681db2;
case 0x681db8:goto L681db8;
case 0x681dbb:c.instructions+=2;goto B681dbb;
case 0x681dbd:c.instructions+=1;goto B681dbd;
case 0x681dc2:goto L681dc2;
case 0x681dc4:c.instructions+=1;goto B681dc4;
case 0x681dca:goto L681dca;
case 0x681dcf:goto L681dcf;
case 0x681dd2:c.instructions+=1;goto B681dd2;
case 0x681dd8:goto L681dd8;
case 0x681ddb:c.instructions+=2;goto B681ddb;
case 0x681ddd:c.instructions+=1;goto B681ddd;
case 0x681de3:goto L681de3;
case 0x681de6:c.instructions+=1;goto B681de6;
case 0x681dec:goto L681dec;
case 0x681def:c.instructions+=1;goto B681def;
case 0x681df1:goto L681df1;
case 0x681df4:c.instructions+=1;goto B681df4;
case 0x681df6:goto L681df6;
case 0x681df9:c.instructions+=1;goto B681df9;
case 0x681dfb:goto L681dfb;
case 0x681dfe:c.instructions+=1;goto B681dfe;
case 0x681e00:goto L681e00;
case 0x681e03:c.instructions+=1;goto B681e03;
case 0x681e09:goto L681e09;
case 0x681e0b:c.instructions+=7;goto B681e0b;
case 0x681e0c:c.instructions+=6;goto B681e0c;
case 0x681e0d:c.instructions+=5;goto B681e0d;
case 0x681e10:c.instructions+=4;goto B681e10;
case 0x681e11:c.instructions+=3;goto B681e11;
case 0x681e14:c.instructions+=2;goto B681e14;
case 0x681e16:c.instructions+=1;goto B681e16;
case 0x681e1b:goto L681e1b;
case 0x681e1d:c.instructions+=1;goto B681e1d;
case 0x681e23:goto L681e23;
case 0x681e26:c.instructions+=1;goto B681e26;
case 0x681e2b:goto L681e2b;
case 0x681e2e:c.instructions+=4;goto B681e2e;
case 0x681e2f:c.instructions+=3;goto B681e2f;
case 0x681e32:c.instructions+=2;goto B681e32;
case 0x681e33:c.instructions+=1;goto B681e33;
case 0x681e35:goto L681e35;
case 0x681e38:c.instructions+=3;goto B681e38;
case 0x681e3b:c.instructions+=2;goto B681e3b;
case 0x681e3d:c.instructions+=1;goto B681e3d;
case 0x681e3f:goto L681e3f;
case 0x681e42:c.instructions+=2;goto B681e42;
case 0x681e45:c.instructions+=1;goto B681e45;
case 0x681e48:goto L681e48;
case 0x681e49:c.instructions+=2;goto B681e49;
case 0x681e4b:c.instructions+=1;goto B681e4b;
case 0x681e50:goto L681e50;
case 0x681e55:goto L681e55;
case 0x681e59:c.instructions+=6;goto B681e59;
case 0x681e5b:c.instructions+=5;goto B681e5b;
case 0x681e5e:c.instructions+=4;goto B681e5e;
case 0x681e5f:c.instructions+=3;goto B681e5f;
case 0x681e62:c.instructions+=2;goto B681e62;
case 0x681e64:c.instructions+=1;goto B681e64;
case 0x681e69:goto L681e69;
case 0x681e6b:c.instructions+=1;goto B681e6b;
case 0x681e71:goto L681e71;
case 0x681e74:c.instructions+=5;goto B681e74;
case 0x681e76:c.instructions+=4;goto B681e76;
case 0x681e79:c.instructions+=3;goto B681e79;
case 0x681e7c:c.instructions+=2;goto B681e7c;
case 0x681e7f:c.instructions+=1;goto B681e7f;
case 0x681e84:goto L681e84;
case 0x681e89:goto L681e89;
case 0x681e8b:c.instructions+=5;goto B681e8b;
case 0x681e8d:c.instructions+=4;goto B681e8d;
case 0x681e90:c.instructions+=3;goto B681e90;
case 0x681e92:c.instructions+=2;goto B681e92;
case 0x681e94:c.instructions+=1;goto B681e94;
case 0x681e99:goto L681e99;
case 0x681e9b:c.instructions+=1;goto B681e9b;
case 0x681ea1:goto L681ea1;
case 0x681ea4:c.instructions+=6;goto B681ea4;
case 0x681ea7:c.instructions+=5;goto B681ea7;
case 0x681eab:c.instructions+=4;goto B681eab;
case 0x681eaf:c.instructions+=3;goto B681eaf;
case 0x681eb1:c.instructions+=2;goto B681eb1;
case 0x681eb4:c.instructions+=1;goto B681eb4;
case 0x681eb6:goto L681eb6;
case 0x681eb9:c.instructions+=5;goto B681eb9;
case 0x681ebc:c.instructions+=4;goto B681ebc;
case 0x681ebf:c.instructions+=3;goto B681ebf;
case 0x681ec2:c.instructions+=2;goto B681ec2;
case 0x681ec5:c.instructions+=1;goto B681ec5;
case 0x681ec7:goto L681ec7;
case 0x681eca:c.instructions+=4;goto B681eca;
case 0x681ecc:c.instructions+=3;goto B681ecc;
case 0x681ecf:c.instructions+=2;goto B681ecf;
case 0x681ed2:c.instructions+=1;goto B681ed2;
case 0x681ed4:goto L681ed4;
case 0x681ed7:c.instructions+=2;goto B681ed7;
case 0x681ed9:c.instructions+=1;goto B681ed9;
case 0x681edb:goto L681edb;
case 0x681edf:c.instructions+=1;goto B681edf;
case 0x681ee1:goto L681ee1;
case 0x681ee4:c.instructions+=2;goto B681ee4;
case 0x681ee7:c.instructions+=1;goto B681ee7;
case 0x681ee9:goto L681ee9;
case 0x681eec:c.instructions+=1;goto B681eec;
case 0x681eef:goto L681eef;
case 0x681ef3:c.instructions+=2;goto B681ef3;
case 0x681ef4:c.instructions+=1;goto B681ef4;
case 0x681ef6:goto L681ef6;
case 0x681ef9:c.instructions+=1;goto B681ef9;
case 0x681efb:goto L681efb;
case 0x681efe:c.instructions+=5;goto B681efe;
case 0x681f01:c.instructions+=4;goto B681f01;
case 0x681f04:c.instructions+=3;goto B681f04;
case 0x681f07:c.instructions+=2;goto B681f07;
case 0x681f0a:c.instructions+=1;goto B681f0a;
case 0x681f0c:goto L681f0c;
case 0x681f0f:c.instructions+=1;goto B681f0f;
case 0x681f12:goto L681f12;
case 0x681f15:c.instructions+=3;goto B681f15;
case 0x681f16:c.instructions+=2;goto B681f16;
case 0x681f19:c.instructions+=1;goto B681f19;
case 0x681f1b:goto L681f1b;
case 0x681f1d:c.instructions+=4;goto B681f1d;
case 0x681f21:c.instructions+=3;goto B681f21;
case 0x681f24:c.instructions+=2;goto B681f24;
case 0x681f27:c.instructions+=1;goto B681f27;
case 0x681f29:goto L681f29;
case 0x681f2b:c.instructions+=1;goto B681f2b;
case 0x681f31:goto L681f31;
case 0x681f34:c.instructions+=1;goto B681f34;
case 0x681f36:goto L681f36;
case 0x681f3a:c.instructions+=1;goto B681f3a;
case 0x681f3c:goto L681f3c;
case 0x681f3e:c.instructions+=4;goto B681f3e;
case 0x681f3f:c.instructions+=3;goto B681f3f;
case 0x681f42:c.instructions+=2;goto B681f42;
case 0x681f44:c.instructions+=1;goto B681f44;
case 0x681f49:goto L681f49;
case 0x681f4b:c.instructions+=1;goto B681f4b;
case 0x681f51:goto L681f51;
case 0x681f54:c.instructions+=2;goto B681f54;
case 0x681f56:c.instructions+=1;goto B681f56;
case 0x681f58:goto L681f58;
case 0x681f5a:c.instructions+=2;goto B681f5a;
case 0x681f5d:c.instructions+=1;goto B681f5d;
case 0x681f5f:goto L681f5f;
case 0x681f62:c.instructions+=1;goto B681f62;
case 0x681f64:goto L681f64;
case 0x681f67:c.instructions+=2;goto B681f67;
case 0x681f6a:c.instructions+=1;goto B681f6a;
case 0x681f6c:goto L681f6c;
case 0x681f6f:c.instructions+=5;goto B681f6f;
case 0x681f72:c.instructions+=4;goto B681f72;
case 0x681f74:c.instructions+=3;goto B681f74;
case 0x681f79:c.instructions+=2;goto B681f79;
case 0x681f7e:c.instructions+=1;goto B681f7e;
case 0x681f80:goto L681f80;
case 0x681f83:c.instructions+=1;goto B681f83;
case 0x681f86:goto L681f86;
case 0x681f88:c.instructions+=1;goto B681f88;
case 0x681f8d:goto L681f8d;
case 0x681f90:c.instructions+=3;goto B681f90;
case 0x681f93:c.instructions+=2;goto B681f93;
case 0x681f96:c.instructions+=1;goto B681f96;
case 0x681f97:goto L681f97;
case 0x681f9a:c.instructions+=2;goto B681f9a;
case 0x681f9d:c.instructions+=1;goto B681f9d;
case 0x681f9f:goto L681f9f;
case 0x681fa2:c.instructions+=8;goto B681fa2;
case 0x681fa5:c.instructions+=7;goto B681fa5;
case 0x681fa8:c.instructions+=6;goto B681fa8;
case 0x681fab:c.instructions+=5;goto B681fab;
case 0x681fae:c.instructions+=4;goto B681fae;
case 0x681fb1:c.instructions+=3;goto B681fb1;
case 0x681fb4:c.instructions+=2;goto B681fb4;
case 0x681fb6:c.instructions+=1;goto B681fb6;
case 0x681fb9:goto L681fb9;
case 0x681fbb:goto L681fbb;
case 0x681fbd:c.instructions+=5;goto B681fbd;
case 0x681fbf:c.instructions+=4;goto B681fbf;
case 0x681fc2:c.instructions+=3;goto B681fc2;
case 0x681fc5:c.instructions+=2;goto B681fc5;
case 0x681fc6:c.instructions+=1;goto B681fc6;
case 0x681fc9:goto L681fc9;
case 0x681fcb:goto L681fcb;
case 0x681fcd:c.instructions+=1;goto B681fcd;
case 0x681fd2:goto L681fd2;
case 0x681fd4:c.instructions+=1;goto B681fd4;
case 0x681fd6:goto L681fd6;
case 0x681fd8:goto L681fd8;
case 0x681fd9:c.instructions+=4;goto B681fd9;
case 0x681fda:c.instructions+=3;goto B681fda;
case 0x681fdb:c.instructions+=2;goto B681fdb;
case 0x681fdc:c.instructions+=1;goto B681fdc;
case 0x681fdf:goto L681fdf;
case 0x681fe4:c.instructions+=4;goto B681fe4;
case 0x681fe5:c.instructions+=3;goto B681fe5;
case 0x681fe6:c.instructions+=2;goto B681fe6;
case 0x681fe7:c.instructions+=1;goto B681fe7;
case 0x681fec:goto L681fec;
case 0x681fef:c.instructions+=2;goto B681fef;
case 0x681ff4:c.instructions+=1;goto B681ff4;
case 0x681ff6:goto L681ff6;
case 0x681ff8:c.instructions+=5;goto B681ff8;
case 0x681ff9:c.instructions+=4;goto B681ff9;
case 0x681ffb:c.instructions+=3;goto B681ffb;
case 0x681ffe:c.instructions+=2;goto B681ffe;
case 0x681fff:c.instructions+=1;goto B681fff;
default:missing_instruction(c.pc);}
B681002:L681002:{c.instructions+=11;NFSU2_TR(0x681002);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681004:{NFSU2_TR(0x681004);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681007:{NFSU2_TR(0x681007);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681008:{NFSU2_TR(0x681008);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68100b:{NFSU2_TR(0x68100b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68100c:{NFSU2_TR(0x68100c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68100f:{NFSU2_TR(0x68100f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681010:{NFSU2_TR(0x681010);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681011:{NFSU2_TR(0x681011);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681012:{NFSU2_TR(0x681012);
__builtin_memmove((R+4),(R+24),4);
}
B681014:{NFSU2_TR(0x681014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681019ull));
TAIL_STATIC(0x6758ceu,675);
}
B681019:L681019:{c.instructions+=2;NFSU2_TR(0x681019);
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
B68101b:{NFSU2_TR(0x68101b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681021:L681021:{c.instructions+=13;NFSU2_TR(0x681021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681024:{NFSU2_TR(0x681024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681027:{NFSU2_TR(0x681027);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681029:{NFSU2_TR(0x681029);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68102c:{NFSU2_TR(0x68102c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68102d:{NFSU2_TR(0x68102d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681030:{NFSU2_TR(0x681030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681031:{NFSU2_TR(0x681031);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681034:{NFSU2_TR(0x681034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681035:{NFSU2_TR(0x681035);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681036:{NFSU2_TR(0x681036);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681039:{NFSU2_TR(0x681039);
__builtin_memmove((R+4),(R+24),4);
}
B68103b:{NFSU2_TR(0x68103b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681040ull));
TAIL_STATIC(0x6758ceu,675);
}
B681040:L681040:{c.instructions+=2;NFSU2_TR(0x681040);
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
B681042:{NFSU2_TR(0x681042);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681048:L681048:{c.instructions+=6;NFSU2_TR(0x681048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68104b:{NFSU2_TR(0x68104b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68104e:{NFSU2_TR(0x68104e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681051:{NFSU2_TR(0x681051);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B681053:{NFSU2_TR(0x681053);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681056:{NFSU2_TR(0x681056);
if(r1(R+518)){{goto L681096;}}
}
B681058:L681058:{c.instructions+=11;NFSU2_TR(0x681058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68105c:{NFSU2_TR(0x68105c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68105e:{NFSU2_TR(0x68105e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68105f:{NFSU2_TR(0x68105f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681062:{NFSU2_TR(0x681062);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681063:{NFSU2_TR(0x681063);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681066:{NFSU2_TR(0x681066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681067:{NFSU2_TR(0x681067);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68106c:{NFSU2_TR(0x68106c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68106f:{NFSU2_TR(0x68106f);
__builtin_memmove((R+4),(R+24),4);
}
B681071:{NFSU2_TR(0x681071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681076ull));
TAIL_STATIC(0x6758ceu,675);
}
B681076:L681076:{c.instructions+=2;NFSU2_TR(0x681076);
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
B681078:{NFSU2_TR(0x681078);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B68107e:L68107e:{c.instructions+=7;NFSU2_TR(0x68107e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681081:{NFSU2_TR(0x681081);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681084:{NFSU2_TR(0x681084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681087:{NFSU2_TR(0x681087);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68108a:{NFSU2_TR(0x68108a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B68108d:{NFSU2_TR(0x68108d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681093:{NFSU2_TR(0x681093);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681096:L681096:{c.instructions+=3;NFSU2_TR(0x681096);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681099:{NFSU2_TR(0x681099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68109c:{NFSU2_TR(0x68109c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681ac1;}}
}
B6810a2:L6810a2:{c.instructions+=5;NFSU2_TR(0x6810a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6810a5:{NFSU2_TR(0x6810a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6810a8:{NFSU2_TR(0x6810a8);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6810aa:{NFSU2_TR(0x6810aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6810ad:{NFSU2_TR(0x6810ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6810b0:L6810b0:{c.instructions+=9;NFSU2_TR(0x6810b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6810b3:{NFSU2_TR(0x6810b3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6810b5:{NFSU2_TR(0x6810b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6810b6:{NFSU2_TR(0x6810b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6810b7:{NFSU2_TR(0x6810b7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6810ba:{NFSU2_TR(0x6810ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6810bc:{NFSU2_TR(0x6810bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6810be:{NFSU2_TR(0x6810be);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6810c4:{NFSU2_TR(0x6810c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6810c9ull));
TAIL_STATIC(0x699c39u,699);
}
B6810c9:L6810c9:{c.instructions+=4;NFSU2_TR(0x6810c9);
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
B6810cc:{NFSU2_TR(0x6810cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6810cf:{NFSU2_TR(0x6810cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6810d2:{NFSU2_TR(0x6810d2);
if(r1(R+518)){{goto L681a54;}}
}
B6810d8:L6810d8:{c.instructions+=8;NFSU2_TR(0x6810d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6810db:{NFSU2_TR(0x6810db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6810de:{NFSU2_TR(0x6810de);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6810e1:{NFSU2_TR(0x6810e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6810e4:{NFSU2_TR(0x6810e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6810e6:{NFSU2_TR(0x6810e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6810e9:{NFSU2_TR(0x6810e9);
__builtin_memmove((R+4),(R+28),4);
}
B6810eb:{NFSU2_TR(0x6810eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6810f0ull));
TAIL_STATIC(0x699765u,699);
}
B6810f0:L6810f0:{c.instructions+=11;NFSU2_TR(0x6810f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6810f4:{NFSU2_TR(0x6810f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6810f7:{NFSU2_TR(0x6810f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6810fa:{NFSU2_TR(0x6810fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6810fd:{NFSU2_TR(0x6810fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681100:{NFSU2_TR(0x681100);
u8 U[4];
w4(U+0,u32(0x1full));
s4(u32(r4(R+28)),r4(U+0));
}
B681106:{NFSU2_TR(0x681106);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68110c:{NFSU2_TR(0x68110c);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68110f:{NFSU2_TR(0x68110f);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B681115:{NFSU2_TR(0x681115);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B681118:{NFSU2_TR(0x681118);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L681176;}}
}
B68111a:L68111a:{c.instructions+=6;NFSU2_TR(0x68111a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68111d:{NFSU2_TR(0x68111d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B681121:{NFSU2_TR(0x681121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B681124:{NFSU2_TR(0x681124);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681127:{NFSU2_TR(0x681127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B68112a:{NFSU2_TR(0x68112a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B68112d:L68112d:{c.instructions+=8;NFSU2_TR(0x68112d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681130:{NFSU2_TR(0x681130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B681132:{NFSU2_TR(0x681132);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681135:{NFSU2_TR(0x681135);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B681138:{NFSU2_TR(0x681138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B68113a:{NFSU2_TR(0x68113a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B68113c:{NFSU2_TR(0x68113c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B681140:{NFSU2_TR(0x681140);
if(r1(R+518)){{goto L681168;}}
}
B681142:L681142:{c.instructions+=5;NFSU2_TR(0x681142);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B681145:{NFSU2_TR(0x681145);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B681148:{NFSU2_TR(0x681148);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B68114a:{NFSU2_TR(0x68114a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B68114d:{NFSU2_TR(0x68114d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681155;}}
}
B68114f:L68114f:{c.instructions+=2;NFSU2_TR(0x68114f);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B681152:{NFSU2_TR(0x681152);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B681155:L681155:{c.instructions+=5;NFSU2_TR(0x681155);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B681158:{NFSU2_TR(0x681158);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B68115b:{NFSU2_TR(0x68115b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B68115d:{NFSU2_TR(0x68115d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B681160:{NFSU2_TR(0x681160);
if(r1(R+514)){{goto L681168;}}
}
B681162:L681162:{c.instructions+=2;NFSU2_TR(0x681162);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B681165:{NFSU2_TR(0x681165);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B681168:L681168:{c.instructions+=5;NFSU2_TR(0x681168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68116b:{NFSU2_TR(0x68116b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B68116e:{NFSU2_TR(0x68116e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B681170:{NFSU2_TR(0x681170);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B681171:{NFSU2_TR(0x681171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68112du);}goto L68112d;}}
}
B681173:L681173:{c.instructions+=1;NFSU2_TR(0x681173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B681176:L681176:{c.instructions+=5;NFSU2_TR(0x681176);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B681179:{NFSU2_TR(0x681179);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B68117c:{NFSU2_TR(0x68117c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B68117e:{NFSU2_TR(0x68117e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B681181:{NFSU2_TR(0x681181);
if(r1(R+514)){{goto L681187;}}
}
B681183:L681183:{c.instructions+=1;NFSU2_TR(0x681183);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B681187:L681187:{c.instructions+=6;NFSU2_TR(0x681187);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68118a:{NFSU2_TR(0x68118a);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68118d:{NFSU2_TR(0x68118d);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B68118f:{NFSU2_TR(0x68118f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B681191:{NFSU2_TR(0x681191);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B681194:{NFSU2_TR(0x681194);
if(r1(R+514)){{goto L681199;}}
}
B681196:L681196:{c.instructions+=1;NFSU2_TR(0x681196);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+0,u8(u32(r1(U+0))|u32(u8(0x80ull))));
s1(u32(r4(R+28)),r1(U+0));
}
B681199:L681199:{c.instructions+=5;NFSU2_TR(0x681199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68119c:{NFSU2_TR(0x68119c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68119f:{NFSU2_TR(0x68119f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6811a3:{NFSU2_TR(0x6811a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6811a6:{NFSU2_TR(0x6811a6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6810b0u);}goto L6810b0;}}
}
B6811ac:L6811ac:{c.instructions+=1;NFSU2_TR(0x6811ac);
{goto L681ac1;}
}
B6811b1:L6811b1:{c.instructions+=2;NFSU2_TR(0x6811b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6811b4:{NFSU2_TR(0x6811b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6811e4;}}
}
B6811b6:L6811b6:{c.instructions+=2;NFSU2_TR(0x6811b6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
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
B6811b9:{NFSU2_TR(0x6811b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6811d3;}}
}
B6811bb:L6811bb:{c.instructions+=5;NFSU2_TR(0x6811bb);
u8 U[4];
w4(U+0,u32(0x7b7a8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6811c0:{NFSU2_TR(0x6811c0);
u8 U[4];
w4(U+0,u32(0xdb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6811c5:{NFSU2_TR(0x6811c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6811c8:{NFSU2_TR(0x6811c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6811c9:{NFSU2_TR(0x6811c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6811ceull));
TAIL_STATIC(0x675267u,675);
}
B6811ce:L6811ce:{c.instructions+=2;NFSU2_TR(0x6811ce);
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
B6811d1:{NFSU2_TR(0x6811d1);
{goto L6811da;}
}
B6811d3:L6811d3:{c.instructions+=1;NFSU2_TR(0x6811d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6811da:L6811da:{c.instructions+=2;NFSU2_TR(0x6811da);
w4(R+0,u32(0x80004005ull));
}
B6811df:{NFSU2_TR(0x6811df);
{goto L681ac3;}
}
B6811e4:L6811e4:{c.instructions+=7;NFSU2_TR(0x6811e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6811e7:{NFSU2_TR(0x6811e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6811ea:{NFSU2_TR(0x6811ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6811ec:{NFSU2_TR(0x6811ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6811ef:{NFSU2_TR(0x6811ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6811f2:{NFSU2_TR(0x6811f2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6811f5:{NFSU2_TR(0x6811f5);
if(r1(R+518)){{goto L681250;}}
}
B6811f7:L6811f7:{c.instructions+=3;NFSU2_TR(0x6811f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6811f8:{NFSU2_TR(0x6811f8);
__builtin_memmove((R+4),(R+24),4);
}
B6811fa:{NFSU2_TR(0x6811fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6811ffull));
TAIL_STATIC(0x673a0fu,673);
}
B6811ff:L6811ff:{c.instructions+=3;NFSU2_TR(0x6811ff);
__builtin_memmove((R+8),(R+0),4);
}
B681201:{NFSU2_TR(0x681201);
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
B681203:{NFSU2_TR(0x681203);
if(r1(R+518)){{goto L681a54;}}
}
B681209:L681209:{c.instructions+=3;NFSU2_TR(0x681209);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68120b:{NFSU2_TR(0x68120b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68120d:{NFSU2_TR(0x68120d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68121c;}}
}
B68120f:L68120f:{c.instructions+=6;NFSU2_TR(0x68120f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681212:{NFSU2_TR(0x681212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B681214:{NFSU2_TR(0x681214);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B681217:{NFSU2_TR(0x681217);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B681218:{NFSU2_TR(0x681218);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B68121a:{NFSU2_TR(0x68121a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68120fu);}goto L68120f;}}
}
B68121c:L68121c:{c.instructions+=4;NFSU2_TR(0x68121c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68121d:{NFSU2_TR(0x68121d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681220:{NFSU2_TR(0x681220);
__builtin_memmove((R+4),(R+24),4);
}
B681222:{NFSU2_TR(0x681222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681227ull));
TAIL_STATIC(0x673b2cu,673);
}
B681227:L681227:{c.instructions+=2;NFSU2_TR(0x681227);
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
B681229:{NFSU2_TR(0x681229);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B68122f:L68122f:{c.instructions+=9;NFSU2_TR(0x68122f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681230:{NFSU2_TR(0x681230);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681231:{NFSU2_TR(0x681231);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B681234:{NFSU2_TR(0x681234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681235:{NFSU2_TR(0x681235);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681236:{NFSU2_TR(0x681236);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681239:{NFSU2_TR(0x681239);
__builtin_memmove((R+4),(R+24),4);
}
B68123b:{NFSU2_TR(0x68123b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68123e:{NFSU2_TR(0x68123e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681243ull));
TAIL_STATIC(0x6779e0u,677);
}
B681243:L681243:{c.instructions+=2;NFSU2_TR(0x681243);
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
B681245:{NFSU2_TR(0x681245);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B68124b:L68124b:{c.instructions+=1;NFSU2_TR(0x68124b);
{goto L681ac1;}
}
B681250:L681250:{c.instructions+=7;NFSU2_TR(0x681250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B681253:{NFSU2_TR(0x681253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B681256:{NFSU2_TR(0x681256);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B681258:{NFSU2_TR(0x681258);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B681259:{NFSU2_TR(0x681259);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68125c:{NFSU2_TR(0x68125c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68125f:{NFSU2_TR(0x68125f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L681663;}}
}
B681265:L681265:{c.instructions+=2;NFSU2_TR(0x681265);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681268:{NFSU2_TR(0x681268);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681270;}}
}
B68126a:L68126a:{c.instructions+=2;NFSU2_TR(0x68126a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68126e:{NFSU2_TR(0x68126e);
if(r1(R+518)){{goto L681284;}}
}
B681270:L681270:{c.instructions+=2;NFSU2_TR(0x681270);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681274:{NFSU2_TR(0x681274);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L681663;}}
}
B68127a:L68127a:{c.instructions+=2;NFSU2_TR(0x68127a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68127e:{NFSU2_TR(0x68127e);
if(r1(R+518)){{goto L681663;}}
}
B681284:L681284:{c.instructions+=2;NFSU2_TR(0x681284);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681288:{NFSU2_TR(0x681288);
if(r1(R+518)){{goto L681298;}}
}
B68128a:L68128a:{c.instructions+=2;NFSU2_TR(0x68128a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68128d:{NFSU2_TR(0x68128d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L681295;}}
}
B68128f:L68128f:{c.instructions+=2;NFSU2_TR(0x68128f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B681293:{NFSU2_TR(0x681293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681298;}}
}
B681295:L681295:{c.instructions+=1;NFSU2_TR(0x681295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681298:L681298:{c.instructions+=6;NFSU2_TR(0x681298);
__builtin_memmove((R+28),(R+12),4);
}
B68129a:{NFSU2_TR(0x68129a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B68129d:{NFSU2_TR(0x68129d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6812a0:{NFSU2_TR(0x6812a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6812a1:{NFSU2_TR(0x6812a1);
__builtin_memmove((R+4),(R+24),4);
}
B6812a3:{NFSU2_TR(0x6812a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6812a8ull));
TAIL_STATIC(0x673a0fu,673);
}
B6812a8:L6812a8:{c.instructions+=3;NFSU2_TR(0x6812a8);
__builtin_memmove((R+8),(R+0),4);
}
B6812aa:{NFSU2_TR(0x6812aa);
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
B6812ac:{NFSU2_TR(0x6812ac);
if(r1(R+518)){{goto L681a54;}}
}
B6812b2:L6812b2:{c.instructions+=4;NFSU2_TR(0x6812b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6812b3:{NFSU2_TR(0x6812b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6812b4:{NFSU2_TR(0x6812b4);
__builtin_memmove((R+4),(R+24),4);
}
B6812b6:{NFSU2_TR(0x6812b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6812bbull));
TAIL_STATIC(0x673b2cu,673);
}
B6812bb:L6812bb:{c.instructions+=2;NFSU2_TR(0x6812bb);
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
B6812bd:{NFSU2_TR(0x6812bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B6812c3:L6812c3:{c.instructions+=2;NFSU2_TR(0x6812c3);
__builtin_memmove((R+0),(R+8),4);
}
B6812c5:{NFSU2_TR(0x6812c5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6812c7:L6812c7:{c.instructions+=5;NFSU2_TR(0x6812c7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6812cb:{NFSU2_TR(0x6812cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6812ce:{NFSU2_TR(0x6812ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6812cf:{NFSU2_TR(0x6812cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6812d2:{NFSU2_TR(0x6812d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6812c7u);}goto L6812c7;}}
}
B6812d4:L6812d4:{c.instructions+=3;NFSU2_TR(0x6812d4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6812d6:{NFSU2_TR(0x6812d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6812d7:{NFSU2_TR(0x6812d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6812da:L6812da:{c.instructions+=5;NFSU2_TR(0x6812da);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6812de:{NFSU2_TR(0x6812de);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6812e0:{NFSU2_TR(0x6812e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6812e1:{NFSU2_TR(0x6812e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xbull))));
}
B6812e4:{NFSU2_TR(0x6812e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6812dau);}goto L6812da;}}
}
B6812e6:L6812e6:{c.instructions+=10;NFSU2_TR(0x6812e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6812e9:{NFSU2_TR(0x6812e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6812eb:{NFSU2_TR(0x6812eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6812ee:{NFSU2_TR(0x6812ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6812f1:{NFSU2_TR(0x6812f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6812f4:{NFSU2_TR(0x6812f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6812f7:{NFSU2_TR(0x6812f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6812fa:{NFSU2_TR(0x6812fa);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6812fd:{NFSU2_TR(0x6812fd);
w4(R+12,u32(0x20400001ull));
}
B681302:{NFSU2_TR(0x681302);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68139a;}}
}
B681308:L681308:{c.instructions+=2;NFSU2_TR(0x681308);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B68130c:{NFSU2_TR(0x68130c);
if(r1(R+518)){{goto L681318;}}
}
B68130e:L68130e:{c.instructions+=2;NFSU2_TR(0x68130e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B681312:{NFSU2_TR(0x681312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68139a;}}
}
B681318:L681318:{c.instructions+=9;NFSU2_TR(0x681318);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68131a:{NFSU2_TR(0x68131a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68131c:{NFSU2_TR(0x68131c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68131f:{NFSU2_TR(0x68131f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681320:{NFSU2_TR(0x681320);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681323:{NFSU2_TR(0x681323);
__builtin_memmove((R+4),(R+24),4);
}
B681325:{NFSU2_TR(0x681325);
u8 U[4];
w4(U+0,u32(0x10200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68132a:{NFSU2_TR(0x68132a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68132b:{NFSU2_TR(0x68132b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681330ull));
TAIL_STATIC(0x6758ceu,675);
}
B681330:L681330:{c.instructions+=2;NFSU2_TR(0x681330);
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
B681332:{NFSU2_TR(0x681332);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681338:L681338:{c.instructions+=8;NFSU2_TR(0x681338);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68133a:{NFSU2_TR(0x68133a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68133c:{NFSU2_TR(0x68133c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68133f:{NFSU2_TR(0x68133f);
__builtin_memmove((R+4),(R+24),4);
}
B681341:{NFSU2_TR(0x681341);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681344:{NFSU2_TR(0x681344);
u8 U[4];
w4(U+0,u32(0x10400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681349:{NFSU2_TR(0x681349);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68134a:{NFSU2_TR(0x68134a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68134full));
TAIL_STATIC(0x6758ceu,675);
}
B68134f:L68134f:{c.instructions+=2;NFSU2_TR(0x68134f);
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
B681351:{NFSU2_TR(0x681351);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681357:L681357:{c.instructions+=8;NFSU2_TR(0x681357);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681359:{NFSU2_TR(0x681359);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68135b:{NFSU2_TR(0x68135b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68135e:{NFSU2_TR(0x68135e);
__builtin_memmove((R+4),(R+24),4);
}
B681360:{NFSU2_TR(0x681360);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681363:{NFSU2_TR(0x681363);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681368:{NFSU2_TR(0x681368);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681369:{NFSU2_TR(0x681369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68136eull));
TAIL_STATIC(0x6758ceu,675);
}
B68136e:L68136e:{c.instructions+=2;NFSU2_TR(0x68136e);
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
B681370:{NFSU2_TR(0x681370);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681376:L681376:{c.instructions+=8;NFSU2_TR(0x681376);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681378:{NFSU2_TR(0x681378);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68137b:{NFSU2_TR(0x68137b);
__builtin_memmove((R+4),(R+24),4);
}
B68137d:{NFSU2_TR(0x68137d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681380:{NFSU2_TR(0x681380);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681383:{NFSU2_TR(0x681383);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681384:{NFSU2_TR(0x681384);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681385:{NFSU2_TR(0x681385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68138aull));
TAIL_STATIC(0x6758ceu,675);
}
B68138a:L68138a:{c.instructions+=2;NFSU2_TR(0x68138a);
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
B68138c:{NFSU2_TR(0x68138c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681392:L681392:{c.instructions+=3;NFSU2_TR(0x681392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681395:{NFSU2_TR(0x681395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B681397:{NFSU2_TR(0x681397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68139a:L68139a:{c.instructions+=3;NFSU2_TR(0x68139a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68139d:{NFSU2_TR(0x68139d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6813a1:{NFSU2_TR(0x6813a1);
if(r1(R+518)){{goto L681502;}}
}
B6813a7:L6813a7:{c.instructions+=3;NFSU2_TR(0x6813a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6813aa:{NFSU2_TR(0x6813aa);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6813ac:{NFSU2_TR(0x6813ac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681404;}}
}
B6813ae:L6813ae:{c.instructions+=3;NFSU2_TR(0x6813ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6813b1:{NFSU2_TR(0x6813b1);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6813b4:{NFSU2_TR(0x6813b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6813bc;}}
}
B6813b6:L6813b6:{c.instructions+=1;NFSU2_TR(0x6813b6);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6813bc:L6813bc:{c.instructions+=8;NFSU2_TR(0x6813bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813bd:{NFSU2_TR(0x6813bd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6813bf:{NFSU2_TR(0x6813bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813c0:{NFSU2_TR(0x6813c0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6813c3:{NFSU2_TR(0x6813c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813c5:{NFSU2_TR(0x6813c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813c7:{NFSU2_TR(0x6813c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6813ca:{NFSU2_TR(0x6813ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6813cfull));
TAIL_STATIC(0x699c39u,699);
}
B6813cf:L6813cf:{c.instructions+=3;NFSU2_TR(0x6813cf);
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
B6813d2:{NFSU2_TR(0x6813d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6813d5:{NFSU2_TR(0x6813d5);
if(r1(R+518)){{goto L681a54;}}
}
B6813db:L6813db:{c.instructions+=12;NFSU2_TR(0x6813db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6813df:{NFSU2_TR(0x6813df);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813e1:{NFSU2_TR(0x6813e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6813e4:{NFSU2_TR(0x6813e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813e5:{NFSU2_TR(0x6813e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6813e8:{NFSU2_TR(0x6813e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813e9:{NFSU2_TR(0x6813e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6813ec:{NFSU2_TR(0x6813ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813ed:{NFSU2_TR(0x6813ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813ee:{NFSU2_TR(0x6813ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6813ef:{NFSU2_TR(0x6813ef);
__builtin_memmove((R+4),(R+24),4);
}
B6813f1:{NFSU2_TR(0x6813f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6813f6ull));
TAIL_STATIC(0x6758ceu,675);
}
B6813f6:L6813f6:{c.instructions+=2;NFSU2_TR(0x6813f6);
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
B6813f8:{NFSU2_TR(0x6813f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B6813fe:L6813fe:{c.instructions+=2;NFSU2_TR(0x6813fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681401:{NFSU2_TR(0x681401);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681404:L681404:{c.instructions+=3;NFSU2_TR(0x681404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681407:{NFSU2_TR(0x681407);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68140b:{NFSU2_TR(0x68140b);
if(r1(R+518)){{goto L68144a;}}
}
B68140d:L68140d:{c.instructions+=11;NFSU2_TR(0x68140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681411:{NFSU2_TR(0x681411);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681413:{NFSU2_TR(0x681413);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681415:{NFSU2_TR(0x681415);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681418:{NFSU2_TR(0x681418);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681419:{NFSU2_TR(0x681419);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68141c:{NFSU2_TR(0x68141c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68141d:{NFSU2_TR(0x68141d);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681422:{NFSU2_TR(0x681422);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681423:{NFSU2_TR(0x681423);
__builtin_memmove((R+4),(R+24),4);
}
B681425:{NFSU2_TR(0x681425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68142aull));
TAIL_STATIC(0x6758ceu,675);
}
B68142a:L68142a:{c.instructions+=2;NFSU2_TR(0x68142a);
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
B68142c:{NFSU2_TR(0x68142c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681432:L681432:{c.instructions+=7;NFSU2_TR(0x681432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681435:{NFSU2_TR(0x681435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681438:{NFSU2_TR(0x681438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68143b:{NFSU2_TR(0x68143b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68143e:{NFSU2_TR(0x68143e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B681441:{NFSU2_TR(0x681441);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681447:{NFSU2_TR(0x681447);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68144a:L68144a:{c.instructions+=2;NFSU2_TR(0x68144a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68144e:{NFSU2_TR(0x68144e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6814a7;}}
}
B681450:L681450:{c.instructions+=6;NFSU2_TR(0x681450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681453:{NFSU2_TR(0x681453);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681455:{NFSU2_TR(0x681455);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681457:{NFSU2_TR(0x681457);
u8 U[4];
w4(U+0,u32(0x751ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68145c:{NFSU2_TR(0x68145c);
u8 U[4];
w4(U+0,u32(0x7b3b1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681461:{NFSU2_TR(0x681461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681466ull));
TAIL_STATIC(0x699be0u,699);
}
B681466:L681466:{c.instructions+=3;NFSU2_TR(0x681466);
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
B681469:{NFSU2_TR(0x681469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68146c:{NFSU2_TR(0x68146c);
if(r1(R+518)){{goto L681a54;}}
}
B681472:L681472:{c.instructions+=1;NFSU2_TR(0x681472);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B681474:L681474:{c.instructions+=1;NFSU2_TR(0x681474);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B681476:L681476:{c.instructions+=2;NFSU2_TR(0x681476);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681478:{NFSU2_TR(0x681478);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68147e;}}
}
B68147a:L68147a:{c.instructions+=2;NFSU2_TR(0x68147a);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B68147c:{NFSU2_TR(0x68147c);
{goto L681480;}
}
B68147e:L68147e:{c.instructions+=1;NFSU2_TR(0x68147e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B681480:L681480:{c.instructions+=8;NFSU2_TR(0x681480);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681481:{NFSU2_TR(0x681481);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681482:{NFSU2_TR(0x681482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681485:{NFSU2_TR(0x681485);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B681488:{NFSU2_TR(0x681488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681489:{NFSU2_TR(0x681489);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68148a:{NFSU2_TR(0x68148a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68148d:{NFSU2_TR(0x68148d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681492ull));
TAIL_STATIC(0x699c39u,699);
}
B681492:L681492:{c.instructions+=2;NFSU2_TR(0x681492);
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
B681495:{NFSU2_TR(0x681495);
if(r1(R+518)){{goto L681a54;}}
}
B68149b:L68149b:{c.instructions+=3;NFSU2_TR(0x68149b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B68149c:{NFSU2_TR(0x68149c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B68149f:{NFSU2_TR(0x68149f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681476u);}goto L681476;}}
}
B6814a1:L6814a1:{c.instructions+=3;NFSU2_TR(0x6814a1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6814a2:{NFSU2_TR(0x6814a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6814a5:{NFSU2_TR(0x6814a5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681474u);}goto L681474;}}
}
B6814a7:L6814a7:{c.instructions+=3;NFSU2_TR(0x6814a7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6814a9:{NFSU2_TR(0x6814a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6814ac:{NFSU2_TR(0x6814ac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6815ce;}}
}
B6814b2:L6814b2:{c.instructions+=9;NFSU2_TR(0x6814b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6814b3:{NFSU2_TR(0x6814b3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6814b5:{NFSU2_TR(0x6814b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6814b6:{NFSU2_TR(0x6814b6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6814b9:{NFSU2_TR(0x6814b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6814bc:{NFSU2_TR(0x6814bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6814bd:{NFSU2_TR(0x6814bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6814bf:{NFSU2_TR(0x6814bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6814c2:{NFSU2_TR(0x6814c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6814c7ull));
TAIL_STATIC(0x699c39u,699);
}
B6814c7:L6814c7:{c.instructions+=5;NFSU2_TR(0x6814c7);
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
B6814ca:{NFSU2_TR(0x6814ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6814cd:{NFSU2_TR(0x6814cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6814d0:{NFSU2_TR(0x6814d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6814d2:{NFSU2_TR(0x6814d2);
if(r1(R+518)){{goto L681a54;}}
}
B6814d8:L6814d8:{c.instructions+=13;NFSU2_TR(0x6814d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6814db:{NFSU2_TR(0x6814db);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6814dd:{NFSU2_TR(0x6814dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6814e0:{NFSU2_TR(0x6814e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6814e3:{NFSU2_TR(0x6814e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6814e6:{NFSU2_TR(0x6814e6);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6814e9:{NFSU2_TR(0x6814e9);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6814eb:{NFSU2_TR(0x6814eb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6814ec:{NFSU2_TR(0x6814ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6814ef:{NFSU2_TR(0x6814ef);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6814f2:{NFSU2_TR(0x6814f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6814f5:{NFSU2_TR(0x6814f5);
u8 U[4];
w4(U+0,u32(0x117ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6814fb:{NFSU2_TR(0x6814fb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6814b2u);}goto L6814b2;}}
}
B6814fd:L6814fd:{c.instructions+=1;NFSU2_TR(0x6814fd);
{goto L6815ce;}
}
B681502:L681502:{c.instructions+=4;NFSU2_TR(0x681502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681505:{NFSU2_TR(0x681505);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B681507:{NFSU2_TR(0x681507);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68150a:{NFSU2_TR(0x68150a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68155e;}}
}
B68150c:L68150c:{c.instructions+=4;NFSU2_TR(0x68150c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68150f:{NFSU2_TR(0x68150f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B681511:{NFSU2_TR(0x681511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681514:{NFSU2_TR(0x681514);
{goto L681519;}
}
B681516:L681516:{c.instructions+=1;NFSU2_TR(0x681516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681519:L681519:{c.instructions+=9;NFSU2_TR(0x681519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68151c:{NFSU2_TR(0x68151c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68151f:{NFSU2_TR(0x68151f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681522:{NFSU2_TR(0x681522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681525:{NFSU2_TR(0x681525);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B681527:{NFSU2_TR(0x681527);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B681529:{NFSU2_TR(0x681529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68152c:{NFSU2_TR(0x68152c);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B68152f:{NFSU2_TR(0x68152f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L681537;}}
}
B681531:L681531:{c.instructions+=1;NFSU2_TR(0x681531);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B681537:L681537:{c.instructions+=8;NFSU2_TR(0x681537);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681538:{NFSU2_TR(0x681538);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B68153a:{NFSU2_TR(0x68153a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68153b:{NFSU2_TR(0x68153b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68153e:{NFSU2_TR(0x68153e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681540:{NFSU2_TR(0x681540);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681542:{NFSU2_TR(0x681542);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681545:{NFSU2_TR(0x681545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68154aull));
TAIL_STATIC(0x699c39u,699);
}
B68154a:L68154a:{c.instructions+=3;NFSU2_TR(0x68154a);
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
B68154d:{NFSU2_TR(0x68154d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B68154f:{NFSU2_TR(0x68154f);
if(r1(R+518)){{goto L681a54;}}
}
B681555:L681555:{c.instructions+=4;NFSU2_TR(0x681555);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B681556:{NFSU2_TR(0x681556);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B681559:{NFSU2_TR(0x681559);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B68155c:{NFSU2_TR(0x68155c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681516u);}goto L681516;}}
}
B68155e:L68155e:{c.instructions+=12;NFSU2_TR(0x68155e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681561:{NFSU2_TR(0x681561);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681563:{NFSU2_TR(0x681563);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681566:{NFSU2_TR(0x681566);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B68156c:{NFSU2_TR(0x68156c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68156f:{NFSU2_TR(0x68156f);
__builtin_memmove((R+0),(R+28),4);
}
B681571:{NFSU2_TR(0x681571);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681574:{NFSU2_TR(0x681574);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B681579:{NFSU2_TR(0x681579);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68157a:{NFSU2_TR(0x68157a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68157d:{NFSU2_TR(0x68157d);
__builtin_memmove((R+4),(R+24),4);
}
B68157f:{NFSU2_TR(0x68157f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681584ull));
TAIL_STATIC(0x6758ceu,675);
}
B681584:L681584:{c.instructions+=2;NFSU2_TR(0x681584);
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
B681586:{NFSU2_TR(0x681586);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B68158c:L68158c:{c.instructions+=7;NFSU2_TR(0x68158c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68158f:{NFSU2_TR(0x68158f);
__builtin_memmove((R+4),(R+24),4);
}
B681591:{NFSU2_TR(0x681591);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681594:{NFSU2_TR(0x681594);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681597:{NFSU2_TR(0x681597);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68159a:{NFSU2_TR(0x68159a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68159d:{NFSU2_TR(0x68159d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6815a2ull));
TAIL_STATIC(0x6782eau,678);
}
B6815a2:L6815a2:{c.instructions+=2;NFSU2_TR(0x6815a2);
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
B6815a4:{NFSU2_TR(0x6815a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B6815aa:L6815aa:{c.instructions+=9;NFSU2_TR(0x6815aa);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6815ac:{NFSU2_TR(0x6815ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6815af:{NFSU2_TR(0x6815af);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20300000ull))));
}
B6815b5:{NFSU2_TR(0x6815b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6815b8:{NFSU2_TR(0x6815b8);
__builtin_memmove((R+4),(R+24),4);
}
B6815ba:{NFSU2_TR(0x6815ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6815bd:{NFSU2_TR(0x6815bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6815be:{NFSU2_TR(0x6815be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6815c1:{NFSU2_TR(0x6815c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6815c6ull));
TAIL_STATIC(0x6758ceu,675);
}
B6815c6:L6815c6:{c.instructions+=2;NFSU2_TR(0x6815c6);
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
B6815c8:{NFSU2_TR(0x6815c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B6815ce:L6815ce:{c.instructions+=4;NFSU2_TR(0x6815ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6815d1:{NFSU2_TR(0x6815d1);
__builtin_memmove((R+4),(R+24),4);
}
B6815d3:{NFSU2_TR(0x6815d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6815d6:{NFSU2_TR(0x6815d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6815dbull));
TAIL_STATIC(0x673b2cu,673);
}
B6815db:L6815db:{c.instructions+=2;NFSU2_TR(0x6815db);
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
B6815dd:{NFSU2_TR(0x6815dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B6815e3:L6815e3:{c.instructions+=3;NFSU2_TR(0x6815e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6815e7:{NFSU2_TR(0x6815e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6815eb:{NFSU2_TR(0x6815eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681ac1;}}
}
B6815f1:L6815f1:{c.instructions+=6;NFSU2_TR(0x6815f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6815f4:{NFSU2_TR(0x6815f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6815f7:{NFSU2_TR(0x6815f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6815fa:{NFSU2_TR(0x6815fa);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B681600:{NFSU2_TR(0x681600);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x50000000ull))));
}
B681606:{NFSU2_TR(0x681606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681609:L681609:{c.instructions+=3;NFSU2_TR(0x681609);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B68160b:{NFSU2_TR(0x68160b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68160e:{NFSU2_TR(0x68160e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681633;}}
}
B681610:L681610:{c.instructions+=5;NFSU2_TR(0x681610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681613:{NFSU2_TR(0x681613);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B681617:{NFSU2_TR(0x681617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B68161a:{NFSU2_TR(0x68161a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68161d:{NFSU2_TR(0x68161d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B681620:L681620:{c.instructions+=8;NFSU2_TR(0x681620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B681622:{NFSU2_TR(0x681622);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B681625:{NFSU2_TR(0x681625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681628:{NFSU2_TR(0x681628);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B68162b:{NFSU2_TR(0x68162b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B68162c:{NFSU2_TR(0x68162c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B68162e:{NFSU2_TR(0x68162e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B681631:{NFSU2_TR(0x681631);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681620u);}goto L681620;}}
}
B681633:L681633:{c.instructions+=8;NFSU2_TR(0x681633);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681635:{NFSU2_TR(0x681635);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681638:{NFSU2_TR(0x681638);
__builtin_memmove((R+4),(R+24),4);
}
B68163a:{NFSU2_TR(0x68163a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68163b:{NFSU2_TR(0x68163b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68163e:{NFSU2_TR(0x68163e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68163f:{NFSU2_TR(0x68163f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681642:{NFSU2_TR(0x681642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681647ull));
TAIL_STATIC(0x6758ceu,675);
}
B681647:L681647:{c.instructions+=2;NFSU2_TR(0x681647);
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
B681649:{NFSU2_TR(0x681649);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B68164f:L68164f:{c.instructions+=5;NFSU2_TR(0x68164f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681652:{NFSU2_TR(0x681652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681655:{NFSU2_TR(0x681655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681659:{NFSU2_TR(0x681659);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68165c:{NFSU2_TR(0x68165c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681609u);}goto L681609;}}
}
B68165e:L68165e:{c.instructions+=1;NFSU2_TR(0x68165e);
{goto L681ac1;}
}
B681663:L681663:{c.instructions+=2;NFSU2_TR(0x681663);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681667:{NFSU2_TR(0x681667);
if(r1(R+518)){{goto L68166c;}}
}
B681669:L681669:{c.instructions+=1;NFSU2_TR(0x681669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68166c:L68166c:{c.instructions+=7;NFSU2_TR(0x68166c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68166f:{NFSU2_TR(0x68166f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B681672:{NFSU2_TR(0x681672);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B681674:{NFSU2_TR(0x681674);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B681678:{NFSU2_TR(0x681678);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681679:{NFSU2_TR(0x681679);
__builtin_memmove((R+4),(R+24),4);
}
B68167b:{NFSU2_TR(0x68167b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681680ull));
TAIL_STATIC(0x673a0fu,673);
}
B681680:L681680:{c.instructions+=3;NFSU2_TR(0x681680);
__builtin_memmove((R+8),(R+0),4);
}
B681682:{NFSU2_TR(0x681682);
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
B681684:{NFSU2_TR(0x681684);
if(r1(R+518)){{goto L681a54;}}
}
B68168a:L68168a:{c.instructions+=4;NFSU2_TR(0x68168a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68168b:{NFSU2_TR(0x68168b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68168c:{NFSU2_TR(0x68168c);
__builtin_memmove((R+4),(R+24),4);
}
B68168e:{NFSU2_TR(0x68168e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681693ull));
TAIL_STATIC(0x673b2cu,673);
}
B681693:L681693:{c.instructions+=2;NFSU2_TR(0x681693);
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
B681695:{NFSU2_TR(0x681695);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B68169b:L68169b:{c.instructions+=2;NFSU2_TR(0x68169b);
__builtin_memmove((R+0),(R+8),4);
}
B68169d:{NFSU2_TR(0x68169d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B68169f:L68169f:{c.instructions+=5;NFSU2_TR(0x68169f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6816a3:{NFSU2_TR(0x6816a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6816a6:{NFSU2_TR(0x6816a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6816a7:{NFSU2_TR(0x6816a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6816aa:{NFSU2_TR(0x6816aa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68169fu);}goto L68169f;}}
}
B6816ac:L6816ac:{c.instructions+=3;NFSU2_TR(0x6816ac);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6816ae:{NFSU2_TR(0x6816ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6816af:{NFSU2_TR(0x6816af);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6816b2:L6816b2:{c.instructions+=5;NFSU2_TR(0x6816b2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6816b6:{NFSU2_TR(0x6816b6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6816b8:{NFSU2_TR(0x6816b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6816b9:{NFSU2_TR(0x6816b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B6816bc:{NFSU2_TR(0x6816bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6816b2u);}goto L6816b2;}}
}
B6816be:L6816be:{c.instructions+=4;NFSU2_TR(0x6816be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6816c1:{NFSU2_TR(0x6816c1);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6816c3:{NFSU2_TR(0x6816c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6816c4:{NFSU2_TR(0x6816c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6816c7:L6816c7:{c.instructions+=5;NFSU2_TR(0x6816c7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6816cb:{NFSU2_TR(0x6816cb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6816cd:{NFSU2_TR(0x6816cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6816ce:{NFSU2_TR(0x6816ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
}
B6816d1:{NFSU2_TR(0x6816d1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6816c7u);}goto L6816c7;}}
}
B6816d3:L6816d3:{c.instructions+=10;NFSU2_TR(0x6816d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6816d6:{NFSU2_TR(0x6816d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6816d8:{NFSU2_TR(0x6816d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6816db:{NFSU2_TR(0x6816db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6816de:{NFSU2_TR(0x6816de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6816e1:{NFSU2_TR(0x6816e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6816e4:{NFSU2_TR(0x6816e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6816e7:{NFSU2_TR(0x6816e7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6816ea:{NFSU2_TR(0x6816ea);
w4(R+12,u32(0x20400001ull));
}
B6816ef:{NFSU2_TR(0x6816ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681777;}}
}
B6816f5:L6816f5:{c.instructions+=9;NFSU2_TR(0x6816f5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6816f7:{NFSU2_TR(0x6816f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6816f9:{NFSU2_TR(0x6816f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6816fc:{NFSU2_TR(0x6816fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6816fd:{NFSU2_TR(0x6816fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681700:{NFSU2_TR(0x681700);
__builtin_memmove((R+4),(R+24),4);
}
B681702:{NFSU2_TR(0x681702);
u8 U[4];
w4(U+0,u32(0x10200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681707:{NFSU2_TR(0x681707);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681708:{NFSU2_TR(0x681708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68170dull));
TAIL_STATIC(0x6758ceu,675);
}
B68170d:L68170d:{c.instructions+=2;NFSU2_TR(0x68170d);
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
B68170f:{NFSU2_TR(0x68170f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681715:L681715:{c.instructions+=8;NFSU2_TR(0x681715);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681717:{NFSU2_TR(0x681717);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681719:{NFSU2_TR(0x681719);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68171c:{NFSU2_TR(0x68171c);
__builtin_memmove((R+4),(R+24),4);
}
B68171e:{NFSU2_TR(0x68171e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681721:{NFSU2_TR(0x681721);
u8 U[4];
w4(U+0,u32(0x10400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681726:{NFSU2_TR(0x681726);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681727:{NFSU2_TR(0x681727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68172cull));
TAIL_STATIC(0x6758ceu,675);
}
B68172c:L68172c:{c.instructions+=2;NFSU2_TR(0x68172c);
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
B68172e:{NFSU2_TR(0x68172e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681734:L681734:{c.instructions+=8;NFSU2_TR(0x681734);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681736:{NFSU2_TR(0x681736);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681738:{NFSU2_TR(0x681738);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68173b:{NFSU2_TR(0x68173b);
__builtin_memmove((R+4),(R+24),4);
}
B68173d:{NFSU2_TR(0x68173d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681740:{NFSU2_TR(0x681740);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681745:{NFSU2_TR(0x681745);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681746:{NFSU2_TR(0x681746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68174bull));
TAIL_STATIC(0x6758ceu,675);
}
B68174b:L68174b:{c.instructions+=2;NFSU2_TR(0x68174b);
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
B68174d:{NFSU2_TR(0x68174d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681753:L681753:{c.instructions+=8;NFSU2_TR(0x681753);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681755:{NFSU2_TR(0x681755);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681758:{NFSU2_TR(0x681758);
__builtin_memmove((R+4),(R+24),4);
}
B68175a:{NFSU2_TR(0x68175a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68175d:{NFSU2_TR(0x68175d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681760:{NFSU2_TR(0x681760);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681761:{NFSU2_TR(0x681761);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681762:{NFSU2_TR(0x681762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681767ull));
TAIL_STATIC(0x6758ceu,675);
}
B681767:L681767:{c.instructions+=2;NFSU2_TR(0x681767);
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
B681769:{NFSU2_TR(0x681769);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B68176f:L68176f:{c.instructions+=3;NFSU2_TR(0x68176f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681772:{NFSU2_TR(0x681772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B681774:{NFSU2_TR(0x681774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681777:L681777:{c.instructions+=3;NFSU2_TR(0x681777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68177a:{NFSU2_TR(0x68177a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B68177e:{NFSU2_TR(0x68177e);
if(r1(R+518)){{goto L6818e9;}}
}
B681784:L681784:{c.instructions+=2;NFSU2_TR(0x681784);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681788:{NFSU2_TR(0x681788);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6818e9;}}
}
B68178e:L68178e:{c.instructions+=3;NFSU2_TR(0x68178e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681791:{NFSU2_TR(0x681791);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B681793:{NFSU2_TR(0x681793);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6817eb;}}
}
B681795:L681795:{c.instructions+=3;NFSU2_TR(0x681795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681798:{NFSU2_TR(0x681798);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B68179b:{NFSU2_TR(0x68179b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6817a3;}}
}
B68179d:L68179d:{c.instructions+=1;NFSU2_TR(0x68179d);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6817a3:L6817a3:{c.instructions+=8;NFSU2_TR(0x6817a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817a4:{NFSU2_TR(0x6817a4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6817a6:{NFSU2_TR(0x6817a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817a7:{NFSU2_TR(0x6817a7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6817aa:{NFSU2_TR(0x6817aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817ac:{NFSU2_TR(0x6817ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817ae:{NFSU2_TR(0x6817ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6817b1:{NFSU2_TR(0x6817b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6817b6ull));
TAIL_STATIC(0x699c39u,699);
}
B6817b6:L6817b6:{c.instructions+=3;NFSU2_TR(0x6817b6);
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
B6817b9:{NFSU2_TR(0x6817b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6817bc:{NFSU2_TR(0x6817bc);
if(r1(R+518)){{goto L681a54;}}
}
B6817c2:L6817c2:{c.instructions+=12;NFSU2_TR(0x6817c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6817c6:{NFSU2_TR(0x6817c6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817c8:{NFSU2_TR(0x6817c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6817cb:{NFSU2_TR(0x6817cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817cc:{NFSU2_TR(0x6817cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6817cf:{NFSU2_TR(0x6817cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817d0:{NFSU2_TR(0x6817d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6817d3:{NFSU2_TR(0x6817d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817d4:{NFSU2_TR(0x6817d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817d5:{NFSU2_TR(0x6817d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817d6:{NFSU2_TR(0x6817d6);
__builtin_memmove((R+4),(R+24),4);
}
B6817d8:{NFSU2_TR(0x6817d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6817ddull));
TAIL_STATIC(0x6758ceu,675);
}
B6817dd:L6817dd:{c.instructions+=2;NFSU2_TR(0x6817dd);
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
B6817df:{NFSU2_TR(0x6817df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B6817e5:L6817e5:{c.instructions+=2;NFSU2_TR(0x6817e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6817e8:{NFSU2_TR(0x6817e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6817eb:L6817eb:{c.instructions+=3;NFSU2_TR(0x6817eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6817ee:{NFSU2_TR(0x6817ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6817f2:{NFSU2_TR(0x6817f2);
if(r1(R+518)){{goto L681831;}}
}
B6817f4:L6817f4:{c.instructions+=11;NFSU2_TR(0x6817f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6817f8:{NFSU2_TR(0x6817f8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817fa:{NFSU2_TR(0x6817fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6817fc:{NFSU2_TR(0x6817fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6817ff:{NFSU2_TR(0x6817ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681800:{NFSU2_TR(0x681800);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681803:{NFSU2_TR(0x681803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681804:{NFSU2_TR(0x681804);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681809:{NFSU2_TR(0x681809);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68180a:{NFSU2_TR(0x68180a);
__builtin_memmove((R+4),(R+24),4);
}
B68180c:{NFSU2_TR(0x68180c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681811ull));
TAIL_STATIC(0x6758ceu,675);
}
B681811:L681811:{c.instructions+=2;NFSU2_TR(0x681811);
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
B681813:{NFSU2_TR(0x681813);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681819:L681819:{c.instructions+=7;NFSU2_TR(0x681819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68181c:{NFSU2_TR(0x68181c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68181f:{NFSU2_TR(0x68181f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681822:{NFSU2_TR(0x681822);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681825:{NFSU2_TR(0x681825);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B681828:{NFSU2_TR(0x681828);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68182e:{NFSU2_TR(0x68182e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681831:L681831:{c.instructions+=2;NFSU2_TR(0x681831);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681835:{NFSU2_TR(0x681835);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68188e;}}
}
B681837:L681837:{c.instructions+=6;NFSU2_TR(0x681837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68183a:{NFSU2_TR(0x68183a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68183c:{NFSU2_TR(0x68183c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68183e:{NFSU2_TR(0x68183e);
u8 U[4];
w4(U+0,u32(0x751ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681843:{NFSU2_TR(0x681843);
u8 U[4];
w4(U+0,u32(0x7b3b1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681848:{NFSU2_TR(0x681848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68184dull));
TAIL_STATIC(0x699be0u,699);
}
B68184d:L68184d:{c.instructions+=3;NFSU2_TR(0x68184d);
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
B681850:{NFSU2_TR(0x681850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681853:{NFSU2_TR(0x681853);
if(r1(R+518)){{goto L681a54;}}
}
B681859:L681859:{c.instructions+=1;NFSU2_TR(0x681859);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B68185b:L68185b:{c.instructions+=1;NFSU2_TR(0x68185b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68185d:L68185d:{c.instructions+=2;NFSU2_TR(0x68185d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68185f:{NFSU2_TR(0x68185f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681865;}}
}
B681861:L681861:{c.instructions+=2;NFSU2_TR(0x681861);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B681863:{NFSU2_TR(0x681863);
{goto L681867;}
}
B681865:L681865:{c.instructions+=1;NFSU2_TR(0x681865);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B681867:L681867:{c.instructions+=8;NFSU2_TR(0x681867);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681868:{NFSU2_TR(0x681868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681869:{NFSU2_TR(0x681869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68186c:{NFSU2_TR(0x68186c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68186f:{NFSU2_TR(0x68186f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681870:{NFSU2_TR(0x681870);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681871:{NFSU2_TR(0x681871);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681874:{NFSU2_TR(0x681874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681879ull));
TAIL_STATIC(0x699c39u,699);
}
B681879:L681879:{c.instructions+=2;NFSU2_TR(0x681879);
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
B68187c:{NFSU2_TR(0x68187c);
if(r1(R+518)){{goto L681a54;}}
}
B681882:L681882:{c.instructions+=3;NFSU2_TR(0x681882);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B681883:{NFSU2_TR(0x681883);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B681886:{NFSU2_TR(0x681886);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68185du);}goto L68185d;}}
}
B681888:L681888:{c.instructions+=3;NFSU2_TR(0x681888);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B681889:{NFSU2_TR(0x681889);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B68188c:{NFSU2_TR(0x68188c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68185bu);}goto L68185b;}}
}
B68188e:L68188e:{c.instructions+=3;NFSU2_TR(0x68188e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B681890:{NFSU2_TR(0x681890);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681893:{NFSU2_TR(0x681893);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6819b5;}}
}
B681899:L681899:{c.instructions+=9;NFSU2_TR(0x681899);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68189a:{NFSU2_TR(0x68189a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B68189c:{NFSU2_TR(0x68189c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68189d:{NFSU2_TR(0x68189d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6818a0:{NFSU2_TR(0x6818a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6818a3:{NFSU2_TR(0x6818a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6818a4:{NFSU2_TR(0x6818a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6818a6:{NFSU2_TR(0x6818a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6818a9:{NFSU2_TR(0x6818a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6818aeull));
TAIL_STATIC(0x699c39u,699);
}
B6818ae:L6818ae:{c.instructions+=5;NFSU2_TR(0x6818ae);
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
B6818b1:{NFSU2_TR(0x6818b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6818b4:{NFSU2_TR(0x6818b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6818b7:{NFSU2_TR(0x6818b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6818b9:{NFSU2_TR(0x6818b9);
if(r1(R+518)){{goto L681a54;}}
}
B6818bf:L6818bf:{c.instructions+=13;NFSU2_TR(0x6818bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6818c2:{NFSU2_TR(0x6818c2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6818c4:{NFSU2_TR(0x6818c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6818c7:{NFSU2_TR(0x6818c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6818ca:{NFSU2_TR(0x6818ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6818cd:{NFSU2_TR(0x6818cd);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6818d0:{NFSU2_TR(0x6818d0);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6818d2:{NFSU2_TR(0x6818d2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6818d3:{NFSU2_TR(0x6818d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6818d6:{NFSU2_TR(0x6818d6);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6818d9:{NFSU2_TR(0x6818d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6818dc:{NFSU2_TR(0x6818dc);
u8 U[4];
w4(U+0,u32(0x117ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6818e2:{NFSU2_TR(0x6818e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681899u);}goto L681899;}}
}
B6818e4:L6818e4:{c.instructions+=1;NFSU2_TR(0x6818e4);
{goto L6819b5;}
}
B6818e9:L6818e9:{c.instructions+=4;NFSU2_TR(0x6818e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6818ec:{NFSU2_TR(0x6818ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6818ee:{NFSU2_TR(0x6818ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6818f1:{NFSU2_TR(0x6818f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681945;}}
}
B6818f3:L6818f3:{c.instructions+=4;NFSU2_TR(0x6818f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6818f6:{NFSU2_TR(0x6818f6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6818f8:{NFSU2_TR(0x6818f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6818fb:{NFSU2_TR(0x6818fb);
{goto L681900;}
}
B6818fd:L6818fd:{c.instructions+=1;NFSU2_TR(0x6818fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681900:L681900:{c.instructions+=9;NFSU2_TR(0x681900);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681903:{NFSU2_TR(0x681903);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B681906:{NFSU2_TR(0x681906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681909:{NFSU2_TR(0x681909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68190c:{NFSU2_TR(0x68190c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B68190e:{NFSU2_TR(0x68190e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B681910:{NFSU2_TR(0x681910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681913:{NFSU2_TR(0x681913);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B681916:{NFSU2_TR(0x681916);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L68191e;}}
}
B681918:L681918:{c.instructions+=1;NFSU2_TR(0x681918);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B68191e:L68191e:{c.instructions+=8;NFSU2_TR(0x68191e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68191f:{NFSU2_TR(0x68191f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B681921:{NFSU2_TR(0x681921);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681922:{NFSU2_TR(0x681922);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B681925:{NFSU2_TR(0x681925);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681927:{NFSU2_TR(0x681927);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681929:{NFSU2_TR(0x681929);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68192c:{NFSU2_TR(0x68192c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681931ull));
TAIL_STATIC(0x699c39u,699);
}
B681931:L681931:{c.instructions+=3;NFSU2_TR(0x681931);
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
B681934:{NFSU2_TR(0x681934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B681936:{NFSU2_TR(0x681936);
if(r1(R+518)){{goto L681a54;}}
}
B68193c:L68193c:{c.instructions+=4;NFSU2_TR(0x68193c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B68193d:{NFSU2_TR(0x68193d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B681940:{NFSU2_TR(0x681940);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B681943:{NFSU2_TR(0x681943);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6818fdu);}goto L6818fd;}}
}
B681945:L681945:{c.instructions+=12;NFSU2_TR(0x681945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681948:{NFSU2_TR(0x681948);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68194a:{NFSU2_TR(0x68194a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68194d:{NFSU2_TR(0x68194d);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B681953:{NFSU2_TR(0x681953);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681956:{NFSU2_TR(0x681956);
__builtin_memmove((R+0),(R+28),4);
}
B681958:{NFSU2_TR(0x681958);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68195b:{NFSU2_TR(0x68195b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B681960:{NFSU2_TR(0x681960);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681961:{NFSU2_TR(0x681961);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681964:{NFSU2_TR(0x681964);
__builtin_memmove((R+4),(R+24),4);
}
B681966:{NFSU2_TR(0x681966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68196bull));
TAIL_STATIC(0x6758ceu,675);
}
B68196b:L68196b:{c.instructions+=2;NFSU2_TR(0x68196b);
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
B68196d:{NFSU2_TR(0x68196d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681973:L681973:{c.instructions+=7;NFSU2_TR(0x681973);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681976:{NFSU2_TR(0x681976);
__builtin_memmove((R+4),(R+24),4);
}
B681978:{NFSU2_TR(0x681978);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68197b:{NFSU2_TR(0x68197b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68197e:{NFSU2_TR(0x68197e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681981:{NFSU2_TR(0x681981);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681984:{NFSU2_TR(0x681984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681989ull));
TAIL_STATIC(0x6782eau,678);
}
B681989:L681989:{c.instructions+=2;NFSU2_TR(0x681989);
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
B68198b:{NFSU2_TR(0x68198b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681991:L681991:{c.instructions+=9;NFSU2_TR(0x681991);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681993:{NFSU2_TR(0x681993);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681996:{NFSU2_TR(0x681996);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20300000ull))));
}
B68199c:{NFSU2_TR(0x68199c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68199f:{NFSU2_TR(0x68199f);
__builtin_memmove((R+4),(R+24),4);
}
B6819a1:{NFSU2_TR(0x6819a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6819a4:{NFSU2_TR(0x6819a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6819a5:{NFSU2_TR(0x6819a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6819a8:{NFSU2_TR(0x6819a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6819adull));
TAIL_STATIC(0x6758ceu,675);
}
B6819ad:L6819ad:{c.instructions+=2;NFSU2_TR(0x6819ad);
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
B6819af:{NFSU2_TR(0x6819af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B6819b5:L6819b5:{c.instructions+=4;NFSU2_TR(0x6819b5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6819b7:{NFSU2_TR(0x6819b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6819b9:{NFSU2_TR(0x6819b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6819bc:{NFSU2_TR(0x6819bc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6819cd;}}
}
B6819be:L6819be:{c.instructions+=6;NFSU2_TR(0x6819be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6819c1:{NFSU2_TR(0x6819c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6819c4:{NFSU2_TR(0x6819c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6819c7:{NFSU2_TR(0x6819c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6819c8:{NFSU2_TR(0x6819c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6819cb:{NFSU2_TR(0x6819cb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6819beu);}goto L6819be;}}
}
B6819cd:L6819cd:{c.instructions+=3;NFSU2_TR(0x6819cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6819d0:{NFSU2_TR(0x6819d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6819d3:{NFSU2_TR(0x6819d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681ac1;}}
}
B6819d9:L6819d9:{c.instructions+=7;NFSU2_TR(0x6819d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6819dc:{NFSU2_TR(0x6819dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6819df:{NFSU2_TR(0x6819df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6819e2:{NFSU2_TR(0x6819e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6819e5:{NFSU2_TR(0x6819e5);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6819e9:{NFSU2_TR(0x6819e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6819ec:{NFSU2_TR(0x6819ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6819ef:L6819ef:{c.instructions+=3;NFSU2_TR(0x6819ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6819f2:{NFSU2_TR(0x6819f2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6819f4:{NFSU2_TR(0x6819f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681a16;}}
}
B6819f6:L6819f6:{c.instructions+=5;NFSU2_TR(0x6819f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6819f9:{NFSU2_TR(0x6819f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6819fc:{NFSU2_TR(0x6819fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6819ff:{NFSU2_TR(0x6819ff);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B681a01:{NFSU2_TR(0x681a01);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B681a03:L681a03:{c.instructions+=8;NFSU2_TR(0x681a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B681a06:{NFSU2_TR(0x681a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B681a08:{NFSU2_TR(0x681a08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B681a0b:{NFSU2_TR(0x681a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B681a0d:{NFSU2_TR(0x681a0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B681a10:{NFSU2_TR(0x681a10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B681a13:{NFSU2_TR(0x681a13);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B681a14:{NFSU2_TR(0x681a14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681a03u);}goto L681a03;}}
}
B681a16:L681a16:{c.instructions+=4;NFSU2_TR(0x681a16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a19:{NFSU2_TR(0x681a19);
__builtin_memmove((R+4),(R+24),4);
}
B681a1b:{NFSU2_TR(0x681a1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a1e:{NFSU2_TR(0x681a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681a23ull));
TAIL_STATIC(0x673b2cu,673);
}
B681a23:L681a23:{c.instructions+=2;NFSU2_TR(0x681a23);
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
B681a25:{NFSU2_TR(0x681a25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681a2b:L681a2b:{c.instructions+=4;NFSU2_TR(0x681a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681a2e:{NFSU2_TR(0x681a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681a31:{NFSU2_TR(0x681a31);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B681a33:{NFSU2_TR(0x681a33);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L681a5b;}}
}
B681a35:L681a35:{c.instructions+=2;NFSU2_TR(0x681a35);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B681a37:{NFSU2_TR(0x681a37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681a5b;}}
}
B681a39:L681a39:{c.instructions+=8;NFSU2_TR(0x681a39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a3c:{NFSU2_TR(0x681a3c);
__builtin_memmove((R+4),(R+24),4);
}
B681a3e:{NFSU2_TR(0x681a3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a41:{NFSU2_TR(0x681a41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a44:{NFSU2_TR(0x681a44);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a47:{NFSU2_TR(0x681a47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a4a:{NFSU2_TR(0x681a4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a4d:{NFSU2_TR(0x681a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681a52ull));
TAIL_STATIC(0x6779e0u,677);
}
B681a52:L681a52:{c.instructions+=1;NFSU2_TR(0x681a52);
{goto L681aa1;}
}
B681a54:L681a54:{c.instructions+=2;NFSU2_TR(0x681a54);
w4(R+0,u32(0x8007000eull));
}
B681a59:{NFSU2_TR(0x681a59);
{goto L681ac3;}
}
B681a5b:L681a5b:{c.instructions+=12;NFSU2_TR(0x681a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681a5e:{NFSU2_TR(0x681a5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681a60:{NFSU2_TR(0x681a60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a63:{NFSU2_TR(0x681a63);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B681a69:{NFSU2_TR(0x681a69);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a6c:{NFSU2_TR(0x681a6c);
__builtin_memmove((R+0),(R+28),4);
}
B681a6e:{NFSU2_TR(0x681a6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a71:{NFSU2_TR(0x681a71);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B681a76:{NFSU2_TR(0x681a76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681a77:{NFSU2_TR(0x681a77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a7a:{NFSU2_TR(0x681a7a);
__builtin_memmove((R+4),(R+24),4);
}
B681a7c:{NFSU2_TR(0x681a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681a81ull));
TAIL_STATIC(0x6758ceu,675);
}
B681a81:L681a81:{c.instructions+=2;NFSU2_TR(0x681a81);
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
B681a83:{NFSU2_TR(0x681a83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681a85:L681a85:{c.instructions+=9;NFSU2_TR(0x681a85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681a87:{NFSU2_TR(0x681a87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a8a:{NFSU2_TR(0x681a8a);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20400000ull))));
}
B681a90:{NFSU2_TR(0x681a90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a93:{NFSU2_TR(0x681a93);
__builtin_memmove((R+4),(R+24),4);
}
B681a95:{NFSU2_TR(0x681a95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a98:{NFSU2_TR(0x681a98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681a99:{NFSU2_TR(0x681a99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681a9c:{NFSU2_TR(0x681a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681aa1ull));
TAIL_STATIC(0x6758ceu,675);
}
B681aa1:L681aa1:{c.instructions+=2;NFSU2_TR(0x681aa1);
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
B681aa3:{NFSU2_TR(0x681aa3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681ac3;}}
}
B681aa5:L681aa5:{c.instructions+=8;NFSU2_TR(0x681aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681aa8:{NFSU2_TR(0x681aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681aab:{NFSU2_TR(0x681aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681aaf:{NFSU2_TR(0x681aaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B681ab2:{NFSU2_TR(0x681ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B681ab5:{NFSU2_TR(0x681ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681ab8:{NFSU2_TR(0x681ab8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B681abb:{NFSU2_TR(0x681abb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6819efu);}goto L6819ef;}}
}
B681ac1:L681ac1:{c.instructions+=1;NFSU2_TR(0x681ac1);
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
B681ac3:L681ac3:{c.instructions+=5;NFSU2_TR(0x681ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B681ac4:{NFSU2_TR(0x681ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B681ac5:{NFSU2_TR(0x681ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B681ac6:{NFSU2_TR(0x681ac6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B681ac7:{NFSU2_TR(0x681ac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B681aca:L681aca:{c.instructions+=11;NFSU2_TR(0x681aca);
__builtin_memmove((R+28),(R+28),4);
}
B681acc:{NFSU2_TR(0x681acc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681acd:{NFSU2_TR(0x681acd);
__builtin_memmove((R+20),(R+16),4);
}
B681acf:{NFSU2_TR(0x681acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B681ad2:{NFSU2_TR(0x681ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681ad5:{NFSU2_TR(0x681ad5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681ad6:{NFSU2_TR(0x681ad6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681ad7:{NFSU2_TR(0x681ad7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B681ad9:{NFSU2_TR(0x681ad9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681adb:{NFSU2_TR(0x681adb);
__builtin_memmove((R+12),(R+4),4);
}
B681add:{NFSU2_TR(0x681add);
if(r1(R+518)){{goto L681b0b;}}
}
B681adf:L681adf:{c.instructions+=2;NFSU2_TR(0x681adf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681ae2:{NFSU2_TR(0x681ae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681aed;}}
}
B681ae4:L681ae4:{c.instructions+=3;NFSU2_TR(0x681ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681ae7:{NFSU2_TR(0x681ae7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B681aeb:{NFSU2_TR(0x681aeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681b0b;}}
}
B681aed:L681aed:{c.instructions+=4;NFSU2_TR(0x681aed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681aee:{NFSU2_TR(0x681aee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681aef:{NFSU2_TR(0x681aef);
__builtin_memmove((R+4),(R+12),4);
}
B681af1:{NFSU2_TR(0x681af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681af6ull));
{goto L681bf8;}
}
B681af6:L681af6:{c.instructions+=2;NFSU2_TR(0x681af6);
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
B681af8:{NFSU2_TR(0x681af8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681bf2;}}
}
B681afe:L681afe:{c.instructions+=2;NFSU2_TR(0x681afe);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681b01:{NFSU2_TR(0x681b01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681b42;}}
}
B681b03:L681b03:{c.instructions+=2;NFSU2_TR(0x681b03);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681b06:{NFSU2_TR(0x681b06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681b42;}}
}
B681b08:L681b08:{c.instructions+=1;NFSU2_TR(0x681b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b0b:L681b0b:{c.instructions+=12;NFSU2_TR(0x681b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681b0e:{NFSU2_TR(0x681b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681b11:{NFSU2_TR(0x681b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681b14:{NFSU2_TR(0x681b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681b17:{NFSU2_TR(0x681b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681b1a:{NFSU2_TR(0x681b1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681b1b:{NFSU2_TR(0x681b1b);
__builtin_memmove((R+24),(R+4),4);
}
B681b1d:{NFSU2_TR(0x681b1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B681b20:{NFSU2_TR(0x681b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681b21:{NFSU2_TR(0x681b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b24:{NFSU2_TR(0x681b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b27:{NFSU2_TR(0x681b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681b2cull));
TAIL_STATIC(0x575620u,575);
}
B681b2c:L681b2c:{c.instructions+=5;NFSU2_TR(0x681b2c);
__builtin_memmove((R+8),(R+0),4);
}
B681b2e:{NFSU2_TR(0x681b2e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681b30:{NFSU2_TR(0x681b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B681b31:{NFSU2_TR(0x681b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b34:{NFSU2_TR(0x681b34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681b49;}}
}
B681b36:L681b36:{c.instructions+=2;NFSU2_TR(0x681b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B681b3d:{NFSU2_TR(0x681b3d);
{goto L681be5;}
}
B681b42:L681b42:{c.instructions+=2;NFSU2_TR(0x681b42);
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
B681b44:{NFSU2_TR(0x681b44);
{goto L681bf2;}
}
B681b49:L681b49:{c.instructions+=5;NFSU2_TR(0x681b49);
__builtin_memmove((R+4),(R+24),4);
}
B681b4b:{NFSU2_TR(0x681b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B681b4e:{NFSU2_TR(0x681b4e);
__builtin_memmove((R+0),(R+4),4);
}
B681b50:{NFSU2_TR(0x681b50);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B681b53:{NFSU2_TR(0x681b53);
__builtin_memmove((R+28),(R+8),4);
}
B681b55:L681b55:{c.instructions+=1;NFSU2_TR(0x681b55);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L681b57;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681b55u);}goto L681b55;}
}
B681b57:L681b57:{c.instructions+=2;NFSU2_TR(0x681b57);
__builtin_memmove((R+4),(R+0),4);
}
B681b59:{NFSU2_TR(0x681b59);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B681b5c:L681b5c:{c.instructions+=1;NFSU2_TR(0x681b5c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L681b5e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681b5cu);}goto L681b5c;}
}
B681b5e:L681b5e:{c.instructions+=4;NFSU2_TR(0x681b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681b61:{NFSU2_TR(0x681b61);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B681b63:{NFSU2_TR(0x681b63);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681b66:{NFSU2_TR(0x681b66);
if(r1(R+518)){{goto L681bc4;}}
}
B681b68:L681b68:{c.instructions+=14;NFSU2_TR(0x681b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681b6b:{NFSU2_TR(0x681b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B681b6e:{NFSU2_TR(0x681b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681b71:{NFSU2_TR(0x681b71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681b72:{NFSU2_TR(0x681b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681b75:{NFSU2_TR(0x681b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b78:{NFSU2_TR(0x681b78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681b7b:{NFSU2_TR(0x681b7b);
__builtin_memmove((R+4),(R+12),4);
}
B681b7d:{NFSU2_TR(0x681b7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681b80:{NFSU2_TR(0x681b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B681b87:{NFSU2_TR(0x681b87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681b8a:{NFSU2_TR(0x681b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b8d:{NFSU2_TR(0x681b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b90:{NFSU2_TR(0x681b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681b95ull));
TAIL_STATIC(0x679842u,679);
}
B681b95:L681b95:{c.instructions+=11;NFSU2_TR(0x681b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681b98:{NFSU2_TR(0x681b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681b9b:{NFSU2_TR(0x681b9b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B681b9d:{NFSU2_TR(0x681b9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B681ba0:{NFSU2_TR(0x681ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681ba3:{NFSU2_TR(0x681ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681ba6:{NFSU2_TR(0x681ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681ba9:{NFSU2_TR(0x681ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681bac:{NFSU2_TR(0x681bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681baf:{NFSU2_TR(0x681baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681bb2:{NFSU2_TR(0x681bb2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L681be5;}}
}
B681bb4:L681bb4:{c.instructions+=5;NFSU2_TR(0x681bb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bb7:{NFSU2_TR(0x681bb7);
__builtin_memmove((R+4),(R+12),4);
}
B681bb9:{NFSU2_TR(0x681bb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bbc:{NFSU2_TR(0x681bbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bbf:{NFSU2_TR(0x681bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681bc4ull));
TAIL_STATIC(0x675830u,675);
}
B681bc4:L681bc4:{c.instructions+=7;NFSU2_TR(0x681bc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bc7:{NFSU2_TR(0x681bc7);
__builtin_memmove((R+4),(R+12),4);
}
B681bc9:{NFSU2_TR(0x681bc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bcc:{NFSU2_TR(0x681bcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bcf:{NFSU2_TR(0x681bcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bd2:{NFSU2_TR(0x681bd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681bd5:{NFSU2_TR(0x681bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681bdaull));
TAIL_STATIC(0x67a680u,67a);
}
B681bda:L681bda:{c.instructions+=3;NFSU2_TR(0x681bda);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B681bdc:{NFSU2_TR(0x681bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681bdf:{NFSU2_TR(0x681bdf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681be5;}}
}
B681be1:L681be1:{c.instructions+=1;NFSU2_TR(0x681be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681be5:L681be5:{c.instructions+=2;NFSU2_TR(0x681be5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681be8:{NFSU2_TR(0x681be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681bedull));
TAIL_STATIC(0x575630u,575);
}
B681bed:L681bed:{c.instructions+=3;NFSU2_TR(0x681bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681bf0:{NFSU2_TR(0x681bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B681bf1:{NFSU2_TR(0x681bf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B681bf2:L681bf2:{c.instructions+=4;NFSU2_TR(0x681bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B681bf3:{NFSU2_TR(0x681bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B681bf4:{NFSU2_TR(0x681bf4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B681bf5:{NFSU2_TR(0x681bf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B681bf8:L681bf8:{c.instructions+=12;NFSU2_TR(0x681bf8);
__builtin_memmove((R+28),(R+28),4);
}
B681bfa:{NFSU2_TR(0x681bfa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681bfb:{NFSU2_TR(0x681bfb);
__builtin_memmove((R+20),(R+16),4);
}
B681bfd:{NFSU2_TR(0x681bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B681c00:{NFSU2_TR(0x681c00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681c01:{NFSU2_TR(0x681c01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681c02:{NFSU2_TR(0x681c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B681c05:{NFSU2_TR(0x681c05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681c06:{NFSU2_TR(0x681c06);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B681c08:{NFSU2_TR(0x681c08);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681c0a:{NFSU2_TR(0x681c0a);
__builtin_memmove((R+12),(R+4),4);
}
B681c0c:{NFSU2_TR(0x681c0c);
if(r1(R+518)){{goto L681fd6;}}
}
B681c12:L681c12:{c.instructions+=2;NFSU2_TR(0x681c12);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681c15:{NFSU2_TR(0x681c15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681fd6;}}
}
B681c1b:L681c1b:{c.instructions+=2;NFSU2_TR(0x681c1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681c1e:{NFSU2_TR(0x681c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681fd6;}}
}
B681c24:L681c24:{c.instructions+=8;NFSU2_TR(0x681c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681c27:{NFSU2_TR(0x681c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681c2a:{NFSU2_TR(0x681c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681c2d:{NFSU2_TR(0x681c2d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B681c2f:{NFSU2_TR(0x681c2f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B681c30:{NFSU2_TR(0x681c30);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681c33:{NFSU2_TR(0x681c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c36:{NFSU2_TR(0x681c36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681dcf;}}
}
B681c3c:L681c3c:{c.instructions+=3;NFSU2_TR(0x681c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681c3f:{NFSU2_TR(0x681c3f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681c41:{NFSU2_TR(0x681c41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681c9a;}}
}
B681c43:L681c43:{c.instructions+=8;NFSU2_TR(0x681c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681c46:{NFSU2_TR(0x681c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681c49:{NFSU2_TR(0x681c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c4c:{NFSU2_TR(0x681c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681c4f:{NFSU2_TR(0x681c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c52:{NFSU2_TR(0x681c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681c55:{NFSU2_TR(0x681c55);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681c57:{NFSU2_TR(0x681c57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681c62;}}
}
B681c59:L681c59:{c.instructions+=3;NFSU2_TR(0x681c59);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B681c5d:{NFSU2_TR(0x681c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c60:{NFSU2_TR(0x681c60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681c65;}}
}
B681c62:L681c62:{c.instructions+=1;NFSU2_TR(0x681c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c65:L681c65:{c.instructions+=2;NFSU2_TR(0x681c65);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681c67:{NFSU2_TR(0x681c67);
if(r1(R+518)){{goto L681c72;}}
}
B681c69:L681c69:{c.instructions+=3;NFSU2_TR(0x681c69);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B681c6d:{NFSU2_TR(0x681c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c70:{NFSU2_TR(0x681c70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681c75;}}
}
B681c72:L681c72:{c.instructions+=1;NFSU2_TR(0x681c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c75:L681c75:{c.instructions+=11;NFSU2_TR(0x681c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681c78:{NFSU2_TR(0x681c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681c7b:{NFSU2_TR(0x681c7b);
__builtin_memmove((R+8),(R+4),4);
}
B681c7d:{NFSU2_TR(0x681c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c80:{NFSU2_TR(0x681c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681c83:{NFSU2_TR(0x681c83);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80ull))));
}
B681c89:{NFSU2_TR(0x681c89);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffff3ffull))));
}
B681c8f:{NFSU2_TR(0x681c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c92:{NFSU2_TR(0x681c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681c95:{NFSU2_TR(0x681c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681c98:{NFSU2_TR(0x681c98);
{goto L681cc7;}
}
B681c9a:L681c9a:{c.instructions+=2;NFSU2_TR(0x681c9a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681c9d:{NFSU2_TR(0x681c9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681fd6;}}
}
B681ca3:L681ca3:{c.instructions+=12;NFSU2_TR(0x681ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681ca6:{NFSU2_TR(0x681ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681ca9:{NFSU2_TR(0x681ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681cac:{NFSU2_TR(0x681cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681caf:{NFSU2_TR(0x681caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681cb2:{NFSU2_TR(0x681cb2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B681cb4:{NFSU2_TR(0x681cb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xf3ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B681cb8:{NFSU2_TR(0x681cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681cbb:{NFSU2_TR(0x681cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681cbe:{NFSU2_TR(0x681cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681cc1:{NFSU2_TR(0x681cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681cc4:{NFSU2_TR(0x681cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681cc7:L681cc7:{c.instructions+=3;NFSU2_TR(0x681cc7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B681cc9:{NFSU2_TR(0x681cc9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681ccb:{NFSU2_TR(0x681ccb);
if(r1(R+518)){{goto L681ce7;}}
}
B681ccd:L681ccd:{c.instructions+=8;NFSU2_TR(0x681ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681cce:{NFSU2_TR(0x681cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681cd1:{NFSU2_TR(0x681cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B681cd4:{NFSU2_TR(0x681cd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681cd5:{NFSU2_TR(0x681cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681cd8:{NFSU2_TR(0x681cd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681cdb:{NFSU2_TR(0x681cdb);
__builtin_memmove((R+4),(R+12),4);
}
B681cdd:{NFSU2_TR(0x681cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681ce2ull));
TAIL_STATIC(0x682bb1u,682);
}
B681ce2:L681ce2:{c.instructions+=1;NFSU2_TR(0x681ce2);
{goto L681f58;}
}
B681ce7:L681ce7:{c.instructions+=3;NFSU2_TR(0x681ce7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681cea:{NFSU2_TR(0x681cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681ced:{NFSU2_TR(0x681ced);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L681d6a;}}
}
B681cef:L681cef:{c.instructions+=3;NFSU2_TR(0x681cef);
__builtin_memmove((R+4),(R+28),4);
}
B681cf1:{NFSU2_TR(0x681cf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B681cf4:{NFSU2_TR(0x681cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681cf7:L681cf7:{c.instructions+=2;NFSU2_TR(0x681cf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681cfa:{NFSU2_TR(0x681cfa);
if(r1(R+518)){{goto L681d08;}}
}
B681cfc:L681cfc:{c.instructions+=4;NFSU2_TR(0x681cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681cff:{NFSU2_TR(0x681cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681d02:{NFSU2_TR(0x681d02);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B681d06:{NFSU2_TR(0x681d06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681d5b;}}
}
B681d08:L681d08:{c.instructions+=3;NFSU2_TR(0x681d08);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681d0b:{NFSU2_TR(0x681d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681d0e:{NFSU2_TR(0x681d0e);
if(r1(R+518)){{goto L681d15;}}
}
B681d10:L681d10:{c.instructions+=2;NFSU2_TR(0x681d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681d13:{NFSU2_TR(0x681d13);
{goto L681d18;}
}
B681d15:L681d15:{c.instructions+=1;NFSU2_TR(0x681d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681d18:L681d18:{c.instructions+=8;NFSU2_TR(0x681d18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d19:{NFSU2_TR(0x681d19);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B681d1b:{NFSU2_TR(0x681d1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d1c:{NFSU2_TR(0x681d1c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B681d1f:{NFSU2_TR(0x681d1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d21:{NFSU2_TR(0x681d21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d23:{NFSU2_TR(0x681d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d24:{NFSU2_TR(0x681d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681d29ull));
TAIL_STATIC(0x699c39u,699);
}
B681d29:L681d29:{c.instructions+=3;NFSU2_TR(0x681d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681d2c:{NFSU2_TR(0x681d2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B681d2f:{NFSU2_TR(0x681d2f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L681d39;}}
}
B681d31:L681d31:{c.instructions+=3;NFSU2_TR(0x681d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681d34:{NFSU2_TR(0x681d34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B681d37:{NFSU2_TR(0x681d37);
{goto L681d3b;}
}
B681d39:L681d39:{c.instructions+=1;NFSU2_TR(0x681d39);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B681d3b:L681d3b:{c.instructions+=2;NFSU2_TR(0x681d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B681d3d:{NFSU2_TR(0x681d3d);
if(r1(R+518)){{goto L681d50;}}
}
B681d3f:L681d3f:{c.instructions+=6;NFSU2_TR(0x681d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681d42:{NFSU2_TR(0x681d42);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B681d44:{NFSU2_TR(0x681d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681d47:{NFSU2_TR(0x681d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681d4a:{NFSU2_TR(0x681d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681d4d:{NFSU2_TR(0x681d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681d50:L681d50:{c.instructions+=4;NFSU2_TR(0x681d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681d53:{NFSU2_TR(0x681d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681d56:{NFSU2_TR(0x681d56);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B681d59:{NFSU2_TR(0x681d59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B681d5b:L681d5b:{c.instructions+=5;NFSU2_TR(0x681d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681d5e:{NFSU2_TR(0x681d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681d61:{NFSU2_TR(0x681d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681d65:{NFSU2_TR(0x681d65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B681d68:{NFSU2_TR(0x681d68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681cf7u);}goto L681cf7;}}
}
B681d6a:L681d6a:{c.instructions+=2;NFSU2_TR(0x681d6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681d6d:{NFSU2_TR(0x681d6d);
if(r1(R+518)){{goto L681f58;}}
}
B681d73:L681d73:{c.instructions+=8;NFSU2_TR(0x681d73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681d76:{NFSU2_TR(0x681d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681d79:{NFSU2_TR(0x681d79);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B681d7c:{NFSU2_TR(0x681d7c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B681d7e:{NFSU2_TR(0x681d7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d7f:{NFSU2_TR(0x681d7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681d82:{NFSU2_TR(0x681d82);
__builtin_memmove((R+4),(R+12),4);
}
B681d84:{NFSU2_TR(0x681d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681d89ull));
TAIL_STATIC(0x6760e4u,676);
}
B681d89:L681d89:{c.instructions+=2;NFSU2_TR(0x681d89);
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
B681d8b:{NFSU2_TR(0x681d8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681fd8;}}
}
B681d91:L681d91:{c.instructions+=12;NFSU2_TR(0x681d91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681d94:{NFSU2_TR(0x681d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681d97:{NFSU2_TR(0x681d97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d99:{NFSU2_TR(0x681d99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d9b:{NFSU2_TR(0x681d9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681d9d:{NFSU2_TR(0x681d9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681da0:{NFSU2_TR(0x681da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681da3:{NFSU2_TR(0x681da3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B681da5:{NFSU2_TR(0x681da5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681da6:{NFSU2_TR(0x681da6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681da9:{NFSU2_TR(0x681da9);
__builtin_memmove((R+4),(R+12),4);
}
B681dab:{NFSU2_TR(0x681dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681db0ull));
TAIL_STATIC(0x67856cu,678);
}
B681db0:L681db0:{c.instructions+=2;NFSU2_TR(0x681db0);
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
B681db2:{NFSU2_TR(0x681db2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681fd8;}}
}
B681db8:L681db8:{c.instructions+=3;NFSU2_TR(0x681db8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681dbb:{NFSU2_TR(0x681dbb);
__builtin_memmove((R+4),(R+12),4);
}
B681dbd:{NFSU2_TR(0x681dbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681dc2ull));
TAIL_STATIC(0x673caau,673);
}
B681dc2:L681dc2:{c.instructions+=2;NFSU2_TR(0x681dc2);
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
B681dc4:{NFSU2_TR(0x681dc4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L681f58;}}
}
B681dca:L681dca:{c.instructions+=1;NFSU2_TR(0x681dca);
{goto L681fd8;}
}
B681dcf:L681dcf:{c.instructions+=2;NFSU2_TR(0x681dcf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681dd2:{NFSU2_TR(0x681dd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681f29;}}
}
B681dd8:L681dd8:{c.instructions+=3;NFSU2_TR(0x681dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681ddb:{NFSU2_TR(0x681ddb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B681ddd:{NFSU2_TR(0x681ddd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681f58;}}
}
B681de3:L681de3:{c.instructions+=2;NFSU2_TR(0x681de3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681de6:{NFSU2_TR(0x681de6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L681e89;}}
}
B681dec:L681dec:{c.instructions+=2;NFSU2_TR(0x681dec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681def:{NFSU2_TR(0x681def);
if(r1(R+518)){{goto L681e55;}}
}
B681df1:L681df1:{c.instructions+=2;NFSU2_TR(0x681df1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681df4:{NFSU2_TR(0x681df4);
if(r1(R+518)){{goto L681e3f;}}
}
B681df6:L681df6:{c.instructions+=2;NFSU2_TR(0x681df6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681df9:{NFSU2_TR(0x681df9);
if(r1(R+518)){{goto L681e35;}}
}
B681dfb:L681dfb:{c.instructions+=2;NFSU2_TR(0x681dfb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681dfe:{NFSU2_TR(0x681dfe);
if(r1(R+518)){{goto L681e2b;}}
}
B681e00:L681e00:{c.instructions+=2;NFSU2_TR(0x681e00);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681e03:{NFSU2_TR(0x681e03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681f58;}}
}
B681e09:L681e09:{c.instructions+=8;NFSU2_TR(0x681e09);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B681e0b:{NFSU2_TR(0x681e0b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B681e0c:{NFSU2_TR(0x681e0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e0d:{NFSU2_TR(0x681e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681e10:{NFSU2_TR(0x681e10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e11:{NFSU2_TR(0x681e11);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e14:{NFSU2_TR(0x681e14);
__builtin_memmove((R+4),(R+12),4);
}
B681e16:{NFSU2_TR(0x681e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681e1bull));
TAIL_STATIC(0x6781b5u,678);
}
B681e1b:L681e1b:{c.instructions+=2;NFSU2_TR(0x681e1b);
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
B681e1d:{NFSU2_TR(0x681e1d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681fd8;}}
}
B681e23:L681e23:{c.instructions+=2;NFSU2_TR(0x681e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681e26:{NFSU2_TR(0x681e26);
{goto L681f58;}
}
B681e2b:L681e2b:{c.instructions+=5;NFSU2_TR(0x681e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681e2e:{NFSU2_TR(0x681e2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e2f:{NFSU2_TR(0x681e2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e32:{NFSU2_TR(0x681e32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e33:{NFSU2_TR(0x681e33);
{goto L681e48;}
}
B681e35:L681e35:{c.instructions+=4;NFSU2_TR(0x681e35);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e38:{NFSU2_TR(0x681e38);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e3b:{NFSU2_TR(0x681e3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e3d:{NFSU2_TR(0x681e3d);
{goto L681e48;}
}
B681e3f:L681e3f:{c.instructions+=3;NFSU2_TR(0x681e3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e42:{NFSU2_TR(0x681e42);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e45:{NFSU2_TR(0x681e45);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e48:L681e48:{c.instructions+=3;NFSU2_TR(0x681e48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e49:{NFSU2_TR(0x681e49);
__builtin_memmove((R+4),(R+12),4);
}
B681e4b:{NFSU2_TR(0x681e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681e50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681acau);}goto L681aca;}
}
B681e50:L681e50:{c.instructions+=1;NFSU2_TR(0x681e50);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681dc2u);}goto L681dc2;}
}
B681e55:L681e55:{c.instructions+=7;NFSU2_TR(0x681e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681e59:{NFSU2_TR(0x681e59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e5b:{NFSU2_TR(0x681e5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681e5e:{NFSU2_TR(0x681e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e5f:{NFSU2_TR(0x681e5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e62:{NFSU2_TR(0x681e62);
__builtin_memmove((R+4),(R+12),4);
}
B681e64:{NFSU2_TR(0x681e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681e69ull));
TAIL_STATIC(0x682bb1u,682);
}
B681e69:L681e69:{c.instructions+=2;NFSU2_TR(0x681e69);
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
B681e6b:{NFSU2_TR(0x681e6b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681fd8;}}
}
B681e71:L681e71:{c.instructions+=6;NFSU2_TR(0x681e71);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e74:{NFSU2_TR(0x681e74);
__builtin_memmove((R+4),(R+12),4);
}
B681e76:{NFSU2_TR(0x681e76);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e79:{NFSU2_TR(0x681e79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e7c:{NFSU2_TR(0x681e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e7f:{NFSU2_TR(0x681e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681e84ull));
TAIL_STATIC(0x678b03u,678);
}
B681e84:L681e84:{c.instructions+=1;NFSU2_TR(0x681e84);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681dc2u);}goto L681dc2;}
}
B681e89:L681e89:{c.instructions+=6;NFSU2_TR(0x681e89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e8b:{NFSU2_TR(0x681e8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681e8d:{NFSU2_TR(0x681e8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681e90:{NFSU2_TR(0x681e90);
__builtin_memmove((R+28),(R+4),4);
}
B681e92:{NFSU2_TR(0x681e92);
__builtin_memmove((R+4),(R+12),4);
}
B681e94:{NFSU2_TR(0x681e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681e99ull));
TAIL_STATIC(0x682bb1u,682);
}
B681e99:L681e99:{c.instructions+=2;NFSU2_TR(0x681e99);
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
B681e9b:{NFSU2_TR(0x681e9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681fd8;}}
}
B681ea1:L681ea1:{c.instructions+=7;NFSU2_TR(0x681ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681ea4:{NFSU2_TR(0x681ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681ea7:{NFSU2_TR(0x681ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681eab:{NFSU2_TR(0x681eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681eaf:{NFSU2_TR(0x681eaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B681eb1:{NFSU2_TR(0x681eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681eb4:{NFSU2_TR(0x681eb4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L681ef6;}}
}
B681eb6:L681eb6:{c.instructions+=6;NFSU2_TR(0x681eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681eb9:{NFSU2_TR(0x681eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B681ebc:{NFSU2_TR(0x681ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681ebf:{NFSU2_TR(0x681ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681ec2:{NFSU2_TR(0x681ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681ec5:{NFSU2_TR(0x681ec5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B681ec7:L681ec7:{c.instructions+=5;NFSU2_TR(0x681ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681eca:{NFSU2_TR(0x681eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B681ecc:{NFSU2_TR(0x681ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681ecf:{NFSU2_TR(0x681ecf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681ed2:{NFSU2_TR(0x681ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681eef;}}
}
B681ed4:L681ed4:{c.instructions+=3;NFSU2_TR(0x681ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681ed7:{NFSU2_TR(0x681ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B681ed9:{NFSU2_TR(0x681ed9);
if(r1(R+518)){{goto L681eef;}}
}
B681edb:L681edb:{c.instructions+=2;NFSU2_TR(0x681edb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681edf:{NFSU2_TR(0x681edf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681eef;}}
}
B681ee1:L681ee1:{c.instructions+=3;NFSU2_TR(0x681ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B681ee4:{NFSU2_TR(0x681ee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B681ee7:{NFSU2_TR(0x681ee7);
if(r1(R+512)){{goto L681eef;}}
}
B681ee9:L681ee9:{c.instructions+=2;NFSU2_TR(0x681ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681eec:{NFSU2_TR(0x681eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681eef:L681eef:{c.instructions+=3;NFSU2_TR(0x681eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B681ef3:{NFSU2_TR(0x681ef3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B681ef4:{NFSU2_TR(0x681ef4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681ec7u);}goto L681ec7;}}
}
B681ef6:L681ef6:{c.instructions+=2;NFSU2_TR(0x681ef6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B681ef9:{NFSU2_TR(0x681ef9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L681f1b;}}
}
B681efb:L681efb:{c.instructions+=6;NFSU2_TR(0x681efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681efe:{NFSU2_TR(0x681efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681f01:{NFSU2_TR(0x681f01);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B681f04:{NFSU2_TR(0x681f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681f07:{NFSU2_TR(0x681f07);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681f0a:{NFSU2_TR(0x681f0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681f12;}}
}
B681f0c:L681f0c:{c.instructions+=2;NFSU2_TR(0x681f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681f0f:{NFSU2_TR(0x681f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681f12:L681f12:{c.instructions+=4;NFSU2_TR(0x681f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681f15:{NFSU2_TR(0x681f15);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B681f16:{NFSU2_TR(0x681f16);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B681f19:{NFSU2_TR(0x681f19);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681efbu);}goto L681efb;}}
}
B681f1b:L681f1b:{c.instructions+=5;NFSU2_TR(0x681f1b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B681f1d:{NFSU2_TR(0x681f1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681f21:{NFSU2_TR(0x681f21);
__builtin_memmove((R+0),(R+518),1);
}
B681f24:{NFSU2_TR(0x681f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681f27:{NFSU2_TR(0x681f27);
{goto L681f58;}
}
B681f29:L681f29:{c.instructions+=2;NFSU2_TR(0x681f29);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681f2b:{NFSU2_TR(0x681f2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681fdf;}}
}
B681f31:L681f31:{c.instructions+=2;NFSU2_TR(0x681f31);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681f34:{NFSU2_TR(0x681f34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681f58;}}
}
B681f36:L681f36:{c.instructions+=2;NFSU2_TR(0x681f36);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681f3a:{NFSU2_TR(0x681f3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681f58;}}
}
B681f3c:L681f3c:{c.instructions+=5;NFSU2_TR(0x681f3c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B681f3e:{NFSU2_TR(0x681f3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681f3f:{NFSU2_TR(0x681f3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681f42:{NFSU2_TR(0x681f42);
__builtin_memmove((R+4),(R+12),4);
}
B681f44:{NFSU2_TR(0x681f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681f49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681bf8u);}goto L681bf8;}
}
B681f49:L681f49:{c.instructions+=2;NFSU2_TR(0x681f49);
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
B681f4b:{NFSU2_TR(0x681f4b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681fd8;}}
}
B681f51:L681f51:{c.instructions+=3;NFSU2_TR(0x681f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B681f54:{NFSU2_TR(0x681f54);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B681f56:{NFSU2_TR(0x681f56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681f31u);}goto L681f31;}}
}
B681f58:L681f58:{c.instructions+=3;NFSU2_TR(0x681f58);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B681f5a:{NFSU2_TR(0x681f5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681f5d:{NFSU2_TR(0x681f5d);
if(r1(R+518)){{goto L681fd6;}}
}
B681f5f:L681f5f:{c.instructions+=2;NFSU2_TR(0x681f5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B681f62:{NFSU2_TR(0x681f62);
if(r1(R+518)){{goto L681fd6;}}
}
B681f64:L681f64:{c.instructions+=3;NFSU2_TR(0x681f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B681f67:{NFSU2_TR(0x681f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681f6a:{NFSU2_TR(0x681f6a);
{goto L681f97;}
}
B681f6c:L681f6c:{c.instructions+=6;NFSU2_TR(0x681f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681f6f:{NFSU2_TR(0x681f6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B681f72:{NFSU2_TR(0x681f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B681f74:{NFSU2_TR(0x681f74);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B681f79:{NFSU2_TR(0x681f79);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x11000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x11000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B681f7e:{NFSU2_TR(0x681f7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L681f86;}}
}
B681f80:L681f80:{c.instructions+=2;NFSU2_TR(0x681f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681f83:{NFSU2_TR(0x681f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681f86:L681f86:{c.instructions+=2;NFSU2_TR(0x681f86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681f88:{NFSU2_TR(0x681f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681f8dull));
TAIL_STATIC(0x6739efu,673);
}
B681f8d:L681f8d:{c.instructions+=4;NFSU2_TR(0x681f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681f90:{NFSU2_TR(0x681f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681f93:{NFSU2_TR(0x681f93);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B681f96:{NFSU2_TR(0x681f96);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B681f97:L681f97:{c.instructions+=3;NFSU2_TR(0x681f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681f9a:{NFSU2_TR(0x681f9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B681f9d:{NFSU2_TR(0x681f9d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681f6cu);}goto L681f6c;}}
}
B681f9f:L681f9f:{c.instructions+=9;NFSU2_TR(0x681f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681fa2:{NFSU2_TR(0x681fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B681fa5:{NFSU2_TR(0x681fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B681fa8:{NFSU2_TR(0x681fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B681fab:{NFSU2_TR(0x681fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B681fae:{NFSU2_TR(0x681fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B681fb1:{NFSU2_TR(0x681fb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B681fb4:{NFSU2_TR(0x681fb4);
__builtin_memmove((R+0),(R+4),4);
}
B681fb6:{NFSU2_TR(0x681fb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B681fb9:L681fb9:{c.instructions+=1;NFSU2_TR(0x681fb9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L681fbb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681fb9u);}goto L681fb9;}
}
B681fbb:L681fbb:{c.instructions+=6;NFSU2_TR(0x681fbb);
__builtin_memmove((R+4),(R+0),4);
}
B681fbd:{NFSU2_TR(0x681fbd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681fbf:{NFSU2_TR(0x681fbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B681fc2:{NFSU2_TR(0x681fc2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B681fc5:{NFSU2_TR(0x681fc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681fc6:{NFSU2_TR(0x681fc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B681fc9:L681fc9:{c.instructions+=1;NFSU2_TR(0x681fc9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L681fcb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681fc9u);}goto L681fc9;}
}
B681fcb:L681fcb:{c.instructions+=2;NFSU2_TR(0x681fcb);
__builtin_memmove((R+4),(R+12),4);
}
B681fcd:{NFSU2_TR(0x681fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681fd2ull));
TAIL_STATIC(0x6781b5u,678);
}
B681fd2:L681fd2:{c.instructions+=2;NFSU2_TR(0x681fd2);
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
B681fd4:{NFSU2_TR(0x681fd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L681fd8;}}
}
B681fd6:L681fd6:{c.instructions+=1;NFSU2_TR(0x681fd6);
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
B681fd8:L681fd8:{c.instructions+=5;NFSU2_TR(0x681fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B681fd9:{NFSU2_TR(0x681fd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B681fda:{NFSU2_TR(0x681fda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B681fdb:{NFSU2_TR(0x681fdb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B681fdc:{NFSU2_TR(0x681fdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B681fdf:L681fdf:{c.instructions+=5;NFSU2_TR(0x681fdf);
u8 U[4];
w4(U+0,u32(0x7b7b08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681fe4:{NFSU2_TR(0x681fe4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681fe5:{NFSU2_TR(0x681fe5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681fe6:{NFSU2_TR(0x681fe6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681fe7:{NFSU2_TR(0x681fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x681fecull));
TAIL_STATIC(0x675267u,675);
}
B681fec:L681fec:{c.instructions+=3;NFSU2_TR(0x681fec);
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
B681fef:{NFSU2_TR(0x681fef);
w4(R+0,u32(0x80004005ull));
}
B681ff4:{NFSU2_TR(0x681ff4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x681fd8u);}goto L681fd8;}
}
B681ff6:L681ff6:{c.instructions+=6;NFSU2_TR(0x681ff6);
__builtin_memmove((R+28),(R+28),4);
}
B681ff8:{NFSU2_TR(0x681ff8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681ff9:{NFSU2_TR(0x681ff9);
__builtin_memmove((R+20),(R+16),4);
}
B681ffb:{NFSU2_TR(0x681ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B681ffe:{NFSU2_TR(0x681ffe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B681fff:{NFSU2_TR(0x681fff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x682000u,682);
}
XIT:NFSU2_TR_EXIT(0x681,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
