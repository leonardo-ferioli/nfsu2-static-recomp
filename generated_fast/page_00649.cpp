#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_648(u8* __restrict R,Cpu& c);
u32 body_64a(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x649,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x649,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_649(u8* __restrict R,Cpu& c);
u32 page_649(Cpu& c){return body_649(c.regs.data(),c);}
__attribute__((noinline)) u32 body_649(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x649000:goto L649000;
case 0x649001:c.instructions+=3;goto B649001;
case 0x649002:c.instructions+=2;goto B649002;
case 0x649003:c.instructions+=1;goto B649003;
case 0x649006:goto L649006;
case 0x649009:c.instructions+=10;goto B649009;
case 0x64900c:c.instructions+=9;goto B64900c;
case 0x64900f:c.instructions+=8;goto B64900f;
case 0x649015:c.instructions+=7;goto B649015;
case 0x649018:c.instructions+=6;goto B649018;
case 0x64901d:c.instructions+=5;goto B64901d;
case 0x64901f:c.instructions+=4;goto B64901f;
case 0x649022:c.instructions+=3;goto B649022;
case 0x649025:c.instructions+=2;goto B649025;
case 0x649026:c.instructions+=1;goto B649026;
case 0x64902b:goto L64902b;
case 0x64902e:c.instructions+=1;goto B64902e;
case 0x649033:goto L649033;
case 0x649036:c.instructions+=4;goto B649036;
case 0x649039:c.instructions+=3;goto B649039;
case 0x64903f:c.instructions+=2;goto B64903f;
case 0x649044:c.instructions+=1;goto B649044;
case 0x649049:goto L649049;
case 0x64904c:c.instructions+=1;goto B64904c;
case 0x649052:goto L649052;
case 0x649058:c.instructions+=2;goto B649058;
case 0x64905b:c.instructions+=1;goto B64905b;
case 0x64905d:goto L64905d;
case 0x649062:goto L649062;
case 0x649065:c.instructions+=1;goto B649065;
case 0x649067:goto L649067;
case 0x64906a:c.instructions+=3;goto B64906a;
case 0x64906d:c.instructions+=2;goto B64906d;
case 0x64906f:c.instructions+=1;goto B64906f;
case 0x649071:goto L649071;
case 0x649078:c.instructions+=1;goto B649078;
case 0x64907d:goto L64907d;
case 0x649080:c.instructions+=1;goto B649080;
case 0x649086:goto L649086;
case 0x64908c:c.instructions+=2;goto B64908c;
case 0x649091:c.instructions+=1;goto B649091;
case 0x649096:goto L649096;
case 0x649099:c.instructions+=1;goto B649099;
case 0x64909f:goto L64909f;
case 0x6490a2:c.instructions+=6;goto B6490a2;
case 0x6490a7:c.instructions+=5;goto B6490a7;
case 0x6490a9:c.instructions+=4;goto B6490a9;
case 0x6490ac:c.instructions+=3;goto B6490ac;
case 0x6490af:c.instructions+=2;goto B6490af;
case 0x6490b0:c.instructions+=1;goto B6490b0;
case 0x6490b5:goto L6490b5;
case 0x6490b8:goto L6490b8;
case 0x6490bd:c.instructions+=1;goto B6490bd;
case 0x6490c2:goto L6490c2;
case 0x6490c5:c.instructions+=4;goto B6490c5;
case 0x6490c8:c.instructions+=3;goto B6490c8;
case 0x6490ce:c.instructions+=2;goto B6490ce;
case 0x6490d3:c.instructions+=1;goto B6490d3;
case 0x6490d5:goto L6490d5;
case 0x6490da:c.instructions+=1;goto B6490da;
case 0x6490dc:goto L6490dc;
case 0x6490e1:c.instructions+=1;goto B6490e1;
case 0x6490e3:goto L6490e3;
case 0x6490e8:c.instructions+=1;goto B6490e8;
case 0x6490ea:goto L6490ea;
case 0x6490ef:c.instructions+=1;goto B6490ef;
case 0x6490f1:goto L6490f1;
case 0x6490f6:c.instructions+=1;goto B6490f6;
case 0x6490f8:goto L6490f8;
case 0x6490fd:c.instructions+=1;goto B6490fd;
case 0x6490ff:goto L6490ff;
case 0x649104:goto L649104;
case 0x649106:goto L649106;
case 0x64910d:c.instructions+=1;goto B64910d;
case 0x64910f:goto L64910f;
case 0x649112:goto L649112;
case 0x649115:c.instructions+=6;goto B649115;
case 0x649118:c.instructions+=5;goto B649118;
case 0x649119:c.instructions+=4;goto B649119;
case 0x64911b:c.instructions+=3;goto B64911b;
case 0x64911e:c.instructions+=2;goto B64911e;
case 0x64911f:c.instructions+=1;goto B64911f;
case 0x649124:goto L649124;
case 0x649126:c.instructions+=2;goto B649126;
case 0x649128:c.instructions+=1;goto B649128;
case 0x64912e:goto L64912e;
case 0x649131:c.instructions+=5;goto B649131;
case 0x649133:c.instructions+=4;goto B649133;
case 0x649135:c.instructions+=3;goto B649135;
case 0x649138:c.instructions+=2;goto B649138;
case 0x649139:c.instructions+=1;goto B649139;
case 0x64913e:goto L64913e;
case 0x649140:c.instructions+=2;goto B649140;
case 0x649142:c.instructions+=1;goto B649142;
case 0x649148:goto L649148;
case 0x64914b:c.instructions+=5;goto B64914b;
case 0x64914d:c.instructions+=4;goto B64914d;
case 0x64914f:c.instructions+=3;goto B64914f;
case 0x649152:c.instructions+=2;goto B649152;
case 0x649153:c.instructions+=1;goto B649153;
case 0x649158:goto L649158;
case 0x64915a:c.instructions+=2;goto B64915a;
case 0x64915c:c.instructions+=1;goto B64915c;
case 0x649162:goto L649162;
case 0x649165:c.instructions+=5;goto B649165;
case 0x649167:c.instructions+=4;goto B649167;
case 0x649169:c.instructions+=3;goto B649169;
case 0x64916c:c.instructions+=2;goto B64916c;
case 0x64916d:c.instructions+=1;goto B64916d;
case 0x649172:goto L649172;
case 0x649174:c.instructions+=2;goto B649174;
case 0x649176:c.instructions+=1;goto B649176;
case 0x64917c:goto L64917c;
case 0x64917f:c.instructions+=5;goto B64917f;
case 0x649181:c.instructions+=4;goto B649181;
case 0x649183:c.instructions+=3;goto B649183;
case 0x649186:c.instructions+=2;goto B649186;
case 0x649187:c.instructions+=1;goto B649187;
case 0x64918c:goto L64918c;
case 0x64918e:c.instructions+=2;goto B64918e;
case 0x649190:c.instructions+=1;goto B649190;
case 0x649196:goto L649196;
case 0x649199:c.instructions+=5;goto B649199;
case 0x64919b:c.instructions+=4;goto B64919b;
case 0x64919d:c.instructions+=3;goto B64919d;
case 0x6491a0:c.instructions+=2;goto B6491a0;
case 0x6491a1:c.instructions+=1;goto B6491a1;
case 0x6491a6:goto L6491a6;
case 0x6491a8:c.instructions+=2;goto B6491a8;
case 0x6491aa:c.instructions+=1;goto B6491aa;
case 0x6491b0:goto L6491b0;
case 0x6491b3:c.instructions+=1;goto B6491b3;
case 0x6491b8:goto L6491b8;
case 0x6491bb:c.instructions+=6;goto B6491bb;
case 0x6491c0:c.instructions+=5;goto B6491c0;
case 0x6491c2:c.instructions+=4;goto B6491c2;
case 0x6491c5:c.instructions+=3;goto B6491c5;
case 0x6491c8:c.instructions+=2;goto B6491c8;
case 0x6491c9:c.instructions+=1;goto B6491c9;
case 0x6491ce:goto L6491ce;
case 0x6491d1:c.instructions+=2;goto B6491d1;
case 0x6491d6:c.instructions+=1;goto B6491d6;
case 0x6491db:goto L6491db;
case 0x6491de:c.instructions+=12;goto B6491de;
case 0x6491e0:c.instructions+=11;goto B6491e0;
case 0x6491e1:c.instructions+=10;goto B6491e1;
case 0x6491e4:c.instructions+=9;goto B6491e4;
case 0x6491e5:c.instructions+=8;goto B6491e5;
case 0x6491e8:c.instructions+=7;goto B6491e8;
case 0x6491e9:c.instructions+=6;goto B6491e9;
case 0x6491ec:c.instructions+=5;goto B6491ec;
case 0x6491ed:c.instructions+=4;goto B6491ed;
case 0x6491ee:c.instructions+=3;goto B6491ee;
case 0x6491ef:c.instructions+=2;goto B6491ef;
case 0x6491f2:c.instructions+=1;goto B6491f2;
case 0x6491f7:goto L6491f7;
case 0x6491f9:c.instructions+=1;goto B6491f9;
case 0x6491ff:goto L6491ff;
case 0x649202:c.instructions+=6;goto B649202;
case 0x649207:c.instructions+=5;goto B649207;
case 0x649208:c.instructions+=4;goto B649208;
case 0x64920b:c.instructions+=3;goto B64920b;
case 0x64920e:c.instructions+=2;goto B64920e;
case 0x64920f:c.instructions+=1;goto B64920f;
case 0x649214:goto L649214;
case 0x649217:c.instructions+=1;goto B649217;
case 0x64921c:goto L64921c;
case 0x64921e:c.instructions+=15;goto B64921e;
case 0x64921f:c.instructions+=14;goto B64921f;
case 0x649221:c.instructions+=13;goto B649221;
case 0x649222:c.instructions+=12;goto B649222;
case 0x649223:c.instructions+=11;goto B649223;
case 0x649224:c.instructions+=10;goto B649224;
case 0x649225:c.instructions+=9;goto B649225;
case 0x649227:c.instructions+=8;goto B649227;
case 0x64922a:c.instructions+=7;goto B64922a;
case 0x64922d:c.instructions+=6;goto B64922d;
case 0x64922e:c.instructions+=5;goto B64922e;
case 0x649230:c.instructions+=4;goto B649230;
case 0x649231:c.instructions+=3;goto B649231;
case 0x649234:c.instructions+=2;goto B649234;
case 0x649237:c.instructions+=1;goto B649237;
case 0x649239:goto L649239;
case 0x64923c:c.instructions+=1;goto B64923c;
case 0x64923e:goto L64923e;
case 0x649241:c.instructions+=7;goto B649241;
case 0x649243:c.instructions+=6;goto B649243;
case 0x649246:c.instructions+=5;goto B649246;
case 0x64924b:c.instructions+=4;goto B64924b;
case 0x64924c:c.instructions+=3;goto B64924c;
case 0x64924f:c.instructions+=2;goto B64924f;
case 0x649250:c.instructions+=1;goto B649250;
case 0x649255:goto L649255;
case 0x649258:c.instructions+=1;goto B649258;
case 0x64925a:goto L64925a;
case 0x64925d:c.instructions+=9;goto B64925d;
case 0x649260:c.instructions+=8;goto B649260;
case 0x649263:c.instructions+=7;goto B649263;
case 0x649266:c.instructions+=6;goto B649266;
case 0x649269:c.instructions+=5;goto B649269;
case 0x64926c:c.instructions+=4;goto B64926c;
case 0x64926d:c.instructions+=3;goto B64926d;
case 0x649270:c.instructions+=2;goto B649270;
case 0x649272:c.instructions+=1;goto B649272;
case 0x649277:goto L649277;
case 0x649279:c.instructions+=2;goto B649279;
case 0x64927c:c.instructions+=1;goto B64927c;
case 0x649282:goto L649282;
case 0x649284:c.instructions+=1;goto B649284;
case 0x64928a:goto L64928a;
case 0x64928f:c.instructions+=4;goto B64928f;
case 0x649290:c.instructions+=3;goto B649290;
case 0x649293:c.instructions+=2;goto B649293;
case 0x649296:c.instructions+=1;goto B649296;
case 0x649297:goto L649297;
case 0x64929c:goto L64929c;
case 0x64929f:goto L64929f;
case 0x6492a6:c.instructions+=1;goto B6492a6;
case 0x6492ab:goto L6492ab;
case 0x6492ae:c.instructions+=2;goto B6492ae;
case 0x6492b0:c.instructions+=1;goto B6492b0;
case 0x6492b2:goto L6492b2;
case 0x6492b5:c.instructions+=4;goto B6492b5;
case 0x6492b7:c.instructions+=3;goto B6492b7;
case 0x6492b8:c.instructions+=2;goto B6492b8;
case 0x6492ba:c.instructions+=1;goto B6492ba;
case 0x6492c0:goto L6492c0;
case 0x6492c3:c.instructions+=1;goto B6492c3;
case 0x6492c9:goto L6492c9;
case 0x6492cc:c.instructions+=4;goto B6492cc;
case 0x6492ce:c.instructions+=3;goto B6492ce;
case 0x6492d1:c.instructions+=2;goto B6492d1;
case 0x6492d2:c.instructions+=1;goto B6492d2;
case 0x6492d4:goto L6492d4;
case 0x6492d7:goto L6492d7;
case 0x6492da:c.instructions+=1;goto B6492da;
case 0x6492dc:goto L6492dc;
case 0x6492df:c.instructions+=2;goto B6492df;
case 0x6492e1:c.instructions+=1;goto B6492e1;
case 0x6492e3:goto L6492e3;
case 0x6492e7:c.instructions+=1;goto B6492e7;
case 0x6492e9:goto L6492e9;
case 0x6492ec:c.instructions+=2;goto B6492ec;
case 0x6492ee:c.instructions+=1;goto B6492ee;
case 0x6492f0:goto L6492f0;
case 0x6492f3:c.instructions+=8;goto B6492f3;
case 0x6492f6:c.instructions+=7;goto B6492f6;
case 0x6492f9:c.instructions+=6;goto B6492f9;
case 0x6492fc:c.instructions+=5;goto B6492fc;
case 0x6492ff:c.instructions+=4;goto B6492ff;
case 0x649302:c.instructions+=3;goto B649302;
case 0x649303:c.instructions+=2;goto B649303;
case 0x649304:c.instructions+=1;goto B649304;
case 0x649309:goto L649309;
case 0x64930b:c.instructions+=3;goto B64930b;
case 0x64930d:c.instructions+=2;goto B64930d;
case 0x649310:c.instructions+=1;goto B649310;
case 0x649316:goto L649316;
case 0x649318:c.instructions+=2;goto B649318;
case 0x64931b:c.instructions+=1;goto B64931b;
case 0x64931d:goto L64931d;
case 0x649320:c.instructions+=1;goto B649320;
case 0x649322:goto L649322;
case 0x649324:c.instructions+=1;goto B649324;
case 0x649326:goto L649326;
case 0x649329:c.instructions+=2;goto B649329;
case 0x64932b:c.instructions+=1;goto B64932b;
case 0x64932d:goto L64932d;
case 0x649330:c.instructions+=2;goto B649330;
case 0x649332:c.instructions+=1;goto B649332;
case 0x649334:goto L649334;
case 0x649337:c.instructions+=2;goto B649337;
case 0x649339:c.instructions+=1;goto B649339;
case 0x64933b:goto L64933b;
case 0x64933e:c.instructions+=2;goto B64933e;
case 0x649340:c.instructions+=1;goto B649340;
case 0x649342:goto L649342;
case 0x649345:c.instructions+=5;goto B649345;
case 0x649348:c.instructions+=4;goto B649348;
case 0x649349:c.instructions+=3;goto B649349;
case 0x64934b:c.instructions+=2;goto B64934b;
case 0x64934e:c.instructions+=1;goto B64934e;
case 0x649350:goto L649350;
case 0x649353:c.instructions+=3;goto B649353;
case 0x649356:c.instructions+=2;goto B649356;
case 0x649359:c.instructions+=1;goto B649359;
case 0x64935b:goto L64935b;
case 0x649361:c.instructions+=1;goto B649361;
case 0x649363:goto L649363;
case 0x649365:c.instructions+=1;goto B649365;
case 0x649367:goto L649367;
case 0x64936a:c.instructions+=6;goto B64936a;
case 0x64936f:c.instructions+=5;goto B64936f;
case 0x649370:c.instructions+=4;goto B649370;
case 0x649373:c.instructions+=3;goto B649373;
case 0x649376:c.instructions+=2;goto B649376;
case 0x649377:c.instructions+=1;goto B649377;
case 0x64937c:goto L64937c;
case 0x64937e:goto L64937e;
case 0x649381:c.instructions+=14;goto B649381;
case 0x649382:c.instructions+=13;goto B649382;
case 0x649384:c.instructions+=12;goto B649384;
case 0x649387:c.instructions+=11;goto B649387;
case 0x649389:c.instructions+=10;goto B649389;
case 0x64938c:c.instructions+=9;goto B64938c;
case 0x64938e:c.instructions+=8;goto B64938e;
case 0x649391:c.instructions+=7;goto B649391;
case 0x649394:c.instructions+=6;goto B649394;
case 0x649397:c.instructions+=5;goto B649397;
case 0x64939a:c.instructions+=4;goto B64939a;
case 0x64939c:c.instructions+=3;goto B64939c;
case 0x64939f:c.instructions+=2;goto B64939f;
case 0x6493a1:c.instructions+=1;goto B6493a1;
case 0x6493a3:goto L6493a3;
case 0x6493a6:c.instructions+=2;goto B6493a6;
case 0x6493a9:c.instructions+=1;goto B6493a9;
case 0x6493ab:goto L6493ab;
case 0x6493ae:c.instructions+=1;goto B6493ae;
case 0x6493b0:goto L6493b0;
case 0x6493b3:c.instructions+=2;goto B6493b3;
case 0x6493b5:c.instructions+=1;goto B6493b5;
case 0x6493b7:goto L6493b7;
case 0x6493ba:c.instructions+=1;goto B6493ba;
case 0x6493c0:goto L6493c0;
case 0x6493c3:c.instructions+=11;goto B6493c3;
case 0x6493c5:c.instructions+=10;goto B6493c5;
case 0x6493c6:c.instructions+=9;goto B6493c6;
case 0x6493c8:c.instructions+=8;goto B6493c8;
case 0x6493cb:c.instructions+=7;goto B6493cb;
case 0x6493cd:c.instructions+=6;goto B6493cd;
case 0x6493d0:c.instructions+=5;goto B6493d0;
case 0x6493d2:c.instructions+=4;goto B6493d2;
case 0x6493d5:c.instructions+=3;goto B6493d5;
case 0x6493d7:c.instructions+=2;goto B6493d7;
case 0x6493da:c.instructions+=1;goto B6493da;
case 0x6493e0:goto L6493e0;
case 0x6493e3:c.instructions+=5;goto B6493e3;
case 0x6493e4:c.instructions+=4;goto B6493e4;
case 0x6493e5:c.instructions+=3;goto B6493e5;
case 0x6493e6:c.instructions+=2;goto B6493e6;
case 0x6493e7:c.instructions+=1;goto B6493e7;
case 0x6493ea:goto L6493ea;
case 0x6493ec:c.instructions+=12;goto B6493ec;
case 0x6493ed:c.instructions+=11;goto B6493ed;
case 0x6493ef:c.instructions+=10;goto B6493ef;
case 0x6493f0:c.instructions+=9;goto B6493f0;
case 0x6493f3:c.instructions+=8;goto B6493f3;
case 0x6493f4:c.instructions+=7;goto B6493f4;
case 0x6493f5:c.instructions+=6;goto B6493f5;
case 0x6493f8:c.instructions+=5;goto B6493f8;
case 0x6493fa:c.instructions+=4;goto B6493fa;
case 0x6493fd:c.instructions+=3;goto B6493fd;
case 0x6493fe:c.instructions+=2;goto B6493fe;
case 0x649401:c.instructions+=1;goto B649401;
case 0x649407:goto L649407;
case 0x64940d:goto L64940d;
case 0x64940f:c.instructions+=1;goto B64940f;
case 0x649415:goto L649415;
case 0x649418:c.instructions+=6;goto B649418;
case 0x64941a:c.instructions+=5;goto B64941a;
case 0x64941c:c.instructions+=4;goto B64941c;
case 0x64941d:c.instructions+=3;goto B64941d;
case 0x64941e:c.instructions+=2;goto B64941e;
case 0x649420:c.instructions+=1;goto B649420;
case 0x649426:goto L649426;
case 0x649429:c.instructions+=1;goto B649429;
case 0x64942b:goto L64942b;
case 0x64942e:c.instructions+=1;goto B64942e;
case 0x649434:goto L649434;
case 0x649436:c.instructions+=2;goto B649436;
case 0x649439:c.instructions+=1;goto B649439;
case 0x64943b:goto L64943b;
case 0x64943e:c.instructions+=1;goto B64943e;
case 0x649440:goto L649440;
case 0x649443:c.instructions+=1;goto B649443;
case 0x649445:goto L649445;
case 0x649448:c.instructions+=1;goto B649448;
case 0x64944a:goto L64944a;
case 0x64944d:c.instructions+=2;goto B64944d;
case 0x649450:c.instructions+=1;goto B649450;
case 0x649456:goto L649456;
case 0x649459:c.instructions+=1;goto B649459;
case 0x64945f:goto L64945f;
case 0x649462:c.instructions+=1;goto B649462;
case 0x649468:goto L649468;
case 0x64946b:c.instructions+=1;goto B64946b;
case 0x649471:goto L649471;
case 0x649474:c.instructions+=1;goto B649474;
case 0x64947a:goto L64947a;
case 0x64947c:c.instructions+=1;goto B64947c;
case 0x649482:goto L649482;
case 0x649484:c.instructions+=2;goto B649484;
case 0x649489:c.instructions+=1;goto B649489;
case 0x64948b:goto L64948b;
case 0x64948d:c.instructions+=1;goto B64948d;
case 0x649492:goto L649492;
case 0x649493:c.instructions+=1;goto B649493;
case 0x649498:goto L649498;
case 0x64949b:c.instructions+=2;goto B64949b;
case 0x6494a1:c.instructions+=1;goto B6494a1;
case 0x6494a3:goto L6494a3;
case 0x6494a9:c.instructions+=1;goto B6494a9;
case 0x6494af:goto L6494af;
case 0x6494b5:c.instructions+=1;goto B6494b5;
case 0x6494b7:goto L6494b7;
case 0x6494bd:c.instructions+=1;goto B6494bd;
case 0x6494c3:goto L6494c3;
case 0x6494c9:c.instructions+=1;goto B6494c9;
case 0x6494cf:goto L6494cf;
case 0x6494d5:c.instructions+=1;goto B6494d5;
case 0x6494d7:goto L6494d7;
case 0x6494dd:c.instructions+=1;goto B6494dd;
case 0x6494df:goto L6494df;
case 0x6494e5:goto L6494e5;
case 0x6494e7:goto L6494e7;
case 0x6494ea:c.instructions+=1;goto B6494ea;
case 0x6494ec:goto L6494ec;
case 0x6494ef:c.instructions+=2;goto B6494ef;
case 0x6494f1:c.instructions+=1;goto B6494f1;
case 0x6494f3:goto L6494f3;
case 0x6494f5:c.instructions+=1;goto B6494f5;
case 0x6494f7:goto L6494f7;
case 0x6494fa:c.instructions+=1;goto B6494fa;
case 0x6494fc:goto L6494fc;
case 0x6494ff:c.instructions+=1;goto B6494ff;
case 0x649501:goto L649501;
case 0x649505:c.instructions+=1;goto B649505;
case 0x649507:goto L649507;
case 0x64950b:c.instructions+=1;goto B64950b;
case 0x64950d:goto L64950d;
case 0x649511:c.instructions+=1;goto B649511;
case 0x649513:goto L649513;
case 0x649517:c.instructions+=1;goto B649517;
case 0x649519:goto L649519;
case 0x64951b:c.instructions+=1;goto B64951b;
case 0x64951d:goto L64951d;
case 0x649520:c.instructions+=1;goto B649520;
case 0x649522:goto L649522;
case 0x649525:c.instructions+=1;goto B649525;
case 0x649527:goto L649527;
case 0x649529:c.instructions+=2;goto B649529;
case 0x64952e:c.instructions+=1;goto B64952e;
case 0x649533:goto L649533;
case 0x649536:c.instructions+=1;goto B649536;
case 0x649538:goto L649538;
case 0x64953b:c.instructions+=1;goto B64953b;
case 0x64953d:goto L64953d;
case 0x649541:c.instructions+=1;goto B649541;
case 0x649543:goto L649543;
case 0x649547:c.instructions+=1;goto B649547;
case 0x649549:goto L649549;
case 0x64954b:c.instructions+=2;goto B64954b;
case 0x649550:c.instructions+=1;goto B649550;
case 0x649555:goto L649555;
case 0x649559:c.instructions+=1;goto B649559;
case 0x64955f:goto L64955f;
case 0x649562:c.instructions+=1;goto B649562;
case 0x649568:goto L649568;
case 0x64956a:c.instructions+=1;goto B64956a;
case 0x649570:goto L649570;
case 0x649572:c.instructions+=1;goto B649572;
case 0x649578:goto L649578;
case 0x64957a:c.instructions+=2;goto B64957a;
case 0x64957f:c.instructions+=1;goto B64957f;
case 0x649584:goto L649584;
case 0x649587:c.instructions+=1;goto B649587;
case 0x64958d:goto L64958d;
case 0x649590:c.instructions+=1;goto B649590;
case 0x649596:goto L649596;
case 0x649598:c.instructions+=3;goto B649598;
case 0x649599:c.instructions+=2;goto B649599;
case 0x64959c:c.instructions+=1;goto B64959c;
case 0x64959e:goto L64959e;
case 0x6495a1:c.instructions+=1;goto B6495a1;
case 0x6495a3:goto L6495a3;
case 0x6495a6:c.instructions+=2;goto B6495a6;
case 0x6495a9:c.instructions+=1;goto B6495a9;
case 0x6495af:goto L6495af;
case 0x6495b2:c.instructions+=1;goto B6495b2;
case 0x6495b8:goto L6495b8;
case 0x6495bb:c.instructions+=1;goto B6495bb;
case 0x6495c1:goto L6495c1;
case 0x6495c4:c.instructions+=1;goto B6495c4;
case 0x6495ca:goto L6495ca;
case 0x6495cd:c.instructions+=1;goto B6495cd;
case 0x6495d3:goto L6495d3;
case 0x6495d6:c.instructions+=1;goto B6495d6;
case 0x6495dc:goto L6495dc;
case 0x6495de:c.instructions+=2;goto B6495de;
case 0x6495e3:c.instructions+=1;goto B6495e3;
case 0x6495e8:goto L6495e8;
case 0x6495eb:c.instructions+=1;goto B6495eb;
case 0x6495f1:goto L6495f1;
case 0x6495f4:c.instructions+=1;goto B6495f4;
case 0x6495fa:goto L6495fa;
case 0x649600:c.instructions+=1;goto B649600;
case 0x649602:goto L649602;
case 0x649607:c.instructions+=2;goto B649607;
case 0x649609:c.instructions+=1;goto B649609;
case 0x64960f:goto L64960f;
case 0x649612:c.instructions+=1;goto B649612;
case 0x649618:goto L649618;
case 0x64961b:c.instructions+=1;goto B64961b;
case 0x649621:goto L649621;
case 0x649623:c.instructions+=3;goto B649623;
case 0x649624:c.instructions+=2;goto B649624;
case 0x649627:c.instructions+=1;goto B649627;
case 0x649629:goto L649629;
case 0x64962c:c.instructions+=1;goto B64962c;
case 0x64962e:goto L64962e;
case 0x649631:c.instructions+=1;goto B649631;
case 0x649637:goto L649637;
case 0x64963b:c.instructions+=1;goto B64963b;
case 0x649641:goto L649641;
case 0x649643:c.instructions+=2;goto B649643;
case 0x649648:c.instructions+=1;goto B649648;
case 0x64964a:goto L64964a;
case 0x64964c:c.instructions+=3;goto B64964c;
case 0x64964d:c.instructions+=2;goto B64964d;
case 0x649651:c.instructions+=1;goto B649651;
case 0x649653:goto L649653;
case 0x649657:c.instructions+=1;goto B649657;
case 0x649659:goto L649659;
case 0x64965c:c.instructions+=1;goto B64965c;
case 0x64965e:goto L64965e;
case 0x649662:c.instructions+=1;goto B649662;
case 0x649664:goto L649664;
case 0x649667:c.instructions+=1;goto B649667;
case 0x649669:goto L649669;
case 0x64966c:c.instructions+=1;goto B64966c;
case 0x64966e:goto L64966e;
case 0x649671:goto L649671;
case 0x649673:goto L649673;
case 0x649675:c.instructions+=2;goto B649675;
case 0x64967a:c.instructions+=1;goto B64967a;
case 0x64967c:goto L64967c;
case 0x64967f:c.instructions+=1;goto B64967f;
case 0x649681:goto L649681;
case 0x649684:c.instructions+=1;goto B649684;
case 0x649686:goto L649686;
case 0x649688:c.instructions+=3;goto B649688;
case 0x649689:c.instructions+=2;goto B649689;
case 0x64968c:c.instructions+=1;goto B64968c;
case 0x64968e:goto L64968e;
case 0x649691:c.instructions+=1;goto B649691;
case 0x649693:goto L649693;
case 0x649696:c.instructions+=1;goto B649696;
case 0x649698:goto L649698;
case 0x64969c:c.instructions+=1;goto B64969c;
case 0x64969e:goto L64969e;
case 0x6496a1:c.instructions+=1;goto B6496a1;
case 0x6496a3:goto L6496a3;
case 0x6496a6:c.instructions+=1;goto B6496a6;
case 0x6496a8:goto L6496a8;
case 0x6496aa:c.instructions+=1;goto B6496aa;
case 0x6496af:goto L6496af;
case 0x6496b1:c.instructions+=1;goto B6496b1;
case 0x6496b3:goto L6496b3;
case 0x6496b5:c.instructions+=2;goto B6496b5;
case 0x6496ba:c.instructions+=1;goto B6496ba;
case 0x6496bc:goto L6496bc;
case 0x6496be:goto L6496be;
case 0x6496c0:c.instructions+=1;goto B6496c0;
case 0x6496c5:goto L6496c5;
case 0x6496c6:goto L6496c6;
case 0x6496c9:c.instructions+=3;goto B6496c9;
case 0x6496cc:c.instructions+=2;goto B6496cc;
case 0x6496cd:c.instructions+=1;goto B6496cd;
case 0x6496d2:goto L6496d2;
case 0x6496d5:c.instructions+=1;goto B6496d5;
case 0x6496dc:goto L6496dc;
case 0x6496df:c.instructions+=5;goto B6496df;
case 0x6496e0:c.instructions+=4;goto B6496e0;
case 0x6496e1:c.instructions+=3;goto B6496e1;
case 0x6496e2:c.instructions+=2;goto B6496e2;
case 0x6496e3:c.instructions+=1;goto B6496e3;
case 0x6496e6:goto L6496e6;
case 0x6496e8:c.instructions+=7;goto B6496e8;
case 0x6496e9:c.instructions+=6;goto B6496e9;
case 0x6496eb:c.instructions+=5;goto B6496eb;
case 0x6496ee:c.instructions+=4;goto B6496ee;
case 0x6496f0:c.instructions+=3;goto B6496f0;
case 0x6496f5:c.instructions+=2;goto B6496f5;
case 0x6496f7:c.instructions+=1;goto B6496f7;
case 0x6496f9:goto L6496f9;
case 0x6496fb:c.instructions+=3;goto B6496fb;
case 0x6496fd:c.instructions+=2;goto B6496fd;
case 0x649700:c.instructions+=1;goto B649700;
case 0x649702:goto L649702;
case 0x649706:c.instructions+=1;goto B649706;
case 0x649708:goto L649708;
case 0x64970c:c.instructions+=1;goto B64970c;
case 0x64970e:goto L64970e;
case 0x649711:c.instructions+=5;goto B649711;
case 0x649714:c.instructions+=4;goto B649714;
case 0x649716:c.instructions+=3;goto B649716;
case 0x649718:c.instructions+=2;goto B649718;
case 0x64971a:c.instructions+=1;goto B64971a;
case 0x64971c:goto L64971c;
case 0x64971e:c.instructions+=1;goto B64971e;
case 0x649720:goto L649720;
case 0x649721:c.instructions+=4;goto B649721;
case 0x649722:c.instructions+=3;goto B649722;
case 0x649723:c.instructions+=2;goto B649723;
case 0x649729:c.instructions+=1;goto B649729;
case 0x64972b:goto L64972b;
case 0x64972d:c.instructions+=1;goto B64972d;
case 0x64972f:goto L64972f;
case 0x649732:c.instructions+=1;goto B649732;
case 0x649734:goto L649734;
case 0x649737:c.instructions+=2;goto B649737;
case 0x649739:c.instructions+=1;goto B649739;
case 0x64973b:goto L64973b;
case 0x64973d:goto L64973d;
case 0x64973f:c.instructions+=3;goto B64973f;
case 0x649741:c.instructions+=2;goto B649741;
case 0x649743:c.instructions+=1;goto B649743;
case 0x649745:goto L649745;
case 0x649747:c.instructions+=1;goto B649747;
case 0x649749:goto L649749;
case 0x64974c:c.instructions+=3;goto B64974c;
case 0x64974e:c.instructions+=2;goto B64974e;
case 0x649751:c.instructions+=1;goto B649751;
case 0x649753:goto L649753;
case 0x649754:c.instructions+=5;goto B649754;
case 0x649755:c.instructions+=4;goto B649755;
case 0x649756:c.instructions+=3;goto B649756;
case 0x649757:c.instructions+=2;goto B649757;
case 0x649759:c.instructions+=1;goto B649759;
case 0x64975b:goto L64975b;
case 0x64975d:c.instructions+=1;goto B64975d;
case 0x64975f:goto L64975f;
case 0x649761:c.instructions+=1;goto B649761;
case 0x649764:goto L649764;
case 0x649766:goto L649766;
case 0x649768:goto L649768;
case 0x64976b:goto L64976b;
case 0x64976d:c.instructions+=1;goto B64976d;
case 0x64976f:goto L64976f;
case 0x649771:goto L649771;
case 0x649772:c.instructions+=2;goto B649772;
case 0x649773:c.instructions+=1;goto B649773;
case 0x649774:goto L649774;
case 0x649775:c.instructions+=1;goto B649775;
case 0x649778:goto L649778;
case 0x64977a:c.instructions+=1;goto B64977a;
case 0x64977c:goto L64977c;
case 0x64977e:c.instructions+=7;goto B64977e;
case 0x64977f:c.instructions+=6;goto B64977f;
case 0x649781:c.instructions+=5;goto B649781;
case 0x649784:c.instructions+=4;goto B649784;
case 0x649786:c.instructions+=3;goto B649786;
case 0x64978b:c.instructions+=2;goto B64978b;
case 0x64978d:c.instructions+=1;goto B64978d;
case 0x64978f:goto L64978f;
case 0x649791:c.instructions+=3;goto B649791;
case 0x649793:c.instructions+=2;goto B649793;
case 0x649796:c.instructions+=1;goto B649796;
case 0x649798:goto L649798;
case 0x64979a:c.instructions+=1;goto B64979a;
case 0x64979c:goto L64979c;
case 0x64979f:c.instructions+=1;goto B64979f;
case 0x6497a1:goto L6497a1;
case 0x6497a2:c.instructions+=4;goto B6497a2;
case 0x6497a3:c.instructions+=3;goto B6497a3;
case 0x6497a4:c.instructions+=2;goto B6497a4;
case 0x6497aa:c.instructions+=1;goto B6497aa;
case 0x6497ac:goto L6497ac;
case 0x6497ae:c.instructions+=1;goto B6497ae;
case 0x6497b0:goto L6497b0;
case 0x6497b3:c.instructions+=1;goto B6497b3;
case 0x6497b5:goto L6497b5;
case 0x6497b8:c.instructions+=2;goto B6497b8;
case 0x6497ba:c.instructions+=1;goto B6497ba;
case 0x6497bc:goto L6497bc;
case 0x6497be:goto L6497be;
case 0x6497c0:c.instructions+=3;goto B6497c0;
case 0x6497c2:c.instructions+=2;goto B6497c2;
case 0x6497c4:c.instructions+=1;goto B6497c4;
case 0x6497c6:goto L6497c6;
case 0x6497c8:c.instructions+=1;goto B6497c8;
case 0x6497ca:goto L6497ca;
case 0x6497cd:c.instructions+=3;goto B6497cd;
case 0x6497cf:c.instructions+=2;goto B6497cf;
case 0x6497d2:c.instructions+=1;goto B6497d2;
case 0x6497d4:goto L6497d4;
case 0x6497d5:c.instructions+=5;goto B6497d5;
case 0x6497d6:c.instructions+=4;goto B6497d6;
case 0x6497d7:c.instructions+=3;goto B6497d7;
case 0x6497d8:c.instructions+=2;goto B6497d8;
case 0x6497da:c.instructions+=1;goto B6497da;
case 0x6497dc:goto L6497dc;
case 0x6497de:c.instructions+=1;goto B6497de;
case 0x6497e0:goto L6497e0;
case 0x6497e2:c.instructions+=1;goto B6497e2;
case 0x6497e5:goto L6497e5;
case 0x6497e7:goto L6497e7;
case 0x6497e9:goto L6497e9;
case 0x6497ec:goto L6497ec;
case 0x6497ee:c.instructions+=1;goto B6497ee;
case 0x6497f0:goto L6497f0;
case 0x6497f2:goto L6497f2;
case 0x6497f3:c.instructions+=2;goto B6497f3;
case 0x6497f4:c.instructions+=1;goto B6497f4;
case 0x6497f5:goto L6497f5;
case 0x6497f6:c.instructions+=1;goto B6497f6;
case 0x6497f9:goto L6497f9;
case 0x6497fb:c.instructions+=1;goto B6497fb;
case 0x6497fd:goto L6497fd;
case 0x6497ff:c.instructions+=7;goto B6497ff;
case 0x649800:c.instructions+=6;goto B649800;
case 0x649802:c.instructions+=5;goto B649802;
case 0x649805:c.instructions+=4;goto B649805;
case 0x649807:c.instructions+=3;goto B649807;
case 0x64980c:c.instructions+=2;goto B64980c;
case 0x64980e:c.instructions+=1;goto B64980e;
case 0x649810:goto L649810;
case 0x649812:c.instructions+=3;goto B649812;
case 0x649814:c.instructions+=2;goto B649814;
case 0x649817:c.instructions+=1;goto B649817;
case 0x649819:goto L649819;
case 0x64981b:c.instructions+=1;goto B64981b;
case 0x64981d:goto L64981d;
case 0x649820:c.instructions+=1;goto B649820;
case 0x649822:goto L649822;
case 0x649823:c.instructions+=4;goto B649823;
case 0x649824:c.instructions+=3;goto B649824;
case 0x649825:c.instructions+=2;goto B649825;
case 0x64982b:c.instructions+=1;goto B64982b;
case 0x64982d:goto L64982d;
case 0x64982f:c.instructions+=1;goto B64982f;
case 0x649831:goto L649831;
case 0x649834:c.instructions+=1;goto B649834;
case 0x649836:goto L649836;
case 0x649839:c.instructions+=2;goto B649839;
case 0x64983b:c.instructions+=1;goto B64983b;
case 0x64983d:goto L64983d;
case 0x64983f:goto L64983f;
case 0x649841:c.instructions+=3;goto B649841;
case 0x649843:c.instructions+=2;goto B649843;
case 0x649845:c.instructions+=1;goto B649845;
case 0x649847:goto L649847;
case 0x649849:c.instructions+=1;goto B649849;
case 0x64984b:goto L64984b;
case 0x64984e:c.instructions+=3;goto B64984e;
case 0x649850:c.instructions+=2;goto B649850;
case 0x649853:c.instructions+=1;goto B649853;
case 0x649855:goto L649855;
case 0x649856:c.instructions+=5;goto B649856;
case 0x649857:c.instructions+=4;goto B649857;
case 0x649858:c.instructions+=3;goto B649858;
case 0x649859:c.instructions+=2;goto B649859;
case 0x64985b:c.instructions+=1;goto B64985b;
case 0x64985d:goto L64985d;
case 0x64985f:c.instructions+=1;goto B64985f;
case 0x649861:goto L649861;
case 0x649863:c.instructions+=1;goto B649863;
case 0x649866:goto L649866;
case 0x649868:goto L649868;
case 0x64986a:goto L64986a;
case 0x64986d:goto L64986d;
case 0x64986f:c.instructions+=1;goto B64986f;
case 0x649871:goto L649871;
case 0x649873:goto L649873;
case 0x649874:c.instructions+=2;goto B649874;
case 0x649875:c.instructions+=1;goto B649875;
case 0x649876:goto L649876;
case 0x649877:c.instructions+=1;goto B649877;
case 0x64987a:goto L64987a;
case 0x64987c:c.instructions+=1;goto B64987c;
case 0x64987e:goto L64987e;
case 0x649880:c.instructions+=7;goto B649880;
case 0x649881:c.instructions+=6;goto B649881;
case 0x649883:c.instructions+=5;goto B649883;
case 0x649886:c.instructions+=4;goto B649886;
case 0x649888:c.instructions+=3;goto B649888;
case 0x64988e:c.instructions+=2;goto B64988e;
case 0x649890:c.instructions+=1;goto B649890;
case 0x649892:goto L649892;
case 0x649894:c.instructions+=2;goto B649894;
case 0x649897:c.instructions+=1;goto B649897;
case 0x649899:goto L649899;
case 0x64989c:c.instructions+=1;goto B64989c;
case 0x64989e:goto L64989e;
case 0x6498a0:goto L6498a0;
case 0x6498a1:c.instructions+=1;goto B6498a1;
case 0x6498a4:goto L6498a4;
case 0x6498a6:c.instructions+=10;goto B6498a6;
case 0x6498a7:c.instructions+=9;goto B6498a7;
case 0x6498a9:c.instructions+=8;goto B6498a9;
case 0x6498af:c.instructions+=7;goto B6498af;
case 0x6498b0:c.instructions+=6;goto B6498b0;
case 0x6498b1:c.instructions+=5;goto B6498b1;
case 0x6498b4:c.instructions+=4;goto B6498b4;
case 0x6498b7:c.instructions+=3;goto B6498b7;
case 0x6498b8:c.instructions+=2;goto B6498b8;
case 0x6498bb:c.instructions+=1;goto B6498bb;
case 0x6498c0:goto L6498c0;
case 0x6498c2:c.instructions+=4;goto B6498c2;
case 0x6498c8:c.instructions+=3;goto B6498c8;
case 0x6498cb:c.instructions+=2;goto B6498cb;
case 0x6498ce:c.instructions+=1;goto B6498ce;
case 0x6498d3:goto L6498d3;
case 0x6498d6:c.instructions+=2;goto B6498d6;
case 0x6498d8:c.instructions+=1;goto B6498d8;
case 0x6498da:goto L6498da;
case 0x6498dc:goto L6498dc;
case 0x6498df:c.instructions+=2;goto B6498df;
case 0x6498e1:c.instructions+=1;goto B6498e1;
case 0x6498e3:goto L6498e3;
case 0x6498e5:goto L6498e5;
case 0x6498e6:c.instructions+=3;goto B6498e6;
case 0x6498e9:c.instructions+=2;goto B6498e9;
case 0x6498eb:c.instructions+=1;goto B6498eb;
case 0x6498f0:goto L6498f0;
case 0x6498f2:c.instructions+=2;goto B6498f2;
case 0x6498f4:c.instructions+=1;goto B6498f4;
case 0x6498f6:goto L6498f6;
case 0x6498fd:c.instructions+=1;goto B6498fd;
case 0x649902:goto L649902;
case 0x649905:c.instructions+=1;goto B649905;
case 0x64990a:goto L64990a;
case 0x64990c:c.instructions+=2;goto B64990c;
case 0x64990f:c.instructions+=1;goto B64990f;
case 0x649915:goto L649915;
case 0x649916:c.instructions+=13;goto B649916;
case 0x649919:c.instructions+=12;goto B649919;
case 0x64991a:c.instructions+=11;goto B64991a;
case 0x64991d:c.instructions+=10;goto B64991d;
case 0x649922:c.instructions+=9;goto B649922;
case 0x649923:c.instructions+=8;goto B649923;
case 0x649926:c.instructions+=7;goto B649926;
case 0x649929:c.instructions+=6;goto B649929;
case 0x64992a:c.instructions+=5;goto B64992a;
case 0x64992d:c.instructions+=4;goto B64992d;
case 0x649933:c.instructions+=3;goto B649933;
case 0x649939:c.instructions+=2;goto B649939;
case 0x64993a:c.instructions+=1;goto B64993a;
case 0x64993f:goto L64993f;
case 0x649941:c.instructions+=2;goto B649941;
case 0x649944:c.instructions+=1;goto B649944;
case 0x649946:goto L649946;
case 0x649949:c.instructions+=1;goto B649949;
case 0x64994e:goto L64994e;
case 0x649950:c.instructions+=1;goto B649950;
case 0x649952:goto L649952;
case 0x649959:goto L649959;
case 0x64995c:c.instructions+=1;goto B64995c;
case 0x64995e:goto L64995e;
case 0x649961:c.instructions+=5;goto B649961;
case 0x649962:c.instructions+=4;goto B649962;
case 0x649965:c.instructions+=3;goto B649965;
case 0x649967:c.instructions+=2;goto B649967;
case 0x649968:c.instructions+=1;goto B649968;
case 0x64996b:goto L64996b;
case 0x64996c:c.instructions+=1;goto B64996c;
case 0x649971:goto L649971;
case 0x649973:c.instructions+=2;goto B649973;
case 0x649976:c.instructions+=1;goto B649976;
case 0x649978:goto L649978;
case 0x64997b:c.instructions+=2;goto B64997b;
case 0x64997d:c.instructions+=1;goto B64997d;
case 0x64997f:goto L64997f;
case 0x649982:c.instructions+=2;goto B649982;
case 0x649984:c.instructions+=1;goto B649984;
case 0x649987:goto L649987;
case 0x64998a:c.instructions+=2;goto B64998a;
case 0x64998c:c.instructions+=1;goto B64998c;
case 0x64998e:goto L64998e;
case 0x649991:c.instructions+=2;goto B649991;
case 0x649993:c.instructions+=1;goto B649993;
case 0x649996:goto L649996;
case 0x649999:c.instructions+=2;goto B649999;
case 0x64999a:c.instructions+=1;goto B64999a;
case 0x64999c:goto L64999c;
case 0x64999f:c.instructions+=2;goto B64999f;
case 0x6499a2:c.instructions+=1;goto B6499a2;
case 0x6499a7:goto L6499a7;
case 0x6499aa:c.instructions+=2;goto B6499aa;
case 0x6499ac:c.instructions+=1;goto B6499ac;
case 0x6499ae:goto L6499ae;
case 0x6499b0:c.instructions+=2;goto B6499b0;
case 0x6499b1:c.instructions+=1;goto B6499b1;
case 0x6499b4:goto L6499b4;
case 0x6499b7:goto L6499b7;
case 0x6499ba:c.instructions+=2;goto B6499ba;
case 0x6499bc:c.instructions+=1;goto B6499bc;
case 0x6499be:goto L6499be;
case 0x6499c0:c.instructions+=2;goto B6499c0;
case 0x6499c1:c.instructions+=1;goto B6499c1;
case 0x6499c4:goto L6499c4;
case 0x6499c7:goto L6499c7;
case 0x6499cd:c.instructions+=1;goto B6499cd;
case 0x6499d2:goto L6499d2;
case 0x6499d5:c.instructions+=1;goto B6499d5;
case 0x6499da:goto L6499da;
case 0x6499dd:c.instructions+=4;goto B6499dd;
case 0x6499de:c.instructions+=3;goto B6499de;
case 0x6499df:c.instructions+=2;goto B6499df;
case 0x6499e0:c.instructions+=1;goto B6499e0;
case 0x6499e3:goto L6499e3;
case 0x6499e5:c.instructions+=13;goto B6499e5;
case 0x6499e6:c.instructions+=12;goto B6499e6;
case 0x6499e8:c.instructions+=11;goto B6499e8;
case 0x6499ee:c.instructions+=10;goto B6499ee;
case 0x6499ef:c.instructions+=9;goto B6499ef;
case 0x6499f0:c.instructions+=8;goto B6499f0;
case 0x6499f2:c.instructions+=7;goto B6499f2;
case 0x6499f4:c.instructions+=6;goto B6499f4;
case 0x6499f5:c.instructions+=5;goto B6499f5;
case 0x6499fb:c.instructions+=4;goto B6499fb;
case 0x6499fe:c.instructions+=3;goto B6499fe;
case 0x649a01:c.instructions+=2;goto B649a01;
case 0x649a04:c.instructions+=1;goto B649a04;
case 0x649a09:goto L649a09;
case 0x649a0c:c.instructions+=4;goto B649a0c;
case 0x649a0f:c.instructions+=3;goto B649a0f;
case 0x649a12:c.instructions+=2;goto B649a12;
case 0x649a14:c.instructions+=1;goto B649a14;
case 0x649a1a:goto L649a1a;
case 0x649a1e:c.instructions+=1;goto B649a1e;
case 0x649a24:goto L649a24;
case 0x649a26:c.instructions+=3;goto B649a26;
case 0x649a29:c.instructions+=2;goto B649a29;
case 0x649a2c:c.instructions+=1;goto B649a2c;
case 0x649a32:goto L649a32;
case 0x649a35:c.instructions+=2;goto B649a35;
case 0x649a37:c.instructions+=1;goto B649a37;
case 0x649a39:goto L649a39;
case 0x649a3d:c.instructions+=1;goto B649a3d;
case 0x649a3f:goto L649a3f;
case 0x649a42:c.instructions+=2;goto B649a42;
case 0x649a44:c.instructions+=1;goto B649a44;
case 0x649a46:goto L649a46;
case 0x649a4a:c.instructions+=1;goto B649a4a;
case 0x649a4c:goto L649a4c;
case 0x649a4f:c.instructions+=3;goto B649a4f;
case 0x649a52:c.instructions+=2;goto B649a52;
case 0x649a54:c.instructions+=1;goto B649a54;
case 0x649a56:goto L649a56;
case 0x649a59:c.instructions+=1;goto B649a59;
case 0x649a5f:goto L649a5f;
case 0x649a62:c.instructions+=2;goto B649a62;
case 0x649a64:c.instructions+=1;goto B649a64;
case 0x649a6a:goto L649a6a;
case 0x649a6e:c.instructions+=1;goto B649a6e;
case 0x649a74:goto L649a74;
case 0x649a77:c.instructions+=2;goto B649a77;
case 0x649a79:c.instructions+=1;goto B649a79;
case 0x649a7f:goto L649a7f;
case 0x649a83:c.instructions+=1;goto B649a83;
case 0x649a89:goto L649a89;
case 0x649a8f:c.instructions+=2;goto B649a8f;
case 0x649a92:c.instructions+=1;goto B649a92;
case 0x649a95:goto L649a95;
case 0x649a98:c.instructions+=2;goto B649a98;
case 0x649a9c:c.instructions+=1;goto B649a9c;
case 0x649aa2:goto L649aa2;
case 0x649aa5:c.instructions+=2;goto B649aa5;
case 0x649aa7:c.instructions+=1;goto B649aa7;
case 0x649aad:goto L649aad;
case 0x649ab1:c.instructions+=1;goto B649ab1;
case 0x649ab7:goto L649ab7;
case 0x649aba:c.instructions+=2;goto B649aba;
case 0x649abc:c.instructions+=1;goto B649abc;
case 0x649ac2:goto L649ac2;
case 0x649ac3:c.instructions+=1;goto B649ac3;
case 0x649ac9:goto L649ac9;
case 0x649aca:c.instructions+=1;goto B649aca;
case 0x649ad0:goto L649ad0;
case 0x649ad1:c.instructions+=1;goto B649ad1;
case 0x649ad7:goto L649ad7;
case 0x649ad8:c.instructions+=1;goto B649ad8;
case 0x649ada:goto L649ada;
case 0x649adb:c.instructions+=1;goto B649adb;
case 0x649ae1:goto L649ae1;
case 0x649ae4:c.instructions+=5;goto B649ae4;
case 0x649ae6:c.instructions+=4;goto B649ae6;
case 0x649ae9:c.instructions+=3;goto B649ae9;
case 0x649aec:c.instructions+=2;goto B649aec;
case 0x649aef:c.instructions+=1;goto B649aef;
case 0x649af4:goto L649af4;
case 0x649af7:c.instructions+=2;goto B649af7;
case 0x649af9:c.instructions+=1;goto B649af9;
case 0x649aff:goto L649aff;
case 0x649b03:c.instructions+=1;goto B649b03;
case 0x649b09:goto L649b09;
case 0x649b0d:c.instructions+=1;goto B649b0d;
case 0x649b13:goto L649b13;
case 0x649b16:c.instructions+=2;goto B649b16;
case 0x649b18:c.instructions+=1;goto B649b18;
case 0x649b1a:goto L649b1a;
case 0x649b1c:c.instructions+=2;goto B649b1c;
case 0x649b1d:c.instructions+=1;goto B649b1d;
case 0x649b20:goto L649b20;
case 0x649b23:goto L649b23;
case 0x649b24:c.instructions+=11;goto B649b24;
case 0x649b27:c.instructions+=10;goto B649b27;
case 0x649b28:c.instructions+=9;goto B649b28;
case 0x649b2b:c.instructions+=8;goto B649b2b;
case 0x649b31:c.instructions+=7;goto B649b31;
case 0x649b32:c.instructions+=6;goto B649b32;
case 0x649b33:c.instructions+=5;goto B649b33;
case 0x649b36:c.instructions+=4;goto B649b36;
case 0x649b3c:c.instructions+=3;goto B649b3c;
case 0x649b3f:c.instructions+=2;goto B649b3f;
case 0x649b40:c.instructions+=1;goto B649b40;
case 0x649b45:goto L649b45;
case 0x649b47:c.instructions+=2;goto B649b47;
case 0x649b4a:c.instructions+=1;goto B649b4a;
case 0x649b50:goto L649b50;
case 0x649b53:c.instructions+=2;goto B649b53;
case 0x649b55:c.instructions+=1;goto B649b55;
case 0x649b57:goto L649b57;
case 0x649b59:c.instructions+=2;goto B649b59;
case 0x649b5a:c.instructions+=1;goto B649b5a;
case 0x649b5d:goto L649b5d;
case 0x649b5f:c.instructions+=4;goto B649b5f;
case 0x649b62:c.instructions+=3;goto B649b62;
case 0x649b64:c.instructions+=2;goto B649b64;
case 0x649b65:c.instructions+=1;goto B649b65;
case 0x649b68:goto L649b68;
case 0x649b6b:c.instructions+=1;goto B649b6b;
case 0x649b6d:goto L649b6d;
case 0x649b6f:c.instructions+=1;goto B649b6f;
case 0x649b72:goto L649b72;
case 0x649b74:c.instructions+=1;goto B649b74;
case 0x649b77:goto L649b77;
case 0x649b7a:c.instructions+=5;goto B649b7a;
case 0x649b7b:c.instructions+=4;goto B649b7b;
case 0x649b7d:c.instructions+=3;goto B649b7d;
case 0x649b80:c.instructions+=2;goto B649b80;
case 0x649b81:c.instructions+=1;goto B649b81;
case 0x649b86:goto L649b86;
case 0x649b88:c.instructions+=2;goto B649b88;
case 0x649b8b:c.instructions+=1;goto B649b8b;
case 0x649b91:goto L649b91;
case 0x649b94:c.instructions+=5;goto B649b94;
case 0x649b95:c.instructions+=4;goto B649b95;
case 0x649b97:c.instructions+=3;goto B649b97;
case 0x649b9a:c.instructions+=2;goto B649b9a;
case 0x649b9b:c.instructions+=1;goto B649b9b;
case 0x649ba0:goto L649ba0;
case 0x649ba2:c.instructions+=2;goto B649ba2;
case 0x649ba5:c.instructions+=1;goto B649ba5;
case 0x649ba7:goto L649ba7;
case 0x649baa:c.instructions+=4;goto B649baa;
case 0x649bab:c.instructions+=3;goto B649bab;
case 0x649bae:c.instructions+=2;goto B649bae;
case 0x649baf:c.instructions+=1;goto B649baf;
case 0x649bb4:goto L649bb4;
case 0x649bb6:c.instructions+=2;goto B649bb6;
case 0x649bb9:c.instructions+=1;goto B649bb9;
case 0x649bbb:goto L649bbb;
case 0x649bbe:c.instructions+=3;goto B649bbe;
case 0x649bc0:c.instructions+=2;goto B649bc0;
case 0x649bc3:c.instructions+=1;goto B649bc3;
case 0x649bc5:goto L649bc5;
case 0x649bc8:c.instructions+=2;goto B649bc8;
case 0x649bca:c.instructions+=1;goto B649bca;
case 0x649bcc:goto L649bcc;
case 0x649bcf:c.instructions+=2;goto B649bcf;
case 0x649bd1:c.instructions+=1;goto B649bd1;
case 0x649bd3:goto L649bd3;
case 0x649bd5:c.instructions+=3;goto B649bd5;
case 0x649bd8:c.instructions+=2;goto B649bd8;
case 0x649bdb:c.instructions+=1;goto B649bdb;
case 0x649bdd:goto L649bdd;
case 0x649be0:goto L649be0;
case 0x649be3:c.instructions+=4;goto B649be3;
case 0x649be6:c.instructions+=3;goto B649be6;
case 0x649be8:c.instructions+=2;goto B649be8;
case 0x649beb:c.instructions+=1;goto B649beb;
case 0x649bf1:goto L649bf1;
case 0x649bf3:goto L649bf3;
case 0x649bf6:c.instructions+=7;goto B649bf6;
case 0x649bfb:c.instructions+=6;goto B649bfb;
case 0x649bfc:c.instructions+=5;goto B649bfc;
case 0x649bff:c.instructions+=4;goto B649bff;
case 0x649c00:c.instructions+=3;goto B649c00;
case 0x649c03:c.instructions+=2;goto B649c03;
case 0x649c04:c.instructions+=1;goto B649c04;
case 0x649c09:goto L649c09;
case 0x649c0c:goto L649c0c;
case 0x649c13:goto L649c13;
case 0x649c16:c.instructions+=2;goto B649c16;
case 0x649c18:c.instructions+=1;goto B649c18;
case 0x649c1a:goto L649c1a;
case 0x649c1c:c.instructions+=2;goto B649c1c;
case 0x649c1d:c.instructions+=1;goto B649c1d;
case 0x649c20:goto L649c20;
case 0x649c23:goto L649c23;
case 0x649c29:c.instructions+=1;goto B649c29;
case 0x649c2e:goto L649c2e;
case 0x649c31:c.instructions+=5;goto B649c31;
case 0x649c32:c.instructions+=4;goto B649c32;
case 0x649c33:c.instructions+=3;goto B649c33;
case 0x649c34:c.instructions+=2;goto B649c34;
case 0x649c35:c.instructions+=1;goto B649c35;
case 0x649c38:goto L649c38;
case 0x649c3b:c.instructions+=7;goto B649c3b;
case 0x649c40:c.instructions+=6;goto B649c40;
case 0x649c41:c.instructions+=5;goto B649c41;
case 0x649c44:c.instructions+=4;goto B649c44;
case 0x649c45:c.instructions+=3;goto B649c45;
case 0x649c48:c.instructions+=2;goto B649c48;
case 0x649c49:c.instructions+=1;goto B649c49;
case 0x649c4e:goto L649c4e;
case 0x649c51:c.instructions+=1;goto B649c51;
case 0x649c53:goto L649c53;
case 0x649c55:c.instructions+=11;goto B649c55;
case 0x649c56:c.instructions+=10;goto B649c56;
case 0x649c58:c.instructions+=9;goto B649c58;
case 0x649c5e:c.instructions+=8;goto B649c5e;
case 0x649c5f:c.instructions+=7;goto B649c5f;
case 0x649c62:c.instructions+=6;goto B649c62;
case 0x649c63:c.instructions+=5;goto B649c63;
case 0x649c64:c.instructions+=4;goto B649c64;
case 0x649c67:c.instructions+=3;goto B649c67;
case 0x649c68:c.instructions+=2;goto B649c68;
case 0x649c6b:c.instructions+=1;goto B649c6b;
case 0x649c70:goto L649c70;
case 0x649c73:c.instructions+=8;goto B649c73;
case 0x649c75:c.instructions+=7;goto B649c75;
case 0x649c77:c.instructions+=6;goto B649c77;
case 0x649c7a:c.instructions+=5;goto B649c7a;
case 0x649c7d:c.instructions+=4;goto B649c7d;
case 0x649c80:c.instructions+=3;goto B649c80;
case 0x649c83:c.instructions+=2;goto B649c83;
case 0x649c86:c.instructions+=1;goto B649c86;
case 0x649c88:goto L649c88;
case 0x649c8a:goto L649c8a;
case 0x649c90:c.instructions+=1;goto B649c90;
case 0x649c92:goto L649c92;
case 0x649c97:c.instructions+=6;goto B649c97;
case 0x649c98:c.instructions+=5;goto B649c98;
case 0x649c9b:c.instructions+=4;goto B649c9b;
case 0x649c9c:c.instructions+=3;goto B649c9c;
case 0x649c9d:c.instructions+=2;goto B649c9d;
case 0x649ca0:c.instructions+=1;goto B649ca0;
case 0x649ca5:goto L649ca5;
case 0x649ca8:c.instructions+=2;goto B649ca8;
case 0x649cad:c.instructions+=1;goto B649cad;
case 0x649cb2:goto L649cb2;
case 0x649cb5:c.instructions+=2;goto B649cb5;
case 0x649cb8:c.instructions+=1;goto B649cb8;
case 0x649cbd:goto L649cbd;
case 0x649cbf:c.instructions+=2;goto B649cbf;
case 0x649cc1:c.instructions+=1;goto B649cc1;
case 0x649cc7:goto L649cc7;
case 0x649cc9:c.instructions+=1;goto B649cc9;
case 0x649cce:goto L649cce;
case 0x649cd0:c.instructions+=3;goto B649cd0;
case 0x649cd2:c.instructions+=2;goto B649cd2;
case 0x649cd3:c.instructions+=1;goto B649cd3;
case 0x649cd5:goto L649cd5;
case 0x649cd7:c.instructions+=1;goto B649cd7;
case 0x649cdc:goto L649cdc;
case 0x649cdf:c.instructions+=1;goto B649cdf;
case 0x649ce1:goto L649ce1;
case 0x649ce4:goto L649ce4;
case 0x649ce7:c.instructions+=1;goto B649ce7;
case 0x649ce9:goto L649ce9;
case 0x649cee:c.instructions+=1;goto B649cee;
case 0x649cf3:goto L649cf3;
case 0x649cf9:c.instructions+=3;goto B649cf9;
case 0x649cfb:c.instructions+=2;goto B649cfb;
case 0x649cfe:c.instructions+=1;goto B649cfe;
case 0x649d00:goto L649d00;
case 0x649d03:c.instructions+=6;goto B649d03;
case 0x649d06:c.instructions+=5;goto B649d06;
case 0x649d07:c.instructions+=4;goto B649d07;
case 0x649d0a:c.instructions+=3;goto B649d0a;
case 0x649d0c:c.instructions+=2;goto B649d0c;
case 0x649d0d:c.instructions+=1;goto B649d0d;
case 0x649d12:goto L649d12;
case 0x649d14:c.instructions+=2;goto B649d14;
case 0x649d16:c.instructions+=1;goto B649d16;
case 0x649d1c:goto L649d1c;
case 0x649d1f:c.instructions+=1;goto B649d1f;
case 0x649d21:goto L649d21;
case 0x649d24:c.instructions+=6;goto B649d24;
case 0x649d27:c.instructions+=5;goto B649d27;
case 0x649d28:c.instructions+=4;goto B649d28;
case 0x649d2b:c.instructions+=3;goto B649d2b;
case 0x649d2d:c.instructions+=2;goto B649d2d;
case 0x649d30:c.instructions+=1;goto B649d30;
case 0x649d35:goto L649d35;
case 0x649d37:c.instructions+=2;goto B649d37;
case 0x649d39:c.instructions+=1;goto B649d39;
case 0x649d3f:goto L649d3f;
case 0x649d42:c.instructions+=1;goto B649d42;
case 0x649d45:goto L649d45;
case 0x649d47:c.instructions+=2;goto B649d47;
case 0x649d4a:c.instructions+=1;goto B649d4a;
case 0x649d4c:goto L649d4c;
case 0x649d4f:c.instructions+=2;goto B649d4f;
case 0x649d51:c.instructions+=1;goto B649d51;
case 0x649d53:goto L649d53;
case 0x649d59:c.instructions+=1;goto B649d59;
case 0x649d5b:goto L649d5b;
case 0x649d5e:c.instructions+=2;goto B649d5e;
case 0x649d61:c.instructions+=1;goto B649d61;
case 0x649d63:goto L649d63;
case 0x649d66:c.instructions+=6;goto B649d66;
case 0x649d69:c.instructions+=5;goto B649d69;
case 0x649d6a:c.instructions+=4;goto B649d6a;
case 0x649d6d:c.instructions+=3;goto B649d6d;
case 0x649d6f:c.instructions+=2;goto B649d6f;
case 0x649d70:c.instructions+=1;goto B649d70;
case 0x649d75:goto L649d75;
case 0x649d77:c.instructions+=2;goto B649d77;
case 0x649d79:c.instructions+=1;goto B649d79;
case 0x649d7f:goto L649d7f;
case 0x649d82:goto L649d82;
case 0x649d84:c.instructions+=1;goto B649d84;
case 0x649d86:goto L649d86;
case 0x649d89:c.instructions+=1;goto B649d89;
case 0x649d8b:goto L649d8b;
case 0x649d8e:c.instructions+=2;goto B649d8e;
case 0x649d91:c.instructions+=1;goto B649d91;
case 0x649d93:goto L649d93;
case 0x649d96:c.instructions+=6;goto B649d96;
case 0x649d99:c.instructions+=5;goto B649d99;
case 0x649d9a:c.instructions+=4;goto B649d9a;
case 0x649d9d:c.instructions+=3;goto B649d9d;
case 0x649d9f:c.instructions+=2;goto B649d9f;
case 0x649da0:c.instructions+=1;goto B649da0;
case 0x649da5:goto L649da5;
case 0x649da7:c.instructions+=2;goto B649da7;
case 0x649da9:c.instructions+=1;goto B649da9;
case 0x649daf:goto L649daf;
case 0x649db2:goto L649db2;
case 0x649db4:c.instructions+=1;goto B649db4;
case 0x649db6:goto L649db6;
case 0x649db9:goto L649db9;
case 0x649dbc:c.instructions+=3;goto B649dbc;
case 0x649dbe:c.instructions+=2;goto B649dbe;
case 0x649dc1:c.instructions+=1;goto B649dc1;
case 0x649dc3:goto L649dc3;
case 0x649dc6:c.instructions+=1;goto B649dc6;
case 0x649dc9:goto L649dc9;
case 0x649dcb:c.instructions+=2;goto B649dcb;
case 0x649dce:c.instructions+=1;goto B649dce;
case 0x649dd0:goto L649dd0;
case 0x649dd3:c.instructions+=4;goto B649dd3;
case 0x649dd9:c.instructions+=3;goto B649dd9;
case 0x649ddb:c.instructions+=2;goto B649ddb;
case 0x649dde:c.instructions+=1;goto B649dde;
case 0x649de4:goto L649de4;
case 0x649dea:c.instructions+=1;goto B649dea;
case 0x649def:goto L649def;
case 0x649df2:c.instructions+=4;goto B649df2;
case 0x649df5:c.instructions+=3;goto B649df5;
case 0x649df8:c.instructions+=2;goto B649df8;
case 0x649dfb:c.instructions+=1;goto B649dfb;
case 0x649dfd:goto L649dfd;
case 0x649e00:c.instructions+=1;goto B649e00;
case 0x649e02:goto L649e02;
case 0x649e04:c.instructions+=4;goto B649e04;
case 0x649e07:c.instructions+=3;goto B649e07;
case 0x649e0d:c.instructions+=2;goto B649e0d;
case 0x649e12:c.instructions+=1;goto B649e12;
case 0x649e14:goto L649e14;
case 0x649e19:c.instructions+=1;goto B649e19;
case 0x649e1b:goto L649e1b;
case 0x649e1e:c.instructions+=11;goto B649e1e;
case 0x649e1f:c.instructions+=10;goto B649e1f;
case 0x649e22:c.instructions+=9;goto B649e22;
case 0x649e23:c.instructions+=8;goto B649e23;
case 0x649e26:c.instructions+=7;goto B649e26;
case 0x649e29:c.instructions+=6;goto B649e29;
case 0x649e2b:c.instructions+=5;goto B649e2b;
case 0x649e2c:c.instructions+=4;goto B649e2c;
case 0x649e32:c.instructions+=3;goto B649e32;
case 0x649e38:c.instructions+=2;goto B649e38;
case 0x649e39:c.instructions+=1;goto B649e39;
case 0x649e3e:goto L649e3e;
case 0x649e40:c.instructions+=2;goto B649e40;
case 0x649e42:c.instructions+=1;goto B649e42;
case 0x649e48:goto L649e48;
case 0x649e4b:c.instructions+=6;goto B649e4b;
case 0x649e4d:c.instructions+=5;goto B649e4d;
case 0x649e50:c.instructions+=4;goto B649e50;
case 0x649e53:c.instructions+=3;goto B649e53;
case 0x649e56:c.instructions+=2;goto B649e56;
case 0x649e59:c.instructions+=1;goto B649e59;
case 0x649e5f:goto L649e5f;
case 0x649e61:c.instructions+=1;goto B649e61;
case 0x649e67:goto L649e67;
case 0x649e69:c.instructions+=2;goto B649e69;
case 0x649e6a:c.instructions+=1;goto B649e6a;
case 0x649e6d:goto L649e6d;
case 0x649e71:c.instructions+=1;goto B649e71;
case 0x649e76:goto L649e76;
case 0x649e79:c.instructions+=3;goto B649e79;
case 0x649e7b:c.instructions+=2;goto B649e7b;
case 0x649e7c:c.instructions+=1;goto B649e7c;
case 0x649e7e:goto L649e7e;
case 0x649e82:c.instructions+=1;goto B649e82;
case 0x649e84:goto L649e84;
case 0x649e87:goto L649e87;
case 0x649e8a:c.instructions+=1;goto B649e8a;
case 0x649e8c:goto L649e8c;
case 0x649e90:c.instructions+=1;goto B649e90;
case 0x649e96:goto L649e96;
case 0x649e99:c.instructions+=3;goto B649e99;
case 0x649e9d:c.instructions+=2;goto B649e9d;
case 0x649ea0:c.instructions+=1;goto B649ea0;
case 0x649ea6:goto L649ea6;
case 0x649ea9:c.instructions+=2;goto B649ea9;
case 0x649eab:c.instructions+=1;goto B649eab;
case 0x649ead:goto L649ead;
case 0x649eb1:c.instructions+=1;goto B649eb1;
case 0x649eb3:goto L649eb3;
case 0x649eb6:goto L649eb6;
case 0x649eb9:c.instructions+=1;goto B649eb9;
case 0x649ebb:goto L649ebb;
case 0x649ebf:c.instructions+=1;goto B649ebf;
case 0x649ec5:goto L649ec5;
case 0x649ec8:c.instructions+=2;goto B649ec8;
case 0x649ecb:c.instructions+=1;goto B649ecb;
case 0x649ed1:goto L649ed1;
case 0x649ed4:c.instructions+=1;goto B649ed4;
case 0x649ed6:goto L649ed6;
case 0x649ed9:c.instructions+=1;goto B649ed9;
case 0x649edf:goto L649edf;
case 0x649ee2:c.instructions+=2;goto B649ee2;
case 0x649ee8:c.instructions+=1;goto B649ee8;
case 0x649eed:goto L649eed;
case 0x649eef:goto L649eef;
case 0x649ef2:goto L649ef2;
case 0x649ef3:c.instructions+=4;goto B649ef3;
case 0x649ef6:c.instructions+=3;goto B649ef6;
case 0x649efb:c.instructions+=2;goto B649efb;
case 0x649efc:c.instructions+=1;goto B649efc;
case 0x649f01:goto L649f01;
case 0x649f04:c.instructions+=2;goto B649f04;
case 0x649f07:c.instructions+=1;goto B649f07;
case 0x649f0a:goto L649f0a;
case 0x649f0c:c.instructions+=3;goto B649f0c;
case 0x649f0d:c.instructions+=2;goto B649f0d;
case 0x649f0f:c.instructions+=1;goto B649f0f;
case 0x649f11:goto L649f11;
case 0x649f13:c.instructions+=3;goto B649f13;
case 0x649f15:c.instructions+=2;goto B649f15;
case 0x649f18:c.instructions+=1;goto B649f18;
case 0x649f1b:goto L649f1b;
case 0x649f1d:c.instructions+=3;goto B649f1d;
case 0x649f1e:c.instructions+=2;goto B649f1e;
case 0x649f20:c.instructions+=1;goto B649f20;
case 0x649f22:goto L649f22;
case 0x649f24:c.instructions+=5;goto B649f24;
case 0x649f27:c.instructions+=4;goto B649f27;
case 0x649f2b:c.instructions+=3;goto B649f2b;
case 0x649f2c:c.instructions+=2;goto B649f2c;
case 0x649f2d:c.instructions+=1;goto B649f2d;
case 0x649f32:goto L649f32;
case 0x649f34:c.instructions+=2;goto B649f34;
case 0x649f36:c.instructions+=1;goto B649f36;
case 0x649f3c:goto L649f3c;
case 0x649f3f:c.instructions+=8;goto B649f3f;
case 0x649f40:c.instructions+=7;goto B649f40;
case 0x649f43:c.instructions+=6;goto B649f43;
case 0x649f46:c.instructions+=5;goto B649f46;
case 0x649f49:c.instructions+=4;goto B649f49;
case 0x649f4b:c.instructions+=3;goto B649f4b;
case 0x649f50:c.instructions+=2;goto B649f50;
case 0x649f51:c.instructions+=1;goto B649f51;
case 0x649f54:goto L649f54;
case 0x649f55:c.instructions+=1;goto B649f55;
case 0x649f5a:goto L649f5a;
case 0x649f5d:c.instructions+=2;goto B649f5d;
case 0x649f64:c.instructions+=1;goto B649f64;
case 0x649f69:goto L649f69;
case 0x649f6c:c.instructions+=1;goto B649f6c;
case 0x649f72:goto L649f72;
case 0x649f75:c.instructions+=11;goto B649f75;
case 0x649f76:c.instructions+=10;goto B649f76;
case 0x649f79:c.instructions+=9;goto B649f79;
case 0x649f7a:c.instructions+=8;goto B649f7a;
case 0x649f7d:c.instructions+=7;goto B649f7d;
case 0x649f80:c.instructions+=6;goto B649f80;
case 0x649f82:c.instructions+=5;goto B649f82;
case 0x649f83:c.instructions+=4;goto B649f83;
case 0x649f89:c.instructions+=3;goto B649f89;
case 0x649f8f:c.instructions+=2;goto B649f8f;
case 0x649f90:c.instructions+=1;goto B649f90;
case 0x649f95:goto L649f95;
case 0x649f97:c.instructions+=2;goto B649f97;
case 0x649f99:c.instructions+=1;goto B649f99;
case 0x649f9f:goto L649f9f;
case 0x649fa2:c.instructions+=3;goto B649fa2;
case 0x649fa5:c.instructions+=2;goto B649fa5;
case 0x649fa7:c.instructions+=1;goto B649fa7;
case 0x649faa:goto L649faa;
case 0x649fac:c.instructions+=3;goto B649fac;
case 0x649fad:c.instructions+=2;goto B649fad;
case 0x649faf:c.instructions+=1;goto B649faf;
case 0x649fb1:goto L649fb1;
case 0x649fb3:c.instructions+=3;goto B649fb3;
case 0x649fb5:c.instructions+=2;goto B649fb5;
case 0x649fb7:c.instructions+=1;goto B649fb7;
case 0x649fba:goto L649fba;
case 0x649fbc:c.instructions+=3;goto B649fbc;
case 0x649fbd:c.instructions+=2;goto B649fbd;
case 0x649fbf:c.instructions+=1;goto B649fbf;
case 0x649fc1:goto L649fc1;
case 0x649fc3:c.instructions+=15;goto B649fc3;
case 0x649fc4:c.instructions+=14;goto B649fc4;
case 0x649fc7:c.instructions+=13;goto B649fc7;
case 0x649fc9:c.instructions+=12;goto B649fc9;
case 0x649fcb:c.instructions+=11;goto B649fcb;
case 0x649fcd:c.instructions+=10;goto B649fcd;
case 0x649fce:c.instructions+=9;goto B649fce;
case 0x649fd1:c.instructions+=8;goto B649fd1;
case 0x649fd3:c.instructions+=7;goto B649fd3;
case 0x649fd6:c.instructions+=6;goto B649fd6;
case 0x649fd8:c.instructions+=5;goto B649fd8;
case 0x649fdb:c.instructions+=4;goto B649fdb;
case 0x649fdd:c.instructions+=3;goto B649fdd;
case 0x649fde:c.instructions+=2;goto B649fde;
case 0x649fe1:c.instructions+=1;goto B649fe1;
case 0x649fe4:goto L649fe4;
case 0x649fe8:c.instructions+=4;goto B649fe8;
case 0x649feb:c.instructions+=3;goto B649feb;
case 0x649fec:c.instructions+=2;goto B649fec;
case 0x649fed:c.instructions+=1;goto B649fed;
case 0x649ff2:goto L649ff2;
case 0x649ff4:c.instructions+=2;goto B649ff4;
case 0x649ff6:c.instructions+=1;goto B649ff6;
case 0x649ffc:goto L649ffc;
case 0x649fff:c.instructions+=1;goto B649fff;
default:missing_instruction(c.pc);}
B649000:L649000:{c.instructions+=4;NFSU2_TR(0x649000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B649001:{NFSU2_TR(0x649001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B649002:{NFSU2_TR(0x649002);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B649003:{NFSU2_TR(0x649003);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B649006:L649006:{c.instructions+=11;NFSU2_TR(0x649006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649009:{NFSU2_TR(0x649009);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64900c:{NFSU2_TR(0x64900c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B64900f:{NFSU2_TR(0x64900f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649015:{NFSU2_TR(0x649015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649018:{NFSU2_TR(0x649018);
u8 U[4];
w4(U+0,u32(0x7aeec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64901d:{NFSU2_TR(0x64901d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64901f:{NFSU2_TR(0x64901f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649022:{NFSU2_TR(0x649022);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B649025:{NFSU2_TR(0x649025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649026:{NFSU2_TR(0x649026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64902bull));
TAIL_STATIC(0x64307cu,643);
}
B64902b:L64902b:{c.instructions+=2;NFSU2_TR(0x64902b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64902e:{NFSU2_TR(0x64902e);
{goto L6490b8;}
}
B649033:L649033:{c.instructions+=5;NFSU2_TR(0x649033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649036:{NFSU2_TR(0x649036);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B649039:{NFSU2_TR(0x649039);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64903f:{NFSU2_TR(0x64903f);
u8 U[4];
w4(U+0,u32(0x7aee80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649044:{NFSU2_TR(0x649044);
TAIL_STATIC(0x648766u,648);
}
B649049:L649049:{c.instructions+=2;NFSU2_TR(0x649049);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64904c:{NFSU2_TR(0x64904c);
if(r1(R+518)){TAIL_STATIC(0x648d72u,648);}
}
B649052:L649052:{c.instructions+=3;NFSU2_TR(0x649052);
u8 U[8];
__builtin_memmove((U+0),gp(0x7ac348),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649058:{NFSU2_TR(0x649058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64905b:{NFSU2_TR(0x64905b);
if(r1(R+518)){{goto L649071;}}
}
B64905d:L64905d:{c.instructions+=1;NFSU2_TR(0x64905d);
w4(R+0,u32(0x7ac348ull));
}
B649062:L649062:{c.instructions+=2;NFSU2_TR(0x649062);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649065:{NFSU2_TR(0x649065);
if(r1(R+518)){{goto L649071;}}
}
B649067:L649067:{c.instructions+=4;NFSU2_TR(0x649067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64906a:{NFSU2_TR(0x64906a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B64906d:{NFSU2_TR(0x64906d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64906f:{NFSU2_TR(0x64906f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649062u);}goto L649062;}}
}
B649071:L649071:{c.instructions+=2;NFSU2_TR(0x649071);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B649078:{NFSU2_TR(0x649078);
TAIL_STATIC(0x648d72u,648);
}
B64907d:L64907d:{c.instructions+=2;NFSU2_TR(0x64907d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649080:{NFSU2_TR(0x649080);
if(r1(R+518)){TAIL_STATIC(0x648d72u,648);}
}
B649086:L649086:{c.instructions+=3;NFSU2_TR(0x649086);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64908c:{NFSU2_TR(0x64908c);
u8 U[4];
w4(U+0,u32(0x7aee30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649091:{NFSU2_TR(0x649091);
TAIL_STATIC(0x648766u,648);
}
B649096:L649096:{c.instructions+=2;NFSU2_TR(0x649096);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649099:{NFSU2_TR(0x649099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x648d72u,648);}
}
B64909f:L64909f:{c.instructions+=7;NFSU2_TR(0x64909f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6490a2:{NFSU2_TR(0x6490a2);
u8 U[4];
w4(U+0,u32(0x7aedf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6490a7:{NFSU2_TR(0x6490a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6490a9:{NFSU2_TR(0x6490a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6490ac:{NFSU2_TR(0x6490ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B6490af:{NFSU2_TR(0x6490af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6490b0:{NFSU2_TR(0x6490b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6490b5ull));
TAIL_STATIC(0x64307cu,643);
}
B6490b5:L6490b5:{c.instructions+=1;NFSU2_TR(0x6490b5);
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
B6490b8:L6490b8:{c.instructions+=2;NFSU2_TR(0x6490b8);
w4(R+28,u32(0x80004005ull));
}
B6490bd:{NFSU2_TR(0x6490bd);
TAIL_STATIC(0x648ffdu,648);
}
B6490c2:L6490c2:{c.instructions+=5;NFSU2_TR(0x6490c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6490c5:{NFSU2_TR(0x6490c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6490c8:{NFSU2_TR(0x6490c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6490ce:{NFSU2_TR(0x6490ce);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xd000004ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd000004ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6490d3:{NFSU2_TR(0x6490d3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6490f8;}}
}
B6490d5:L6490d5:{c.instructions+=2;NFSU2_TR(0x6490d5);
w1(R+512,u8((r4(R+0))<(u32(0xd000000ull))));
}
B6490da:{NFSU2_TR(0x6490da);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64910f;}}
}
B6490dc:L6490dc:{c.instructions+=2;NFSU2_TR(0x6490dc);
w1(R+512,u8((r4(R+0))<(u32(0xc000000ull))));
}
B6490e1:{NFSU2_TR(0x6490e1);
if(r1(R+512)){{goto L649106;}}
}
B6490e3:L6490e3:{c.instructions+=2;NFSU2_TR(0x6490e3);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc000004ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc000004ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6490e8:{NFSU2_TR(0x6490e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64910f;}}
}
B6490ea:L6490ea:{c.instructions+=2;NFSU2_TR(0x6490ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc010000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6490ef:{NFSU2_TR(0x6490ef);
if(r1(R+518)){{goto L64910f;}}
}
B6490f1:L6490f1:{c.instructions+=2;NFSU2_TR(0x6490f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc020000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6490f6:{NFSU2_TR(0x6490f6);
{goto L649104;}
}
B6490f8:L6490f8:{c.instructions+=2;NFSU2_TR(0x6490f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd010000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6490fd:{NFSU2_TR(0x6490fd);
if(r1(R+518)){{goto L64910f;}}
}
B6490ff:L6490ff:{c.instructions+=1;NFSU2_TR(0x6490ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd020000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649104:L649104:{c.instructions+=1;NFSU2_TR(0x649104);
if(r1(R+518)){{goto L64910f;}}
}
B649106:L649106:{c.instructions+=2;NFSU2_TR(0x649106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64910d:{NFSU2_TR(0x64910d);
{goto L649112;}
}
B64910f:L64910f:{c.instructions+=1;NFSU2_TR(0x64910f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649112:L649112:{c.instructions+=7;NFSU2_TR(0x649112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649115:{NFSU2_TR(0x649115);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649118:{NFSU2_TR(0x649118);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649119:{NFSU2_TR(0x649119);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64911b:{NFSU2_TR(0x64911b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B64911e:{NFSU2_TR(0x64911e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64911f:{NFSU2_TR(0x64911f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649124ull));
TAIL_STATIC(0x647827u,647);
}
B649124:L649124:{c.instructions+=3;NFSU2_TR(0x649124);
__builtin_memmove((R+28),(R+0),4);
}
B649126:{NFSU2_TR(0x649126);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649128:{NFSU2_TR(0x649128);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648fe0u,648);}
}
B64912e:L64912e:{c.instructions+=6;NFSU2_TR(0x64912e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649131:{NFSU2_TR(0x649131);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649133:{NFSU2_TR(0x649133);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649135:{NFSU2_TR(0x649135);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649138:{NFSU2_TR(0x649138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649139:{NFSU2_TR(0x649139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64913eull));
TAIL_STATIC(0x647827u,647);
}
B64913e:L64913e:{c.instructions+=3;NFSU2_TR(0x64913e);
__builtin_memmove((R+28),(R+0),4);
}
B649140:{NFSU2_TR(0x649140);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649142:{NFSU2_TR(0x649142);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648fe0u,648);}
}
B649148:L649148:{c.instructions+=6;NFSU2_TR(0x649148);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64914b:{NFSU2_TR(0x64914b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64914d:{NFSU2_TR(0x64914d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64914f:{NFSU2_TR(0x64914f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649152:{NFSU2_TR(0x649152);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649153:{NFSU2_TR(0x649153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649158ull));
TAIL_STATIC(0x647827u,647);
}
B649158:L649158:{c.instructions+=3;NFSU2_TR(0x649158);
__builtin_memmove((R+28),(R+0),4);
}
B64915a:{NFSU2_TR(0x64915a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64915c:{NFSU2_TR(0x64915c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648fe0u,648);}
}
B649162:L649162:{c.instructions+=6;NFSU2_TR(0x649162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649165:{NFSU2_TR(0x649165);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649167:{NFSU2_TR(0x649167);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649169:{NFSU2_TR(0x649169);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64916c:{NFSU2_TR(0x64916c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64916d:{NFSU2_TR(0x64916d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649172ull));
TAIL_STATIC(0x647827u,647);
}
B649172:L649172:{c.instructions+=3;NFSU2_TR(0x649172);
__builtin_memmove((R+28),(R+0),4);
}
B649174:{NFSU2_TR(0x649174);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649176:{NFSU2_TR(0x649176);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648fe0u,648);}
}
B64917c:L64917c:{c.instructions+=6;NFSU2_TR(0x64917c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64917f:{NFSU2_TR(0x64917f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649181:{NFSU2_TR(0x649181);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649183:{NFSU2_TR(0x649183);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649186:{NFSU2_TR(0x649186);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649187:{NFSU2_TR(0x649187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64918cull));
TAIL_STATIC(0x647827u,647);
}
B64918c:L64918c:{c.instructions+=3;NFSU2_TR(0x64918c);
__builtin_memmove((R+28),(R+0),4);
}
B64918e:{NFSU2_TR(0x64918e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649190:{NFSU2_TR(0x649190);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648fe0u,648);}
}
B649196:L649196:{c.instructions+=6;NFSU2_TR(0x649196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649199:{NFSU2_TR(0x649199);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64919b:{NFSU2_TR(0x64919b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64919d:{NFSU2_TR(0x64919d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6491a0:{NFSU2_TR(0x6491a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491a1:{NFSU2_TR(0x6491a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6491a6ull));
TAIL_STATIC(0x647827u,647);
}
B6491a6:L6491a6:{c.instructions+=3;NFSU2_TR(0x6491a6);
__builtin_memmove((R+28),(R+0),4);
}
B6491a8:{NFSU2_TR(0x6491a8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6491aa:{NFSU2_TR(0x6491aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648fe0u,648);}
}
B6491b0:L6491b0:{c.instructions+=2;NFSU2_TR(0x6491b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6491b3:{NFSU2_TR(0x6491b3);
TAIL_STATIC(0x648e2eu,648);
}
B6491b8:L6491b8:{c.instructions+=7;NFSU2_TR(0x6491b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6491bb:{NFSU2_TR(0x6491bb);
u8 U[4];
w4(U+0,u32(0x7aeda8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491c0:{NFSU2_TR(0x6491c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491c2:{NFSU2_TR(0x6491c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6491c5:{NFSU2_TR(0x6491c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B6491c8:{NFSU2_TR(0x6491c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491c9:{NFSU2_TR(0x6491c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6491ceull));
TAIL_STATIC(0x64307cu,643);
}
B6491ce:L6491ce:{c.instructions+=3;NFSU2_TR(0x6491ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6491d1:{NFSU2_TR(0x6491d1);
w4(R+28,u32(0x80004005ull));
}
B6491d6:{NFSU2_TR(0x6491d6);
TAIL_STATIC(0x648fe0u,648);
}
B6491db:L6491db:{c.instructions+=13;NFSU2_TR(0x6491db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6491de:{NFSU2_TR(0x6491de);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6491e0:{NFSU2_TR(0x6491e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491e1:{NFSU2_TR(0x6491e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6491e4:{NFSU2_TR(0x6491e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491e5:{NFSU2_TR(0x6491e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6491e8:{NFSU2_TR(0x6491e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491e9:{NFSU2_TR(0x6491e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6491ec:{NFSU2_TR(0x6491ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491ed:{NFSU2_TR(0x6491ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491ee:{NFSU2_TR(0x6491ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6491ef:{NFSU2_TR(0x6491ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6491f2:{NFSU2_TR(0x6491f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6491f7ull));
TAIL_STATIC(0x6481aau,648);
}
B6491f7:L6491f7:{c.instructions+=2;NFSU2_TR(0x6491f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6491f9:{NFSU2_TR(0x6491f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648e45u,648);}
}
B6491ff:L6491ff:{c.instructions+=7;NFSU2_TR(0x6491ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649202:{NFSU2_TR(0x649202);
u8 U[4];
w4(U+0,u32(0x7aed70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649207:{NFSU2_TR(0x649207);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649208:{NFSU2_TR(0x649208);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64920b:{NFSU2_TR(0x64920b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64920e:{NFSU2_TR(0x64920e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64920f:{NFSU2_TR(0x64920f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649214ull));
TAIL_STATIC(0x64307cu,643);
}
B649214:L649214:{c.instructions+=2;NFSU2_TR(0x649214);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B649217:{NFSU2_TR(0x649217);
TAIL_STATIC(0x648fe0u,648);
}
B64921c:L64921c:{c.instructions+=16;NFSU2_TR(0x64921c);
__builtin_memmove((R+28),(R+28),4);
}
B64921e:{NFSU2_TR(0x64921e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64921f:{NFSU2_TR(0x64921f);
__builtin_memmove((R+20),(R+16),4);
}
B649221:{NFSU2_TR(0x649221);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649222:{NFSU2_TR(0x649222);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649223:{NFSU2_TR(0x649223);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649224:{NFSU2_TR(0x649224);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649225:{NFSU2_TR(0x649225);
__builtin_memmove((R+24),(R+4),4);
}
B649227:{NFSU2_TR(0x649227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64922a:{NFSU2_TR(0x64922a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64922d:{NFSU2_TR(0x64922d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64922e:{NFSU2_TR(0x64922e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B649230:{NFSU2_TR(0x649230);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B649231:{NFSU2_TR(0x649231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649234:{NFSU2_TR(0x649234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649237:{NFSU2_TR(0x649237);
if(r1(R+518)){{goto L6492ab;}}
}
B649239:L649239:{c.instructions+=2;NFSU2_TR(0x649239);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64923c:{NFSU2_TR(0x64923c);
if(r1(R+518)){{goto L64925a;}}
}
B64923e:L64923e:{c.instructions+=8;NFSU2_TR(0x64923e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649241:{NFSU2_TR(0x649241);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B649243:{NFSU2_TR(0x649243);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B649246:{NFSU2_TR(0x649246);
u8 U[4];
w4(U+0,u32(0x7aefb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64924b:{NFSU2_TR(0x64924b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64924c:{NFSU2_TR(0x64924c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64924f:{NFSU2_TR(0x64924f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649250:{NFSU2_TR(0x649250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649255ull));
TAIL_STATIC(0x64307cu,643);
}
B649255:L649255:{c.instructions+=2;NFSU2_TR(0x649255);
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
B649258:{NFSU2_TR(0x649258);
{goto L64929f;}
}
B64925a:L64925a:{c.instructions+=10;NFSU2_TR(0x64925a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64925d:{NFSU2_TR(0x64925d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B649260:{NFSU2_TR(0x649260);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649263:{NFSU2_TR(0x649263);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649266:{NFSU2_TR(0x649266);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649269:{NFSU2_TR(0x649269);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64926c:{NFSU2_TR(0x64926c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64926d:{NFSU2_TR(0x64926d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649270:{NFSU2_TR(0x649270);
__builtin_memmove((R+4),(R+24),4);
}
B649272:{NFSU2_TR(0x649272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649277ull));
TAIL_STATIC(0x647a3fu,647);
}
B649277:L649277:{c.instructions+=3;NFSU2_TR(0x649277);
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
B649279:{NFSU2_TR(0x649279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64927c:{NFSU2_TR(0x64927c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6493e0;}}
}
B649282:L649282:{c.instructions+=2;NFSU2_TR(0x649282);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
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
B649284:{NFSU2_TR(0x649284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6493e0;}}
}
B64928a:L64928a:{c.instructions+=5;NFSU2_TR(0x64928a);
u8 U[4];
w4(U+0,u32(0x7af030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64928f:{NFSU2_TR(0x64928f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649290:{NFSU2_TR(0x649290);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649293:{NFSU2_TR(0x649293);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B649296:{NFSU2_TR(0x649296);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649297:L649297:{c.instructions+=1;NFSU2_TR(0x649297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64929cull));
TAIL_STATIC(0x64307cu,643);
}
B64929c:L64929c:{c.instructions+=1;NFSU2_TR(0x64929c);
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
B64929f:L64929f:{c.instructions+=2;NFSU2_TR(0x64929f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6492a6:{NFSU2_TR(0x6492a6);
{goto L6493e0;}
}
B6492ab:L6492ab:{c.instructions+=3;NFSU2_TR(0x6492ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6492ae:{NFSU2_TR(0x6492ae);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6492b0:{NFSU2_TR(0x6492b0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64929fu);}goto L64929f;}}
}
B6492b2:L6492b2:{c.instructions+=5;NFSU2_TR(0x6492b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6492b5:{NFSU2_TR(0x6492b5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6492b7:{NFSU2_TR(0x6492b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6492b8:{NFSU2_TR(0x6492b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6492ba:{NFSU2_TR(0x6492ba);
if(r1(R+518)){{goto L6493a3;}}
}
B6492c0:L6492c0:{c.instructions+=2;NFSU2_TR(0x6492c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6492c3:{NFSU2_TR(0x6492c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64923eu);}goto L64923e;}}
}
B6492c9:L6492c9:{c.instructions+=5;NFSU2_TR(0x6492c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6492cc:{NFSU2_TR(0x6492cc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6492ce:{NFSU2_TR(0x6492ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6492d1:{NFSU2_TR(0x6492d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6492d2:{NFSU2_TR(0x6492d2);
{goto L6492d7;}
}
B6492d4:L6492d4:{c.instructions+=1;NFSU2_TR(0x6492d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6492d7:L6492d7:{c.instructions+=2;NFSU2_TR(0x6492d7);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6492da:{NFSU2_TR(0x6492da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64929fu);}goto L64929f;}}
}
B6492dc:L6492dc:{c.instructions+=3;NFSU2_TR(0x6492dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6492df:{NFSU2_TR(0x6492df);
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
B6492e1:{NFSU2_TR(0x6492e1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64929fu);}goto L64929f;}}
}
B6492e3:L6492e3:{c.instructions+=2;NFSU2_TR(0x6492e3);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6492e7:{NFSU2_TR(0x6492e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64929fu);}goto L64929f;}}
}
B6492e9:L6492e9:{c.instructions+=3;NFSU2_TR(0x6492e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6492ec:{NFSU2_TR(0x6492ec);
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
B6492ee:{NFSU2_TR(0x6492ee);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64929fu);}goto L64929f;}}
}
B6492f0:L6492f0:{c.instructions+=9;NFSU2_TR(0x6492f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6492f3:{NFSU2_TR(0x6492f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6492f6:{NFSU2_TR(0x6492f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6492f9:{NFSU2_TR(0x6492f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6492fc:{NFSU2_TR(0x6492fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6492ff:{NFSU2_TR(0x6492ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649302:{NFSU2_TR(0x649302);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649303:{NFSU2_TR(0x649303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649304:{NFSU2_TR(0x649304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649309ull));
TAIL_STATIC(0x647a3fu,647);
}
B649309:L649309:{c.instructions+=4;NFSU2_TR(0x649309);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64930b:{NFSU2_TR(0x64930b);
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
B64930d:{NFSU2_TR(0x64930d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649310:{NFSU2_TR(0x649310);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6493e0;}}
}
B649316:L649316:{c.instructions+=3;NFSU2_TR(0x649316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649318:{NFSU2_TR(0x649318);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64931b:{NFSU2_TR(0x64931b);
if(r1(R+518)){{goto L649326;}}
}
B64931d:L64931d:{c.instructions+=2;NFSU2_TR(0x64931d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649320:{NFSU2_TR(0x649320);
if(r1(R+518)){{goto L649326;}}
}
B649322:L649322:{c.instructions+=2;NFSU2_TR(0x649322);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649324:{NFSU2_TR(0x649324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649367;}}
}
B649326:L649326:{c.instructions+=3;NFSU2_TR(0x649326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649329:{NFSU2_TR(0x649329);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64932b:{NFSU2_TR(0x64932b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649367;}}
}
B64932d:L64932d:{c.instructions+=3;NFSU2_TR(0x64932d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649330:{NFSU2_TR(0x649330);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B649332:{NFSU2_TR(0x649332);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649367;}}
}
B649334:L649334:{c.instructions+=3;NFSU2_TR(0x649334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649337:{NFSU2_TR(0x649337);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B649339:{NFSU2_TR(0x649339);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649367;}}
}
B64933b:L64933b:{c.instructions+=3;NFSU2_TR(0x64933b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64933e:{NFSU2_TR(0x64933e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B649340:{NFSU2_TR(0x649340);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649367;}}
}
B649342:L649342:{c.instructions+=6;NFSU2_TR(0x649342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649345:{NFSU2_TR(0x649345);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649348:{NFSU2_TR(0x649348);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B649349:{NFSU2_TR(0x649349);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64934b:{NFSU2_TR(0x64934b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64934e:{NFSU2_TR(0x64934e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6492d4u);}goto L6492d4;}}
}
B649350:L649350:{c.instructions+=4;NFSU2_TR(0x649350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649353:{NFSU2_TR(0x649353);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649356:{NFSU2_TR(0x649356);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649359:{NFSU2_TR(0x649359);
if(r1(R+518)){{goto L64937c;}}
}
B64935b:L64935b:{c.instructions+=2;NFSU2_TR(0x64935b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf20000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649361:{NFSU2_TR(0x649361);
if(r1(R+518)){{goto L64937c;}}
}
B649363:L649363:{c.instructions+=2;NFSU2_TR(0x649363);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649365:{NFSU2_TR(0x649365);
{goto L64937e;}
}
B649367:L649367:{c.instructions+=7;NFSU2_TR(0x649367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64936a:{NFSU2_TR(0x64936a);
u8 U[4];
w4(U+0,u32(0x7aeff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64936f:{NFSU2_TR(0x64936f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649370:{NFSU2_TR(0x649370);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649373:{NFSU2_TR(0x649373);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B649376:{NFSU2_TR(0x649376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649377:{NFSU2_TR(0x649377);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649297u);}goto L649297;}
}
B64937c:L64937c:{c.instructions+=1;NFSU2_TR(0x64937c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64937e:L64937e:{c.instructions+=15;NFSU2_TR(0x64937e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649381:{NFSU2_TR(0x649381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649382:{NFSU2_TR(0x649382);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B649384:{NFSU2_TR(0x649384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649387:{NFSU2_TR(0x649387);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B649389:{NFSU2_TR(0x649389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64938c:{NFSU2_TR(0x64938c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64938e:{NFSU2_TR(0x64938e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649391:{NFSU2_TR(0x649391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B649394:{NFSU2_TR(0x649394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649397:{NFSU2_TR(0x649397);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64939a:{NFSU2_TR(0x64939a);
__builtin_memmove((R+0),(R+28),4);
}
B64939c:{NFSU2_TR(0x64939c);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B64939f:{NFSU2_TR(0x64939f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6493a1:{NFSU2_TR(0x6493a1);
{goto L6493e0;}
}
B6493a3:L6493a3:{c.instructions+=3;NFSU2_TR(0x6493a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6493a6:{NFSU2_TR(0x6493a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6493a9:{NFSU2_TR(0x6493a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6493b7;}}
}
B6493ab:L6493ab:{c.instructions+=2;NFSU2_TR(0x6493ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6493ae:{NFSU2_TR(0x6493ae);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6493b7;}}
}
B6493b0:L6493b0:{c.instructions+=3;NFSU2_TR(0x6493b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6493b3:{NFSU2_TR(0x6493b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6493b5:{NFSU2_TR(0x6493b5);
{goto L6493c0;}
}
B6493b7:L6493b7:{c.instructions+=2;NFSU2_TR(0x6493b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6493ba:{NFSU2_TR(0x6493ba);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6493c0:L6493c0:{c.instructions+=12;NFSU2_TR(0x6493c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6493c3:{NFSU2_TR(0x6493c3);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6493c5:{NFSU2_TR(0x6493c5);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6493c6:{NFSU2_TR(0x6493c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6493c8:{NFSU2_TR(0x6493c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6493cb:{NFSU2_TR(0x6493cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6493cd:{NFSU2_TR(0x6493cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6493d0:{NFSU2_TR(0x6493d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6493d2:{NFSU2_TR(0x6493d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6493d5:{NFSU2_TR(0x6493d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6493d7:{NFSU2_TR(0x6493d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6493da:{NFSU2_TR(0x6493da);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6493e0:L6493e0:{c.instructions+=6;NFSU2_TR(0x6493e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6493e3:{NFSU2_TR(0x6493e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6493e4:{NFSU2_TR(0x6493e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6493e5:{NFSU2_TR(0x6493e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6493e6:{NFSU2_TR(0x6493e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6493e7:{NFSU2_TR(0x6493e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6493ea:L6493ea:{c.instructions+=13;NFSU2_TR(0x6493ea);
__builtin_memmove((R+28),(R+28),4);
}
B6493ec:{NFSU2_TR(0x6493ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6493ed:{NFSU2_TR(0x6493ed);
__builtin_memmove((R+20),(R+16),4);
}
B6493ef:{NFSU2_TR(0x6493ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6493f0:{NFSU2_TR(0x6493f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6493f3:{NFSU2_TR(0x6493f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6493f4:{NFSU2_TR(0x6493f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6493f5:{NFSU2_TR(0x6493f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6493f8:{NFSU2_TR(0x6493f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6493fa:{NFSU2_TR(0x6493fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6493fd:{NFSU2_TR(0x6493fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6493fe:{NFSU2_TR(0x6493fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649401:{NFSU2_TR(0x649401);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6495e8;}}
}
B649407:L649407:{c.instructions+=1;NFSU2_TR(0x649407);
if(r1(R+518)){{goto L649584;}}
}
B64940d:L64940d:{c.instructions+=2;NFSU2_TR(0x64940d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64940f:{NFSU2_TR(0x64940f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6496be;}}
}
B649415:L649415:{c.instructions+=7;NFSU2_TR(0x649415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649418:{NFSU2_TR(0x649418);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64941a:{NFSU2_TR(0x64941a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64941c:{NFSU2_TR(0x64941c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64941d:{NFSU2_TR(0x64941d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64941e:{NFSU2_TR(0x64941e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649420:{NFSU2_TR(0x649420);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L649555;}}
}
B649426:L649426:{c.instructions+=2;NFSU2_TR(0x649426);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649429:{NFSU2_TR(0x649429);
if(r1(R+518)){{goto L649498;}}
}
B64942b:L64942b:{c.instructions+=2;NFSU2_TR(0x64942b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64942e:{NFSU2_TR(0x64942e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496bc;}}
}
B649434:L649434:{c.instructions+=3;NFSU2_TR(0x649434);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B649436:{NFSU2_TR(0x649436);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649439:{NFSU2_TR(0x649439);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64948b;}}
}
B64943b:L64943b:{c.instructions+=2;NFSU2_TR(0x64943b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64943e:{NFSU2_TR(0x64943e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64948b;}}
}
B649440:L649440:{c.instructions+=2;NFSU2_TR(0x649440);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649443:{NFSU2_TR(0x649443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649482;}}
}
B649445:L649445:{c.instructions+=2;NFSU2_TR(0x649445);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649448:{NFSU2_TR(0x649448);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649482;}}
}
B64944a:L64944a:{c.instructions+=3;NFSU2_TR(0x64944a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64944d:{NFSU2_TR(0x64944d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B649450:{NFSU2_TR(0x649450);
if(r1(R+518)){{goto L6496dc;}}
}
B649456:L649456:{c.instructions+=2;NFSU2_TR(0x649456);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B649459:{NFSU2_TR(0x649459);
if(r1(R+518)){{goto L6496dc;}}
}
B64945f:L64945f:{c.instructions+=2;NFSU2_TR(0x64945f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B649462:{NFSU2_TR(0x649462);
if(r1(R+518)){{goto L6496dc;}}
}
B649468:L649468:{c.instructions+=2;NFSU2_TR(0x649468);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B64946b:{NFSU2_TR(0x64946b);
if(r1(R+518)){{goto L6496dc;}}
}
B649471:L649471:{c.instructions+=2;NFSU2_TR(0x649471);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B649474:{NFSU2_TR(0x649474);
if(r1(R+518)){{goto L6496dc;}}
}
B64947a:L64947a:{c.instructions+=2;NFSU2_TR(0x64947a);
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
B64947c:{NFSU2_TR(0x64947c);
if(r1(R+518)){{goto L6496dc;}}
}
B649482:L649482:{c.instructions+=3;NFSU2_TR(0x649482);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B649484:{NFSU2_TR(0x649484);
u8 U[4];
w4(U+0,u32(0x7af310ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649489:{NFSU2_TR(0x649489);
{goto L649492;}
}
B64948b:L64948b:{c.instructions+=2;NFSU2_TR(0x64948b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64948d:{NFSU2_TR(0x64948d);
u8 U[4];
w4(U+0,u32(0x7af2c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649492:L649492:{c.instructions+=2;NFSU2_TR(0x649492);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649493:{NFSU2_TR(0x649493);
{goto L6496c6;}
}
B649498:L649498:{c.instructions+=3;NFSU2_TR(0x649498);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64949b:{NFSU2_TR(0x64949b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xd000004ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000004ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494a1:{NFSU2_TR(0x6494a1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6494d7;}}
}
B6494a3:L6494a3:{c.instructions+=2;NFSU2_TR(0x6494a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xd000000ull))));
}
B6494a9:{NFSU2_TR(0x6494a9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L649555;}}
}
B6494af:L6494af:{c.instructions+=2;NFSU2_TR(0x6494af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xc000000ull))));
}
B6494b5:{NFSU2_TR(0x6494b5);
if(r1(R+512)){{goto L6494e7;}}
}
B6494b7:L6494b7:{c.instructions+=2;NFSU2_TR(0x6494b7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xc000004ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000004ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494bd:{NFSU2_TR(0x6494bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L649555;}}
}
B6494c3:L6494c3:{c.instructions+=2;NFSU2_TR(0x6494c3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494c9:{NFSU2_TR(0x6494c9);
if(r1(R+518)){{goto L649555;}}
}
B6494cf:L6494cf:{c.instructions+=2;NFSU2_TR(0x6494cf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494d5:{NFSU2_TR(0x6494d5);
{goto L6494e5;}
}
B6494d7:L6494d7:{c.instructions+=2;NFSU2_TR(0x6494d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494dd:{NFSU2_TR(0x6494dd);
if(r1(R+518)){{goto L649555;}}
}
B6494df:L6494df:{c.instructions+=1;NFSU2_TR(0x6494df);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494e5:L6494e5:{c.instructions+=1;NFSU2_TR(0x6494e5);
if(r1(R+518)){{goto L649555;}}
}
B6494e7:L6494e7:{c.instructions+=2;NFSU2_TR(0x6494e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6494ea:{NFSU2_TR(0x6494ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649555;}}
}
B6494ec:L6494ec:{c.instructions+=3;NFSU2_TR(0x6494ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6494ef:{NFSU2_TR(0x6494ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494f1:{NFSU2_TR(0x6494f1);
if(r1(R+518)){{goto L649533;}}
}
B6494f3:L6494f3:{c.instructions+=2;NFSU2_TR(0x6494f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494f5:{NFSU2_TR(0x6494f5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L649555;}}
}
B6494f7:L6494f7:{c.instructions+=2;NFSU2_TR(0x6494f7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6494fa:{NFSU2_TR(0x6494fa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L649555;}}
}
B6494fc:L6494fc:{c.instructions+=2;NFSU2_TR(0x6494fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6494ff:{NFSU2_TR(0x6494ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649519;}}
}
B649501:L649501:{c.instructions+=2;NFSU2_TR(0x649501);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649505:{NFSU2_TR(0x649505);
if(r1(R+518)){{goto L64950d;}}
}
B649507:L649507:{c.instructions+=2;NFSU2_TR(0x649507);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64950b:{NFSU2_TR(0x64950b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649519;}}
}
B64950d:L64950d:{c.instructions+=2;NFSU2_TR(0x64950d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649511:{NFSU2_TR(0x649511);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649519;}}
}
B649513:L649513:{c.instructions+=2;NFSU2_TR(0x649513);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649517:{NFSU2_TR(0x649517);
if(r1(R+518)){{goto L64955f;}}
}
B649519:L649519:{c.instructions+=2;NFSU2_TR(0x649519);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64951b:{NFSU2_TR(0x64951b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649527;}}
}
B64951d:L64951d:{c.instructions+=2;NFSU2_TR(0x64951d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649520:{NFSU2_TR(0x649520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649527;}}
}
B649522:L649522:{c.instructions+=2;NFSU2_TR(0x649522);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649525:{NFSU2_TR(0x649525);
if(r1(R+518)){{goto L649555;}}
}
B649527:L649527:{c.instructions+=3;NFSU2_TR(0x649527);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B649529:{NFSU2_TR(0x649529);
u8 U[4];
w4(U+0,u32(0x7af260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64952e:{NFSU2_TR(0x64952e);
{goto L6496af;}
}
B649533:L649533:{c.instructions+=2;NFSU2_TR(0x649533);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649536:{NFSU2_TR(0x649536);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649549;}}
}
B649538:L649538:{c.instructions+=2;NFSU2_TR(0x649538);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64953b:{NFSU2_TR(0x64953b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649549;}}
}
B64953d:L64953d:{c.instructions+=2;NFSU2_TR(0x64953d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649541:{NFSU2_TR(0x649541);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649549;}}
}
B649543:L649543:{c.instructions+=2;NFSU2_TR(0x649543);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649547:{NFSU2_TR(0x649547);
if(r1(R+518)){{goto L64955f;}}
}
B649549:L649549:{c.instructions+=3;NFSU2_TR(0x649549);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64954b:{NFSU2_TR(0x64954b);
u8 U[4];
w4(U+0,u32(0x7af224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649550:{NFSU2_TR(0x649550);
{goto L6496af;}
}
B649555:L649555:{c.instructions+=2;NFSU2_TR(0x649555);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B649559:{NFSU2_TR(0x649559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496dc;}}
}
B64955f:L64955f:{c.instructions+=2;NFSU2_TR(0x64955f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B649562:{NFSU2_TR(0x649562);
if(r1(R+518)){{goto L6496dc;}}
}
B649568:L649568:{c.instructions+=2;NFSU2_TR(0x649568);
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
B64956a:{NFSU2_TR(0x64956a);
if(r1(R+518)){{goto L6496dc;}}
}
B649570:L649570:{c.instructions+=2;NFSU2_TR(0x649570);
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
B649572:{NFSU2_TR(0x649572);
if(r1(R+518)){{goto L6496dc;}}
}
B649578:L649578:{c.instructions+=3;NFSU2_TR(0x649578);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64957a:{NFSU2_TR(0x64957a);
u8 U[4];
w4(U+0,u32(0x7af1e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64957f:{NFSU2_TR(0x64957f);
{goto L6496af;}
}
B649584:L649584:{c.instructions+=2;NFSU2_TR(0x649584);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649587:{NFSU2_TR(0x649587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496b3;}}
}
B64958d:L64958d:{c.instructions+=2;NFSU2_TR(0x64958d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649590:{NFSU2_TR(0x649590);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496b3;}}
}
B649596:L649596:{c.instructions+=4;NFSU2_TR(0x649596);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B649598:{NFSU2_TR(0x649598);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B649599:{NFSU2_TR(0x649599);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64959c:{NFSU2_TR(0x64959c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6495dc;}}
}
B64959e:L64959e:{c.instructions+=2;NFSU2_TR(0x64959e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6495a1:{NFSU2_TR(0x6495a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6495dc;}}
}
B6495a3:L6495a3:{c.instructions+=3;NFSU2_TR(0x6495a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6495a6:{NFSU2_TR(0x6495a6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6495a9:{NFSU2_TR(0x6495a9);
if(r1(R+518)){{goto L6496dc;}}
}
B6495af:L6495af:{c.instructions+=2;NFSU2_TR(0x6495af);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6495b2:{NFSU2_TR(0x6495b2);
if(r1(R+518)){{goto L6496dc;}}
}
B6495b8:L6495b8:{c.instructions+=2;NFSU2_TR(0x6495b8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6495bb:{NFSU2_TR(0x6495bb);
if(r1(R+518)){{goto L6496dc;}}
}
B6495c1:L6495c1:{c.instructions+=2;NFSU2_TR(0x6495c1);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6495c4:{NFSU2_TR(0x6495c4);
if(r1(R+518)){{goto L6496dc;}}
}
B6495ca:L6495ca:{c.instructions+=2;NFSU2_TR(0x6495ca);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6495cd:{NFSU2_TR(0x6495cd);
if(r1(R+518)){{goto L6496dc;}}
}
B6495d3:L6495d3:{c.instructions+=2;NFSU2_TR(0x6495d3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6495d6:{NFSU2_TR(0x6495d6);
if(r1(R+518)){{goto L6496dc;}}
}
B6495dc:L6495dc:{c.instructions+=3;NFSU2_TR(0x6495dc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6495de:{NFSU2_TR(0x6495de);
u8 U[4];
w4(U+0,u32(0x7af1a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6495e3:{NFSU2_TR(0x6495e3);
{goto L6496af;}
}
B6495e8:L6495e8:{c.instructions+=2;NFSU2_TR(0x6495e8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6495eb:{NFSU2_TR(0x6495eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6496be;}}
}
B6495f1:L6495f1:{c.instructions+=2;NFSU2_TR(0x6495f1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6495f4:{NFSU2_TR(0x6495f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64967c;}}
}
B6495fa:L6495fa:{c.instructions+=2;NFSU2_TR(0x6495fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf20000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649600:{NFSU2_TR(0x649600);
if(r1(R+518)){{goto L64964a;}}
}
B649602:L649602:{c.instructions+=3;NFSU2_TR(0x649602);
w4(R+28,u32(0xf30000ull));
}
B649607:{NFSU2_TR(0x649607);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649609:{NFSU2_TR(0x649609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496be;}}
}
B64960f:L64960f:{c.instructions+=2;NFSU2_TR(0x64960f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649612:{NFSU2_TR(0x649612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496b3;}}
}
B649618:L649618:{c.instructions+=2;NFSU2_TR(0x649618);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64961b:{NFSU2_TR(0x64961b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496b3;}}
}
B649621:L649621:{c.instructions+=4;NFSU2_TR(0x649621);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B649623:{NFSU2_TR(0x649623);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B649624:{NFSU2_TR(0x649624);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649627:{NFSU2_TR(0x649627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649641;}}
}
B649629:L649629:{c.instructions+=2;NFSU2_TR(0x649629);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64962c:{NFSU2_TR(0x64962c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649641;}}
}
B64962e:L64962e:{c.instructions+=2;NFSU2_TR(0x64962e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B649631:{NFSU2_TR(0x649631);
if(r1(R+518)){{goto L6496dc;}}
}
B649637:L649637:{c.instructions+=2;NFSU2_TR(0x649637);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64963b:{NFSU2_TR(0x64963b);
if(r1(R+518)){{goto L6496dc;}}
}
B649641:L649641:{c.instructions+=3;NFSU2_TR(0x649641);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B649643:{NFSU2_TR(0x649643);
u8 U[4];
w4(U+0,u32(0x7af158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649648:{NFSU2_TR(0x649648);
{goto L6496af;}
}
B64964a:L64964a:{c.instructions+=4;NFSU2_TR(0x64964a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64964c:{NFSU2_TR(0x64964c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64964d:{NFSU2_TR(0x64964d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649651:{NFSU2_TR(0x649651);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64965e;}}
}
B649653:L649653:{c.instructions+=2;NFSU2_TR(0x649653);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649657:{NFSU2_TR(0x649657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649669;}}
}
B649659:L649659:{c.instructions+=2;NFSU2_TR(0x649659);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64965c:{NFSU2_TR(0x64965c);
{goto L649671;}
}
B64965e:L64965e:{c.instructions+=2;NFSU2_TR(0x64965e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649662:{NFSU2_TR(0x649662);
if(r1(R+518)){{goto L649669;}}
}
B649664:L649664:{c.instructions+=2;NFSU2_TR(0x649664);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649667:{NFSU2_TR(0x649667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649673;}}
}
B649669:L649669:{c.instructions+=2;NFSU2_TR(0x649669);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64966c:{NFSU2_TR(0x64966c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649673;}}
}
B64966e:L64966e:{c.instructions+=1;NFSU2_TR(0x64966e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B649671:L649671:{c.instructions+=1;NFSU2_TR(0x649671);
if(r1(R+518)){{goto L6496dc;}}
}
B649673:L649673:{c.instructions+=3;NFSU2_TR(0x649673);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B649675:{NFSU2_TR(0x649675);
u8 U[4];
w4(U+0,u32(0x7af100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64967a:{NFSU2_TR(0x64967a);
{goto L6496af;}
}
B64967c:L64967c:{c.instructions+=2;NFSU2_TR(0x64967c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64967f:{NFSU2_TR(0x64967f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496b3;}}
}
B649681:L649681:{c.instructions+=2;NFSU2_TR(0x649681);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649684:{NFSU2_TR(0x649684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496b3;}}
}
B649686:L649686:{c.instructions+=4;NFSU2_TR(0x649686);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B649688:{NFSU2_TR(0x649688);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B649689:{NFSU2_TR(0x649689);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64968c:{NFSU2_TR(0x64968c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649698;}}
}
B64968e:L64968e:{c.instructions+=2;NFSU2_TR(0x64968e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649691:{NFSU2_TR(0x649691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649698;}}
}
B649693:L649693:{c.instructions+=2;NFSU2_TR(0x649693);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B649696:{NFSU2_TR(0x649696);
if(r1(R+518)){{goto L6496dc;}}
}
B649698:L649698:{c.instructions+=2;NFSU2_TR(0x649698);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64969c:{NFSU2_TR(0x64969c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496a8;}}
}
B64969e:L64969e:{c.instructions+=2;NFSU2_TR(0x64969e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6496a1:{NFSU2_TR(0x6496a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6496a8;}}
}
B6496a3:L6496a3:{c.instructions+=2;NFSU2_TR(0x6496a3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B6496a6:{NFSU2_TR(0x6496a6);
if(r1(R+518)){{goto L6496dc;}}
}
B6496a8:L6496a8:{c.instructions+=2;NFSU2_TR(0x6496a8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6496aa:{NFSU2_TR(0x6496aa);
u8 U[4];
w4(U+0,u32(0x7af0b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6496af:L6496af:{c.instructions+=2;NFSU2_TR(0x6496af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6496b1:{NFSU2_TR(0x6496b1);
{goto L6496c6;}
}
B6496b3:L6496b3:{c.instructions+=3;NFSU2_TR(0x6496b3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6496b5:{NFSU2_TR(0x6496b5);
u8 U[4];
w4(U+0,u32(0x7af2c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6496ba:{NFSU2_TR(0x6496ba);
{goto L6496c5;}
}
B6496bc:L6496bc:{c.instructions+=1;NFSU2_TR(0x6496bc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6496be:L6496be:{c.instructions+=2;NFSU2_TR(0x6496be);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6496c0:{NFSU2_TR(0x6496c0);
u8 U[4];
w4(U+0,u32(0x7af068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6496c5:L6496c5:{c.instructions+=1;NFSU2_TR(0x6496c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6496c6:L6496c6:{c.instructions+=4;NFSU2_TR(0x6496c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6496c9:{NFSU2_TR(0x6496c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B6496cc:{NFSU2_TR(0x6496cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6496cd:{NFSU2_TR(0x6496cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6496d2ull));
TAIL_STATIC(0x64307cu,643);
}
B6496d2:L6496d2:{c.instructions+=2;NFSU2_TR(0x6496d2);
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
B6496d5:{NFSU2_TR(0x6496d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6496dc:L6496dc:{c.instructions+=6;NFSU2_TR(0x6496dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6496df:{NFSU2_TR(0x6496df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6496e0:{NFSU2_TR(0x6496e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6496e1:{NFSU2_TR(0x6496e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6496e2:{NFSU2_TR(0x6496e2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6496e3:{NFSU2_TR(0x6496e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6496e6:L6496e6:{c.instructions+=8;NFSU2_TR(0x6496e6);
__builtin_memmove((R+28),(R+28),4);
}
B6496e8:{NFSU2_TR(0x6496e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6496e9:{NFSU2_TR(0x6496e9);
__builtin_memmove((R+20),(R+16),4);
}
B6496eb:{NFSU2_TR(0x6496eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6496ee:{NFSU2_TR(0x6496ee);
__builtin_memmove((R+0),(R+8),4);
}
B6496f0:{NFSU2_TR(0x6496f0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B6496f5:{NFSU2_TR(0x6496f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6496f7:{NFSU2_TR(0x6496f7);
if(r1(R+518)){{goto L649720;}}
}
B6496f9:L6496f9:{c.instructions+=4;NFSU2_TR(0x6496f9);
w4(R+8,u32(~u32(r4(R+8))));
}
B6496fb:{NFSU2_TR(0x6496fb);
__builtin_memmove((R+4),(R+8),4);
}
B6496fd:{NFSU2_TR(0x6496fd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B649700:{NFSU2_TR(0x649700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64971c;}}
}
B649702:L649702:{c.instructions+=2;NFSU2_TR(0x649702);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649706:{NFSU2_TR(0x649706);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64971c;}}
}
B649708:L649708:{c.instructions+=2;NFSU2_TR(0x649708);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64970c:{NFSU2_TR(0x64970c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64971c;}}
}
B64970e:L64970e:{c.instructions+=6;NFSU2_TR(0x64970e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649711:{NFSU2_TR(0x649711);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649714:{NFSU2_TR(0x649714);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B649716:{NFSU2_TR(0x649716);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B649718:{NFSU2_TR(0x649718);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64971a:{NFSU2_TR(0x64971a);
{goto L649774;}
}
B64971c:L64971c:{c.instructions+=2;NFSU2_TR(0x64971c);
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
B64971e:{NFSU2_TR(0x64971e);
{goto L649774;}
}
B649720:L649720:{c.instructions+=5;NFSU2_TR(0x649720);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649721:{NFSU2_TR(0x649721);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649722:{NFSU2_TR(0x649722);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649723:{NFSU2_TR(0x649723);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649729:{NFSU2_TR(0x649729);
{goto L64976b;}
}
B64972b:L64972b:{c.instructions+=2;NFSU2_TR(0x64972b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64972d:{NFSU2_TR(0x64972d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649734;}}
}
B64972f:L64972f:{c.instructions+=2;NFSU2_TR(0x64972f);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B649732:{NFSU2_TR(0x649732);
{goto L649766;}
}
B649734:L649734:{c.instructions+=3;NFSU2_TR(0x649734);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649737:{NFSU2_TR(0x649737);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649739:{NFSU2_TR(0x649739);
if(r1(R+518)){{goto L649768;}}
}
B64973b:L64973b:{c.instructions+=1;NFSU2_TR(0x64973b);
__builtin_memmove((R+4),(R+8),4);
}
B64973d:L64973d:{c.instructions+=4;NFSU2_TR(0x64973d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B64973f:{NFSU2_TR(0x64973f);
__builtin_memmove((R+0),(R+12),1);
}
B649741:{NFSU2_TR(0x649741);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B649743:{NFSU2_TR(0x649743);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64975f;}}
}
B649745:L649745:{c.instructions+=2;NFSU2_TR(0x649745);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B649747:{NFSU2_TR(0x649747);
if(r1(R+518)){{goto L64975b;}}
}
B649749:L649749:{c.instructions+=4;NFSU2_TR(0x649749);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B64974c:{NFSU2_TR(0x64974c);
__builtin_memmove((R+0),(R+12),1);
}
B64974e:{NFSU2_TR(0x64974e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B649751:{NFSU2_TR(0x649751);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64975f;}}
}
B649753:L649753:{c.instructions+=6;NFSU2_TR(0x649753);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B649754:{NFSU2_TR(0x649754);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B649755:{NFSU2_TR(0x649755);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B649756:{NFSU2_TR(0x649756);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B649757:{NFSU2_TR(0x649757);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B649759:{NFSU2_TR(0x649759);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64973du);}goto L64973d;}}
}
B64975b:L64975b:{c.instructions+=2;NFSU2_TR(0x64975b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64975d:{NFSU2_TR(0x64975d);
{goto L649764;}
}
B64975f:L64975f:{c.instructions+=2;NFSU2_TR(0x64975f);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B649761:{NFSU2_TR(0x649761);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B649764:L649764:{c.instructions+=1;NFSU2_TR(0x649764);
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
B649766:L649766:{c.instructions+=1;NFSU2_TR(0x649766);
if(r1(R+518)){{goto L649778;}}
}
B649768:L649768:{c.instructions+=1;NFSU2_TR(0x649768);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64976b:L64976b:{c.instructions+=2;NFSU2_TR(0x64976b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64976d:{NFSU2_TR(0x64976d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64972bu);}goto L64972b;}}
}
B64976f:L64976f:{c.instructions+=1;NFSU2_TR(0x64976f);
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
B649771:L649771:{c.instructions+=3;NFSU2_TR(0x649771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B649772:{NFSU2_TR(0x649772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B649773:{NFSU2_TR(0x649773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B649774:L649774:{c.instructions+=2;NFSU2_TR(0x649774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B649775:{NFSU2_TR(0x649775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B649778:L649778:{c.instructions+=2;NFSU2_TR(0x649778);
__builtin_memmove((R+0),(R+28),4);
}
B64977a:{NFSU2_TR(0x64977a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649771u);}goto L649771;}
}
B64977c:L64977c:{c.instructions+=8;NFSU2_TR(0x64977c);
__builtin_memmove((R+28),(R+28),4);
}
B64977e:{NFSU2_TR(0x64977e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64977f:{NFSU2_TR(0x64977f);
__builtin_memmove((R+20),(R+16),4);
}
B649781:{NFSU2_TR(0x649781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B649784:{NFSU2_TR(0x649784);
__builtin_memmove((R+0),(R+8),4);
}
B649786:{NFSU2_TR(0x649786);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B64978b:{NFSU2_TR(0x64978b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64978d:{NFSU2_TR(0x64978d);
if(r1(R+518)){{goto L6497a1;}}
}
B64978f:L64978f:{c.instructions+=4;NFSU2_TR(0x64978f);
w4(R+8,u32(~u32(r4(R+8))));
}
B649791:{NFSU2_TR(0x649791);
__builtin_memmove((R+0),(R+8),4);
}
B649793:{NFSU2_TR(0x649793);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B649796:{NFSU2_TR(0x649796);
if(r1(R+518)){{goto L64979c;}}
}
B649798:L649798:{c.instructions+=2;NFSU2_TR(0x649798);
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
B64979a:{NFSU2_TR(0x64979a);
{goto L6497f5;}
}
B64979c:L64979c:{c.instructions+=2;NFSU2_TR(0x64979c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64979f:{NFSU2_TR(0x64979f);
{goto L6497f5;}
}
B6497a1:L6497a1:{c.instructions+=5;NFSU2_TR(0x6497a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6497a2:{NFSU2_TR(0x6497a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6497a3:{NFSU2_TR(0x6497a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6497a4:{NFSU2_TR(0x6497a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6497aa:{NFSU2_TR(0x6497aa);
{goto L6497ec;}
}
B6497ac:L6497ac:{c.instructions+=2;NFSU2_TR(0x6497ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6497ae:{NFSU2_TR(0x6497ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6497b5;}}
}
B6497b0:L6497b0:{c.instructions+=2;NFSU2_TR(0x6497b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6497b3:{NFSU2_TR(0x6497b3);
{goto L6497e7;}
}
B6497b5:L6497b5:{c.instructions+=3;NFSU2_TR(0x6497b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6497b8:{NFSU2_TR(0x6497b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6497ba:{NFSU2_TR(0x6497ba);
if(r1(R+518)){{goto L6497e9;}}
}
B6497bc:L6497bc:{c.instructions+=1;NFSU2_TR(0x6497bc);
__builtin_memmove((R+4),(R+8),4);
}
B6497be:L6497be:{c.instructions+=4;NFSU2_TR(0x6497be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6497c0:{NFSU2_TR(0x6497c0);
__builtin_memmove((R+0),(R+12),1);
}
B6497c2:{NFSU2_TR(0x6497c2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6497c4:{NFSU2_TR(0x6497c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6497e0;}}
}
B6497c6:L6497c6:{c.instructions+=2;NFSU2_TR(0x6497c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6497c8:{NFSU2_TR(0x6497c8);
if(r1(R+518)){{goto L6497dc;}}
}
B6497ca:L6497ca:{c.instructions+=4;NFSU2_TR(0x6497ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6497cd:{NFSU2_TR(0x6497cd);
__builtin_memmove((R+0),(R+12),1);
}
B6497cf:{NFSU2_TR(0x6497cf);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6497d2:{NFSU2_TR(0x6497d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6497e0;}}
}
B6497d4:L6497d4:{c.instructions+=6;NFSU2_TR(0x6497d4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6497d5:{NFSU2_TR(0x6497d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6497d6:{NFSU2_TR(0x6497d6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6497d7:{NFSU2_TR(0x6497d7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6497d8:{NFSU2_TR(0x6497d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6497da:{NFSU2_TR(0x6497da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6497beu);}goto L6497be;}}
}
B6497dc:L6497dc:{c.instructions+=2;NFSU2_TR(0x6497dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6497de:{NFSU2_TR(0x6497de);
{goto L6497e5;}
}
B6497e0:L6497e0:{c.instructions+=2;NFSU2_TR(0x6497e0);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6497e2:{NFSU2_TR(0x6497e2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6497e5:L6497e5:{c.instructions+=1;NFSU2_TR(0x6497e5);
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
B6497e7:L6497e7:{c.instructions+=1;NFSU2_TR(0x6497e7);
if(r1(R+518)){{goto L6497f9;}}
}
B6497e9:L6497e9:{c.instructions+=1;NFSU2_TR(0x6497e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6497ec:L6497ec:{c.instructions+=2;NFSU2_TR(0x6497ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6497ee:{NFSU2_TR(0x6497ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6497acu);}goto L6497ac;}}
}
B6497f0:L6497f0:{c.instructions+=1;NFSU2_TR(0x6497f0);
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
B6497f2:L6497f2:{c.instructions+=3;NFSU2_TR(0x6497f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6497f3:{NFSU2_TR(0x6497f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6497f4:{NFSU2_TR(0x6497f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6497f5:L6497f5:{c.instructions+=2;NFSU2_TR(0x6497f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6497f6:{NFSU2_TR(0x6497f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6497f9:L6497f9:{c.instructions+=2;NFSU2_TR(0x6497f9);
__builtin_memmove((R+0),(R+28),4);
}
B6497fb:{NFSU2_TR(0x6497fb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6497f2u);}goto L6497f2;}
}
B6497fd:L6497fd:{c.instructions+=8;NFSU2_TR(0x6497fd);
__builtin_memmove((R+28),(R+28),4);
}
B6497ff:{NFSU2_TR(0x6497ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649800:{NFSU2_TR(0x649800);
__builtin_memmove((R+20),(R+16),4);
}
B649802:{NFSU2_TR(0x649802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B649805:{NFSU2_TR(0x649805);
__builtin_memmove((R+0),(R+8),4);
}
B649807:{NFSU2_TR(0x649807);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B64980c:{NFSU2_TR(0x64980c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64980e:{NFSU2_TR(0x64980e);
if(r1(R+518)){{goto L649822;}}
}
B649810:L649810:{c.instructions+=4;NFSU2_TR(0x649810);
w4(R+8,u32(~u32(r4(R+8))));
}
B649812:{NFSU2_TR(0x649812);
__builtin_memmove((R+0),(R+8),4);
}
B649814:{NFSU2_TR(0x649814);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B649817:{NFSU2_TR(0x649817);
if(r1(R+518)){{goto L64981d;}}
}
B649819:L649819:{c.instructions+=2;NFSU2_TR(0x649819);
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
B64981b:{NFSU2_TR(0x64981b);
{goto L649876;}
}
B64981d:L64981d:{c.instructions+=2;NFSU2_TR(0x64981d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649820:{NFSU2_TR(0x649820);
{goto L649876;}
}
B649822:L649822:{c.instructions+=5;NFSU2_TR(0x649822);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649823:{NFSU2_TR(0x649823);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649824:{NFSU2_TR(0x649824);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649825:{NFSU2_TR(0x649825);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64982b:{NFSU2_TR(0x64982b);
{goto L64986d;}
}
B64982d:L64982d:{c.instructions+=2;NFSU2_TR(0x64982d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64982f:{NFSU2_TR(0x64982f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649836;}}
}
B649831:L649831:{c.instructions+=2;NFSU2_TR(0x649831);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B649834:{NFSU2_TR(0x649834);
{goto L649868;}
}
B649836:L649836:{c.instructions+=3;NFSU2_TR(0x649836);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649839:{NFSU2_TR(0x649839);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64983b:{NFSU2_TR(0x64983b);
if(r1(R+518)){{goto L64986a;}}
}
B64983d:L64983d:{c.instructions+=1;NFSU2_TR(0x64983d);
__builtin_memmove((R+4),(R+8),4);
}
B64983f:L64983f:{c.instructions+=4;NFSU2_TR(0x64983f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B649841:{NFSU2_TR(0x649841);
__builtin_memmove((R+0),(R+12),1);
}
B649843:{NFSU2_TR(0x649843);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B649845:{NFSU2_TR(0x649845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649861;}}
}
B649847:L649847:{c.instructions+=2;NFSU2_TR(0x649847);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B649849:{NFSU2_TR(0x649849);
if(r1(R+518)){{goto L64985d;}}
}
B64984b:L64984b:{c.instructions+=4;NFSU2_TR(0x64984b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B64984e:{NFSU2_TR(0x64984e);
__builtin_memmove((R+0),(R+12),1);
}
B649850:{NFSU2_TR(0x649850);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B649853:{NFSU2_TR(0x649853);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649861;}}
}
B649855:L649855:{c.instructions+=6;NFSU2_TR(0x649855);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B649856:{NFSU2_TR(0x649856);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B649857:{NFSU2_TR(0x649857);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B649858:{NFSU2_TR(0x649858);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B649859:{NFSU2_TR(0x649859);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64985b:{NFSU2_TR(0x64985b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64983fu);}goto L64983f;}}
}
B64985d:L64985d:{c.instructions+=2;NFSU2_TR(0x64985d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64985f:{NFSU2_TR(0x64985f);
{goto L649866;}
}
B649861:L649861:{c.instructions+=2;NFSU2_TR(0x649861);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B649863:{NFSU2_TR(0x649863);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B649866:L649866:{c.instructions+=1;NFSU2_TR(0x649866);
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
B649868:L649868:{c.instructions+=1;NFSU2_TR(0x649868);
if(r1(R+518)){{goto L64987a;}}
}
B64986a:L64986a:{c.instructions+=1;NFSU2_TR(0x64986a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64986d:L64986d:{c.instructions+=2;NFSU2_TR(0x64986d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64986f:{NFSU2_TR(0x64986f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64982du);}goto L64982d;}}
}
B649871:L649871:{c.instructions+=1;NFSU2_TR(0x649871);
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
B649873:L649873:{c.instructions+=3;NFSU2_TR(0x649873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B649874:{NFSU2_TR(0x649874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B649875:{NFSU2_TR(0x649875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B649876:L649876:{c.instructions+=2;NFSU2_TR(0x649876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B649877:{NFSU2_TR(0x649877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64987a:L64987a:{c.instructions+=2;NFSU2_TR(0x64987a);
__builtin_memmove((R+0),(R+28),4);
}
B64987c:{NFSU2_TR(0x64987c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649873u);}goto L649873;}
}
B64987e:L64987e:{c.instructions+=8;NFSU2_TR(0x64987e);
__builtin_memmove((R+28),(R+28),4);
}
B649880:{NFSU2_TR(0x649880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649881:{NFSU2_TR(0x649881);
__builtin_memmove((R+20),(R+16),4);
}
B649883:{NFSU2_TR(0x649883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649886:{NFSU2_TR(0x649886);
__builtin_memmove((R+4),(R+0),4);
}
B649888:{NFSU2_TR(0x649888);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B64988e:{NFSU2_TR(0x64988e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649890:{NFSU2_TR(0x649890);
if(r1(R+518)){{goto L64989e;}}
}
B649892:L649892:{c.instructions+=3;NFSU2_TR(0x649892);
w4(R+0,u32(~u32(r4(R+0))));
}
B649894:{NFSU2_TR(0x649894);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B649897:{NFSU2_TR(0x649897);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64989e;}}
}
B649899:L649899:{c.instructions+=2;NFSU2_TR(0x649899);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64989c:{NFSU2_TR(0x64989c);
{goto L6498a0;}
}
B64989e:L64989e:{c.instructions+=1;NFSU2_TR(0x64989e);
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
B6498a0:L6498a0:{c.instructions+=2;NFSU2_TR(0x6498a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6498a1:{NFSU2_TR(0x6498a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6498a4:L6498a4:{c.instructions+=11;NFSU2_TR(0x6498a4);
__builtin_memmove((R+28),(R+28),4);
}
B6498a6:{NFSU2_TR(0x6498a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6498a7:{NFSU2_TR(0x6498a7);
__builtin_memmove((R+20),(R+16),4);
}
B6498a9:{NFSU2_TR(0x6498a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B6498af:{NFSU2_TR(0x6498af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6498b0:{NFSU2_TR(0x6498b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6498b1:{NFSU2_TR(0x6498b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6498b4:{NFSU2_TR(0x6498b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6498b7:{NFSU2_TR(0x6498b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6498b8:{NFSU2_TR(0x6498b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6498bb:{NFSU2_TR(0x6498bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6498c0ull));
TAIL_STATIC(0x647643u,647);
}
B6498c0:L6498c0:{c.instructions+=5;NFSU2_TR(0x6498c0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6498c2:{NFSU2_TR(0x6498c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6498c8:{NFSU2_TR(0x6498c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6498cb:{NFSU2_TR(0x6498cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6498ce:{NFSU2_TR(0x6498ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6498d3ull));
TAIL_STATIC(0x673974u,673);
}
B6498d3:L6498d3:{c.instructions+=3;NFSU2_TR(0x6498d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6498d6:{NFSU2_TR(0x6498d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6498d8:{NFSU2_TR(0x6498d8);
if(r1(R+518)){{goto L6498dc;}}
}
B6498da:L6498da:{c.instructions+=1;NFSU2_TR(0x6498da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6498dc:L6498dc:{c.instructions+=3;NFSU2_TR(0x6498dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6498df:{NFSU2_TR(0x6498df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6498e1:{NFSU2_TR(0x6498e1);
if(r1(R+518)){{goto L6498e5;}}
}
B6498e3:L6498e3:{c.instructions+=1;NFSU2_TR(0x6498e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6498e5:L6498e5:{c.instructions+=4;NFSU2_TR(0x6498e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6498e6:{NFSU2_TR(0x6498e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6498e9:{NFSU2_TR(0x6498e9);
__builtin_memmove((R+4),(R+24),4);
}
B6498eb:{NFSU2_TR(0x6498eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6498f0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64977cu);}goto L64977c;}
}
B6498f0:L6498f0:{c.instructions+=3;NFSU2_TR(0x6498f0);
__builtin_memmove((R+28),(R+0),4);
}
B6498f2:{NFSU2_TR(0x6498f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6498f4:{NFSU2_TR(0x6498f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649902;}}
}
B6498f6:L6498f6:{c.instructions+=2;NFSU2_TR(0x6498f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6498fd:{NFSU2_TR(0x6498fd);
{goto L649996;}
}
B649902:L649902:{c.instructions+=2;NFSU2_TR(0x649902);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649905:{NFSU2_TR(0x649905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64990aull));
TAIL_STATIC(0x642a34u,642);
}
B64990a:L64990a:{c.instructions+=3;NFSU2_TR(0x64990a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64990c:{NFSU2_TR(0x64990c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64990f:{NFSU2_TR(0x64990f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649996;}}
}
B649915:L649915:{c.instructions+=14;NFSU2_TR(0x649915);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649916:{NFSU2_TR(0x649916);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649919:{NFSU2_TR(0x649919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64991a:{NFSU2_TR(0x64991a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64991d:{NFSU2_TR(0x64991d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100ull))));
}
B649922:{NFSU2_TR(0x649922);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649923:{NFSU2_TR(0x649923);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649926:{NFSU2_TR(0x649926);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649929:{NFSU2_TR(0x649929);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64992a:{NFSU2_TR(0x64992a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64992d:{NFSU2_TR(0x64992d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649933:{NFSU2_TR(0x649933);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649939:{NFSU2_TR(0x649939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64993a:{NFSU2_TR(0x64993a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64993full));
TAIL_STATIC(0x684a53u,684);
}
B64993f:L64993f:{c.instructions+=3;NFSU2_TR(0x64993f);
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
B649941:{NFSU2_TR(0x649941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649944:{NFSU2_TR(0x649944);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649996;}}
}
B649946:L649946:{c.instructions+=2;NFSU2_TR(0x649946);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649949:{NFSU2_TR(0x649949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64994eull));
TAIL_STATIC(0x642b3fu,642);
}
B64994e:L64994e:{c.instructions+=2;NFSU2_TR(0x64994e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649950:{NFSU2_TR(0x649950);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L649959;}}
}
B649952:L649952:{c.instructions+=1;NFSU2_TR(0x649952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x88760b59ull));
s4(u32(r4(U+0)),r4(U+4));
}
B649959:L649959:{c.instructions+=2;NFSU2_TR(0x649959);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B64995c:{NFSU2_TR(0x64995c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649996;}}
}
B64995e:L64995e:{c.instructions+=6;NFSU2_TR(0x64995e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B649961:{NFSU2_TR(0x649961);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649962:{NFSU2_TR(0x649962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649965:{NFSU2_TR(0x649965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649967:{NFSU2_TR(0x649967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649968:{NFSU2_TR(0x649968);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64996bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64996b:L64996b:{c.instructions+=2;NFSU2_TR(0x64996b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64996c:{NFSU2_TR(0x64996c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649971ull));
TAIL_STATIC(0x672364u,672);
}
B649971:L649971:{c.instructions+=3;NFSU2_TR(0x649971);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B649973:{NFSU2_TR(0x649973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649976:{NFSU2_TR(0x649976);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649996;}}
}
B649978:L649978:{c.instructions+=3;NFSU2_TR(0x649978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64997b:{NFSU2_TR(0x64997b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64997d:{NFSU2_TR(0x64997d);
if(r1(R+518)){{goto L649987;}}
}
B64997f:L64997f:{c.instructions+=3;NFSU2_TR(0x64997f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649982:{NFSU2_TR(0x649982);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B649984:{NFSU2_TR(0x649984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649987:L649987:{c.instructions+=3;NFSU2_TR(0x649987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64998a:{NFSU2_TR(0x64998a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64998c:{NFSU2_TR(0x64998c);
if(r1(R+518)){{goto L649996;}}
}
B64998e:L64998e:{c.instructions+=3;NFSU2_TR(0x64998e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649991:{NFSU2_TR(0x649991);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B649993:{NFSU2_TR(0x649993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649996:L649996:{c.instructions+=3;NFSU2_TR(0x649996);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649999:{NFSU2_TR(0x649999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64999a:{NFSU2_TR(0x64999a);
if(r1(R+518)){{goto L6499a7;}}
}
B64999c:L64999c:{c.instructions+=3;NFSU2_TR(0x64999c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64999f:{NFSU2_TR(0x64999f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6499a2:{NFSU2_TR(0x6499a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6499a7ull));
TAIL_STATIC(0x642ad1u,642);
}
B6499a7:L6499a7:{c.instructions+=3;NFSU2_TR(0x6499a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6499aa:{NFSU2_TR(0x6499aa);
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
B6499ac:{NFSU2_TR(0x6499ac);
if(r1(R+518)){{goto L6499b7;}}
}
B6499ae:L6499ae:{c.instructions+=3;NFSU2_TR(0x6499ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6499b0:{NFSU2_TR(0x6499b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6499b1:{NFSU2_TR(0x6499b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6499b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6499b4:L6499b4:{c.instructions+=1;NFSU2_TR(0x6499b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6499b7:L6499b7:{c.instructions+=3;NFSU2_TR(0x6499b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6499ba:{NFSU2_TR(0x6499ba);
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
B6499bc:{NFSU2_TR(0x6499bc);
if(r1(R+518)){{goto L6499c7;}}
}
B6499be:L6499be:{c.instructions+=3;NFSU2_TR(0x6499be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6499c0:{NFSU2_TR(0x6499c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6499c1:{NFSU2_TR(0x6499c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6499c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6499c4:L6499c4:{c.instructions+=1;NFSU2_TR(0x6499c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6499c7:L6499c7:{c.instructions+=2;NFSU2_TR(0x6499c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6499cd:{NFSU2_TR(0x6499cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6499d2ull));
TAIL_STATIC(0x675379u,675);
}
B6499d2:L6499d2:{c.instructions+=2;NFSU2_TR(0x6499d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6499d5:{NFSU2_TR(0x6499d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6499daull));
TAIL_STATIC(0x64547fu,645);
}
B6499da:L6499da:{c.instructions+=5;NFSU2_TR(0x6499da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6499dd:{NFSU2_TR(0x6499dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6499de:{NFSU2_TR(0x6499de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6499df:{NFSU2_TR(0x6499df);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6499e0:{NFSU2_TR(0x6499e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6499e3:L6499e3:{c.instructions+=14;NFSU2_TR(0x6499e3);
__builtin_memmove((R+28),(R+28),4);
}
B6499e5:{NFSU2_TR(0x6499e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6499e6:{NFSU2_TR(0x6499e6);
__builtin_memmove((R+20),(R+16),4);
}
B6499e8:{NFSU2_TR(0x6499e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B6499ee:{NFSU2_TR(0x6499ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6499ef:{NFSU2_TR(0x6499ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6499f0:{NFSU2_TR(0x6499f0);
__builtin_memmove((R+24),(R+4),4);
}
B6499f2:{NFSU2_TR(0x6499f2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6499f4:{NFSU2_TR(0x6499f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6499f5:{NFSU2_TR(0x6499f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6499fb:{NFSU2_TR(0x6499fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6499fe:{NFSU2_TR(0x6499fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649a01:{NFSU2_TR(0x649a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649a04:{NFSU2_TR(0x649a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649a09ull));
TAIL_STATIC(0x673974u,673);
}
B649a09:L649a09:{c.instructions+=5;NFSU2_TR(0x649a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649a0c:{NFSU2_TR(0x649a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649a0f:{NFSU2_TR(0x649a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649a12:{NFSU2_TR(0x649a12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649a14:{NFSU2_TR(0x649a14);
if(r1(R+518)){{goto L649c13;}}
}
B649a1a:L649a1a:{c.instructions+=2;NFSU2_TR(0x649a1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a1e:{NFSU2_TR(0x649a1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649c0c;}}
}
B649a24:L649a24:{c.instructions+=4;NFSU2_TR(0x649a24);
__builtin_memmove((R+8),(R+0),4);
}
B649a26:{NFSU2_TR(0x649a26);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a29:{NFSU2_TR(0x649a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649a2c:{NFSU2_TR(0x649a2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649c0c;}}
}
B649a32:L649a32:{c.instructions+=3;NFSU2_TR(0x649a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649a35:{NFSU2_TR(0x649a35);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649a37:{NFSU2_TR(0x649a37);
if(r1(R+518)){{goto L649a56;}}
}
B649a39:L649a39:{c.instructions+=2;NFSU2_TR(0x649a39);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a3d:{NFSU2_TR(0x649a3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649a56;}}
}
B649a3f:L649a3f:{c.instructions+=3;NFSU2_TR(0x649a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649a42:{NFSU2_TR(0x649a42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649a44:{NFSU2_TR(0x649a44);
if(r1(R+518)){{goto L649a56;}}
}
B649a46:L649a46:{c.instructions+=2;NFSU2_TR(0x649a46);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a4a:{NFSU2_TR(0x649a4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649a56;}}
}
B649a4c:L649a4c:{c.instructions+=4;NFSU2_TR(0x649a4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a4f:{NFSU2_TR(0x649a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649a52:{NFSU2_TR(0x649a52);
__builtin_memmove((R+8),(R+0),4);
}
B649a54:{NFSU2_TR(0x649a54);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649a32u);}goto L649a32;}}
}
B649a56:L649a56:{c.instructions+=2;NFSU2_TR(0x649a56);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a59:{NFSU2_TR(0x649a59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649c0c;}}
}
B649a5f:L649a5f:{c.instructions+=3;NFSU2_TR(0x649a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649a62:{NFSU2_TR(0x649a62);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649a64:{NFSU2_TR(0x649a64);
if(r1(R+518)){{goto L649c0c;}}
}
B649a6a:L649a6a:{c.instructions+=2;NFSU2_TR(0x649a6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a6e:{NFSU2_TR(0x649a6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649c0c;}}
}
B649a74:L649a74:{c.instructions+=3;NFSU2_TR(0x649a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649a77:{NFSU2_TR(0x649a77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649a79:{NFSU2_TR(0x649a79);
if(r1(R+518)){{goto L649c0c;}}
}
B649a7f:L649a7f:{c.instructions+=2;NFSU2_TR(0x649a7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a83:{NFSU2_TR(0x649a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649c0c;}}
}
B649a89:L649a89:{c.instructions+=3;NFSU2_TR(0x649a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649a8f:{NFSU2_TR(0x649a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B649a92:{NFSU2_TR(0x649a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649a95:L649a95:{c.instructions+=3;NFSU2_TR(0x649a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649a98:{NFSU2_TR(0x649a98);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649a9c:{NFSU2_TR(0x649a9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649c0c;}}
}
B649aa2:L649aa2:{c.instructions+=3;NFSU2_TR(0x649aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649aa5:{NFSU2_TR(0x649aa5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649aa7:{NFSU2_TR(0x649aa7);
if(r1(R+518)){{goto L649c0c;}}
}
B649aad:L649aad:{c.instructions+=2;NFSU2_TR(0x649aad);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649ab1:{NFSU2_TR(0x649ab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649c0c;}}
}
B649ab7:L649ab7:{c.instructions+=3;NFSU2_TR(0x649ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649aba:{NFSU2_TR(0x649aba);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B649abc:{NFSU2_TR(0x649abc);
if(r1(R+518)){{goto L649bd3;}}
}
B649ac2:L649ac2:{c.instructions+=2;NFSU2_TR(0x649ac2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B649ac3:{NFSU2_TR(0x649ac3);
if(r1(R+518)){{goto L649bcc;}}
}
B649ac9:L649ac9:{c.instructions+=2;NFSU2_TR(0x649ac9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B649aca:{NFSU2_TR(0x649aca);
if(r1(R+518)){{goto L649bcc;}}
}
B649ad0:L649ad0:{c.instructions+=2;NFSU2_TR(0x649ad0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B649ad1:{NFSU2_TR(0x649ad1);
if(r1(R+518)){{goto L649bc5;}}
}
B649ad7:L649ad7:{c.instructions+=2;NFSU2_TR(0x649ad7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B649ad8:{NFSU2_TR(0x649ad8);
if(r1(R+518)){{goto L649af4;}}
}
B649ada:L649ada:{c.instructions+=2;NFSU2_TR(0x649ada);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B649adb:{NFSU2_TR(0x649adb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649bf3;}}
}
B649ae1:L649ae1:{c.instructions+=6;NFSU2_TR(0x649ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649ae4:{NFSU2_TR(0x649ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649ae6:{NFSU2_TR(0x649ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649ae9:{NFSU2_TR(0x649ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649aec:{NFSU2_TR(0x649aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649aef:{NFSU2_TR(0x649aef);
{goto L649b77;}
}
B649af4:L649af4:{c.instructions+=3;NFSU2_TR(0x649af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649af7:{NFSU2_TR(0x649af7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649af9:{NFSU2_TR(0x649af9);
if(r1(R+518)){{goto L649be0;}}
}
B649aff:L649aff:{c.instructions+=2;NFSU2_TR(0x649aff);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649b03:{NFSU2_TR(0x649b03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649be0;}}
}
B649b09:L649b09:{c.instructions+=2;NFSU2_TR(0x649b09);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1bull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649b0d:{NFSU2_TR(0x649b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649be0;}}
}
B649b13:L649b13:{c.instructions+=3;NFSU2_TR(0x649b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649b16:{NFSU2_TR(0x649b16);
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
B649b18:{NFSU2_TR(0x649b18);
if(r1(R+518)){{goto L649b23;}}
}
B649b1a:L649b1a:{c.instructions+=3;NFSU2_TR(0x649b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649b1c:{NFSU2_TR(0x649b1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b1d:{NFSU2_TR(0x649b1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649b20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B649b20:L649b20:{c.instructions+=1;NFSU2_TR(0x649b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649b23:L649b23:{c.instructions+=12;NFSU2_TR(0x649b23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b24:{NFSU2_TR(0x649b24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649b27:{NFSU2_TR(0x649b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b28:{NFSU2_TR(0x649b28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649b2b:{NFSU2_TR(0x649b2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649b31:{NFSU2_TR(0x649b31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b32:{NFSU2_TR(0x649b32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b33:{NFSU2_TR(0x649b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649b36:{NFSU2_TR(0x649b36);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649b3c:{NFSU2_TR(0x649b3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649b3f:{NFSU2_TR(0x649b3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b40:{NFSU2_TR(0x649b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649b45ull));
TAIL_STATIC(0x684adbu,684);
}
B649b45:L649b45:{c.instructions+=3;NFSU2_TR(0x649b45);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B649b47:{NFSU2_TR(0x649b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649b4a:{NFSU2_TR(0x649b4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649c38;}}
}
B649b50:L649b50:{c.instructions+=3;NFSU2_TR(0x649b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649b53:{NFSU2_TR(0x649b53);
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
B649b55:{NFSU2_TR(0x649b55);
if(r1(R+518)){{goto L649b6d;}}
}
B649b57:L649b57:{c.instructions+=3;NFSU2_TR(0x649b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649b59:{NFSU2_TR(0x649b59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b5a:{NFSU2_TR(0x649b5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649b5dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B649b5d:L649b5d:{c.instructions+=5;NFSU2_TR(0x649b5d);
__builtin_memmove((R+28),(R+0),4);
}
B649b5f:{NFSU2_TR(0x649b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649b62:{NFSU2_TR(0x649b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649b64:{NFSU2_TR(0x649b64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b65:{NFSU2_TR(0x649b65);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649b68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B649b68:L649b68:{c.instructions+=2;NFSU2_TR(0x649b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649b6b:{NFSU2_TR(0x649b6b);
{goto L649b72;}
}
B649b6d:L649b6d:{c.instructions+=2;NFSU2_TR(0x649b6d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B649b6f:{NFSU2_TR(0x649b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649b72:L649b72:{c.instructions+=2;NFSU2_TR(0x649b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B649b74:{NFSU2_TR(0x649b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649b77:L649b77:{c.instructions+=6;NFSU2_TR(0x649b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649b7a:{NFSU2_TR(0x649b7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b7b:{NFSU2_TR(0x649b7b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b7d:{NFSU2_TR(0x649b7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B649b80:{NFSU2_TR(0x649b80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b81:{NFSU2_TR(0x649b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649b86ull));
TAIL_STATIC(0x647827u,647);
}
B649b86:L649b86:{c.instructions+=3;NFSU2_TR(0x649b86);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B649b88:{NFSU2_TR(0x649b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649b8b:{NFSU2_TR(0x649b8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649c13;}}
}
B649b91:L649b91:{c.instructions+=6;NFSU2_TR(0x649b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649b94:{NFSU2_TR(0x649b94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b95:{NFSU2_TR(0x649b95);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b97:{NFSU2_TR(0x649b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649b9a:{NFSU2_TR(0x649b9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649b9b:{NFSU2_TR(0x649b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649ba0ull));
TAIL_STATIC(0x647827u,647);
}
B649ba0:L649ba0:{c.instructions+=3;NFSU2_TR(0x649ba0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B649ba2:{NFSU2_TR(0x649ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649ba5:{NFSU2_TR(0x649ba5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649c13;}}
}
B649ba7:L649ba7:{c.instructions+=5;NFSU2_TR(0x649ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649baa:{NFSU2_TR(0x649baa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649bab:{NFSU2_TR(0x649bab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649bae:{NFSU2_TR(0x649bae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649baf:{NFSU2_TR(0x649baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649bb4ull));
TAIL_STATIC(0x647827u,647);
}
B649bb4:L649bb4:{c.instructions+=3;NFSU2_TR(0x649bb4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B649bb6:{NFSU2_TR(0x649bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649bb9:{NFSU2_TR(0x649bb9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L649c13;}}
}
B649bbb:L649bbb:{c.instructions+=4;NFSU2_TR(0x649bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649bbe:{NFSU2_TR(0x649bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B649bc0:{NFSU2_TR(0x649bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B649bc3:{NFSU2_TR(0x649bc3);
{goto L649bdd;}
}
B649bc5:L649bc5:{c.instructions+=3;NFSU2_TR(0x649bc5);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B649bc8:{NFSU2_TR(0x649bc8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B649bca:{NFSU2_TR(0x649bca);
{goto L649bdd;}
}
B649bcc:L649bcc:{c.instructions+=3;NFSU2_TR(0x649bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649bcf:{NFSU2_TR(0x649bcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B649bd1:{NFSU2_TR(0x649bd1);
{goto L649bdd;}
}
B649bd3:L649bd3:{c.instructions+=4;NFSU2_TR(0x649bd3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B649bd5:{NFSU2_TR(0x649bd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649bd8:{NFSU2_TR(0x649bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B649bdb:{NFSU2_TR(0x649bdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B649bdd:L649bdd:{c.instructions+=1;NFSU2_TR(0x649bdd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B649be0:L649be0:{c.instructions+=5;NFSU2_TR(0x649be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649be3:{NFSU2_TR(0x649be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649be6:{NFSU2_TR(0x649be6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649be8:{NFSU2_TR(0x649be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649beb:{NFSU2_TR(0x649beb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649a95u);}goto L649a95;}}
}
B649bf1:L649bf1:{c.instructions+=1;NFSU2_TR(0x649bf1);
{goto L649c13;}
}
B649bf3:L649bf3:{c.instructions+=8;NFSU2_TR(0x649bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649bf6:{NFSU2_TR(0x649bf6);
u8 U[4];
w4(U+0,u32(0x7af3a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649bfb:{NFSU2_TR(0x649bfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649bfc:{NFSU2_TR(0x649bfc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B649bff:{NFSU2_TR(0x649bff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c00:{NFSU2_TR(0x649c00);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B649c03:{NFSU2_TR(0x649c03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c04:{NFSU2_TR(0x649c04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649c09ull));
TAIL_STATIC(0x64307cu,643);
}
B649c09:L649c09:{c.instructions+=1;NFSU2_TR(0x649c09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B649c0c:L649c0c:{c.instructions+=1;NFSU2_TR(0x649c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B649c13:L649c13:{c.instructions+=3;NFSU2_TR(0x649c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649c16:{NFSU2_TR(0x649c16);
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
B649c18:{NFSU2_TR(0x649c18);
if(r1(R+518)){{goto L649c23;}}
}
B649c1a:L649c1a:{c.instructions+=3;NFSU2_TR(0x649c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649c1c:{NFSU2_TR(0x649c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c1d:{NFSU2_TR(0x649c1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649c20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B649c20:L649c20:{c.instructions+=1;NFSU2_TR(0x649c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649c23:L649c23:{c.instructions+=2;NFSU2_TR(0x649c23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649c29:{NFSU2_TR(0x649c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649c2eull));
TAIL_STATIC(0x675379u,675);
}
B649c2e:L649c2e:{c.instructions+=6;NFSU2_TR(0x649c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649c31:{NFSU2_TR(0x649c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B649c32:{NFSU2_TR(0x649c32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B649c33:{NFSU2_TR(0x649c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B649c34:{NFSU2_TR(0x649c34);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B649c35:{NFSU2_TR(0x649c35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B649c38:L649c38:{c.instructions+=8;NFSU2_TR(0x649c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649c3b:{NFSU2_TR(0x649c3b);
u8 U[4];
w4(U+0,u32(0x7af350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c40:{NFSU2_TR(0x649c40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c41:{NFSU2_TR(0x649c41);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B649c44:{NFSU2_TR(0x649c44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c45:{NFSU2_TR(0x649c45);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B649c48:{NFSU2_TR(0x649c48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c49:{NFSU2_TR(0x649c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649c4eull));
TAIL_STATIC(0x64307cu,643);
}
B649c4e:L649c4e:{c.instructions+=2;NFSU2_TR(0x649c4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B649c51:{NFSU2_TR(0x649c51);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649c13u);}goto L649c13;}
}
B649c53:L649c53:{c.instructions+=12;NFSU2_TR(0x649c53);
__builtin_memmove((R+28),(R+28),4);
}
B649c55:{NFSU2_TR(0x649c55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c56:{NFSU2_TR(0x649c56);
__builtin_memmove((R+20),(R+16),4);
}
B649c58:{NFSU2_TR(0x649c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B649c5e:{NFSU2_TR(0x649c5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c5f:{NFSU2_TR(0x649c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B649c62:{NFSU2_TR(0x649c62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c63:{NFSU2_TR(0x649c63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c64:{NFSU2_TR(0x649c64);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649c67:{NFSU2_TR(0x649c67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c68:{NFSU2_TR(0x649c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B649c6b:{NFSU2_TR(0x649c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649c70ull));
TAIL_STATIC(0x647643u,647);
}
B649c70:L649c70:{c.instructions+=9;NFSU2_TR(0x649c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649c73:{NFSU2_TR(0x649c73);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B649c75:{NFSU2_TR(0x649c75);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649c77:{NFSU2_TR(0x649c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649c7a:{NFSU2_TR(0x649c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649c7d:{NFSU2_TR(0x649c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649c80:{NFSU2_TR(0x649c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649c83:{NFSU2_TR(0x649c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649c86:{NFSU2_TR(0x649c86);
if(r1(R+518)){{goto L649c8a;}}
}
B649c88:L649c88:{c.instructions+=1;NFSU2_TR(0x649c88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B649c8a:L649c8a:{c.instructions+=2;NFSU2_TR(0x649c8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x324ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649c90:{NFSU2_TR(0x649c90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649cb2;}}
}
B649c92:L649c92:{c.instructions+=7;NFSU2_TR(0x649c92);
u8 U[4];
w4(U+0,u32(0x7af5bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c97:{NFSU2_TR(0x649c97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c98:{NFSU2_TR(0x649c98);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B649c9b:{NFSU2_TR(0x649c9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c9c:{NFSU2_TR(0x649c9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649c9d:{NFSU2_TR(0x649c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649ca0:{NFSU2_TR(0x649ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649ca5ull));
TAIL_STATIC(0x64307cu,643);
}
B649ca5:L649ca5:{c.instructions+=3;NFSU2_TR(0x649ca5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B649ca8:{NFSU2_TR(0x649ca8);
w4(R+28,u32(0x80004005ull));
}
B649cad:{NFSU2_TR(0x649cad);
TAIL_STATIC(0x64a2bfu,64a);
}
B649cb2:L649cb2:{c.instructions+=3;NFSU2_TR(0x649cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649cb5:{NFSU2_TR(0x649cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649cb8:{NFSU2_TR(0x649cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649cbdull));
TAIL_STATIC(0x642a34u,642);
}
B649cbd:L649cbd:{c.instructions+=3;NFSU2_TR(0x649cbd);
__builtin_memmove((R+28),(R+0),4);
}
B649cbf:{NFSU2_TR(0x649cbf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B649cc1:{NFSU2_TR(0x649cc1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a2bfu,64a);}
}
B649cc7:L649cc7:{c.instructions+=2;NFSU2_TR(0x649cc7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649cc9:{NFSU2_TR(0x649cc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649cceull));
TAIL_STATIC(0x575620u,575);
}
B649cce:L649cce:{c.instructions+=4;NFSU2_TR(0x649cce);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B649cd0:{NFSU2_TR(0x649cd0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649cd2:{NFSU2_TR(0x649cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649cd3:{NFSU2_TR(0x649cd3);
if(r1(R+518)){{goto L649ce1;}}
}
B649cd5:L649cd5:{c.instructions+=2;NFSU2_TR(0x649cd5);
__builtin_memmove((R+4),(R+0),4);
}
B649cd7:{NFSU2_TR(0x649cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649cdcull));
TAIL_STATIC(0x6477abu,647);
}
B649cdc:L649cdc:{c.instructions+=2;NFSU2_TR(0x649cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649cdf:{NFSU2_TR(0x649cdf);
{goto L649ce4;}
}
B649ce1:L649ce1:{c.instructions+=1;NFSU2_TR(0x649ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649ce4:L649ce4:{c.instructions+=2;NFSU2_TR(0x649ce4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649ce7:{NFSU2_TR(0x649ce7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649cf3;}}
}
B649ce9:L649ce9:{c.instructions+=2;NFSU2_TR(0x649ce9);
w4(R+28,u32(0x8007000eull));
}
B649cee:{NFSU2_TR(0x649cee);
TAIL_STATIC(0x64a2bfu,64a);
}
B649cf3:L649cf3:{c.instructions+=4;NFSU2_TR(0x649cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649cf9:{NFSU2_TR(0x649cf9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649cfb:{NFSU2_TR(0x649cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649cfe:{NFSU2_TR(0x649cfe);
if(r1(R+518)){{goto L649d53;}}
}
B649d00:L649d00:{c.instructions+=7;NFSU2_TR(0x649d00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d03:{NFSU2_TR(0x649d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B649d06:{NFSU2_TR(0x649d06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649d07:{NFSU2_TR(0x649d07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d0a:{NFSU2_TR(0x649d0a);
__builtin_memmove((R+4),(R+12),4);
}
B649d0c:{NFSU2_TR(0x649d0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649d0d:{NFSU2_TR(0x649d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649d12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6499e3u);}goto L6499e3;}
}
B649d12:L649d12:{c.instructions+=3;NFSU2_TR(0x649d12);
__builtin_memmove((R+28),(R+0),4);
}
B649d14:{NFSU2_TR(0x649d14);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649d16:{NFSU2_TR(0x649d16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a2bfu,64a);}
}
B649d1c:L649d1c:{c.instructions+=2;NFSU2_TR(0x649d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649d1f:{NFSU2_TR(0x649d1f);
{goto L649d45;}
}
B649d21:L649d21:{c.instructions+=7;NFSU2_TR(0x649d21);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d24:{NFSU2_TR(0x649d24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B649d27:{NFSU2_TR(0x649d27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649d28:{NFSU2_TR(0x649d28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d2b:{NFSU2_TR(0x649d2b);
__builtin_memmove((R+4),(R+12),4);
}
B649d2d:{NFSU2_TR(0x649d2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d30:{NFSU2_TR(0x649d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649d35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6499e3u);}goto L6499e3;}
}
B649d35:L649d35:{c.instructions+=3;NFSU2_TR(0x649d35);
__builtin_memmove((R+28),(R+0),4);
}
B649d37:{NFSU2_TR(0x649d37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649d39:{NFSU2_TR(0x649d39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a2bfu,64a);}
}
B649d3f:L649d3f:{c.instructions+=2;NFSU2_TR(0x649d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649d42:{NFSU2_TR(0x649d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649d45:L649d45:{c.instructions+=3;NFSU2_TR(0x649d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649d47:{NFSU2_TR(0x649d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649d4a:{NFSU2_TR(0x649d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649d21u);}goto L649d21;}}
}
B649d4c:L649d4c:{c.instructions+=3;NFSU2_TR(0x649d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649d4f:{NFSU2_TR(0x649d4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649d51:{NFSU2_TR(0x649d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649d00u);}goto L649d00;}}
}
B649d53:L649d53:{c.instructions+=2;NFSU2_TR(0x649d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649d59:{NFSU2_TR(0x649d59);
{goto L649dc9;}
}
B649d5b:L649d5b:{c.instructions+=3;NFSU2_TR(0x649d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649d5e:{NFSU2_TR(0x649d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649d61:{NFSU2_TR(0x649d61);
{goto L649d82;}
}
B649d63:L649d63:{c.instructions+=7;NFSU2_TR(0x649d63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d66:{NFSU2_TR(0x649d66);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B649d69:{NFSU2_TR(0x649d69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649d6a:{NFSU2_TR(0x649d6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d6d:{NFSU2_TR(0x649d6d);
__builtin_memmove((R+4),(R+12),4);
}
B649d6f:{NFSU2_TR(0x649d6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649d70:{NFSU2_TR(0x649d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649d75ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6499e3u);}goto L6499e3;}
}
B649d75:L649d75:{c.instructions+=3;NFSU2_TR(0x649d75);
__builtin_memmove((R+28),(R+0),4);
}
B649d77:{NFSU2_TR(0x649d77);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649d79:{NFSU2_TR(0x649d79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a2bfu,64a);}
}
B649d7f:L649d7f:{c.instructions+=1;NFSU2_TR(0x649d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649d82:L649d82:{c.instructions+=2;NFSU2_TR(0x649d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649d84:{NFSU2_TR(0x649d84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649d63u);}goto L649d63;}}
}
B649d86:L649d86:{c.instructions+=2;NFSU2_TR(0x649d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649d89:{NFSU2_TR(0x649d89);
{goto L649db9;}
}
B649d8b:L649d8b:{c.instructions+=3;NFSU2_TR(0x649d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649d8e:{NFSU2_TR(0x649d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649d91:{NFSU2_TR(0x649d91);
{goto L649db2;}
}
B649d93:L649d93:{c.instructions+=7;NFSU2_TR(0x649d93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d96:{NFSU2_TR(0x649d96);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B649d99:{NFSU2_TR(0x649d99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649d9a:{NFSU2_TR(0x649d9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649d9d:{NFSU2_TR(0x649d9d);
__builtin_memmove((R+4),(R+12),4);
}
B649d9f:{NFSU2_TR(0x649d9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649da0:{NFSU2_TR(0x649da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649da5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6499e3u);}goto L6499e3;}
}
B649da5:L649da5:{c.instructions+=3;NFSU2_TR(0x649da5);
__builtin_memmove((R+28),(R+0),4);
}
B649da7:{NFSU2_TR(0x649da7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649da9:{NFSU2_TR(0x649da9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a2bfu,64a);}
}
B649daf:L649daf:{c.instructions+=1;NFSU2_TR(0x649daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649db2:L649db2:{c.instructions+=2;NFSU2_TR(0x649db2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649db4:{NFSU2_TR(0x649db4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649d93u);}goto L649d93;}}
}
B649db6:L649db6:{c.instructions+=1;NFSU2_TR(0x649db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649db9:L649db9:{c.instructions+=4;NFSU2_TR(0x649db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649dbc:{NFSU2_TR(0x649dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649dbe:{NFSU2_TR(0x649dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649dc1:{NFSU2_TR(0x649dc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649d8bu);}goto L649d8b;}}
}
B649dc3:L649dc3:{c.instructions+=2;NFSU2_TR(0x649dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649dc6:{NFSU2_TR(0x649dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649dc9:L649dc9:{c.instructions+=3;NFSU2_TR(0x649dc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649dcb:{NFSU2_TR(0x649dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649dce:{NFSU2_TR(0x649dce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649d5bu);}goto L649d5b;}}
}
B649dd0:L649dd0:{c.instructions+=5;NFSU2_TR(0x649dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B649dd3:{NFSU2_TR(0x649dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x354ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649dd9:{NFSU2_TR(0x649dd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649ddb:{NFSU2_TR(0x649ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649dde:{NFSU2_TR(0x649dde);
if(r1(R+518)){TAIL_STATIC(0x64a19bu,64a);}
}
B649de4:L649de4:{c.instructions+=2;NFSU2_TR(0x649de4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649dea:{NFSU2_TR(0x649dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649defull));
TAIL_STATIC(0x673974u,673);
}
B649def:L649def:{c.instructions+=5;NFSU2_TR(0x649def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649df2:{NFSU2_TR(0x649df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B649df5:{NFSU2_TR(0x649df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649df8:{NFSU2_TR(0x649df8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649dfb:{NFSU2_TR(0x649dfb);
if(r1(R+518)){{goto L649e02;}}
}
B649dfd:L649dfd:{c.instructions+=2;NFSU2_TR(0x649dfd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649e00:{NFSU2_TR(0x649e00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649e1b;}}
}
B649e02:L649e02:{c.instructions+=5;NFSU2_TR(0x649e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B649e04:{NFSU2_TR(0x649e04);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B649e07:{NFSU2_TR(0x649e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649e0d:{NFSU2_TR(0x649e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649e12:{NFSU2_TR(0x649e12);
if(r1(R+518)){{goto L649e76;}}
}
B649e14:L649e14:{c.instructions+=2;NFSU2_TR(0x649e14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B649e19:{NFSU2_TR(0x649e19);
if(r1(R+518)){{goto L649e76;}}
}
B649e1b:L649e1b:{c.instructions+=12;NFSU2_TR(0x649e1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649e1e:{NFSU2_TR(0x649e1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649e1f:{NFSU2_TR(0x649e1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649e22:{NFSU2_TR(0x649e22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649e23:{NFSU2_TR(0x649e23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649e26:{NFSU2_TR(0x649e26);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649e29:{NFSU2_TR(0x649e29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649e2b:{NFSU2_TR(0x649e2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649e2c:{NFSU2_TR(0x649e2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649e32:{NFSU2_TR(0x649e32);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649e38:{NFSU2_TR(0x649e38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649e39:{NFSU2_TR(0x649e39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649e3eull));
TAIL_STATIC(0x684adbu,684);
}
B649e3e:L649e3e:{c.instructions+=3;NFSU2_TR(0x649e3e);
__builtin_memmove((R+28),(R+0),4);
}
B649e40:{NFSU2_TR(0x649e40);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649e42:{NFSU2_TR(0x649e42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a35bu,64a);}
}
B649e48:L649e48:{c.instructions+=7;NFSU2_TR(0x649e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649e4b:{NFSU2_TR(0x649e4b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B649e4d:{NFSU2_TR(0x649e4d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649e50:{NFSU2_TR(0x649e50);
__builtin_memmove((R+4),(R+518),1);
}
B649e53:{NFSU2_TR(0x649e53);
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
B649e56:{NFSU2_TR(0x649e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649e59:{NFSU2_TR(0x649e59);
if(r1(R+518)){TAIL_STATIC(0x64a09du,64a);}
}
B649e5f:L649e5f:{c.instructions+=2;NFSU2_TR(0x649e5f);
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
B649e61:{NFSU2_TR(0x649e61);
if(r1(R+518)){TAIL_STATIC(0x64a09du,64a);}
}
B649e67:L649e67:{c.instructions+=3;NFSU2_TR(0x649e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649e69:{NFSU2_TR(0x649e69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649e6a:{NFSU2_TR(0x649e6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649e6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B649e6d:L649e6d:{c.instructions+=2;NFSU2_TR(0x649e6d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B649e71:{NFSU2_TR(0x649e71);
TAIL_STATIC(0x64a09du,64a);
}
B649e76:L649e76:{c.instructions+=4;NFSU2_TR(0x649e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649e79:{NFSU2_TR(0x649e79);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649e7b:{NFSU2_TR(0x649e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B649e7c:{NFSU2_TR(0x649e7c);
{goto L649e87;}
}
B649e7e:L649e7e:{c.instructions+=2;NFSU2_TR(0x649e7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649e82:{NFSU2_TR(0x649e82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649e8c;}}
}
B649e84:L649e84:{c.instructions+=1;NFSU2_TR(0x649e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649e87:L649e87:{c.instructions+=2;NFSU2_TR(0x649e87);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649e8a:{NFSU2_TR(0x649e8a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649e7eu);}goto L649e7e;}}
}
B649e8c:L649e8c:{c.instructions+=2;NFSU2_TR(0x649e8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649e90:{NFSU2_TR(0x649e90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64a340u,64a);}
}
B649e96:L649e96:{c.instructions+=4;NFSU2_TR(0x649e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649e99:{NFSU2_TR(0x649e99);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649e9d:{NFSU2_TR(0x649e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649ea0:{NFSU2_TR(0x649ea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64a34du,64a);}
}
B649ea6:L649ea6:{c.instructions+=3;NFSU2_TR(0x649ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649ea9:{NFSU2_TR(0x649ea9);
__builtin_memmove((R+0),(R+4),4);
}
B649eab:{NFSU2_TR(0x649eab);
{goto L649eb6;}
}
B649ead:L649ead:{c.instructions+=2;NFSU2_TR(0x649ead);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649eb1:{NFSU2_TR(0x649eb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649ebb;}}
}
B649eb3:L649eb3:{c.instructions+=1;NFSU2_TR(0x649eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649eb6:L649eb6:{c.instructions+=2;NFSU2_TR(0x649eb6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649eb9:{NFSU2_TR(0x649eb9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649eadu);}goto L649ead;}}
}
B649ebb:L649ebb:{c.instructions+=2;NFSU2_TR(0x649ebb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649ebf:{NFSU2_TR(0x649ebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L649f69;}}
}
B649ec5:L649ec5:{c.instructions+=3;NFSU2_TR(0x649ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B649ec8:{NFSU2_TR(0x649ec8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B649ecb:{NFSU2_TR(0x649ecb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a354u,64a);}
}
B649ed1:L649ed1:{c.instructions+=2;NFSU2_TR(0x649ed1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649ed4:{NFSU2_TR(0x649ed4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L649eef;}}
}
B649ed6:L649ed6:{c.instructions+=2;NFSU2_TR(0x649ed6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B649ed9:{NFSU2_TR(0x649ed9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x64a354u,64a);}
}
B649edf:L649edf:{c.instructions+=3;NFSU2_TR(0x649edf);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B649ee2:{NFSU2_TR(0x649ee2);
{u32 ea_=u32(u32(7920184u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B649ee8:{NFSU2_TR(0x649ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649eedull));
TAIL_STATIC(0x75dd28u,75d);
}
B649eed:L649eed:{c.instructions+=1;NFSU2_TR(0x649eed);
{goto L649ef2;}
}
B649eef:L649eef:{c.instructions+=1;NFSU2_TR(0x649eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649ef2:L649ef2:{c.instructions+=5;NFSU2_TR(0x649ef2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649ef3:{NFSU2_TR(0x649ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B649ef6:{NFSU2_TR(0x649ef6);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649efb:{NFSU2_TR(0x649efb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649efc:{NFSU2_TR(0x649efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649f01ull));
TAIL_STATIC(0x75c784u,75c);
}
B649f01:L649f01:{c.instructions+=3;NFSU2_TR(0x649f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649f04:{NFSU2_TR(0x649f04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B649f07:{NFSU2_TR(0x649f07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B649f0a:L649f0a:{c.instructions+=4;NFSU2_TR(0x649f0a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B649f0c:{NFSU2_TR(0x649f0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B649f0d:{NFSU2_TR(0x649f0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B649f0f:{NFSU2_TR(0x649f0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649f0au);}goto L649f0a;}}
}
B649f11:L649f11:{c.instructions+=4;NFSU2_TR(0x649f11);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B649f13:{NFSU2_TR(0x649f13);
__builtin_memmove((R+24),(R+0),4);
}
B649f15:{NFSU2_TR(0x649f15);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B649f18:{NFSU2_TR(0x649f18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B649f1b:L649f1b:{c.instructions+=4;NFSU2_TR(0x649f1b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B649f1d:{NFSU2_TR(0x649f1d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B649f1e:{NFSU2_TR(0x649f1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B649f20:{NFSU2_TR(0x649f20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649f1bu);}goto L649f1b;}}
}
B649f22:L649f22:{c.instructions+=6;NFSU2_TR(0x649f22);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B649f24:{NFSU2_TR(0x649f24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649f27:{NFSU2_TR(0x649f27);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B649f2b:{NFSU2_TR(0x649f2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f2c:{NFSU2_TR(0x649f2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f2d:{NFSU2_TR(0x649f2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649f32ull));
TAIL_STATIC(0x670f08u,670);
}
B649f32:L649f32:{c.instructions+=3;NFSU2_TR(0x649f32);
__builtin_memmove((R+28),(R+0),4);
}
B649f34:{NFSU2_TR(0x649f34);
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
B649f36:{NFSU2_TR(0x649f36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a371u,64a);}
}
B649f3c:L649f3c:{c.instructions+=9;NFSU2_TR(0x649f3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B649f3f:{NFSU2_TR(0x649f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f40:{NFSU2_TR(0x649f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649f43:{NFSU2_TR(0x649f43);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649f46:{NFSU2_TR(0x649f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649f49:{NFSU2_TR(0x649f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649f4b:{NFSU2_TR(0x649f4b);
u8 U[4];
w4(U+0,u32(0x7af5b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f50:{NFSU2_TR(0x649f50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f51:{NFSU2_TR(0x649f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649f54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B649f54:L649f54:{c.instructions+=2;NFSU2_TR(0x649f54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f55:{NFSU2_TR(0x649f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649f5aull));
TAIL_STATIC(0x75c784u,75c);
}
B649f5a:L649f5a:{c.instructions+=3;NFSU2_TR(0x649f5a);
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
B649f5d:{NFSU2_TR(0x649f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B649f64:{NFSU2_TR(0x649f64);
TAIL_STATIC(0x64a09du,64a);
}
B649f69:L649f69:{c.instructions+=2;NFSU2_TR(0x649f69);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B649f6c:{NFSU2_TR(0x649f6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64a381u,64a);}
}
B649f72:L649f72:{c.instructions+=12;NFSU2_TR(0x649f72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649f75:{NFSU2_TR(0x649f75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f76:{NFSU2_TR(0x649f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649f79:{NFSU2_TR(0x649f79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f7a:{NFSU2_TR(0x649f7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649f7d:{NFSU2_TR(0x649f7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649f80:{NFSU2_TR(0x649f80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f82:{NFSU2_TR(0x649f82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f83:{NFSU2_TR(0x649f83);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B649f89:{NFSU2_TR(0x649f89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B649f8f:{NFSU2_TR(0x649f8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649f90:{NFSU2_TR(0x649f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649f95ull));
TAIL_STATIC(0x684adbu,684);
}
B649f95:L649f95:{c.instructions+=3;NFSU2_TR(0x649f95);
__builtin_memmove((R+28),(R+0),4);
}
B649f97:{NFSU2_TR(0x649f97);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B649f99:{NFSU2_TR(0x649f99);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a35bu,64a);}
}
B649f9f:L649f9f:{c.instructions+=4;NFSU2_TR(0x649f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649fa2:{NFSU2_TR(0x649fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B649fa5:{NFSU2_TR(0x649fa5);
__builtin_memmove((R+4),(R+28),4);
}
B649fa7:{NFSU2_TR(0x649fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B649faa:L649faa:{c.instructions+=4;NFSU2_TR(0x649faa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B649fac:{NFSU2_TR(0x649fac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B649fad:{NFSU2_TR(0x649fad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B649faf:{NFSU2_TR(0x649faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649faau);}goto L649faa;}}
}
B649fb1:L649fb1:{c.instructions+=4;NFSU2_TR(0x649fb1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B649fb3:{NFSU2_TR(0x649fb3);
__builtin_memmove((R+0),(R+28),4);
}
B649fb5:{NFSU2_TR(0x649fb5);
__builtin_memmove((R+24),(R+4),4);
}
B649fb7:{NFSU2_TR(0x649fb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B649fba:L649fba:{c.instructions+=4;NFSU2_TR(0x649fba);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B649fbc:{NFSU2_TR(0x649fbc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B649fbd:{NFSU2_TR(0x649fbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B649fbf:{NFSU2_TR(0x649fbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x649fbau);}goto L649fba;}}
}
B649fc1:L649fc1:{c.instructions+=16;NFSU2_TR(0x649fc1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B649fc3:{NFSU2_TR(0x649fc3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B649fc4:{NFSU2_TR(0x649fc4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B649fc7:{NFSU2_TR(0x649fc7);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B649fc9:{NFSU2_TR(0x649fc9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B649fcb:{NFSU2_TR(0x649fcb);
w4(R+0,u32(0-u32(r4(R+0))));
}
B649fcd:{NFSU2_TR(0x649fcd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B649fce:{NFSU2_TR(0x649fce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B649fd1:{NFSU2_TR(0x649fd1);
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
B649fd3:{NFSU2_TR(0x649fd3);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B649fd6:{NFSU2_TR(0x649fd6);
__builtin_memmove((R+24),(R+0),4);
}
B649fd8:{NFSU2_TR(0x649fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649fdb:{NFSU2_TR(0x649fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B649fdd:{NFSU2_TR(0x649fdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649fde:{NFSU2_TR(0x649fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B649fe1:{NFSU2_TR(0x649fe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649fe4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B649fe4:L649fe4:{c.instructions+=5;NFSU2_TR(0x649fe4);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B649fe8:{NFSU2_TR(0x649fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B649feb:{NFSU2_TR(0x649feb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649fec:{NFSU2_TR(0x649fec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B649fed:{NFSU2_TR(0x649fed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x649ff2ull));
TAIL_STATIC(0x670f08u,670);
}
B649ff2:L649ff2:{c.instructions+=3;NFSU2_TR(0x649ff2);
__builtin_memmove((R+28),(R+0),4);
}
B649ff4:{NFSU2_TR(0x649ff4);
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
B649ff6:{NFSU2_TR(0x649ff6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64a371u,64a);}
}
B649ffc:L649ffc:{c.instructions+=2;NFSU2_TR(0x649ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B649fff:{NFSU2_TR(0x649fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x64a001u,64a);
}
XIT:NFSU2_TR_EXIT(0x649,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
