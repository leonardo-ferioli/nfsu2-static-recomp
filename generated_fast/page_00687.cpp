#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_685(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x687,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x687,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_687(u8* __restrict R,Cpu& c);
u32 page_687(Cpu& c){return body_687(c.regs.data(),c);}
__attribute__((noinline)) u32 body_687(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x687001:goto L687001;
case 0x687002:c.instructions+=5;goto B687002;
case 0x687003:c.instructions+=4;goto B687003;
case 0x687005:c.instructions+=3;goto B687005;
case 0x687006:c.instructions+=2;goto B687006;
case 0x687009:c.instructions+=1;goto B687009;
case 0x68700b:goto L68700b;
case 0x68700d:c.instructions+=2;goto B68700d;
case 0x687010:c.instructions+=1;goto B687010;
case 0x687012:goto L687012;
case 0x687015:c.instructions+=1;goto B687015;
case 0x687017:goto L687017;
case 0x687018:c.instructions+=2;goto B687018;
case 0x687019:c.instructions+=1;goto B687019;
case 0x68701b:goto L68701b;
case 0x68701e:c.instructions+=2;goto B68701e;
case 0x68701f:c.instructions+=1;goto B68701f;
case 0x687024:goto L687024;
case 0x687026:c.instructions+=1;goto B687026;
case 0x687028:goto L687028;
case 0x68702a:c.instructions+=3;goto B68702a;
case 0x68702b:c.instructions+=2;goto B68702b;
case 0x68702e:c.instructions+=1;goto B68702e;
case 0x687031:goto L687031;
case 0x687034:c.instructions+=1;goto B687034;
case 0x687036:goto L687036;
case 0x687037:c.instructions+=1;goto B687037;
case 0x687039:goto L687039;
case 0x68703e:goto L68703e;
case 0x68703f:c.instructions+=3;goto B68703f;
case 0x687040:c.instructions+=2;goto B687040;
case 0x687041:c.instructions+=1;goto B687041;
case 0x687042:goto L687042;
case 0x687044:goto L687044;
case 0x687046:c.instructions+=1;goto B687046;
case 0x687048:goto L687048;
case 0x68704a:c.instructions+=3;goto B68704a;
case 0x68704b:c.instructions+=2;goto B68704b;
case 0x68704d:c.instructions+=1;goto B68704d;
case 0x68704f:goto L68704f;
case 0x687051:goto L687051;
case 0x687054:c.instructions+=1;goto B687054;
case 0x687056:goto L687056;
case 0x687059:c.instructions+=1;goto B687059;
case 0x68705b:goto L68705b;
case 0x687060:c.instructions+=1;goto B687060;
case 0x687062:goto L687062;
case 0x687067:c.instructions+=1;goto B687067;
case 0x687069:goto L687069;
case 0x68706d:c.instructions+=1;goto B68706d;
case 0x68706f:goto L68706f;
case 0x687073:c.instructions+=1;goto B687073;
case 0x687075:goto L687075;
case 0x687078:c.instructions+=5;goto B687078;
case 0x68707d:c.instructions+=4;goto B68707d;
case 0x68707f:c.instructions+=3;goto B68707f;
case 0x687081:c.instructions+=2;goto B687081;
case 0x687082:c.instructions+=1;goto B687082;
case 0x687084:goto L687084;
case 0x687086:goto L687086;
case 0x687088:goto L687088;
case 0x68708d:c.instructions+=1;goto B68708d;
case 0x68708f:goto L68708f;
case 0x687091:c.instructions+=4;goto B687091;
case 0x687096:c.instructions+=3;goto B687096;
case 0x687098:c.instructions+=2;goto B687098;
case 0x687099:c.instructions+=1;goto B687099;
case 0x68709b:goto L68709b;
case 0x68709d:goto L68709d;
case 0x68709f:goto L68709f;
case 0x6870a4:c.instructions+=1;goto B6870a4;
case 0x6870a6:goto L6870a6;
case 0x6870a8:c.instructions+=4;goto B6870a8;
case 0x6870aa:c.instructions+=3;goto B6870aa;
case 0x6870af:c.instructions+=2;goto B6870af;
case 0x6870b0:c.instructions+=1;goto B6870b0;
case 0x6870b2:goto L6870b2;
case 0x6870b4:goto L6870b4;
case 0x6870b6:goto L6870b6;
case 0x6870bb:c.instructions+=1;goto B6870bb;
case 0x6870bd:goto L6870bd;
case 0x6870c1:c.instructions+=1;goto B6870c1;
case 0x6870c3:goto L6870c3;
case 0x6870c6:c.instructions+=3;goto B6870c6;
case 0x6870c7:c.instructions+=2;goto B6870c7;
case 0x6870c9:c.instructions+=1;goto B6870c9;
case 0x6870ce:goto L6870ce;
case 0x6870d3:goto L6870d3;
case 0x6870d8:c.instructions+=1;goto B6870d8;
case 0x6870dd:goto L6870dd;
case 0x6870df:c.instructions+=24;goto B6870df;
case 0x6870e0:c.instructions+=23;goto B6870e0;
case 0x6870e2:c.instructions+=22;goto B6870e2;
case 0x6870e5:c.instructions+=21;goto B6870e5;
case 0x6870e8:c.instructions+=20;goto B6870e8;
case 0x6870eb:c.instructions+=19;goto B6870eb;
case 0x6870ec:c.instructions+=18;goto B6870ec;
case 0x6870ee:c.instructions+=17;goto B6870ee;
case 0x6870f0:c.instructions+=16;goto B6870f0;
case 0x6870f1:c.instructions+=15;goto B6870f1;
case 0x6870f3:c.instructions+=14;goto B6870f3;
case 0x6870f4:c.instructions+=13;goto B6870f4;
case 0x6870f7:c.instructions+=12;goto B6870f7;
case 0x6870fa:c.instructions+=11;goto B6870fa;
case 0x6870fd:c.instructions+=10;goto B6870fd;
case 0x687100:c.instructions+=9;goto B687100;
case 0x687103:c.instructions+=8;goto B687103;
case 0x687106:c.instructions+=7;goto B687106;
case 0x68710d:c.instructions+=6;goto B68710d;
case 0x687110:c.instructions+=5;goto B687110;
case 0x687113:c.instructions+=4;goto B687113;
case 0x687116:c.instructions+=3;goto B687116;
case 0x687119:c.instructions+=2;goto B687119;
case 0x68711c:c.instructions+=1;goto B68711c;
case 0x68711e:goto L68711e;
case 0x687121:c.instructions+=2;goto B687121;
case 0x687123:c.instructions+=1;goto B687123;
case 0x687129:goto L687129;
case 0x68712f:c.instructions+=2;goto B68712f;
case 0x687132:c.instructions+=1;goto B687132;
case 0x687138:goto L687138;
case 0x68713b:c.instructions+=1;goto B68713b;
case 0x687141:goto L687141;
case 0x687144:c.instructions+=1;goto B687144;
case 0x68714a:goto L68714a;
case 0x68714d:c.instructions+=1;goto B68714d;
case 0x687153:goto L687153;
case 0x687156:c.instructions+=1;goto B687156;
case 0x68715c:goto L68715c;
case 0x687161:c.instructions+=1;goto B687161;
case 0x687166:goto L687166;
case 0x687168:c.instructions+=1;goto B687168;
case 0x68716a:goto L68716a;
case 0x68716b:c.instructions+=1;goto B68716b;
case 0x68716e:goto L68716e;
case 0x687170:c.instructions+=2;goto B687170;
case 0x687172:c.instructions+=1;goto B687172;
case 0x687174:goto L687174;
case 0x687176:c.instructions+=3;goto B687176;
case 0x687179:c.instructions+=2;goto B687179;
case 0x68717c:c.instructions+=1;goto B68717c;
case 0x687182:goto L687182;
case 0x687185:c.instructions+=4;goto B687185;
case 0x687187:c.instructions+=3;goto B687187;
case 0x687189:c.instructions+=2;goto B687189;
case 0x68718c:c.instructions+=1;goto B68718c;
case 0x68718f:goto L68718f;
case 0x687191:goto L687191;
case 0x687193:c.instructions+=3;goto B687193;
case 0x687196:c.instructions+=2;goto B687196;
case 0x687198:c.instructions+=1;goto B687198;
case 0x68719a:goto L68719a;
case 0x68719c:goto L68719c;
case 0x6871a0:c.instructions+=1;goto B6871a0;
case 0x6871a2:goto L6871a2;
case 0x6871a3:c.instructions+=1;goto B6871a3;
case 0x6871a6:goto L6871a6;
case 0x6871a9:c.instructions+=2;goto B6871a9;
case 0x6871ac:c.instructions+=1;goto B6871ac;
case 0x6871b2:goto L6871b2;
case 0x6871b5:c.instructions+=2;goto B6871b5;
case 0x6871b8:c.instructions+=1;goto B6871b8;
case 0x6871ba:goto L6871ba;
case 0x6871bd:c.instructions+=2;goto B6871bd;
case 0x6871be:c.instructions+=1;goto B6871be;
case 0x6871c3:goto L6871c3;
case 0x6871c5:c.instructions+=2;goto B6871c5;
case 0x6871c6:c.instructions+=1;goto B6871c6;
case 0x6871c8:goto L6871c8;
case 0x6871c9:c.instructions+=2;goto B6871c9;
case 0x6871cb:c.instructions+=1;goto B6871cb;
case 0x6871cd:goto L6871cd;
case 0x6871cf:c.instructions+=1;goto B6871cf;
case 0x6871d1:goto L6871d1;
case 0x6871d2:c.instructions+=1;goto B6871d2;
case 0x6871d7:goto L6871d7;
case 0x6871d8:c.instructions+=2;goto B6871d8;
case 0x6871db:c.instructions+=1;goto B6871db;
case 0x6871dd:goto L6871dd;
case 0x6871e1:goto L6871e1;
case 0x6871e3:c.instructions+=1;goto B6871e3;
case 0x6871e5:goto L6871e5;
case 0x6871e7:c.instructions+=1;goto B6871e7;
case 0x6871e8:goto L6871e8;
case 0x6871ea:c.instructions+=2;goto B6871ea;
case 0x6871ec:c.instructions+=1;goto B6871ec;
case 0x6871ee:goto L6871ee;
case 0x6871f1:c.instructions+=2;goto B6871f1;
case 0x6871f2:c.instructions+=1;goto B6871f2;
case 0x6871f7:goto L6871f7;
case 0x6871f9:c.instructions+=2;goto B6871f9;
case 0x6871fa:c.instructions+=1;goto B6871fa;
case 0x6871fc:goto L6871fc;
case 0x6871fd:c.instructions+=3;goto B6871fd;
case 0x6871ff:c.instructions+=2;goto B6871ff;
case 0x687201:c.instructions+=1;goto B687201;
case 0x687203:goto L687203;
case 0x687205:c.instructions+=1;goto B687205;
case 0x68720b:goto L68720b;
case 0x68720d:c.instructions+=1;goto B68720d;
case 0x68720f:goto L68720f;
case 0x687215:c.instructions+=1;goto B687215;
case 0x687218:goto L687218;
case 0x68721a:c.instructions+=3;goto B68721a;
case 0x68721c:c.instructions+=2;goto B68721c;
case 0x68721e:c.instructions+=1;goto B68721e;
case 0x687220:goto L687220;
case 0x687222:c.instructions+=2;goto B687222;
case 0x687224:c.instructions+=1;goto B687224;
case 0x687226:goto L687226;
case 0x687229:c.instructions+=3;goto B687229;
case 0x68722b:c.instructions+=2;goto B68722b;
case 0x68722e:c.instructions+=1;goto B68722e;
case 0x687230:goto L687230;
case 0x687231:c.instructions+=6;goto B687231;
case 0x687232:c.instructions+=5;goto B687232;
case 0x687233:c.instructions+=4;goto B687233;
case 0x687235:c.instructions+=3;goto B687235;
case 0x687236:c.instructions+=2;goto B687236;
case 0x687238:c.instructions+=1;goto B687238;
case 0x68723a:goto L68723a;
case 0x68723c:c.instructions+=1;goto B68723c;
case 0x68723e:goto L68723e;
case 0x687240:c.instructions+=2;goto B687240;
case 0x687243:c.instructions+=1;goto B687243;
case 0x687245:goto L687245;
case 0x687247:c.instructions+=1;goto B687247;
case 0x687249:goto L687249;
case 0x68724c:c.instructions+=3;goto B68724c;
case 0x68724d:c.instructions+=2;goto B68724d;
case 0x687253:c.instructions+=1;goto B687253;
case 0x687255:goto L687255;
case 0x687258:c.instructions+=2;goto B687258;
case 0x68725b:c.instructions+=1;goto B68725b;
case 0x687261:goto L687261;
case 0x687264:c.instructions+=5;goto B687264;
case 0x687267:c.instructions+=4;goto B687267;
case 0x68726a:c.instructions+=3;goto B68726a;
case 0x687271:c.instructions+=2;goto B687271;
case 0x687274:c.instructions+=1;goto B687274;
case 0x68727a:goto L68727a;
case 0x68727c:c.instructions+=1;goto B68727c;
case 0x68727e:goto L68727e;
case 0x687282:c.instructions+=2;goto B687282;
case 0x687285:c.instructions+=1;goto B687285;
case 0x687287:goto L687287;
case 0x687289:c.instructions+=1;goto B687289;
case 0x68728f:goto L68728f;
case 0x687292:c.instructions+=2;goto B687292;
case 0x687295:c.instructions+=1;goto B687295;
case 0x687297:goto L687297;
case 0x687299:c.instructions+=1;goto B687299;
case 0x68729b:goto L68729b;
case 0x68729e:c.instructions+=2;goto B68729e;
case 0x6872a1:c.instructions+=1;goto B6872a1;
case 0x6872a3:goto L6872a3;
case 0x6872a5:c.instructions+=1;goto B6872a5;
case 0x6872a7:goto L6872a7;
case 0x6872aa:c.instructions+=1;goto B6872aa;
case 0x6872b0:goto L6872b0;
case 0x6872b4:c.instructions+=1;goto B6872b4;
case 0x6872b6:goto L6872b6;
case 0x6872b8:c.instructions+=1;goto B6872b8;
case 0x6872be:goto L6872be;
case 0x6872c1:c.instructions+=1;goto B6872c1;
case 0x6872c3:goto L6872c3;
case 0x6872c6:c.instructions+=2;goto B6872c6;
case 0x6872c8:c.instructions+=1;goto B6872c8;
case 0x6872ca:goto L6872ca;
case 0x6872cd:c.instructions+=1;goto B6872cd;
case 0x6872cf:goto L6872cf;
case 0x6872d2:c.instructions+=1;goto B6872d2;
case 0x6872d8:goto L6872d8;
case 0x6872db:c.instructions+=9;goto B6872db;
case 0x6872de:c.instructions+=8;goto B6872de;
case 0x6872e4:c.instructions+=7;goto B6872e4;
case 0x6872ea:c.instructions+=6;goto B6872ea;
case 0x6872ec:c.instructions+=5;goto B6872ec;
case 0x6872ef:c.instructions+=4;goto B6872ef;
case 0x6872f0:c.instructions+=3;goto B6872f0;
case 0x6872f2:c.instructions+=2;goto B6872f2;
case 0x6872f5:c.instructions+=1;goto B6872f5;
case 0x6872f7:goto L6872f7;
case 0x6872fe:c.instructions+=2;goto B6872fe;
case 0x687305:c.instructions+=1;goto B687305;
case 0x687307:goto L687307;
case 0x68730a:c.instructions+=1;goto B68730a;
case 0x68730c:goto L68730c;
case 0x687313:c.instructions+=1;goto B687313;
case 0x687315:goto L687315;
case 0x68731c:c.instructions+=1;goto B68731c;
case 0x68731e:goto L68731e;
case 0x687325:c.instructions+=1;goto B687325;
case 0x687327:goto L687327;
case 0x68732e:c.instructions+=1;goto B68732e;
case 0x687330:goto L687330;
case 0x687337:c.instructions+=1;goto B687337;
case 0x687339:goto L687339;
case 0x687340:goto L687340;
case 0x687347:c.instructions+=1;goto B687347;
case 0x687349:goto L687349;
case 0x68734c:c.instructions+=1;goto B68734c;
case 0x68734e:goto L68734e;
case 0x687355:goto L687355;
case 0x687358:c.instructions+=1;goto B687358;
case 0x68735a:goto L68735a;
case 0x68735d:c.instructions+=1;goto B68735d;
case 0x68735f:goto L68735f;
case 0x687366:c.instructions+=2;goto B687366;
case 0x687369:c.instructions+=1;goto B687369;
case 0x68736b:goto L68736b;
case 0x68736e:c.instructions+=1;goto B68736e;
case 0x687370:goto L687370;
case 0x687377:c.instructions+=1;goto B687377;
case 0x687379:goto L687379;
case 0x68737c:c.instructions+=1;goto B68737c;
case 0x68737e:goto L68737e;
case 0x687385:c.instructions+=1;goto B687385;
case 0x687387:goto L687387;
case 0x68738a:c.instructions+=1;goto B68738a;
case 0x68738c:goto L68738c;
case 0x687393:goto L687393;
case 0x68739a:goto L68739a;
case 0x68739d:c.instructions+=2;goto B68739d;
case 0x6873a0:c.instructions+=1;goto B6873a0;
case 0x6873a2:goto L6873a2;
case 0x6873a5:c.instructions+=1;goto B6873a5;
case 0x6873a7:goto L6873a7;
case 0x6873ae:goto L6873ae;
case 0x6873b1:c.instructions+=1;goto B6873b1;
case 0x6873b3:goto L6873b3;
case 0x6873b6:c.instructions+=1;goto B6873b6;
case 0x6873b8:goto L6873b8;
case 0x6873bb:c.instructions+=1;goto B6873bb;
case 0x6873bd:goto L6873bd;
case 0x6873c0:c.instructions+=1;goto B6873c0;
case 0x6873c2:goto L6873c2;
case 0x6873c9:goto L6873c9;
case 0x6873cc:goto L6873cc;
case 0x6873ce:c.instructions+=1;goto B6873ce;
case 0x6873d4:goto L6873d4;
case 0x6873d7:c.instructions+=1;goto B6873d7;
case 0x6873dc:goto L6873dc;
case 0x6873df:c.instructions+=1;goto B6873df;
case 0x6873e5:goto L6873e5;
case 0x6873e7:c.instructions+=4;goto B6873e7;
case 0x6873ec:c.instructions+=3;goto B6873ec;
case 0x6873ef:c.instructions+=2;goto B6873ef;
case 0x6873f0:c.instructions+=1;goto B6873f0;
case 0x6873f2:goto L6873f2;
case 0x6873f4:goto L6873f4;
case 0x6873f6:goto L6873f6;
case 0x6873fb:c.instructions+=1;goto B6873fb;
case 0x687400:goto L687400;
case 0x687402:c.instructions+=4;goto B687402;
case 0x687407:c.instructions+=3;goto B687407;
case 0x68740a:c.instructions+=2;goto B68740a;
case 0x68740b:c.instructions+=1;goto B68740b;
case 0x68740d:goto L68740d;
case 0x68740f:goto L68740f;
case 0x687411:goto L687411;
case 0x687416:c.instructions+=1;goto B687416;
case 0x687418:goto L687418;
case 0x68741a:c.instructions+=4;goto B68741a;
case 0x68741f:c.instructions+=3;goto B68741f;
case 0x687422:c.instructions+=2;goto B687422;
case 0x687423:c.instructions+=1;goto B687423;
case 0x687425:goto L687425;
case 0x687427:goto L687427;
case 0x687429:goto L687429;
case 0x68742e:c.instructions+=1;goto B68742e;
case 0x687430:goto L687430;
case 0x687432:c.instructions+=4;goto B687432;
case 0x687437:c.instructions+=3;goto B687437;
case 0x68743a:c.instructions+=2;goto B68743a;
case 0x68743b:c.instructions+=1;goto B68743b;
case 0x68743d:goto L68743d;
case 0x68743f:goto L68743f;
case 0x687441:goto L687441;
case 0x687446:c.instructions+=1;goto B687446;
case 0x687448:goto L687448;
case 0x68744a:c.instructions+=4;goto B68744a;
case 0x68744f:c.instructions+=3;goto B68744f;
case 0x687452:c.instructions+=2;goto B687452;
case 0x687453:c.instructions+=1;goto B687453;
case 0x687455:goto L687455;
case 0x687457:goto L687457;
case 0x687459:goto L687459;
case 0x68745b:c.instructions+=4;goto B68745b;
case 0x687460:c.instructions+=3;goto B687460;
case 0x687463:c.instructions+=2;goto B687463;
case 0x687464:c.instructions+=1;goto B687464;
case 0x687466:goto L687466;
case 0x687468:goto L687468;
case 0x68746a:goto L68746a;
case 0x68746c:c.instructions+=4;goto B68746c;
case 0x687471:c.instructions+=3;goto B687471;
case 0x687474:c.instructions+=2;goto B687474;
case 0x687475:c.instructions+=1;goto B687475;
case 0x687477:goto L687477;
case 0x687479:goto L687479;
case 0x68747b:goto L68747b;
case 0x687480:goto L687480;
case 0x687483:c.instructions+=2;goto B687483;
case 0x687486:c.instructions+=1;goto B687486;
case 0x687488:goto L687488;
case 0x68748b:c.instructions+=1;goto B68748b;
case 0x68748d:goto L68748d;
case 0x68748f:c.instructions+=4;goto B68748f;
case 0x687494:c.instructions+=3;goto B687494;
case 0x687497:c.instructions+=2;goto B687497;
case 0x687498:c.instructions+=1;goto B687498;
case 0x68749a:goto L68749a;
case 0x68749c:goto L68749c;
case 0x68749e:goto L68749e;
case 0x6874a5:c.instructions+=1;goto B6874a5;
case 0x6874a8:goto L6874a8;
case 0x6874ab:c.instructions+=1;goto B6874ab;
case 0x6874b0:goto L6874b0;
case 0x6874b3:goto L6874b3;
case 0x6874b6:c.instructions+=2;goto B6874b6;
case 0x6874b8:c.instructions+=1;goto B6874b8;
case 0x6874ba:goto L6874ba;
case 0x6874bd:c.instructions+=12;goto B6874bd;
case 0x6874c0:c.instructions+=11;goto B6874c0;
case 0x6874c1:c.instructions+=10;goto B6874c1;
case 0x6874c4:c.instructions+=9;goto B6874c4;
case 0x6874c5:c.instructions+=8;goto B6874c5;
case 0x6874c8:c.instructions+=7;goto B6874c8;
case 0x6874c9:c.instructions+=6;goto B6874c9;
case 0x6874ca:c.instructions+=5;goto B6874ca;
case 0x6874cd:c.instructions+=4;goto B6874cd;
case 0x6874d0:c.instructions+=3;goto B6874d0;
case 0x6874d3:c.instructions+=2;goto B6874d3;
case 0x6874d5:c.instructions+=1;goto B6874d5;
case 0x6874da:goto L6874da;
case 0x6874dc:c.instructions+=1;goto B6874dc;
case 0x6874e2:goto L6874e2;
case 0x6874e4:c.instructions+=1;goto B6874e4;
case 0x6874e9:goto L6874e9;
case 0x6874eb:c.instructions+=1;goto B6874eb;
case 0x6874f1:goto L6874f1;
case 0x6874f2:c.instructions+=6;goto B6874f2;
case 0x6874f5:c.instructions+=5;goto B6874f5;
case 0x6874f7:c.instructions+=4;goto B6874f7;
case 0x6874fa:c.instructions+=3;goto B6874fa;
case 0x6874fd:c.instructions+=2;goto B6874fd;
case 0x687500:c.instructions+=1;goto B687500;
case 0x687505:goto L687505;
case 0x68750a:goto L68750a;
case 0x68750d:c.instructions+=2;goto B68750d;
case 0x68750f:c.instructions+=1;goto B68750f;
case 0x687511:goto L687511;
case 0x687514:c.instructions+=2;goto B687514;
case 0x687516:c.instructions+=1;goto B687516;
case 0x687518:goto L687518;
case 0x68751b:c.instructions+=6;goto B68751b;
case 0x68751e:c.instructions+=5;goto B68751e;
case 0x687523:c.instructions+=4;goto B687523;
case 0x687528:c.instructions+=3;goto B687528;
case 0x68752b:c.instructions+=2;goto B68752b;
case 0x68752d:c.instructions+=1;goto B68752d;
case 0x687532:goto L687532;
case 0x687535:c.instructions+=1;goto B687535;
case 0x68753a:goto L68753a;
case 0x68753e:c.instructions+=1;goto B68753e;
case 0x687544:goto L687544;
case 0x687547:c.instructions+=1;goto B687547;
case 0x68754c:goto L68754c;
case 0x687551:c.instructions+=3;goto B687551;
case 0x687554:c.instructions+=2;goto B687554;
case 0x687556:c.instructions+=1;goto B687556;
case 0x68755b:goto L68755b;
case 0x68755e:c.instructions+=1;goto B68755e;
case 0x687560:goto L687560;
case 0x687563:c.instructions+=2;goto B687563;
case 0x687568:c.instructions+=1;goto B687568;
case 0x68756a:goto L68756a;
case 0x68756d:c.instructions+=1;goto B68756d;
case 0x687573:goto L687573;
case 0x687576:c.instructions+=1;goto B687576;
case 0x68757c:goto L68757c;
case 0x68757f:c.instructions+=1;goto B68757f;
case 0x687585:goto L687585;
case 0x687588:c.instructions+=1;goto B687588;
case 0x68758e:goto L68758e;
case 0x687591:c.instructions+=1;goto B687591;
case 0x687597:goto L687597;
case 0x68759a:c.instructions+=1;goto B68759a;
case 0x6875a0:goto L6875a0;
case 0x6875a3:c.instructions+=1;goto B6875a3;
case 0x6875a9:goto L6875a9;
case 0x6875ac:c.instructions+=1;goto B6875ac;
case 0x6875b2:goto L6875b2;
case 0x6875b5:c.instructions+=1;goto B6875b5;
case 0x6875bb:goto L6875bb;
case 0x6875c0:goto L6875c0;
case 0x6875c5:c.instructions+=3;goto B6875c5;
case 0x6875c8:c.instructions+=2;goto B6875c8;
case 0x6875ca:c.instructions+=1;goto B6875ca;
case 0x6875cf:goto L6875cf;
case 0x6875d2:goto L6875d2;
case 0x6875d4:c.instructions+=2;goto B6875d4;
case 0x6875db:c.instructions+=1;goto B6875db;
case 0x6875e0:goto L6875e0;
case 0x6875e2:c.instructions+=1;goto B6875e2;
case 0x6875e4:goto L6875e4;
case 0x6875e5:c.instructions+=6;goto B6875e5;
case 0x6875e6:c.instructions+=5;goto B6875e6;
case 0x6875e7:c.instructions+=4;goto B6875e7;
case 0x6875e8:c.instructions+=3;goto B6875e8;
case 0x6875ea:c.instructions+=2;goto B6875ea;
case 0x6875ec:c.instructions+=1;goto B6875ec;
case 0x6875f1:goto L6875f1;
case 0x6875f3:goto L6875f3;
case 0x6875f5:c.instructions+=1;goto B6875f5;
case 0x6875f7:goto L6875f7;
case 0x6875f9:goto L6875f9;
case 0x6875fb:c.instructions+=1;goto B6875fb;
case 0x6875fd:goto L6875fd;
case 0x6875ff:c.instructions+=1;goto B6875ff;
case 0x687601:goto L687601;
case 0x687604:c.instructions+=2;goto B687604;
case 0x687607:c.instructions+=1;goto B687607;
case 0x68760a:goto L68760a;
case 0x68760b:c.instructions+=4;goto B68760b;
case 0x68760c:c.instructions+=3;goto B68760c;
case 0x68760d:c.instructions+=2;goto B68760d;
case 0x68760e:c.instructions+=1;goto B68760e;
case 0x687611:goto L687611;
case 0x687613:c.instructions+=4;goto B687613;
case 0x687614:c.instructions+=3;goto B687614;
case 0x687616:c.instructions+=2;goto B687616;
case 0x687618:c.instructions+=1;goto B687618;
case 0x68761d:goto L68761d;
case 0x68761e:c.instructions+=4;goto B68761e;
case 0x687621:c.instructions+=3;goto B687621;
case 0x687623:c.instructions+=2;goto B687623;
case 0x687624:c.instructions+=1;goto B687624;
case 0x687626:goto L687626;
case 0x687628:c.instructions+=1;goto B687628;
case 0x68762d:goto L68762d;
case 0x68762e:goto L68762e;
case 0x687630:c.instructions+=5;goto B687630;
case 0x687631:c.instructions+=4;goto B687631;
case 0x687633:c.instructions+=3;goto B687633;
case 0x687636:c.instructions+=2;goto B687636;
case 0x687638:c.instructions+=1;goto B687638;
case 0x68763a:goto L68763a;
case 0x68763c:c.instructions+=2;goto B68763c;
case 0x68763d:c.instructions+=1;goto B68763d;
case 0x687640:goto L687640;
case 0x687644:goto L687644;
case 0x687647:c.instructions+=1;goto B687647;
case 0x68764c:goto L68764c;
case 0x68764d:c.instructions+=4;goto B68764d;
case 0x687650:c.instructions+=3;goto B687650;
case 0x687652:c.instructions+=2;goto B687652;
case 0x687653:c.instructions+=1;goto B687653;
case 0x687655:goto L687655;
case 0x687657:c.instructions+=1;goto B687657;
case 0x68765c:goto L68765c;
case 0x68765d:goto L68765d;
case 0x68765f:c.instructions+=9;goto B68765f;
case 0x687660:c.instructions+=8;goto B687660;
case 0x687662:c.instructions+=7;goto B687662;
case 0x687665:c.instructions+=6;goto B687665;
case 0x687666:c.instructions+=5;goto B687666;
case 0x687667:c.instructions+=4;goto B687667;
case 0x687669:c.instructions+=3;goto B687669;
case 0x68766b:c.instructions+=2;goto B68766b;
case 0x68766e:c.instructions+=1;goto B68766e;
case 0x687674:goto L687674;
case 0x687677:c.instructions+=4;goto B687677;
case 0x687679:c.instructions+=3;goto B687679;
case 0x68767a:c.instructions+=2;goto B68767a;
case 0x68767c:c.instructions+=1;goto B68767c;
case 0x68767e:goto L68767e;
case 0x687681:c.instructions+=3;goto B687681;
case 0x687682:c.instructions+=2;goto B687682;
case 0x687684:c.instructions+=1;goto B687684;
case 0x687686:goto L687686;
case 0x687689:c.instructions+=7;goto B687689;
case 0x68768d:c.instructions+=6;goto B68768d;
case 0x687690:c.instructions+=5;goto B687690;
case 0x687693:c.instructions+=4;goto B687693;
case 0x687697:c.instructions+=3;goto B687697;
case 0x68769b:c.instructions+=2;goto B68769b;
case 0x68769d:c.instructions+=1;goto B68769d;
case 0x68769f:goto L68769f;
case 0x6876a2:c.instructions+=4;goto B6876a2;
case 0x6876a4:c.instructions+=3;goto B6876a4;
case 0x6876a5:c.instructions+=2;goto B6876a5;
case 0x6876a8:c.instructions+=1;goto B6876a8;
case 0x6876ae:goto L6876ae;
case 0x6876b5:c.instructions+=1;goto B6876b5;
case 0x6876bc:goto L6876bc;
case 0x6876c1:c.instructions+=5;goto B6876c1;
case 0x6876c3:c.instructions+=4;goto B6876c3;
case 0x6876c6:c.instructions+=3;goto B6876c6;
case 0x6876c7:c.instructions+=2;goto B6876c7;
case 0x6876c9:c.instructions+=1;goto B6876c9;
case 0x6876ce:goto L6876ce;
case 0x6876d1:c.instructions+=2;goto B6876d1;
case 0x6876d8:c.instructions+=1;goto B6876d8;
case 0x6876dd:goto L6876dd;
case 0x6876df:c.instructions+=1;goto B6876df;
case 0x6876e4:goto L6876e4;
case 0x6876e7:c.instructions+=1;goto B6876e7;
case 0x6876ec:goto L6876ec;
case 0x6876ef:c.instructions+=2;goto B6876ef;
case 0x6876f2:c.instructions+=1;goto B6876f2;
case 0x6876f7:goto L6876f7;
case 0x6876f9:c.instructions+=1;goto B6876f9;
case 0x6876fe:goto L6876fe;
case 0x687700:c.instructions+=2;goto B687700;
case 0x687703:c.instructions+=1;goto B687703;
case 0x687709:goto L687709;
case 0x68770c:c.instructions+=3;goto B68770c;
case 0x68770f:c.instructions+=2;goto B68770f;
case 0x687712:c.instructions+=1;goto B687712;
case 0x687717:goto L687717;
case 0x68771a:c.instructions+=1;goto B68771a;
case 0x68771c:goto L68771c;
case 0x68771f:c.instructions+=3;goto B68771f;
case 0x687722:c.instructions+=2;goto B687722;
case 0x687725:c.instructions+=1;goto B687725;
case 0x687727:goto L687727;
case 0x68772a:c.instructions+=1;goto B68772a;
case 0x68772c:goto L68772c;
case 0x68772f:goto L68772f;
case 0x687730:c.instructions+=2;goto B687730;
case 0x687732:c.instructions+=1;goto B687732;
case 0x687737:goto L687737;
case 0x68773c:goto L68773c;
case 0x687741:c.instructions+=2;goto B687741;
case 0x687746:c.instructions+=1;goto B687746;
case 0x687748:goto L687748;
case 0x68774b:c.instructions+=3;goto B68774b;
case 0x68774e:c.instructions+=2;goto B68774e;
case 0x687751:c.instructions+=1;goto B687751;
case 0x687753:goto L687753;
case 0x687756:c.instructions+=1;goto B687756;
case 0x687758:goto L687758;
case 0x68775b:c.instructions+=1;goto B68775b;
case 0x68775d:goto L68775d;
case 0x687760:c.instructions+=1;goto B687760;
case 0x687762:goto L687762;
case 0x687765:c.instructions+=2;goto B687765;
case 0x687768:c.instructions+=1;goto B687768;
case 0x68776d:goto L68776d;
case 0x687772:c.instructions+=1;goto B687772;
case 0x687777:goto L687777;
case 0x68777a:c.instructions+=1;goto B68777a;
case 0x68777f:goto L68777f;
case 0x687782:c.instructions+=3;goto B687782;
case 0x687786:c.instructions+=2;goto B687786;
case 0x687788:c.instructions+=1;goto B687788;
case 0x68778a:goto L68778a;
case 0x68778d:c.instructions+=2;goto B68778d;
case 0x687791:c.instructions+=1;goto B687791;
case 0x687794:goto L687794;
case 0x687796:c.instructions+=3;goto B687796;
case 0x687797:c.instructions+=2;goto B687797;
case 0x687799:c.instructions+=1;goto B687799;
case 0x68779f:goto L68779f;
case 0x6877a2:goto L6877a2;
case 0x6877a6:c.instructions+=7;goto B6877a6;
case 0x6877a8:c.instructions+=6;goto B6877a8;
case 0x6877ab:c.instructions+=5;goto B6877ab;
case 0x6877ad:c.instructions+=4;goto B6877ad;
case 0x6877ae:c.instructions+=3;goto B6877ae;
case 0x6877b1:c.instructions+=2;goto B6877b1;
case 0x6877b4:c.instructions+=1;goto B6877b4;
case 0x6877b6:goto L6877b6;
case 0x6877b8:c.instructions+=2;goto B6877b8;
case 0x6877b9:c.instructions+=1;goto B6877b9;
case 0x6877be:goto L6877be;
case 0x6877c1:c.instructions+=4;goto B6877c1;
case 0x6877c5:c.instructions+=3;goto B6877c5;
case 0x6877c7:c.instructions+=2;goto B6877c7;
case 0x6877c9:c.instructions+=1;goto B6877c9;
case 0x6877cf:goto L6877cf;
case 0x6877d2:goto L6877d2;
case 0x6877d6:c.instructions+=7;goto B6877d6;
case 0x6877d8:c.instructions+=6;goto B6877d8;
case 0x6877db:c.instructions+=5;goto B6877db;
case 0x6877dd:c.instructions+=4;goto B6877dd;
case 0x6877de:c.instructions+=3;goto B6877de;
case 0x6877e1:c.instructions+=2;goto B6877e1;
case 0x6877e4:c.instructions+=1;goto B6877e4;
case 0x6877e6:goto L6877e6;
case 0x6877e8:goto L6877e8;
case 0x6877eb:c.instructions+=2;goto B6877eb;
case 0x6877ef:c.instructions+=1;goto B6877ef;
case 0x6877f1:goto L6877f1;
case 0x6877f6:c.instructions+=5;goto B6877f6;
case 0x6877fb:c.instructions+=4;goto B6877fb;
case 0x6877fe:c.instructions+=3;goto B6877fe;
case 0x6877ff:c.instructions+=2;goto B6877ff;
case 0x687801:c.instructions+=1;goto B687801;
case 0x687806:goto L687806;
case 0x687808:c.instructions+=5;goto B687808;
case 0x68780b:c.instructions+=4;goto B68780b;
case 0x68780c:c.instructions+=3;goto B68780c;
case 0x68780f:c.instructions+=2;goto B68780f;
case 0x687816:c.instructions+=1;goto B687816;
case 0x68781b:goto L68781b;
case 0x68781e:c.instructions+=4;goto B68781e;
case 0x687821:c.instructions+=3;goto B687821;
case 0x687822:c.instructions+=2;goto B687822;
case 0x687824:c.instructions+=1;goto B687824;
case 0x687829:goto L687829;
case 0x68782c:c.instructions+=1;goto B68782c;
case 0x68782e:goto L68782e;
case 0x687831:c.instructions+=2;goto B687831;
case 0x687835:c.instructions+=1;goto B687835;
case 0x687837:goto L687837;
case 0x68783c:c.instructions+=2;goto B68783c;
case 0x687841:c.instructions+=1;goto B687841;
case 0x687846:goto L687846;
case 0x68784d:c.instructions+=1;goto B68784d;
case 0x687852:goto L687852;
case 0x687855:c.instructions+=3;goto B687855;
case 0x687858:c.instructions+=2;goto B687858;
case 0x68785a:c.instructions+=1;goto B68785a;
case 0x68785c:goto L68785c;
case 0x687861:c.instructions+=1;goto B687861;
case 0x687863:goto L687863;
case 0x687868:c.instructions+=1;goto B687868;
case 0x68786a:goto L68786a;
case 0x68786f:c.instructions+=1;goto B68786f;
case 0x687871:goto L687871;
case 0x687876:c.instructions+=1;goto B687876;
case 0x687878:goto L687878;
case 0x68787d:c.instructions+=1;goto B68787d;
case 0x68787f:goto L68787f;
case 0x687884:c.instructions+=1;goto B687884;
case 0x68788a:goto L68788a;
case 0x687891:c.instructions+=1;goto B687891;
case 0x687896:goto L687896;
case 0x68789b:c.instructions+=2;goto B68789b;
case 0x6878a0:c.instructions+=1;goto B6878a0;
case 0x6878a2:goto L6878a2;
case 0x6878a9:c.instructions+=1;goto B6878a9;
case 0x6878ae:goto L6878ae;
case 0x6878b5:c.instructions+=1;goto B6878b5;
case 0x6878ba:goto L6878ba;
case 0x6878c1:c.instructions+=1;goto B6878c1;
case 0x6878c6:goto L6878c6;
case 0x6878cd:c.instructions+=1;goto B6878cd;
case 0x6878d2:goto L6878d2;
case 0x6878d5:c.instructions+=3;goto B6878d5;
case 0x6878d8:c.instructions+=2;goto B6878d8;
case 0x6878db:c.instructions+=1;goto B6878db;
case 0x6878dd:goto L6878dd;
case 0x6878e2:c.instructions+=2;goto B6878e2;
case 0x6878e7:c.instructions+=1;goto B6878e7;
case 0x6878e9:goto L6878e9;
case 0x6878ec:c.instructions+=2;goto B6878ec;
case 0x6878ef:c.instructions+=1;goto B6878ef;
case 0x6878f1:goto L6878f1;
case 0x6878f4:c.instructions+=1;goto B6878f4;
case 0x6878f6:goto L6878f6;
case 0x6878fa:c.instructions+=1;goto B6878fa;
case 0x6878fc:goto L6878fc;
case 0x687901:c.instructions+=1;goto B687901;
case 0x687906:goto L687906;
case 0x687909:goto L687909;
case 0x68790a:c.instructions+=2;goto B68790a;
case 0x68790c:c.instructions+=1;goto B68790c;
case 0x687911:goto L687911;
case 0x687914:c.instructions+=2;goto B687914;
case 0x687917:c.instructions+=1;goto B687917;
case 0x68791c:goto L68791c;
case 0x687923:c.instructions+=1;goto B687923;
case 0x687928:goto L687928;
case 0x68792d:c.instructions+=2;goto B68792d;
case 0x687932:c.instructions+=1;goto B687932;
case 0x687934:goto L687934;
case 0x687937:c.instructions+=2;goto B687937;
case 0x68793b:c.instructions+=1;goto B68793b;
case 0x68793d:goto L68793d;
case 0x687942:c.instructions+=5;goto B687942;
case 0x687947:c.instructions+=4;goto B687947;
case 0x68794a:c.instructions+=3;goto B68794a;
case 0x68794b:c.instructions+=2;goto B68794b;
case 0x68794d:c.instructions+=1;goto B68794d;
case 0x687952:goto L687952;
case 0x687954:c.instructions+=5;goto B687954;
case 0x687957:c.instructions+=4;goto B687957;
case 0x687958:c.instructions+=3;goto B687958;
case 0x68795b:c.instructions+=2;goto B68795b;
case 0x687962:c.instructions+=1;goto B687962;
case 0x687967:goto L687967;
case 0x68796a:c.instructions+=4;goto B68796a;
case 0x68796d:c.instructions+=3;goto B68796d;
case 0x68796e:c.instructions+=2;goto B68796e;
case 0x687970:c.instructions+=1;goto B687970;
case 0x687975:goto L687975;
case 0x687978:c.instructions+=1;goto B687978;
case 0x68797d:goto L68797d;
case 0x68797f:goto L68797f;
case 0x687982:c.instructions+=4;goto B687982;
case 0x687985:c.instructions+=3;goto B687985;
case 0x687986:c.instructions+=2;goto B687986;
case 0x687988:c.instructions+=1;goto B687988;
case 0x68798d:goto L68798d;
case 0x687992:goto L687992;
case 0x687995:c.instructions+=1;goto B687995;
case 0x687997:goto L687997;
case 0x68799a:c.instructions+=6;goto B68799a;
case 0x68799d:c.instructions+=5;goto B68799d;
case 0x6879a0:c.instructions+=4;goto B6879a0;
case 0x6879a3:c.instructions+=3;goto B6879a3;
case 0x6879a5:c.instructions+=2;goto B6879a5;
case 0x6879a8:c.instructions+=1;goto B6879a8;
case 0x6879aa:goto L6879aa;
case 0x6879ad:c.instructions+=3;goto B6879ad;
case 0x6879b0:c.instructions+=2;goto B6879b0;
case 0x6879b3:c.instructions+=1;goto B6879b3;
case 0x6879b8:goto L6879b8;
case 0x6879bb:c.instructions+=1;goto B6879bb;
case 0x6879c1:goto L6879c1;
case 0x6879c6:c.instructions+=2;goto B6879c6;
case 0x6879cb:c.instructions+=1;goto B6879cb;
case 0x6879d0:goto L6879d0;
case 0x6879d2:c.instructions+=1;goto B6879d2;
case 0x6879d7:goto L6879d7;
case 0x6879d9:c.instructions+=2;goto B6879d9;
case 0x6879db:c.instructions+=1;goto B6879db;
case 0x6879e1:goto L6879e1;
case 0x6879e4:c.instructions+=2;goto B6879e4;
case 0x6879e5:c.instructions+=1;goto B6879e5;
case 0x6879e6:goto L6879e6;
case 0x6879e7:c.instructions+=3;goto B6879e7;
case 0x6879e8:c.instructions+=2;goto B6879e8;
case 0x6879ea:c.instructions+=1;goto B6879ea;
case 0x6879ef:goto L6879ef;
case 0x6879f4:goto L6879f4;
case 0x6879f6:c.instructions+=1;goto B6879f6;
case 0x6879fb:goto L6879fb;
case 0x6879fd:c.instructions+=2;goto B6879fd;
case 0x6879ff:c.instructions+=1;goto B6879ff;
case 0x687a05:goto L687a05;
case 0x687a08:c.instructions+=4;goto B687a08;
case 0x687a09:c.instructions+=3;goto B687a09;
case 0x687a0a:c.instructions+=2;goto B687a0a;
case 0x687a0d:c.instructions+=1;goto B687a0d;
case 0x687a0f:goto L687a0f;
case 0x687a11:c.instructions+=1;goto B687a11;
case 0x687a16:goto L687a16;
case 0x687a18:c.instructions+=1;goto B687a18;
case 0x687a1a:goto L687a1a;
case 0x687a1d:c.instructions+=3;goto B687a1d;
case 0x687a1e:c.instructions+=2;goto B687a1e;
case 0x687a20:c.instructions+=1;goto B687a20;
case 0x687a25:goto L687a25;
case 0x687a27:c.instructions+=1;goto B687a27;
case 0x687a29:goto L687a29;
case 0x687a2b:goto L687a2b;
case 0x687a2c:c.instructions+=2;goto B687a2c;
case 0x687a2e:c.instructions+=1;goto B687a2e;
case 0x687a33:goto L687a33;
case 0x687a3a:c.instructions+=2;goto B687a3a;
case 0x687a3d:c.instructions+=1;goto B687a3d;
case 0x687a42:goto L687a42;
case 0x687a44:c.instructions+=1;goto B687a44;
case 0x687a49:goto L687a49;
case 0x687a4b:c.instructions+=1;goto B687a4b;
case 0x687a4d:goto L687a4d;
case 0x687a50:c.instructions+=3;goto B687a50;
case 0x687a51:c.instructions+=2;goto B687a51;
case 0x687a53:c.instructions+=1;goto B687a53;
case 0x687a58:goto L687a58;
case 0x687a5a:c.instructions+=1;goto B687a5a;
case 0x687a5c:goto L687a5c;
case 0x687a5e:goto L687a5e;
case 0x687a5f:c.instructions+=2;goto B687a5f;
case 0x687a61:c.instructions+=1;goto B687a61;
case 0x687a66:goto L687a66;
case 0x687a6a:c.instructions+=2;goto B687a6a;
case 0x687a71:c.instructions+=1;goto B687a71;
case 0x687a76:goto L687a76;
case 0x687a79:c.instructions+=2;goto B687a79;
case 0x687a7c:c.instructions+=1;goto B687a7c;
case 0x687a81:goto L687a81;
case 0x687a84:c.instructions+=5;goto B687a84;
case 0x687a87:c.instructions+=4;goto B687a87;
case 0x687a8a:c.instructions+=3;goto B687a8a;
case 0x687a8c:c.instructions+=2;goto B687a8c;
case 0x687a93:c.instructions+=1;goto B687a93;
case 0x687a95:goto L687a95;
case 0x687a9b:goto L687a9b;
case 0x687a9e:c.instructions+=1;goto B687a9e;
case 0x687aa0:goto L687aa0;
case 0x687aa3:c.instructions+=5;goto B687aa3;
case 0x687aa6:c.instructions+=4;goto B687aa6;
case 0x687aa9:c.instructions+=3;goto B687aa9;
case 0x687aab:c.instructions+=2;goto B687aab;
case 0x687ab2:c.instructions+=1;goto B687ab2;
case 0x687ab4:goto L687ab4;
case 0x687aba:c.instructions+=1;goto B687aba;
case 0x687abc:goto L687abc;
case 0x687abf:c.instructions+=1;goto B687abf;
case 0x687ac2:goto L687ac2;
case 0x687ac4:c.instructions+=1;goto B687ac4;
case 0x687ac6:goto L687ac6;
case 0x687ac8:c.instructions+=1;goto B687ac8;
case 0x687acd:goto L687acd;
case 0x687acf:c.instructions+=1;goto B687acf;
case 0x687ad1:goto L687ad1;
case 0x687ad4:c.instructions+=6;goto B687ad4;
case 0x687ad7:c.instructions+=5;goto B687ad7;
case 0x687ada:c.instructions+=4;goto B687ada;
case 0x687add:c.instructions+=3;goto B687add;
case 0x687ade:c.instructions+=2;goto B687ade;
case 0x687ae0:c.instructions+=1;goto B687ae0;
case 0x687ae5:goto L687ae5;
case 0x687ae7:c.instructions+=1;goto B687ae7;
case 0x687ae9:goto L687ae9;
case 0x687aeb:c.instructions+=1;goto B687aeb;
case 0x687af0:goto L687af0;
case 0x687af2:c.instructions+=1;goto B687af2;
case 0x687af4:goto L687af4;
case 0x687af7:c.instructions+=3;goto B687af7;
case 0x687af8:c.instructions+=2;goto B687af8;
case 0x687afa:c.instructions+=1;goto B687afa;
case 0x687aff:goto L687aff;
case 0x687b01:goto L687b01;
case 0x687b03:goto L687b03;
case 0x687b05:c.instructions+=2;goto B687b05;
case 0x687b06:c.instructions+=1;goto B687b06;
case 0x687b0b:goto L687b0b;
case 0x687b0f:c.instructions+=1;goto B687b0f;
case 0x687b11:goto L687b11;
case 0x687b13:c.instructions+=1;goto B687b13;
case 0x687b18:goto L687b18;
case 0x687b1a:c.instructions+=1;goto B687b1a;
case 0x687b1c:goto L687b1c;
case 0x687b21:c.instructions+=4;goto B687b21;
case 0x687b24:c.instructions+=3;goto B687b24;
case 0x687b26:c.instructions+=2;goto B687b26;
case 0x687b27:c.instructions+=1;goto B687b27;
case 0x687b2c:goto L687b2c;
case 0x687b2e:goto L687b2e;
case 0x687b30:goto L687b30;
case 0x687b32:c.instructions+=1;goto B687b32;
case 0x687b34:goto L687b34;
case 0x687b39:c.instructions+=5;goto B687b39;
case 0x687b3a:c.instructions+=4;goto B687b3a;
case 0x687b3d:c.instructions+=3;goto B687b3d;
case 0x687b3e:c.instructions+=2;goto B687b3e;
case 0x687b40:c.instructions+=1;goto B687b40;
case 0x687b45:goto L687b45;
case 0x687b48:c.instructions+=3;goto B687b48;
case 0x687b4b:c.instructions+=2;goto B687b4b;
case 0x687b4e:c.instructions+=1;goto B687b4e;
case 0x687b50:goto L687b50;
case 0x687b53:goto L687b53;
case 0x687b54:goto L687b54;
case 0x687b55:c.instructions+=3;goto B687b55;
case 0x687b56:c.instructions+=2;goto B687b56;
case 0x687b57:c.instructions+=1;goto B687b57;
case 0x687c0a:goto L687c0a;
case 0x687c0c:c.instructions+=11;goto B687c0c;
case 0x687c0d:c.instructions+=10;goto B687c0d;
case 0x687c0e:c.instructions+=9;goto B687c0e;
case 0x687c10:c.instructions+=8;goto B687c10;
case 0x687c11:c.instructions+=7;goto B687c11;
case 0x687c17:c.instructions+=6;goto B687c17;
case 0x687c1d:c.instructions+=5;goto B687c1d;
case 0x687c27:c.instructions+=4;goto B687c27;
case 0x687c31:c.instructions+=3;goto B687c31;
case 0x687c38:c.instructions+=2;goto B687c38;
case 0x687c3b:c.instructions+=1;goto B687c3b;
case 0x687c40:goto L687c40;
case 0x687c48:c.instructions+=2;goto B687c48;
case 0x687c4a:c.instructions+=1;goto B687c4a;
case 0x687c50:goto L687c50;
case 0x687c52:c.instructions+=1;goto B687c52;
case 0x687c54:goto L687c54;
case 0x687c5a:c.instructions+=1;goto B687c5a;
case 0x687c5f:goto L687c5f;
case 0x687c61:c.instructions+=2;goto B687c61;
case 0x687c66:c.instructions+=1;goto B687c66;
case 0x687c68:goto L687c68;
case 0x687c6a:c.instructions+=1;goto B687c6a;
case 0x687c6f:goto L687c6f;
case 0x687c77:c.instructions+=2;goto B687c77;
case 0x687c79:c.instructions+=1;goto B687c79;
case 0x687c7b:goto L687c7b;
case 0x687c7d:c.instructions+=1;goto B687c7d;
case 0x687c7f:goto L687c7f;
case 0x687c84:c.instructions+=2;goto B687c84;
case 0x687c86:c.instructions+=1;goto B687c86;
case 0x687c88:goto L687c88;
case 0x687c8a:c.instructions+=3;goto B687c8a;
case 0x687c91:c.instructions+=2;goto B687c91;
case 0x687c93:c.instructions+=1;goto B687c93;
case 0x687c95:goto L687c95;
case 0x687c9a:c.instructions+=2;goto B687c9a;
case 0x687c9f:c.instructions+=1;goto B687c9f;
case 0x687ca5:goto L687ca5;
case 0x687cac:c.instructions+=12;goto B687cac;
case 0x687cad:c.instructions+=11;goto B687cad;
case 0x687cae:c.instructions+=10;goto B687cae;
case 0x687cb3:c.instructions+=9;goto B687cb3;
case 0x687cb6:c.instructions+=8;goto B687cb6;
case 0x687cbd:c.instructions+=7;goto B687cbd;
case 0x687cc2:c.instructions+=6;goto B687cc2;
case 0x687cc8:c.instructions+=5;goto B687cc8;
case 0x687cca:c.instructions+=4;goto B687cca;
case 0x687ccd:c.instructions+=3;goto B687ccd;
case 0x687cd4:c.instructions+=2;goto B687cd4;
case 0x687cd9:c.instructions+=1;goto B687cd9;
case 0x687cdf:goto L687cdf;
case 0x687ce5:c.instructions+=1;goto B687ce5;
case 0x687cea:goto L687cea;
case 0x687cef:goto L687cef;
case 0x687cf7:c.instructions+=2;goto B687cf7;
case 0x687cf9:c.instructions+=1;goto B687cf9;
case 0x687cff:goto L687cff;
case 0x687d01:c.instructions+=1;goto B687d01;
case 0x687d07:goto L687d07;
case 0x687d09:c.instructions+=1;goto B687d09;
case 0x687d0f:goto L687d0f;
case 0x687d11:c.instructions+=3;goto B687d11;
case 0x687d18:c.instructions+=2;goto B687d18;
case 0x687d1a:c.instructions+=1;goto B687d1a;
case 0x687d20:goto L687d20;
case 0x687d27:goto L687d27;
case 0x687d2c:c.instructions+=10;goto B687d2c;
case 0x687d2f:c.instructions+=9;goto B687d2f;
case 0x687d36:c.instructions+=8;goto B687d36;
case 0x687d38:c.instructions+=7;goto B687d38;
case 0x687d3b:c.instructions+=6;goto B687d3b;
case 0x687d3d:c.instructions+=5;goto B687d3d;
case 0x687d40:c.instructions+=4;goto B687d40;
case 0x687d45:c.instructions+=3;goto B687d45;
case 0x687d48:c.instructions+=2;goto B687d48;
case 0x687d4b:c.instructions+=1;goto B687d4b;
case 0x687d51:goto L687d51;
case 0x687d58:goto L687d58;
case 0x687d5a:c.instructions+=2;goto B687d5a;
case 0x687d5c:c.instructions+=1;goto B687d5c;
case 0x687d61:goto L687d61;
case 0x687d63:c.instructions+=2;goto B687d63;
case 0x687d65:c.instructions+=1;goto B687d65;
case 0x687d6a:goto L687d6a;
case 0x687d6c:c.instructions+=2;goto B687d6c;
case 0x687d6e:c.instructions+=1;goto B687d6e;
case 0x687d73:goto L687d73;
case 0x687d75:c.instructions+=2;goto B687d75;
case 0x687d77:c.instructions+=1;goto B687d77;
case 0x687d7c:goto L687d7c;
case 0x687d7e:c.instructions+=2;goto B687d7e;
case 0x687d80:c.instructions+=1;goto B687d80;
case 0x687d85:goto L687d85;
case 0x687d87:c.instructions+=2;goto B687d87;
case 0x687d89:c.instructions+=1;goto B687d89;
case 0x687d8e:goto L687d8e;
case 0x687d90:c.instructions+=2;goto B687d90;
case 0x687d92:c.instructions+=1;goto B687d92;
case 0x687d97:goto L687d97;
case 0x687d99:c.instructions+=2;goto B687d99;
case 0x687d9b:c.instructions+=1;goto B687d9b;
case 0x687da0:goto L687da0;
case 0x687da2:c.instructions+=2;goto B687da2;
case 0x687da4:c.instructions+=1;goto B687da4;
case 0x687da9:goto L687da9;
case 0x687dab:c.instructions+=2;goto B687dab;
case 0x687dad:c.instructions+=1;goto B687dad;
case 0x687db2:goto L687db2;
case 0x687db4:c.instructions+=2;goto B687db4;
case 0x687db6:c.instructions+=1;goto B687db6;
case 0x687dbb:goto L687dbb;
case 0x687dbd:c.instructions+=2;goto B687dbd;
case 0x687dbf:c.instructions+=1;goto B687dbf;
case 0x687dc4:goto L687dc4;
case 0x687dc6:c.instructions+=2;goto B687dc6;
case 0x687dc8:c.instructions+=1;goto B687dc8;
case 0x687dcd:goto L687dcd;
case 0x687dcf:c.instructions+=2;goto B687dcf;
case 0x687dd1:c.instructions+=1;goto B687dd1;
case 0x687dd6:goto L687dd6;
case 0x687dd8:c.instructions+=2;goto B687dd8;
case 0x687dda:c.instructions+=1;goto B687dda;
case 0x687ddf:goto L687ddf;
case 0x687de1:c.instructions+=2;goto B687de1;
case 0x687de3:c.instructions+=1;goto B687de3;
case 0x687de8:goto L687de8;
case 0x687dea:c.instructions+=2;goto B687dea;
case 0x687dec:c.instructions+=1;goto B687dec;
case 0x687df1:goto L687df1;
case 0x687df3:c.instructions+=2;goto B687df3;
case 0x687df5:c.instructions+=1;goto B687df5;
case 0x687dfa:goto L687dfa;
case 0x687dfc:c.instructions+=2;goto B687dfc;
case 0x687dfe:c.instructions+=1;goto B687dfe;
case 0x687e03:goto L687e03;
case 0x687e05:c.instructions+=2;goto B687e05;
case 0x687e07:c.instructions+=1;goto B687e07;
case 0x687e0c:goto L687e0c;
case 0x687e0e:c.instructions+=2;goto B687e0e;
case 0x687e10:c.instructions+=1;goto B687e10;
case 0x687e15:goto L687e15;
case 0x687e17:c.instructions+=2;goto B687e17;
case 0x687e19:c.instructions+=1;goto B687e19;
case 0x687e1e:goto L687e1e;
case 0x687e20:c.instructions+=2;goto B687e20;
case 0x687e22:c.instructions+=1;goto B687e22;
case 0x687e27:goto L687e27;
case 0x687e29:c.instructions+=2;goto B687e29;
case 0x687e2b:c.instructions+=1;goto B687e2b;
case 0x687e30:goto L687e30;
case 0x687e32:c.instructions+=2;goto B687e32;
case 0x687e34:c.instructions+=1;goto B687e34;
case 0x687e39:goto L687e39;
case 0x687e3b:c.instructions+=2;goto B687e3b;
case 0x687e3d:c.instructions+=1;goto B687e3d;
case 0x687e42:goto L687e42;
case 0x687e44:c.instructions+=2;goto B687e44;
case 0x687e46:c.instructions+=1;goto B687e46;
case 0x687e4b:goto L687e4b;
case 0x687e4d:c.instructions+=2;goto B687e4d;
case 0x687e4f:c.instructions+=1;goto B687e4f;
case 0x687e54:goto L687e54;
case 0x687e56:c.instructions+=2;goto B687e56;
case 0x687e58:c.instructions+=1;goto B687e58;
case 0x687e5d:goto L687e5d;
case 0x687e5f:c.instructions+=2;goto B687e5f;
case 0x687e61:c.instructions+=1;goto B687e61;
case 0x687e66:goto L687e66;
case 0x687e68:c.instructions+=2;goto B687e68;
case 0x687e6a:c.instructions+=1;goto B687e6a;
case 0x687e6f:goto L687e6f;
case 0x687e71:c.instructions+=2;goto B687e71;
case 0x687e73:c.instructions+=1;goto B687e73;
case 0x687e78:goto L687e78;
case 0x687e7a:c.instructions+=2;goto B687e7a;
case 0x687e7c:c.instructions+=1;goto B687e7c;
case 0x687e81:goto L687e81;
case 0x687e83:c.instructions+=2;goto B687e83;
case 0x687e85:c.instructions+=1;goto B687e85;
case 0x687e8a:goto L687e8a;
case 0x687e8c:c.instructions+=2;goto B687e8c;
case 0x687e8e:c.instructions+=1;goto B687e8e;
case 0x687e93:goto L687e93;
case 0x687e95:c.instructions+=2;goto B687e95;
case 0x687e97:c.instructions+=1;goto B687e97;
case 0x687e9c:goto L687e9c;
case 0x687e9e:c.instructions+=2;goto B687e9e;
case 0x687ea0:c.instructions+=1;goto B687ea0;
case 0x687ea5:goto L687ea5;
case 0x687ea7:c.instructions+=2;goto B687ea7;
case 0x687ea9:c.instructions+=1;goto B687ea9;
case 0x687eae:goto L687eae;
case 0x687eb0:c.instructions+=2;goto B687eb0;
case 0x687eb2:c.instructions+=1;goto B687eb2;
case 0x687eb7:goto L687eb7;
case 0x687eb9:c.instructions+=2;goto B687eb9;
case 0x687ebb:c.instructions+=1;goto B687ebb;
case 0x687ec0:goto L687ec0;
case 0x687ec2:c.instructions+=2;goto B687ec2;
case 0x687ec4:c.instructions+=1;goto B687ec4;
case 0x687ec6:goto L687ec6;
case 0x687ec8:c.instructions+=2;goto B687ec8;
case 0x687eca:c.instructions+=1;goto B687eca;
case 0x687ecc:goto L687ecc;
case 0x687ece:c.instructions+=2;goto B687ece;
case 0x687ed0:c.instructions+=1;goto B687ed0;
case 0x687ed2:goto L687ed2;
case 0x687ed4:c.instructions+=2;goto B687ed4;
case 0x687ed6:c.instructions+=1;goto B687ed6;
case 0x687ed8:goto L687ed8;
case 0x687eda:c.instructions+=2;goto B687eda;
case 0x687edc:c.instructions+=1;goto B687edc;
case 0x687ede:goto L687ede;
case 0x687ee0:c.instructions+=2;goto B687ee0;
case 0x687ee2:c.instructions+=1;goto B687ee2;
case 0x687ee4:goto L687ee4;
case 0x687ee6:c.instructions+=2;goto B687ee6;
case 0x687ee8:c.instructions+=1;goto B687ee8;
case 0x687eea:goto L687eea;
case 0x687eec:c.instructions+=2;goto B687eec;
case 0x687eee:c.instructions+=1;goto B687eee;
case 0x687ef0:goto L687ef0;
case 0x687ef2:c.instructions+=2;goto B687ef2;
case 0x687ef4:c.instructions+=1;goto B687ef4;
case 0x687ef6:goto L687ef6;
case 0x687ef8:c.instructions+=2;goto B687ef8;
case 0x687efa:c.instructions+=1;goto B687efa;
case 0x687efc:goto L687efc;
case 0x687efe:c.instructions+=2;goto B687efe;
case 0x687f00:c.instructions+=1;goto B687f00;
case 0x687f02:goto L687f02;
case 0x687f04:c.instructions+=2;goto B687f04;
case 0x687f06:c.instructions+=1;goto B687f06;
case 0x687f08:goto L687f08;
case 0x687f0a:c.instructions+=2;goto B687f0a;
case 0x687f0c:c.instructions+=1;goto B687f0c;
case 0x687f0e:goto L687f0e;
case 0x687f10:c.instructions+=2;goto B687f10;
case 0x687f12:c.instructions+=1;goto B687f12;
case 0x687f14:goto L687f14;
case 0x687f16:c.instructions+=2;goto B687f16;
case 0x687f18:c.instructions+=1;goto B687f18;
case 0x687f1a:goto L687f1a;
case 0x687f1c:c.instructions+=2;goto B687f1c;
case 0x687f1e:c.instructions+=1;goto B687f1e;
case 0x687f20:goto L687f20;
case 0x687f22:c.instructions+=2;goto B687f22;
case 0x687f24:c.instructions+=1;goto B687f24;
case 0x687f26:goto L687f26;
case 0x687f28:c.instructions+=2;goto B687f28;
case 0x687f2a:c.instructions+=1;goto B687f2a;
case 0x687f2c:goto L687f2c;
case 0x687f2e:c.instructions+=2;goto B687f2e;
case 0x687f30:c.instructions+=1;goto B687f30;
case 0x687f32:goto L687f32;
case 0x687f34:c.instructions+=2;goto B687f34;
case 0x687f36:c.instructions+=1;goto B687f36;
case 0x687f38:goto L687f38;
case 0x687f3a:c.instructions+=2;goto B687f3a;
case 0x687f3c:c.instructions+=1;goto B687f3c;
case 0x687f3e:goto L687f3e;
case 0x687f40:c.instructions+=1;goto B687f40;
case 0x687f42:goto L687f42;
case 0x687f48:c.instructions+=1;goto B687f48;
case 0x687f4d:goto L687f4d;
case 0x687f52:c.instructions+=8;goto B687f52;
case 0x687f59:c.instructions+=7;goto B687f59;
case 0x687f5b:c.instructions+=6;goto B687f5b;
case 0x687f5e:c.instructions+=5;goto B687f5e;
case 0x687f63:c.instructions+=4;goto B687f63;
case 0x687f66:c.instructions+=3;goto B687f66;
case 0x687f6c:c.instructions+=2;goto B687f6c;
case 0x687f6e:c.instructions+=1;goto B687f6e;
case 0x687f70:goto L687f70;
case 0x687f72:c.instructions+=1;goto B687f72;
case 0x687f74:goto L687f74;
case 0x687f75:c.instructions+=12;goto B687f75;
case 0x687f76:c.instructions+=11;goto B687f76;
case 0x687f78:c.instructions+=10;goto B687f78;
case 0x687f7d:c.instructions+=9;goto B687f7d;
case 0x687f7e:c.instructions+=8;goto B687f7e;
case 0x687f81:c.instructions+=7;goto B687f81;
case 0x687f88:c.instructions+=6;goto B687f88;
case 0x687f8d:c.instructions+=5;goto B687f8d;
case 0x687f93:c.instructions+=4;goto B687f93;
case 0x687f95:c.instructions+=3;goto B687f95;
case 0x687f9a:c.instructions+=2;goto B687f9a;
case 0x687f9c:c.instructions+=1;goto B687f9c;
case 0x687f9e:goto L687f9e;
case 0x687fa4:c.instructions+=1;goto B687fa4;
case 0x687fa9:goto L687fa9;
case 0x687fab:c.instructions+=2;goto B687fab;
case 0x687fb0:c.instructions+=1;goto B687fb0;
case 0x687fb2:goto L687fb2;
case 0x687fb4:c.instructions+=2;goto B687fb4;
case 0x687fb9:c.instructions+=1;goto B687fb9;
case 0x687fbb:goto L687fbb;
case 0x687fc1:goto L687fc1;
case 0x687fc3:c.instructions+=1;goto B687fc3;
case 0x687fc8:goto L687fc8;
case 0x687fcb:c.instructions+=3;goto B687fcb;
case 0x687fd2:c.instructions+=2;goto B687fd2;
case 0x687fd4:c.instructions+=1;goto B687fd4;
case 0x687fd6:goto L687fd6;
case 0x687fd8:c.instructions+=1;goto B687fd8;
case 0x687fda:goto L687fda;
case 0x687fe0:c.instructions+=1;goto B687fe0;
case 0x687fe2:goto L687fe2;
case 0x687fe4:c.instructions+=3;goto B687fe4;
case 0x687feb:c.instructions+=2;goto B687feb;
case 0x687fed:c.instructions+=1;goto B687fed;
case 0x687fef:goto L687fef;
case 0x687ff6:c.instructions+=1;goto B687ff6;
case 0x687ff8:goto L687ff8;
case 0x687fff:goto L687fff;
default:missing_instruction(c.pc);}
B687001:L687001:{c.instructions+=6;NFSU2_TR(0x687001);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687002:{NFSU2_TR(0x687002);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687003:{NFSU2_TR(0x687003);
__builtin_memmove((R+12),(R+4),4);
}
B687005:{NFSU2_TR(0x687005);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687006:{NFSU2_TR(0x687006);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687009:{NFSU2_TR(0x687009);
{goto L68701b;}
}
B68700b:L68700b:{c.instructions+=3;NFSU2_TR(0x68700b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B68700d:{NFSU2_TR(0x68700d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687010:{NFSU2_TR(0x687010);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L687042;}}
}
B687012:L687012:{c.instructions+=2;NFSU2_TR(0x687012);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xaull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B687015:{NFSU2_TR(0x687015);
if(r1(R+518)){{goto L687039;}}
}
B687017:L687017:{c.instructions+=3;NFSU2_TR(0x687017);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B687018:{NFSU2_TR(0x687018);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B687019:{NFSU2_TR(0x687019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687036;}}
}
B68701b:L68701b:{c.instructions+=3;NFSU2_TR(0x68701b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68701e:{NFSU2_TR(0x68701e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68701f:{NFSU2_TR(0x68701f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687024ull));
TAIL_STATIC(0x6472a1u,647);
}
B687024:L687024:{c.instructions+=2;NFSU2_TR(0x687024);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B687026:{NFSU2_TR(0x687026);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68700bu);}goto L68700b;}}
}
B687028:L687028:{c.instructions+=4;NFSU2_TR(0x687028);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B68702a:{NFSU2_TR(0x68702a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B68702b:{NFSU2_TR(0x68702b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68702e:{NFSU2_TR(0x68702e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687031:L687031:{c.instructions+=2;NFSU2_TR(0x687031);
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
B687034:{NFSU2_TR(0x687034);
{goto L68703e;}
}
B687036:L687036:{c.instructions+=2;NFSU2_TR(0x687036);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B687037:{NFSU2_TR(0x687037);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687031u);}goto L687031;}}
}
B687039:L687039:{c.instructions+=1;NFSU2_TR(0x687039);
w4(R+0,u32(0x110ull));
}
B68703e:L68703e:{c.instructions+=4;NFSU2_TR(0x68703e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68703f:{NFSU2_TR(0x68703f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687040:{NFSU2_TR(0x687040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B687041:{NFSU2_TR(0x687041);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B687042:L687042:{c.instructions+=1;NFSU2_TR(0x687042);
if(r1(R+518)){{goto L687075;}}
}
B687044:L687044:{c.instructions+=2;NFSU2_TR(0x687044);
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
B687046:{NFSU2_TR(0x687046);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687039u);}goto L687039;}}
}
B687048:L687048:{c.instructions+=4;NFSU2_TR(0x687048);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B68704a:{NFSU2_TR(0x68704a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B68704b:{NFSU2_TR(0x68704b);
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
B68704d:{NFSU2_TR(0x68704d);
if(r1(R+518)){{goto L687069;}}
}
B68704f:L68704f:{c.instructions+=1;NFSU2_TR(0x68704f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687039u);}goto L687039;}}
}
B687051:L687051:{c.instructions+=2;NFSU2_TR(0x687051);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B687054:{NFSU2_TR(0x687054);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L687062;}}
}
B687056:L687056:{c.instructions+=2;NFSU2_TR(0x687056);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B687059:{NFSU2_TR(0x687059);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687039u);}goto L687039;}}
}
B68705b:L68705b:{c.instructions+=2;NFSU2_TR(0x68705b);
w4(R+0,u32(0x10full));
}
B687060:{NFSU2_TR(0x687060);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B687062:L687062:{c.instructions+=2;NFSU2_TR(0x687062);
w4(R+0,u32(0x10eull));
}
B687067:{NFSU2_TR(0x687067);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B687069:L687069:{c.instructions+=2;NFSU2_TR(0x687069);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
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
B68706d:{NFSU2_TR(0x68706d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687039u);}goto L687039;}}
}
B68706f:L68706f:{c.instructions+=2;NFSU2_TR(0x68706f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B687073:{NFSU2_TR(0x687073);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B687075:L687075:{c.instructions+=6;NFSU2_TR(0x687075);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687078:{NFSU2_TR(0x687078);
w4(R+28,u32(0x7ba548ull));
}
B68707d:{NFSU2_TR(0x68707d);
__builtin_memmove((R+24),(R+0),4);
}
B68707f:{NFSU2_TR(0x68707f);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687081:{NFSU2_TR(0x687081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687082:{NFSU2_TR(0x687082);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B687084:L687084:{c.instructions+=1;NFSU2_TR(0x687084);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L687086;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687084u);}goto L687084;}}
}
B687086:L687086:{c.instructions+=1;NFSU2_TR(0x687086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68708f;}}
}
B687088:L687088:{c.instructions+=2;NFSU2_TR(0x687088);
w4(R+0,u32(0x101ull));
}
B68708d:{NFSU2_TR(0x68708d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B68708f:L68708f:{c.instructions+=5;NFSU2_TR(0x68708f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687091:{NFSU2_TR(0x687091);
w4(R+28,u32(0x7b4464ull));
}
B687096:{NFSU2_TR(0x687096);
__builtin_memmove((R+24),(R+0),4);
}
B687098:{NFSU2_TR(0x687098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687099:{NFSU2_TR(0x687099);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68709b:L68709b:{c.instructions+=1;NFSU2_TR(0x68709b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68709d;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68709bu);}goto L68709b;}}
}
B68709d:L68709d:{c.instructions+=1;NFSU2_TR(0x68709d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6870a6;}}
}
B68709f:L68709f:{c.instructions+=2;NFSU2_TR(0x68709f);
w4(R+0,u32(0x111ull));
}
B6870a4:{NFSU2_TR(0x6870a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B6870a6:L6870a6:{c.instructions+=5;NFSU2_TR(0x6870a6);
__builtin_memmove((R+24),(R+0),4);
}
B6870a8:{NFSU2_TR(0x6870a8);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6870aa:{NFSU2_TR(0x6870aa);
w4(R+28,u32(0x7b4584ull));
}
B6870af:{NFSU2_TR(0x6870af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6870b0:{NFSU2_TR(0x6870b0);
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
B6870b2:L6870b2:{c.instructions+=1;NFSU2_TR(0x6870b2);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6870b4;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6870b2u);}goto L6870b2;}}
}
B6870b4:L6870b4:{c.instructions+=1;NFSU2_TR(0x6870b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6870bd;}}
}
B6870b6:L6870b6:{c.instructions+=2;NFSU2_TR(0x6870b6);
w4(R+0,u32(0x112ull));
}
B6870bb:{NFSU2_TR(0x6870bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B6870bd:L6870bd:{c.instructions+=2;NFSU2_TR(0x6870bd);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6870c1:{NFSU2_TR(0x6870c1);
if(r1(R+518)){{goto L6870d3;}}
}
B6870c3:L6870c3:{c.instructions+=4;NFSU2_TR(0x6870c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6870c6:{NFSU2_TR(0x6870c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6870c7:{NFSU2_TR(0x6870c7);
__builtin_memmove((R+4),(R+12),4);
}
B6870c9:{NFSU2_TR(0x6870c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6870ceull));
TAIL_STATIC(0x685165u,685);
}
B6870ce:L6870ce:{c.instructions+=1;NFSU2_TR(0x6870ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B6870d3:L6870d3:{c.instructions+=2;NFSU2_TR(0x6870d3);
w4(R+0,u32(0x10dull));
}
B6870d8:{NFSU2_TR(0x6870d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68703eu);}goto L68703e;}
}
B6870dd:L6870dd:{c.instructions+=25;NFSU2_TR(0x6870dd);
__builtin_memmove((R+28),(R+28),4);
}
B6870df:{NFSU2_TR(0x6870df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6870e0:{NFSU2_TR(0x6870e0);
__builtin_memmove((R+20),(R+16),4);
}
B6870e2:{NFSU2_TR(0x6870e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B6870e5:{NFSU2_TR(0x6870e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6870e8:{NFSU2_TR(0x6870e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6870eb:{NFSU2_TR(0x6870eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6870ec:{NFSU2_TR(0x6870ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6870ee:{NFSU2_TR(0x6870ee);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6870f0:{NFSU2_TR(0x6870f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6870f1:{NFSU2_TR(0x6870f1);
__builtin_memmove((R+24),(R+4),4);
}
B6870f3:{NFSU2_TR(0x6870f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6870f4:{NFSU2_TR(0x6870f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6870f7:{NFSU2_TR(0x6870f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6870fa:{NFSU2_TR(0x6870fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6870fd:{NFSU2_TR(0x6870fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687100:{NFSU2_TR(0x687100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687103:{NFSU2_TR(0x687103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687106:{NFSU2_TR(0x687106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68710d:{NFSU2_TR(0x68710d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687110:{NFSU2_TR(0x687110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687113:{NFSU2_TR(0x687113);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687116:{NFSU2_TR(0x687116);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687119:{NFSU2_TR(0x687119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68711c:{NFSU2_TR(0x68711c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68716e;}}
}
B68711e:L68711e:{c.instructions+=3;NFSU2_TR(0x68711e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687121:{NFSU2_TR(0x687121);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687123:{NFSU2_TR(0x687123);
if(r1(R+518)){{goto L6874e2;}}
}
B687129:L687129:{c.instructions+=3;NFSU2_TR(0x687129);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68712f:{NFSU2_TR(0x68712f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687132:{NFSU2_TR(0x687132);
if(r1(R+518)){{goto L68756a;}}
}
B687138:L687138:{c.instructions+=2;NFSU2_TR(0x687138);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68713b:{NFSU2_TR(0x68713b);
if(r1(R+518)){{goto L6874e2;}}
}
B687141:L687141:{c.instructions+=2;NFSU2_TR(0x687141);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687144:{NFSU2_TR(0x687144);
if(r1(R+518)){{goto L6874e2;}}
}
B68714a:L68714a:{c.instructions+=2;NFSU2_TR(0x68714a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68714d:{NFSU2_TR(0x68714d);
if(r1(R+518)){{goto L6874e2;}}
}
B687153:L687153:{c.instructions+=2;NFSU2_TR(0x687153);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687156:{NFSU2_TR(0x687156);
if(r1(R+518)){{goto L6874e2;}}
}
B68715c:L68715c:{c.instructions+=2;NFSU2_TR(0x68715c);
u8 U[4];
w4(U+0,u32(0x7ba610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687161:{NFSU2_TR(0x687161);
{goto L6875c0;}
}
B687166:L687166:{c.instructions+=2;NFSU2_TR(0x687166);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B687168:{NFSU2_TR(0x687168);
if(r1(R+518)){{goto L687174;}}
}
B68716a:L68716a:{c.instructions+=2;NFSU2_TR(0x68716a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B68716b:{NFSU2_TR(0x68716b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68716e:L68716e:{c.instructions+=3;NFSU2_TR(0x68716e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B687170:{NFSU2_TR(0x687170);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B687172:{NFSU2_TR(0x687172);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687166u);}goto L687166;}}
}
B687174:L687174:{c.instructions+=4;NFSU2_TR(0x687174);
__builtin_memmove((R+0),(R+8),4);
}
B687176:{NFSU2_TR(0x687176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B687179:{NFSU2_TR(0x687179);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xfull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68717c:{NFSU2_TR(0x68717c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6874b3;}}
}
B687182:L687182:{c.instructions+=5;NFSU2_TR(0x687182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B687185:{NFSU2_TR(0x687185);
__builtin_memmove((R+4),(R+0),4);
}
B687187:{NFSU2_TR(0x687187);
__builtin_memmove((R+12),(R+4),4);
}
B687189:{NFSU2_TR(0x687189);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B68718c:{NFSU2_TR(0x68718c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68718f:L68718f:{c.instructions+=1;NFSU2_TR(0x68718f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L687191;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68718fu);}goto L68718f;}
}
B687191:L687191:{c.instructions+=4;NFSU2_TR(0x687191);
__builtin_memmove((R+4),(R+12),4);
}
B687193:{NFSU2_TR(0x687193);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B687196:{NFSU2_TR(0x687196);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B687198:{NFSU2_TR(0x687198);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B68719a:L68719a:{c.instructions+=1;NFSU2_TR(0x68719a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68719c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68719au);}goto L68719a;}
}
B68719c:L68719c:{c.instructions+=2;NFSU2_TR(0x68719c);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6871a0:{NFSU2_TR(0x6871a0);
if(r1(R+518)){{goto L6871a6;}}
}
B6871a2:L6871a2:{c.instructions+=2;NFSU2_TR(0x6871a2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6871a3:{NFSU2_TR(0x6871a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6871a6:L6871a6:{c.instructions+=3;NFSU2_TR(0x6871a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6871a9:{NFSU2_TR(0x6871a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6871ac:{NFSU2_TR(0x6871ac);
if(r1(R+518)){{goto L6873dc;}}
}
B6871b2:L6871b2:{c.instructions+=3;NFSU2_TR(0x6871b2);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6871b5:{NFSU2_TR(0x6871b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6871b8:{NFSU2_TR(0x6871b8);
if(r1(R+518)){{goto L6871dd;}}
}
B6871ba:L6871ba:{c.instructions+=3;NFSU2_TR(0x6871ba);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6871bd:{NFSU2_TR(0x6871bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6871be:{NFSU2_TR(0x6871be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6871c3ull));
TAIL_STATIC(0x75defau,75d);
}
B6871c3:L6871c3:{c.instructions+=3;NFSU2_TR(0x6871c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6871c5:{NFSU2_TR(0x6871c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6871c6:{NFSU2_TR(0x6871c6);
if(r1(R+518)){{goto L6871cd;}}
}
B6871c8:L6871c8:{c.instructions+=3;NFSU2_TR(0x6871c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6871c9:{NFSU2_TR(0x6871c9);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6871cb:{NFSU2_TR(0x6871cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6871bau);}goto L6871ba;}}
}
B6871cd:L6871cd:{c.instructions+=2;NFSU2_TR(0x6871cd);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6871cf:{NFSU2_TR(0x6871cf);
if(r1(R+518)){{goto L6871dd;}}
}
B6871d1:L6871d1:{c.instructions+=2;NFSU2_TR(0x6871d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6871d2:{NFSU2_TR(0x6871d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6871d7ull));
TAIL_STATIC(0x75d65bu,75d);
}
B6871d7:L6871d7:{c.instructions+=3;NFSU2_TR(0x6871d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6871d8:{NFSU2_TR(0x6871d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6871db:{NFSU2_TR(0x6871db);
{goto L6871e1;}
}
B6871dd:L6871dd:{c.instructions+=1;NFSU2_TR(0x6871dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6871e1:L6871e1:{c.instructions+=2;NFSU2_TR(0x6871e1);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6871e3:{NFSU2_TR(0x6871e3);
if(r1(R+518)){{goto L6871e8;}}
}
B6871e5:L6871e5:{c.instructions+=2;NFSU2_TR(0x6871e5);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6871e7:{NFSU2_TR(0x6871e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6871e8:L6871e8:{c.instructions+=3;NFSU2_TR(0x6871e8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6871ea:{NFSU2_TR(0x6871ea);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6871ec:{NFSU2_TR(0x6871ec);
if(r1(R+518)){{goto L68720b;}}
}
B6871ee:L6871ee:{c.instructions+=3;NFSU2_TR(0x6871ee);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6871f1:{NFSU2_TR(0x6871f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6871f2:{NFSU2_TR(0x6871f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6871f7ull));
TAIL_STATIC(0x75df39u,75d);
}
B6871f7:L6871f7:{c.instructions+=3;NFSU2_TR(0x6871f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6871f9:{NFSU2_TR(0x6871f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6871fa:{NFSU2_TR(0x6871fa);
if(r1(R+518)){{goto L687203;}}
}
B6871fc:L6871fc:{c.instructions+=4;NFSU2_TR(0x6871fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6871fd:{NFSU2_TR(0x6871fd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6871ff:{NFSU2_TR(0x6871ff);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B687201:{NFSU2_TR(0x687201);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6871eeu);}goto L6871ee;}}
}
B687203:L687203:{c.instructions+=2;NFSU2_TR(0x687203);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B687205:{NFSU2_TR(0x687205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6874b0;}}
}
B68720b:L68720b:{c.instructions+=2;NFSU2_TR(0x68720b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68720d:{NFSU2_TR(0x68720d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B68720f:L68720f:{c.instructions+=2;NFSU2_TR(0x68720f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7b9500ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B687215:{NFSU2_TR(0x687215);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B687218:L687218:{c.instructions+=4;NFSU2_TR(0x687218);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B68721a:{NFSU2_TR(0x68721a);
__builtin_memmove((R+4),(R+12),1);
}
B68721c:{NFSU2_TR(0x68721c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B68721e:{NFSU2_TR(0x68721e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68723e;}}
}
B687220:L687220:{c.instructions+=3;NFSU2_TR(0x687220);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B687222:{NFSU2_TR(0x687222);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B687224:{NFSU2_TR(0x687224);
if(r1(R+518)){{goto L68723a;}}
}
B687226:L687226:{c.instructions+=4;NFSU2_TR(0x687226);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B687229:{NFSU2_TR(0x687229);
__builtin_memmove((R+4),(R+12),1);
}
B68722b:{NFSU2_TR(0x68722b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B68722e:{NFSU2_TR(0x68722e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68723e;}}
}
B687230:L687230:{c.instructions+=7;NFSU2_TR(0x687230);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B687231:{NFSU2_TR(0x687231);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B687232:{NFSU2_TR(0x687232);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B687233:{NFSU2_TR(0x687233);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B687235:{NFSU2_TR(0x687235);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B687236:{NFSU2_TR(0x687236);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B687238:{NFSU2_TR(0x687238);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687218u);}goto L687218;}}
}
B68723a:L68723a:{c.instructions+=2;NFSU2_TR(0x68723a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68723c:{NFSU2_TR(0x68723c);
{goto L687245;}
}
B68723e:L68723e:{c.instructions+=3;NFSU2_TR(0x68723e);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B687240:{NFSU2_TR(0x687240);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B687243:{NFSU2_TR(0x687243);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B687245:L687245:{c.instructions+=2;NFSU2_TR(0x687245);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687247:{NFSU2_TR(0x687247);
if(r1(R+518)){{goto L687255;}}
}
B687249:L687249:{c.instructions+=4;NFSU2_TR(0x687249);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x48ull))));
}
B68724c:{NFSU2_TR(0x68724c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B68724d:{NFSU2_TR(0x68724d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x5e8ull))));
}
B687253:{NFSU2_TR(0x687253);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68720fu);}goto L68720f;}}
}
B687255:L687255:{c.instructions+=3;NFSU2_TR(0x687255);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687258:{NFSU2_TR(0x687258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68725b:{NFSU2_TR(0x68725b);
if(r1(R+518)){{goto L6874b3;}}
}
B687261:L687261:{c.instructions+=6;NFSU2_TR(0x687261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B687264:{NFSU2_TR(0x687264);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B687267:{NFSU2_TR(0x687267);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68726a:{NFSU2_TR(0x68726a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b9508ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B687271:{NFSU2_TR(0x687271);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687274:{NFSU2_TR(0x687274);
if(r1(R+518)){{goto L6874b3;}}
}
B68727a:L68727a:{c.instructions+=2;NFSU2_TR(0x68727a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68727c:{NFSU2_TR(0x68727c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6872a7;}}
}
B68727e:L68727e:{c.instructions+=3;NFSU2_TR(0x68727e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B687282:{NFSU2_TR(0x687282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B687285:{NFSU2_TR(0x687285);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687297;}}
}
B687287:L687287:{c.instructions+=2;NFSU2_TR(0x687287);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687289:{NFSU2_TR(0x687289);
if(r1(R+518)){{goto L6874b3;}}
}
B68728f:L68728f:{c.instructions+=3;NFSU2_TR(0x68728f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B687292:{NFSU2_TR(0x687292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687295:{NFSU2_TR(0x687295);
{goto L6872a3;}
}
B687297:L687297:{c.instructions+=2;NFSU2_TR(0x687297);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687299:{NFSU2_TR(0x687299);
if(r1(R+518)){{goto L6872a3;}}
}
B68729b:L68729b:{c.instructions+=3;NFSU2_TR(0x68729b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68729e:{NFSU2_TR(0x68729e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6872a1:{NFSU2_TR(0x6872a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6872a3:L6872a3:{c.instructions+=2;NFSU2_TR(0x6872a3);
w4(R+0,u32(0-u32(r4(R+0))));
}
B6872a5:{NFSU2_TR(0x6872a5);
{goto L6872b0;}
}
B6872a7:L6872a7:{c.instructions+=2;NFSU2_TR(0x6872a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6872aa:{NFSU2_TR(0x6872aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6874b3;}}
}
B6872b0:L6872b0:{c.instructions+=2;NFSU2_TR(0x6872b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6872b4:{NFSU2_TR(0x6872b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6872c3;}}
}
B6872b6:L6872b6:{c.instructions+=2;NFSU2_TR(0x6872b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6872b8:{NFSU2_TR(0x6872b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6874b3;}}
}
B6872be:L6872be:{c.instructions+=2;NFSU2_TR(0x6872be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6872c1:{NFSU2_TR(0x6872c1);
{goto L6872d8;}
}
B6872c3:L6872c3:{c.instructions+=3;NFSU2_TR(0x6872c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6872c6:{NFSU2_TR(0x6872c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6872c8:{NFSU2_TR(0x6872c8);
if(r1(R+518)){{goto L6872cf;}}
}
B6872ca:L6872ca:{c.instructions+=2;NFSU2_TR(0x6872ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6872cd:{NFSU2_TR(0x6872cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6872d8;}}
}
B6872cf:L6872cf:{c.instructions+=2;NFSU2_TR(0x6872cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6872d2:{NFSU2_TR(0x6872d2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6874b3;}}
}
B6872d8:L6872d8:{c.instructions+=10;NFSU2_TR(0x6872d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6872db:{NFSU2_TR(0x6872db);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6872de:{NFSU2_TR(0x6872de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b9504ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6872e4:{NFSU2_TR(0x6872e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b9544ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6872ea:{NFSU2_TR(0x6872ea);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6872ec:{NFSU2_TR(0x6872ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6872ef:{NFSU2_TR(0x6872ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6872f0:{NFSU2_TR(0x6872f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6872f2:{NFSU2_TR(0x6872f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6872f5:{NFSU2_TR(0x6872f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687349;}}
}
B6872f7:L6872f7:{c.instructions+=3;NFSU2_TR(0x6872f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x1fffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6872fe:{NFSU2_TR(0x6872fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x800ull))));
}
B687305:{NFSU2_TR(0x687305);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L68730c;}}
}
B687307:L687307:{c.instructions+=2;NFSU2_TR(0x687307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68730a:{NFSU2_TR(0x68730a);
{goto L687340;}
}
B68730c:L68730c:{c.instructions+=2;NFSU2_TR(0x68730c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1000ull))));
}
B687313:{NFSU2_TR(0x687313);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L68731e;}}
}
B687315:L687315:{c.instructions+=2;NFSU2_TR(0x687315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B68731c:{NFSU2_TR(0x68731c);
{goto L687340;}
}
B68731e:L68731e:{c.instructions+=2;NFSU2_TR(0x68731e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1800ull))));
}
B687325:{NFSU2_TR(0x687325);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L687330;}}
}
B687327:L687327:{c.instructions+=2;NFSU2_TR(0x687327);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B68732e:{NFSU2_TR(0x68732e);
{goto L687340;}
}
B687330:L687330:{c.instructions+=2;NFSU2_TR(0x687330);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2000ull))));
}
B687337:{NFSU2_TR(0x687337);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L687340;}}
}
B687339:L687339:{c.instructions+=1;NFSU2_TR(0x687339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B687340:L687340:{c.instructions+=2;NFSU2_TR(0x687340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x7ffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B687347:{NFSU2_TR(0x687347);
{goto L68739a;}
}
B687349:L687349:{c.instructions+=2;NFSU2_TR(0x687349);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68734c:{NFSU2_TR(0x68734c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68735a;}}
}
B68734e:L68734e:{c.instructions+=1;NFSU2_TR(0x68734e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687355:L687355:{c.instructions+=2;NFSU2_TR(0x687355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687358:{NFSU2_TR(0x687358);
{goto L68739a;}
}
B68735a:L68735a:{c.instructions+=2;NFSU2_TR(0x68735a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68735d:{NFSU2_TR(0x68735d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68736b;}}
}
B68735f:L68735f:{c.instructions+=3;NFSU2_TR(0x68735f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687366:{NFSU2_TR(0x687366);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687369:{NFSU2_TR(0x687369);
{goto L68739a;}
}
B68736b:L68736b:{c.instructions+=2;NFSU2_TR(0x68736b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68736e:{NFSU2_TR(0x68736e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687379;}}
}
B687370:L687370:{c.instructions+=2;NFSU2_TR(0x687370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687377:{NFSU2_TR(0x687377);
{goto L687393;}
}
B687379:L687379:{c.instructions+=2;NFSU2_TR(0x687379);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68737c:{NFSU2_TR(0x68737c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687387;}}
}
B68737e:L68737e:{c.instructions+=2;NFSU2_TR(0x68737e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687385:{NFSU2_TR(0x687385);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687355u);}goto L687355;}
}
B687387:L687387:{c.instructions+=2;NFSU2_TR(0x687387);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68738a:{NFSU2_TR(0x68738a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68739a;}}
}
B68738c:L68738c:{c.instructions+=1;NFSU2_TR(0x68738c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687393:L687393:{c.instructions+=1;NFSU2_TR(0x687393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68739a:L68739a:{c.instructions+=3;NFSU2_TR(0x68739a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68739d:{NFSU2_TR(0x68739d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6873a0:{NFSU2_TR(0x6873a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6873ae;}}
}
B6873a2:L6873a2:{c.instructions+=2;NFSU2_TR(0x6873a2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6873a5:{NFSU2_TR(0x6873a5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6873ae;}}
}
B6873a7:L6873a7:{c.instructions+=1;NFSU2_TR(0x6873a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6873ae:L6873ae:{c.instructions+=2;NFSU2_TR(0x6873ae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6873b1:{NFSU2_TR(0x6873b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6873b8;}}
}
B6873b3:L6873b3:{c.instructions+=2;NFSU2_TR(0x6873b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6873b6:{NFSU2_TR(0x6873b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6873c2;}}
}
B6873b8:L6873b8:{c.instructions+=2;NFSU2_TR(0x6873b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6873bb:{NFSU2_TR(0x6873bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6873c9;}}
}
B6873bd:L6873bd:{c.instructions+=2;NFSU2_TR(0x6873bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6873c0:{NFSU2_TR(0x6873c0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6873c9;}}
}
B6873c2:L6873c2:{c.instructions+=1;NFSU2_TR(0x6873c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6873c9:L6873c9:{c.instructions+=1;NFSU2_TR(0x6873c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6873cc:L6873cc:{c.instructions+=2;NFSU2_TR(0x6873cc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6873ce:{NFSU2_TR(0x6873ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68716eu);}goto L68716e;}}
}
B6873d4:L6873d4:{c.instructions+=2;NFSU2_TR(0x6873d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6873d7:{NFSU2_TR(0x6873d7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68711eu);}goto L68711e;}
}
B6873dc:L6873dc:{c.instructions+=2;NFSU2_TR(0x6873dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6873df:{NFSU2_TR(0x6873df);
if(r1(R+518)){{goto L687488;}}
}
B6873e5:L6873e5:{c.instructions+=5;NFSU2_TR(0x6873e5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6873e7:{NFSU2_TR(0x6873e7);
w4(R+28,u32(0x7ba604ull));
}
B6873ec:{NFSU2_TR(0x6873ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6873ef:{NFSU2_TR(0x6873ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6873f0:{NFSU2_TR(0x6873f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6873f2:L6873f2:{c.instructions+=1;NFSU2_TR(0x6873f2);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6873f4;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6873f2u);}goto L6873f2;}}
}
B6873f4:L6873f4:{c.instructions+=1;NFSU2_TR(0x6873f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687400;}}
}
B6873f6:L6873f6:{c.instructions+=2;NFSU2_TR(0x6873f6);
w4(R+0,u32(0x2000000ull));
}
B6873fb:{NFSU2_TR(0x6873fb);
{goto L687480;}
}
B687400:L687400:{c.instructions+=5;NFSU2_TR(0x687400);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687402:{NFSU2_TR(0x687402);
w4(R+28,u32(0x7ba600ull));
}
B687407:{NFSU2_TR(0x687407);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68740a:{NFSU2_TR(0x68740a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68740b:{NFSU2_TR(0x68740b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68740d:L68740d:{c.instructions+=1;NFSU2_TR(0x68740d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68740f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68740du);}goto L68740d;}}
}
B68740f:L68740f:{c.instructions+=1;NFSU2_TR(0x68740f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687418;}}
}
B687411:L687411:{c.instructions+=2;NFSU2_TR(0x687411);
w4(R+0,u32(0x4000000ull));
}
B687416:{NFSU2_TR(0x687416);
{goto L687480;}
}
B687418:L687418:{c.instructions+=5;NFSU2_TR(0x687418);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68741a:{NFSU2_TR(0x68741a);
w4(R+28,u32(0x7b9edcull));
}
B68741f:{NFSU2_TR(0x68741f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687422:{NFSU2_TR(0x687422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687423:{NFSU2_TR(0x687423);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B687425:L687425:{c.instructions+=1;NFSU2_TR(0x687425);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L687427;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687425u);}goto L687425;}}
}
B687427:L687427:{c.instructions+=1;NFSU2_TR(0x687427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687430;}}
}
B687429:L687429:{c.instructions+=2;NFSU2_TR(0x687429);
w4(R+0,u32(0x7000000ull));
}
B68742e:{NFSU2_TR(0x68742e);
{goto L687480;}
}
B687430:L687430:{c.instructions+=5;NFSU2_TR(0x687430);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687432:{NFSU2_TR(0x687432);
w4(R+28,u32(0x7ba5fcull));
}
B687437:{NFSU2_TR(0x687437);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68743a:{NFSU2_TR(0x68743a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68743b:{NFSU2_TR(0x68743b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68743d:L68743d:{c.instructions+=1;NFSU2_TR(0x68743d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68743f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68743du);}goto L68743d;}}
}
B68743f:L68743f:{c.instructions+=1;NFSU2_TR(0x68743f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687448;}}
}
B687441:L687441:{c.instructions+=2;NFSU2_TR(0x687441);
w4(R+0,u32(0x9000000ull));
}
B687446:{NFSU2_TR(0x687446);
{goto L687480;}
}
B687448:L687448:{c.instructions+=5;NFSU2_TR(0x687448);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68744a:{NFSU2_TR(0x68744a);
w4(R+28,u32(0x7ba5f8ull));
}
B68744f:{NFSU2_TR(0x68744f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687452:{NFSU2_TR(0x687452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687453:{NFSU2_TR(0x687453);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B687455:L687455:{c.instructions+=1;NFSU2_TR(0x687455);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L687457;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687455u);}goto L687455;}}
}
B687457:L687457:{c.instructions+=1;NFSU2_TR(0x687457);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687441u);}goto L687441;}}
}
B687459:L687459:{c.instructions+=5;NFSU2_TR(0x687459);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68745b:{NFSU2_TR(0x68745b);
w4(R+28,u32(0x7ba5f4ull));
}
B687460:{NFSU2_TR(0x687460);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687463:{NFSU2_TR(0x687463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687464:{NFSU2_TR(0x687464);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B687466:L687466:{c.instructions+=1;NFSU2_TR(0x687466);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L687468;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687466u);}goto L687466;}}
}
B687468:L687468:{c.instructions+=1;NFSU2_TR(0x687468);
if(r1(R+518)){{goto L68747b;}}
}
B68746a:L68746a:{c.instructions+=5;NFSU2_TR(0x68746a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68746c:{NFSU2_TR(0x68746c);
w4(R+28,u32(0x7ba5f0ull));
}
B687471:{NFSU2_TR(0x687471);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687474:{NFSU2_TR(0x687474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687475:{NFSU2_TR(0x687475);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B687477:L687477:{c.instructions+=1;NFSU2_TR(0x687477);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L687479;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687477u);}goto L687477;}}
}
B687479:L687479:{c.instructions+=1;NFSU2_TR(0x687479);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687488;}}
}
B68747b:L68747b:{c.instructions+=1;NFSU2_TR(0x68747b);
w4(R+0,u32(0xa000000ull));
}
B687480:L687480:{c.instructions+=3;NFSU2_TR(0x687480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687483:{NFSU2_TR(0x687483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687486:{NFSU2_TR(0x687486);
{goto L6874a8;}
}
B687488:L687488:{c.instructions+=2;NFSU2_TR(0x687488);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68748b:{NFSU2_TR(0x68748b);
if(r1(R+518)){{goto L6874b0;}}
}
B68748d:L68748d:{c.instructions+=5;NFSU2_TR(0x68748d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68748f:{NFSU2_TR(0x68748f);
w4(R+28,u32(0x7b3c34ull));
}
B687494:{NFSU2_TR(0x687494);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687497:{NFSU2_TR(0x687497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687498:{NFSU2_TR(0x687498);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68749a:L68749a:{c.instructions+=1;NFSU2_TR(0x68749a);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68749c;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68749au);}goto L68749a;}}
}
B68749c:L68749c:{c.instructions+=1;NFSU2_TR(0x68749c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6874b0;}}
}
B68749e:L68749e:{c.instructions+=2;NFSU2_TR(0x68749e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xb000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6874a5:{NFSU2_TR(0x6874a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6874a8:L6874a8:{c.instructions+=2;NFSU2_TR(0x6874a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6874ab:{NFSU2_TR(0x6874ab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6873ccu);}goto L6873cc;}
}
B6874b0:L6874b0:{c.instructions+=1;NFSU2_TR(0x6874b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6874b3:L6874b3:{c.instructions+=3;NFSU2_TR(0x6874b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6874b6:{NFSU2_TR(0x6874b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6874b8:{NFSU2_TR(0x6874b8);
if(r1(R+518)){{goto L68750a;}}
}
B6874ba:L6874ba:{c.instructions+=13;NFSU2_TR(0x6874ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6874bd:{NFSU2_TR(0x6874bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6874c0:{NFSU2_TR(0x6874c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6874c1:{NFSU2_TR(0x6874c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6874c4:{NFSU2_TR(0x6874c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6874c5:{NFSU2_TR(0x6874c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6874c8:{NFSU2_TR(0x6874c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6874c9:{NFSU2_TR(0x6874c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6874ca:{NFSU2_TR(0x6874ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6874cd:{NFSU2_TR(0x6874cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6874d0:{NFSU2_TR(0x6874d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6874d3:{NFSU2_TR(0x6874d3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6874d5:{NFSU2_TR(0x6874d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6874daull));
TAIL_STATIC(0x686c6cu,686);
}
B6874da:L6874da:{c.instructions+=2;NFSU2_TR(0x6874da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6874dc:{NFSU2_TR(0x6874dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6875d2;}}
}
B6874e2:L6874e2:{c.instructions+=2;NFSU2_TR(0x6874e2);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6874e4:{NFSU2_TR(0x6874e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6874e9ull));
TAIL_STATIC(0x645362u,645);
}
B6874e9:L6874e9:{c.instructions+=2;NFSU2_TR(0x6874e9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6874eb:{NFSU2_TR(0x6874eb);
if(r1(R+518)){{goto L6875f7;}}
}
B6874f1:L6874f1:{c.instructions+=7;NFSU2_TR(0x6874f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6874f2:{NFSU2_TR(0x6874f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6874f5:{NFSU2_TR(0x6874f5);
__builtin_memmove((R+4),(R+0),4);
}
B6874f7:{NFSU2_TR(0x6874f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6874fa:{NFSU2_TR(0x6874fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6874fd:{NFSU2_TR(0x6874fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687500:{NFSU2_TR(0x687500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687505ull));
TAIL_STATIC(0x6c1705u,6c1);
}
B687505:L687505:{c.instructions+=1;NFSU2_TR(0x687505);
{goto L6875f9;}
}
B68750a:L68750a:{c.instructions+=3;NFSU2_TR(0x68750a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68750d:{NFSU2_TR(0x68750d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68750f:{NFSU2_TR(0x68750f);
if(r1(R+518)){{goto L687560;}}
}
B687511:L687511:{c.instructions+=3;NFSU2_TR(0x687511);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687514:{NFSU2_TR(0x687514);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687516:{NFSU2_TR(0x687516);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68753a;}}
}
B687518:L687518:{c.instructions+=7;NFSU2_TR(0x687518);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68751b:{NFSU2_TR(0x68751b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68751e:{NFSU2_TR(0x68751e);
u8 U[4];
w4(U+0,u32(0x7ba5d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687523:{NFSU2_TR(0x687523);
u8 U[4];
w4(U+0,u32(0x7d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687528:{NFSU2_TR(0x687528);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68752b:{NFSU2_TR(0x68752b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68752d:{NFSU2_TR(0x68752d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687532ull));
TAIL_STATIC(0x64307cu,643);
}
B687532:L687532:{c.instructions+=2;NFSU2_TR(0x687532);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B687535:{NFSU2_TR(0x687535);
{goto L6875d2;}
}
B68753a:L68753a:{c.instructions+=2;NFSU2_TR(0x68753a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68753e:{NFSU2_TR(0x68753e);
if(r1(R+518)){{goto L6875d2;}}
}
B687544:L687544:{c.instructions+=2;NFSU2_TR(0x687544);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687547:{NFSU2_TR(0x687547);
u8 U[4];
w4(U+0,u32(0x7ba5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68754c:L68754c:{c.instructions+=4;NFSU2_TR(0x68754c);
u8 U[4];
w4(U+0,u32(0x7d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687551:{NFSU2_TR(0x687551);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687554:{NFSU2_TR(0x687554);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B687556:{NFSU2_TR(0x687556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68755bull));
TAIL_STATIC(0x64307cu,643);
}
B68755b:L68755b:{c.instructions+=2;NFSU2_TR(0x68755b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B68755e:{NFSU2_TR(0x68755e);
{goto L6875d2;}
}
B687560:L687560:{c.instructions+=3;NFSU2_TR(0x687560);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687563:{NFSU2_TR(0x687563);
u8 U[4];
w4(U+0,u32(0x7ba5a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687568:{NFSU2_TR(0x687568);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68754cu);}goto L68754c;}
}
B68756a:L68756a:{c.instructions+=2;NFSU2_TR(0x68756a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68756d:{NFSU2_TR(0x68756d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B687573:L687573:{c.instructions+=2;NFSU2_TR(0x687573);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687576:{NFSU2_TR(0x687576);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B68757c:L68757c:{c.instructions+=2;NFSU2_TR(0x68757c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68757f:{NFSU2_TR(0x68757f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B687585:L687585:{c.instructions+=2;NFSU2_TR(0x687585);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687588:{NFSU2_TR(0x687588);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B68758e:L68758e:{c.instructions+=2;NFSU2_TR(0x68758e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687591:{NFSU2_TR(0x687591);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B687597:L687597:{c.instructions+=2;NFSU2_TR(0x687597);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68759a:{NFSU2_TR(0x68759a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B6875a0:L6875a0:{c.instructions+=2;NFSU2_TR(0x6875a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6875a3:{NFSU2_TR(0x6875a3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B6875a9:L6875a9:{c.instructions+=2;NFSU2_TR(0x6875a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6875ac:{NFSU2_TR(0x6875ac);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B6875b2:L6875b2:{c.instructions+=2;NFSU2_TR(0x6875b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6875b5:{NFSU2_TR(0x6875b5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6874e2u);}goto L6874e2;}}
}
B6875bb:L6875bb:{c.instructions+=1;NFSU2_TR(0x6875bb);
u8 U[4];
w4(U+0,u32(0x7ba558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875c0:L6875c0:{c.instructions+=4;NFSU2_TR(0x6875c0);
u8 U[4];
w4(U+0,u32(0x7d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875c5:{NFSU2_TR(0x6875c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6875c8:{NFSU2_TR(0x6875c8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6875ca:{NFSU2_TR(0x6875ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6875cfull));
TAIL_STATIC(0x64307cu,643);
}
B6875cf:L6875cf:{c.instructions+=1;NFSU2_TR(0x6875cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6875d2:L6875d2:{c.instructions+=3;NFSU2_TR(0x6875d2);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875d4:{NFSU2_TR(0x6875d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6875db:{NFSU2_TR(0x6875db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6875e0ull));
TAIL_STATIC(0x645362u,645);
}
B6875e0:L6875e0:{c.instructions+=2;NFSU2_TR(0x6875e0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6875e2:{NFSU2_TR(0x6875e2);
if(r1(R+518)){{goto L6875f3;}}
}
B6875e4:L6875e4:{c.instructions+=7;NFSU2_TR(0x6875e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875e5:{NFSU2_TR(0x6875e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875e6:{NFSU2_TR(0x6875e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875e7:{NFSU2_TR(0x6875e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875e8:{NFSU2_TR(0x6875e8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6875ea:{NFSU2_TR(0x6875ea);
__builtin_memmove((R+4),(R+0),4);
}
B6875ec:{NFSU2_TR(0x6875ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6875f1ull));
TAIL_STATIC(0x6c1705u,6c1);
}
B6875f1:L6875f1:{c.instructions+=1;NFSU2_TR(0x6875f1);
{goto L68760a;}
}
B6875f3:L6875f3:{c.instructions+=2;NFSU2_TR(0x6875f3);
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
B6875f5:{NFSU2_TR(0x6875f5);
{goto L68760a;}
}
B6875f7:L6875f7:{c.instructions+=1;NFSU2_TR(0x6875f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6875f9:L6875f9:{c.instructions+=2;NFSU2_TR(0x6875f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6875fb:{NFSU2_TR(0x6875fb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6875f3u);}goto L6875f3;}}
}
B6875fd:L6875fd:{c.instructions+=2;NFSU2_TR(0x6875fd);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6875ff:{NFSU2_TR(0x6875ff);
if(r1(R+518)){{goto L68760a;}}
}
B687601:L687601:{c.instructions+=3;NFSU2_TR(0x687601);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B687604:{NFSU2_TR(0x687604);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687607:{NFSU2_TR(0x687607);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68760a:L68760a:{c.instructions+=5;NFSU2_TR(0x68760a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68760b:{NFSU2_TR(0x68760b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68760c:{NFSU2_TR(0x68760c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68760d:{NFSU2_TR(0x68760d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68760e:{NFSU2_TR(0x68760e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B687611:L687611:{c.instructions+=5;NFSU2_TR(0x687611);
__builtin_memmove((R+28),(R+28),4);
}
B687613:{NFSU2_TR(0x687613);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687614:{NFSU2_TR(0x687614);
__builtin_memmove((R+24),(R+4),4);
}
B687616:{NFSU2_TR(0x687616);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B687618:{NFSU2_TR(0x687618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68761dull));
TAIL_STATIC(0x575630u,575);
}
B68761d:L68761d:{c.instructions+=5;NFSU2_TR(0x68761d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68761e:{NFSU2_TR(0x68761e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B687621:{NFSU2_TR(0x687621);
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
B687623:{NFSU2_TR(0x687623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687624:{NFSU2_TR(0x687624);
if(r1(R+518)){{goto L68762d;}}
}
B687626:L687626:{c.instructions+=2;NFSU2_TR(0x687626);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687628:{NFSU2_TR(0x687628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68762dull));
TAIL_STATIC(0x686a87u,686);
}
B68762d:L68762d:{c.instructions+=1;NFSU2_TR(0x68762d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68762e:L68762e:{c.instructions+=6;NFSU2_TR(0x68762e);
__builtin_memmove((R+28),(R+28),4);
}
B687630:{NFSU2_TR(0x687630);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687631:{NFSU2_TR(0x687631);
__builtin_memmove((R+24),(R+4),4);
}
B687633:{NFSU2_TR(0x687633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687636:{NFSU2_TR(0x687636);
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
B687638:{NFSU2_TR(0x687638);
if(r1(R+518)){{goto L687644;}}
}
B68763a:L68763a:{c.instructions+=3;NFSU2_TR(0x68763a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68763c:{NFSU2_TR(0x68763c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68763d:{NFSU2_TR(0x68763d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687640ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B687640:L687640:{c.instructions+=1;NFSU2_TR(0x687640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B687644:L687644:{c.instructions+=2;NFSU2_TR(0x687644);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687647:{NFSU2_TR(0x687647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68764cull));
TAIL_STATIC(0x575630u,575);
}
B68764c:L68764c:{c.instructions+=5;NFSU2_TR(0x68764c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68764d:{NFSU2_TR(0x68764d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B687650:{NFSU2_TR(0x687650);
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
B687652:{NFSU2_TR(0x687652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687653:{NFSU2_TR(0x687653);
if(r1(R+518)){{goto L68765c;}}
}
B687655:L687655:{c.instructions+=2;NFSU2_TR(0x687655);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687657:{NFSU2_TR(0x687657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68765cull));
TAIL_STATIC(0x686fdeu,686);
}
B68765c:L68765c:{c.instructions+=1;NFSU2_TR(0x68765c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68765d:L68765d:{c.instructions+=10;NFSU2_TR(0x68765d);
__builtin_memmove((R+28),(R+28),4);
}
B68765f:{NFSU2_TR(0x68765f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687660:{NFSU2_TR(0x687660);
__builtin_memmove((R+20),(R+16),4);
}
B687662:{NFSU2_TR(0x687662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B687665:{NFSU2_TR(0x687665);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687666:{NFSU2_TR(0x687666);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687667:{NFSU2_TR(0x687667);
__builtin_memmove((R+24),(R+4),4);
}
B687669:{NFSU2_TR(0x687669);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68766b:{NFSU2_TR(0x68766b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B68766e:{NFSU2_TR(0x68766e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687b54;}}
}
B687674:L687674:{c.instructions+=5;NFSU2_TR(0x687674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B687677:{NFSU2_TR(0x687677);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687679:{NFSU2_TR(0x687679);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68767a:{NFSU2_TR(0x68767a);
__builtin_memmove((R+4),(R+8),4);
}
B68767c:{NFSU2_TR(0x68767c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68769f;}}
}
B68767e:L68767e:{c.instructions+=4;NFSU2_TR(0x68767e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687681:{NFSU2_TR(0x687681);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B687682:{NFSU2_TR(0x687682);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687684:{NFSU2_TR(0x687684);
if(r1(R+518)){{goto L6876bc;}}
}
B687686:L687686:{c.instructions+=8;NFSU2_TR(0x687686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B687689:{NFSU2_TR(0x687689);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68768d:{NFSU2_TR(0x68768d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B687690:{NFSU2_TR(0x687690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687693:{NFSU2_TR(0x687693);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B687697:{NFSU2_TR(0x687697);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68769b:{NFSU2_TR(0x68769b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68769d:{NFSU2_TR(0x68769d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68767eu);}goto L68767e;}}
}
B68769f:L68769f:{c.instructions+=5;NFSU2_TR(0x68769f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6876a2:{NFSU2_TR(0x6876a2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6876a4:{NFSU2_TR(0x6876a4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6876a5:{NFSU2_TR(0x6876a5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6876a8:{NFSU2_TR(0x6876a8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L687b0b;}}
}
B6876ae:L6876ae:{c.instructions+=2;NFSU2_TR(0x6876ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x687bcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6876b5:{NFSU2_TR(0x6876b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x687b5aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6876bc:L6876bc:{c.instructions+=6;NFSU2_TR(0x6876bc);
u8 U[4];
w4(U+0,u32(0x7abae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6876c1:{NFSU2_TR(0x6876c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6876c3:{NFSU2_TR(0x6876c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6876c6:{NFSU2_TR(0x6876c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6876c7:{NFSU2_TR(0x6876c7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6876c9:{NFSU2_TR(0x6876c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6876ceull));
TAIL_STATIC(0x64307cu,643);
}
B6876ce:L6876ce:{c.instructions+=3;NFSU2_TR(0x6876ce);
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
B6876d1:{NFSU2_TR(0x6876d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6876d8:{NFSU2_TR(0x6876d8);
{goto L687b53;}
}
B6876dd:L6876dd:{c.instructions+=2;NFSU2_TR(0x6876dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6876df:{NFSU2_TR(0x6876df);
{goto L687b0b;}
}
B6876e4:L6876e4:{c.instructions+=2;NFSU2_TR(0x6876e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6876e7:{NFSU2_TR(0x6876e7);
{goto L687b0b;}
}
B6876ec:L6876ec:{c.instructions+=3;NFSU2_TR(0x6876ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6876ef:{NFSU2_TR(0x6876ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6876f2:{NFSU2_TR(0x6876f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6876f7ull));
TAIL_STATIC(0x672459u,672);
}
B6876f7:L6876f7:{c.instructions+=2;NFSU2_TR(0x6876f7);
__builtin_memmove((R+28),(R+0),4);
}
B6876f9:{NFSU2_TR(0x6876f9);
{goto L687b0b;}
}
B6876fe:L6876fe:{c.instructions+=3;NFSU2_TR(0x6876fe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B687700:{NFSU2_TR(0x687700);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B687703:{NFSU2_TR(0x687703);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687b0b;}}
}
B687709:L687709:{c.instructions+=4;NFSU2_TR(0x687709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68770c:{NFSU2_TR(0x68770c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68770f:{NFSU2_TR(0x68770f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687712:{NFSU2_TR(0x687712);
{goto L687b0b;}
}
B687717:L687717:{c.instructions+=2;NFSU2_TR(0x687717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68771a:{NFSU2_TR(0x68771a);
{goto L68772f;}
}
B68771c:L68771c:{c.instructions+=4;NFSU2_TR(0x68771c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68771f:{NFSU2_TR(0x68771f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B687722:{NFSU2_TR(0x687722);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687725:{NFSU2_TR(0x687725);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68773c;}}
}
B687727:L687727:{c.instructions+=2;NFSU2_TR(0x687727);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68772a:{NFSU2_TR(0x68772a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68773c;}}
}
B68772c:L68772c:{c.instructions+=1;NFSU2_TR(0x68772c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68772f:L68772f:{c.instructions+=3;NFSU2_TR(0x68772f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687730:{NFSU2_TR(0x687730);
__builtin_memmove((R+4),(R+24),4);
}
B687732:{NFSU2_TR(0x687732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687737ull));
TAIL_STATIC(0x685cc6u,685);
}
B687737:L687737:{c.instructions+=1;NFSU2_TR(0x687737);
{goto L687b0b;}
}
B68773c:L68773c:{c.instructions+=3;NFSU2_TR(0x68773c);
u8 U[4];
w4(U+0,u32(0x7ba820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687741:{NFSU2_TR(0x687741);
u8 U[4];
w4(U+0,u32(0x7ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687746:{NFSU2_TR(0x687746);
{goto L687777;}
}
B687748:L687748:{c.instructions+=4;NFSU2_TR(0x687748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68774b:{NFSU2_TR(0x68774b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68774e:{NFSU2_TR(0x68774e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687751:{NFSU2_TR(0x687751);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L687758;}}
}
B687753:L687753:{c.instructions+=2;NFSU2_TR(0x687753);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687756:{NFSU2_TR(0x687756);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L687762;}}
}
B687758:L687758:{c.instructions+=2;NFSU2_TR(0x687758);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68775b:{NFSU2_TR(0x68775b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68776d;}}
}
B68775d:L68775d:{c.instructions+=2;NFSU2_TR(0x68775d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687760:{NFSU2_TR(0x687760);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68776d;}}
}
B687762:L687762:{c.instructions+=3;NFSU2_TR(0x687762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687765:{NFSU2_TR(0x687765);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687768:{NFSU2_TR(0x687768);
{goto L687b0b;}
}
B68776d:L68776d:{c.instructions+=2;NFSU2_TR(0x68776d);
u8 U[4];
w4(U+0,u32(0x7ba7e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687772:{NFSU2_TR(0x687772);
u8 U[4];
w4(U+0,u32(0x7ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687777:L687777:{c.instructions+=2;NFSU2_TR(0x687777);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68777a:{NFSU2_TR(0x68777a);
{goto L687909;}
}
B68777f:L68777f:{c.instructions+=4;NFSU2_TR(0x68777f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687782:{NFSU2_TR(0x687782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B687786:{NFSU2_TR(0x687786);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687788:{NFSU2_TR(0x687788);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L687794;}}
}
B68778a:L68778a:{c.instructions+=3;NFSU2_TR(0x68778a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68778d:{NFSU2_TR(0x68778d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B687791:{NFSU2_TR(0x687791);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687794:L687794:{c.instructions+=4;NFSU2_TR(0x687794);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687796:{NFSU2_TR(0x687796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687797:{NFSU2_TR(0x687797);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687799:{NFSU2_TR(0x687799);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L687b0b;}}
}
B68779f:L68779f:{c.instructions+=1;NFSU2_TR(0x68779f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6877a2:L6877a2:{c.instructions+=8;NFSU2_TR(0x6877a2);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6877a6:{NFSU2_TR(0x6877a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6877a8:{NFSU2_TR(0x6877a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6877ab:{NFSU2_TR(0x6877ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6877ad:{NFSU2_TR(0x6877ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6877ae:{NFSU2_TR(0x6877ae);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6877b1:{NFSU2_TR(0x6877b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6877b4:{NFSU2_TR(0x6877b4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6877a2u);}goto L6877a2;}}
}
B6877b6:L6877b6:{c.instructions+=3;NFSU2_TR(0x6877b6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6877b8:{NFSU2_TR(0x6877b8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6877b9:{NFSU2_TR(0x6877b9);
{goto L687b0b;}
}
B6877be:L6877be:{c.instructions+=5;NFSU2_TR(0x6877be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6877c1:{NFSU2_TR(0x6877c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6877c5:{NFSU2_TR(0x6877c5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6877c7:{NFSU2_TR(0x6877c7);
__builtin_memmove((R+4),(R+12),4);
}
B6877c9:{NFSU2_TR(0x6877c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L687b0b;}}
}
B6877cf:L6877cf:{c.instructions+=1;NFSU2_TR(0x6877cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6877d2:L6877d2:{c.instructions+=8;NFSU2_TR(0x6877d2);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6877d6:{NFSU2_TR(0x6877d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6877d8:{NFSU2_TR(0x6877d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6877db:{NFSU2_TR(0x6877db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6877dd:{NFSU2_TR(0x6877dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6877de:{NFSU2_TR(0x6877de);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6877e1:{NFSU2_TR(0x6877e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6877e4:{NFSU2_TR(0x6877e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6877d2u);}goto L6877d2;}}
}
B6877e6:L6877e6:{c.instructions+=1;NFSU2_TR(0x6877e6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6877b6u);}goto L6877b6;}
}
B6877e8:L6877e8:{c.instructions+=3;NFSU2_TR(0x6877e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6877eb:{NFSU2_TR(0x6877eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6877ef:{NFSU2_TR(0x6877ef);
if(r1(R+518)){{goto L68781b;}}
}
B6877f1:L6877f1:{c.instructions+=6;NFSU2_TR(0x6877f1);
u8 U[4];
w4(U+0,u32(0x7ba7b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6877f6:{NFSU2_TR(0x6877f6);
u8 U[4];
w4(U+0,u32(0x7e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6877fb:{NFSU2_TR(0x6877fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6877fe:{NFSU2_TR(0x6877fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6877ff:{NFSU2_TR(0x6877ff);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B687801:{NFSU2_TR(0x687801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687806ull));
TAIL_STATIC(0x64307cu,643);
}
B687806:L687806:{c.instructions+=6;NFSU2_TR(0x687806);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B687808:{NFSU2_TR(0x687808);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B68780b:{NFSU2_TR(0x68780b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B68780c:{NFSU2_TR(0x68780c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68780f:{NFSU2_TR(0x68780f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687816:{NFSU2_TR(0x687816);
{goto L687b0b;}
}
B68781b:L68781b:{c.instructions+=5;NFSU2_TR(0x68781b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68781e:{NFSU2_TR(0x68781e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B687821:{NFSU2_TR(0x687821);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687822:{NFSU2_TR(0x687822);
__builtin_memmove((R+4),(R+24),4);
}
B687824:{NFSU2_TR(0x687824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687829ull));
TAIL_STATIC(0x685a46u,685);
}
B687829:L687829:{c.instructions+=2;NFSU2_TR(0x687829);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68782c:{NFSU2_TR(0x68782c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6877b6u);}goto L6877b6;}
}
B68782e:L68782e:{c.instructions+=3;NFSU2_TR(0x68782e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687831:{NFSU2_TR(0x687831);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B687835:{NFSU2_TR(0x687835);
if(r1(R+518)){{goto L687846;}}
}
B687837:L687837:{c.instructions+=3;NFSU2_TR(0x687837);
u8 U[4];
w4(U+0,u32(0x7ba790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68783c:{NFSU2_TR(0x68783c);
u8 U[4];
w4(U+0,u32(0x7e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687841:{NFSU2_TR(0x687841);
{goto L687906;}
}
B687846:L687846:{c.instructions+=2;NFSU2_TR(0x687846);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0xd000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68784d:{NFSU2_TR(0x68784d);
{goto L687b0b;}
}
B687852:L687852:{c.instructions+=4;NFSU2_TR(0x687852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687855:{NFSU2_TR(0x687855);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687858:{NFSU2_TR(0x687858);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68785a:{NFSU2_TR(0x68785a);
if(r1(R+518)){{goto L6878c6;}}
}
B68785c:L68785c:{c.instructions+=2;NFSU2_TR(0x68785c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687861:{NFSU2_TR(0x687861);
if(r1(R+518)){{goto L6878ba;}}
}
B687863:L687863:{c.instructions+=2;NFSU2_TR(0x687863);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687868:{NFSU2_TR(0x687868);
if(r1(R+518)){{goto L6878ae;}}
}
B68786a:L68786a:{c.instructions+=2;NFSU2_TR(0x68786a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68786f:{NFSU2_TR(0x68786f);
if(r1(R+518)){{goto L6878a2;}}
}
B687871:L687871:{c.instructions+=2;NFSU2_TR(0x687871);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687876:{NFSU2_TR(0x687876);
if(r1(R+518)){{goto L687896;}}
}
B687878:L687878:{c.instructions+=2;NFSU2_TR(0x687878);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68787d:{NFSU2_TR(0x68787d);
if(r1(R+518)){{goto L687896;}}
}
B68787f:L68787f:{c.instructions+=2;NFSU2_TR(0x68787f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687884:{NFSU2_TR(0x687884);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687b0b;}}
}
B68788a:L68788a:{c.instructions+=2;NFSU2_TR(0x68788a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0xc000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687891:{NFSU2_TR(0x687891);
{goto L687b0b;}
}
B687896:L687896:{c.instructions+=3;NFSU2_TR(0x687896);
u8 U[4];
w4(U+0,u32(0x7ba760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68789b:{NFSU2_TR(0x68789b);
u8 U[4];
w4(U+0,u32(0x7dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6878a0:{NFSU2_TR(0x6878a0);
{goto L687906;}
}
B6878a2:L6878a2:{c.instructions+=2;NFSU2_TR(0x6878a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x8000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6878a9:{NFSU2_TR(0x6878a9);
{goto L687b0b;}
}
B6878ae:L6878ae:{c.instructions+=2;NFSU2_TR(0x6878ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x5000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6878b5:{NFSU2_TR(0x6878b5);
{goto L687b0b;}
}
B6878ba:L6878ba:{c.instructions+=2;NFSU2_TR(0x6878ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x3000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6878c1:{NFSU2_TR(0x6878c1);
{goto L687b0b;}
}
B6878c6:L6878c6:{c.instructions+=2;NFSU2_TR(0x6878c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6878cd:{NFSU2_TR(0x6878cd);
{goto L687b0b;}
}
B6878d2:L6878d2:{c.instructions+=4;NFSU2_TR(0x6878d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6878d5:{NFSU2_TR(0x6878d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6878d8:{NFSU2_TR(0x6878d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6878db:{NFSU2_TR(0x6878db);
if(r1(R+518)){{goto L6878e9;}}
}
B6878dd:L6878dd:{c.instructions+=3;NFSU2_TR(0x6878dd);
u8 U[4];
w4(U+0,u32(0x7ba740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6878e2:{NFSU2_TR(0x6878e2);
u8 U[4];
w4(U+0,u32(0x7daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6878e7:{NFSU2_TR(0x6878e7);
{goto L687906;}
}
B6878e9:L6878e9:{c.instructions+=3;NFSU2_TR(0x6878e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6878ec:{NFSU2_TR(0x6878ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6878ef:{NFSU2_TR(0x6878ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L687928;}}
}
B6878f1:L6878f1:{c.instructions+=2;NFSU2_TR(0x6878f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6878f4:{NFSU2_TR(0x6878f4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L687928;}}
}
B6878f6:L6878f6:{c.instructions+=2;NFSU2_TR(0x6878f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6878fa:{NFSU2_TR(0x6878fa);
if(r1(R+518)){{goto L68791c;}}
}
B6878fc:L6878fc:{c.instructions+=2;NFSU2_TR(0x6878fc);
u8 U[4];
w4(U+0,u32(0x7ba710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687901:{NFSU2_TR(0x687901);
u8 U[4];
w4(U+0,u32(0x7dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687906:L687906:{c.instructions+=1;NFSU2_TR(0x687906);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B687909:L687909:{c.instructions+=3;NFSU2_TR(0x687909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68790a:{NFSU2_TR(0x68790a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68790c:{NFSU2_TR(0x68790c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687911ull));
TAIL_STATIC(0x64307cu,643);
}
B687911:L687911:{c.instructions+=3;NFSU2_TR(0x687911);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B687914:{NFSU2_TR(0x687914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687917:{NFSU2_TR(0x687917);
{goto L687b0b;}
}
B68791c:L68791c:{c.instructions+=2;NFSU2_TR(0x68791c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x6000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687923:{NFSU2_TR(0x687923);
{goto L687b0b;}
}
B687928:L687928:{c.instructions+=3;NFSU2_TR(0x687928);
u8 U[4];
w4(U+0,u32(0x7ba6dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68792d:{NFSU2_TR(0x68792d);
u8 U[4];
w4(U+0,u32(0x7edull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687932:{NFSU2_TR(0x687932);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687906u);}goto L687906;}
}
B687934:L687934:{c.instructions+=3;NFSU2_TR(0x687934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687937:{NFSU2_TR(0x687937);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68793b:{NFSU2_TR(0x68793b);
if(r1(R+518)){{goto L687967;}}
}
B68793d:L68793d:{c.instructions+=6;NFSU2_TR(0x68793d);
u8 U[4];
w4(U+0,u32(0x7ba6b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687942:{NFSU2_TR(0x687942);
u8 U[4];
w4(U+0,u32(0x7e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687947:{NFSU2_TR(0x687947);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68794a:{NFSU2_TR(0x68794a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68794b:{NFSU2_TR(0x68794b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68794d:{NFSU2_TR(0x68794d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687952ull));
TAIL_STATIC(0x64307cu,643);
}
B687952:L687952:{c.instructions+=6;NFSU2_TR(0x687952);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B687954:{NFSU2_TR(0x687954);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B687957:{NFSU2_TR(0x687957);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B687958:{NFSU2_TR(0x687958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68795b:{NFSU2_TR(0x68795b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0xe40000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687962:{NFSU2_TR(0x687962);
{goto L687b0b;}
}
B687967:L687967:{c.instructions+=5;NFSU2_TR(0x687967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68796a:{NFSU2_TR(0x68796a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B68796d:{NFSU2_TR(0x68796d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68796e:{NFSU2_TR(0x68796e);
__builtin_memmove((R+4),(R+24),4);
}
B687970:{NFSU2_TR(0x687970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687975ull));
TAIL_STATIC(0x685afbu,685);
}
B687975:L687975:{c.instructions+=2;NFSU2_TR(0x687975);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687978:{NFSU2_TR(0x687978);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6877b6u);}goto L6877b6;}
}
B68797d:L68797d:{c.instructions+=1;NFSU2_TR(0x68797d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68797f:L68797f:{c.instructions+=5;NFSU2_TR(0x68797f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687982:{NFSU2_TR(0x687982);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B687985:{NFSU2_TR(0x687985);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687986:{NFSU2_TR(0x687986);
__builtin_memmove((R+4),(R+24),4);
}
B687988:{NFSU2_TR(0x687988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68798dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6870ddu);}goto L6870dd;}
}
B68798d:L68798d:{c.instructions+=1;NFSU2_TR(0x68798d);
{goto L687ae5;}
}
B687992:L687992:{c.instructions+=2;NFSU2_TR(0x687992);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687995:{NFSU2_TR(0x687995);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68797fu);}goto L68797f;}
}
B687997:L687997:{c.instructions+=7;NFSU2_TR(0x687997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68799a:{NFSU2_TR(0x68799a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68799d:{NFSU2_TR(0x68799d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6879a0:{NFSU2_TR(0x6879a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6879a3:{NFSU2_TR(0x6879a3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6879a5:{NFSU2_TR(0x6879a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6879a8:{NFSU2_TR(0x6879a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6879b8;}}
}
B6879aa:L6879aa:{c.instructions+=4;NFSU2_TR(0x6879aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6879ad:{NFSU2_TR(0x6879ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6879b0:{NFSU2_TR(0x6879b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6879b3:{NFSU2_TR(0x6879b3);
{goto L687b0b;}
}
B6879b8:L6879b8:{c.instructions+=2;NFSU2_TR(0x6879b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6879bb:{NFSU2_TR(0x6879bb);
if(r1(R+518)){{goto L687b0b;}}
}
B6879c1:L6879c1:{c.instructions+=3;NFSU2_TR(0x6879c1);
u8 U[4];
w4(U+0,u32(0x7ba668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879c6:{NFSU2_TR(0x6879c6);
u8 U[4];
w4(U+0,u32(0x7d9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879cb:{NFSU2_TR(0x6879cb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687906u);}goto L687906;}
}
B6879d0:L6879d0:{c.instructions+=2;NFSU2_TR(0x6879d0);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879d2:{NFSU2_TR(0x6879d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6879d7ull));
TAIL_STATIC(0x645362u,645);
}
B6879d7:L6879d7:{c.instructions+=3;NFSU2_TR(0x6879d7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6879d9:{NFSU2_TR(0x6879d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6879db:{NFSU2_TR(0x6879db);
if(r1(R+518)){{goto L687b03;}}
}
B6879e1:L6879e1:{c.instructions+=3;NFSU2_TR(0x6879e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6879e4:{NFSU2_TR(0x6879e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879e5:{NFSU2_TR(0x6879e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879e6:L6879e6:{c.instructions+=4;NFSU2_TR(0x6879e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879e7:{NFSU2_TR(0x6879e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879e8:{NFSU2_TR(0x6879e8);
__builtin_memmove((R+4),(R+0),4);
}
B6879ea:{NFSU2_TR(0x6879ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6879efull));
TAIL_STATIC(0x6c1705u,6c1);
}
B6879ef:L6879ef:{c.instructions+=1;NFSU2_TR(0x6879ef);
{goto L687ae5;}
}
B6879f4:L6879f4:{c.instructions+=2;NFSU2_TR(0x6879f4);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6879f6:{NFSU2_TR(0x6879f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6879fbull));
TAIL_STATIC(0x645362u,645);
}
B6879fb:L6879fb:{c.instructions+=3;NFSU2_TR(0x6879fb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6879fd:{NFSU2_TR(0x6879fd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6879ff:{NFSU2_TR(0x6879ff);
if(r1(R+518)){{goto L687b03;}}
}
B687a05:L687a05:{c.instructions+=5;NFSU2_TR(0x687a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B687a08:{NFSU2_TR(0x687a08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a09:{NFSU2_TR(0x687a09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a0a:{NFSU2_TR(0x687a0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687a0d:{NFSU2_TR(0x687a0d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6879e6u);}goto L6879e6;}
}
B687a0f:L687a0f:{c.instructions+=2;NFSU2_TR(0x687a0f);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a11:{NFSU2_TR(0x687a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687a16ull));
TAIL_STATIC(0x645362u,645);
}
B687a16:L687a16:{c.instructions+=2;NFSU2_TR(0x687a16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687a18:{NFSU2_TR(0x687a18);
if(r1(R+518)){{goto L687a29;}}
}
B687a1a:L687a1a:{c.instructions+=4;NFSU2_TR(0x687a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687a1d:{NFSU2_TR(0x687a1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a1e:{NFSU2_TR(0x687a1e);
__builtin_memmove((R+4),(R+0),4);
}
B687a20:{NFSU2_TR(0x687a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687a25ull));
TAIL_STATIC(0x67269fu,672);
}
B687a25:L687a25:{c.instructions+=2;NFSU2_TR(0x687a25);
__builtin_memmove((R+28),(R+0),4);
}
B687a27:{NFSU2_TR(0x687a27);
{goto L687a2b;}
}
B687a29:L687a29:{c.instructions+=1;NFSU2_TR(0x687a29);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B687a2b:L687a2b:{c.instructions+=3;NFSU2_TR(0x687a2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a2c:{NFSU2_TR(0x687a2c);
__builtin_memmove((R+4),(R+24),4);
}
B687a2e:{NFSU2_TR(0x687a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687a33ull));
TAIL_STATIC(0x68512bu,685);
}
B687a33:L687a33:{c.instructions+=3;NFSU2_TR(0x687a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687a3a:{NFSU2_TR(0x687a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687a3d:{NFSU2_TR(0x687a3d);
{goto L687b0b;}
}
B687a42:L687a42:{c.instructions+=2;NFSU2_TR(0x687a42);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a44:{NFSU2_TR(0x687a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687a49ull));
TAIL_STATIC(0x645362u,645);
}
B687a49:L687a49:{c.instructions+=2;NFSU2_TR(0x687a49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687a4b:{NFSU2_TR(0x687a4b);
if(r1(R+518)){{goto L687a5c;}}
}
B687a4d:L687a4d:{c.instructions+=4;NFSU2_TR(0x687a4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687a50:{NFSU2_TR(0x687a50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a51:{NFSU2_TR(0x687a51);
__builtin_memmove((R+4),(R+0),4);
}
B687a53:{NFSU2_TR(0x687a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687a58ull));
TAIL_STATIC(0x67269fu,672);
}
B687a58:L687a58:{c.instructions+=2;NFSU2_TR(0x687a58);
__builtin_memmove((R+28),(R+0),4);
}
B687a5a:{NFSU2_TR(0x687a5a);
{goto L687a5e;}
}
B687a5c:L687a5c:{c.instructions+=1;NFSU2_TR(0x687a5c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B687a5e:L687a5e:{c.instructions+=3;NFSU2_TR(0x687a5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687a5f:{NFSU2_TR(0x687a5f);
__builtin_memmove((R+4),(R+24),4);
}
B687a61:{NFSU2_TR(0x687a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687a66ull));
TAIL_STATIC(0x68512bu,685);
}
B687a66:L687a66:{c.instructions+=3;NFSU2_TR(0x687a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B687a6a:{NFSU2_TR(0x687a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687a71:{NFSU2_TR(0x687a71);
{goto L687b0b;}
}
B687a76:L687a76:{c.instructions+=3;NFSU2_TR(0x687a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687a79:{NFSU2_TR(0x687a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B687a7c:{NFSU2_TR(0x687a7c);
{goto L687b0b;}
}
B687a81:L687a81:{c.instructions+=6;NFSU2_TR(0x687a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687a84:{NFSU2_TR(0x687a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687a87:{NFSU2_TR(0x687a87);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B687a8a:{NFSU2_TR(0x687a8a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B687a8c:{NFSU2_TR(0x687a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687a93:{NFSU2_TR(0x687a93);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L687a9b;}}
}
B687a95:L687a95:{c.instructions+=1;NFSU2_TR(0x687a95);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B687a9b:L687a9b:{c.instructions+=2;NFSU2_TR(0x687a9b);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B687a9e:{NFSU2_TR(0x687a9e);
{goto L687b0b;}
}
B687aa0:L687aa0:{c.instructions+=6;NFSU2_TR(0x687aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687aa3:{NFSU2_TR(0x687aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687aa6:{NFSU2_TR(0x687aa6);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B687aa9:{NFSU2_TR(0x687aa9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B687aab:{NFSU2_TR(0x687aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B687ab2:{NFSU2_TR(0x687ab2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L687ac2;}}
}
B687ab4:L687ab4:{c.instructions+=2;NFSU2_TR(0x687ab4);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B687aba:{NFSU2_TR(0x687aba);
{goto L687ac2;}
}
B687abc:L687abc:{c.instructions+=2;NFSU2_TR(0x687abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B687abf:{NFSU2_TR(0x687abf);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B687ac2:L687ac2:{c.instructions+=2;NFSU2_TR(0x687ac2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B687ac4:{NFSU2_TR(0x687ac4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687a9bu);}goto L687a9b;}
}
B687ac6:L687ac6:{c.instructions+=2;NFSU2_TR(0x687ac6);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ac8:{NFSU2_TR(0x687ac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687acdull));
TAIL_STATIC(0x645362u,645);
}
B687acd:L687acd:{c.instructions+=2;NFSU2_TR(0x687acd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687acf:{NFSU2_TR(0x687acf);
if(r1(R+518)){{goto L687b01;}}
}
B687ad1:L687ad1:{c.instructions+=7;NFSU2_TR(0x687ad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687ad4:{NFSU2_TR(0x687ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687ad7:{NFSU2_TR(0x687ad7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687ada:{NFSU2_TR(0x687ada);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687add:{NFSU2_TR(0x687add);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ade:{NFSU2_TR(0x687ade);
__builtin_memmove((R+4),(R+0),4);
}
B687ae0:{NFSU2_TR(0x687ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687ae5ull));
TAIL_STATIC(0x6c167eu,6c1);
}
B687ae5:L687ae5:{c.instructions+=2;NFSU2_TR(0x687ae5);
__builtin_memmove((R+28),(R+0),4);
}
B687ae7:{NFSU2_TR(0x687ae7);
{goto L687b03;}
}
B687ae9:L687ae9:{c.instructions+=2;NFSU2_TR(0x687ae9);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687aeb:{NFSU2_TR(0x687aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687af0ull));
TAIL_STATIC(0x645362u,645);
}
B687af0:L687af0:{c.instructions+=2;NFSU2_TR(0x687af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687af2:{NFSU2_TR(0x687af2);
if(r1(R+518)){{goto L687b01;}}
}
B687af4:L687af4:{c.instructions+=4;NFSU2_TR(0x687af4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B687af7:{NFSU2_TR(0x687af7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687af8:{NFSU2_TR(0x687af8);
__builtin_memmove((R+4),(R+0),4);
}
B687afa:{NFSU2_TR(0x687afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687affull));
TAIL_STATIC(0x67269fu,672);
}
B687aff:L687aff:{c.instructions+=1;NFSU2_TR(0x687aff);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687ae5u);}goto L687ae5;}
}
B687b01:L687b01:{c.instructions+=1;NFSU2_TR(0x687b01);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B687b03:L687b03:{c.instructions+=3;NFSU2_TR(0x687b03);
__builtin_memmove((R+4),(R+24),4);
}
B687b05:{NFSU2_TR(0x687b05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687b06:{NFSU2_TR(0x687b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687b0bull));
TAIL_STATIC(0x68512bu,685);
}
B687b0b:L687b0b:{c.instructions+=2;NFSU2_TR(0x687b0b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
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
B687b0f:{NFSU2_TR(0x687b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687b53;}}
}
B687b11:L687b11:{c.instructions+=2;NFSU2_TR(0x687b11);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687b13:{NFSU2_TR(0x687b13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687b18ull));
TAIL_STATIC(0x645362u,645);
}
B687b18:L687b18:{c.instructions+=2;NFSU2_TR(0x687b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687b1a:{NFSU2_TR(0x687b1a);
if(r1(R+518)){{goto L687b2e;}}
}
B687b1c:L687b1c:{c.instructions+=5;NFSU2_TR(0x687b1c);
u8 U[4];
w4(U+0,u32(0x7abaacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687b21:{NFSU2_TR(0x687b21);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B687b24:{NFSU2_TR(0x687b24);
__builtin_memmove((R+4),(R+0),4);
}
B687b26:{NFSU2_TR(0x687b26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687b27:{NFSU2_TR(0x687b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687b2cull));
TAIL_STATIC(0x672498u,672);
}
B687b2c:L687b2c:{c.instructions+=1;NFSU2_TR(0x687b2c);
{goto L687b30;}
}
B687b2e:L687b2e:{c.instructions+=1;NFSU2_TR(0x687b2e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B687b30:L687b30:{c.instructions+=2;NFSU2_TR(0x687b30);
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
B687b32:{NFSU2_TR(0x687b32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687b50;}}
}
B687b34:L687b34:{c.instructions+=6;NFSU2_TR(0x687b34);
u8 U[4];
w4(U+0,u32(0x7aba8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687b39:{NFSU2_TR(0x687b39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687b3a:{NFSU2_TR(0x687b3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B687b3d:{NFSU2_TR(0x687b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687b3e:{NFSU2_TR(0x687b3e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B687b40:{NFSU2_TR(0x687b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687b45ull));
TAIL_STATIC(0x64307cu,643);
}
B687b45:L687b45:{c.instructions+=4;NFSU2_TR(0x687b45);
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
B687b48:{NFSU2_TR(0x687b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687b4b:{NFSU2_TR(0x687b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687b4e:{NFSU2_TR(0x687b4e);
{goto L687b53;}
}
B687b50:L687b50:{c.instructions+=1;NFSU2_TR(0x687b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B687b53:L687b53:{c.instructions+=1;NFSU2_TR(0x687b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B687b54:L687b54:{c.instructions+=4;NFSU2_TR(0x687b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B687b55:{NFSU2_TR(0x687b55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687b56:{NFSU2_TR(0x687b56);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B687b57:{NFSU2_TR(0x687b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B687c0a:L687c0a:{c.instructions+=12;NFSU2_TR(0x687c0a);
__builtin_memmove((R+28),(R+28),4);
}
B687c0c:{NFSU2_TR(0x687c0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687c0d:{NFSU2_TR(0x687c0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687c0e:{NFSU2_TR(0x687c0e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B687c10:{NFSU2_TR(0x687c10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687c11:{NFSU2_TR(0x687c11);
__builtin_memmove(gp(0x8a68d8),(R+24),4);
}
B687c17:{NFSU2_TR(0x687c17);
__builtin_memmove(gp(0x8a68d4),(R+24),4);
}
B687c1d:{NFSU2_TR(0x687c1d);
s4(0x8a68cc,u32(0x8a64d8ull));
}
B687c27:{NFSU2_TR(0x687c27);
s4(0x8a68c8,u32(0x8a5d08ull));
}
B687c31:{NFSU2_TR(0x687c31);
__builtin_memmove(gp(0x8a64d8),(R+24),2);
}
B687c38:{NFSU2_TR(0x687c38);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B687c3b:{NFSU2_TR(0x687c3b);
__builtin_memmove(gp(0x8a68d0),(R+0),4);
}
B687c40:L687c40:{c.instructions+=3;NFSU2_TR(0x687c40);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x80a278ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B687c48:{NFSU2_TR(0x687c48);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687c4a:{NFSU2_TR(0x687c4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687d27;}}
}
B687c50:L687c50:{c.instructions+=2;NFSU2_TR(0x687c50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B687c52:{NFSU2_TR(0x687c52);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L687c6f;}}
}
B687c54:L687c54:{c.instructions+=2;NFSU2_TR(0x687c54);
__builtin_memmove((R+4),gp(0x8a68e0),4);
}
B687c5a:{NFSU2_TR(0x687c5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687c5full));
TAIL_STATIC(0x686fffu,686);
}
B687c5f:L687c5f:{c.instructions+=3;NFSU2_TR(0x687c5f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B687c61:{NFSU2_TR(0x687c61);
__builtin_memmove(gp(0x8a68d0),(R+0),4);
}
B687c66:{NFSU2_TR(0x687c66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L687c6f;}}
}
B687c68:L687c68:{c.instructions+=2;NFSU2_TR(0x687c68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B687c6a:{NFSU2_TR(0x687c6a);
__builtin_memmove(gp(0x8a68d0),(R+0),4);
}
B687c6f:L687c6f:{c.instructions+=3;NFSU2_TR(0x687c6f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x80a3c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B687c77:{NFSU2_TR(0x687c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687c79:{NFSU2_TR(0x687c79);
if(r1(R+518)){{goto L687cea;}}
}
B687c7b:L687c7b:{c.instructions+=2;NFSU2_TR(0x687c7b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B687c7d:{NFSU2_TR(0x687c7d);
if(r1(R+519)){{goto L687cea;}}
}
B687c7f:L687c7f:{c.instructions+=3;NFSU2_TR(0x687c7f);
w4(R+28,u32(0x127ull));
}
B687c84:{NFSU2_TR(0x687c84);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687c86:{NFSU2_TR(0x687c86);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L687cef;}}
}
B687c88:L687c88:{c.instructions+=4;NFSU2_TR(0x687c88);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B687c8a:{NFSU2_TR(0x687c8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80a860ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B687c91:{NFSU2_TR(0x687c91);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687c93:{NFSU2_TR(0x687c93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687cef;}}
}
B687c95:L687c95:{c.instructions+=3;NFSU2_TR(0x687c95);
__builtin_memmove((R+0),gp(0x8a68cc),4);
}
B687c9a:{NFSU2_TR(0x687c9a);
w1(R+512,u8((r4(R+0))<(u32(0x8a68beull))));
}
B687c9f:{NFSU2_TR(0x687c9f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6880e0u,688);}
}
B687ca5:L687ca5:{c.instructions+=13;NFSU2_TR(0x687ca5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80a610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B687cac:{NFSU2_TR(0x687cac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B687cad:{NFSU2_TR(0x687cad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B687cae:{NFSU2_TR(0x687cae);
__builtin_memmove(gp(0x8a68cc),(R+0),4);
}
B687cb3:{NFSU2_TR(0x687cb3);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B687cb6:{NFSU2_TR(0x687cb6);
s4(0x8a68c8,u32(u32(m4(0x8a68c8))+u32(u32(0x4ull))));
}
B687cbd:{NFSU2_TR(0x687cbd);
__builtin_memmove((R+0),gp(0x8a68c0),4);
}
B687cc2:{NFSU2_TR(0x687cc2);
__builtin_memmove((R+4),gp(0x8a68c8),4);
}
B687cc8:{NFSU2_TR(0x687cc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B687cca:{NFSU2_TR(0x687cca);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B687ccd:{NFSU2_TR(0x687ccd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a68d4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687cd4:{NFSU2_TR(0x687cd4);
__builtin_memmove(gp(0x8a68d0),(R+0),4);
}
B687cd9:{NFSU2_TR(0x687cd9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687c40u);}goto L687c40;}}
}
B687cdf:L687cdf:{c.instructions+=2;NFSU2_TR(0x687cdf);
s4(0x8a68d4,u32(u32(m4(0x8a68d4))-u32(u32(0x1ull))));
}
B687ce5:{NFSU2_TR(0x687ce5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687c40u);}goto L687c40;}
}
B687cea:L687cea:{c.instructions+=1;NFSU2_TR(0x687cea);
w4(R+28,u32(0x127ull));
}
B687cef:L687cef:{c.instructions+=3;NFSU2_TR(0x687cef);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x80a4c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B687cf7:{NFSU2_TR(0x687cf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687cf9:{NFSU2_TR(0x687cf9);
if(r1(R+518)){TAIL_STATIC(0x68801eu,688);}
}
B687cff:L687cff:{c.instructions+=2;NFSU2_TR(0x687cff);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B687d01:{NFSU2_TR(0x687d01);
if(r1(R+519)){TAIL_STATIC(0x68801eu,688);}
}
B687d07:L687d07:{c.instructions+=2;NFSU2_TR(0x687d07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687d09:{NFSU2_TR(0x687d09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x68801eu,688);}
}
B687d0f:L687d0f:{c.instructions+=4;NFSU2_TR(0x687d0f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B687d11:{NFSU2_TR(0x687d11);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80a860ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B687d18:{NFSU2_TR(0x687d18);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687d1a:{NFSU2_TR(0x687d1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x68801eu,688);}
}
B687d20:L687d20:{c.instructions+=1;NFSU2_TR(0x687d20);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80a610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B687d27:L687d27:{c.instructions+=11;NFSU2_TR(0x687d27);
__builtin_memmove((R+0),gp(0x8a68c8),4);
}
B687d2c:{NFSU2_TR(0x687d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B687d2f:{NFSU2_TR(0x687d2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80a1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B687d36:{NFSU2_TR(0x687d36);
__builtin_memmove((R+12),(R+24),4);
}
B687d38:{NFSU2_TR(0x687d38);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B687d3b:{NFSU2_TR(0x687d3b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B687d3d:{NFSU2_TR(0x687d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B687d40:{NFSU2_TR(0x687d40);
__builtin_memmove(gp(0x8a68c4),(R+0),4);
}
B687d45:{NFSU2_TR(0x687d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B687d48:{NFSU2_TR(0x687d48);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B687d4b:{NFSU2_TR(0x687d4b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L687f4d;}}
}
B687d51:L687d51:{c.instructions+=1;NFSU2_TR(0x687d51);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6880f9ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B687d58:L687d58:{c.instructions+=3;NFSU2_TR(0x687d58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d5a:{NFSU2_TR(0x687d5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d5c:{NFSU2_TR(0x687d5c);
{goto L687f42;}
}
B687d61:L687d61:{c.instructions+=3;NFSU2_TR(0x687d61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d63:{NFSU2_TR(0x687d63);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d65:{NFSU2_TR(0x687d65);
{goto L687f42;}
}
B687d6a:L687d6a:{c.instructions+=3;NFSU2_TR(0x687d6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d6c:{NFSU2_TR(0x687d6c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d6e:{NFSU2_TR(0x687d6e);
{goto L687f42;}
}
B687d73:L687d73:{c.instructions+=3;NFSU2_TR(0x687d73);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d75:{NFSU2_TR(0x687d75);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d77:{NFSU2_TR(0x687d77);
{goto L687f42;}
}
B687d7c:L687d7c:{c.instructions+=3;NFSU2_TR(0x687d7c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d7e:{NFSU2_TR(0x687d7e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d80:{NFSU2_TR(0x687d80);
{goto L687f42;}
}
B687d85:L687d85:{c.instructions+=3;NFSU2_TR(0x687d85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d87:{NFSU2_TR(0x687d87);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d89:{NFSU2_TR(0x687d89);
{goto L687f42;}
}
B687d8e:L687d8e:{c.instructions+=3;NFSU2_TR(0x687d8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d90:{NFSU2_TR(0x687d90);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d92:{NFSU2_TR(0x687d92);
{goto L687f42;}
}
B687d97:L687d97:{c.instructions+=3;NFSU2_TR(0x687d97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d99:{NFSU2_TR(0x687d99);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687d9b:{NFSU2_TR(0x687d9b);
{goto L687f42;}
}
B687da0:L687da0:{c.instructions+=3;NFSU2_TR(0x687da0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687da2:{NFSU2_TR(0x687da2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687da4:{NFSU2_TR(0x687da4);
{goto L687f42;}
}
B687da9:L687da9:{c.instructions+=3;NFSU2_TR(0x687da9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dab:{NFSU2_TR(0x687dab);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dad:{NFSU2_TR(0x687dad);
{goto L687f42;}
}
B687db2:L687db2:{c.instructions+=3;NFSU2_TR(0x687db2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687db4:{NFSU2_TR(0x687db4);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687db6:{NFSU2_TR(0x687db6);
{goto L687f42;}
}
B687dbb:L687dbb:{c.instructions+=3;NFSU2_TR(0x687dbb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dbd:{NFSU2_TR(0x687dbd);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dbf:{NFSU2_TR(0x687dbf);
{goto L687f42;}
}
B687dc4:L687dc4:{c.instructions+=3;NFSU2_TR(0x687dc4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dc6:{NFSU2_TR(0x687dc6);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dc8:{NFSU2_TR(0x687dc8);
{goto L687f42;}
}
B687dcd:L687dcd:{c.instructions+=3;NFSU2_TR(0x687dcd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dcf:{NFSU2_TR(0x687dcf);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dd1:{NFSU2_TR(0x687dd1);
{goto L687f42;}
}
B687dd6:L687dd6:{c.instructions+=3;NFSU2_TR(0x687dd6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dd8:{NFSU2_TR(0x687dd8);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dda:{NFSU2_TR(0x687dda);
{goto L687f42;}
}
B687ddf:L687ddf:{c.instructions+=3;NFSU2_TR(0x687ddf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687de1:{NFSU2_TR(0x687de1);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687de3:{NFSU2_TR(0x687de3);
{goto L687f42;}
}
B687de8:L687de8:{c.instructions+=3;NFSU2_TR(0x687de8);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dea:{NFSU2_TR(0x687dea);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dec:{NFSU2_TR(0x687dec);
{goto L687f42;}
}
B687df1:L687df1:{c.instructions+=3;NFSU2_TR(0x687df1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687df3:{NFSU2_TR(0x687df3);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687df5:{NFSU2_TR(0x687df5);
{goto L687f42;}
}
B687dfa:L687dfa:{c.instructions+=3;NFSU2_TR(0x687dfa);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dfc:{NFSU2_TR(0x687dfc);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687dfe:{NFSU2_TR(0x687dfe);
{goto L687f42;}
}
B687e03:L687e03:{c.instructions+=3;NFSU2_TR(0x687e03);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e05:{NFSU2_TR(0x687e05);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e07:{NFSU2_TR(0x687e07);
{goto L687f42;}
}
B687e0c:L687e0c:{c.instructions+=3;NFSU2_TR(0x687e0c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e0e:{NFSU2_TR(0x687e0e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e10:{NFSU2_TR(0x687e10);
{goto L687f42;}
}
B687e15:L687e15:{c.instructions+=3;NFSU2_TR(0x687e15);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e17:{NFSU2_TR(0x687e17);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e19:{NFSU2_TR(0x687e19);
{goto L687f42;}
}
B687e1e:L687e1e:{c.instructions+=3;NFSU2_TR(0x687e1e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e20:{NFSU2_TR(0x687e20);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e22:{NFSU2_TR(0x687e22);
{goto L687f42;}
}
B687e27:L687e27:{c.instructions+=3;NFSU2_TR(0x687e27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e29:{NFSU2_TR(0x687e29);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e2b:{NFSU2_TR(0x687e2b);
{goto L687f42;}
}
B687e30:L687e30:{c.instructions+=3;NFSU2_TR(0x687e30);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e32:{NFSU2_TR(0x687e32);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e34:{NFSU2_TR(0x687e34);
{goto L687f42;}
}
B687e39:L687e39:{c.instructions+=3;NFSU2_TR(0x687e39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e3b:{NFSU2_TR(0x687e3b);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e3d:{NFSU2_TR(0x687e3d);
{goto L687f42;}
}
B687e42:L687e42:{c.instructions+=3;NFSU2_TR(0x687e42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e44:{NFSU2_TR(0x687e44);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e46:{NFSU2_TR(0x687e46);
{goto L687f42;}
}
B687e4b:L687e4b:{c.instructions+=3;NFSU2_TR(0x687e4b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e4d:{NFSU2_TR(0x687e4d);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e4f:{NFSU2_TR(0x687e4f);
{goto L687f42;}
}
B687e54:L687e54:{c.instructions+=3;NFSU2_TR(0x687e54);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e56:{NFSU2_TR(0x687e56);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e58:{NFSU2_TR(0x687e58);
{goto L687f42;}
}
B687e5d:L687e5d:{c.instructions+=3;NFSU2_TR(0x687e5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e5f:{NFSU2_TR(0x687e5f);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e61:{NFSU2_TR(0x687e61);
{goto L687f42;}
}
B687e66:L687e66:{c.instructions+=3;NFSU2_TR(0x687e66);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e68:{NFSU2_TR(0x687e68);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e6a:{NFSU2_TR(0x687e6a);
{goto L687f42;}
}
B687e6f:L687e6f:{c.instructions+=3;NFSU2_TR(0x687e6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e71:{NFSU2_TR(0x687e71);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e73:{NFSU2_TR(0x687e73);
{goto L687f42;}
}
B687e78:L687e78:{c.instructions+=3;NFSU2_TR(0x687e78);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e7a:{NFSU2_TR(0x687e7a);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e7c:{NFSU2_TR(0x687e7c);
{goto L687f42;}
}
B687e81:L687e81:{c.instructions+=3;NFSU2_TR(0x687e81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e83:{NFSU2_TR(0x687e83);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e85:{NFSU2_TR(0x687e85);
{goto L687f42;}
}
B687e8a:L687e8a:{c.instructions+=3;NFSU2_TR(0x687e8a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e8c:{NFSU2_TR(0x687e8c);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e8e:{NFSU2_TR(0x687e8e);
{goto L687f42;}
}
B687e93:L687e93:{c.instructions+=3;NFSU2_TR(0x687e93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e95:{NFSU2_TR(0x687e95);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e97:{NFSU2_TR(0x687e97);
{goto L687f42;}
}
B687e9c:L687e9c:{c.instructions+=3;NFSU2_TR(0x687e9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687e9e:{NFSU2_TR(0x687e9e);
u8 U[4];
w4(U+0,u32(0x26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ea0:{NFSU2_TR(0x687ea0);
{goto L687f42;}
}
B687ea5:L687ea5:{c.instructions+=3;NFSU2_TR(0x687ea5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ea7:{NFSU2_TR(0x687ea7);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ea9:{NFSU2_TR(0x687ea9);
{goto L687f42;}
}
B687eae:L687eae:{c.instructions+=3;NFSU2_TR(0x687eae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687eb0:{NFSU2_TR(0x687eb0);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687eb2:{NFSU2_TR(0x687eb2);
{goto L687f42;}
}
B687eb7:L687eb7:{c.instructions+=3;NFSU2_TR(0x687eb7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687eb9:{NFSU2_TR(0x687eb9);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ebb:{NFSU2_TR(0x687ebb);
{goto L687f42;}
}
B687ec0:L687ec0:{c.instructions+=3;NFSU2_TR(0x687ec0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ec2:{NFSU2_TR(0x687ec2);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ec4:{NFSU2_TR(0x687ec4);
{goto L687f42;}
}
B687ec6:L687ec6:{c.instructions+=3;NFSU2_TR(0x687ec6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ec8:{NFSU2_TR(0x687ec8);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687eca:{NFSU2_TR(0x687eca);
{goto L687f42;}
}
B687ecc:L687ecc:{c.instructions+=3;NFSU2_TR(0x687ecc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ece:{NFSU2_TR(0x687ece);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ed0:{NFSU2_TR(0x687ed0);
{goto L687f42;}
}
B687ed2:L687ed2:{c.instructions+=3;NFSU2_TR(0x687ed2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ed4:{NFSU2_TR(0x687ed4);
u8 U[4];
w4(U+0,u32(0x2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ed6:{NFSU2_TR(0x687ed6);
{goto L687f42;}
}
B687ed8:L687ed8:{c.instructions+=3;NFSU2_TR(0x687ed8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687eda:{NFSU2_TR(0x687eda);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687edc:{NFSU2_TR(0x687edc);
{goto L687f42;}
}
B687ede:L687ede:{c.instructions+=3;NFSU2_TR(0x687ede);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ee0:{NFSU2_TR(0x687ee0);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ee2:{NFSU2_TR(0x687ee2);
{goto L687f42;}
}
B687ee4:L687ee4:{c.instructions+=3;NFSU2_TR(0x687ee4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ee6:{NFSU2_TR(0x687ee6);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ee8:{NFSU2_TR(0x687ee8);
{goto L687f42;}
}
B687eea:L687eea:{c.instructions+=3;NFSU2_TR(0x687eea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687eec:{NFSU2_TR(0x687eec);
u8 U[4];
w4(U+0,u32(0x31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687eee:{NFSU2_TR(0x687eee);
{goto L687f42;}
}
B687ef0:L687ef0:{c.instructions+=3;NFSU2_TR(0x687ef0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ef2:{NFSU2_TR(0x687ef2);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ef4:{NFSU2_TR(0x687ef4);
{goto L687f42;}
}
B687ef6:L687ef6:{c.instructions+=3;NFSU2_TR(0x687ef6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687ef8:{NFSU2_TR(0x687ef8);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687efa:{NFSU2_TR(0x687efa);
{goto L687f42;}
}
B687efc:L687efc:{c.instructions+=3;NFSU2_TR(0x687efc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687efe:{NFSU2_TR(0x687efe);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f00:{NFSU2_TR(0x687f00);
{goto L687f42;}
}
B687f02:L687f02:{c.instructions+=3;NFSU2_TR(0x687f02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f04:{NFSU2_TR(0x687f04);
u8 U[4];
w4(U+0,u32(0x35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f06:{NFSU2_TR(0x687f06);
{goto L687f42;}
}
B687f08:L687f08:{c.instructions+=3;NFSU2_TR(0x687f08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f0a:{NFSU2_TR(0x687f0a);
u8 U[4];
w4(U+0,u32(0x36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f0c:{NFSU2_TR(0x687f0c);
{goto L687f42;}
}
B687f0e:L687f0e:{c.instructions+=3;NFSU2_TR(0x687f0e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f10:{NFSU2_TR(0x687f10);
u8 U[4];
w4(U+0,u32(0x37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f12:{NFSU2_TR(0x687f12);
{goto L687f42;}
}
B687f14:L687f14:{c.instructions+=3;NFSU2_TR(0x687f14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f16:{NFSU2_TR(0x687f16);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f18:{NFSU2_TR(0x687f18);
{goto L687f42;}
}
B687f1a:L687f1a:{c.instructions+=3;NFSU2_TR(0x687f1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f1c:{NFSU2_TR(0x687f1c);
u8 U[4];
w4(U+0,u32(0x39ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f1e:{NFSU2_TR(0x687f1e);
{goto L687f42;}
}
B687f20:L687f20:{c.instructions+=3;NFSU2_TR(0x687f20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f22:{NFSU2_TR(0x687f22);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f24:{NFSU2_TR(0x687f24);
{goto L687f42;}
}
B687f26:L687f26:{c.instructions+=3;NFSU2_TR(0x687f26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f28:{NFSU2_TR(0x687f28);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f2a:{NFSU2_TR(0x687f2a);
{goto L687f42;}
}
B687f2c:L687f2c:{c.instructions+=3;NFSU2_TR(0x687f2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f2e:{NFSU2_TR(0x687f2e);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f30:{NFSU2_TR(0x687f30);
{goto L687f42;}
}
B687f32:L687f32:{c.instructions+=3;NFSU2_TR(0x687f32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f34:{NFSU2_TR(0x687f34);
u8 U[4];
w4(U+0,u32(0x3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f36:{NFSU2_TR(0x687f36);
{goto L687f42;}
}
B687f38:L687f38:{c.instructions+=3;NFSU2_TR(0x687f38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f3a:{NFSU2_TR(0x687f3a);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f3c:{NFSU2_TR(0x687f3c);
{goto L687f42;}
}
B687f3e:L687f3e:{c.instructions+=2;NFSU2_TR(0x687f3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f40:{NFSU2_TR(0x687f40);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f42:L687f42:{c.instructions+=2;NFSU2_TR(0x687f42);
__builtin_memmove((R+4),gp(0x8a68e0),4);
}
B687f48:{NFSU2_TR(0x687f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687f4dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68765du);}goto L68765d;}
}
B687f4d:L687f4d:{c.instructions+=9;NFSU2_TR(0x687f4d);
__builtin_memmove((R+0),gp(0x8a68cc),4);
}
B687f52:{NFSU2_TR(0x687f52);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80a178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B687f59:{NFSU2_TR(0x687f59);
w4(R+24,u32(0-u32(r4(R+24))));
}
B687f5b:{NFSU2_TR(0x687f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B687f5e:{NFSU2_TR(0x687f5e);
__builtin_memmove(gp(0x8a68cc),(R+0),4);
}
B687f63:{NFSU2_TR(0x687f63);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B687f66:{NFSU2_TR(0x687f66);
s4(0x8a68c8,u32(u32(m4(0x8a68c8))-u32(r4(R+12))));
}
B687f6c:{NFSU2_TR(0x687f6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687f6e:{NFSU2_TR(0x687f6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687fc8;}}
}
B687f70:L687f70:{c.instructions+=2;NFSU2_TR(0x687f70);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687f72:{NFSU2_TR(0x687f72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687fc8;}}
}
B687f74:L687f74:{c.instructions+=13;NFSU2_TR(0x687f74);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B687f75:{NFSU2_TR(0x687f75);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B687f76:{NFSU2_TR(0x687f76);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B687f78:{NFSU2_TR(0x687f78);
__builtin_memmove(gp(0x8a68cc),(R+0),4);
}
B687f7d:{NFSU2_TR(0x687f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B687f7e:{NFSU2_TR(0x687f7e);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B687f81:{NFSU2_TR(0x687f81);
s4(0x8a68c8,u32(u32(m4(0x8a68c8))+u32(u32(0x4ull))));
}
B687f88:{NFSU2_TR(0x687f88);
__builtin_memmove((R+0),gp(0x8a68c4),4);
}
B687f8d:{NFSU2_TR(0x687f8d);
__builtin_memmove((R+4),gp(0x8a68c8),4);
}
B687f93:{NFSU2_TR(0x687f93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B687f95:{NFSU2_TR(0x687f95);
__builtin_memmove((R+0),gp(0x8a68d0),4);
}
B687f9a:{NFSU2_TR(0x687f9a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687f9c:{NFSU2_TR(0x687f9c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L687fbb;}}
}
B687f9e:L687f9e:{c.instructions+=2;NFSU2_TR(0x687f9e);
__builtin_memmove((R+4),gp(0x8a68e0),4);
}
B687fa4:{NFSU2_TR(0x687fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x687fa9ull));
TAIL_STATIC(0x686fffu,686);
}
B687fa9:L687fa9:{c.instructions+=3;NFSU2_TR(0x687fa9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687fab:{NFSU2_TR(0x687fab);
__builtin_memmove(gp(0x8a68d0),(R+0),4);
}
B687fb0:{NFSU2_TR(0x687fb0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L687fbb;}}
}
B687fb2:L687fb2:{c.instructions+=3;NFSU2_TR(0x687fb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B687fb4:{NFSU2_TR(0x687fb4);
__builtin_memmove(gp(0x8a68d0),(R+0),4);
}
B687fb9:{NFSU2_TR(0x687fb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687fbb:L687fbb:{c.instructions+=1;NFSU2_TR(0x687fbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x687c40u);}goto L687c40;}}
}
B687fc1:L687fc1:{c.instructions+=2;NFSU2_TR(0x687fc1);
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
B687fc3:{NFSU2_TR(0x687fc3);
TAIL_STATIC(0x6880f5u,688);
}
B687fc8:L687fc8:{c.instructions+=4;NFSU2_TR(0x687fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B687fcb:{NFSU2_TR(0x687fcb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80a5d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B687fd2:{NFSU2_TR(0x687fd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B687fd4:{NFSU2_TR(0x687fd4);
if(r1(R+518)){{goto L687ff8;}}
}
B687fd6:L687fd6:{c.instructions+=2;NFSU2_TR(0x687fd6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B687fd8:{NFSU2_TR(0x687fd8);
if(r1(R+519)){{goto L687ff8;}}
}
B687fda:L687fda:{c.instructions+=2;NFSU2_TR(0x687fda);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x127ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x127ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687fe0:{NFSU2_TR(0x687fe0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L687ff8;}}
}
B687fe2:L687fe2:{c.instructions+=4;NFSU2_TR(0x687fe2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B687fe4:{NFSU2_TR(0x687fe4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80a860ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B687feb:{NFSU2_TR(0x687feb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B687fed:{NFSU2_TR(0x687fed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L687ff8;}}
}
B687fef:L687fef:{c.instructions+=2;NFSU2_TR(0x687fef);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80a610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B687ff6:{NFSU2_TR(0x687ff6);
{goto L687fff;}
}
B687ff8:L687ff8:{c.instructions+=1;NFSU2_TR(0x687ff8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80a380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B687fff:L687fff:{c.instructions+=1;NFSU2_TR(0x687fff);
w1(R+512,u8((r4(R+0))<(u32(0x8a68beull))));
TAIL_STATIC(0x688004u,688);
}
XIT:NFSU2_TR_EXIT(0x687,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
