#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x578,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x578,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_578(u8* __restrict R,Cpu& c);
u32 page_578(Cpu& c){return body_578(c.regs.data(),c);}
__attribute__((noinline)) u32 body_578(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x578001:goto L578001;
case 0x578005:c.instructions+=5;goto B578005;
case 0x578007:c.instructions+=4;goto B578007;
case 0x578008:c.instructions+=3;goto B578008;
case 0x57800f:c.instructions+=2;goto B57800f;
case 0x578012:c.instructions+=1;goto B578012;
case 0x578017:goto L578017;
case 0x578019:c.instructions+=1;goto B578019;
case 0x57801e:goto L57801e;
case 0x578022:c.instructions+=8;goto B578022;
case 0x578026:c.instructions+=7;goto B578026;
case 0x578027:c.instructions+=6;goto B578027;
case 0x57802d:c.instructions+=5;goto B57802d;
case 0x57802e:c.instructions+=4;goto B57802e;
case 0x57802f:c.instructions+=3;goto B57802f;
case 0x578030:c.instructions+=2;goto B578030;
case 0x578031:c.instructions+=1;goto B578031;
case 0x578036:goto L578036;
case 0x57803a:c.instructions+=7;goto B57803a;
case 0x57803e:c.instructions+=6;goto B57803e;
case 0x578040:c.instructions+=5;goto B578040;
case 0x578041:c.instructions+=4;goto B578041;
case 0x578042:c.instructions+=3;goto B578042;
case 0x578044:c.instructions+=2;goto B578044;
case 0x578045:c.instructions+=1;goto B578045;
case 0x57804a:goto L57804a;
case 0x57804d:c.instructions+=6;goto B57804d;
case 0x57804e:c.instructions+=5;goto B57804e;
case 0x57804f:c.instructions+=4;goto B57804f;
case 0x578050:c.instructions+=3;goto B578050;
case 0x578051:c.instructions+=2;goto B578051;
case 0x578054:c.instructions+=1;goto B578054;
case 0x578060:goto L578060;
case 0x578063:c.instructions+=4;goto B578063;
case 0x578068:c.instructions+=3;goto B578068;
case 0x57806a:c.instructions+=2;goto B57806a;
case 0x57806e:c.instructions+=1;goto B57806e;
case 0x578070:goto L578070;
case 0x578077:c.instructions+=2;goto B578077;
case 0x57807b:c.instructions+=1;goto B57807b;
case 0x57807d:goto L57807d;
case 0x578085:goto L578085;
case 0x578086:c.instructions+=3;goto B578086;
case 0x578087:c.instructions+=2;goto B578087;
case 0x57808f:c.instructions+=1;goto B57808f;
case 0x578090:goto L578090;
case 0x578094:c.instructions+=4;goto B578094;
case 0x578099:c.instructions+=3;goto B578099;
case 0x57809c:c.instructions+=2;goto B57809c;
case 0x57809d:c.instructions+=1;goto B57809d;
case 0x5780a2:goto L5780a2;
case 0x5780a3:c.instructions+=1;goto B5780a3;
case 0x5780a8:goto L5780a8;
case 0x5780ac:c.instructions+=6;goto B5780ac;
case 0x5780af:c.instructions+=5;goto B5780af;
case 0x5780b0:c.instructions+=4;goto B5780b0;
case 0x5780b1:c.instructions+=3;goto B5780b1;
case 0x5780b6:c.instructions+=2;goto B5780b6;
case 0x5780b8:c.instructions+=1;goto B5780b8;
case 0x5780bd:goto L5780bd;
case 0x5780bf:c.instructions+=6;goto B5780bf;
case 0x5780c1:c.instructions+=5;goto B5780c1;
case 0x5780c2:c.instructions+=4;goto B5780c2;
case 0x5780c7:c.instructions+=3;goto B5780c7;
case 0x5780c9:c.instructions+=2;goto B5780c9;
case 0x5780ca:c.instructions+=1;goto B5780ca;
case 0x5780cf:goto L5780cf;
case 0x5780d1:c.instructions+=1;goto B5780d1;
case 0x5780d3:goto L5780d3;
case 0x5780d6:goto L5780d6;
case 0x5780da:c.instructions+=4;goto B5780da;
case 0x5780db:c.instructions+=3;goto B5780db;
case 0x5780de:c.instructions+=2;goto B5780de;
case 0x5780e2:c.instructions+=1;goto B5780e2;
case 0x5780e4:goto L5780e4;
case 0x5780e9:c.instructions+=1;goto B5780e9;
case 0x5780ee:goto L5780ee;
case 0x5780f2:c.instructions+=5;goto B5780f2;
case 0x5780f3:c.instructions+=4;goto B5780f3;
case 0x5780f7:c.instructions+=3;goto B5780f7;
case 0x5780fc:c.instructions+=2;goto B5780fc;
case 0x5780fd:c.instructions+=1;goto B5780fd;
case 0x578102:goto L578102;
case 0x578106:c.instructions+=2;goto B578106;
case 0x578107:c.instructions+=1;goto B578107;
case 0x57810c:goto L57810c;
case 0x57810e:c.instructions+=3;goto B57810e;
case 0x578111:c.instructions+=2;goto B578111;
case 0x578113:c.instructions+=1;goto B578113;
case 0x578115:goto L578115;
case 0x578119:c.instructions+=2;goto B578119;
case 0x57811a:c.instructions+=1;goto B57811a;
case 0x57811f:goto L57811f;
case 0x578122:c.instructions+=4;goto B578122;
case 0x578124:c.instructions+=3;goto B578124;
case 0x578125:c.instructions+=2;goto B578125;
case 0x57812a:c.instructions+=1;goto B57812a;
case 0x57812f:goto L57812f;
case 0x578132:c.instructions+=2;goto B578132;
case 0x578134:c.instructions+=1;goto B578134;
case 0x578136:goto L578136;
case 0x578137:c.instructions+=2;goto B578137;
case 0x57813c:c.instructions+=1;goto B57813c;
case 0x578141:goto L578141;
case 0x578143:c.instructions+=1;goto B578143;
case 0x578145:goto L578145;
case 0x578149:goto L578149;
case 0x57814a:c.instructions+=1;goto B57814a;
case 0x57814f:goto L57814f;
case 0x578151:c.instructions+=3;goto B578151;
case 0x578154:c.instructions+=2;goto B578154;
case 0x578156:c.instructions+=1;goto B578156;
case 0x578158:goto L578158;
case 0x57815a:c.instructions+=1;goto B57815a;
case 0x57815f:goto L57815f;
case 0x578161:goto L578161;
case 0x578165:c.instructions+=6;goto B578165;
case 0x578168:c.instructions+=5;goto B578168;
case 0x57816a:c.instructions+=4;goto B57816a;
case 0x57816e:c.instructions+=3;goto B57816e;
case 0x57816f:c.instructions+=2;goto B57816f;
case 0x578174:c.instructions+=1;goto B578174;
case 0x578179:goto L578179;
case 0x57817d:c.instructions+=5;goto B57817d;
case 0x57817e:c.instructions+=4;goto B57817e;
case 0x578182:c.instructions+=3;goto B578182;
case 0x578187:c.instructions+=2;goto B578187;
case 0x578188:c.instructions+=1;goto B578188;
case 0x57818d:goto L57818d;
case 0x578191:c.instructions+=2;goto B578191;
case 0x578192:c.instructions+=1;goto B578192;
case 0x578197:goto L578197;
case 0x578199:c.instructions+=3;goto B578199;
case 0x57819c:c.instructions+=2;goto B57819c;
case 0x57819e:c.instructions+=1;goto B57819e;
case 0x5781a0:goto L5781a0;
case 0x5781a4:c.instructions+=2;goto B5781a4;
case 0x5781a5:c.instructions+=1;goto B5781a5;
case 0x5781aa:goto L5781aa;
case 0x5781ad:c.instructions+=4;goto B5781ad;
case 0x5781af:c.instructions+=3;goto B5781af;
case 0x5781b0:c.instructions+=2;goto B5781b0;
case 0x5781b5:c.instructions+=1;goto B5781b5;
case 0x5781ba:goto L5781ba;
case 0x5781bd:c.instructions+=2;goto B5781bd;
case 0x5781bf:c.instructions+=1;goto B5781bf;
case 0x5781c1:goto L5781c1;
case 0x5781c2:c.instructions+=2;goto B5781c2;
case 0x5781c7:c.instructions+=1;goto B5781c7;
case 0x5781cc:goto L5781cc;
case 0x5781ce:c.instructions+=1;goto B5781ce;
case 0x5781d0:goto L5781d0;
case 0x5781d4:goto L5781d4;
case 0x5781d5:c.instructions+=1;goto B5781d5;
case 0x5781da:goto L5781da;
case 0x5781dc:c.instructions+=3;goto B5781dc;
case 0x5781df:c.instructions+=2;goto B5781df;
case 0x5781e1:c.instructions+=1;goto B5781e1;
case 0x5781e3:goto L5781e3;
case 0x5781e5:c.instructions+=1;goto B5781e5;
case 0x5781ea:goto L5781ea;
case 0x5781ec:goto L5781ec;
case 0x5781ee:c.instructions+=5;goto B5781ee;
case 0x5781f2:c.instructions+=4;goto B5781f2;
case 0x5781f3:c.instructions+=3;goto B5781f3;
case 0x5781f8:c.instructions+=2;goto B5781f8;
case 0x5781fb:c.instructions+=1;goto B5781fb;
case 0x578200:goto L578200;
case 0x578205:c.instructions+=2;goto B578205;
case 0x578207:c.instructions+=1;goto B578207;
case 0x57820d:goto L57820d;
case 0x578212:c.instructions+=2;goto B578212;
case 0x578215:c.instructions+=1;goto B578215;
case 0x578217:goto L578217;
case 0x57821d:c.instructions+=3;goto B57821d;
case 0x57821f:c.instructions+=2;goto B57821f;
case 0x578224:c.instructions+=1;goto B578224;
case 0x578226:goto L578226;
case 0x57822b:c.instructions+=3;goto B57822b;
case 0x57822d:c.instructions+=2;goto B57822d;
case 0x578232:c.instructions+=1;goto B578232;
case 0x578234:goto L578234;
case 0x578239:goto L578239;
case 0x57823a:c.instructions+=1;goto B57823a;
case 0x57823f:goto L57823f;
case 0x578242:c.instructions+=2;goto B578242;
case 0x578247:c.instructions+=1;goto B578247;
case 0x57824a:goto L57824a;
case 0x57824f:c.instructions+=2;goto B57824f;
case 0x578255:c.instructions+=1;goto B578255;
case 0x578257:goto L578257;
case 0x57825a:c.instructions+=1;goto B57825a;
case 0x57825c:goto L57825c;
case 0x578263:c.instructions+=1;goto B578263;
case 0x578265:goto L578265;
case 0x57826a:goto L57826a;
case 0x57826b:c.instructions+=4;goto B57826b;
case 0x57826f:c.instructions+=3;goto B57826f;
case 0x578274:c.instructions+=2;goto B578274;
case 0x578275:c.instructions+=1;goto B578275;
case 0x57827a:goto L57827a;
case 0x57827e:c.instructions+=2;goto B57827e;
case 0x57827f:c.instructions+=1;goto B57827f;
case 0x578284:goto L578284;
case 0x578287:c.instructions+=6;goto B578287;
case 0x578289:c.instructions+=5;goto B578289;
case 0x57828d:c.instructions+=4;goto B57828d;
case 0x57828e:c.instructions+=3;goto B57828e;
case 0x578293:c.instructions+=2;goto B578293;
case 0x578296:c.instructions+=1;goto B578296;
case 0x57829b:goto L57829b;
case 0x57829c:c.instructions+=4;goto B57829c;
case 0x57829d:c.instructions+=3;goto B57829d;
case 0x57829e:c.instructions+=2;goto B57829e;
case 0x5782a1:c.instructions+=1;goto B5782a1;
case 0x5782b0:goto L5782b0;
case 0x5782b1:c.instructions+=2;goto B5782b1;
case 0x5782b6:c.instructions+=1;goto B5782b6;
case 0x5782bb:goto L5782bb;
case 0x5782c0:c.instructions+=1;goto B5782c0;
case 0x5782c5:goto L5782c5;
case 0x5782ca:c.instructions+=3;goto B5782ca;
case 0x5782cc:c.instructions+=2;goto B5782cc;
case 0x5782ce:c.instructions+=1;goto B5782ce;
case 0x5782d0:goto L5782d0;
case 0x5782d2:c.instructions+=1;goto B5782d2;
case 0x5782d7:goto L5782d7;
case 0x5782d9:c.instructions+=2;goto B5782d9;
case 0x5782df:c.instructions+=1;goto B5782df;
case 0x5782e1:goto L5782e1;
case 0x5782e2:c.instructions+=1;goto B5782e2;
case 0x5782f0:goto L5782f0;
case 0x5782f6:c.instructions+=4;goto B5782f6;
case 0x578300:c.instructions+=3;goto B578300;
case 0x578303:c.instructions+=2;goto B578303;
case 0x578304:c.instructions+=1;goto B578304;
case 0x578309:goto L578309;
case 0x57830f:c.instructions+=4;goto B57830f;
case 0x578312:c.instructions+=3;goto B578312;
case 0x578318:c.instructions+=2;goto B578318;
case 0x578319:c.instructions+=1;goto B578319;
case 0x57831e:goto L57831e;
case 0x578320:goto L578320;
case 0x578323:c.instructions+=3;goto B578323;
case 0x578325:c.instructions+=2;goto B578325;
case 0x578327:c.instructions+=1;goto B578327;
case 0x578329:goto L578329;
case 0x57832c:goto L57832c;
case 0x57832f:c.instructions+=3;goto B57832f;
case 0x578336:c.instructions+=2;goto B578336;
case 0x57833d:c.instructions+=1;goto B57833d;
case 0x57833f:goto L57833f;
case 0x578342:goto L578342;
case 0x578350:goto L578350;
case 0x578356:c.instructions+=4;goto B578356;
case 0x578358:c.instructions+=3;goto B578358;
case 0x57835a:c.instructions+=2;goto B57835a;
case 0x578360:c.instructions+=1;goto B578360;
case 0x578362:goto L578362;
case 0x578364:c.instructions+=1;goto B578364;
case 0x578366:goto L578366;
case 0x57836b:goto L57836b;
case 0x578375:c.instructions+=2;goto B578375;
case 0x57837f:c.instructions+=1;goto B57837f;
case 0x578380:goto L578380;
case 0x578382:c.instructions+=1;goto B578382;
case 0x578384:goto L578384;
case 0x578389:goto L578389;
case 0x578393:c.instructions+=2;goto B578393;
case 0x57839d:c.instructions+=1;goto B57839d;
case 0x5783a0:goto L5783a0;
case 0x5783a5:c.instructions+=4;goto B5783a5;
case 0x5783a7:c.instructions+=3;goto B5783a7;
case 0x5783b1:c.instructions+=2;goto B5783b1;
case 0x5783bb:c.instructions+=1;goto B5783bb;
case 0x5783bd:goto L5783bd;
case 0x5783c4:goto L5783c4;
case 0x5783d0:goto L5783d0;
case 0x5783d6:c.instructions+=3;goto B5783d6;
case 0x5783d8:c.instructions+=2;goto B5783d8;
case 0x5783da:c.instructions+=1;goto B5783da;
case 0x5783dc:goto L5783dc;
case 0x5783e1:goto L5783e1;
case 0x5783e2:c.instructions+=5;goto B5783e2;
case 0x5783e7:c.instructions+=4;goto B5783e7;
case 0x5783ee:c.instructions+=3;goto B5783ee;
case 0x5783f8:c.instructions+=2;goto B5783f8;
case 0x5783fd:c.instructions+=1;goto B5783fd;
case 0x578402:goto L578402;
case 0x578405:c.instructions+=1;goto B578405;
case 0x578410:goto L578410;
case 0x578416:c.instructions+=8;goto B578416;
case 0x578417:c.instructions+=7;goto B578417;
case 0x57841b:c.instructions+=6;goto B57841b;
case 0x57841c:c.instructions+=5;goto B57841c;
case 0x578420:c.instructions+=4;goto B578420;
case 0x578422:c.instructions+=3;goto B578422;
case 0x578424:c.instructions+=2;goto B578424;
case 0x578426:c.instructions+=1;goto B578426;
case 0x57842b:goto L57842b;
case 0x57842d:c.instructions+=4;goto B57842d;
case 0x578431:c.instructions+=3;goto B578431;
case 0x578435:c.instructions+=2;goto B578435;
case 0x578436:c.instructions+=1;goto B578436;
case 0x57843b:goto L57843b;
case 0x57843e:c.instructions+=2;goto B57843e;
case 0x578441:c.instructions+=1;goto B578441;
case 0x578443:goto L578443;
case 0x578448:c.instructions+=4;goto B578448;
case 0x57844c:c.instructions+=3;goto B57844c;
case 0x578450:c.instructions+=2;goto B578450;
case 0x578452:c.instructions+=1;goto B578452;
case 0x578454:goto L578454;
case 0x578455:c.instructions+=3;goto B578455;
case 0x578457:c.instructions+=2;goto B578457;
case 0x578458:c.instructions+=1;goto B578458;
case 0x578460:goto L578460;
case 0x578461:c.instructions+=13;goto B578461;
case 0x578462:c.instructions+=12;goto B578462;
case 0x578463:c.instructions+=11;goto B578463;
case 0x578464:c.instructions+=10;goto B578464;
case 0x578468:c.instructions+=9;goto B578468;
case 0x57846b:c.instructions+=8;goto B57846b;
case 0x57846d:c.instructions+=7;goto B57846d;
case 0x578473:c.instructions+=6;goto B578473;
case 0x578474:c.instructions+=5;goto B578474;
case 0x578476:c.instructions+=4;goto B578476;
case 0x57847a:c.instructions+=3;goto B57847a;
case 0x57847c:c.instructions+=2;goto B57847c;
case 0x57847f:c.instructions+=1;goto B57847f;
case 0x578481:goto L578481;
case 0x578484:c.instructions+=4;goto B578484;
case 0x57848a:c.instructions+=3;goto B57848a;
case 0x57848c:c.instructions+=2;goto B57848c;
case 0x57848f:c.instructions+=1;goto B57848f;
case 0x578491:goto L578491;
case 0x578494:c.instructions+=4;goto B578494;
case 0x57849a:c.instructions+=3;goto B57849a;
case 0x57849c:c.instructions+=2;goto B57849c;
case 0x57849f:c.instructions+=1;goto B57849f;
case 0x5784a1:goto L5784a1;
case 0x5784a8:c.instructions+=1;goto B5784a8;
case 0x5784aa:goto L5784aa;
case 0x5784ad:c.instructions+=4;goto B5784ad;
case 0x5784b3:c.instructions+=3;goto B5784b3;
case 0x5784b5:c.instructions+=2;goto B5784b5;
case 0x5784b8:c.instructions+=1;goto B5784b8;
case 0x5784ba:goto L5784ba;
case 0x5784bd:c.instructions+=4;goto B5784bd;
case 0x5784c3:c.instructions+=3;goto B5784c3;
case 0x5784c5:c.instructions+=2;goto B5784c5;
case 0x5784c8:c.instructions+=1;goto B5784c8;
case 0x5784ca:goto L5784ca;
case 0x5784cd:c.instructions+=5;goto B5784cd;
case 0x5784cf:c.instructions+=4;goto B5784cf;
case 0x5784d5:c.instructions+=3;goto B5784d5;
case 0x5784d7:c.instructions+=2;goto B5784d7;
case 0x5784da:c.instructions+=1;goto B5784da;
case 0x5784dc:goto L5784dc;
case 0x5784de:goto L5784de;
case 0x5784e2:goto L5784e2;
case 0x5784e5:c.instructions+=2;goto B5784e5;
case 0x5784e7:c.instructions+=1;goto B5784e7;
case 0x5784e9:goto L5784e9;
case 0x5784ef:c.instructions+=4;goto B5784ef;
case 0x5784f5:c.instructions+=3;goto B5784f5;
case 0x5784f8:c.instructions+=2;goto B5784f8;
case 0x5784fa:c.instructions+=1;goto B5784fa;
case 0x5784fc:goto L5784fc;
case 0x578503:goto L578503;
case 0x578509:c.instructions+=2;goto B578509;
case 0x57850b:c.instructions+=1;goto B57850b;
case 0x57850d:goto L57850d;
case 0x57850f:c.instructions+=7;goto B57850f;
case 0x578510:c.instructions+=6;goto B578510;
case 0x578512:c.instructions+=5;goto B578512;
case 0x578514:c.instructions+=4;goto B578514;
case 0x578518:c.instructions+=3;goto B578518;
case 0x578519:c.instructions+=2;goto B578519;
case 0x57851b:c.instructions+=1;goto B57851b;
case 0x578520:goto L578520;
case 0x578524:goto L578524;
case 0x578526:c.instructions+=2;goto B578526;
case 0x578528:c.instructions+=1;goto B578528;
case 0x57852a:goto L57852a;
case 0x57852b:c.instructions+=4;goto B57852b;
case 0x57852d:c.instructions+=3;goto B57852d;
case 0x57852f:c.instructions+=2;goto B57852f;
case 0x578530:c.instructions+=1;goto B578530;
case 0x578535:goto L578535;
case 0x578536:c.instructions+=5;goto B578536;
case 0x578537:c.instructions+=4;goto B578537;
case 0x578538:c.instructions+=3;goto B578538;
case 0x578539:c.instructions+=2;goto B578539;
case 0x57853a:c.instructions+=1;goto B57853a;
case 0x57853d:goto L57853d;
case 0x57853e:c.instructions+=1;goto B57853e;
case 0x578543:goto L578543;
case 0x578546:c.instructions+=3;goto B578546;
case 0x578547:c.instructions+=2;goto B578547;
case 0x578549:c.instructions+=1;goto B578549;
case 0x57854e:goto L57854e;
case 0x578551:c.instructions+=3;goto B578551;
case 0x578552:c.instructions+=2;goto B578552;
case 0x578554:c.instructions+=1;goto B578554;
case 0x578559:goto L578559;
case 0x57855c:c.instructions+=5;goto B57855c;
case 0x57855f:c.instructions+=4;goto B57855f;
case 0x578562:c.instructions+=3;goto B578562;
case 0x578565:c.instructions+=2;goto B578565;
case 0x57856c:c.instructions+=1;goto B57856c;
case 0x57856e:goto L57856e;
case 0x578571:c.instructions+=3;goto B578571;
case 0x578572:c.instructions+=2;goto B578572;
case 0x578574:c.instructions+=1;goto B578574;
case 0x578579:goto L578579;
case 0x57857a:c.instructions+=5;goto B57857a;
case 0x57857b:c.instructions+=4;goto B57857b;
case 0x57857c:c.instructions+=3;goto B57857c;
case 0x57857d:c.instructions+=2;goto B57857d;
case 0x57857e:c.instructions+=1;goto B57857e;
case 0x578581:goto L578581;
case 0x578582:c.instructions+=8;goto B578582;
case 0x578585:c.instructions+=7;goto B578585;
case 0x578588:c.instructions+=6;goto B578588;
case 0x57858b:c.instructions+=5;goto B57858b;
case 0x57858c:c.instructions+=4;goto B57858c;
case 0x57858d:c.instructions+=3;goto B57858d;
case 0x57858e:c.instructions+=2;goto B57858e;
case 0x57858f:c.instructions+=1;goto B57858f;
case 0x5785a0:goto L5785a0;
case 0x5785a3:c.instructions+=10;goto B5785a3;
case 0x5785a4:c.instructions+=9;goto B5785a4;
case 0x5785a5:c.instructions+=8;goto B5785a5;
case 0x5785a6:c.instructions+=7;goto B5785a6;
case 0x5785a8:c.instructions+=6;goto B5785a8;
case 0x5785ab:c.instructions+=5;goto B5785ab;
case 0x5785ad:c.instructions+=4;goto B5785ad;
case 0x5785af:c.instructions+=3;goto B5785af;
case 0x5785b3:c.instructions+=2;goto B5785b3;
case 0x5785b4:c.instructions+=1;goto B5785b4;
case 0x5785ba:goto L5785ba;
case 0x5785bc:c.instructions+=1;goto B5785bc;
case 0x5785c2:goto L5785c2;
case 0x5785c6:goto L5785c6;
case 0x5785c9:c.instructions+=2;goto B5785c9;
case 0x5785cb:c.instructions+=1;goto B5785cb;
case 0x5785cd:goto L5785cd;
case 0x5785d3:c.instructions+=4;goto B5785d3;
case 0x5785d9:c.instructions+=3;goto B5785d9;
case 0x5785dc:c.instructions+=2;goto B5785dc;
case 0x5785de:c.instructions+=1;goto B5785de;
case 0x5785e0:goto L5785e0;
case 0x5785e4:c.instructions+=1;goto B5785e4;
case 0x5785eb:goto L5785eb;
case 0x5785f1:c.instructions+=1;goto B5785f1;
case 0x5785f3:goto L5785f3;
case 0x5785f6:c.instructions+=2;goto B5785f6;
case 0x5785f8:c.instructions+=1;goto B5785f8;
case 0x5785fa:goto L5785fa;
case 0x5785fc:c.instructions+=6;goto B5785fc;
case 0x5785fe:c.instructions+=5;goto B5785fe;
case 0x578600:c.instructions+=4;goto B578600;
case 0x578604:c.instructions+=3;goto B578604;
case 0x578605:c.instructions+=2;goto B578605;
case 0x578607:c.instructions+=1;goto B578607;
case 0x57860c:goto L57860c;
case 0x57860e:goto L57860e;
case 0x578611:c.instructions+=2;goto B578611;
case 0x578613:c.instructions+=1;goto B578613;
case 0x578615:goto L578615;
case 0x57861a:c.instructions+=9;goto B57861a;
case 0x57861c:c.instructions+=8;goto B57861c;
case 0x57861e:c.instructions+=7;goto B57861e;
case 0x578620:c.instructions+=6;goto B578620;
case 0x578624:c.instructions+=5;goto B578624;
case 0x578627:c.instructions+=4;goto B578627;
case 0x578628:c.instructions+=3;goto B578628;
case 0x57862a:c.instructions+=2;goto B57862a;
case 0x57862e:c.instructions+=1;goto B57862e;
case 0x578633:goto L578633;
case 0x578638:c.instructions+=2;goto B578638;
case 0x57863a:c.instructions+=1;goto B57863a;
case 0x57863c:goto L57863c;
case 0x578640:c.instructions+=7;goto B578640;
case 0x578643:c.instructions+=6;goto B578643;
case 0x578646:c.instructions+=5;goto B578646;
case 0x578648:c.instructions+=4;goto B578648;
case 0x57864b:c.instructions+=3;goto B57864b;
case 0x57864e:c.instructions+=2;goto B57864e;
case 0x578650:c.instructions+=1;goto B578650;
case 0x578652:goto L578652;
case 0x578654:goto L578654;
case 0x578656:goto L578656;
case 0x578659:goto L578659;
case 0x57865d:c.instructions+=1;goto B57865d;
case 0x57865f:goto L57865f;
case 0x578662:c.instructions+=2;goto B578662;
case 0x578664:c.instructions+=1;goto B578664;
case 0x578666:goto L578666;
case 0x57866c:c.instructions+=4;goto B57866c;
case 0x578672:c.instructions+=3;goto B578672;
case 0x578675:c.instructions+=2;goto B578675;
case 0x578677:c.instructions+=1;goto B578677;
case 0x578679:goto L578679;
case 0x57867d:c.instructions+=1;goto B57867d;
case 0x578684:goto L578684;
case 0x57868a:c.instructions+=1;goto B57868a;
case 0x57868c:goto L57868c;
case 0x57868f:c.instructions+=2;goto B57868f;
case 0x578691:c.instructions+=1;goto B578691;
case 0x578693:goto L578693;
case 0x578699:c.instructions+=4;goto B578699;
case 0x57869f:c.instructions+=3;goto B57869f;
case 0x5786a2:c.instructions+=2;goto B5786a2;
case 0x5786a4:c.instructions+=1;goto B5786a4;
case 0x5786a6:goto L5786a6;
case 0x5786ad:c.instructions+=2;goto B5786ad;
case 0x5786af:c.instructions+=1;goto B5786af;
case 0x5786b3:goto L5786b3;
case 0x5786b9:c.instructions+=1;goto B5786b9;
case 0x5786bb:goto L5786bb;
case 0x5786be:c.instructions+=2;goto B5786be;
case 0x5786c0:c.instructions+=1;goto B5786c0;
case 0x5786c2:goto L5786c2;
case 0x5786c7:c.instructions+=6;goto B5786c7;
case 0x5786cd:c.instructions+=5;goto B5786cd;
case 0x5786d3:c.instructions+=4;goto B5786d3;
case 0x5786d6:c.instructions+=3;goto B5786d6;
case 0x5786d9:c.instructions+=2;goto B5786d9;
case 0x5786db:c.instructions+=1;goto B5786db;
case 0x5786dd:goto L5786dd;
case 0x5786e4:c.instructions+=1;goto B5786e4;
case 0x5786eb:goto L5786eb;
case 0x5786f1:goto L5786f1;
case 0x5786f6:c.instructions+=2;goto B5786f6;
case 0x5786f8:c.instructions+=1;goto B5786f8;
case 0x5786fe:goto L5786fe;
case 0x578702:goto L578702;
case 0x578705:c.instructions+=2;goto B578705;
case 0x578707:c.instructions+=1;goto B578707;
case 0x578709:goto L578709;
case 0x57870f:c.instructions+=4;goto B57870f;
case 0x578715:c.instructions+=3;goto B578715;
case 0x578718:c.instructions+=2;goto B578718;
case 0x57871a:c.instructions+=1;goto B57871a;
case 0x578720:goto L578720;
case 0x578724:c.instructions+=4;goto B578724;
case 0x578727:c.instructions+=3;goto B578727;
case 0x57872e:c.instructions+=2;goto B57872e;
case 0x578735:c.instructions+=1;goto B578735;
case 0x578737:goto L578737;
case 0x57873a:c.instructions+=2;goto B57873a;
case 0x57873c:c.instructions+=1;goto B57873c;
case 0x57873e:goto L57873e;
case 0x578744:c.instructions+=4;goto B578744;
case 0x57874a:c.instructions+=3;goto B57874a;
case 0x57874d:c.instructions+=2;goto B57874d;
case 0x57874f:c.instructions+=1;goto B57874f;
case 0x578751:goto L578751;
case 0x578758:c.instructions+=4;goto B578758;
case 0x57875b:c.instructions+=3;goto B57875b;
case 0x578762:c.instructions+=2;goto B578762;
case 0x578766:c.instructions+=1;goto B578766;
case 0x578768:goto L578768;
case 0x57876e:c.instructions+=1;goto B57876e;
case 0x578770:goto L578770;
case 0x578773:c.instructions+=2;goto B578773;
case 0x578775:c.instructions+=1;goto B578775;
case 0x578777:goto L578777;
case 0x57877b:c.instructions+=9;goto B57877b;
case 0x578780:c.instructions+=8;goto B578780;
case 0x578786:c.instructions+=7;goto B578786;
case 0x578789:c.instructions+=6;goto B578789;
case 0x57878c:c.instructions+=5;goto B57878c;
case 0x57878e:c.instructions+=4;goto B57878e;
case 0x578794:c.instructions+=3;goto B578794;
case 0x578797:c.instructions+=2;goto B578797;
case 0x578799:c.instructions+=1;goto B578799;
case 0x57879b:goto L57879b;
case 0x5787a2:c.instructions+=1;goto B5787a2;
case 0x5787a9:goto L5787a9;
case 0x5787af:goto L5787af;
case 0x5787b3:c.instructions+=4;goto B5787b3;
case 0x5787b4:c.instructions+=3;goto B5787b4;
case 0x5787b5:c.instructions+=2;goto B5787b5;
case 0x5787b9:c.instructions+=1;goto B5787b9;
case 0x5787bf:goto L5787bf;
case 0x5787c3:c.instructions+=1;goto B5787c3;
case 0x5787c9:goto L5787c9;
case 0x5787ca:c.instructions+=5;goto B5787ca;
case 0x5787cb:c.instructions+=4;goto B5787cb;
case 0x5787cc:c.instructions+=3;goto B5787cc;
case 0x5787cd:c.instructions+=2;goto B5787cd;
case 0x5787d0:c.instructions+=1;goto B5787d0;
case 0x5787d3:goto L5787d3;
case 0x5787d5:c.instructions+=1;goto B5787d5;
case 0x5787db:goto L5787db;
case 0x5787df:c.instructions+=1;goto B5787df;
case 0x5787e3:goto L5787e3;
case 0x5787e7:c.instructions+=4;goto B5787e7;
case 0x5787eb:c.instructions+=3;goto B5787eb;
case 0x5787ed:c.instructions+=2;goto B5787ed;
case 0x5787f0:c.instructions+=1;goto B5787f0;
case 0x5787f2:goto L5787f2;
case 0x5787f4:c.instructions+=1;goto B5787f4;
case 0x5787f6:goto L5787f6;
case 0x5787fa:c.instructions+=1;goto B5787fa;
case 0x5787fc:goto L5787fc;
case 0x578800:c.instructions+=4;goto B578800;
case 0x578802:c.instructions+=3;goto B578802;
case 0x578803:c.instructions+=2;goto B578803;
case 0x578807:c.instructions+=1;goto B578807;
case 0x578809:goto L578809;
case 0x57880c:c.instructions+=2;goto B57880c;
case 0x57880e:c.instructions+=1;goto B57880e;
case 0x578810:goto L578810;
case 0x578816:c.instructions+=4;goto B578816;
case 0x57881c:c.instructions+=3;goto B57881c;
case 0x57881f:c.instructions+=2;goto B57881f;
case 0x578821:c.instructions+=1;goto B578821;
case 0x578823:goto L578823;
case 0x57882a:goto L57882a;
case 0x578830:c.instructions+=1;goto B578830;
case 0x578832:goto L578832;
case 0x578835:c.instructions+=2;goto B578835;
case 0x578837:c.instructions+=1;goto B578837;
case 0x578839:goto L578839;
case 0x57883b:c.instructions+=6;goto B57883b;
case 0x57883d:c.instructions+=5;goto B57883d;
case 0x57883f:c.instructions+=4;goto B57883f;
case 0x578843:c.instructions+=3;goto B578843;
case 0x578844:c.instructions+=2;goto B578844;
case 0x578846:c.instructions+=1;goto B578846;
case 0x57884b:goto L57884b;
case 0x57884d:goto L57884d;
case 0x578850:c.instructions+=2;goto B578850;
case 0x578852:c.instructions+=1;goto B578852;
case 0x578854:goto L578854;
case 0x578857:c.instructions+=9;goto B578857;
case 0x578859:c.instructions+=8;goto B578859;
case 0x57885c:c.instructions+=7;goto B57885c;
case 0x57885e:c.instructions+=6;goto B57885e;
case 0x578862:c.instructions+=5;goto B578862;
case 0x578864:c.instructions+=4;goto B578864;
case 0x578868:c.instructions+=3;goto B578868;
case 0x578869:c.instructions+=2;goto B578869;
case 0x57886b:c.instructions+=1;goto B57886b;
case 0x578870:goto L578870;
case 0x578874:c.instructions+=6;goto B578874;
case 0x578877:c.instructions+=5;goto B578877;
case 0x578879:c.instructions+=4;goto B578879;
case 0x57887c:c.instructions+=3;goto B57887c;
case 0x578880:c.instructions+=2;goto B578880;
case 0x578884:c.instructions+=1;goto B578884;
case 0x578886:goto L578886;
case 0x578889:c.instructions+=1;goto B578889;
case 0x57888b:goto L57888b;
case 0x57888f:c.instructions+=1;goto B57888f;
case 0x578891:goto L578891;
case 0x578893:c.instructions+=5;goto B578893;
case 0x578894:c.instructions+=4;goto B578894;
case 0x578898:c.instructions+=3;goto B578898;
case 0x57889b:c.instructions+=2;goto B57889b;
case 0x57889f:c.instructions+=1;goto B57889f;
case 0x5788a1:goto L5788a1;
case 0x5788a5:goto L5788a5;
case 0x5788a8:c.instructions+=2;goto B5788a8;
case 0x5788aa:c.instructions+=1;goto B5788aa;
case 0x5788ac:goto L5788ac;
case 0x5788b2:c.instructions+=4;goto B5788b2;
case 0x5788b8:c.instructions+=3;goto B5788b8;
case 0x5788bb:c.instructions+=2;goto B5788bb;
case 0x5788bd:c.instructions+=1;goto B5788bd;
case 0x5788bf:goto L5788bf;
case 0x5788c6:goto L5788c6;
case 0x5788cc:c.instructions+=1;goto B5788cc;
case 0x5788ce:goto L5788ce;
case 0x5788d1:c.instructions+=2;goto B5788d1;
case 0x5788d3:c.instructions+=1;goto B5788d3;
case 0x5788d5:goto L5788d5;
case 0x5788d7:c.instructions+=6;goto B5788d7;
case 0x5788d9:c.instructions+=5;goto B5788d9;
case 0x5788db:c.instructions+=4;goto B5788db;
case 0x5788df:c.instructions+=3;goto B5788df;
case 0x5788e0:c.instructions+=2;goto B5788e0;
case 0x5788e2:c.instructions+=1;goto B5788e2;
case 0x5788e7:goto L5788e7;
case 0x5788eb:c.instructions+=1;goto B5788eb;
case 0x5788ed:goto L5788ed;
case 0x5788f0:c.instructions+=2;goto B5788f0;
case 0x5788f2:c.instructions+=1;goto B5788f2;
case 0x5788f4:goto L5788f4;
case 0x5788f6:c.instructions+=9;goto B5788f6;
case 0x5788f8:c.instructions+=8;goto B5788f8;
case 0x5788fb:c.instructions+=7;goto B5788fb;
case 0x5788fd:c.instructions+=6;goto B5788fd;
case 0x578901:c.instructions+=5;goto B578901;
case 0x578904:c.instructions+=4;goto B578904;
case 0x578905:c.instructions+=3;goto B578905;
case 0x578907:c.instructions+=2;goto B578907;
case 0x57890b:c.instructions+=1;goto B57890b;
case 0x578910:goto L578910;
case 0x578913:c.instructions+=2;goto B578913;
case 0x578915:c.instructions+=1;goto B578915;
case 0x57891b:goto L57891b;
case 0x57891f:c.instructions+=5;goto B57891f;
case 0x578921:c.instructions+=4;goto B578921;
case 0x578923:c.instructions+=3;goto B578923;
case 0x578926:c.instructions+=2;goto B578926;
case 0x57892a:c.instructions+=1;goto B57892a;
case 0x578930:goto L578930;
case 0x578933:c.instructions+=2;goto B578933;
case 0x578935:c.instructions+=1;goto B578935;
case 0x578937:goto L578937;
case 0x57893d:c.instructions+=4;goto B57893d;
case 0x578943:c.instructions+=3;goto B578943;
case 0x578946:c.instructions+=2;goto B578946;
case 0x578948:c.instructions+=1;goto B578948;
case 0x57894e:goto L57894e;
case 0x578951:c.instructions+=4;goto B578951;
case 0x578953:c.instructions+=3;goto B578953;
case 0x57895a:c.instructions+=2;goto B57895a;
case 0x578961:c.instructions+=1;goto B578961;
case 0x578963:goto L578963;
case 0x578966:c.instructions+=2;goto B578966;
case 0x578968:c.instructions+=1;goto B578968;
case 0x57896a:goto L57896a;
case 0x578970:c.instructions+=4;goto B578970;
case 0x578976:c.instructions+=3;goto B578976;
case 0x578979:c.instructions+=2;goto B578979;
case 0x57897b:c.instructions+=1;goto B57897b;
case 0x57897d:goto L57897d;
case 0x578984:c.instructions+=4;goto B578984;
case 0x578986:c.instructions+=3;goto B578986;
case 0x57898d:c.instructions+=2;goto B57898d;
case 0x578990:c.instructions+=1;goto B578990;
case 0x578992:goto L578992;
case 0x578998:c.instructions+=1;goto B578998;
case 0x57899a:goto L57899a;
case 0x57899d:c.instructions+=2;goto B57899d;
case 0x57899f:c.instructions+=1;goto B57899f;
case 0x5789a1:goto L5789a1;
case 0x5789a4:c.instructions+=9;goto B5789a4;
case 0x5789a8:c.instructions+=8;goto B5789a8;
case 0x5789ae:c.instructions+=7;goto B5789ae;
case 0x5789b1:c.instructions+=6;goto B5789b1;
case 0x5789b4:c.instructions+=5;goto B5789b4;
case 0x5789b6:c.instructions+=4;goto B5789b6;
case 0x5789bc:c.instructions+=3;goto B5789bc;
case 0x5789bf:c.instructions+=2;goto B5789bf;
case 0x5789c1:c.instructions+=1;goto B5789c1;
case 0x5789c3:goto L5789c3;
case 0x5789ca:c.instructions+=1;goto B5789ca;
case 0x5789d1:goto L5789d1;
case 0x5789d7:goto L5789d7;
case 0x5789db:c.instructions+=4;goto B5789db;
case 0x5789de:c.instructions+=3;goto B5789de;
case 0x5789df:c.instructions+=2;goto B5789df;
case 0x5789e3:c.instructions+=1;goto B5789e3;
case 0x5789e9:goto L5789e9;
case 0x5789ed:c.instructions+=1;goto B5789ed;
case 0x5789f3:goto L5789f3;
case 0x5789f4:c.instructions+=5;goto B5789f4;
case 0x5789f5:c.instructions+=4;goto B5789f5;
case 0x5789f6:c.instructions+=3;goto B5789f6;
case 0x5789f7:c.instructions+=2;goto B5789f7;
case 0x5789fa:c.instructions+=1;goto B5789fa;
case 0x578a00:goto L578a00;
case 0x578a03:c.instructions+=8;goto B578a03;
case 0x578a04:c.instructions+=7;goto B578a04;
case 0x578a05:c.instructions+=6;goto B578a05;
case 0x578a06:c.instructions+=5;goto B578a06;
case 0x578a08:c.instructions+=4;goto B578a08;
case 0x578a0b:c.instructions+=3;goto B578a0b;
case 0x578a0d:c.instructions+=2;goto B578a0d;
case 0x578a0e:c.instructions+=1;goto B578a0e;
case 0x578a14:goto L578a14;
case 0x578a18:c.instructions+=3;goto B578a18;
case 0x578a1a:c.instructions+=2;goto B578a1a;
case 0x578a1c:c.instructions+=1;goto B578a1c;
case 0x578a22:goto L578a22;
case 0x578a25:c.instructions+=2;goto B578a25;
case 0x578a27:c.instructions+=1;goto B578a27;
case 0x578a29:goto L578a29;
case 0x578a2f:c.instructions+=4;goto B578a2f;
case 0x578a35:c.instructions+=3;goto B578a35;
case 0x578a38:c.instructions+=2;goto B578a38;
case 0x578a3a:c.instructions+=1;goto B578a3a;
case 0x578a3c:goto L578a3c;
case 0x578a40:c.instructions+=1;goto B578a40;
case 0x578a47:goto L578a47;
case 0x578a4d:c.instructions+=1;goto B578a4d;
case 0x578a4f:goto L578a4f;
case 0x578a52:c.instructions+=2;goto B578a52;
case 0x578a54:c.instructions+=1;goto B578a54;
case 0x578a56:goto L578a56;
case 0x578a58:c.instructions+=6;goto B578a58;
case 0x578a5a:c.instructions+=5;goto B578a5a;
case 0x578a5c:c.instructions+=4;goto B578a5c;
case 0x578a60:c.instructions+=3;goto B578a60;
case 0x578a61:c.instructions+=2;goto B578a61;
case 0x578a63:c.instructions+=1;goto B578a63;
case 0x578a68:goto L578a68;
case 0x578a6a:goto L578a6a;
case 0x578a6d:c.instructions+=2;goto B578a6d;
case 0x578a6f:c.instructions+=1;goto B578a6f;
case 0x578a71:goto L578a71;
case 0x578a76:c.instructions+=9;goto B578a76;
case 0x578a78:c.instructions+=8;goto B578a78;
case 0x578a7a:c.instructions+=7;goto B578a7a;
case 0x578a7c:c.instructions+=6;goto B578a7c;
case 0x578a80:c.instructions+=5;goto B578a80;
case 0x578a83:c.instructions+=4;goto B578a83;
case 0x578a84:c.instructions+=3;goto B578a84;
case 0x578a86:c.instructions+=2;goto B578a86;
case 0x578a8a:c.instructions+=1;goto B578a8a;
case 0x578a8f:goto L578a8f;
case 0x578a94:c.instructions+=2;goto B578a94;
case 0x578a96:c.instructions+=1;goto B578a96;
case 0x578a98:goto L578a98;
case 0x578a9c:c.instructions+=3;goto B578a9c;
case 0x578a9f:c.instructions+=2;goto B578a9f;
case 0x578aa3:c.instructions+=1;goto B578aa3;
case 0x578aa5:goto L578aa5;
case 0x578aa7:goto L578aa7;
case 0x578aa9:goto L578aa9;
case 0x578aac:c.instructions+=2;goto B578aac;
case 0x578aae:c.instructions+=1;goto B578aae;
case 0x578ab0:goto L578ab0;
case 0x578ab6:c.instructions+=4;goto B578ab6;
case 0x578abc:c.instructions+=3;goto B578abc;
case 0x578abf:c.instructions+=2;goto B578abf;
case 0x578ac1:c.instructions+=1;goto B578ac1;
case 0x578ac3:goto L578ac3;
case 0x578ac7:c.instructions+=1;goto B578ac7;
case 0x578ace:goto L578ace;
case 0x578ad4:c.instructions+=1;goto B578ad4;
case 0x578ad6:goto L578ad6;
case 0x578ad9:c.instructions+=2;goto B578ad9;
case 0x578adb:c.instructions+=1;goto B578adb;
case 0x578add:goto L578add;
case 0x578ae3:c.instructions+=4;goto B578ae3;
case 0x578ae9:c.instructions+=3;goto B578ae9;
case 0x578aec:c.instructions+=2;goto B578aec;
case 0x578aee:c.instructions+=1;goto B578aee;
case 0x578af0:goto L578af0;
case 0x578af7:c.instructions+=2;goto B578af7;
case 0x578af9:c.instructions+=1;goto B578af9;
case 0x578afd:goto L578afd;
case 0x578b03:c.instructions+=1;goto B578b03;
case 0x578b05:goto L578b05;
case 0x578b08:c.instructions+=2;goto B578b08;
case 0x578b0a:c.instructions+=1;goto B578b0a;
case 0x578b0c:goto L578b0c;
case 0x578b11:c.instructions+=6;goto B578b11;
case 0x578b17:c.instructions+=5;goto B578b17;
case 0x578b1d:c.instructions+=4;goto B578b1d;
case 0x578b20:c.instructions+=3;goto B578b20;
case 0x578b23:c.instructions+=2;goto B578b23;
case 0x578b25:c.instructions+=1;goto B578b25;
case 0x578b27:goto L578b27;
case 0x578b2e:c.instructions+=1;goto B578b2e;
case 0x578b35:goto L578b35;
case 0x578b3b:goto L578b3b;
case 0x578b40:c.instructions+=2;goto B578b40;
case 0x578b42:c.instructions+=1;goto B578b42;
case 0x578b44:goto L578b44;
case 0x578b48:c.instructions+=3;goto B578b48;
case 0x578b4b:c.instructions+=2;goto B578b4b;
case 0x578b4d:c.instructions+=1;goto B578b4d;
case 0x578b50:goto L578b50;
case 0x578b51:c.instructions+=2;goto B578b51;
case 0x578b53:c.instructions+=1;goto B578b53;
case 0x578b58:goto L578b58;
case 0x578b5b:c.instructions+=2;goto B578b5b;
case 0x578b5c:c.instructions+=1;goto B578b5c;
case 0x578b5e:goto L578b5e;
case 0x578b62:c.instructions+=1;goto B578b62;
case 0x578b68:goto L578b68;
case 0x578b69:c.instructions+=5;goto B578b69;
case 0x578b6a:c.instructions+=4;goto B578b6a;
case 0x578b6b:c.instructions+=3;goto B578b6b;
case 0x578b6c:c.instructions+=2;goto B578b6c;
case 0x578b6f:c.instructions+=1;goto B578b6f;
case 0x578b72:goto L578b72;
case 0x578b76:c.instructions+=3;goto B578b76;
case 0x578b78:c.instructions+=2;goto B578b78;
case 0x578b7a:c.instructions+=1;goto B578b7a;
case 0x578b80:goto L578b80;
case 0x578b82:goto L578b82;
case 0x578b86:goto L578b86;
case 0x578b88:goto L578b88;
case 0x578b8a:c.instructions+=1;goto B578b8a;
case 0x578b8c:goto L578b8c;
case 0x578b90:c.instructions+=3;goto B578b90;
case 0x578b94:c.instructions+=2;goto B578b94;
case 0x578b97:c.instructions+=1;goto B578b97;
case 0x578b99:goto L578b99;
case 0x578b9b:c.instructions+=3;goto B578b9b;
case 0x578b9c:c.instructions+=2;goto B578b9c;
case 0x578b9e:c.instructions+=1;goto B578b9e;
case 0x578ba0:goto L578ba0;
case 0x578ba4:goto L578ba4;
case 0x578ba7:c.instructions+=2;goto B578ba7;
case 0x578ba9:c.instructions+=1;goto B578ba9;
case 0x578bab:goto L578bab;
case 0x578bb1:c.instructions+=4;goto B578bb1;
case 0x578bb7:c.instructions+=3;goto B578bb7;
case 0x578bba:c.instructions+=2;goto B578bba;
case 0x578bbc:c.instructions+=1;goto B578bbc;
case 0x578bbe:goto L578bbe;
case 0x578bc5:goto L578bc5;
case 0x578bcb:c.instructions+=1;goto B578bcb;
case 0x578bcd:goto L578bcd;
case 0x578bd0:c.instructions+=2;goto B578bd0;
case 0x578bd2:c.instructions+=1;goto B578bd2;
case 0x578bd4:goto L578bd4;
case 0x578bd6:c.instructions+=6;goto B578bd6;
case 0x578bd8:c.instructions+=5;goto B578bd8;
case 0x578bda:c.instructions+=4;goto B578bda;
case 0x578bde:c.instructions+=3;goto B578bde;
case 0x578bdf:c.instructions+=2;goto B578bdf;
case 0x578be1:c.instructions+=1;goto B578be1;
case 0x578be6:goto L578be6;
case 0x578be8:goto L578be8;
case 0x578beb:c.instructions+=2;goto B578beb;
case 0x578bed:c.instructions+=1;goto B578bed;
case 0x578bef:goto L578bef;
case 0x578bf1:c.instructions+=9;goto B578bf1;
case 0x578bf3:c.instructions+=8;goto B578bf3;
case 0x578bf6:c.instructions+=7;goto B578bf6;
case 0x578bf8:c.instructions+=6;goto B578bf8;
case 0x578bfc:c.instructions+=5;goto B578bfc;
case 0x578bff:c.instructions+=4;goto B578bff;
case 0x578c00:c.instructions+=3;goto B578c00;
case 0x578c02:c.instructions+=2;goto B578c02;
case 0x578c06:c.instructions+=1;goto B578c06;
case 0x578c0b:goto L578c0b;
case 0x578c0d:c.instructions+=1;goto B578c0d;
case 0x578c11:goto L578c11;
case 0x578c15:c.instructions+=1;goto B578c15;
case 0x578c17:goto L578c17;
case 0x578c1b:c.instructions+=2;goto B578c1b;
case 0x578c1e:c.instructions+=1;goto B578c1e;
case 0x578c20:goto L578c20;
case 0x578c22:c.instructions+=3;goto B578c22;
case 0x578c23:c.instructions+=2;goto B578c23;
case 0x578c26:c.instructions+=1;goto B578c26;
case 0x578c28:goto L578c28;
case 0x578c2b:c.instructions+=3;goto B578c2b;
case 0x578c2d:c.instructions+=2;goto B578c2d;
case 0x578c31:c.instructions+=1;goto B578c31;
case 0x578c33:goto L578c33;
case 0x578c39:c.instructions+=4;goto B578c39;
case 0x578c3f:c.instructions+=3;goto B578c3f;
case 0x578c42:c.instructions+=2;goto B578c42;
case 0x578c44:c.instructions+=1;goto B578c44;
case 0x578c46:goto L578c46;
case 0x578c4d:goto L578c4d;
case 0x578c53:c.instructions+=1;goto B578c53;
case 0x578c55:goto L578c55;
case 0x578c58:c.instructions+=2;goto B578c58;
case 0x578c5a:c.instructions+=1;goto B578c5a;
case 0x578c5c:goto L578c5c;
case 0x578c5e:c.instructions+=6;goto B578c5e;
case 0x578c60:c.instructions+=5;goto B578c60;
case 0x578c62:c.instructions+=4;goto B578c62;
case 0x578c66:c.instructions+=3;goto B578c66;
case 0x578c67:c.instructions+=2;goto B578c67;
case 0x578c69:c.instructions+=1;goto B578c69;
case 0x578c6e:goto L578c6e;
case 0x578c72:c.instructions+=1;goto B578c72;
case 0x578c74:goto L578c74;
case 0x578c77:c.instructions+=2;goto B578c77;
case 0x578c79:c.instructions+=1;goto B578c79;
case 0x578c7b:goto L578c7b;
case 0x578c7d:c.instructions+=9;goto B578c7d;
case 0x578c7f:c.instructions+=8;goto B578c7f;
case 0x578c82:c.instructions+=7;goto B578c82;
case 0x578c84:c.instructions+=6;goto B578c84;
case 0x578c88:c.instructions+=5;goto B578c88;
case 0x578c8b:c.instructions+=4;goto B578c8b;
case 0x578c8c:c.instructions+=3;goto B578c8c;
case 0x578c8e:c.instructions+=2;goto B578c8e;
case 0x578c92:c.instructions+=1;goto B578c92;
case 0x578c97:goto L578c97;
case 0x578c9a:c.instructions+=2;goto B578c9a;
case 0x578c9c:c.instructions+=1;goto B578c9c;
case 0x578c9e:goto L578c9e;
case 0x578ca2:c.instructions+=5;goto B578ca2;
case 0x578ca4:c.instructions+=4;goto B578ca4;
case 0x578ca6:c.instructions+=3;goto B578ca6;
case 0x578ca9:c.instructions+=2;goto B578ca9;
case 0x578cab:c.instructions+=1;goto B578cab;
case 0x578cb0:goto L578cb0;
case 0x578cb1:c.instructions+=2;goto B578cb1;
case 0x578cb3:c.instructions+=1;goto B578cb3;
case 0x578cb8:goto L578cb8;
case 0x578cbb:c.instructions+=2;goto B578cbb;
case 0x578cbc:c.instructions+=1;goto B578cbc;
case 0x578cbe:goto L578cbe;
case 0x578cc2:c.instructions+=1;goto B578cc2;
case 0x578cc8:goto L578cc8;
case 0x578cc9:c.instructions+=5;goto B578cc9;
case 0x578cca:c.instructions+=4;goto B578cca;
case 0x578ccb:c.instructions+=3;goto B578ccb;
case 0x578ccc:c.instructions+=2;goto B578ccc;
case 0x578ccf:c.instructions+=1;goto B578ccf;
case 0x578ce0:goto L578ce0;
case 0x578ce1:c.instructions+=4;goto B578ce1;
case 0x578ce3:c.instructions+=3;goto B578ce3;
case 0x578ce6:c.instructions+=2;goto B578ce6;
case 0x578ce8:c.instructions+=1;goto B578ce8;
case 0x578cea:goto L578cea;
case 0x578cf0:goto L578cf0;
case 0x578cf4:c.instructions+=17;goto B578cf4;
case 0x578cf8:c.instructions+=16;goto B578cf8;
case 0x578cfa:c.instructions+=15;goto B578cfa;
case 0x578cfd:c.instructions+=14;goto B578cfd;
case 0x578d00:c.instructions+=13;goto B578d00;
case 0x578d03:c.instructions+=12;goto B578d03;
case 0x578d04:c.instructions+=11;goto B578d04;
case 0x578d08:c.instructions+=10;goto B578d08;
case 0x578d0c:c.instructions+=9;goto B578d0c;
case 0x578d10:c.instructions+=8;goto B578d10;
case 0x578d14:c.instructions+=7;goto B578d14;
case 0x578d16:c.instructions+=6;goto B578d16;
case 0x578d19:c.instructions+=5;goto B578d19;
case 0x578d1d:c.instructions+=4;goto B578d1d;
case 0x578d21:c.instructions+=3;goto B578d21;
case 0x578d27:c.instructions+=2;goto B578d27;
case 0x578d2a:c.instructions+=1;goto B578d2a;
case 0x578d2f:goto L578d2f;
case 0x578d32:c.instructions+=4;goto B578d32;
case 0x578d35:c.instructions+=3;goto B578d35;
case 0x578d37:c.instructions+=2;goto B578d37;
case 0x578d38:c.instructions+=1;goto B578d38;
case 0x578d3a:goto L578d3a;
case 0x578d3e:c.instructions+=2;goto B578d3e;
case 0x578d40:c.instructions+=1;goto B578d40;
case 0x578d42:goto L578d42;
case 0x578d47:c.instructions+=2;goto B578d47;
case 0x578d4a:c.instructions+=1;goto B578d4a;
case 0x578d4c:goto L578d4c;
case 0x578d4e:c.instructions+=1;goto B578d4e;
case 0x578d53:goto L578d53;
case 0x578d58:c.instructions+=2;goto B578d58;
case 0x578d5a:c.instructions+=1;goto B578d5a;
case 0x578d5c:goto L578d5c;
case 0x578d61:c.instructions+=1;goto B578d61;
case 0x578d66:goto L578d66;
case 0x578d69:c.instructions+=3;goto B578d69;
case 0x578d6a:c.instructions+=2;goto B578d6a;
case 0x578d6c:c.instructions+=1;goto B578d6c;
case 0x578d6e:goto L578d6e;
case 0x578d73:c.instructions+=1;goto B578d73;
case 0x578d78:goto L578d78;
case 0x578d7a:c.instructions+=2;goto B578d7a;
case 0x578d7d:c.instructions+=1;goto B578d7d;
case 0x578d7e:goto L578d7e;
case 0x578d85:goto L578d85;
case 0x578d86:c.instructions+=1;goto B578d86;
case 0x578d90:goto L578d90;
case 0x578d91:c.instructions+=10;goto B578d91;
case 0x578d93:c.instructions+=9;goto B578d93;
case 0x578d97:c.instructions+=8;goto B578d97;
case 0x578d9d:c.instructions+=7;goto B578d9d;
case 0x578da0:c.instructions+=6;goto B578da0;
case 0x578da4:c.instructions+=5;goto B578da4;
case 0x578da5:c.instructions+=4;goto B578da5;
case 0x578da9:c.instructions+=3;goto B578da9;
case 0x578dab:c.instructions+=2;goto B578dab;
case 0x578dae:c.instructions+=1;goto B578dae;
case 0x578db3:goto L578db3;
case 0x578db6:c.instructions+=4;goto B578db6;
case 0x578db9:c.instructions+=3;goto B578db9;
case 0x578dbb:c.instructions+=2;goto B578dbb;
case 0x578dbd:c.instructions+=1;goto B578dbd;
case 0x578dbf:goto L578dbf;
case 0x578dc3:c.instructions+=3;goto B578dc3;
case 0x578dc6:c.instructions+=2;goto B578dc6;
case 0x578dc8:c.instructions+=1;goto B578dc8;
case 0x578dca:goto L578dca;
case 0x578dce:c.instructions+=2;goto B578dce;
case 0x578dd0:c.instructions+=1;goto B578dd0;
case 0x578dd3:goto L578dd3;
case 0x578dd6:c.instructions+=1;goto B578dd6;
case 0x578dd8:goto L578dd8;
case 0x578dde:c.instructions+=1;goto B578dde;
case 0x578de0:goto L578de0;
case 0x578de4:goto L578de4;
case 0x578dea:goto L578dea;
case 0x578ded:c.instructions+=6;goto B578ded;
case 0x578df0:c.instructions+=5;goto B578df0;
case 0x578df2:c.instructions+=4;goto B578df2;
case 0x578df5:c.instructions+=3;goto B578df5;
case 0x578df7:c.instructions+=2;goto B578df7;
case 0x578dfa:c.instructions+=1;goto B578dfa;
case 0x578dfc:goto L578dfc;
case 0x578e03:goto L578e03;
case 0x578e04:c.instructions+=2;goto B578e04;
case 0x578e05:c.instructions+=1;goto B578e05;
case 0x578e10:goto L578e10;
case 0x578e11:c.instructions+=5;goto B578e11;
case 0x578e13:c.instructions+=4;goto B578e13;
case 0x578e16:c.instructions+=3;goto B578e16;
case 0x578e18:c.instructions+=2;goto B578e18;
case 0x578e1f:c.instructions+=1;goto B578e1f;
case 0x578e21:goto L578e21;
case 0x578e26:c.instructions+=6;goto B578e26;
case 0x578e27:c.instructions+=5;goto B578e27;
case 0x578e2a:c.instructions+=4;goto B578e2a;
case 0x578e30:c.instructions+=3;goto B578e30;
case 0x578e36:c.instructions+=2;goto B578e36;
case 0x578e3c:c.instructions+=1;goto B578e3c;
case 0x578e41:goto L578e41;
case 0x578e47:c.instructions+=4;goto B578e47;
case 0x578e4d:c.instructions+=3;goto B578e4d;
case 0x578e54:c.instructions+=2;goto B578e54;
case 0x578e55:c.instructions+=1;goto B578e55;
case 0x578e56:goto L578e56;
case 0x578e59:c.instructions+=1;goto B578e59;
case 0x578e5b:goto L578e5b;
case 0x578e5e:c.instructions+=6;goto B578e5e;
case 0x578e64:c.instructions+=5;goto B578e64;
case 0x578e6b:c.instructions+=4;goto B578e6b;
case 0x578e70:c.instructions+=3;goto B578e70;
case 0x578e71:c.instructions+=2;goto B578e71;
case 0x578e73:c.instructions+=1;goto B578e73;
case 0x578e75:goto L578e75;
case 0x578e77:c.instructions+=3;goto B578e77;
case 0x578e7c:c.instructions+=2;goto B578e7c;
case 0x578e83:c.instructions+=1;goto B578e83;
case 0x578e88:goto L578e88;
case 0x578e8b:goto L578e8b;
case 0x578e8c:c.instructions+=1;goto B578e8c;
case 0x578e90:goto L578e90;
case 0x578e93:c.instructions+=2;goto B578e93;
case 0x578e95:c.instructions+=1;goto B578e95;
case 0x578e97:goto L578e97;
case 0x578e98:c.instructions+=5;goto B578e98;
case 0x578e9e:c.instructions+=4;goto B578e9e;
case 0x578e9f:c.instructions+=3;goto B578e9f;
case 0x578ea5:c.instructions+=2;goto B578ea5;
case 0x578ea7:c.instructions+=1;goto B578ea7;
case 0x578ea9:goto L578ea9;
case 0x578eb0:goto L578eb0;
case 0x578eb3:c.instructions+=3;goto B578eb3;
case 0x578eb8:c.instructions+=2;goto B578eb8;
case 0x578eb9:c.instructions+=1;goto B578eb9;
case 0x578ebe:goto L578ebe;
case 0x578ec1:c.instructions+=2;goto B578ec1;
case 0x578ec3:c.instructions+=1;goto B578ec3;
case 0x578ec5:goto L578ec5;
case 0x578ec9:c.instructions+=2;goto B578ec9;
case 0x578ecf:c.instructions+=1;goto B578ecf;
case 0x578ed5:goto L578ed5;
case 0x578ed7:c.instructions+=2;goto B578ed7;
case 0x578ed9:c.instructions+=1;goto B578ed9;
case 0x578edb:goto L578edb;
case 0x578edc:c.instructions+=1;goto B578edc;
case 0x578edd:goto L578edd;
case 0x578ee0:goto L578ee0;
case 0x578ee5:c.instructions+=2;goto B578ee5;
case 0x578eea:c.instructions+=1;goto B578eea;
case 0x578eef:goto L578eef;
case 0x578ef0:goto L578ef0;
case 0x578ef3:c.instructions+=13;goto B578ef3;
case 0x578ef7:c.instructions+=12;goto B578ef7;
case 0x578ef8:c.instructions+=11;goto B578ef8;
case 0x578efc:c.instructions+=10;goto B578efc;
case 0x578efd:c.instructions+=9;goto B578efd;
case 0x578f03:c.instructions+=8;goto B578f03;
case 0x578f07:c.instructions+=7;goto B578f07;
case 0x578f0b:c.instructions+=6;goto B578f0b;
case 0x578f0c:c.instructions+=5;goto B578f0c;
case 0x578f10:c.instructions+=4;goto B578f10;
case 0x578f14:c.instructions+=3;goto B578f14;
case 0x578f18:c.instructions+=2;goto B578f18;
case 0x578f1c:c.instructions+=1;goto B578f1c;
case 0x578f22:goto L578f22;
case 0x578f28:c.instructions+=2;goto B578f28;
case 0x578f2a:c.instructions+=1;goto B578f2a;
case 0x578f30:goto L578f30;
case 0x578f36:c.instructions+=2;goto B578f36;
case 0x578f38:c.instructions+=1;goto B578f38;
case 0x578f3a:goto L578f3a;
case 0x578f3e:c.instructions+=2;goto B578f3e;
case 0x578f40:c.instructions+=1;goto B578f40;
case 0x578f42:goto L578f42;
case 0x578f48:c.instructions+=2;goto B578f48;
case 0x578f4a:c.instructions+=1;goto B578f4a;
case 0x578f4c:goto L578f4c;
case 0x578f4e:c.instructions+=7;goto B578f4e;
case 0x578f51:c.instructions+=6;goto B578f51;
case 0x578f52:c.instructions+=5;goto B578f52;
case 0x578f59:c.instructions+=4;goto B578f59;
case 0x578f60:c.instructions+=3;goto B578f60;
case 0x578f62:c.instructions+=2;goto B578f62;
case 0x578f63:c.instructions+=1;goto B578f63;
case 0x578f65:goto L578f65;
case 0x578f67:c.instructions+=1;goto B578f67;
case 0x578f69:goto L578f69;
case 0x578f6c:c.instructions+=1;goto B578f6c;
case 0x578f6e:goto L578f6e;
case 0x578f6f:c.instructions+=1;goto B578f6f;
case 0x578f75:goto L578f75;
case 0x578f7b:c.instructions+=2;goto B578f7b;
case 0x578f80:c.instructions+=1;goto B578f80;
case 0x578f82:goto L578f82;
case 0x578f85:c.instructions+=10;goto B578f85;
case 0x578f8c:c.instructions+=9;goto B578f8c;
case 0x578f8e:c.instructions+=8;goto B578f8e;
case 0x578f92:c.instructions+=7;goto B578f92;
case 0x578f95:c.instructions+=6;goto B578f95;
case 0x578f99:c.instructions+=5;goto B578f99;
case 0x578f9c:c.instructions+=4;goto B578f9c;
case 0x578fa0:c.instructions+=3;goto B578fa0;
case 0x578fa3:c.instructions+=2;goto B578fa3;
case 0x578fa9:c.instructions+=1;goto B578fa9;
case 0x578fab:goto L578fab;
case 0x578fb0:goto L578fb0;
case 0x578fb4:c.instructions+=2;goto B578fb4;
case 0x578fb5:c.instructions+=1;goto B578fb5;
case 0x578fba:goto L578fba;
case 0x578fbd:c.instructions+=5;goto B578fbd;
case 0x578fbe:c.instructions+=4;goto B578fbe;
case 0x578fbf:c.instructions+=3;goto B578fbf;
case 0x578fc0:c.instructions+=2;goto B578fc0;
case 0x578fc3:c.instructions+=1;goto B578fc3;
case 0x578fd0:goto L578fd0;
case 0x578fd1:c.instructions+=7;goto B578fd1;
case 0x578fd2:c.instructions+=6;goto B578fd2;
case 0x578fd3:c.instructions+=5;goto B578fd3;
case 0x578fd9:c.instructions+=4;goto B578fd9;
case 0x578fda:c.instructions+=3;goto B578fda;
case 0x578fe0:c.instructions+=2;goto B578fe0;
case 0x578fe2:c.instructions+=1;goto B578fe2;
case 0x578fe4:goto L578fe4;
case 0x578fe8:c.instructions+=6;goto B578fe8;
case 0x578fec:c.instructions+=5;goto B578fec;
case 0x578ff0:c.instructions+=4;goto B578ff0;
case 0x578ff3:c.instructions+=3;goto B578ff3;
case 0x578ff4:c.instructions+=2;goto B578ff4;
case 0x578ff5:c.instructions+=1;goto B578ff5;
case 0x578ffa:goto L578ffa;
case 0x578ffd:c.instructions+=2;goto B578ffd;
case 0x578fff:c.instructions+=1;goto B578fff;
default:missing_instruction(c.pc);}
B578001:L578001:{c.instructions+=6;NFSU2_TR(0x578001);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578005:{NFSU2_TR(0x578005);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578007:{NFSU2_TR(0x578007);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578008:{NFSU2_TR(0x578008);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57800f:{NFSU2_TR(0x57800f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578012:{NFSU2_TR(0x578012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578017ull));
TAIL_STATIC(0x4944d0u,494);
}
B578017:L578017:{c.instructions+=2;NFSU2_TR(0x578017);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578019:{NFSU2_TR(0x578019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57801eull));
TAIL_STATIC(0x490170u,490);
}
B57801e:L57801e:{c.instructions+=9;NFSU2_TR(0x57801e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578022:{NFSU2_TR(0x578022);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578026:{NFSU2_TR(0x578026);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578027:{NFSU2_TR(0x578027);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57802d:{NFSU2_TR(0x57802d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57802e:{NFSU2_TR(0x57802e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57802f:{NFSU2_TR(0x57802f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578030:{NFSU2_TR(0x578030);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578031:{NFSU2_TR(0x578031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578036ull));
TAIL_STATIC(0x5ed9b0u,5ed);
}
B578036:L578036:{c.instructions+=8;NFSU2_TR(0x578036);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57803a:{NFSU2_TR(0x57803a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57803e:{NFSU2_TR(0x57803e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578040:{NFSU2_TR(0x578040);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578041:{NFSU2_TR(0x578041);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578042:{NFSU2_TR(0x578042);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578044:{NFSU2_TR(0x578044);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578045:{NFSU2_TR(0x578045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57804aull));
TAIL_STATIC(0x494d60u,494);
}
B57804a:L57804a:{c.instructions+=7;NFSU2_TR(0x57804a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B57804d:{NFSU2_TR(0x57804d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57804e:{NFSU2_TR(0x57804e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57804f:{NFSU2_TR(0x57804f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B578050:{NFSU2_TR(0x578050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B578051:{NFSU2_TR(0x578051);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B578054:{NFSU2_TR(0x578054);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578060:L578060:{c.instructions+=5;NFSU2_TR(0x578060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B578063:{NFSU2_TR(0x578063);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B578068:{NFSU2_TR(0x578068);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57806a:{NFSU2_TR(0x57806a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57806e:{NFSU2_TR(0x57806e);
if(r1(R+518)){{goto L57807d;}}
}
B578070:L578070:{c.instructions+=3;NFSU2_TR(0x578070);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B578077:{NFSU2_TR(0x578077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57807b:{NFSU2_TR(0x57807b);
{goto L578085;}
}
B57807d:L57807d:{c.instructions+=1;NFSU2_TR(0x57807d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B578085:L578085:{c.instructions+=4;NFSU2_TR(0x578085);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578086:{NFSU2_TR(0x578086);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578087:{NFSU2_TR(0x578087);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57808f:{NFSU2_TR(0x57808f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578090:L578090:{c.instructions+=5;NFSU2_TR(0x578090);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578094:{NFSU2_TR(0x578094);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa28ull))));
}
B578099:{NFSU2_TR(0x578099);
w4(R+24,u32(s32(s16(r2(R+0)))));
}
B57809c:{NFSU2_TR(0x57809c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57809d:{NFSU2_TR(0x57809d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5780a2ull));
TAIL_STATIC(0x5d6d70u,5d6);
}
B5780a2:L5780a2:{c.instructions+=2;NFSU2_TR(0x5780a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5780a3:{NFSU2_TR(0x5780a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5780a8ull));
TAIL_STATIC(0x43db50u,43d);
}
B5780a8:L5780a8:{c.instructions+=7;NFSU2_TR(0x5780a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5780ac:{NFSU2_TR(0x5780ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5780af:{NFSU2_TR(0x5780af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5780b0:{NFSU2_TR(0x5780b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5780b1:{NFSU2_TR(0x5780b1);
w4(R+4,u32(0x883e70ull));
}
B5780b6:{NFSU2_TR(0x5780b6);
__builtin_memmove((R+28),(R+0),4);
}
B5780b8:{NFSU2_TR(0x5780b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5780bdull));
TAIL_STATIC(0x5db610u,5db);
}
B5780bd:L5780bd:{c.instructions+=7;NFSU2_TR(0x5780bd);
__builtin_memmove((R+12),(R+0),1);
}
B5780bf:{NFSU2_TR(0x5780bf);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B5780c1:{NFSU2_TR(0x5780c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5780c2:{NFSU2_TR(0x5780c2);
w4(R+4,u32(0x88f768ull));
}
B5780c7:{NFSU2_TR(0x5780c7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5780c9:{NFSU2_TR(0x5780c9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5780ca:{NFSU2_TR(0x5780ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5780cfull));
TAIL_STATIC(0x5d3c60u,5d3);
}
B5780cf:L5780cf:{c.instructions+=2;NFSU2_TR(0x5780cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5780d1:{NFSU2_TR(0x5780d1);
if(r1(R+518)){{goto L5780d6;}}
}
B5780d3:L5780d3:{c.instructions+=1;NFSU2_TR(0x5780d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5780d6:L5780d6:{c.instructions+=5;NFSU2_TR(0x5780d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5780da:{NFSU2_TR(0x5780da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5780db:{NFSU2_TR(0x5780db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5780de:{NFSU2_TR(0x5780de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5780e2:{NFSU2_TR(0x5780e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578090u);}goto L578090;}}
}
B5780e4:L5780e4:{c.instructions+=2;NFSU2_TR(0x5780e4);
w4(R+4,u32(0x88f298ull));
}
B5780e9:{NFSU2_TR(0x5780e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5780eeull));
TAIL_STATIC(0x5d4fe0u,5d4);
}
B5780ee:L5780ee:{c.instructions+=6;NFSU2_TR(0x5780ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5780f2:{NFSU2_TR(0x5780f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5780f3:{NFSU2_TR(0x5780f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5780f7:{NFSU2_TR(0x5780f7);
u8 U[4];
w4(U+0,u32(0x7a0794ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5780fc:{NFSU2_TR(0x5780fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5780fd:{NFSU2_TR(0x5780fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578102ull));
TAIL_STATIC(0x4400d0u,440);
}
B578102:L578102:{c.instructions+=3;NFSU2_TR(0x578102);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B578106:{NFSU2_TR(0x578106);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578107:{NFSU2_TR(0x578107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57810cull));
TAIL_STATIC(0x5d7400u,5d7);
}
B57810c:L57810c:{c.instructions+=4;NFSU2_TR(0x57810c);
__builtin_memmove((R+28),(R+0),4);
}
B57810e:{NFSU2_TR(0x57810e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B578111:{NFSU2_TR(0x578111);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578113:{NFSU2_TR(0x578113);
if(r1(R+518)){{goto L578161;}}
}
B578115:L578115:{c.instructions+=3;NFSU2_TR(0x578115);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B578119:{NFSU2_TR(0x578119);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57811a:{NFSU2_TR(0x57811a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57811full));
TAIL_STATIC(0x43db50u,43d);
}
B57811f:L57811f:{c.instructions+=5;NFSU2_TR(0x57811f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B578122:{NFSU2_TR(0x578122);
__builtin_memmove((R+24),(R+0),4);
}
B578124:{NFSU2_TR(0x578124);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578125:{NFSU2_TR(0x578125);
w4(R+4,u32(0x883e70ull));
}
B57812a:{NFSU2_TR(0x57812a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57812full));
TAIL_STATIC(0x5d7470u,5d7);
}
B57812f:L57812f:{c.instructions+=3;NFSU2_TR(0x57812f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578132:{NFSU2_TR(0x578132);
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
B578134:{NFSU2_TR(0x578134);
if(r1(R+518)){{goto L578149;}}
}
B578136:L578136:{c.instructions+=3;NFSU2_TR(0x578136);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578137:{NFSU2_TR(0x578137);
w4(R+4,u32(0x88f768ull));
}
B57813c:{NFSU2_TR(0x57813c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578141ull));
TAIL_STATIC(0x5d3c60u,5d3);
}
B578141:L578141:{c.instructions+=2;NFSU2_TR(0x578141);
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
B578143:{NFSU2_TR(0x578143);
if(r1(R+518)){{goto L578149;}}
}
B578145:L578145:{c.instructions+=1;NFSU2_TR(0x578145);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B578149:L578149:{c.instructions+=2;NFSU2_TR(0x578149);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57814a:{NFSU2_TR(0x57814a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57814full));
TAIL_STATIC(0x5db340u,5db);
}
B57814f:L57814f:{c.instructions+=4;NFSU2_TR(0x57814f);
__builtin_memmove((R+24),(R+0),4);
}
B578151:{NFSU2_TR(0x578151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B578154:{NFSU2_TR(0x578154);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578156:{NFSU2_TR(0x578156);
if(r1(R+518)){{goto L57815f;}}
}
B578158:L578158:{c.instructions+=2;NFSU2_TR(0x578158);
__builtin_memmove((R+4),(R+24),4);
}
B57815a:{NFSU2_TR(0x57815a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57815full));
TAIL_STATIC(0x5710a0u,571);
}
B57815f:L57815f:{c.instructions+=1;NFSU2_TR(0x57815f);
__builtin_memmove((R+0),(R+24),4);
}
B578161:L578161:{c.instructions+=7;NFSU2_TR(0x578161);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B578165:{NFSU2_TR(0x578165);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578168:{NFSU2_TR(0x578168);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57816a:{NFSU2_TR(0x57816a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57816e:{NFSU2_TR(0x57816e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57816f:{NFSU2_TR(0x57816f);
w4(R+4,u32(0x88f298ull));
}
B578174:{NFSU2_TR(0x578174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578179ull));
TAIL_STATIC(0x5d5010u,5d5);
}
B578179:L578179:{c.instructions+=6;NFSU2_TR(0x578179);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57817d:{NFSU2_TR(0x57817d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57817e:{NFSU2_TR(0x57817e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B578182:{NFSU2_TR(0x578182);
u8 U[4];
w4(U+0,u32(0x7a0780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578187:{NFSU2_TR(0x578187);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578188:{NFSU2_TR(0x578188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57818dull));
TAIL_STATIC(0x4400d0u,440);
}
B57818d:L57818d:{c.instructions+=3;NFSU2_TR(0x57818d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578191:{NFSU2_TR(0x578191);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578192:{NFSU2_TR(0x578192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578197ull));
TAIL_STATIC(0x5d7400u,5d7);
}
B578197:L578197:{c.instructions+=4;NFSU2_TR(0x578197);
__builtin_memmove((R+24),(R+0),4);
}
B578199:{NFSU2_TR(0x578199);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57819c:{NFSU2_TR(0x57819c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57819e:{NFSU2_TR(0x57819e);
if(r1(R+518)){{goto L5781ec;}}
}
B5781a0:L5781a0:{c.instructions+=3;NFSU2_TR(0x5781a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5781a4:{NFSU2_TR(0x5781a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5781a5:{NFSU2_TR(0x5781a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5781aaull));
TAIL_STATIC(0x43db50u,43d);
}
B5781aa:L5781aa:{c.instructions+=5;NFSU2_TR(0x5781aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5781ad:{NFSU2_TR(0x5781ad);
__builtin_memmove((R+28),(R+0),4);
}
B5781af:{NFSU2_TR(0x5781af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5781b0:{NFSU2_TR(0x5781b0);
w4(R+4,u32(0x883e70ull));
}
B5781b5:{NFSU2_TR(0x5781b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5781baull));
TAIL_STATIC(0x5d7470u,5d7);
}
B5781ba:L5781ba:{c.instructions+=3;NFSU2_TR(0x5781ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5781bd:{NFSU2_TR(0x5781bd);
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
B5781bf:{NFSU2_TR(0x5781bf);
if(r1(R+518)){{goto L5781d4;}}
}
B5781c1:L5781c1:{c.instructions+=3;NFSU2_TR(0x5781c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5781c2:{NFSU2_TR(0x5781c2);
w4(R+4,u32(0x88f768ull));
}
B5781c7:{NFSU2_TR(0x5781c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5781ccull));
TAIL_STATIC(0x5d3c60u,5d3);
}
B5781cc:L5781cc:{c.instructions+=2;NFSU2_TR(0x5781cc);
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
B5781ce:{NFSU2_TR(0x5781ce);
if(r1(R+518)){{goto L5781d4;}}
}
B5781d0:L5781d0:{c.instructions+=1;NFSU2_TR(0x5781d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5781d4:L5781d4:{c.instructions+=2;NFSU2_TR(0x5781d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5781d5:{NFSU2_TR(0x5781d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5781daull));
TAIL_STATIC(0x5db340u,5db);
}
B5781da:L5781da:{c.instructions+=4;NFSU2_TR(0x5781da);
__builtin_memmove((R+24),(R+0),4);
}
B5781dc:{NFSU2_TR(0x5781dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5781df:{NFSU2_TR(0x5781df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5781e1:{NFSU2_TR(0x5781e1);
if(r1(R+518)){{goto L5781ea;}}
}
B5781e3:L5781e3:{c.instructions+=2;NFSU2_TR(0x5781e3);
__builtin_memmove((R+4),(R+24),4);
}
B5781e5:{NFSU2_TR(0x5781e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5781eaull));
TAIL_STATIC(0x5710a0u,571);
}
B5781ea:L5781ea:{c.instructions+=1;NFSU2_TR(0x5781ea);
__builtin_memmove((R+0),(R+24),4);
}
B5781ec:L5781ec:{c.instructions+=6;NFSU2_TR(0x5781ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5781ee:{NFSU2_TR(0x5781ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5781f2:{NFSU2_TR(0x5781f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5781f3:{NFSU2_TR(0x5781f3);
w4(R+4,u32(0x88f298ull));
}
B5781f8:{NFSU2_TR(0x5781f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5781fb:{NFSU2_TR(0x5781fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578200ull));
TAIL_STATIC(0x5d5010u,5d5);
}
B578200:L578200:{c.instructions+=3;NFSU2_TR(0x578200);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B578205:{NFSU2_TR(0x578205);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578207:{NFSU2_TR(0x578207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57829b;}}
}
B57820d:L57820d:{c.instructions+=3;NFSU2_TR(0x57820d);
__builtin_memmove((R+0),gp(0x850078),4);
}
B578212:{NFSU2_TR(0x578212);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B578215:{NFSU2_TR(0x578215);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57824a;}}
}
B578217:L578217:{c.instructions+=4;NFSU2_TR(0x578217);
__builtin_memmove((R+4),gp(0x862838),4);
}
B57821d:{NFSU2_TR(0x57821d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57821f:{NFSU2_TR(0x57821f);
w4(R+0,u32(0x7a0774ull));
}
B578224:{NFSU2_TR(0x578224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578239;}}
}
B578226:L578226:{c.instructions+=4;NFSU2_TR(0x578226);
__builtin_memmove((R+0),gp(0x86347d),1);
}
B57822b:{NFSU2_TR(0x57822b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57822d:{NFSU2_TR(0x57822d);
w4(R+0,u32(0x7a0760ull));
}
B578232:{NFSU2_TR(0x578232);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578239;}}
}
B578234:L578234:{c.instructions+=1;NFSU2_TR(0x578234);
w4(R+0,u32(0x7a074cull));
}
B578239:L578239:{c.instructions+=2;NFSU2_TR(0x578239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57823a:{NFSU2_TR(0x57823a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57823full));
TAIL_STATIC(0x571160u,571);
}
B57823f:L57823f:{c.instructions+=3;NFSU2_TR(0x57823f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578242:{NFSU2_TR(0x578242);
__builtin_memmove((R+0),gp(0x850078),4);
}
B578247:{NFSU2_TR(0x578247);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57824a:L57824a:{c.instructions+=3;NFSU2_TR(0x57824a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57824f:{NFSU2_TR(0x57824f);
__builtin_memmove((R+4),gp(0x862838),4);
}
B578255:{NFSU2_TR(0x578255);
if(r1(R+518)){{goto L57825c;}}
}
B578257:L578257:{c.instructions+=2;NFSU2_TR(0x578257);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57825a:{NFSU2_TR(0x57825a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57826a;}}
}
B57825c:L57825c:{c.instructions+=2;NFSU2_TR(0x57825c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B578263:{NFSU2_TR(0x578263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57826a;}}
}
B578265:L578265:{c.instructions+=1;NFSU2_TR(0x578265);
w4(R+4,u32(0x5ull));
}
B57826a:L57826a:{c.instructions+=5;NFSU2_TR(0x57826a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57826b:{NFSU2_TR(0x57826b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57826f:{NFSU2_TR(0x57826f);
u8 U[4];
w4(U+0,u32(0x7a0738ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578274:{NFSU2_TR(0x578274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578275:{NFSU2_TR(0x578275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57827aull));
TAIL_STATIC(0x4400d0u,440);
}
B57827a:L57827a:{c.instructions+=3;NFSU2_TR(0x57827a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57827e:{NFSU2_TR(0x57827e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57827f:{NFSU2_TR(0x57827f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578284ull));
TAIL_STATIC(0x571160u,571);
}
B578284:L578284:{c.instructions+=7;NFSU2_TR(0x578284);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B578287:{NFSU2_TR(0x578287);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578289:{NFSU2_TR(0x578289);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57828d:{NFSU2_TR(0x57828d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57828e:{NFSU2_TR(0x57828e);
w4(R+4,u32(0x88f298ull));
}
B578293:{NFSU2_TR(0x578293);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578296:{NFSU2_TR(0x578296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57829bull));
TAIL_STATIC(0x5d5010u,5d5);
}
B57829b:L57829b:{c.instructions+=5;NFSU2_TR(0x57829b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57829c:{NFSU2_TR(0x57829c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57829d:{NFSU2_TR(0x57829d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57829e:{NFSU2_TR(0x57829e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5782a1:{NFSU2_TR(0x5782a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5782b0:L5782b0:{c.instructions+=3;NFSU2_TR(0x5782b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5782b1:{NFSU2_TR(0x5782b1);
w4(R+4,u32(0x8654a8ull));
}
B5782b6:{NFSU2_TR(0x5782b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5782bbull));
TAIL_STATIC(0x5711d0u,571);
}
B5782bb:L5782bb:{c.instructions+=2;NFSU2_TR(0x5782bb);
w4(R+4,u32(0x8654a8ull));
}
B5782c0:{NFSU2_TR(0x5782c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5782c5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578060u);}goto L578060;}
}
B5782c5:L5782c5:{c.instructions+=4;NFSU2_TR(0x5782c5);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5782ca:{NFSU2_TR(0x5782ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5782cc:{NFSU2_TR(0x5782cc);
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
B5782ce:{NFSU2_TR(0x5782ce);
if(r1(R+518)){{goto L5782e1;}}
}
B5782d0:L5782d0:{c.instructions+=2;NFSU2_TR(0x5782d0);
__builtin_memmove((R+4),(R+24),4);
}
B5782d2:{NFSU2_TR(0x5782d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5782d7ull));
TAIL_STATIC(0x5f54a0u,5f5);
}
B5782d7:L5782d7:{c.instructions+=3;NFSU2_TR(0x5782d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5782d9:{NFSU2_TR(0x5782d9);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
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
B5782df:{NFSU2_TR(0x5782df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5782d0u);}goto L5782d0;}}
}
B5782e1:L5782e1:{c.instructions+=2;NFSU2_TR(0x5782e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5782e2:{NFSU2_TR(0x5782e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5782f0:L5782f0:{c.instructions+=5;NFSU2_TR(0x5782f0);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5782f6:{NFSU2_TR(0x5782f6);
s4(0x8654a4,u32(0x6ull));
}
B578300:{NFSU2_TR(0x578300);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578303:{NFSU2_TR(0x578303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578304:{NFSU2_TR(0x578304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578309ull));
TAIL_STATIC(0x5f43d0u,5f4);
}
B578309:L578309:{c.instructions+=5;NFSU2_TR(0x578309);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B57830f:{NFSU2_TR(0x57830f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578312:{NFSU2_TR(0x578312);
__builtin_memmove((R+4),gp(0x890118),4);
}
B578318:{NFSU2_TR(0x578318);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578319:{NFSU2_TR(0x578319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57831eull));
TAIL_STATIC(0x5fc900u,5fc);
}
B57831e:L57831e:{c.instructions+=1;NFSU2_TR(0x57831e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578320:L578320:{c.instructions+=4;NFSU2_TR(0x578320);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578323:{NFSU2_TR(0x578323);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B578325:{NFSU2_TR(0x578325);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B578327:{NFSU2_TR(0x578327);
if(r1(R+518)){{goto L57832c;}}
}
B578329:L578329:{c.instructions+=1;NFSU2_TR(0x578329);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57832c:L57832c:{c.instructions+=4;NFSU2_TR(0x57832c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B57832f:{NFSU2_TR(0x57832f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x7a07b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B578336:{NFSU2_TR(0x578336);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x581a20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57833d:{NFSU2_TR(0x57833d);
if(r1(R+518)){{goto L578342;}}
}
B57833f:L57833f:{c.instructions+=1;NFSU2_TR(0x57833f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578342:L578342:{c.instructions+=1;NFSU2_TR(0x578342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578350:L578350:{c.instructions+=5;NFSU2_TR(0x578350);
__builtin_memmove((R+4),gp(0x7f63e0),1);
}
B578356:{NFSU2_TR(0x578356);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B578358:{NFSU2_TR(0x578358);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B57835a:{NFSU2_TR(0x57835a);
__builtin_memmove((R+4),gp(0x865498),1);
}
B578360:{NFSU2_TR(0x578360);
if(r1(R+518)){{goto L578380;}}
}
B578362:L578362:{c.instructions+=2;NFSU2_TR(0x578362);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B578364:{NFSU2_TR(0x578364);
if(r1(R+518)){{goto L57836b;}}
}
B578366:L578366:{c.instructions+=1;NFSU2_TR(0x578366);
__builtin_memmove(gp(0x865498),(R+0),1);
}
B57836b:L57836b:{c.instructions+=3;NFSU2_TR(0x57836b);
s4(0x865484,u32(0x580090ull));
}
B578375:{NFSU2_TR(0x578375);
s4(0x86548c,u32(0x7a07e0ull));
}
B57837f:{NFSU2_TR(0x57837f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578380:L578380:{c.instructions+=2;NFSU2_TR(0x578380);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B578382:{NFSU2_TR(0x578382);
if(r1(R+518)){{goto L578389;}}
}
B578384:L578384:{c.instructions+=1;NFSU2_TR(0x578384);
__builtin_memmove(gp(0x865498),(R+0),1);
}
B578389:L578389:{c.instructions+=3;NFSU2_TR(0x578389);
s4(0x865484,u32(0x578350ull));
}
B578393:{NFSU2_TR(0x578393);
s4(0x86548c,u32(0x7a07c4ull));
}
B57839d:{NFSU2_TR(0x57839d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5783a0:L5783a0:{c.instructions+=5;NFSU2_TR(0x5783a0);
__builtin_memmove((R+0),gp(0x865498),1);
}
B5783a5:{NFSU2_TR(0x5783a5);
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
B5783a7:{NFSU2_TR(0x5783a7);
s4(0x86548c,u32(0x7a07c4ull));
}
B5783b1:{NFSU2_TR(0x5783b1);
s4(0x865484,u32(0x578350ull));
}
B5783bb:{NFSU2_TR(0x5783bb);
if(r1(R+518)){{goto L5783c4;}}
}
B5783bd:L5783bd:{c.instructions+=1;NFSU2_TR(0x5783bd);
s1(0x865498,u8(0x0ull));
}
B5783c4:L5783c4:{c.instructions+=1;NFSU2_TR(0x5783c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5783d0:L5783d0:{c.instructions+=4;NFSU2_TR(0x5783d0);
__builtin_memmove((R+4),gp(0x865484),4);
}
B5783d6:{NFSU2_TR(0x5783d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5783d8:{NFSU2_TR(0x5783d8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5783da:{NFSU2_TR(0x5783da);
if(r1(R+518)){{goto L5783e1;}}
}
B5783dc:L5783dc:{c.instructions+=1;NFSU2_TR(0x5783dc);
__builtin_memmove(gp(0x865484),(R+0),4);
}
B5783e1:L5783e1:{c.instructions+=6;NFSU2_TR(0x5783e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5783e2:{NFSU2_TR(0x5783e2);
u8 U[4];
w4(U+0,u32(0x5783a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5783e7:{NFSU2_TR(0x5783e7);
s1(0x865498,u8(0x1ull));
}
B5783ee:{NFSU2_TR(0x5783ee);
s4(0x86549c,u32(0x7a07fcull));
}
B5783f8:{NFSU2_TR(0x5783f8);
__builtin_memmove(gp(0x8654a0),(R+0),4);
}
B5783fd:{NFSU2_TR(0x5783fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578402ull));
TAIL_STATIC(0x486e70u,486);
}
B578402:L578402:{c.instructions+=2;NFSU2_TR(0x578402);
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
B578405:{NFSU2_TR(0x578405);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578410:L578410:{c.instructions+=9;NFSU2_TR(0x578410);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B578416:{NFSU2_TR(0x578416);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578417:{NFSU2_TR(0x578417);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B57841b:{NFSU2_TR(0x57841b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57841c:{NFSU2_TR(0x57841c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B578420:{NFSU2_TR(0x578420);
__builtin_memmove((R+24),(R+4),4);
}
B578422:{NFSU2_TR(0x578422);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B578424:{NFSU2_TR(0x578424);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B578426:{NFSU2_TR(0x578426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57842bull));
TAIL_STATIC(0x75bed4u,75b);
}
B57842b:L57842b:{c.instructions+=5;NFSU2_TR(0x57842b);
__builtin_memmove((R+4),(R+24),4);
}
B57842d:{NFSU2_TR(0x57842d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578431:{NFSU2_TR(0x578431);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578435:{NFSU2_TR(0x578435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578436:{NFSU2_TR(0x578436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57843bull));
TAIL_STATIC(0x571710u,571);
}
B57843b:L57843b:{c.instructions+=3;NFSU2_TR(0x57843b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57843e:{NFSU2_TR(0x57843e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+4,u8(u32(r1(R+4))|u32(r1(U+4))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B578441:{NFSU2_TR(0x578441);
if(r1(R+518)){{goto L578454;}}
}
B578443:L578443:{c.instructions+=5;NFSU2_TR(0x578443);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B578448:{NFSU2_TR(0x578448);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57844c:{NFSU2_TR(0x57844c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B578450:{NFSU2_TR(0x578450);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B578452:{NFSU2_TR(0x578452);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B578454:L578454:{c.instructions+=4;NFSU2_TR(0x578454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578455:{NFSU2_TR(0x578455);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B578457:{NFSU2_TR(0x578457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578458:{NFSU2_TR(0x578458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578460:L578460:{c.instructions+=14;NFSU2_TR(0x578460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578461:{NFSU2_TR(0x578461);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578462:{NFSU2_TR(0x578462);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578463:{NFSU2_TR(0x578463);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578464:{NFSU2_TR(0x578464);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B578468:{NFSU2_TR(0x578468);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57846b:{NFSU2_TR(0x57846b);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B57846d:{NFSU2_TR(0x57846d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B578473:{NFSU2_TR(0x578473);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578474:{NFSU2_TR(0x578474);
__builtin_memmove((R+28),(R+4),4);
}
B578476:{NFSU2_TR(0x578476);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57847a:{NFSU2_TR(0x57847a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57847c:{NFSU2_TR(0x57847c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57847f:{NFSU2_TR(0x57847f);
if(r1(R+514)){{goto L5784e2;}}
}
B578481:L578481:{c.instructions+=5;NFSU2_TR(0x578481);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B578484:{NFSU2_TR(0x578484);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57848a:{NFSU2_TR(0x57848a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57848c:{NFSU2_TR(0x57848c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57848f:{NFSU2_TR(0x57848f);
if(r1(R+514)){{goto L5784e2;}}
}
B578491:L578491:{c.instructions+=5;NFSU2_TR(0x578491);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B578494:{NFSU2_TR(0x578494);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57849a:{NFSU2_TR(0x57849a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57849c:{NFSU2_TR(0x57849c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57849f:{NFSU2_TR(0x57849f);
if(r1(R+514)){{goto L5784e2;}}
}
B5784a1:L5784a1:{c.instructions+=2;NFSU2_TR(0x5784a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3f800000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5784a8:{NFSU2_TR(0x5784a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5784e2;}}
}
B5784aa:L5784aa:{c.instructions+=5;NFSU2_TR(0x5784aa);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5784ad:{NFSU2_TR(0x5784ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5784b3:{NFSU2_TR(0x5784b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5784b5:{NFSU2_TR(0x5784b5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5784b8:{NFSU2_TR(0x5784b8);
if(r1(R+514)){{goto L5784dc;}}
}
B5784ba:L5784ba:{c.instructions+=5;NFSU2_TR(0x5784ba);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5784bd:{NFSU2_TR(0x5784bd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5784c3:{NFSU2_TR(0x5784c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5784c5:{NFSU2_TR(0x5784c5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5784c8:{NFSU2_TR(0x5784c8);
if(r1(R+514)){{goto L5784dc;}}
}
B5784ca:L5784ca:{c.instructions+=6;NFSU2_TR(0x5784ca);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5784cd:{NFSU2_TR(0x5784cd);
w1(R+12,u8(0x1ull));
}
B5784cf:{NFSU2_TR(0x5784cf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5784d5:{NFSU2_TR(0x5784d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5784d7:{NFSU2_TR(0x5784d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5784da:{NFSU2_TR(0x5784da);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5784de;}}
}
B5784dc:L5784dc:{c.instructions+=1;NFSU2_TR(0x5784dc);
w1(R+12,u8(0x2ull));
}
B5784de:L5784de:{c.instructions+=1;NFSU2_TR(0x5784de);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5784e2:L5784e2:{c.instructions+=3;NFSU2_TR(0x5784e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5784e5:{NFSU2_TR(0x5784e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5784e7:{NFSU2_TR(0x5784e7);
if(r1(R+518)){{goto L57850d;}}
}
B5784e9:L5784e9:{c.instructions+=5;NFSU2_TR(0x5784e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5784ef:{NFSU2_TR(0x5784ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5784f5:{NFSU2_TR(0x5784f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5784f8:{NFSU2_TR(0x5784f8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5784fa:{NFSU2_TR(0x5784fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578503;}}
}
B5784fc:L5784fc:{c.instructions+=1;NFSU2_TR(0x5784fc);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578503:L578503:{c.instructions+=3;NFSU2_TR(0x578503);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578509:{NFSU2_TR(0x578509);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57850b:{NFSU2_TR(0x57850b);
{goto L578524;}
}
B57850d:L57850d:{c.instructions+=8;NFSU2_TR(0x57850d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57850f:{NFSU2_TR(0x57850f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578510:{NFSU2_TR(0x578510);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578512:{NFSU2_TR(0x578512);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578514:{NFSU2_TR(0x578514);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578518:{NFSU2_TR(0x578518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578519:{NFSU2_TR(0x578519);
__builtin_memmove((R+4),(R+28),4);
}
B57851b:{NFSU2_TR(0x57851b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578520ull));
TAIL_STATIC(0x571640u,571);
}
B578520:L578520:{c.instructions+=1;NFSU2_TR(0x578520);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B578524:L578524:{c.instructions+=3;NFSU2_TR(0x578524);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578526:{NFSU2_TR(0x578526);
__builtin_memmove((R+4),(R+28),4);
}
B578528:{NFSU2_TR(0x578528);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57853d;}}
}
B57852a:L57852a:{c.instructions+=5;NFSU2_TR(0x57852a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57852b:{NFSU2_TR(0x57852b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57852d:{NFSU2_TR(0x57852d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57852f:{NFSU2_TR(0x57852f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578530:{NFSU2_TR(0x578530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578535ull));
TAIL_STATIC(0x571640u,571);
}
B578535:L578535:{c.instructions+=6;NFSU2_TR(0x578535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578536:{NFSU2_TR(0x578536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578537:{NFSU2_TR(0x578537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B578538:{NFSU2_TR(0x578538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B578539:{NFSU2_TR(0x578539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57853a:{NFSU2_TR(0x57853a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57853d:L57853d:{c.instructions+=2;NFSU2_TR(0x57853d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57853e:{NFSU2_TR(0x57853e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578543ull));
TAIL_STATIC(0x402050u,402);
}
B578543:L578543:{c.instructions+=4;NFSU2_TR(0x578543);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B578546:{NFSU2_TR(0x578546);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578547:{NFSU2_TR(0x578547);
__builtin_memmove((R+4),(R+28),4);
}
B578549:{NFSU2_TR(0x578549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57854eull));
TAIL_STATIC(0x402050u,402);
}
B57854e:L57854e:{c.instructions+=4;NFSU2_TR(0x57854e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B578551:{NFSU2_TR(0x578551);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578552:{NFSU2_TR(0x578552);
__builtin_memmove((R+4),(R+28),4);
}
B578554:{NFSU2_TR(0x578554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578559ull));
TAIL_STATIC(0x402050u,402);
}
B578559:L578559:{c.instructions+=6;NFSU2_TR(0x578559);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57855c:{NFSU2_TR(0x57855c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57855f:{NFSU2_TR(0x57855f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578562:{NFSU2_TR(0x578562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578565:{NFSU2_TR(0x578565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57856c:{NFSU2_TR(0x57856c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578581;}}
}
B57856e:L57856e:{c.instructions+=4;NFSU2_TR(0x57856e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B578571:{NFSU2_TR(0x578571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578572:{NFSU2_TR(0x578572);
__builtin_memmove((R+4),(R+28),4);
}
B578574:{NFSU2_TR(0x578574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578579ull));
TAIL_STATIC(0x402050u,402);
}
B578579:L578579:{c.instructions+=6;NFSU2_TR(0x578579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57857a:{NFSU2_TR(0x57857a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57857b:{NFSU2_TR(0x57857b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57857c:{NFSU2_TR(0x57857c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57857d:{NFSU2_TR(0x57857d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57857e:{NFSU2_TR(0x57857e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578581:L578581:{c.instructions+=9;NFSU2_TR(0x578581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578582:{NFSU2_TR(0x578582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578585:{NFSU2_TR(0x578585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578588:{NFSU2_TR(0x578588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57858b:{NFSU2_TR(0x57858b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57858c:{NFSU2_TR(0x57858c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57858d:{NFSU2_TR(0x57858d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57858e:{NFSU2_TR(0x57858e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57858f:{NFSU2_TR(0x57858f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5785a0:L5785a0:{c.instructions+=11;NFSU2_TR(0x5785a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5785a3:{NFSU2_TR(0x5785a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5785a4:{NFSU2_TR(0x5785a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5785a5:{NFSU2_TR(0x5785a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5785a6:{NFSU2_TR(0x5785a6);
__builtin_memmove((R+24),(R+4),4);
}
B5785a8:{NFSU2_TR(0x5785a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5785ab:{NFSU2_TR(0x5785ab);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5785ad:{NFSU2_TR(0x5785ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5785af:{NFSU2_TR(0x5785af);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5785b3:{NFSU2_TR(0x5785b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5785b4:{NFSU2_TR(0x5785b4);
if(r1(R+518)){{goto L5787d3;}}
}
B5785ba:L5785ba:{c.instructions+=2;NFSU2_TR(0x5785ba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5785bc:{NFSU2_TR(0x5785bc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5789f3;}}
}
B5785c2:L5785c2:{c.instructions+=1;NFSU2_TR(0x5785c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5785c6:L5785c6:{c.instructions+=3;NFSU2_TR(0x5785c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5785c9:{NFSU2_TR(0x5785c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5785cb:{NFSU2_TR(0x5785cb);
if(r1(R+518)){{goto L5785f3;}}
}
B5785cd:L5785cd:{c.instructions+=5;NFSU2_TR(0x5785cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5785d3:{NFSU2_TR(0x5785d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5785d9:{NFSU2_TR(0x5785d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5785dc:{NFSU2_TR(0x5785dc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5785de:{NFSU2_TR(0x5785de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5785eb;}}
}
B5785e0:L5785e0:{c.instructions+=2;NFSU2_TR(0x5785e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5785e4:{NFSU2_TR(0x5785e4);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5785eb:L5785eb:{c.instructions+=2;NFSU2_TR(0x5785eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5785f1:{NFSU2_TR(0x5785f1);
{goto L578633;}
}
B5785f3:L5785f3:{c.instructions+=3;NFSU2_TR(0x5785f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5785f6:{NFSU2_TR(0x5785f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5785f8:{NFSU2_TR(0x5785f8);
if(r1(R+518)){{goto L57860e;}}
}
B5785fa:L5785fa:{c.instructions+=7;NFSU2_TR(0x5785fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5785fc:{NFSU2_TR(0x5785fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5785fe:{NFSU2_TR(0x5785fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578600:{NFSU2_TR(0x578600);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578604:{NFSU2_TR(0x578604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578605:{NFSU2_TR(0x578605);
__builtin_memmove((R+4),(R+24),4);
}
B578607:{NFSU2_TR(0x578607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57860cull));
TAIL_STATIC(0x5715b0u,571);
}
B57860c:L57860c:{c.instructions+=1;NFSU2_TR(0x57860c);
{goto L578633;}
}
B57860e:L57860e:{c.instructions+=3;NFSU2_TR(0x57860e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578611:{NFSU2_TR(0x578611);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578613:{NFSU2_TR(0x578613);
if(r1(R+518)){{goto L578633;}}
}
B578615:L578615:{c.instructions+=10;NFSU2_TR(0x578615);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B57861a:{NFSU2_TR(0x57861a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57861c:{NFSU2_TR(0x57861c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57861e:{NFSU2_TR(0x57861e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578620:{NFSU2_TR(0x578620);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B578624:{NFSU2_TR(0x578624);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B578627:{NFSU2_TR(0x578627);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578628:{NFSU2_TR(0x578628);
__builtin_memmove((R+4),(R+24),4);
}
B57862a:{NFSU2_TR(0x57862a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57862e:{NFSU2_TR(0x57862e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578633ull));
TAIL_STATIC(0x571550u,571);
}
B578633:L578633:{c.instructions+=3;NFSU2_TR(0x578633);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B578638:{NFSU2_TR(0x578638);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57863a:{NFSU2_TR(0x57863a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57865f;}}
}
B57863c:L57863c:{c.instructions+=8;NFSU2_TR(0x57863c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578640:{NFSU2_TR(0x578640);
__builtin_memmove((R+12),(R+0),2);
}
B578643:{NFSU2_TR(0x578643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B578646:{NFSU2_TR(0x578646);
__builtin_memmove((R+4),(R+8),4);
}
B578648:{NFSU2_TR(0x578648);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B57864b:{NFSU2_TR(0x57864b);
__builtin_memmove((R+12),(R+0),2);
}
B57864e:{NFSU2_TR(0x57864e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B578650:{NFSU2_TR(0x578650);
__builtin_memmove((R+0),(R+12),4);
}
B578652:L578652:{c.instructions+=1;NFSU2_TR(0x578652);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L578654;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578652u);}goto L578652;}
}
B578654:L578654:{c.instructions+=1;NFSU2_TR(0x578654);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))+u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B578656:L578656:{c.instructions+=1;NFSU2_TR(0x578656);
u8 U[19];
w1(U+18,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+18)){{goto L578659;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578656u);}goto L578656;}
}
B578659:L578659:{c.instructions+=2;NFSU2_TR(0x578659);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57865d:{NFSU2_TR(0x57865d);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B57865f:L57865f:{c.instructions+=3;NFSU2_TR(0x57865f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578662:{NFSU2_TR(0x578662);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578664:{NFSU2_TR(0x578664);
if(r1(R+518)){{goto L57868c;}}
}
B578666:L578666:{c.instructions+=5;NFSU2_TR(0x578666);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57866c:{NFSU2_TR(0x57866c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578672:{NFSU2_TR(0x578672);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B578675:{NFSU2_TR(0x578675);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578677:{NFSU2_TR(0x578677);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578684;}}
}
B578679:L578679:{c.instructions+=2;NFSU2_TR(0x578679);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57867d:{NFSU2_TR(0x57867d);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578684:L578684:{c.instructions+=2;NFSU2_TR(0x578684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57868a:{NFSU2_TR(0x57868a);
{goto L5786f1;}
}
B57868c:L57868c:{c.instructions+=3;NFSU2_TR(0x57868c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57868f:{NFSU2_TR(0x57868f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578691:{NFSU2_TR(0x578691);
if(r1(R+518)){{goto L5786bb;}}
}
B578693:L578693:{c.instructions+=5;NFSU2_TR(0x578693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578699:{NFSU2_TR(0x578699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57869f:{NFSU2_TR(0x57869f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5786a2:{NFSU2_TR(0x5786a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5786a4:{NFSU2_TR(0x5786a4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5786b3;}}
}
B5786a6:L5786a6:{c.instructions+=3;NFSU2_TR(0x5786a6);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5786ad:{NFSU2_TR(0x5786ad);
__builtin_memmove((R+0),(R+4),4);
}
B5786af:{NFSU2_TR(0x5786af);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5786b3:L5786b3:{c.instructions+=2;NFSU2_TR(0x5786b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5786b9:{NFSU2_TR(0x5786b9);
{goto L5786f1;}
}
B5786bb:L5786bb:{c.instructions+=3;NFSU2_TR(0x5786bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5786be:{NFSU2_TR(0x5786be);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5786c0:{NFSU2_TR(0x5786c0);
if(r1(R+518)){{goto L5786f1;}}
}
B5786c2:L5786c2:{c.instructions+=7;NFSU2_TR(0x5786c2);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5786c7:{NFSU2_TR(0x5786c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5786cd:{NFSU2_TR(0x5786cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5786d3:{NFSU2_TR(0x5786d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5786d6:{NFSU2_TR(0x5786d6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B5786d9:{NFSU2_TR(0x5786d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5786db:{NFSU2_TR(0x5786db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5786eb;}}
}
B5786dd:L5786dd:{c.instructions+=2;NFSU2_TR(0x5786dd);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5786e4:{NFSU2_TR(0x5786e4);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+1),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5786eb:L5786eb:{c.instructions+=1;NFSU2_TR(0x5786eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5786f1:L5786f1:{c.instructions+=3;NFSU2_TR(0x5786f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5786f6:{NFSU2_TR(0x5786f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5786f8:{NFSU2_TR(0x5786f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5787bf;}}
}
B5786fe:L5786fe:{c.instructions+=1;NFSU2_TR(0x5786fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578702:L578702:{c.instructions+=3;NFSU2_TR(0x578702);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578705:{NFSU2_TR(0x578705);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578707:{NFSU2_TR(0x578707);
if(r1(R+518)){{goto L578737;}}
}
B578709:L578709:{c.instructions+=5;NFSU2_TR(0x578709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57870f:{NFSU2_TR(0x57870f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578715:{NFSU2_TR(0x578715);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B578718:{NFSU2_TR(0x578718);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57871a:{NFSU2_TR(0x57871a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5787a9;}}
}
B578720:L578720:{c.instructions+=5;NFSU2_TR(0x578720);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B578724:{NFSU2_TR(0x578724);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B578727:{NFSU2_TR(0x578727);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57872e:{NFSU2_TR(0x57872e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578735:{NFSU2_TR(0x578735);
{goto L5787a9;}
}
B578737:L578737:{c.instructions+=3;NFSU2_TR(0x578737);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57873a:{NFSU2_TR(0x57873a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57873c:{NFSU2_TR(0x57873c);
if(r1(R+518)){{goto L578770;}}
}
B57873e:L57873e:{c.instructions+=5;NFSU2_TR(0x57873e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578744:{NFSU2_TR(0x578744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57874a:{NFSU2_TR(0x57874a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57874d:{NFSU2_TR(0x57874d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57874f:{NFSU2_TR(0x57874f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L578768;}}
}
B578751:L578751:{c.instructions+=5;NFSU2_TR(0x578751);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B578758:{NFSU2_TR(0x578758);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B57875b:{NFSU2_TR(0x57875b);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B578762:{NFSU2_TR(0x578762);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578766:{NFSU2_TR(0x578766);
__builtin_memmove((R+0),(R+4),4);
}
B578768:L578768:{c.instructions+=2;NFSU2_TR(0x578768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57876e:{NFSU2_TR(0x57876e);
{goto L5787af;}
}
B578770:L578770:{c.instructions+=3;NFSU2_TR(0x578770);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578773:{NFSU2_TR(0x578773);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578775:{NFSU2_TR(0x578775);
if(r1(R+518)){{goto L5787af;}}
}
B578777:L578777:{c.instructions+=10;NFSU2_TR(0x578777);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B57877b:{NFSU2_TR(0x57877b);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B578780:{NFSU2_TR(0x578780);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B578786:{NFSU2_TR(0x578786);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B578789:{NFSU2_TR(0x578789);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B57878c:{NFSU2_TR(0x57878c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B57878e:{NFSU2_TR(0x57878e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578794:{NFSU2_TR(0x578794);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B578797:{NFSU2_TR(0x578797);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578799:{NFSU2_TR(0x578799);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5787a9;}}
}
B57879b:L57879b:{c.instructions+=2;NFSU2_TR(0x57879b);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5787a2:{NFSU2_TR(0x5787a2);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+5),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5787a9:L5787a9:{c.instructions+=1;NFSU2_TR(0x5787a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5787af:L5787af:{c.instructions+=5;NFSU2_TR(0x5787af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5787b3:{NFSU2_TR(0x5787b3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5787b4:{NFSU2_TR(0x5787b4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5787b5:{NFSU2_TR(0x5787b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5787b9:{NFSU2_TR(0x5787b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578702u);}goto L578702;}}
}
B5787bf:L5787bf:{c.instructions+=2;NFSU2_TR(0x5787bf);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5787c3:{NFSU2_TR(0x5787c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5785c6u);}goto L5785c6;}}
}
B5787c9:L5787c9:{c.instructions+=6;NFSU2_TR(0x5787c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5787ca:{NFSU2_TR(0x5787ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5787cb:{NFSU2_TR(0x5787cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5787cc:{NFSU2_TR(0x5787cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5787cd:{NFSU2_TR(0x5787cd);
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
B5787d0:{NFSU2_TR(0x5787d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5787d3:L5787d3:{c.instructions+=2;NFSU2_TR(0x5787d3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5787d5:{NFSU2_TR(0x5787d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5789f3;}}
}
B5787db:L5787db:{c.instructions+=2;NFSU2_TR(0x5787db);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5787df:{NFSU2_TR(0x5787df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5787e3:L5787e3:{c.instructions+=5;NFSU2_TR(0x5787e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5787e7:{NFSU2_TR(0x5787e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5787eb:{NFSU2_TR(0x5787eb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5787ed:{NFSU2_TR(0x5787ed);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+28))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5787f0:{NFSU2_TR(0x5787f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578809;}}
}
B5787f2:L5787f2:{c.instructions+=2;NFSU2_TR(0x5787f2);
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
}
B5787f4:{NFSU2_TR(0x5787f4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L578809;}}
}
B5787f6:L5787f6:{c.instructions+=2;NFSU2_TR(0x5787f6);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5787fa:{NFSU2_TR(0x5787fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578809;}}
}
B5787fc:L5787fc:{c.instructions+=5;NFSU2_TR(0x5787fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578800:{NFSU2_TR(0x578800);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B578802:{NFSU2_TR(0x578802);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B578803:{NFSU2_TR(0x578803);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+28))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B578807:{NFSU2_TR(0x578807);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5787f2u);}goto L5787f2;}}
}
B578809:L578809:{c.instructions+=3;NFSU2_TR(0x578809);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57880c:{NFSU2_TR(0x57880c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57880e:{NFSU2_TR(0x57880e);
if(r1(R+518)){{goto L578832;}}
}
B578810:L578810:{c.instructions+=5;NFSU2_TR(0x578810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578816:{NFSU2_TR(0x578816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57881c:{NFSU2_TR(0x57881c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57881f:{NFSU2_TR(0x57881f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578821:{NFSU2_TR(0x578821);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57882a;}}
}
B578823:L578823:{c.instructions+=1;NFSU2_TR(0x578823);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57882a:L57882a:{c.instructions+=2;NFSU2_TR(0x57882a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578830:{NFSU2_TR(0x578830);
{goto L578870;}
}
B578832:L578832:{c.instructions+=3;NFSU2_TR(0x578832);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B578835:{NFSU2_TR(0x578835);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578837:{NFSU2_TR(0x578837);
if(r1(R+518)){{goto L57884d;}}
}
B578839:L578839:{c.instructions+=7;NFSU2_TR(0x578839);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57883b:{NFSU2_TR(0x57883b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57883d:{NFSU2_TR(0x57883d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57883f:{NFSU2_TR(0x57883f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B578843:{NFSU2_TR(0x578843);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578844:{NFSU2_TR(0x578844);
__builtin_memmove((R+4),(R+24),4);
}
B578846:{NFSU2_TR(0x578846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57884bull));
TAIL_STATIC(0x5715b0u,571);
}
B57884b:L57884b:{c.instructions+=1;NFSU2_TR(0x57884b);
{goto L578870;}
}
B57884d:L57884d:{c.instructions+=3;NFSU2_TR(0x57884d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B578850:{NFSU2_TR(0x578850);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578852:{NFSU2_TR(0x578852);
if(r1(R+518)){{goto L578870;}}
}
B578854:L578854:{c.instructions+=10;NFSU2_TR(0x578854);
w4(R+0,u32(r1(R+0)));
}
B578857:{NFSU2_TR(0x578857);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578859:{NFSU2_TR(0x578859);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B57885c:{NFSU2_TR(0x57885c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57885e:{NFSU2_TR(0x57885e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578862:{NFSU2_TR(0x578862);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578864:{NFSU2_TR(0x578864);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578868:{NFSU2_TR(0x578868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578869:{NFSU2_TR(0x578869);
__builtin_memmove((R+4),(R+24),4);
}
B57886b:{NFSU2_TR(0x57886b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578870ull));
TAIL_STATIC(0x571550u,571);
}
B578870:L578870:{c.instructions+=7;NFSU2_TR(0x578870);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578874:{NFSU2_TR(0x578874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B578877:{NFSU2_TR(0x578877);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B578879:{NFSU2_TR(0x578879);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+28))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B57887c:{NFSU2_TR(0x57887c);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578880:{NFSU2_TR(0x578880);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578884:{NFSU2_TR(0x578884);
if(r1(R+518)){{goto L5788a5;}}
}
B578886:L578886:{c.instructions+=2;NFSU2_TR(0x578886);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0xffull))));
}
B578889:{NFSU2_TR(0x578889);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5788a1;}}
}
B57888b:L57888b:{c.instructions+=2;NFSU2_TR(0x57888b);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57888f:{NFSU2_TR(0x57888f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5788a1;}}
}
B578891:L578891:{c.instructions+=6;NFSU2_TR(0x578891);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B578893:{NFSU2_TR(0x578893);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B578894:{NFSU2_TR(0x578894);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+28))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B578898:{NFSU2_TR(0x578898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B57889b:{NFSU2_TR(0x57889b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57889f:{NFSU2_TR(0x57889f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578886u);}goto L578886;}}
}
B5788a1:L5788a1:{c.instructions+=1;NFSU2_TR(0x5788a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5788a5:L5788a5:{c.instructions+=3;NFSU2_TR(0x5788a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5788a8:{NFSU2_TR(0x5788a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5788aa:{NFSU2_TR(0x5788aa);
if(r1(R+518)){{goto L5788ce;}}
}
B5788ac:L5788ac:{c.instructions+=5;NFSU2_TR(0x5788ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5788b2:{NFSU2_TR(0x5788b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5788b8:{NFSU2_TR(0x5788b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5788bb:{NFSU2_TR(0x5788bb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5788bd:{NFSU2_TR(0x5788bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5788c6;}}
}
B5788bf:L5788bf:{c.instructions+=1;NFSU2_TR(0x5788bf);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5788c6:L5788c6:{c.instructions+=2;NFSU2_TR(0x5788c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5788cc:{NFSU2_TR(0x5788cc);
{goto L578910;}
}
B5788ce:L5788ce:{c.instructions+=3;NFSU2_TR(0x5788ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5788d1:{NFSU2_TR(0x5788d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5788d3:{NFSU2_TR(0x5788d3);
if(r1(R+518)){{goto L5788ed;}}
}
B5788d5:L5788d5:{c.instructions+=7;NFSU2_TR(0x5788d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5788d7:{NFSU2_TR(0x5788d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5788d9:{NFSU2_TR(0x5788d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5788db:{NFSU2_TR(0x5788db);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5788df:{NFSU2_TR(0x5788df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5788e0:{NFSU2_TR(0x5788e0);
__builtin_memmove((R+4),(R+24),4);
}
B5788e2:{NFSU2_TR(0x5788e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5788e7ull));
TAIL_STATIC(0x5715b0u,571);
}
B5788e7:L5788e7:{c.instructions+=2;NFSU2_TR(0x5788e7);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5788eb:{NFSU2_TR(0x5788eb);
{goto L578910;}
}
B5788ed:L5788ed:{c.instructions+=3;NFSU2_TR(0x5788ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5788f0:{NFSU2_TR(0x5788f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5788f2:{NFSU2_TR(0x5788f2);
if(r1(R+518)){{goto L578910;}}
}
B5788f4:L5788f4:{c.instructions+=10;NFSU2_TR(0x5788f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5788f6:{NFSU2_TR(0x5788f6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5788f8:{NFSU2_TR(0x5788f8);
w4(R+0,u32(r1(R+12)));
}
B5788fb:{NFSU2_TR(0x5788fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5788fd:{NFSU2_TR(0x5788fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B578901:{NFSU2_TR(0x578901);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B578904:{NFSU2_TR(0x578904);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578905:{NFSU2_TR(0x578905);
__builtin_memmove((R+4),(R+24),4);
}
B578907:{NFSU2_TR(0x578907);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57890b:{NFSU2_TR(0x57890b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578910ull));
TAIL_STATIC(0x571550u,571);
}
B578910:L578910:{c.instructions+=3;NFSU2_TR(0x578910);
w4(R+0,u32(r1(R+12)));
}
B578913:{NFSU2_TR(0x578913);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578915:{NFSU2_TR(0x578915);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5789e9;}}
}
B57891b:L57891b:{c.instructions+=6;NFSU2_TR(0x57891b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57891f:{NFSU2_TR(0x57891f);
__builtin_memmove((R+4),(R+20),4);
}
B578921:{NFSU2_TR(0x578921);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B578923:{NFSU2_TR(0x578923);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B578926:{NFSU2_TR(0x578926);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57892a:{NFSU2_TR(0x57892a);
__builtin_memmove((R+12),(R+12),4);
}
B578930:L578930:{c.instructions+=3;NFSU2_TR(0x578930);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578933:{NFSU2_TR(0x578933);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578935:{NFSU2_TR(0x578935);
if(r1(R+518)){{goto L578963;}}
}
B578937:L578937:{c.instructions+=5;NFSU2_TR(0x578937);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57893d:{NFSU2_TR(0x57893d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578943:{NFSU2_TR(0x578943);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578946:{NFSU2_TR(0x578946);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578948:{NFSU2_TR(0x578948);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5789d1;}}
}
B57894e:L57894e:{c.instructions+=5;NFSU2_TR(0x57894e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B578951:{NFSU2_TR(0x578951);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B578953:{NFSU2_TR(0x578953);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57895a:{NFSU2_TR(0x57895a);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578961:{NFSU2_TR(0x578961);
{goto L5789d1;}
}
B578963:L578963:{c.instructions+=3;NFSU2_TR(0x578963);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578966:{NFSU2_TR(0x578966);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578968:{NFSU2_TR(0x578968);
if(r1(R+518)){{goto L57899a;}}
}
B57896a:L57896a:{c.instructions+=5;NFSU2_TR(0x57896a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578970:{NFSU2_TR(0x578970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578976:{NFSU2_TR(0x578976);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578979:{NFSU2_TR(0x578979);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57897b:{NFSU2_TR(0x57897b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L578992;}}
}
B57897d:L57897d:{c.instructions+=5;NFSU2_TR(0x57897d);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B578984:{NFSU2_TR(0x578984);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B578986:{NFSU2_TR(0x578986);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B57898d:{NFSU2_TR(0x57898d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578990:{NFSU2_TR(0x578990);
__builtin_memmove((R+0),(R+28),4);
}
B578992:L578992:{c.instructions+=2;NFSU2_TR(0x578992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578998:{NFSU2_TR(0x578998);
{goto L5789d7;}
}
B57899a:L57899a:{c.instructions+=3;NFSU2_TR(0x57899a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57899d:{NFSU2_TR(0x57899d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57899f:{NFSU2_TR(0x57899f);
if(r1(R+518)){{goto L5789d7;}}
}
B5789a1:L5789a1:{c.instructions+=10;NFSU2_TR(0x5789a1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B5789a4:{NFSU2_TR(0x5789a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5789a8:{NFSU2_TR(0x5789a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5789ae:{NFSU2_TR(0x5789ae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B5789b1:{NFSU2_TR(0x5789b1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5789b4:{NFSU2_TR(0x5789b4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5789b6:{NFSU2_TR(0x5789b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5789bc:{NFSU2_TR(0x5789bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5789bf:{NFSU2_TR(0x5789bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5789c1:{NFSU2_TR(0x5789c1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5789d1;}}
}
B5789c3:L5789c3:{c.instructions+=2;NFSU2_TR(0x5789c3);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5789ca:{NFSU2_TR(0x5789ca);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+5),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5789d1:L5789d1:{c.instructions+=1;NFSU2_TR(0x5789d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5789d7:L5789d7:{c.instructions+=5;NFSU2_TR(0x5789d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5789db:{NFSU2_TR(0x5789db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5789de:{NFSU2_TR(0x5789de);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5789df:{NFSU2_TR(0x5789df);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5789e3:{NFSU2_TR(0x5789e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578930u);}goto L578930;}}
}
B5789e9:L5789e9:{c.instructions+=2;NFSU2_TR(0x5789e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5789ed:{NFSU2_TR(0x5789ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5787e3u);}goto L5787e3;}}
}
B5789f3:L5789f3:{c.instructions+=6;NFSU2_TR(0x5789f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5789f4:{NFSU2_TR(0x5789f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5789f5:{NFSU2_TR(0x5789f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5789f6:{NFSU2_TR(0x5789f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5789f7:{NFSU2_TR(0x5789f7);
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
B5789fa:{NFSU2_TR(0x5789fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578a00:L578a00:{c.instructions+=9;NFSU2_TR(0x578a00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B578a03:{NFSU2_TR(0x578a03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a04:{NFSU2_TR(0x578a04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a05:{NFSU2_TR(0x578a05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a06:{NFSU2_TR(0x578a06);
__builtin_memmove((R+24),(R+4),4);
}
B578a08:{NFSU2_TR(0x578a08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578a0b:{NFSU2_TR(0x578a0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578a0d:{NFSU2_TR(0x578a0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a0e:{NFSU2_TR(0x578a0e);
if(r1(R+518)){{goto L578b72;}}
}
B578a14:L578a14:{c.instructions+=4;NFSU2_TR(0x578a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578a18:{NFSU2_TR(0x578a18);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B578a1a:{NFSU2_TR(0x578a1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578a1c:{NFSU2_TR(0x578a1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578cc8;}}
}
B578a22:L578a22:{c.instructions+=3;NFSU2_TR(0x578a22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578a25:{NFSU2_TR(0x578a25);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578a27:{NFSU2_TR(0x578a27);
if(r1(R+518)){{goto L578a4f;}}
}
B578a29:L578a29:{c.instructions+=5;NFSU2_TR(0x578a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578a2f:{NFSU2_TR(0x578a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578a35:{NFSU2_TR(0x578a35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B578a38:{NFSU2_TR(0x578a38);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578a3a:{NFSU2_TR(0x578a3a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578a47;}}
}
B578a3c:L578a3c:{c.instructions+=2;NFSU2_TR(0x578a3c);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B578a40:{NFSU2_TR(0x578a40);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578a47:L578a47:{c.instructions+=2;NFSU2_TR(0x578a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578a4d:{NFSU2_TR(0x578a4d);
{goto L578a8f;}
}
B578a4f:L578a4f:{c.instructions+=3;NFSU2_TR(0x578a4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578a52:{NFSU2_TR(0x578a52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578a54:{NFSU2_TR(0x578a54);
if(r1(R+518)){{goto L578a6a;}}
}
B578a56:L578a56:{c.instructions+=7;NFSU2_TR(0x578a56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a58:{NFSU2_TR(0x578a58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a5a:{NFSU2_TR(0x578a5a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a5c:{NFSU2_TR(0x578a5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578a60:{NFSU2_TR(0x578a60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a61:{NFSU2_TR(0x578a61);
__builtin_memmove((R+4),(R+24),4);
}
B578a63:{NFSU2_TR(0x578a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578a68ull));
TAIL_STATIC(0x5715b0u,571);
}
B578a68:L578a68:{c.instructions+=1;NFSU2_TR(0x578a68);
{goto L578a8f;}
}
B578a6a:L578a6a:{c.instructions+=3;NFSU2_TR(0x578a6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578a6d:{NFSU2_TR(0x578a6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578a6f:{NFSU2_TR(0x578a6f);
if(r1(R+518)){{goto L578a8f;}}
}
B578a71:L578a71:{c.instructions+=10;NFSU2_TR(0x578a71);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B578a76:{NFSU2_TR(0x578a76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a78:{NFSU2_TR(0x578a78);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a7a:{NFSU2_TR(0x578a7a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a7c:{NFSU2_TR(0x578a7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B578a80:{NFSU2_TR(0x578a80);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B578a83:{NFSU2_TR(0x578a83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578a84:{NFSU2_TR(0x578a84);
__builtin_memmove((R+4),(R+24),4);
}
B578a86:{NFSU2_TR(0x578a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578a8a:{NFSU2_TR(0x578a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578a8full));
TAIL_STATIC(0x571550u,571);
}
B578a8f:L578a8f:{c.instructions+=3;NFSU2_TR(0x578a8f);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B578a94:{NFSU2_TR(0x578a94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578a96:{NFSU2_TR(0x578a96);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578aa9;}}
}
B578a98:L578a98:{c.instructions+=4;NFSU2_TR(0x578a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578a9c:{NFSU2_TR(0x578a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B578a9f:{NFSU2_TR(0x578a9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578aa3:{NFSU2_TR(0x578aa3);
__builtin_memmove((R+4),(R+8),4);
}
B578aa5:L578aa5:{c.instructions+=1;NFSU2_TR(0x578aa5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L578aa7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578aa5u);}goto L578aa5;}
}
B578aa7:L578aa7:{c.instructions+=1;NFSU2_TR(0x578aa7);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B578aa9:L578aa9:{c.instructions+=3;NFSU2_TR(0x578aa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578aac:{NFSU2_TR(0x578aac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578aae:{NFSU2_TR(0x578aae);
if(r1(R+518)){{goto L578ad6;}}
}
B578ab0:L578ab0:{c.instructions+=5;NFSU2_TR(0x578ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578ab6:{NFSU2_TR(0x578ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578abc:{NFSU2_TR(0x578abc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B578abf:{NFSU2_TR(0x578abf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578ac1:{NFSU2_TR(0x578ac1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578ace;}}
}
B578ac3:L578ac3:{c.instructions+=2;NFSU2_TR(0x578ac3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B578ac7:{NFSU2_TR(0x578ac7);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578ace:L578ace:{c.instructions+=2;NFSU2_TR(0x578ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578ad4:{NFSU2_TR(0x578ad4);
{goto L578b3b;}
}
B578ad6:L578ad6:{c.instructions+=3;NFSU2_TR(0x578ad6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578ad9:{NFSU2_TR(0x578ad9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578adb:{NFSU2_TR(0x578adb);
if(r1(R+518)){{goto L578b05;}}
}
B578add:L578add:{c.instructions+=5;NFSU2_TR(0x578add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578ae3:{NFSU2_TR(0x578ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578ae9:{NFSU2_TR(0x578ae9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B578aec:{NFSU2_TR(0x578aec);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B578aee:{NFSU2_TR(0x578aee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L578afd;}}
}
B578af0:L578af0:{c.instructions+=3;NFSU2_TR(0x578af0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B578af7:{NFSU2_TR(0x578af7);
__builtin_memmove((R+0),(R+4),4);
}
B578af9:{NFSU2_TR(0x578af9);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578afd:L578afd:{c.instructions+=2;NFSU2_TR(0x578afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578b03:{NFSU2_TR(0x578b03);
{goto L578b3b;}
}
B578b05:L578b05:{c.instructions+=3;NFSU2_TR(0x578b05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578b08:{NFSU2_TR(0x578b08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578b0a:{NFSU2_TR(0x578b0a);
if(r1(R+518)){{goto L578b3b;}}
}
B578b0c:L578b0c:{c.instructions+=7;NFSU2_TR(0x578b0c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B578b11:{NFSU2_TR(0x578b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578b17:{NFSU2_TR(0x578b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B578b1d:{NFSU2_TR(0x578b1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B578b20:{NFSU2_TR(0x578b20);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B578b23:{NFSU2_TR(0x578b23);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578b25:{NFSU2_TR(0x578b25);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578b35;}}
}
B578b27:L578b27:{c.instructions+=2;NFSU2_TR(0x578b27);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578b2e:{NFSU2_TR(0x578b2e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+1),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578b35:L578b35:{c.instructions+=1;NFSU2_TR(0x578b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578b3b:L578b3b:{c.instructions+=3;NFSU2_TR(0x578b3b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B578b40:{NFSU2_TR(0x578b40);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578b42:{NFSU2_TR(0x578b42);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578b5e;}}
}
B578b44:L578b44:{c.instructions+=4;NFSU2_TR(0x578b44);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578b48:{NFSU2_TR(0x578b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B578b4b:{NFSU2_TR(0x578b4b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B578b4d:{NFSU2_TR(0x578b4d);
__builtin_memmove((R+4),(R+4),4);
}
B578b50:L578b50:{c.instructions+=3;NFSU2_TR(0x578b50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578b51:{NFSU2_TR(0x578b51);
__builtin_memmove((R+4),(R+24),4);
}
B578b53:{NFSU2_TR(0x578b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578b58ull));
TAIL_STATIC(0x571770u,571);
}
B578b58:L578b58:{c.instructions+=3;NFSU2_TR(0x578b58);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B578b5b:{NFSU2_TR(0x578b5b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B578b5c:{NFSU2_TR(0x578b5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578b50u);}goto L578b50;}}
}
B578b5e:L578b5e:{c.instructions+=2;NFSU2_TR(0x578b5e);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B578b62:{NFSU2_TR(0x578b62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578a22u);}goto L578a22;}}
}
B578b68:L578b68:{c.instructions+=6;NFSU2_TR(0x578b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578b69:{NFSU2_TR(0x578b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578b6a:{NFSU2_TR(0x578b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B578b6b:{NFSU2_TR(0x578b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B578b6c:{NFSU2_TR(0x578b6c);
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
B578b6f:{NFSU2_TR(0x578b6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578b72:L578b72:{c.instructions+=4;NFSU2_TR(0x578b72);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578b76:{NFSU2_TR(0x578b76);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B578b78:{NFSU2_TR(0x578b78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578b7a:{NFSU2_TR(0x578b7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578cc8;}}
}
B578b80:L578b80:{c.instructions+=1;NFSU2_TR(0x578b80);
{goto L578b86;}
}
B578b82:L578b82:{c.instructions+=1;NFSU2_TR(0x578b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578b86:L578b86:{c.instructions+=1;NFSU2_TR(0x578b86);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B578b88:L578b88:{c.instructions+=2;NFSU2_TR(0x578b88);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578b8a:{NFSU2_TR(0x578b8a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578ba0;}}
}
B578b8c:L578b8c:{c.instructions+=4;NFSU2_TR(0x578b8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578b90:{NFSU2_TR(0x578b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B578b94:{NFSU2_TR(0x578b94);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B578b97:{NFSU2_TR(0x578b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578ba4;}}
}
B578b99:L578b99:{c.instructions+=4;NFSU2_TR(0x578b99);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B578b9b:{NFSU2_TR(0x578b9b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B578b9c:{NFSU2_TR(0x578b9c);
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
}
B578b9e:{NFSU2_TR(0x578b9e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578b88u);}goto L578b88;}}
}
B578ba0:L578ba0:{c.instructions+=1;NFSU2_TR(0x578ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B578ba4:L578ba4:{c.instructions+=3;NFSU2_TR(0x578ba4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B578ba7:{NFSU2_TR(0x578ba7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578ba9:{NFSU2_TR(0x578ba9);
if(r1(R+518)){{goto L578bcd;}}
}
B578bab:L578bab:{c.instructions+=5;NFSU2_TR(0x578bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578bb1:{NFSU2_TR(0x578bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B578bb7:{NFSU2_TR(0x578bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B578bba:{NFSU2_TR(0x578bba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578bbc:{NFSU2_TR(0x578bbc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578bc5;}}
}
B578bbe:L578bbe:{c.instructions+=1;NFSU2_TR(0x578bbe);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578bc5:L578bc5:{c.instructions+=2;NFSU2_TR(0x578bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578bcb:{NFSU2_TR(0x578bcb);
{goto L578c0b;}
}
B578bcd:L578bcd:{c.instructions+=3;NFSU2_TR(0x578bcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B578bd0:{NFSU2_TR(0x578bd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578bd2:{NFSU2_TR(0x578bd2);
if(r1(R+518)){{goto L578be8;}}
}
B578bd4:L578bd4:{c.instructions+=7;NFSU2_TR(0x578bd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578bd6:{NFSU2_TR(0x578bd6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578bd8:{NFSU2_TR(0x578bd8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578bda:{NFSU2_TR(0x578bda);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578bde:{NFSU2_TR(0x578bde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578bdf:{NFSU2_TR(0x578bdf);
__builtin_memmove((R+4),(R+24),4);
}
B578be1:{NFSU2_TR(0x578be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578be6ull));
TAIL_STATIC(0x5715b0u,571);
}
B578be6:L578be6:{c.instructions+=1;NFSU2_TR(0x578be6);
{goto L578c0b;}
}
B578be8:L578be8:{c.instructions+=3;NFSU2_TR(0x578be8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B578beb:{NFSU2_TR(0x578beb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578bed:{NFSU2_TR(0x578bed);
if(r1(R+518)){{goto L578c0b;}}
}
B578bef:L578bef:{c.instructions+=10;NFSU2_TR(0x578bef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578bf1:{NFSU2_TR(0x578bf1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578bf3:{NFSU2_TR(0x578bf3);
w4(R+0,u32(r1(R+0)));
}
B578bf6:{NFSU2_TR(0x578bf6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578bf8:{NFSU2_TR(0x578bf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B578bfc:{NFSU2_TR(0x578bfc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B578bff:{NFSU2_TR(0x578bff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c00:{NFSU2_TR(0x578c00);
__builtin_memmove((R+4),(R+24),4);
}
B578c02:{NFSU2_TR(0x578c02);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578c06:{NFSU2_TR(0x578c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578c0bull));
TAIL_STATIC(0x571550u,571);
}
B578c0b:L578c0b:{c.instructions+=2;NFSU2_TR(0x578c0b);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B578c0d:{NFSU2_TR(0x578c0d);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578c11:L578c11:{c.instructions+=2;NFSU2_TR(0x578c11);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B578c15:{NFSU2_TR(0x578c15);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578c28;}}
}
B578c17:L578c17:{c.instructions+=3;NFSU2_TR(0x578c17);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578c1b:{NFSU2_TR(0x578c1b);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B578c1e:{NFSU2_TR(0x578c1e);
if(r1(R+518)){{goto L578c28;}}
}
B578c20:L578c20:{c.instructions+=4;NFSU2_TR(0x578c20);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B578c22:{NFSU2_TR(0x578c22);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B578c23:{NFSU2_TR(0x578c23);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0xffull))));
}
B578c26:{NFSU2_TR(0x578c26);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578c11u);}goto L578c11;}}
}
B578c28:L578c28:{c.instructions+=4;NFSU2_TR(0x578c28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578c2b:{NFSU2_TR(0x578c2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578c2d:{NFSU2_TR(0x578c2d);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578c31:{NFSU2_TR(0x578c31);
if(r1(R+518)){{goto L578c55;}}
}
B578c33:L578c33:{c.instructions+=5;NFSU2_TR(0x578c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578c39:{NFSU2_TR(0x578c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578c3f:{NFSU2_TR(0x578c3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B578c42:{NFSU2_TR(0x578c42);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B578c44:{NFSU2_TR(0x578c44);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578c4d;}}
}
B578c46:L578c46:{c.instructions+=1;NFSU2_TR(0x578c46);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B578c4d:L578c4d:{c.instructions+=2;NFSU2_TR(0x578c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578c53:{NFSU2_TR(0x578c53);
{goto L578c97;}
}
B578c55:L578c55:{c.instructions+=3;NFSU2_TR(0x578c55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578c58:{NFSU2_TR(0x578c58);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578c5a:{NFSU2_TR(0x578c5a);
if(r1(R+518)){{goto L578c74;}}
}
B578c5c:L578c5c:{c.instructions+=7;NFSU2_TR(0x578c5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c5e:{NFSU2_TR(0x578c5e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c60:{NFSU2_TR(0x578c60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c62:{NFSU2_TR(0x578c62);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B578c66:{NFSU2_TR(0x578c66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c67:{NFSU2_TR(0x578c67);
__builtin_memmove((R+4),(R+24),4);
}
B578c69:{NFSU2_TR(0x578c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578c6eull));
TAIL_STATIC(0x5715b0u,571);
}
B578c6e:L578c6e:{c.instructions+=2;NFSU2_TR(0x578c6e);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B578c72:{NFSU2_TR(0x578c72);
{goto L578c97;}
}
B578c74:L578c74:{c.instructions+=3;NFSU2_TR(0x578c74);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578c77:{NFSU2_TR(0x578c77);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578c79:{NFSU2_TR(0x578c79);
if(r1(R+518)){{goto L578c97;}}
}
B578c7b:L578c7b:{c.instructions+=10;NFSU2_TR(0x578c7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c7d:{NFSU2_TR(0x578c7d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c7f:{NFSU2_TR(0x578c7f);
w4(R+0,u32(r1(R+12)));
}
B578c82:{NFSU2_TR(0x578c82);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c84:{NFSU2_TR(0x578c84);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B578c88:{NFSU2_TR(0x578c88);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B578c8b:{NFSU2_TR(0x578c8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578c8c:{NFSU2_TR(0x578c8c);
__builtin_memmove((R+4),(R+24),4);
}
B578c8e:{NFSU2_TR(0x578c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578c92:{NFSU2_TR(0x578c92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578c97ull));
TAIL_STATIC(0x571550u,571);
}
B578c97:L578c97:{c.instructions+=3;NFSU2_TR(0x578c97);
w4(R+0,u32(r1(R+12)));
}
B578c9a:{NFSU2_TR(0x578c9a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578c9c:{NFSU2_TR(0x578c9c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578cbe;}}
}
B578c9e:L578c9e:{c.instructions+=6;NFSU2_TR(0x578c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578ca2:{NFSU2_TR(0x578ca2);
__builtin_memmove((R+8),(R+20),4);
}
B578ca4:{NFSU2_TR(0x578ca4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B578ca6:{NFSU2_TR(0x578ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B578ca9:{NFSU2_TR(0x578ca9);
__builtin_memmove((R+12),(R+0),4);
}
B578cab:{NFSU2_TR(0x578cab);
{goto L578cb0;}
}
B578cb0:L578cb0:{c.instructions+=3;NFSU2_TR(0x578cb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578cb1:{NFSU2_TR(0x578cb1);
__builtin_memmove((R+4),(R+24),4);
}
B578cb3:{NFSU2_TR(0x578cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578cb8ull));
TAIL_STATIC(0x571770u,571);
}
B578cb8:L578cb8:{c.instructions+=3;NFSU2_TR(0x578cb8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B578cbb:{NFSU2_TR(0x578cbb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B578cbc:{NFSU2_TR(0x578cbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578cb0u);}goto L578cb0;}}
}
B578cbe:L578cbe:{c.instructions+=2;NFSU2_TR(0x578cbe);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B578cc2:{NFSU2_TR(0x578cc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578b82u);}goto L578b82;}}
}
B578cc8:L578cc8:{c.instructions+=6;NFSU2_TR(0x578cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578cc9:{NFSU2_TR(0x578cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578cca:{NFSU2_TR(0x578cca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B578ccb:{NFSU2_TR(0x578ccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B578ccc:{NFSU2_TR(0x578ccc);
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
B578ccf:{NFSU2_TR(0x578ccf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578ce0:L578ce0:{c.instructions+=5;NFSU2_TR(0x578ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578ce1:{NFSU2_TR(0x578ce1);
__builtin_memmove((R+24),(R+4),4);
}
B578ce3:{NFSU2_TR(0x578ce3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578ce6:{NFSU2_TR(0x578ce6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578ce8:{NFSU2_TR(0x578ce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578cf0;}}
}
B578cea:L578cea:{c.instructions+=1;NFSU2_TR(0x578cea);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B578cf0:L578cf0:{c.instructions+=18;NFSU2_TR(0x578cf0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B578cf4:{NFSU2_TR(0x578cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578cf8:{NFSU2_TR(0x578cf8);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B578cfa:{NFSU2_TR(0x578cfa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578cfd:{NFSU2_TR(0x578cfd);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B578d00:{NFSU2_TR(0x578d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B578d03:{NFSU2_TR(0x578d03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578d04:{NFSU2_TR(0x578d04);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B578d08:{NFSU2_TR(0x578d08);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578d0c:{NFSU2_TR(0x578d0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B578d10:{NFSU2_TR(0x578d10);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B578d14:{NFSU2_TR(0x578d14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B578d16:{NFSU2_TR(0x578d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578d19:{NFSU2_TR(0x578d19);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B578d1d:{NFSU2_TR(0x578d1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B578d21:{NFSU2_TR(0x578d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578d27:{NFSU2_TR(0x578d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578d2a:{NFSU2_TR(0x578d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578d2full));
TAIL_STATIC(0x43bdf0u,43b);
}
B578d2f:L578d2f:{c.instructions+=5;NFSU2_TR(0x578d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578d32:{NFSU2_TR(0x578d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578d35:{NFSU2_TR(0x578d35);
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
B578d37:{NFSU2_TR(0x578d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578d38:{NFSU2_TR(0x578d38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L578d85;}}
}
B578d3a:L578d3a:{c.instructions+=3;NFSU2_TR(0x578d3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B578d3e:{NFSU2_TR(0x578d3e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B578d40:{NFSU2_TR(0x578d40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L578d85;}}
}
B578d42:L578d42:{c.instructions+=3;NFSU2_TR(0x578d42);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B578d47:{NFSU2_TR(0x578d47);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B578d4a:{NFSU2_TR(0x578d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578d85;}}
}
B578d4c:L578d4c:{c.instructions+=2;NFSU2_TR(0x578d4c);
__builtin_memmove((R+4),(R+24),4);
}
B578d4e:{NFSU2_TR(0x578d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578d53ull));
TAIL_STATIC(0x5717f0u,571);
}
B578d53:L578d53:{c.instructions+=3;NFSU2_TR(0x578d53);
w4(R+24,u32(0x50ull));
}
B578d58:{NFSU2_TR(0x578d58);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B578d5a:{NFSU2_TR(0x578d5a);
if(r1(R+519)){{goto L578d85;}}
}
B578d5c:L578d5c:{c.instructions+=2;NFSU2_TR(0x578d5c);
u8 U[4];
w4(U+0,u32(0x7faae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578d61:{NFSU2_TR(0x578d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578d66ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B578d66:L578d66:{c.instructions+=4;NFSU2_TR(0x578d66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B578d69:{NFSU2_TR(0x578d69);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B578d6a:{NFSU2_TR(0x578d6a);
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
B578d6c:{NFSU2_TR(0x578d6c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578d7e;}}
}
B578d6e:L578d6e:{c.instructions+=2;NFSU2_TR(0x578d6e);
u8 U[4];
w4(U+0,u32(0x7faae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578d73:{NFSU2_TR(0x578d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578d78ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B578d78:L578d78:{c.instructions+=3;NFSU2_TR(0x578d78);
__builtin_memmove((R+24),(R+0),4);
}
B578d7a:{NFSU2_TR(0x578d7a);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B578d7d:{NFSU2_TR(0x578d7d);
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
B578d7e:L578d7e:{c.instructions+=1;NFSU2_TR(0x578d7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7faae0ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B578d85:L578d85:{c.instructions+=2;NFSU2_TR(0x578d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578d86:{NFSU2_TR(0x578d86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578d90:L578d90:{c.instructions+=11;NFSU2_TR(0x578d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578d91:{NFSU2_TR(0x578d91);
__builtin_memmove((R+24),(R+4),4);
}
B578d93:{NFSU2_TR(0x578d93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B578d97:{NFSU2_TR(0x578d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578d9d:{NFSU2_TR(0x578d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B578da0:{NFSU2_TR(0x578da0);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B578da4:{NFSU2_TR(0x578da4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578da5:{NFSU2_TR(0x578da5);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B578da9:{NFSU2_TR(0x578da9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B578dab:{NFSU2_TR(0x578dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578dae:{NFSU2_TR(0x578dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578db3ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B578db3:L578db3:{c.instructions+=5;NFSU2_TR(0x578db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578db6:{NFSU2_TR(0x578db6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B578db9:{NFSU2_TR(0x578db9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B578dbb:{NFSU2_TR(0x578dbb);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B578dbd:{NFSU2_TR(0x578dbd);
if(r1(R+518)){{goto L578dea;}}
}
B578dbf:L578dbf:{c.instructions+=4;NFSU2_TR(0x578dbf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B578dc3:{NFSU2_TR(0x578dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578dc6:{NFSU2_TR(0x578dc6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B578dc8:{NFSU2_TR(0x578dc8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578dd3;}}
}
B578dca:L578dca:{c.instructions+=3;NFSU2_TR(0x578dca);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B578dce:{NFSU2_TR(0x578dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B578dd0:{NFSU2_TR(0x578dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578dd3:L578dd3:{c.instructions+=2;NFSU2_TR(0x578dd3);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B578dd6:{NFSU2_TR(0x578dd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578de4;}}
}
B578dd8:L578dd8:{c.instructions+=2;NFSU2_TR(0x578dd8);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x400ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x400ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B578dde:{NFSU2_TR(0x578dde);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578de4;}}
}
B578de0:L578de0:{c.instructions+=1;NFSU2_TR(0x578de0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B578de4:L578de4:{c.instructions+=1;NFSU2_TR(0x578de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578dea:L578dea:{c.instructions+=7;NFSU2_TR(0x578dea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B578ded:{NFSU2_TR(0x578ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578df0:{NFSU2_TR(0x578df0);
w1(R+8,u8(u32(r1(R+8))-u32(u8(0x1ull))));
}
B578df2:{NFSU2_TR(0x578df2);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B578df5:{NFSU2_TR(0x578df5);
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
B578df7:{NFSU2_TR(0x578df7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B578dfa:{NFSU2_TR(0x578dfa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578e03;}}
}
B578dfc:L578dfc:{c.instructions+=1;NFSU2_TR(0x578dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B578e03:L578e03:{c.instructions+=3;NFSU2_TR(0x578e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578e04:{NFSU2_TR(0x578e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578e05:{NFSU2_TR(0x578e05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578e10:L578e10:{c.instructions+=6;NFSU2_TR(0x578e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578e11:{NFSU2_TR(0x578e11);
__builtin_memmove((R+24),(R+4),4);
}
B578e13:{NFSU2_TR(0x578e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578e16:{NFSU2_TR(0x578e16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578e18:{NFSU2_TR(0x578e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B578e1f:{NFSU2_TR(0x578e1f);
if(r1(R+518)){{goto L578e56;}}
}
B578e21:L578e21:{c.instructions+=7;NFSU2_TR(0x578e21);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B578e26:{NFSU2_TR(0x578e26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B578e27:{NFSU2_TR(0x578e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578e2a:{NFSU2_TR(0x578e2a);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B578e30:{NFSU2_TR(0x578e30);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B578e36:{NFSU2_TR(0x578e36);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B578e3c:{NFSU2_TR(0x578e3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578e41ull));
TAIL_STATIC(0x75bed4u,75b);
}
B578e41:L578e41:{c.instructions+=5;NFSU2_TR(0x578e41);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),m4(0x86518c)));
w1(R+523,scarry<u32>(r4(R+0),m4(0x86518c)));
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x86518c))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B578e47:{NFSU2_TR(0x578e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578e4d:{NFSU2_TR(0x578e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B578e54:{NFSU2_TR(0x578e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578e55:{NFSU2_TR(0x578e55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578e56:L578e56:{c.instructions+=2;NFSU2_TR(0x578e56);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B578e59:{NFSU2_TR(0x578e59);
if(r1(R+518)){{goto L578e8b;}}
}
B578e5b:L578e5b:{c.instructions+=7;NFSU2_TR(0x578e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B578e5e:{NFSU2_TR(0x578e5e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B578e64:{NFSU2_TR(0x578e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B578e6b:{NFSU2_TR(0x578e6b);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B578e70:{NFSU2_TR(0x578e70);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B578e71:{NFSU2_TR(0x578e71);
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
B578e73:{NFSU2_TR(0x578e73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578e8b;}}
}
B578e75:L578e75:{c.instructions+=4;NFSU2_TR(0x578e75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578e77:{NFSU2_TR(0x578e77);
u8 U[4];
w4(U+0,u32(0x7c8d5450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578e7c:{NFSU2_TR(0x578e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B578e83:{NFSU2_TR(0x578e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578e88ull));
TAIL_STATIC(0x55dde0u,55d);
}
B578e88:L578e88:{c.instructions+=1;NFSU2_TR(0x578e88);
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
B578e8b:L578e8b:{c.instructions+=2;NFSU2_TR(0x578e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578e8c:{NFSU2_TR(0x578e8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578e90:L578e90:{c.instructions+=3;NFSU2_TR(0x578e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578e93:{NFSU2_TR(0x578e93);
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
B578e95:{NFSU2_TR(0x578e95);
if(r1(R+518)){{goto L578edd;}}
}
B578e97:L578e97:{c.instructions+=6;NFSU2_TR(0x578e97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578e98:{NFSU2_TR(0x578e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B578e9e:{NFSU2_TR(0x578e9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578e9f:{NFSU2_TR(0x578e9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578ea5:{NFSU2_TR(0x578ea5);
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
B578ea7:{NFSU2_TR(0x578ea7);
if(r1(R+518)){{goto L578edb;}}
}
B578ea9:L578ea9:{c.instructions+=1;NFSU2_TR(0x578ea9);
__builtin_memmove((R+16),(R+16),4);
}
B578eb0:L578eb0:{c.instructions+=4;NFSU2_TR(0x578eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B578eb3:{NFSU2_TR(0x578eb3);
u8 U[4];
w4(U+0,u32(0x79545cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578eb8:{NFSU2_TR(0x578eb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578eb9:{NFSU2_TR(0x578eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578ebeull));
TAIL_STATIC(0x43dc30u,43d);
}
B578ebe:L578ebe:{c.instructions+=3;NFSU2_TR(0x578ebe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B578ec1:{NFSU2_TR(0x578ec1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578ec3:{NFSU2_TR(0x578ec3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578ed5;}}
}
B578ec5:L578ec5:{c.instructions+=3;NFSU2_TR(0x578ec5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B578ec9:{NFSU2_TR(0x578ec9);
{u32 ea_=u32(r4(R+24)+u32(472u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B578ecf:{NFSU2_TR(0x578ecf);
{u32 ea_=u32(r4(R+24)+u32(472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B578ed5:L578ed5:{c.instructions+=3;NFSU2_TR(0x578ed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B578ed7:{NFSU2_TR(0x578ed7);
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
B578ed9:{NFSU2_TR(0x578ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578eb0u);}goto L578eb0;}}
}
B578edb:L578edb:{c.instructions+=2;NFSU2_TR(0x578edb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578edc:{NFSU2_TR(0x578edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578edd:L578edd:{c.instructions+=1;NFSU2_TR(0x578edd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578ee0:L578ee0:{c.instructions+=3;NFSU2_TR(0x578ee0);
u8 U[4];
w4(U+0,u32(0x7a0820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578ee5:{NFSU2_TR(0x578ee5);
u8 U[4];
w4(U+0,u32(0xc2c60000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578eea:{NFSU2_TR(0x578eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578eefull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x578e90u);}goto L578e90;}
}
B578eef:L578eef:{c.instructions+=1;NFSU2_TR(0x578eef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578ef0:L578ef0:{c.instructions+=14;NFSU2_TR(0x578ef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B578ef3:{NFSU2_TR(0x578ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578ef7:{NFSU2_TR(0x578ef7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578ef8:{NFSU2_TR(0x578ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B578efc:{NFSU2_TR(0x578efc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578efd:{NFSU2_TR(0x578efd);
__builtin_memmove((R+24),gp(0x7fb724),4);
}
B578f03:{NFSU2_TR(0x578f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578f07:{NFSU2_TR(0x578f07);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B578f0b:{NFSU2_TR(0x578f0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578f0c:{NFSU2_TR(0x578f0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B578f10:{NFSU2_TR(0x578f10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578f14:{NFSU2_TR(0x578f14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578f18:{NFSU2_TR(0x578f18);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578f1c:{NFSU2_TR(0x578f1c);
if(r1(R+518)){{goto L578fb0;}}
}
B578f22:L578f22:{c.instructions+=3;NFSU2_TR(0x578f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578f28:{NFSU2_TR(0x578f28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578f2a:{NFSU2_TR(0x578f2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578fb0;}}
}
B578f30:L578f30:{c.instructions+=3;NFSU2_TR(0x578f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578f36:{NFSU2_TR(0x578f36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578f38:{NFSU2_TR(0x578f38);
if(r1(R+518)){{goto L578fb0;}}
}
B578f3a:L578f3a:{c.instructions+=3;NFSU2_TR(0x578f3a);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B578f3e:{NFSU2_TR(0x578f3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B578f40:{NFSU2_TR(0x578f40);
if(r1(R+518)){{goto L578f75;}}
}
B578f42:L578f42:{c.instructions+=3;NFSU2_TR(0x578f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B578f48:{NFSU2_TR(0x578f48);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578f4a:{NFSU2_TR(0x578f4a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L578f75;}}
}
B578f4c:L578f4c:{c.instructions+=8;NFSU2_TR(0x578f4c);
__builtin_memmove((R+0),(R+8),4);
}
B578f4e:{NFSU2_TR(0x578f4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B578f51:{NFSU2_TR(0x578f51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578f52:{NFSU2_TR(0x578f52);
u8 U[16];
w4(U+0,u32(u32(u32(0x40e0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B578f59:{NFSU2_TR(0x578f59);
u8 U[12];
w4(U+0,u32(u32(u32(0x40dcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B578f60:{NFSU2_TR(0x578f60);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B578f62:{NFSU2_TR(0x578f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B578f63:{NFSU2_TR(0x578f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578f75;}}
}
B578f65:L578f65:{c.instructions+=2;NFSU2_TR(0x578f65);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B578f67:{NFSU2_TR(0x578f67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578f75;}}
}
B578f69:L578f69:{c.instructions+=2;NFSU2_TR(0x578f69);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B578f6c:{NFSU2_TR(0x578f6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L578f75;}}
}
B578f6e:L578f6e:{c.instructions+=2;NFSU2_TR(0x578f6e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B578f6f:{NFSU2_TR(0x578f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578f75:L578f75:{c.instructions+=3;NFSU2_TR(0x578f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578f7b:{NFSU2_TR(0x578f7b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B578f80:{NFSU2_TR(0x578f80);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L578fab;}}
}
B578f82:L578f82:{c.instructions+=11;NFSU2_TR(0x578f82);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B578f85:{NFSU2_TR(0x578f85);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ecull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B578f8c:{NFSU2_TR(0x578f8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B578f8e:{NFSU2_TR(0x578f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578f92:{NFSU2_TR(0x578f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578f95:{NFSU2_TR(0x578f95);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578f99:{NFSU2_TR(0x578f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578f9c:{NFSU2_TR(0x578f9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B578fa0:{NFSU2_TR(0x578fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B578fa3:{NFSU2_TR(0x578fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B578fa9:{NFSU2_TR(0x578fa9);
{goto L578fb0;}
}
B578fab:L578fab:{c.instructions+=1;NFSU2_TR(0x578fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578fb0ull));
TAIL_STATIC(0x571830u,571);
}
B578fb0:L578fb0:{c.instructions+=3;NFSU2_TR(0x578fb0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B578fb4:{NFSU2_TR(0x578fb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578fb5:{NFSU2_TR(0x578fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578fbaull));
TAIL_STATIC(0x4a7b30u,4a7);
}
B578fba:L578fba:{c.instructions+=6;NFSU2_TR(0x578fba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B578fbd:{NFSU2_TR(0x578fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578fbe:{NFSU2_TR(0x578fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B578fbf:{NFSU2_TR(0x578fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B578fc0:{NFSU2_TR(0x578fc0);
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
B578fc3:{NFSU2_TR(0x578fc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B578fd0:L578fd0:{c.instructions+=8;NFSU2_TR(0x578fd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578fd1:{NFSU2_TR(0x578fd1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578fd2:{NFSU2_TR(0x578fd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578fd3:{NFSU2_TR(0x578fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B578fd9:{NFSU2_TR(0x578fd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578fda:{NFSU2_TR(0x578fda);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B578fe0:{NFSU2_TR(0x578fe0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B578fe2:{NFSU2_TR(0x578fe2);
if(r1(R+518)){TAIL_STATIC(0x57900cu,579);}
}
B578fe4:L578fe4:{c.instructions+=7;NFSU2_TR(0x578fe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B578fe8:{NFSU2_TR(0x578fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B578fec:{NFSU2_TR(0x578fec);
__builtin_memmove((R+16),(R+16),4);
}
B578ff0:{NFSU2_TR(0x578ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B578ff3:{NFSU2_TR(0x578ff3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578ff4:{NFSU2_TR(0x578ff4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B578ff5:{NFSU2_TR(0x578ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x578ffaull));
TAIL_STATIC(0x43dc30u,43d);
}
B578ffa:L578ffa:{c.instructions+=3;NFSU2_TR(0x578ffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B578ffd:{NFSU2_TR(0x578ffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B578fff:{NFSU2_TR(0x578fff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x579006u,579);}
TAIL_STATIC(0x579001u,579);
}
XIT:NFSU2_TR_EXIT(0x578,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
