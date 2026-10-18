#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x465,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x465,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_465(u8* __restrict R,Cpu& c);
u32 page_465(Cpu& c){return body_465(c.regs.data(),c);}
__attribute__((noinline)) u32 body_465(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x465000:goto L465000;
case 0x465002:goto L465002;
case 0x465008:c.instructions+=3;goto B465008;
case 0x46500d:c.instructions+=2;goto B46500d;
case 0x46500f:c.instructions+=1;goto B46500f;
case 0x465012:goto L465012;
case 0x465015:c.instructions+=4;goto B465015;
case 0x465018:c.instructions+=3;goto B465018;
case 0x46501b:c.instructions+=2;goto B46501b;
case 0x46501d:c.instructions+=1;goto B46501d;
case 0x46501f:goto L46501f;
case 0x465021:c.instructions+=2;goto B465021;
case 0x465027:c.instructions+=1;goto B465027;
case 0x465029:goto L465029;
case 0x46502c:c.instructions+=3;goto B46502c;
case 0x465030:c.instructions+=2;goto B465030;
case 0x465033:c.instructions+=1;goto B465033;
case 0x465035:goto L465035;
case 0x465038:c.instructions+=3;goto B465038;
case 0x46503a:c.instructions+=2;goto B46503a;
case 0x46503c:c.instructions+=1;goto B46503c;
case 0x46503e:goto L46503e;
case 0x465041:goto L465041;
case 0x465043:c.instructions+=3;goto B465043;
case 0x465045:c.instructions+=2;goto B465045;
case 0x465048:c.instructions+=1;goto B465048;
case 0x46504a:goto L46504a;
case 0x46504d:c.instructions+=4;goto B46504d;
case 0x46504e:c.instructions+=3;goto B46504e;
case 0x465051:c.instructions+=2;goto B465051;
case 0x465053:c.instructions+=1;goto B465053;
case 0x465055:goto L465055;
case 0x46505a:c.instructions+=1;goto B46505a;
case 0x46505c:goto L46505c;
case 0x46505f:c.instructions+=2;goto B46505f;
case 0x465061:c.instructions+=1;goto B465061;
case 0x465063:goto L465063;
case 0x465066:c.instructions+=1;goto B465066;
case 0x46506b:goto L46506b;
case 0x46506f:c.instructions+=6;goto B46506f;
case 0x465072:c.instructions+=5;goto B465072;
case 0x465074:c.instructions+=4;goto B465074;
case 0x465077:c.instructions+=3;goto B465077;
case 0x46507a:c.instructions+=2;goto B46507a;
case 0x46507c:c.instructions+=1;goto B46507c;
case 0x46507e:goto L46507e;
case 0x465082:c.instructions+=3;goto B465082;
case 0x465088:c.instructions+=2;goto B465088;
case 0x46508b:c.instructions+=1;goto B46508b;
case 0x46508d:goto L46508d;
case 0x46508f:c.instructions+=5;goto B46508f;
case 0x465092:c.instructions+=4;goto B465092;
case 0x465094:c.instructions+=3;goto B465094;
case 0x465097:c.instructions+=2;goto B465097;
case 0x46509a:c.instructions+=1;goto B46509a;
case 0x46509f:goto L46509f;
case 0x4650a3:c.instructions+=6;goto B4650a3;
case 0x4650a6:c.instructions+=5;goto B4650a6;
case 0x4650a8:c.instructions+=4;goto B4650a8;
case 0x4650ab:c.instructions+=3;goto B4650ab;
case 0x4650ae:c.instructions+=2;goto B4650ae;
case 0x4650b0:c.instructions+=1;goto B4650b0;
case 0x4650b2:goto L4650b2;
case 0x4650b5:c.instructions+=9;goto B4650b5;
case 0x4650b7:c.instructions+=8;goto B4650b7;
case 0x4650ba:c.instructions+=7;goto B4650ba;
case 0x4650be:c.instructions+=6;goto B4650be;
case 0x4650c1:c.instructions+=5;goto B4650c1;
case 0x4650c3:c.instructions+=4;goto B4650c3;
case 0x4650c5:c.instructions+=3;goto B4650c5;
case 0x4650c7:c.instructions+=2;goto B4650c7;
case 0x4650ca:c.instructions+=1;goto B4650ca;
case 0x4650cc:goto L4650cc;
case 0x4650d0:c.instructions+=1;goto B4650d0;
case 0x4650d3:goto L4650d3;
case 0x4650d6:c.instructions+=8;goto B4650d6;
case 0x4650d9:c.instructions+=7;goto B4650d9;
case 0x4650db:c.instructions+=6;goto B4650db;
case 0x4650de:c.instructions+=5;goto B4650de;
case 0x4650e1:c.instructions+=4;goto B4650e1;
case 0x4650e3:c.instructions+=3;goto B4650e3;
case 0x4650e6:c.instructions+=2;goto B4650e6;
case 0x4650e9:c.instructions+=1;goto B4650e9;
case 0x4650eb:goto L4650eb;
case 0x4650ed:c.instructions+=1;goto B4650ed;
case 0x4650ef:goto L4650ef;
case 0x4650f6:goto L4650f6;
case 0x4650f9:c.instructions+=1;goto B4650f9;
case 0x4650fe:goto L4650fe;
case 0x465100:c.instructions+=1;goto B465100;
case 0x465102:goto L465102;
case 0x465106:c.instructions+=4;goto B465106;
case 0x465108:c.instructions+=3;goto B465108;
case 0x46510c:c.instructions+=2;goto B46510c;
case 0x465112:c.instructions+=1;goto B465112;
case 0x465114:goto L465114;
case 0x465117:c.instructions+=3;goto B465117;
case 0x46511a:c.instructions+=2;goto B46511a;
case 0x46511d:c.instructions+=1;goto B46511d;
case 0x465123:goto L465123;
case 0x465124:c.instructions+=6;goto B465124;
case 0x465125:c.instructions+=5;goto B465125;
case 0x465126:c.instructions+=4;goto B465126;
case 0x465128:c.instructions+=3;goto B465128;
case 0x465129:c.instructions+=2;goto B465129;
case 0x46512c:c.instructions+=1;goto B46512c;
case 0x46512d:goto L46512d;
case 0x465131:c.instructions+=4;goto B465131;
case 0x465135:c.instructions+=3;goto B465135;
case 0x465137:c.instructions+=2;goto B465137;
case 0x46513d:c.instructions+=1;goto B46513d;
case 0x465143:goto L465143;
case 0x465146:c.instructions+=14;goto B465146;
case 0x465149:c.instructions+=13;goto B465149;
case 0x46514d:c.instructions+=12;goto B46514d;
case 0x465150:c.instructions+=11;goto B465150;
case 0x465151:c.instructions+=10;goto B465151;
case 0x465153:c.instructions+=9;goto B465153;
case 0x465156:c.instructions+=8;goto B465156;
case 0x465158:c.instructions+=7;goto B465158;
case 0x465159:c.instructions+=6;goto B465159;
case 0x46515a:c.instructions+=5;goto B46515a;
case 0x46515d:c.instructions+=4;goto B46515d;
case 0x46515f:c.instructions+=3;goto B46515f;
case 0x465160:c.instructions+=2;goto B465160;
case 0x465163:c.instructions+=1;goto B465163;
case 0x465164:goto L465164;
case 0x465165:c.instructions+=6;goto B465165;
case 0x465166:c.instructions+=5;goto B465166;
case 0x465167:c.instructions+=4;goto B465167;
case 0x46516c:c.instructions+=3;goto B46516c;
case 0x46516d:c.instructions+=2;goto B46516d;
case 0x465170:c.instructions+=1;goto B465170;
case 0x465180:goto L465180;
case 0x465181:c.instructions+=4;goto B465181;
case 0x465185:c.instructions+=3;goto B465185;
case 0x46518b:c.instructions+=2;goto B46518b;
case 0x46518c:c.instructions+=1;goto B46518c;
case 0x465191:goto L465191;
case 0x465194:c.instructions+=3;goto B465194;
case 0x465196:c.instructions+=2;goto B465196;
case 0x46519c:c.instructions+=1;goto B46519c;
case 0x46519e:goto L46519e;
case 0x4651a1:c.instructions+=3;goto B4651a1;
case 0x4651a4:c.instructions+=2;goto B4651a4;
case 0x4651a6:c.instructions+=1;goto B4651a6;
case 0x4651ab:goto L4651ab;
case 0x4651ae:c.instructions+=2;goto B4651ae;
case 0x4651b0:c.instructions+=1;goto B4651b0;
case 0x4651b2:goto L4651b2;
case 0x4651b5:c.instructions+=3;goto B4651b5;
case 0x4651b6:c.instructions+=2;goto B4651b6;
case 0x4651b7:c.instructions+=1;goto B4651b7;
case 0x4651bc:goto L4651bc;
case 0x4651bf:c.instructions+=2;goto B4651bf;
case 0x4651c0:c.instructions+=1;goto B4651c0;
case 0x4651c1:goto L4651c1;
case 0x4651c4:c.instructions+=3;goto B4651c4;
case 0x4651c5:c.instructions+=2;goto B4651c5;
case 0x4651c6:c.instructions+=1;goto B4651c6;
case 0x4651cb:goto L4651cb;
case 0x4651ce:c.instructions+=2;goto B4651ce;
case 0x4651cf:c.instructions+=1;goto B4651cf;
case 0x4651d0:goto L4651d0;
case 0x4651d3:c.instructions+=3;goto B4651d3;
case 0x4651d4:c.instructions+=2;goto B4651d4;
case 0x4651d5:c.instructions+=1;goto B4651d5;
case 0x4651da:goto L4651da;
case 0x4651dd:c.instructions+=2;goto B4651dd;
case 0x4651de:c.instructions+=1;goto B4651de;
case 0x4651e0:goto L4651e0;
case 0x4651e1:c.instructions+=4;goto B4651e1;
case 0x4651e5:c.instructions+=3;goto B4651e5;
case 0x4651eb:c.instructions+=2;goto B4651eb;
case 0x4651ec:c.instructions+=1;goto B4651ec;
case 0x4651f1:goto L4651f1;
case 0x4651f4:c.instructions+=6;goto B4651f4;
case 0x4651f5:c.instructions+=5;goto B4651f5;
case 0x4651f6:c.instructions+=4;goto B4651f6;
case 0x4651f9:c.instructions+=3;goto B4651f9;
case 0x4651fb:c.instructions+=2;goto B4651fb;
case 0x4651fc:c.instructions+=1;goto B4651fc;
case 0x465201:goto L465201;
case 0x465204:c.instructions+=4;goto B465204;
case 0x465206:c.instructions+=3;goto B465206;
case 0x46520c:c.instructions+=2;goto B46520c;
case 0x46520d:c.instructions+=1;goto B46520d;
case 0x46520f:goto L46520f;
case 0x465214:c.instructions+=2;goto B465214;
case 0x465215:c.instructions+=1;goto B465215;
case 0x46521a:goto L46521a;
case 0x46521d:goto L46521d;
case 0x465220:goto L465220;
case 0x465221:c.instructions+=8;goto B465221;
case 0x465222:c.instructions+=7;goto B465222;
case 0x465223:c.instructions+=6;goto B465223;
case 0x465227:c.instructions+=5;goto B465227;
case 0x46522a:c.instructions+=4;goto B46522a;
case 0x46522b:c.instructions+=3;goto B46522b;
case 0x46522d:c.instructions+=2;goto B46522d;
case 0x46522f:c.instructions+=1;goto B46522f;
case 0x465234:goto L465234;
case 0x465237:c.instructions+=3;goto B465237;
case 0x465239:c.instructions+=2;goto B465239;
case 0x46523e:c.instructions+=1;goto B46523e;
case 0x465240:goto L465240;
case 0x465243:c.instructions+=1;goto B465243;
case 0x465245:goto L465245;
case 0x465248:c.instructions+=2;goto B465248;
case 0x46524a:c.instructions+=1;goto B46524a;
case 0x46524c:goto L46524c;
case 0x46524f:goto L46524f;
case 0x465252:c.instructions+=4;goto B465252;
case 0x465255:c.instructions+=3;goto B465255;
case 0x465257:c.instructions+=2;goto B465257;
case 0x46525d:c.instructions+=1;goto B46525d;
case 0x465264:goto L465264;
case 0x465266:c.instructions+=1;goto B465266;
case 0x46526b:goto L46526b;
case 0x46526d:c.instructions+=1;goto B46526d;
case 0x46526f:goto L46526f;
case 0x465272:c.instructions+=3;goto B465272;
case 0x465275:c.instructions+=2;goto B465275;
case 0x465279:c.instructions+=1;goto B465279;
case 0x46527b:goto L46527b;
case 0x465281:goto L465281;
case 0x465285:c.instructions+=3;goto B465285;
case 0x465286:c.instructions+=2;goto B465286;
case 0x465287:c.instructions+=1;goto B465287;
case 0x46528c:goto L46528c;
case 0x46528f:goto L46528f;
case 0x465290:c.instructions+=4;goto B465290;
case 0x465291:c.instructions+=3;goto B465291;
case 0x465292:c.instructions+=2;goto B465292;
case 0x465293:c.instructions+=1;goto B465293;
case 0x465294:goto L465294;
case 0x46529b:c.instructions+=1;goto B46529b;
case 0x46529d:goto L46529d;
case 0x4652a3:c.instructions+=5;goto B4652a3;
case 0x4652a6:c.instructions+=4;goto B4652a6;
case 0x4652a9:c.instructions+=3;goto B4652a9;
case 0x4652af:c.instructions+=2;goto B4652af;
case 0x4652b1:c.instructions+=1;goto B4652b1;
case 0x4652b3:goto L4652b3;
case 0x4652b5:c.instructions+=3;goto B4652b5;
case 0x4652b7:c.instructions+=2;goto B4652b7;
case 0x4652b9:c.instructions+=1;goto B4652b9;
case 0x4652bb:goto L4652bb;
case 0x4652bd:c.instructions+=1;goto B4652bd;
case 0x4652bf:goto L4652bf;
case 0x4652c2:c.instructions+=3;goto B4652c2;
case 0x4652c4:c.instructions+=2;goto B4652c4;
case 0x4652c7:c.instructions+=1;goto B4652c7;
case 0x4652c9:goto L4652c9;
case 0x4652cc:c.instructions+=3;goto B4652cc;
case 0x4652cf:c.instructions+=2;goto B4652cf;
case 0x4652d1:c.instructions+=1;goto B4652d1;
case 0x4652d3:goto L4652d3;
case 0x4652d5:c.instructions+=1;goto B4652d5;
case 0x4652d7:goto L4652d7;
case 0x4652d9:c.instructions+=1;goto B4652d9;
case 0x4652dc:goto L4652dc;
case 0x4652de:c.instructions+=1;goto B4652de;
case 0x4652e0:goto L4652e0;
case 0x4652e2:c.instructions+=2;goto B4652e2;
case 0x4652e4:c.instructions+=1;goto B4652e4;
case 0x4652e6:goto L4652e6;
case 0x4652e8:c.instructions+=4;goto B4652e8;
case 0x4652eb:c.instructions+=3;goto B4652eb;
case 0x4652ec:c.instructions+=2;goto B4652ec;
case 0x4652ee:c.instructions+=1;goto B4652ee;
case 0x4652f0:goto L4652f0;
case 0x4652f6:c.instructions+=3;goto B4652f6;
case 0x4652f8:c.instructions+=2;goto B4652f8;
case 0x4652f9:c.instructions+=1;goto B4652f9;
case 0x4652fb:goto L4652fb;
case 0x4652ff:c.instructions+=4;goto B4652ff;
case 0x465300:c.instructions+=3;goto B465300;
case 0x465302:c.instructions+=2;goto B465302;
case 0x465303:c.instructions+=1;goto B465303;
case 0x465308:goto L465308;
case 0x46530b:c.instructions+=3;goto B46530b;
case 0x46530d:c.instructions+=2;goto B46530d;
case 0x465313:c.instructions+=1;goto B465313;
case 0x465319:goto L465319;
case 0x46531a:c.instructions+=6;goto B46531a;
case 0x46531b:c.instructions+=5;goto B46531b;
case 0x46531c:c.instructions+=4;goto B46531c;
case 0x46531d:c.instructions+=3;goto B46531d;
case 0x465325:c.instructions+=2;goto B465325;
case 0x465329:c.instructions+=1;goto B465329;
case 0x46532e:goto L46532e;
case 0x465332:c.instructions+=3;goto B465332;
case 0x465333:c.instructions+=2;goto B465333;
case 0x465334:c.instructions+=1;goto B465334;
case 0x465339:goto L465339;
case 0x46533c:c.instructions+=3;goto B46533c;
case 0x46533e:c.instructions+=2;goto B46533e;
case 0x465344:c.instructions+=1;goto B465344;
case 0x46534a:goto L46534a;
case 0x46534b:c.instructions+=6;goto B46534b;
case 0x46534c:c.instructions+=5;goto B46534c;
case 0x46534d:c.instructions+=4;goto B46534d;
case 0x46534e:c.instructions+=3;goto B46534e;
case 0x465356:c.instructions+=2;goto B465356;
case 0x46535a:c.instructions+=1;goto B46535a;
case 0x465360:goto L465360;
case 0x465364:c.instructions+=9;goto B465364;
case 0x465368:c.instructions+=8;goto B465368;
case 0x46536e:c.instructions+=7;goto B46536e;
case 0x465371:c.instructions+=6;goto B465371;
case 0x465375:c.instructions+=5;goto B465375;
case 0x465378:c.instructions+=4;goto B465378;
case 0x46537a:c.instructions+=3;goto B46537a;
case 0x46537d:c.instructions+=2;goto B46537d;
case 0x465380:c.instructions+=1;goto B465380;
case 0x465390:goto L465390;
case 0x465394:c.instructions+=2;goto B465394;
case 0x465396:c.instructions+=1;goto B465396;
case 0x465398:goto L465398;
case 0x46539a:c.instructions+=2;goto B46539a;
case 0x4653a0:c.instructions+=1;goto B4653a0;
case 0x4653a2:goto L4653a2;
case 0x4653a6:c.instructions+=2;goto B4653a6;
case 0x4653a9:c.instructions+=1;goto B4653a9;
case 0x4653ab:goto L4653ab;
case 0x4653ae:c.instructions+=2;goto B4653ae;
case 0x4653b0:c.instructions+=1;goto B4653b0;
case 0x4653b2:goto L4653b2;
case 0x4653b3:c.instructions+=5;goto B4653b3;
case 0x4653b4:c.instructions+=4;goto B4653b4;
case 0x4653b8:c.instructions+=3;goto B4653b8;
case 0x4653b9:c.instructions+=2;goto B4653b9;
case 0x4653bd:c.instructions+=1;goto B4653bd;
case 0x4653bf:goto L4653bf;
case 0x4653c1:c.instructions+=2;goto B4653c1;
case 0x4653c3:c.instructions+=1;goto B4653c3;
case 0x4653c5:goto L4653c5;
case 0x4653c9:c.instructions+=2;goto B4653c9;
case 0x4653cc:c.instructions+=1;goto B4653cc;
case 0x4653ce:goto L4653ce;
case 0x4653d1:c.instructions+=1;goto B4653d1;
case 0x4653d3:goto L4653d3;
case 0x4653d6:c.instructions+=1;goto B4653d6;
case 0x4653d8:goto L4653d8;
case 0x4653db:c.instructions+=1;goto B4653db;
case 0x4653dd:goto L4653dd;
case 0x4653e0:c.instructions+=2;goto B4653e0;
case 0x4653e2:c.instructions+=1;goto B4653e2;
case 0x4653e4:goto L4653e4;
case 0x4653e7:c.instructions+=5;goto B4653e7;
case 0x4653ea:c.instructions+=4;goto B4653ea;
case 0x4653ee:c.instructions+=3;goto B4653ee;
case 0x4653f0:c.instructions+=2;goto B4653f0;
case 0x4653f3:c.instructions+=1;goto B4653f3;
case 0x4653f6:goto L4653f6;
case 0x4653f7:c.instructions+=2;goto B4653f7;
case 0x4653f8:c.instructions+=1;goto B4653f8;
case 0x4653f9:goto L4653f9;
case 0x465400:goto L465400;
case 0x465404:c.instructions+=2;goto B465404;
case 0x465406:c.instructions+=1;goto B465406;
case 0x465408:goto L465408;
case 0x46540a:c.instructions+=2;goto B46540a;
case 0x465410:c.instructions+=1;goto B465410;
case 0x465412:goto L465412;
case 0x465416:c.instructions+=3;goto B465416;
case 0x46541a:c.instructions+=2;goto B46541a;
case 0x46541d:c.instructions+=1;goto B46541d;
case 0x465420:goto L465420;
case 0x465430:goto L465430;
case 0x465434:c.instructions+=2;goto B465434;
case 0x465436:c.instructions+=1;goto B465436;
case 0x465438:goto L465438;
case 0x46543a:c.instructions+=2;goto B46543a;
case 0x465440:c.instructions+=1;goto B465440;
case 0x465442:goto L465442;
case 0x465446:c.instructions+=3;goto B465446;
case 0x465448:c.instructions+=2;goto B465448;
case 0x46544b:c.instructions+=1;goto B46544b;
case 0x46544d:goto L46544d;
case 0x465451:c.instructions+=1;goto B465451;
case 0x465453:goto L465453;
case 0x465456:c.instructions+=4;goto B465456;
case 0x46545c:c.instructions+=3;goto B46545c;
case 0x465460:c.instructions+=2;goto B465460;
case 0x465464:c.instructions+=1;goto B465464;
case 0x465469:goto L465469;
case 0x465470:goto L465470;
case 0x465474:c.instructions+=2;goto B465474;
case 0x465476:c.instructions+=1;goto B465476;
case 0x465478:goto L465478;
case 0x46547a:c.instructions+=2;goto B46547a;
case 0x465480:c.instructions+=1;goto B465480;
case 0x465482:goto L465482;
case 0x465486:c.instructions+=2;goto B465486;
case 0x465489:c.instructions+=1;goto B465489;
case 0x46548b:goto L46548b;
case 0x46548e:c.instructions+=1;goto B46548e;
case 0x465490:goto L465490;
case 0x465493:c.instructions+=3;goto B465493;
case 0x465496:c.instructions+=2;goto B465496;
case 0x46549a:c.instructions+=1;goto B46549a;
case 0x46549b:goto L46549b;
case 0x46549d:c.instructions+=1;goto B46549d;
case 0x4654a0:goto L4654a0;
case 0x4654a4:c.instructions+=3;goto B4654a4;
case 0x4654a6:c.instructions+=2;goto B4654a6;
case 0x4654a7:c.instructions+=1;goto B4654a7;
case 0x4654a9:goto L4654a9;
case 0x4654ab:c.instructions+=2;goto B4654ab;
case 0x4654b1:c.instructions+=1;goto B4654b1;
case 0x4654b3:goto L4654b3;
case 0x4654b5:c.instructions+=2;goto B4654b5;
case 0x4654b6:c.instructions+=1;goto B4654b6;
case 0x4654b7:goto L4654b7;
case 0x4654b8:c.instructions+=1;goto B4654b8;
case 0x4654bd:goto L4654bd;
case 0x4654bf:c.instructions+=2;goto B4654bf;
case 0x4654c1:c.instructions+=1;goto B4654c1;
case 0x4654c3:goto L4654c3;
case 0x4654c4:c.instructions+=2;goto B4654c4;
case 0x4654c5:c.instructions+=1;goto B4654c5;
case 0x4654c6:goto L4654c6;
case 0x4654ca:c.instructions+=8;goto B4654ca;
case 0x4654cb:c.instructions+=7;goto B4654cb;
case 0x4654cc:c.instructions+=6;goto B4654cc;
case 0x4654d1:c.instructions+=5;goto B4654d1;
case 0x4654d2:c.instructions+=4;goto B4654d2;
case 0x4654d5:c.instructions+=3;goto B4654d5;
case 0x4654d6:c.instructions+=2;goto B4654d6;
case 0x4654dd:c.instructions+=1;goto B4654dd;
case 0x4654e2:goto L4654e2;
case 0x4654e6:c.instructions+=5;goto B4654e6;
case 0x4654ea:c.instructions+=4;goto B4654ea;
case 0x4654ed:c.instructions+=3;goto B4654ed;
case 0x4654f3:c.instructions+=2;goto B4654f3;
case 0x4654f9:c.instructions+=1;goto B4654f9;
case 0x4654fe:goto L4654fe;
case 0x465501:c.instructions+=2;goto B465501;
case 0x465503:c.instructions+=1;goto B465503;
case 0x465508:goto L465508;
case 0x46550b:c.instructions+=2;goto B46550b;
case 0x46550d:c.instructions+=1;goto B46550d;
case 0x46550f:goto L46550f;
case 0x465516:goto L465516;
case 0x465518:c.instructions+=1;goto B465518;
case 0x46551d:goto L46551d;
case 0x46551f:c.instructions+=3;goto B46551f;
case 0x465520:c.instructions+=2;goto B465520;
case 0x465521:c.instructions+=1;goto B465521;
case 0x465523:goto L465523;
case 0x465526:c.instructions+=2;goto B465526;
case 0x465528:c.instructions+=1;goto B465528;
case 0x46552a:goto L46552a;
case 0x46552d:c.instructions+=3;goto B46552d;
case 0x46552e:c.instructions+=2;goto B46552e;
case 0x46552f:c.instructions+=1;goto B46552f;
case 0x465534:goto L465534;
case 0x465536:c.instructions+=4;goto B465536;
case 0x465539:c.instructions+=3;goto B465539;
case 0x46553a:c.instructions+=2;goto B46553a;
case 0x46553b:c.instructions+=1;goto B46553b;
case 0x46553c:goto L46553c;
case 0x46553f:c.instructions+=3;goto B46553f;
case 0x465540:c.instructions+=2;goto B465540;
case 0x465541:c.instructions+=1;goto B465541;
case 0x465546:goto L465546;
case 0x465549:goto L465549;
case 0x46554b:c.instructions+=3;goto B46554b;
case 0x46554c:c.instructions+=2;goto B46554c;
case 0x46554d:c.instructions+=1;goto B46554d;
case 0x465550:goto L465550;
case 0x465554:c.instructions+=3;goto B465554;
case 0x465556:c.instructions+=2;goto B465556;
case 0x465557:c.instructions+=1;goto B465557;
case 0x465559:goto L465559;
case 0x46555b:c.instructions+=2;goto B46555b;
case 0x465561:c.instructions+=1;goto B465561;
case 0x465563:goto L465563;
case 0x465565:c.instructions+=2;goto B465565;
case 0x465566:c.instructions+=1;goto B465566;
case 0x465567:goto L465567;
case 0x465568:c.instructions+=1;goto B465568;
case 0x46556d:goto L46556d;
case 0x46556f:c.instructions+=2;goto B46556f;
case 0x465571:c.instructions+=1;goto B465571;
case 0x465573:goto L465573;
case 0x465574:c.instructions+=2;goto B465574;
case 0x465575:c.instructions+=1;goto B465575;
case 0x465576:goto L465576;
case 0x46557a:c.instructions+=6;goto B46557a;
case 0x46557c:c.instructions+=5;goto B46557c;
case 0x46557d:c.instructions+=4;goto B46557d;
case 0x465581:c.instructions+=3;goto B465581;
case 0x465582:c.instructions+=2;goto B465582;
case 0x465586:c.instructions+=1;goto B465586;
case 0x465588:goto L465588;
case 0x46558b:c.instructions+=2;goto B46558b;
case 0x46558d:c.instructions+=1;goto B46558d;
case 0x46558f:goto L46558f;
case 0x465590:goto L465590;
case 0x465593:c.instructions+=4;goto B465593;
case 0x465595:c.instructions+=3;goto B465595;
case 0x465597:c.instructions+=2;goto B465597;
case 0x465599:c.instructions+=1;goto B465599;
case 0x46559b:goto L46559b;
case 0x46559e:goto L46559e;
case 0x4655a5:c.instructions+=4;goto B4655a5;
case 0x4655ab:c.instructions+=3;goto B4655ab;
case 0x4655b1:c.instructions+=2;goto B4655b1;
case 0x4655b7:c.instructions+=1;goto B4655b7;
case 0x4655bc:goto L4655bc;
case 0x4655bf:c.instructions+=2;goto B4655bf;
case 0x4655c1:c.instructions+=1;goto B4655c1;
case 0x4655c6:goto L4655c6;
case 0x4655c9:c.instructions+=2;goto B4655c9;
case 0x4655cb:c.instructions+=1;goto B4655cb;
case 0x4655cd:goto L4655cd;
case 0x4655d4:goto L4655d4;
case 0x4655d6:c.instructions+=1;goto B4655d6;
case 0x4655db:goto L4655db;
case 0x4655dd:c.instructions+=3;goto B4655dd;
case 0x4655de:c.instructions+=2;goto B4655de;
case 0x4655df:c.instructions+=1;goto B4655df;
case 0x4655e1:goto L4655e1;
case 0x4655e3:c.instructions+=2;goto B4655e3;
case 0x4655e4:c.instructions+=1;goto B4655e4;
case 0x4655e9:goto L4655e9;
case 0x4655ec:goto L4655ec;
case 0x4655ee:c.instructions+=3;goto B4655ee;
case 0x4655ef:c.instructions+=2;goto B4655ef;
case 0x4655f0:c.instructions+=1;goto B4655f0;
case 0x465600:goto L465600;
case 0x465601:c.instructions+=5;goto B465601;
case 0x465602:c.instructions+=4;goto B465602;
case 0x465606:c.instructions+=3;goto B465606;
case 0x465608:c.instructions+=2;goto B465608;
case 0x465609:c.instructions+=1;goto B465609;
case 0x46560b:goto L46560b;
case 0x46560d:c.instructions+=3;goto B46560d;
case 0x465614:c.instructions+=2;goto B465614;
case 0x465618:c.instructions+=1;goto B465618;
case 0x46561a:goto L46561a;
case 0x46561d:c.instructions+=2;goto B46561d;
case 0x46561f:c.instructions+=1;goto B46561f;
case 0x465621:goto L465621;
case 0x465622:c.instructions+=4;goto B465622;
case 0x465624:c.instructions+=3;goto B465624;
case 0x465625:c.instructions+=2;goto B465625;
case 0x465626:c.instructions+=1;goto B465626;
case 0x465627:goto L465627;
case 0x46562a:c.instructions+=9;goto B46562a;
case 0x46562b:c.instructions+=8;goto B46562b;
case 0x46562e:c.instructions+=7;goto B46562e;
case 0x465631:c.instructions+=6;goto B465631;
case 0x465637:c.instructions+=5;goto B465637;
case 0x465638:c.instructions+=4;goto B465638;
case 0x46563a:c.instructions+=3;goto B46563a;
case 0x46563e:c.instructions+=2;goto B46563e;
case 0x465641:c.instructions+=1;goto B465641;
case 0x465646:goto L465646;
case 0x465649:c.instructions+=4;goto B465649;
case 0x46564b:c.instructions+=3;goto B46564b;
case 0x46564d:c.instructions+=2;goto B46564d;
case 0x465650:c.instructions+=1;goto B465650;
case 0x465655:goto L465655;
case 0x465657:c.instructions+=1;goto B465657;
case 0x465659:goto L465659;
case 0x46565d:c.instructions+=8;goto B46565d;
case 0x465660:c.instructions+=7;goto B465660;
case 0x465663:c.instructions+=6;goto B465663;
case 0x465666:c.instructions+=5;goto B465666;
case 0x465668:c.instructions+=4;goto B465668;
case 0x46566b:c.instructions+=3;goto B46566b;
case 0x465671:c.instructions+=2;goto B465671;
case 0x465673:c.instructions+=1;goto B465673;
case 0x465675:goto L465675;
case 0x465678:c.instructions+=1;goto B465678;
case 0x46567a:goto L46567a;
case 0x46567e:c.instructions+=2;goto B46567e;
case 0x465681:c.instructions+=1;goto B465681;
case 0x465683:goto L465683;
case 0x465688:c.instructions+=1;goto B465688;
case 0x46568a:goto L46568a;
case 0x46568d:c.instructions+=4;goto B46568d;
case 0x46568f:c.instructions+=3;goto B46568f;
case 0x465695:c.instructions+=2;goto B465695;
case 0x465697:c.instructions+=1;goto B465697;
case 0x465699:goto L465699;
case 0x46569c:goto L46569c;
case 0x4656a0:c.instructions+=6;goto B4656a0;
case 0x4656a1:c.instructions+=5;goto B4656a1;
case 0x4656a2:c.instructions+=4;goto B4656a2;
case 0x4656a3:c.instructions+=3;goto B4656a3;
case 0x4656a4:c.instructions+=2;goto B4656a4;
case 0x4656a5:c.instructions+=1;goto B4656a5;
case 0x4656b0:goto L4656b0;
case 0x4656b4:c.instructions+=2;goto B4656b4;
case 0x4656b6:c.instructions+=1;goto B4656b6;
case 0x4656b8:goto L4656b8;
case 0x4656ba:c.instructions+=2;goto B4656ba;
case 0x4656c0:c.instructions+=1;goto B4656c0;
case 0x4656c2:goto L4656c2;
case 0x4656c4:c.instructions+=1;goto B4656c4;
case 0x4656c5:goto L4656c5;
case 0x4656c8:c.instructions+=1;goto B4656c8;
case 0x4656d0:goto L4656d0;
case 0x4656d4:c.instructions+=2;goto B4656d4;
case 0x4656d6:c.instructions+=1;goto B4656d6;
case 0x4656d8:goto L4656d8;
case 0x4656da:c.instructions+=2;goto B4656da;
case 0x4656e0:c.instructions+=1;goto B4656e0;
case 0x4656e2:goto L4656e2;
case 0x4656e4:c.instructions+=1;goto B4656e4;
case 0x4656e5:goto L4656e5;
case 0x4656e8:c.instructions+=1;goto B4656e8;
case 0x4656f0:goto L4656f0;
case 0x4656f4:c.instructions+=2;goto B4656f4;
case 0x4656f6:c.instructions+=1;goto B4656f6;
case 0x4656f8:goto L4656f8;
case 0x4656fa:c.instructions+=2;goto B4656fa;
case 0x465700:c.instructions+=1;goto B465700;
case 0x465702:goto L465702;
case 0x465704:c.instructions+=1;goto B465704;
case 0x465705:goto L465705;
case 0x465708:c.instructions+=2;goto B465708;
case 0x46570a:c.instructions+=1;goto B46570a;
case 0x46570c:goto L46570c;
case 0x46570f:c.instructions+=2;goto B46570f;
case 0x465711:c.instructions+=1;goto B465711;
case 0x465713:goto L465713;
case 0x465718:c.instructions+=1;goto B465718;
case 0x465719:goto L465719;
case 0x46571b:c.instructions+=1;goto B46571b;
case 0x465720:goto L465720;
case 0x465724:c.instructions+=2;goto B465724;
case 0x465726:c.instructions+=1;goto B465726;
case 0x465728:goto L465728;
case 0x46572a:c.instructions+=2;goto B46572a;
case 0x465730:c.instructions+=1;goto B465730;
case 0x465732:goto L465732;
case 0x465734:c.instructions+=1;goto B465734;
case 0x465735:goto L465735;
case 0x465738:c.instructions+=2;goto B465738;
case 0x46573b:c.instructions+=1;goto B46573b;
case 0x465740:goto L465740;
case 0x465744:c.instructions+=2;goto B465744;
case 0x465746:c.instructions+=1;goto B465746;
case 0x465748:goto L465748;
case 0x46574a:c.instructions+=2;goto B46574a;
case 0x465750:c.instructions+=1;goto B465750;
case 0x465752:goto L465752;
case 0x465754:c.instructions+=1;goto B465754;
case 0x465755:goto L465755;
case 0x465758:c.instructions+=1;goto B465758;
case 0x465760:goto L465760;
case 0x465761:c.instructions+=4;goto B465761;
case 0x465762:c.instructions+=3;goto B465762;
case 0x465766:c.instructions+=2;goto B465766;
case 0x465768:c.instructions+=1;goto B465768;
case 0x46576a:goto L46576a;
case 0x46576c:c.instructions+=2;goto B46576c;
case 0x465772:c.instructions+=1;goto B465772;
case 0x465774:goto L465774;
case 0x465777:c.instructions+=2;goto B465777;
case 0x465779:c.instructions+=1;goto B465779;
case 0x46577b:goto L46577b;
case 0x46577c:c.instructions+=3;goto B46577c;
case 0x46577e:c.instructions+=2;goto B46577e;
case 0x46577f:c.instructions+=1;goto B46577f;
case 0x465780:goto L465780;
case 0x465781:c.instructions+=4;goto B465781;
case 0x465782:c.instructions+=3;goto B465782;
case 0x465785:c.instructions+=2;goto B465785;
case 0x465787:c.instructions+=1;goto B465787;
case 0x46578c:goto L46578c;
case 0x46578f:c.instructions+=5;goto B46578f;
case 0x465792:c.instructions+=4;goto B465792;
case 0x465795:c.instructions+=3;goto B465795;
case 0x465797:c.instructions+=2;goto B465797;
case 0x46579a:c.instructions+=1;goto B46579a;
case 0x46579c:goto L46579c;
case 0x4657a1:goto L4657a1;
case 0x4657a4:c.instructions+=1;goto B4657a4;
case 0x4657a6:goto L4657a6;
case 0x4657ac:c.instructions+=2;goto B4657ac;
case 0x4657ae:c.instructions+=1;goto B4657ae;
case 0x4657b0:goto L4657b0;
case 0x4657b2:c.instructions+=1;goto B4657b2;
case 0x4657b4:goto L4657b4;
case 0x4657b6:goto L4657b6;
case 0x4657b8:c.instructions+=1;goto B4657b8;
case 0x4657ba:goto L4657ba;
case 0x4657bc:c.instructions+=1;goto B4657bc;
case 0x4657be:goto L4657be;
case 0x4657c0:c.instructions+=4;goto B4657c0;
case 0x4657c3:c.instructions+=3;goto B4657c3;
case 0x4657c5:c.instructions+=2;goto B4657c5;
case 0x4657c7:c.instructions+=1;goto B4657c7;
case 0x4657c9:goto L4657c9;
case 0x4657cb:c.instructions+=1;goto B4657cb;
case 0x4657d0:goto L4657d0;
case 0x4657d2:c.instructions+=5;goto B4657d2;
case 0x4657d3:c.instructions+=4;goto B4657d3;
case 0x4657d4:c.instructions+=3;goto B4657d4;
case 0x4657d5:c.instructions+=2;goto B4657d5;
case 0x4657d6:c.instructions+=1;goto B4657d6;
case 0x4657e0:goto L4657e0;
case 0x4657e4:c.instructions+=2;goto B4657e4;
case 0x4657e6:c.instructions+=1;goto B4657e6;
case 0x4657e8:goto L4657e8;
case 0x4657ea:c.instructions+=2;goto B4657ea;
case 0x4657f0:c.instructions+=1;goto B4657f0;
case 0x4657f2:goto L4657f2;
case 0x4657f4:c.instructions+=1;goto B4657f4;
case 0x4657f5:goto L4657f5;
case 0x4657f9:c.instructions+=6;goto B4657f9;
case 0x4657fb:c.instructions+=5;goto B4657fb;
case 0x4657fc:c.instructions+=4;goto B4657fc;
case 0x4657ff:c.instructions+=3;goto B4657ff;
case 0x465804:c.instructions+=2;goto B465804;
case 0x465806:c.instructions+=1;goto B465806;
case 0x465808:goto L465808;
case 0x46580b:c.instructions+=5;goto B46580b;
case 0x465811:c.instructions+=4;goto B465811;
case 0x465814:c.instructions+=3;goto B465814;
case 0x465816:c.instructions+=2;goto B465816;
case 0x465818:c.instructions+=1;goto B465818;
case 0x46581a:goto L46581a;
case 0x46581d:c.instructions+=2;goto B46581d;
case 0x46581f:c.instructions+=1;goto B46581f;
case 0x465821:goto L465821;
case 0x465823:goto L465823;
case 0x465824:c.instructions+=1;goto B465824;
case 0x465830:goto L465830;
case 0x465836:c.instructions+=3;goto B465836;
case 0x465837:c.instructions+=2;goto B465837;
case 0x46583c:c.instructions+=1;goto B46583c;
case 0x46583e:goto L46583e;
case 0x46583f:c.instructions+=1;goto B46583f;
case 0x465841:goto L465841;
case 0x465842:c.instructions+=1;goto B465842;
case 0x465844:goto L465844;
case 0x465849:c.instructions+=1;goto B465849;
case 0x46584b:goto L46584b;
case 0x46584d:goto L46584d;
case 0x465851:c.instructions+=39;goto B465851;
case 0x465858:c.instructions+=38;goto B465858;
case 0x465859:c.instructions+=37;goto B465859;
case 0x46585b:c.instructions+=36;goto B46585b;
case 0x46585e:c.instructions+=35;goto B46585e;
case 0x465868:c.instructions+=34;goto B465868;
case 0x46586a:c.instructions+=33;goto B46586a;
case 0x46586d:c.instructions+=32;goto B46586d;
case 0x465877:c.instructions+=31;goto B465877;
case 0x465879:c.instructions+=30;goto B465879;
case 0x46587c:c.instructions+=29;goto B46587c;
case 0x465882:c.instructions+=28;goto B465882;
case 0x465884:c.instructions+=27;goto B465884;
case 0x46588a:c.instructions+=26;goto B46588a;
case 0x46588d:c.instructions+=25;goto B46588d;
case 0x465893:c.instructions+=24;goto B465893;
case 0x465895:c.instructions+=23;goto B465895;
case 0x465898:c.instructions+=22;goto B465898;
case 0x46589e:c.instructions+=21;goto B46589e;
case 0x4658a0:c.instructions+=20;goto B4658a0;
case 0x4658a3:c.instructions+=19;goto B4658a3;
case 0x4658a9:c.instructions+=18;goto B4658a9;
case 0x4658ab:c.instructions+=17;goto B4658ab;
case 0x4658ae:c.instructions+=16;goto B4658ae;
case 0x4658b4:c.instructions+=15;goto B4658b4;
case 0x4658b6:c.instructions+=14;goto B4658b6;
case 0x4658b9:c.instructions+=13;goto B4658b9;
case 0x4658bf:c.instructions+=12;goto B4658bf;
case 0x4658c1:c.instructions+=11;goto B4658c1;
case 0x4658c4:c.instructions+=10;goto B4658c4;
case 0x4658ca:c.instructions+=9;goto B4658ca;
case 0x4658cc:c.instructions+=8;goto B4658cc;
case 0x4658cf:c.instructions+=7;goto B4658cf;
case 0x4658d5:c.instructions+=6;goto B4658d5;
case 0x4658d7:c.instructions+=5;goto B4658d7;
case 0x4658da:c.instructions+=4;goto B4658da;
case 0x4658e4:c.instructions+=3;goto B4658e4;
case 0x4658e6:c.instructions+=2;goto B4658e6;
case 0x4658e7:c.instructions+=1;goto B4658e7;
case 0x4658f0:goto L4658f0;
case 0x4658f4:c.instructions+=38;goto B4658f4;
case 0x4658f6:c.instructions+=37;goto B4658f6;
case 0x4658f9:c.instructions+=36;goto B4658f9;
case 0x465903:c.instructions+=35;goto B465903;
case 0x465905:c.instructions+=34;goto B465905;
case 0x465908:c.instructions+=33;goto B465908;
case 0x465912:c.instructions+=32;goto B465912;
case 0x465914:c.instructions+=31;goto B465914;
case 0x46591a:c.instructions+=30;goto B46591a;
case 0x46591d:c.instructions+=29;goto B46591d;
case 0x465923:c.instructions+=28;goto B465923;
case 0x465925:c.instructions+=27;goto B465925;
case 0x46592b:c.instructions+=26;goto B46592b;
case 0x46592e:c.instructions+=25;goto B46592e;
case 0x465934:c.instructions+=24;goto B465934;
case 0x465936:c.instructions+=23;goto B465936;
case 0x465939:c.instructions+=22;goto B465939;
case 0x46593b:c.instructions+=21;goto B46593b;
case 0x465941:c.instructions+=20;goto B465941;
case 0x465943:c.instructions+=19;goto B465943;
case 0x465946:c.instructions+=18;goto B465946;
case 0x46594c:c.instructions+=17;goto B46594c;
case 0x46594e:c.instructions+=16;goto B46594e;
case 0x465951:c.instructions+=15;goto B465951;
case 0x465957:c.instructions+=14;goto B465957;
case 0x465959:c.instructions+=13;goto B465959;
case 0x46595c:c.instructions+=12;goto B46595c;
case 0x465962:c.instructions+=11;goto B465962;
case 0x465964:c.instructions+=10;goto B465964;
case 0x465967:c.instructions+=9;goto B465967;
case 0x46596d:c.instructions+=8;goto B46596d;
case 0x46596f:c.instructions+=7;goto B46596f;
case 0x465972:c.instructions+=6;goto B465972;
case 0x465978:c.instructions+=5;goto B465978;
case 0x46597a:c.instructions+=4;goto B46597a;
case 0x46597d:c.instructions+=3;goto B46597d;
case 0x465987:c.instructions+=2;goto B465987;
case 0x465989:c.instructions+=1;goto B465989;
case 0x465990:goto L465990;
case 0x465991:c.instructions+=47;goto B465991;
case 0x465992:c.instructions+=46;goto B465992;
case 0x465996:c.instructions+=45;goto B465996;
case 0x465998:c.instructions+=44;goto B465998;
case 0x46599b:c.instructions+=43;goto B46599b;
case 0x4659a5:c.instructions+=42;goto B4659a5;
case 0x4659a7:c.instructions+=41;goto B4659a7;
case 0x4659a9:c.instructions+=40;goto B4659a9;
case 0x4659ac:c.instructions+=39;goto B4659ac;
case 0x4659b6:c.instructions+=38;goto B4659b6;
case 0x4659b8:c.instructions+=37;goto B4659b8;
case 0x4659be:c.instructions+=36;goto B4659be;
case 0x4659c1:c.instructions+=35;goto B4659c1;
case 0x4659c3:c.instructions+=34;goto B4659c3;
case 0x4659c9:c.instructions+=33;goto B4659c9;
case 0x4659cb:c.instructions+=32;goto B4659cb;
case 0x4659d0:c.instructions+=31;goto B4659d0;
case 0x4659d3:c.instructions+=30;goto B4659d3;
case 0x4659d9:c.instructions+=29;goto B4659d9;
case 0x4659db:c.instructions+=28;goto B4659db;
case 0x4659de:c.instructions+=27;goto B4659de;
case 0x4659df:c.instructions+=26;goto B4659df;
case 0x4659e1:c.instructions+=25;goto B4659e1;
case 0x4659e7:c.instructions+=24;goto B4659e7;
case 0x4659e9:c.instructions+=23;goto B4659e9;
case 0x4659ec:c.instructions+=22;goto B4659ec;
case 0x4659f2:c.instructions+=21;goto B4659f2;
case 0x4659f4:c.instructions+=20;goto B4659f4;
case 0x4659f7:c.instructions+=19;goto B4659f7;
case 0x4659fd:c.instructions+=18;goto B4659fd;
case 0x4659ff:c.instructions+=17;goto B4659ff;
case 0x465a02:c.instructions+=16;goto B465a02;
case 0x465a08:c.instructions+=15;goto B465a08;
case 0x465a0a:c.instructions+=14;goto B465a0a;
case 0x465a0d:c.instructions+=13;goto B465a0d;
case 0x465a13:c.instructions+=12;goto B465a13;
case 0x465a15:c.instructions+=11;goto B465a15;
case 0x465a18:c.instructions+=10;goto B465a18;
case 0x465a1e:c.instructions+=9;goto B465a1e;
case 0x465a20:c.instructions+=8;goto B465a20;
case 0x465a23:c.instructions+=7;goto B465a23;
case 0x465a2d:c.instructions+=6;goto B465a2d;
case 0x465a2f:c.instructions+=5;goto B465a2f;
case 0x465a35:c.instructions+=4;goto B465a35;
case 0x465a37:c.instructions+=3;goto B465a37;
case 0x465a3c:c.instructions+=2;goto B465a3c;
case 0x465a3d:c.instructions+=1;goto B465a3d;
case 0x465a42:goto L465a42;
case 0x465a45:c.instructions+=2;goto B465a45;
case 0x465a47:c.instructions+=1;goto B465a47;
case 0x465a4d:goto L465a4d;
case 0x465a4f:c.instructions+=36;goto B465a4f;
case 0x465a52:c.instructions+=35;goto B465a52;
case 0x465a5c:c.instructions+=34;goto B465a5c;
case 0x465a5e:c.instructions+=33;goto B465a5e;
case 0x465a61:c.instructions+=32;goto B465a61;
case 0x465a6b:c.instructions+=31;goto B465a6b;
case 0x465a6d:c.instructions+=30;goto B465a6d;
case 0x465a73:c.instructions+=29;goto B465a73;
case 0x465a76:c.instructions+=28;goto B465a76;
case 0x465a78:c.instructions+=27;goto B465a78;
case 0x465a7e:c.instructions+=26;goto B465a7e;
case 0x465a80:c.instructions+=25;goto B465a80;
case 0x465a86:c.instructions+=24;goto B465a86;
case 0x465a89:c.instructions+=23;goto B465a89;
case 0x465a8f:c.instructions+=22;goto B465a8f;
case 0x465a91:c.instructions+=21;goto B465a91;
case 0x465a94:c.instructions+=20;goto B465a94;
case 0x465a9a:c.instructions+=19;goto B465a9a;
case 0x465a9c:c.instructions+=18;goto B465a9c;
case 0x465a9f:c.instructions+=17;goto B465a9f;
case 0x465aa5:c.instructions+=16;goto B465aa5;
case 0x465aa7:c.instructions+=15;goto B465aa7;
case 0x465aaa:c.instructions+=14;goto B465aaa;
case 0x465ab0:c.instructions+=13;goto B465ab0;
case 0x465ab2:c.instructions+=12;goto B465ab2;
case 0x465ab5:c.instructions+=11;goto B465ab5;
case 0x465abb:c.instructions+=10;goto B465abb;
case 0x465abd:c.instructions+=9;goto B465abd;
case 0x465ac0:c.instructions+=8;goto B465ac0;
case 0x465ac6:c.instructions+=7;goto B465ac6;
case 0x465ac8:c.instructions+=6;goto B465ac8;
case 0x465acb:c.instructions+=5;goto B465acb;
case 0x465ad1:c.instructions+=4;goto B465ad1;
case 0x465ad3:c.instructions+=3;goto B465ad3;
case 0x465ad6:c.instructions+=2;goto B465ad6;
case 0x465ae0:c.instructions+=1;goto B465ae0;
case 0x465ae2:goto L465ae2;
case 0x465ae3:c.instructions+=3;goto B465ae3;
case 0x465ae4:c.instructions+=2;goto B465ae4;
case 0x465ae5:c.instructions+=1;goto B465ae5;
case 0x465af0:goto L465af0;
case 0x465af4:c.instructions+=39;goto B465af4;
case 0x465af6:c.instructions+=38;goto B465af6;
case 0x465af9:c.instructions+=37;goto B465af9;
case 0x465b03:c.instructions+=36;goto B465b03;
case 0x465b05:c.instructions+=35;goto B465b05;
case 0x465b08:c.instructions+=34;goto B465b08;
case 0x465b12:c.instructions+=33;goto B465b12;
case 0x465b14:c.instructions+=32;goto B465b14;
case 0x465b1a:c.instructions+=31;goto B465b1a;
case 0x465b1d:c.instructions+=30;goto B465b1d;
case 0x465b1f:c.instructions+=29;goto B465b1f;
case 0x465b25:c.instructions+=28;goto B465b25;
case 0x465b27:c.instructions+=27;goto B465b27;
case 0x465b2d:c.instructions+=26;goto B465b2d;
case 0x465b30:c.instructions+=25;goto B465b30;
case 0x465b36:c.instructions+=24;goto B465b36;
case 0x465b38:c.instructions+=23;goto B465b38;
case 0x465b3b:c.instructions+=22;goto B465b3b;
case 0x465b3d:c.instructions+=21;goto B465b3d;
case 0x465b43:c.instructions+=20;goto B465b43;
case 0x465b45:c.instructions+=19;goto B465b45;
case 0x465b48:c.instructions+=18;goto B465b48;
case 0x465b4e:c.instructions+=17;goto B465b4e;
case 0x465b50:c.instructions+=16;goto B465b50;
case 0x465b53:c.instructions+=15;goto B465b53;
case 0x465b59:c.instructions+=14;goto B465b59;
case 0x465b5b:c.instructions+=13;goto B465b5b;
case 0x465b5e:c.instructions+=12;goto B465b5e;
case 0x465b64:c.instructions+=11;goto B465b64;
case 0x465b66:c.instructions+=10;goto B465b66;
case 0x465b69:c.instructions+=9;goto B465b69;
case 0x465b6f:c.instructions+=8;goto B465b6f;
case 0x465b71:c.instructions+=7;goto B465b71;
case 0x465b74:c.instructions+=6;goto B465b74;
case 0x465b7a:c.instructions+=5;goto B465b7a;
case 0x465b7c:c.instructions+=4;goto B465b7c;
case 0x465b7f:c.instructions+=3;goto B465b7f;
case 0x465b89:c.instructions+=2;goto B465b89;
case 0x465b8b:c.instructions+=1;goto B465b8b;
case 0x465b90:goto L465b90;
case 0x465b95:c.instructions+=6;goto B465b95;
case 0x465b96:c.instructions+=5;goto B465b96;
case 0x465b98:c.instructions+=4;goto B465b98;
case 0x465b9a:c.instructions+=3;goto B465b9a;
case 0x465b9b:c.instructions+=2;goto B465b9b;
case 0x465b9d:c.instructions+=1;goto B465b9d;
case 0x465b9f:goto L465b9f;
case 0x465ba5:c.instructions+=1;goto B465ba5;
case 0x465ba7:goto L465ba7;
case 0x465ba9:c.instructions+=1;goto B465ba9;
case 0x465bab:goto L465bab;
case 0x465bb0:goto L465bb0;
case 0x465bb2:c.instructions+=8;goto B465bb2;
case 0x465bb4:c.instructions+=7;goto B465bb4;
case 0x465bb7:c.instructions+=6;goto B465bb7;
case 0x465bb9:c.instructions+=5;goto B465bb9;
case 0x465bbf:c.instructions+=4;goto B465bbf;
case 0x465bc5:c.instructions+=3;goto B465bc5;
case 0x465bcb:c.instructions+=2;goto B465bcb;
case 0x465bcc:c.instructions+=1;goto B465bcc;
case 0x465bd1:goto L465bd1;
case 0x465bd5:c.instructions+=47;goto B465bd5;
case 0x465bd7:c.instructions+=46;goto B465bd7;
case 0x465bda:c.instructions+=45;goto B465bda;
case 0x465bdd:c.instructions+=44;goto B465bdd;
case 0x465bdf:c.instructions+=43;goto B465bdf;
case 0x465be1:c.instructions+=42;goto B465be1;
case 0x465be4:c.instructions+=41;goto B465be4;
case 0x465bee:c.instructions+=40;goto B465bee;
case 0x465bf0:c.instructions+=39;goto B465bf0;
case 0x465bf1:c.instructions+=38;goto B465bf1;
case 0x465bf4:c.instructions+=37;goto B465bf4;
case 0x465bfe:c.instructions+=36;goto B465bfe;
case 0x465c01:c.instructions+=35;goto B465c01;
case 0x465c03:c.instructions+=34;goto B465c03;
case 0x465c0a:c.instructions+=33;goto B465c0a;
case 0x465c0d:c.instructions+=32;goto B465c0d;
case 0x465c13:c.instructions+=31;goto B465c13;
case 0x465c15:c.instructions+=30;goto B465c15;
case 0x465c1b:c.instructions+=29;goto B465c1b;
case 0x465c1e:c.instructions+=28;goto B465c1e;
case 0x465c24:c.instructions+=27;goto B465c24;
case 0x465c26:c.instructions+=26;goto B465c26;
case 0x465c29:c.instructions+=25;goto B465c29;
case 0x465c2f:c.instructions+=24;goto B465c2f;
case 0x465c31:c.instructions+=23;goto B465c31;
case 0x465c34:c.instructions+=22;goto B465c34;
case 0x465c3a:c.instructions+=21;goto B465c3a;
case 0x465c3c:c.instructions+=20;goto B465c3c;
case 0x465c3f:c.instructions+=19;goto B465c3f;
case 0x465c45:c.instructions+=18;goto B465c45;
case 0x465c47:c.instructions+=17;goto B465c47;
case 0x465c4a:c.instructions+=16;goto B465c4a;
case 0x465c50:c.instructions+=15;goto B465c50;
case 0x465c52:c.instructions+=14;goto B465c52;
case 0x465c55:c.instructions+=13;goto B465c55;
case 0x465c5b:c.instructions+=12;goto B465c5b;
case 0x465c5d:c.instructions+=11;goto B465c5d;
case 0x465c60:c.instructions+=10;goto B465c60;
case 0x465c66:c.instructions+=9;goto B465c66;
case 0x465c68:c.instructions+=8;goto B465c68;
case 0x465c6b:c.instructions+=7;goto B465c6b;
case 0x465c75:c.instructions+=6;goto B465c75;
case 0x465c77:c.instructions+=5;goto B465c77;
case 0x465c78:c.instructions+=4;goto B465c78;
case 0x465c79:c.instructions+=3;goto B465c79;
case 0x465c7b:c.instructions+=2;goto B465c7b;
case 0x465c7c:c.instructions+=1;goto B465c7c;
case 0x465c80:goto L465c80;
case 0x465c84:c.instructions+=14;goto B465c84;
case 0x465c87:c.instructions+=13;goto B465c87;
case 0x465c88:c.instructions+=12;goto B465c88;
case 0x465c89:c.instructions+=11;goto B465c89;
case 0x465c8a:c.instructions+=10;goto B465c8a;
case 0x465c8c:c.instructions+=9;goto B465c8c;
case 0x465c8e:c.instructions+=8;goto B465c8e;
case 0x465c91:c.instructions+=7;goto B465c91;
case 0x465c96:c.instructions+=6;goto B465c96;
case 0x465c9c:c.instructions+=5;goto B465c9c;
case 0x465ca2:c.instructions+=4;goto B465ca2;
case 0x465ca4:c.instructions+=3;goto B465ca4;
case 0x465ca7:c.instructions+=2;goto B465ca7;
case 0x465ca8:c.instructions+=1;goto B465ca8;
case 0x465caa:goto L465caa;
case 0x465cac:c.instructions+=9;goto B465cac;
case 0x465caf:c.instructions+=8;goto B465caf;
case 0x465cb5:c.instructions+=7;goto B465cb5;
case 0x465cbb:c.instructions+=6;goto B465cbb;
case 0x465cc1:c.instructions+=5;goto B465cc1;
case 0x465cc3:c.instructions+=4;goto B465cc3;
case 0x465cc6:c.instructions+=3;goto B465cc6;
case 0x465cc9:c.instructions+=2;goto B465cc9;
case 0x465ccf:c.instructions+=1;goto B465ccf;
case 0x465cd1:goto L465cd1;
case 0x465cd3:c.instructions+=8;goto B465cd3;
case 0x465cd6:c.instructions+=7;goto B465cd6;
case 0x465cdc:c.instructions+=6;goto B465cdc;
case 0x465ce2:c.instructions+=5;goto B465ce2;
case 0x465ce8:c.instructions+=4;goto B465ce8;
case 0x465cea:c.instructions+=3;goto B465cea;
case 0x465cec:c.instructions+=2;goto B465cec;
case 0x465cef:c.instructions+=1;goto B465cef;
case 0x465cf5:goto L465cf5;
case 0x465cf7:c.instructions+=34;goto B465cf7;
case 0x465cfd:c.instructions+=33;goto B465cfd;
case 0x465d00:c.instructions+=32;goto B465d00;
case 0x465d06:c.instructions+=31;goto B465d06;
case 0x465d08:c.instructions+=30;goto B465d08;
case 0x465d0b:c.instructions+=29;goto B465d0b;
case 0x465d11:c.instructions+=28;goto B465d11;
case 0x465d13:c.instructions+=27;goto B465d13;
case 0x465d16:c.instructions+=26;goto B465d16;
case 0x465d1c:c.instructions+=25;goto B465d1c;
case 0x465d1e:c.instructions+=24;goto B465d1e;
case 0x465d21:c.instructions+=23;goto B465d21;
case 0x465d27:c.instructions+=22;goto B465d27;
case 0x465d29:c.instructions+=21;goto B465d29;
case 0x465d2c:c.instructions+=20;goto B465d2c;
case 0x465d32:c.instructions+=19;goto B465d32;
case 0x465d34:c.instructions+=18;goto B465d34;
case 0x465d37:c.instructions+=17;goto B465d37;
case 0x465d3d:c.instructions+=16;goto B465d3d;
case 0x465d3f:c.instructions+=15;goto B465d3f;
case 0x465d42:c.instructions+=14;goto B465d42;
case 0x465d48:c.instructions+=13;goto B465d48;
case 0x465d4a:c.instructions+=12;goto B465d4a;
case 0x465d4d:c.instructions+=11;goto B465d4d;
case 0x465d57:c.instructions+=10;goto B465d57;
case 0x465d59:c.instructions+=9;goto B465d59;
case 0x465d5f:c.instructions+=8;goto B465d5f;
case 0x465d65:c.instructions+=7;goto B465d65;
case 0x465d68:c.instructions+=6;goto B465d68;
case 0x465d6d:c.instructions+=5;goto B465d6d;
case 0x465d6e:c.instructions+=4;goto B465d6e;
case 0x465d6f:c.instructions+=3;goto B465d6f;
case 0x465d73:c.instructions+=2;goto B465d73;
case 0x465d74:c.instructions+=1;goto B465d74;
case 0x465d79:goto L465d79;
case 0x465d7d:c.instructions+=2;goto B465d7d;
case 0x465d7e:c.instructions+=1;goto B465d7e;
case 0x465d83:goto L465d83;
case 0x465d85:c.instructions+=3;goto B465d85;
case 0x465d88:c.instructions+=2;goto B465d88;
case 0x465d8a:c.instructions+=1;goto B465d8a;
case 0x465d8c:goto L465d8c;
case 0x465d91:c.instructions+=3;goto B465d91;
case 0x465d92:c.instructions+=2;goto B465d92;
case 0x465d94:c.instructions+=1;goto B465d94;
case 0x465d99:goto L465d99;
case 0x465d9f:c.instructions+=3;goto B465d9f;
case 0x465da2:c.instructions+=2;goto B465da2;
case 0x465da4:c.instructions+=1;goto B465da4;
case 0x465da6:goto L465da6;
case 0x465dac:c.instructions+=5;goto B465dac;
case 0x465daf:c.instructions+=4;goto B465daf;
case 0x465db5:c.instructions+=3;goto B465db5;
case 0x465db6:c.instructions+=2;goto B465db6;
case 0x465db7:c.instructions+=1;goto B465db7;
case 0x465dbc:goto L465dbc;
case 0x465dbf:c.instructions+=1;goto B465dbf;
case 0x465dc1:goto L465dc1;
case 0x465dc7:c.instructions+=11;goto B465dc7;
case 0x465dca:c.instructions+=10;goto B465dca;
case 0x465dd0:c.instructions+=9;goto B465dd0;
case 0x465dd1:c.instructions+=8;goto B465dd1;
case 0x465dd6:c.instructions+=7;goto B465dd6;
case 0x465dd7:c.instructions+=6;goto B465dd7;
case 0x465dd8:c.instructions+=5;goto B465dd8;
case 0x465ddc:c.instructions+=4;goto B465ddc;
case 0x465ddd:c.instructions+=3;goto B465ddd;
case 0x465dde:c.instructions+=2;goto B465dde;
case 0x465de5:c.instructions+=1;goto B465de5;
case 0x465dea:goto L465dea;
case 0x465ded:c.instructions+=1;goto B465ded;
case 0x465df2:goto L465df2;
case 0x465df8:c.instructions+=2;goto B465df8;
case 0x465dfb:c.instructions+=1;goto B465dfb;
case 0x465e01:goto L465e01;
case 0x465e07:c.instructions+=7;goto B465e07;
case 0x465e09:c.instructions+=6;goto B465e09;
case 0x465e0e:c.instructions+=5;goto B465e0e;
case 0x465e0f:c.instructions+=4;goto B465e0f;
case 0x465e10:c.instructions+=3;goto B465e10;
case 0x465e14:c.instructions+=2;goto B465e14;
case 0x465e15:c.instructions+=1;goto B465e15;
case 0x465e1a:goto L465e1a;
case 0x465e1e:c.instructions+=2;goto B465e1e;
case 0x465e1f:c.instructions+=1;goto B465e1f;
case 0x465e24:goto L465e24;
case 0x465e26:c.instructions+=3;goto B465e26;
case 0x465e29:c.instructions+=2;goto B465e29;
case 0x465e2b:c.instructions+=1;goto B465e2b;
case 0x465e2d:goto L465e2d;
case 0x465e32:c.instructions+=3;goto B465e32;
case 0x465e33:c.instructions+=2;goto B465e33;
case 0x465e35:c.instructions+=1;goto B465e35;
case 0x465e3a:goto L465e3a;
case 0x465e40:c.instructions+=3;goto B465e40;
case 0x465e43:c.instructions+=2;goto B465e43;
case 0x465e45:c.instructions+=1;goto B465e45;
case 0x465e47:goto L465e47;
case 0x465e4d:c.instructions+=5;goto B465e4d;
case 0x465e50:c.instructions+=4;goto B465e50;
case 0x465e56:c.instructions+=3;goto B465e56;
case 0x465e57:c.instructions+=2;goto B465e57;
case 0x465e58:c.instructions+=1;goto B465e58;
case 0x465e5d:goto L465e5d;
case 0x465e60:c.instructions+=1;goto B465e60;
case 0x465e62:goto L465e62;
case 0x465e68:c.instructions+=11;goto B465e68;
case 0x465e6b:c.instructions+=10;goto B465e6b;
case 0x465e71:c.instructions+=9;goto B465e71;
case 0x465e72:c.instructions+=8;goto B465e72;
case 0x465e77:c.instructions+=7;goto B465e77;
case 0x465e78:c.instructions+=6;goto B465e78;
case 0x465e79:c.instructions+=5;goto B465e79;
case 0x465e7d:c.instructions+=4;goto B465e7d;
case 0x465e7e:c.instructions+=3;goto B465e7e;
case 0x465e7f:c.instructions+=2;goto B465e7f;
case 0x465e86:c.instructions+=1;goto B465e86;
case 0x465e8b:goto L465e8b;
case 0x465e8e:goto L465e8e;
case 0x465e8f:c.instructions+=5;goto B465e8f;
case 0x465e90:c.instructions+=4;goto B465e90;
case 0x465e91:c.instructions+=3;goto B465e91;
case 0x465e92:c.instructions+=2;goto B465e92;
case 0x465e95:c.instructions+=1;goto B465e95;
case 0x465ea0:goto L465ea0;
case 0x465ea6:c.instructions+=48;goto B465ea6;
case 0x465eac:c.instructions+=47;goto B465eac;
case 0x465eb1:c.instructions+=46;goto B465eb1;
case 0x465eb3:c.instructions+=45;goto B465eb3;
case 0x465eb7:c.instructions+=44;goto B465eb7;
case 0x465ebe:c.instructions+=43;goto B465ebe;
case 0x465ebf:c.instructions+=42;goto B465ebf;
case 0x465ec1:c.instructions+=41;goto B465ec1;
case 0x465ec4:c.instructions+=40;goto B465ec4;
case 0x465ec9:c.instructions+=39;goto B465ec9;
case 0x465ecf:c.instructions+=38;goto B465ecf;
case 0x465ed1:c.instructions+=37;goto B465ed1;
case 0x465ed4:c.instructions+=36;goto B465ed4;
case 0x465eda:c.instructions+=35;goto B465eda;
case 0x465ee0:c.instructions+=34;goto B465ee0;
case 0x465ee6:c.instructions+=33;goto B465ee6;
case 0x465ee9:c.instructions+=32;goto B465ee9;
case 0x465eeb:c.instructions+=31;goto B465eeb;
case 0x465eee:c.instructions+=30;goto B465eee;
case 0x465ef4:c.instructions+=29;goto B465ef4;
case 0x465ef6:c.instructions+=28;goto B465ef6;
case 0x465efc:c.instructions+=27;goto B465efc;
case 0x465eff:c.instructions+=26;goto B465eff;
case 0x465f05:c.instructions+=25;goto B465f05;
case 0x465f07:c.instructions+=24;goto B465f07;
case 0x465f0a:c.instructions+=23;goto B465f0a;
case 0x465f0c:c.instructions+=22;goto B465f0c;
case 0x465f12:c.instructions+=21;goto B465f12;
case 0x465f14:c.instructions+=20;goto B465f14;
case 0x465f17:c.instructions+=19;goto B465f17;
case 0x465f1d:c.instructions+=18;goto B465f1d;
case 0x465f1f:c.instructions+=17;goto B465f1f;
case 0x465f22:c.instructions+=16;goto B465f22;
case 0x465f28:c.instructions+=15;goto B465f28;
case 0x465f2a:c.instructions+=14;goto B465f2a;
case 0x465f2d:c.instructions+=13;goto B465f2d;
case 0x465f33:c.instructions+=12;goto B465f33;
case 0x465f35:c.instructions+=11;goto B465f35;
case 0x465f38:c.instructions+=10;goto B465f38;
case 0x465f3e:c.instructions+=9;goto B465f3e;
case 0x465f40:c.instructions+=8;goto B465f40;
case 0x465f43:c.instructions+=7;goto B465f43;
case 0x465f49:c.instructions+=6;goto B465f49;
case 0x465f4b:c.instructions+=5;goto B465f4b;
case 0x465f4e:c.instructions+=4;goto B465f4e;
case 0x465f58:c.instructions+=3;goto B465f58;
case 0x465f5a:c.instructions+=2;goto B465f5a;
case 0x465f5b:c.instructions+=1;goto B465f5b;
case 0x465f60:goto L465f60;
case 0x465f64:c.instructions+=38;goto B465f64;
case 0x465f66:c.instructions+=37;goto B465f66;
case 0x465f69:c.instructions+=36;goto B465f69;
case 0x465f73:c.instructions+=35;goto B465f73;
case 0x465f75:c.instructions+=34;goto B465f75;
case 0x465f78:c.instructions+=33;goto B465f78;
case 0x465f82:c.instructions+=32;goto B465f82;
case 0x465f84:c.instructions+=31;goto B465f84;
case 0x465f8a:c.instructions+=30;goto B465f8a;
case 0x465f8d:c.instructions+=29;goto B465f8d;
case 0x465f93:c.instructions+=28;goto B465f93;
case 0x465f95:c.instructions+=27;goto B465f95;
case 0x465f9b:c.instructions+=26;goto B465f9b;
case 0x465f9e:c.instructions+=25;goto B465f9e;
case 0x465fa4:c.instructions+=24;goto B465fa4;
case 0x465fa6:c.instructions+=23;goto B465fa6;
case 0x465fa9:c.instructions+=22;goto B465fa9;
case 0x465fab:c.instructions+=21;goto B465fab;
case 0x465fb1:c.instructions+=20;goto B465fb1;
case 0x465fb3:c.instructions+=19;goto B465fb3;
case 0x465fb6:c.instructions+=18;goto B465fb6;
case 0x465fbc:c.instructions+=17;goto B465fbc;
case 0x465fbe:c.instructions+=16;goto B465fbe;
case 0x465fc1:c.instructions+=15;goto B465fc1;
case 0x465fc7:c.instructions+=14;goto B465fc7;
case 0x465fc9:c.instructions+=13;goto B465fc9;
case 0x465fcc:c.instructions+=12;goto B465fcc;
case 0x465fd2:c.instructions+=11;goto B465fd2;
case 0x465fd4:c.instructions+=10;goto B465fd4;
case 0x465fd7:c.instructions+=9;goto B465fd7;
case 0x465fdd:c.instructions+=8;goto B465fdd;
case 0x465fdf:c.instructions+=7;goto B465fdf;
case 0x465fe2:c.instructions+=6;goto B465fe2;
case 0x465fe8:c.instructions+=5;goto B465fe8;
case 0x465fea:c.instructions+=4;goto B465fea;
case 0x465fed:c.instructions+=3;goto B465fed;
case 0x465ff7:c.instructions+=2;goto B465ff7;
case 0x465ff9:c.instructions+=1;goto B465ff9;
default:missing_instruction(c.pc);}
B465000:L465000:{c.instructions+=1;NFSU2_TR(0x465000);
if(r1(R+518)){{goto L465012;}}
}
B465002:L465002:{c.instructions+=4;NFSU2_TR(0x465002);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465008:{NFSU2_TR(0x465008);
w4(R+28,u32(0x8ull));
}
B46500d:{NFSU2_TR(0x46500d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B46500f:{NFSU2_TR(0x46500f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465012:L465012:{c.instructions+=5;NFSU2_TR(0x465012);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465015:{NFSU2_TR(0x465015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B465018:{NFSU2_TR(0x465018);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B46501b:{NFSU2_TR(0x46501b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46501d:{NFSU2_TR(0x46501d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x464fdbu,464);}
}
B46501f:L46501f:{c.instructions+=3;NFSU2_TR(0x46501f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B465021:{NFSU2_TR(0x465021);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B465027:{NFSU2_TR(0x465027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465035;}}
}
B465029:L465029:{c.instructions+=4;NFSU2_TR(0x465029);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B46502c:{NFSU2_TR(0x46502c);
u8 U[12];
w4(U+0,u32(u32(u32(0x3full))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B465030:{NFSU2_TR(0x465030);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffffc0ull))));
}
B465033:{NFSU2_TR(0x465033);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B465035:L465035:{c.instructions+=4;NFSU2_TR(0x465035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465038:{NFSU2_TR(0x465038);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46503a:{NFSU2_TR(0x46503a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46503c:{NFSU2_TR(0x46503c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L465055;}}
}
B46503e:L46503e:{c.instructions+=1;NFSU2_TR(0x46503e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465041:L465041:{c.instructions+=4;NFSU2_TR(0x465041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B465043:{NFSU2_TR(0x465043);
w4(R+20,u32(u32(r4(R+20))&u32(r4(R+12))));
}
B465045:{NFSU2_TR(0x465045);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B465048:{NFSU2_TR(0x465048);
if(r1(R+518)){{goto L46505c;}}
}
B46504a:L46504a:{c.instructions+=5;NFSU2_TR(0x46504a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46504d:{NFSU2_TR(0x46504d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B46504e:{NFSU2_TR(0x46504e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B465051:{NFSU2_TR(0x465051);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B465053:{NFSU2_TR(0x465053);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465041u);}goto L465041;}}
}
B465055:L465055:{c.instructions+=2;NFSU2_TR(0x465055);
w4(R+20,u32(0xfffffffeull));
}
B46505a:{NFSU2_TR(0x46505a);
{goto L465063;}
}
B46505c:L46505c:{c.instructions+=3;NFSU2_TR(0x46505c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46505f:{NFSU2_TR(0x46505f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B465061:{NFSU2_TR(0x465061);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46508d;}}
}
B465063:L465063:{c.instructions+=2;NFSU2_TR(0x465063);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B465066:{NFSU2_TR(0x465066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46506bull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B46506b:L46506b:{c.instructions+=7;NFSU2_TR(0x46506b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46506f:{NFSU2_TR(0x46506f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465072:{NFSU2_TR(0x465072);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B465074:{NFSU2_TR(0x465074);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465077:{NFSU2_TR(0x465077);
__builtin_memmove((R+12),(R+518),1);
}
B46507a:{NFSU2_TR(0x46507a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46507c:{NFSU2_TR(0x46507c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4650f6;}}
}
B46507e:L46507e:{c.instructions+=4;NFSU2_TR(0x46507e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465082:{NFSU2_TR(0x465082);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
s4(u32(r4(R+8)),r4(U+0));
}
B465088:{NFSU2_TR(0x465088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B46508b:{NFSU2_TR(0x46508b);
{goto L4650f6;}
}
B46508d:L46508d:{c.instructions+=6;NFSU2_TR(0x46508d);
__builtin_memmove((R+0),(R+20),4);
}
B46508f:{NFSU2_TR(0x46508f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B465092:{NFSU2_TR(0x465092);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B465094:{NFSU2_TR(0x465094);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B465097:{NFSU2_TR(0x465097);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46509a:{NFSU2_TR(0x46509a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46509full));
TAIL_STATIC(0x6f55ddu,6f5);
}
B46509f:L46509f:{c.instructions+=7;NFSU2_TR(0x46509f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4650a3:{NFSU2_TR(0x4650a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4650a6:{NFSU2_TR(0x4650a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4650a8:{NFSU2_TR(0x4650a8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4650ab:{NFSU2_TR(0x4650ab);
__builtin_memmove((R+12),(R+518),1);
}
B4650ae:{NFSU2_TR(0x4650ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4650b0:{NFSU2_TR(0x4650b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4650f6;}}
}
B4650b2:L4650b2:{c.instructions+=10;NFSU2_TR(0x4650b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4650b5:{NFSU2_TR(0x4650b5);
__builtin_memmove((R+8),(R+20),4);
}
B4650b7:{NFSU2_TR(0x4650b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4650ba:{NFSU2_TR(0x4650ba);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4650be:{NFSU2_TR(0x4650be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4650c1:{NFSU2_TR(0x4650c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B4650c3:{NFSU2_TR(0x4650c3);
__builtin_memmove((R+4),(R+8),4);
}
B4650c5:{NFSU2_TR(0x4650c5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4650c7:{NFSU2_TR(0x4650c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4650ca:{NFSU2_TR(0x4650ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4650d3;}}
}
B4650cc:L4650cc:{c.instructions+=2;NFSU2_TR(0x4650cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4650d0:{NFSU2_TR(0x4650d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4650d3:L4650d3:{c.instructions+=9;NFSU2_TR(0x4650d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4650d6:{NFSU2_TR(0x4650d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4650d9:{NFSU2_TR(0x4650d9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B4650db:{NFSU2_TR(0x4650db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4650de:{NFSU2_TR(0x4650de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4650e1:{NFSU2_TR(0x4650e1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4650e3:{NFSU2_TR(0x4650e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4650e6:{NFSU2_TR(0x4650e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4650e9:{NFSU2_TR(0x4650e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4650f6;}}
}
B4650eb:L4650eb:{c.instructions+=2;NFSU2_TR(0x4650eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4650ed:{NFSU2_TR(0x4650ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4650f6;}}
}
B4650ef:L4650ef:{c.instructions+=1;NFSU2_TR(0x4650ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4650f6:L4650f6:{c.instructions+=2;NFSU2_TR(0x4650f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4650f9:{NFSU2_TR(0x4650f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4650feull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B4650fe:L4650fe:{c.instructions+=2;NFSU2_TR(0x4650fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465100:{NFSU2_TR(0x465100);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46512d;}}
}
B465102:L465102:{c.instructions+=5;NFSU2_TR(0x465102);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465106:{NFSU2_TR(0x465106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465108:{NFSU2_TR(0x465108);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46510c:{NFSU2_TR(0x46510c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B465112:{NFSU2_TR(0x465112);
if(r1(R+518)){{goto L465164;}}
}
B465114:L465114:{c.instructions+=4;NFSU2_TR(0x465114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465117:{NFSU2_TR(0x465117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B46511a:{NFSU2_TR(0x46511a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46511d:{NFSU2_TR(0x46511d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x464fe5u,464);}
}
B465123:L465123:{c.instructions+=7;NFSU2_TR(0x465123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465124:{NFSU2_TR(0x465124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465125:{NFSU2_TR(0x465125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B465126:{NFSU2_TR(0x465126);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B465128:{NFSU2_TR(0x465128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465129:{NFSU2_TR(0x465129);
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
B46512c:{NFSU2_TR(0x46512c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46512d:L46512d:{c.instructions+=5;NFSU2_TR(0x46512d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465131:{NFSU2_TR(0x465131);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465135:{NFSU2_TR(0x465135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465137:{NFSU2_TR(0x465137);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46513d:{NFSU2_TR(0x46513d);
if(r1(R+518)){TAIL_STATIC(0x464fdbu,464);}
}
B465143:L465143:{c.instructions+=15;NFSU2_TR(0x465143);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B465146:{NFSU2_TR(0x465146);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x3full))));
}
B465149:{NFSU2_TR(0x465149);
u8 U[12];
w4(U+0,u32(u32(u32(0x3full))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B46514d:{NFSU2_TR(0x46514d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffc0ull))));
}
B465150:{NFSU2_TR(0x465150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465151:{NFSU2_TR(0x465151);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B465153:{NFSU2_TR(0x465153);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B465156:{NFSU2_TR(0x465156);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B465158:{NFSU2_TR(0x465158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465159:{NFSU2_TR(0x465159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46515a:{NFSU2_TR(0x46515a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46515d:{NFSU2_TR(0x46515d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46515f:{NFSU2_TR(0x46515f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465160:{NFSU2_TR(0x465160);
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
B465163:{NFSU2_TR(0x465163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465164:L465164:{c.instructions+=7;NFSU2_TR(0x465164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465165:{NFSU2_TR(0x465165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465166:{NFSU2_TR(0x465166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B465167:{NFSU2_TR(0x465167);
w4(R+0,u32(0x1ull));
}
B46516c:{NFSU2_TR(0x46516c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46516d:{NFSU2_TR(0x46516d);
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
B465170:{NFSU2_TR(0x465170);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465180:L465180:{c.instructions+=5;NFSU2_TR(0x465180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465181:{NFSU2_TR(0x465181);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B465185:{NFSU2_TR(0x465185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46518b:{NFSU2_TR(0x46518b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46518c:{NFSU2_TR(0x46518c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465191ull));
TAIL_STATIC(0x6f767cu,6f7);
}
B465191:L465191:{c.instructions+=4;NFSU2_TR(0x465191);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B465194:{NFSU2_TR(0x465194);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465196:{NFSU2_TR(0x465196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46519c:{NFSU2_TR(0x46519c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4651d0;}}
}
B46519e:L46519e:{c.instructions+=4;NFSU2_TR(0x46519e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4651a1:{NFSU2_TR(0x4651a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4651a4:{NFSU2_TR(0x4651a4);
__builtin_memmove((R+4),(R+24),4);
}
B4651a6:{NFSU2_TR(0x4651a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4651abull));
TAIL_STATIC(0x464f60u,464);
}
B4651ab:L4651ab:{c.instructions+=3;NFSU2_TR(0x4651ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4651ae:{NFSU2_TR(0x4651ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4651b0:{NFSU2_TR(0x4651b0);
if(r1(R+518)){{goto L4651c1;}}
}
B4651b2:L4651b2:{c.instructions+=4;NFSU2_TR(0x4651b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4651b5:{NFSU2_TR(0x4651b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651b6:{NFSU2_TR(0x4651b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651b7:{NFSU2_TR(0x4651b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4651bcull));
{goto L465220;}
}
B4651bc:L4651bc:{c.instructions+=3;NFSU2_TR(0x4651bc);
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
B4651bf:{NFSU2_TR(0x4651bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4651c0:{NFSU2_TR(0x4651c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4651c1:L4651c1:{c.instructions+=4;NFSU2_TR(0x4651c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4651c4:{NFSU2_TR(0x4651c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651c5:{NFSU2_TR(0x4651c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651c6:{NFSU2_TR(0x4651c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4651cbull));
{goto L465220;}
}
B4651cb:L4651cb:{c.instructions+=3;NFSU2_TR(0x4651cb);
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
B4651ce:{NFSU2_TR(0x4651ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4651cf:{NFSU2_TR(0x4651cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4651d0:L4651d0:{c.instructions+=4;NFSU2_TR(0x4651d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4651d3:{NFSU2_TR(0x4651d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651d4:{NFSU2_TR(0x4651d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651d5:{NFSU2_TR(0x4651d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4651daull));
TAIL_STATIC(0x477220u,477);
}
B4651da:L4651da:{c.instructions+=3;NFSU2_TR(0x4651da);
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
B4651dd:{NFSU2_TR(0x4651dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4651de:{NFSU2_TR(0x4651de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4651e0:L4651e0:{c.instructions+=5;NFSU2_TR(0x4651e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651e1:{NFSU2_TR(0x4651e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4651e5:{NFSU2_TR(0x4651e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4651eb:{NFSU2_TR(0x4651eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651ec:{NFSU2_TR(0x4651ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4651f1ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B4651f1:L4651f1:{c.instructions+=7;NFSU2_TR(0x4651f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4651f4:{NFSU2_TR(0x4651f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651f5:{NFSU2_TR(0x4651f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651f6:{NFSU2_TR(0x4651f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4651f9:{NFSU2_TR(0x4651f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651fb:{NFSU2_TR(0x4651fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4651fc:{NFSU2_TR(0x4651fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465201ull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B465201:L465201:{c.instructions+=5;NFSU2_TR(0x465201);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B465204:{NFSU2_TR(0x465204);
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
B465206:{NFSU2_TR(0x465206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46520c:{NFSU2_TR(0x46520c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46520d:{NFSU2_TR(0x46520d);
if(r1(R+518)){{goto L46521d;}}
}
B46520f:L46520f:{c.instructions+=3;NFSU2_TR(0x46520f);
u8 U[4];
w4(U+0,u32(0x465180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465214:{NFSU2_TR(0x465214);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465215:{NFSU2_TR(0x465215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46521aull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B46521a:L46521a:{c.instructions+=1;NFSU2_TR(0x46521a);
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
B46521d:L46521d:{c.instructions+=1;NFSU2_TR(0x46521d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465220:L465220:{c.instructions+=9;NFSU2_TR(0x465220);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465221:{NFSU2_TR(0x465221);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465222:{NFSU2_TR(0x465222);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465223:{NFSU2_TR(0x465223);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B465227:{NFSU2_TR(0x465227);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46522a:{NFSU2_TR(0x46522a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46522b:{NFSU2_TR(0x46522b);
__builtin_memmove((R+4),(R+12),4);
}
B46522d:{NFSU2_TR(0x46522d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46522f:{NFSU2_TR(0x46522f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465234ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B465234:L465234:{c.instructions+=4;NFSU2_TR(0x465234);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465237:{NFSU2_TR(0x465237);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465239:{NFSU2_TR(0x465239);
w4(R+20,u32(0x1ull));
}
B46523e:{NFSU2_TR(0x46523e);
if(r1(R+518)){{goto L465294;}}
}
B465240:L465240:{c.instructions+=2;NFSU2_TR(0x465240);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B465243:{NFSU2_TR(0x465243);
if(r1(R+518)){{goto L46524f;}}
}
B465245:L465245:{c.instructions+=3;NFSU2_TR(0x465245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465248:{NFSU2_TR(0x465248);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46524a:{NFSU2_TR(0x46524a);
if(r1(R+518)){{goto L465294;}}
}
B46524c:L46524c:{c.instructions+=1;NFSU2_TR(0x46524c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46524f:L46524f:{c.instructions+=5;NFSU2_TR(0x46524f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B465252:{NFSU2_TR(0x465252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465255:{NFSU2_TR(0x465255);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B465257:{NFSU2_TR(0x465257);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46525d:{NFSU2_TR(0x46525d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465264:L465264:{c.instructions+=2;NFSU2_TR(0x465264);
__builtin_memmove((R+4),(R+12),4);
}
B465266:{NFSU2_TR(0x465266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46526bull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B46526b:L46526b:{c.instructions+=2;NFSU2_TR(0x46526b);
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
B46526d:{NFSU2_TR(0x46526d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46528f;}}
}
B46526f:L46526f:{c.instructions+=4;NFSU2_TR(0x46526f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465272:{NFSU2_TR(0x465272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465275:{NFSU2_TR(0x465275);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B465279:{NFSU2_TR(0x465279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46529d;}}
}
B46527b:L46527b:{c.instructions+=1;NFSU2_TR(0x46527b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465281:L465281:{c.instructions+=4;NFSU2_TR(0x465281);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465285:{NFSU2_TR(0x465285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465286:{NFSU2_TR(0x465286);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465287:{NFSU2_TR(0x465287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46528cull));
TAIL_STATIC(0x477220u,477);
}
B46528c:L46528c:{c.instructions+=1;NFSU2_TR(0x46528c);
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
B46528f:L46528f:{c.instructions+=5;NFSU2_TR(0x46528f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465290:{NFSU2_TR(0x465290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465291:{NFSU2_TR(0x465291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B465292:{NFSU2_TR(0x465292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465293:{NFSU2_TR(0x465293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465294:L465294:{c.instructions+=2;NFSU2_TR(0x465294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46529b:{NFSU2_TR(0x46529b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465264u);}goto L465264;}
}
B46529d:L46529d:{c.instructions+=6;NFSU2_TR(0x46529d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4652a3:{NFSU2_TR(0x4652a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4652a6:{NFSU2_TR(0x4652a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4652a9:{NFSU2_TR(0x4652a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4652af:{NFSU2_TR(0x4652af);
__builtin_memmove((R+28),(R+12),4);
}
B4652b1:{NFSU2_TR(0x4652b1);
__builtin_memmove((R+4),(R+20),4);
}
B4652b3:L4652b3:{c.instructions+=4;NFSU2_TR(0x4652b3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4652b5:{NFSU2_TR(0x4652b5);
__builtin_memmove((R+8),(R+0),1);
}
B4652b7:{NFSU2_TR(0x4652b7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4652b9:{NFSU2_TR(0x4652b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4652d7;}}
}
B4652bb:L4652bb:{c.instructions+=2;NFSU2_TR(0x4652bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4652bd:{NFSU2_TR(0x4652bd);
if(r1(R+518)){{goto L4652d3;}}
}
B4652bf:L4652bf:{c.instructions+=4;NFSU2_TR(0x4652bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4652c2:{NFSU2_TR(0x4652c2);
__builtin_memmove((R+8),(R+0),1);
}
B4652c4:{NFSU2_TR(0x4652c4);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4652c7:{NFSU2_TR(0x4652c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4652d7;}}
}
B4652c9:L4652c9:{c.instructions+=4;NFSU2_TR(0x4652c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B4652cc:{NFSU2_TR(0x4652cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B4652cf:{NFSU2_TR(0x4652cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4652d1:{NFSU2_TR(0x4652d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4652b3u);}goto L4652b3;}}
}
B4652d3:L4652d3:{c.instructions+=2;NFSU2_TR(0x4652d3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4652d5:{NFSU2_TR(0x4652d5);
{goto L4652dc;}
}
B4652d7:L4652d7:{c.instructions+=2;NFSU2_TR(0x4652d7);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4652d9:{NFSU2_TR(0x4652d9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4652dc:L4652dc:{c.instructions+=2;NFSU2_TR(0x4652dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4652de:{NFSU2_TR(0x4652de);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465281u);}goto L465281;}}
}
B4652e0:L4652e0:{c.instructions+=3;NFSU2_TR(0x4652e0);
__builtin_memmove((R+8),(R+12),4);
}
B4652e2:{NFSU2_TR(0x4652e2);
__builtin_memmove((R+0),(R+20),4);
}
B4652e4:{NFSU2_TR(0x4652e4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B4652e6:L4652e6:{c.instructions+=5;NFSU2_TR(0x4652e6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4652e8:{NFSU2_TR(0x4652e8);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4652eb:{NFSU2_TR(0x4652eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4652ec:{NFSU2_TR(0x4652ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4652ee:{NFSU2_TR(0x4652ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4652e6u);}goto L4652e6;}}
}
B4652f0:L4652f0:{c.instructions+=4;NFSU2_TR(0x4652f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4652f6:{NFSU2_TR(0x4652f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4652f8:{NFSU2_TR(0x4652f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4652f9:{NFSU2_TR(0x4652f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46532e;}}
}
B4652fb:L4652fb:{c.instructions+=5;NFSU2_TR(0x4652fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4652ff:{NFSU2_TR(0x4652ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465300:{NFSU2_TR(0x465300);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465302:{NFSU2_TR(0x465302);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465303:{NFSU2_TR(0x465303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465308ull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B465308:L465308:{c.instructions+=4;NFSU2_TR(0x465308);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46530b:{NFSU2_TR(0x46530b);
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
B46530d:{NFSU2_TR(0x46530d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465313:{NFSU2_TR(0x465313);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46528fu);}goto L46528f;}}
}
B465319:L465319:{c.instructions+=7;NFSU2_TR(0x465319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46531a:{NFSU2_TR(0x46531a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46531b:{NFSU2_TR(0x46531b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46531c:{NFSU2_TR(0x46531c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46531d:{NFSU2_TR(0x46531d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x465180ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465325:{NFSU2_TR(0x465325);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465329:{NFSU2_TR(0x465329);
TAIL_STATIC(0x6f76f2u,6f7);
}
B46532e:L46532e:{c.instructions+=4;NFSU2_TR(0x46532e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465332:{NFSU2_TR(0x465332);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465333:{NFSU2_TR(0x465333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465334:{NFSU2_TR(0x465334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465339ull));
TAIL_STATIC(0x6f7790u,6f7);
}
B465339:L465339:{c.instructions+=4;NFSU2_TR(0x465339);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46533c:{NFSU2_TR(0x46533c);
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
B46533e:{NFSU2_TR(0x46533e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465344:{NFSU2_TR(0x465344);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46528fu);}goto L46528f;}}
}
B46534a:L46534a:{c.instructions+=7;NFSU2_TR(0x46534a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46534b:{NFSU2_TR(0x46534b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46534c:{NFSU2_TR(0x46534c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46534d:{NFSU2_TR(0x46534d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46534e:{NFSU2_TR(0x46534e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x4651e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465356:{NFSU2_TR(0x465356);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46535a:{NFSU2_TR(0x46535a);
TAIL_STATIC(0x6f76f2u,6f7);
}
B465360:L465360:{c.instructions+=10;NFSU2_TR(0x465360);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465364:{NFSU2_TR(0x465364);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465368:{NFSU2_TR(0x465368);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x128ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46536e:{NFSU2_TR(0x46536e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dull))));
__builtin_memmove((R+4),(U+0),4);
}
B465371:{NFSU2_TR(0x465371);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465375:{NFSU2_TR(0x465375);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B465378:{NFSU2_TR(0x465378);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46537a:{NFSU2_TR(0x46537a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B46537d:{NFSU2_TR(0x46537d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B465380:{NFSU2_TR(0x465380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465390:L465390:{c.instructions+=3;NFSU2_TR(0x465390);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465394:{NFSU2_TR(0x465394);
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
B465396:{NFSU2_TR(0x465396);
if(r1(R+518)){{goto L4653f9;}}
}
B465398:L465398:{c.instructions+=3;NFSU2_TR(0x465398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46539a:{NFSU2_TR(0x46539a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4653a0:{NFSU2_TR(0x4653a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4653f9;}}
}
B4653a2:L4653a2:{c.instructions+=3;NFSU2_TR(0x4653a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4653a6:{NFSU2_TR(0x4653a6);
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
B4653a9:{NFSU2_TR(0x4653a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4653f9;}}
}
B4653ab:L4653ab:{c.instructions+=3;NFSU2_TR(0x4653ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4653ae:{NFSU2_TR(0x4653ae);
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
B4653b0:{NFSU2_TR(0x4653b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4653f9;}}
}
B4653b2:L4653b2:{c.instructions+=6;NFSU2_TR(0x4653b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4653b3:{NFSU2_TR(0x4653b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4653b4:{NFSU2_TR(0x4653b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4653b8:{NFSU2_TR(0x4653b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4653b9:{NFSU2_TR(0x4653b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4653bd:{NFSU2_TR(0x4653bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4653c5;}}
}
B4653bf:L4653bf:{c.instructions+=3;NFSU2_TR(0x4653bf);
__builtin_memmove((R+4),(R+28),4);
}
B4653c1:{NFSU2_TR(0x4653c1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4653c3:{NFSU2_TR(0x4653c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4653f6;}}
}
B4653c5:L4653c5:{c.instructions+=3;NFSU2_TR(0x4653c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4653c9:{NFSU2_TR(0x4653c9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4653cc:{NFSU2_TR(0x4653cc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4653d8;}}
}
B4653ce:L4653ce:{c.instructions+=2;NFSU2_TR(0x4653ce);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4653d1:{NFSU2_TR(0x4653d1);
if(r1(R+518)){{goto L4653d8;}}
}
B4653d3:L4653d3:{c.instructions+=2;NFSU2_TR(0x4653d3);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4653d6:{NFSU2_TR(0x4653d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4653f6;}}
}
B4653d8:L4653d8:{c.instructions+=2;NFSU2_TR(0x4653d8);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4653db:{NFSU2_TR(0x4653db);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4653f6;}}
}
B4653dd:L4653dd:{c.instructions+=3;NFSU2_TR(0x4653dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4653e0:{NFSU2_TR(0x4653e0);
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
B4653e2:{NFSU2_TR(0x4653e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4653f6;}}
}
B4653e4:L4653e4:{c.instructions+=6;NFSU2_TR(0x4653e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4653e7:{NFSU2_TR(0x4653e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4653ea:{NFSU2_TR(0x4653ea);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4653ee:{NFSU2_TR(0x4653ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4653f0:{NFSU2_TR(0x4653f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4653f3:{NFSU2_TR(0x4653f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4653f6:L4653f6:{c.instructions+=3;NFSU2_TR(0x4653f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4653f7:{NFSU2_TR(0x4653f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4653f8:{NFSU2_TR(0x4653f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4653f9:L4653f9:{c.instructions+=1;NFSU2_TR(0x4653f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465400:L465400:{c.instructions+=3;NFSU2_TR(0x465400);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465404:{NFSU2_TR(0x465404);
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
B465406:{NFSU2_TR(0x465406);
if(r1(R+518)){{goto L465420;}}
}
B465408:L465408:{c.instructions+=3;NFSU2_TR(0x465408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46540a:{NFSU2_TR(0x46540a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B465410:{NFSU2_TR(0x465410);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465420;}}
}
B465412:L465412:{c.instructions+=4;NFSU2_TR(0x465412);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465416:{NFSU2_TR(0x465416);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46541a:{NFSU2_TR(0x46541a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46541d:{NFSU2_TR(0x46541d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465420:L465420:{c.instructions+=1;NFSU2_TR(0x465420);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465430:L465430:{c.instructions+=3;NFSU2_TR(0x465430);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465434:{NFSU2_TR(0x465434);
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
B465436:{NFSU2_TR(0x465436);
if(r1(R+518)){{goto L465469;}}
}
B465438:L465438:{c.instructions+=3;NFSU2_TR(0x465438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46543a:{NFSU2_TR(0x46543a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B465440:{NFSU2_TR(0x465440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465469;}}
}
B465442:L465442:{c.instructions+=4;NFSU2_TR(0x465442);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465446:{NFSU2_TR(0x465446);
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
B465448:{NFSU2_TR(0x465448);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46544b:{NFSU2_TR(0x46544b);
if(r1(R+518)){{goto L465469;}}
}
B46544d:L46544d:{c.instructions+=2;NFSU2_TR(0x46544d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B465451:{NFSU2_TR(0x465451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465469;}}
}
B465453:L465453:{c.instructions+=5;NFSU2_TR(0x465453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465456:{NFSU2_TR(0x465456);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46545c:{NFSU2_TR(0x46545c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465460:{NFSU2_TR(0x465460);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465464:{NFSU2_TR(0x465464);
TAIL_STATIC(0x6f7745u,6f7);
}
B465469:L465469:{c.instructions+=1;NFSU2_TR(0x465469);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465470:L465470:{c.instructions+=3;NFSU2_TR(0x465470);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465474:{NFSU2_TR(0x465474);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465476:{NFSU2_TR(0x465476);
if(r1(R+518)){{goto L46549b;}}
}
B465478:L465478:{c.instructions+=3;NFSU2_TR(0x465478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46547a:{NFSU2_TR(0x46547a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465480:{NFSU2_TR(0x465480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46549b;}}
}
B465482:L465482:{c.instructions+=3;NFSU2_TR(0x465482);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465486:{NFSU2_TR(0x465486);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B465489:{NFSU2_TR(0x465489);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46549b;}}
}
B46548b:L46548b:{c.instructions+=2;NFSU2_TR(0x46548b);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
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
B46548e:{NFSU2_TR(0x46548e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46549b;}}
}
B465490:L465490:{c.instructions+=4;NFSU2_TR(0x465490);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465493:{NFSU2_TR(0x465493);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B465496:{NFSU2_TR(0x465496);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B46549a:{NFSU2_TR(0x46549a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46549b:L46549b:{c.instructions+=2;NFSU2_TR(0x46549b);
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
B46549d:{NFSU2_TR(0x46549d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4654a0:L4654a0:{c.instructions+=4;NFSU2_TR(0x4654a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4654a4:{NFSU2_TR(0x4654a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4654a6:{NFSU2_TR(0x4654a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4654a7:{NFSU2_TR(0x4654a7);
if(r1(R+518)){{goto L4654b3;}}
}
B4654a9:L4654a9:{c.instructions+=3;NFSU2_TR(0x4654a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4654ab:{NFSU2_TR(0x4654ab);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4654b1:{NFSU2_TR(0x4654b1);
if(r1(R+518)){{goto L4654b7;}}
}
B4654b3:L4654b3:{c.instructions+=3;NFSU2_TR(0x4654b3);
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
B4654b5:{NFSU2_TR(0x4654b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4654b6:{NFSU2_TR(0x4654b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4654b7:L4654b7:{c.instructions+=2;NFSU2_TR(0x4654b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4654b8:{NFSU2_TR(0x4654b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4654bdull));
TAIL_STATIC(0x464eb0u,464);
}
B4654bd:L4654bd:{c.instructions+=3;NFSU2_TR(0x4654bd);
__builtin_memmove((R+24),(R+0),4);
}
B4654bf:{NFSU2_TR(0x4654bf);
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
B4654c1:{NFSU2_TR(0x4654c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4654c6;}}
}
B4654c3:L4654c3:{c.instructions+=3;NFSU2_TR(0x4654c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4654c4:{NFSU2_TR(0x4654c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4654c5:{NFSU2_TR(0x4654c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4654c6:L4654c6:{c.instructions+=9;NFSU2_TR(0x4654c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4654ca:{NFSU2_TR(0x4654ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4654cb:{NFSU2_TR(0x4654cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4654cc:{NFSU2_TR(0x4654cc);
u8 U[4];
w4(U+0,u32(0x103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4654d1:{NFSU2_TR(0x4654d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4654d2:{NFSU2_TR(0x4654d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4654d5:{NFSU2_TR(0x4654d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4654d6:{NFSU2_TR(0x4654d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4654dd:{NFSU2_TR(0x4654dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4654e2ull));
TAIL_STATIC(0x75c840u,75c);
}
B4654e2:L4654e2:{c.instructions+=6;NFSU2_TR(0x4654e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4654e6:{NFSU2_TR(0x4654e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4654ea:{NFSU2_TR(0x4654ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4654ed:{NFSU2_TR(0x4654ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4654f3:{NFSU2_TR(0x4654f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4654f9:{NFSU2_TR(0x4654f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4654feull));
TAIL_STATIC(0x464f10u,464);
}
B4654fe:L4654fe:{c.instructions+=3;NFSU2_TR(0x4654fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465501:{NFSU2_TR(0x465501);
__builtin_memmove((R+4),(R+12),4);
}
B465503:{NFSU2_TR(0x465503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465508ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B465508:L465508:{c.instructions+=3;NFSU2_TR(0x465508);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46550b:{NFSU2_TR(0x46550b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46550d:{NFSU2_TR(0x46550d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465516;}}
}
B46550f:L46550f:{c.instructions+=1;NFSU2_TR(0x46550f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465516:L465516:{c.instructions+=2;NFSU2_TR(0x465516);
__builtin_memmove((R+4),(R+12),4);
}
B465518:{NFSU2_TR(0x465518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46551dull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B46551d:L46551d:{c.instructions+=4;NFSU2_TR(0x46551d);
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
B46551f:{NFSU2_TR(0x46551f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B465520:{NFSU2_TR(0x465520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465521:{NFSU2_TR(0x465521);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465549;}}
}
B465523:L465523:{c.instructions+=3;NFSU2_TR(0x465523);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465526:{NFSU2_TR(0x465526);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465528:{NFSU2_TR(0x465528);
if(r1(R+518)){{goto L46553c;}}
}
B46552a:L46552a:{c.instructions+=4;NFSU2_TR(0x46552a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46552d:{NFSU2_TR(0x46552d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46552e:{NFSU2_TR(0x46552e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46552f:{NFSU2_TR(0x46552f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465534ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465220u);}goto L465220;}
}
B465534:L465534:{c.instructions+=5;NFSU2_TR(0x465534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465536:{NFSU2_TR(0x465536);
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
B465539:{NFSU2_TR(0x465539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46553a:{NFSU2_TR(0x46553a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46553b:{NFSU2_TR(0x46553b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46553c:L46553c:{c.instructions+=4;NFSU2_TR(0x46553c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46553f:{NFSU2_TR(0x46553f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465540:{NFSU2_TR(0x465540);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465541:{NFSU2_TR(0x465541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465546ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465220u);}goto L465220;}
}
B465546:L465546:{c.instructions+=1;NFSU2_TR(0x465546);
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
B465549:L465549:{c.instructions+=4;NFSU2_TR(0x465549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46554b:{NFSU2_TR(0x46554b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46554c:{NFSU2_TR(0x46554c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46554d:{NFSU2_TR(0x46554d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465550:L465550:{c.instructions+=4;NFSU2_TR(0x465550);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465554:{NFSU2_TR(0x465554);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465556:{NFSU2_TR(0x465556);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465557:{NFSU2_TR(0x465557);
if(r1(R+518)){{goto L465563;}}
}
B465559:L465559:{c.instructions+=3;NFSU2_TR(0x465559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B46555b:{NFSU2_TR(0x46555b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465561:{NFSU2_TR(0x465561);
if(r1(R+518)){{goto L465567;}}
}
B465563:L465563:{c.instructions+=3;NFSU2_TR(0x465563);
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
B465565:{NFSU2_TR(0x465565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465566:{NFSU2_TR(0x465566);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465567:L465567:{c.instructions+=2;NFSU2_TR(0x465567);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465568:{NFSU2_TR(0x465568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46556dull));
TAIL_STATIC(0x464eb0u,464);
}
B46556d:L46556d:{c.instructions+=3;NFSU2_TR(0x46556d);
__builtin_memmove((R+24),(R+0),4);
}
B46556f:{NFSU2_TR(0x46556f);
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
B465571:{NFSU2_TR(0x465571);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465576;}}
}
B465573:L465573:{c.instructions+=3;NFSU2_TR(0x465573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465574:{NFSU2_TR(0x465574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465575:{NFSU2_TR(0x465575);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465576:L465576:{c.instructions+=7;NFSU2_TR(0x465576);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46557a:{NFSU2_TR(0x46557a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46557c:{NFSU2_TR(0x46557c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46557d:{NFSU2_TR(0x46557d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B465581:{NFSU2_TR(0x465581);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465582:{NFSU2_TR(0x465582);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B465586:{NFSU2_TR(0x465586);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46559e;}}
}
B465588:L465588:{c.instructions+=3;NFSU2_TR(0x465588);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B46558b:{NFSU2_TR(0x46558b);
__builtin_memmove((R+0),(R+20),4);
}
B46558d:{NFSU2_TR(0x46558d);
if(r1(R+518)){{goto L46559b;}}
}
B46558f:L46558f:{c.instructions+=1;NFSU2_TR(0x46558f);
}
B465590:L465590:{c.instructions+=5;NFSU2_TR(0x465590);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465593:{NFSU2_TR(0x465593);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B465595:{NFSU2_TR(0x465595);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B465597:{NFSU2_TR(0x465597);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465599:{NFSU2_TR(0x465599);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465590u);}goto L465590;}}
}
B46559b:L46559b:{c.instructions+=1;NFSU2_TR(0x46559b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B46559e:L46559e:{c.instructions+=5;NFSU2_TR(0x46559e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4655a5:{NFSU2_TR(0x4655a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4655ab:{NFSU2_TR(0x4655ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4655b1:{NFSU2_TR(0x4655b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4655b7:{NFSU2_TR(0x4655b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4655bcull));
TAIL_STATIC(0x464f10u,464);
}
B4655bc:L4655bc:{c.instructions+=3;NFSU2_TR(0x4655bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4655bf:{NFSU2_TR(0x4655bf);
__builtin_memmove((R+4),(R+12),4);
}
B4655c1:{NFSU2_TR(0x4655c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4655c6ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B4655c6:L4655c6:{c.instructions+=3;NFSU2_TR(0x4655c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4655c9:{NFSU2_TR(0x4655c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4655cb:{NFSU2_TR(0x4655cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4655d4;}}
}
B4655cd:L4655cd:{c.instructions+=1;NFSU2_TR(0x4655cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4655d4:L4655d4:{c.instructions+=2;NFSU2_TR(0x4655d4);
__builtin_memmove((R+4),(R+12),4);
}
B4655d6:{NFSU2_TR(0x4655d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4655dbull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B4655db:L4655db:{c.instructions+=4;NFSU2_TR(0x4655db);
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
B4655dd:{NFSU2_TR(0x4655dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4655de:{NFSU2_TR(0x4655de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4655df:{NFSU2_TR(0x4655df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4655ec;}}
}
B4655e1:L4655e1:{c.instructions+=3;NFSU2_TR(0x4655e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4655e3:{NFSU2_TR(0x4655e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4655e4:{NFSU2_TR(0x4655e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4655e9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465220u);}goto L465220;}
}
B4655e9:L4655e9:{c.instructions+=1;NFSU2_TR(0x4655e9);
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
B4655ec:L4655ec:{c.instructions+=4;NFSU2_TR(0x4655ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4655ee:{NFSU2_TR(0x4655ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4655ef:{NFSU2_TR(0x4655ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4655f0:{NFSU2_TR(0x4655f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465600:L465600:{c.instructions+=6;NFSU2_TR(0x465600);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465601:{NFSU2_TR(0x465601);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465602:{NFSU2_TR(0x465602);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B465606:{NFSU2_TR(0x465606);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465608:{NFSU2_TR(0x465608);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465609:{NFSU2_TR(0x465609);
if(r1(R+518)){{goto L465621;}}
}
B46560b:L46560b:{c.instructions+=4;NFSU2_TR(0x46560b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B46560d:{NFSU2_TR(0x46560d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465614:{NFSU2_TR(0x465614);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465618:{NFSU2_TR(0x465618);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465621;}}
}
B46561a:L46561a:{c.instructions+=3;NFSU2_TR(0x46561a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46561d:{NFSU2_TR(0x46561d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46561f:{NFSU2_TR(0x46561f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465627;}}
}
B465621:L465621:{c.instructions+=5;NFSU2_TR(0x465621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B465622:{NFSU2_TR(0x465622);
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
B465624:{NFSU2_TR(0x465624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465625:{NFSU2_TR(0x465625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B465626:{NFSU2_TR(0x465626);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465627:L465627:{c.instructions+=10;NFSU2_TR(0x465627);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46562a:{NFSU2_TR(0x46562a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46562b:{NFSU2_TR(0x46562b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46562e:{NFSU2_TR(0x46562e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B465631:{NFSU2_TR(0x465631);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffffull))));
}
B465637:{NFSU2_TR(0x465637);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465638:{NFSU2_TR(0x465638);
__builtin_memmove((R+4),(R+20),4);
}
B46563a:{NFSU2_TR(0x46563a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46563e:{NFSU2_TR(0x46563e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465641:{NFSU2_TR(0x465641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465646ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B465646:L465646:{c.instructions+=5;NFSU2_TR(0x465646);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B465649:{NFSU2_TR(0x465649);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B46564b:{NFSU2_TR(0x46564b);
__builtin_memmove((R+4),(R+20),4);
}
B46564d:{NFSU2_TR(0x46564d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465650:{NFSU2_TR(0x465650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465655ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B465655:L465655:{c.instructions+=2;NFSU2_TR(0x465655);
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
B465657:{NFSU2_TR(0x465657);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46569c;}}
}
B465659:L465659:{c.instructions+=9;NFSU2_TR(0x465659);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46565d:{NFSU2_TR(0x46565d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465660:{NFSU2_TR(0x465660);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B465663:{NFSU2_TR(0x465663);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465666:{NFSU2_TR(0x465666);
__builtin_memmove((R+24),(R+0),4);
}
B465668:{NFSU2_TR(0x465668);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B46566b:{NFSU2_TR(0x46566b);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xff000000ull))));
}
B465671:{NFSU2_TR(0x465671);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B465673:{NFSU2_TR(0x465673);
if(r1(R+518)){{goto L465699;}}
}
B465675:L465675:{c.instructions+=2;NFSU2_TR(0x465675);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465678:{NFSU2_TR(0x465678);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465683;}}
}
B46567a:L46567a:{c.instructions+=3;NFSU2_TR(0x46567a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46567e:{NFSU2_TR(0x46567e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465681:{NFSU2_TR(0x465681);
{goto L46568a;}
}
B465683:L465683:{c.instructions+=2;NFSU2_TR(0x465683);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B465688:{NFSU2_TR(0x465688);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B46568a:L46568a:{c.instructions+=5;NFSU2_TR(0x46568a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46568d:{NFSU2_TR(0x46568d);
__builtin_memmove((R+24),(R+0),4);
}
B46568f:{NFSU2_TR(0x46568f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xff000000ull))));
}
B465695:{NFSU2_TR(0x465695);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B465697:{NFSU2_TR(0x465697);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x465675u);}goto L465675;}}
}
B465699:L465699:{c.instructions+=1;NFSU2_TR(0x465699);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46569c:L46569c:{c.instructions+=7;NFSU2_TR(0x46569c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4656a0:{NFSU2_TR(0x4656a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4656a1:{NFSU2_TR(0x4656a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4656a2:{NFSU2_TR(0x4656a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4656a3:{NFSU2_TR(0x4656a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4656a4:{NFSU2_TR(0x4656a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4656a5:{NFSU2_TR(0x4656a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4656b0:L4656b0:{c.instructions+=3;NFSU2_TR(0x4656b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4656b4:{NFSU2_TR(0x4656b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4656b6:{NFSU2_TR(0x4656b6);
if(r1(R+518)){{goto L4656c2;}}
}
B4656b8:L4656b8:{c.instructions+=3;NFSU2_TR(0x4656b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4656ba:{NFSU2_TR(0x4656ba);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4656c0:{NFSU2_TR(0x4656c0);
if(r1(R+518)){{goto L4656c5;}}
}
B4656c2:L4656c2:{c.instructions+=2;NFSU2_TR(0x4656c2);
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
B4656c4:{NFSU2_TR(0x4656c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4656c5:L4656c5:{c.instructions+=2;NFSU2_TR(0x4656c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4656c8:{NFSU2_TR(0x4656c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4656d0:L4656d0:{c.instructions+=3;NFSU2_TR(0x4656d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4656d4:{NFSU2_TR(0x4656d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4656d6:{NFSU2_TR(0x4656d6);
if(r1(R+518)){{goto L4656e2;}}
}
B4656d8:L4656d8:{c.instructions+=3;NFSU2_TR(0x4656d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4656da:{NFSU2_TR(0x4656da);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4656e0:{NFSU2_TR(0x4656e0);
if(r1(R+518)){{goto L4656e5;}}
}
B4656e2:L4656e2:{c.instructions+=2;NFSU2_TR(0x4656e2);
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
B4656e4:{NFSU2_TR(0x4656e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4656e5:L4656e5:{c.instructions+=2;NFSU2_TR(0x4656e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4656e8:{NFSU2_TR(0x4656e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4656f0:L4656f0:{c.instructions+=3;NFSU2_TR(0x4656f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4656f4:{NFSU2_TR(0x4656f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4656f6:{NFSU2_TR(0x4656f6);
if(r1(R+518)){{goto L465702;}}
}
B4656f8:L4656f8:{c.instructions+=3;NFSU2_TR(0x4656f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4656fa:{NFSU2_TR(0x4656fa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465700:{NFSU2_TR(0x465700);
if(r1(R+518)){{goto L465705;}}
}
B465702:L465702:{c.instructions+=2;NFSU2_TR(0x465702);
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
B465704:{NFSU2_TR(0x465704);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465705:L465705:{c.instructions+=3;NFSU2_TR(0x465705);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465708:{NFSU2_TR(0x465708);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46570a:{NFSU2_TR(0x46570a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465719;}}
}
B46570c:L46570c:{c.instructions+=3;NFSU2_TR(0x46570c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46570f:{NFSU2_TR(0x46570f);
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
B465711:{NFSU2_TR(0x465711);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465719;}}
}
B465713:L465713:{c.instructions+=2;NFSU2_TR(0x465713);
w4(R+0,u32(0x1ull));
}
B465718:{NFSU2_TR(0x465718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465719:L465719:{c.instructions+=2;NFSU2_TR(0x465719);
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
B46571b:{NFSU2_TR(0x46571b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465720:L465720:{c.instructions+=3;NFSU2_TR(0x465720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465724:{NFSU2_TR(0x465724);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465726:{NFSU2_TR(0x465726);
if(r1(R+518)){{goto L465732;}}
}
B465728:L465728:{c.instructions+=3;NFSU2_TR(0x465728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46572a:{NFSU2_TR(0x46572a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465730:{NFSU2_TR(0x465730);
if(r1(R+518)){{goto L465735;}}
}
B465732:L465732:{c.instructions+=2;NFSU2_TR(0x465732);
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
B465734:{NFSU2_TR(0x465734);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465735:L465735:{c.instructions+=3;NFSU2_TR(0x465735);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465738:{NFSU2_TR(0x465738);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B46573b:{NFSU2_TR(0x46573b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465740:L465740:{c.instructions+=3;NFSU2_TR(0x465740);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465744:{NFSU2_TR(0x465744);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465746:{NFSU2_TR(0x465746);
if(r1(R+518)){{goto L465752;}}
}
B465748:L465748:{c.instructions+=3;NFSU2_TR(0x465748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46574a:{NFSU2_TR(0x46574a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B465750:{NFSU2_TR(0x465750);
if(r1(R+518)){{goto L465755;}}
}
B465752:L465752:{c.instructions+=2;NFSU2_TR(0x465752);
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
B465754:{NFSU2_TR(0x465754);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465755:L465755:{c.instructions+=2;NFSU2_TR(0x465755);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465758:{NFSU2_TR(0x465758);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465760:L465760:{c.instructions+=5;NFSU2_TR(0x465760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465761:{NFSU2_TR(0x465761);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465762:{NFSU2_TR(0x465762);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B465766:{NFSU2_TR(0x465766);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465768:{NFSU2_TR(0x465768);
if(r1(R+518)){{goto L46577b;}}
}
B46576a:L46576a:{c.instructions+=3;NFSU2_TR(0x46576a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B46576c:{NFSU2_TR(0x46576c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B465772:{NFSU2_TR(0x465772);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46577b;}}
}
B465774:L465774:{c.instructions+=3;NFSU2_TR(0x465774);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465777:{NFSU2_TR(0x465777);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465779:{NFSU2_TR(0x465779);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465780;}}
}
B46577b:L46577b:{c.instructions+=4;NFSU2_TR(0x46577b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46577c:{NFSU2_TR(0x46577c);
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
B46577e:{NFSU2_TR(0x46577e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46577f:{NFSU2_TR(0x46577f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465780:L465780:{c.instructions+=5;NFSU2_TR(0x465780);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465781:{NFSU2_TR(0x465781);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465782:{NFSU2_TR(0x465782);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B465785:{NFSU2_TR(0x465785);
__builtin_memmove((R+4),(R+20),4);
}
B465787:{NFSU2_TR(0x465787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46578cull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B46578c:L46578c:{c.instructions+=6;NFSU2_TR(0x46578c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46578f:{NFSU2_TR(0x46578f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B465792:{NFSU2_TR(0x465792);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465795:{NFSU2_TR(0x465795);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B465797:{NFSU2_TR(0x465797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46579a:{NFSU2_TR(0x46579a);
if(r1(R+518)){{goto L4657c9;}}
}
B46579c:L46579c:{c.instructions+=1;NFSU2_TR(0x46579c);
w4(R+24,u32(0x1ull));
}
B4657a1:L4657a1:{c.instructions+=2;NFSU2_TR(0x4657a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4657a4:{NFSU2_TR(0x4657a4);
if(r1(R+518)){{goto L4657c9;}}
}
B4657a6:L4657a6:{c.instructions+=3;NFSU2_TR(0x4657a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4657ac:{NFSU2_TR(0x4657ac);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4657ae:{NFSU2_TR(0x4657ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4657b6;}}
}
B4657b0:L4657b0:{c.instructions+=2;NFSU2_TR(0x4657b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B4657b2:{NFSU2_TR(0x4657b2);
if(r1(R+512)){{goto L4657be;}}
}
B4657b4:L4657b4:{c.instructions+=1;NFSU2_TR(0x4657b4);
{goto L4657ba;}
}
B4657b6:L4657b6:{c.instructions+=2;NFSU2_TR(0x4657b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B4657b8:{NFSU2_TR(0x4657b8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4657c9;}}
}
B4657ba:L4657ba:{c.instructions+=2;NFSU2_TR(0x4657ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B4657bc:{NFSU2_TR(0x4657bc);
if(r1(R+512)){{goto L4657c9;}}
}
B4657be:L4657be:{c.instructions+=5;NFSU2_TR(0x4657be);
__builtin_memmove((R+28),(R+0),4);
}
B4657c0:{NFSU2_TR(0x4657c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4657c3:{NFSU2_TR(0x4657c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4657c5:{NFSU2_TR(0x4657c5);
__builtin_memmove((R+4),(R+8),4);
}
B4657c7:{NFSU2_TR(0x4657c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4657a1u);}goto L4657a1;}}
}
B4657c9:L4657c9:{c.instructions+=2;NFSU2_TR(0x4657c9);
__builtin_memmove((R+4),(R+20),4);
}
B4657cb:{NFSU2_TR(0x4657cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4657d0ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B4657d0:L4657d0:{c.instructions+=6;NFSU2_TR(0x4657d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4657d2:{NFSU2_TR(0x4657d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4657d3:{NFSU2_TR(0x4657d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4657d4:{NFSU2_TR(0x4657d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4657d5:{NFSU2_TR(0x4657d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4657d6:{NFSU2_TR(0x4657d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4657e0:L4657e0:{c.instructions+=3;NFSU2_TR(0x4657e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4657e4:{NFSU2_TR(0x4657e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4657e6:{NFSU2_TR(0x4657e6);
if(r1(R+518)){{goto L4657f2;}}
}
B4657e8:L4657e8:{c.instructions+=3;NFSU2_TR(0x4657e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4657ea:{NFSU2_TR(0x4657ea);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4657f0:{NFSU2_TR(0x4657f0);
if(r1(R+518)){{goto L4657f5;}}
}
B4657f2:L4657f2:{c.instructions+=2;NFSU2_TR(0x4657f2);
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
B4657f4:{NFSU2_TR(0x4657f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4657f5:L4657f5:{c.instructions+=7;NFSU2_TR(0x4657f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4657f9:{NFSU2_TR(0x4657f9);
__builtin_memmove((R+0),(R+8),4);
}
B4657fb:{NFSU2_TR(0x4657fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4657fc:{NFSU2_TR(0x4657fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4657ff:{NFSU2_TR(0x4657ff);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B465804:{NFSU2_TR(0x465804);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B465806:{NFSU2_TR(0x465806);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L465821;}}
}
B465808:L465808:{c.instructions+=6;NFSU2_TR(0x465808);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46580b:{NFSU2_TR(0x46580b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x128ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465811:{NFSU2_TR(0x465811);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B465814:{NFSU2_TR(0x465814);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B465816:{NFSU2_TR(0x465816);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465818:{NFSU2_TR(0x465818);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465821;}}
}
B46581a:L46581a:{c.instructions+=3;NFSU2_TR(0x46581a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46581d:{NFSU2_TR(0x46581d);
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
B46581f:{NFSU2_TR(0x46581f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465823;}}
}
B465821:L465821:{c.instructions+=1;NFSU2_TR(0x465821);
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
B465823:L465823:{c.instructions+=2;NFSU2_TR(0x465823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465824:{NFSU2_TR(0x465824);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465830:L465830:{c.instructions+=4;NFSU2_TR(0x465830);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465836:{NFSU2_TR(0x465836);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B465837:{NFSU2_TR(0x465837);
w4(R+8,u32(0x0ull));
}
B46583c:{NFSU2_TR(0x46583c);
if(r1(R+518)){{goto L46584b;}}
}
B46583e:L46583e:{c.instructions+=2;NFSU2_TR(0x46583e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46583f:{NFSU2_TR(0x46583f);
if(r1(R+518)){{goto L465844;}}
}
B465841:L465841:{c.instructions+=2;NFSU2_TR(0x465841);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B465842:{NFSU2_TR(0x465842);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46584b;}}
}
B465844:L465844:{c.instructions+=2;NFSU2_TR(0x465844);
w4(R+4,u32(0x1ull));
}
B465849:{NFSU2_TR(0x465849);
{goto L46584d;}
}
B46584b:L46584b:{c.instructions+=1;NFSU2_TR(0x46584b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46584d:L46584d:{c.instructions+=40;NFSU2_TR(0x46584d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465851:{NFSU2_TR(0x465851);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed1a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B465858:{NFSU2_TR(0x465858);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465859:{NFSU2_TR(0x465859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B46585b:{NFSU2_TR(0x46585b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B46585e:{NFSU2_TR(0x46585e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465868:{NFSU2_TR(0x465868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B46586a:{NFSU2_TR(0x46586a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B46586d:{NFSU2_TR(0x46586d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465877:{NFSU2_TR(0x465877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B465879:{NFSU2_TR(0x465879);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B46587c:{NFSU2_TR(0x46587c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465882:{NFSU2_TR(0x465882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465884:{NFSU2_TR(0x465884);
__builtin_memmove((R+24),gp(0x7ed178),4);
}
B46588a:{NFSU2_TR(0x46588a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B46588d:{NFSU2_TR(0x46588d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465893:{NFSU2_TR(0x465893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465895:{NFSU2_TR(0x465895);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465898:{NFSU2_TR(0x465898);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46589e:{NFSU2_TR(0x46589e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4658a0:{NFSU2_TR(0x4658a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4658a3:{NFSU2_TR(0x4658a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4658a9:{NFSU2_TR(0x4658a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4658ab:{NFSU2_TR(0x4658ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4658ae:{NFSU2_TR(0x4658ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4658b4:{NFSU2_TR(0x4658b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4658b6:{NFSU2_TR(0x4658b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4658b9:{NFSU2_TR(0x4658b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4658bf:{NFSU2_TR(0x4658bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4658c1:{NFSU2_TR(0x4658c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4658c4:{NFSU2_TR(0x4658c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4658ca:{NFSU2_TR(0x4658ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4658cc:{NFSU2_TR(0x4658cc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4658cf:{NFSU2_TR(0x4658cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4658d5:{NFSU2_TR(0x4658d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4658d7:{NFSU2_TR(0x4658d7);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B4658da:{NFSU2_TR(0x4658da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4658e4:{NFSU2_TR(0x4658e4);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B4658e6:{NFSU2_TR(0x4658e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4658e7:{NFSU2_TR(0x4658e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4658f0:L4658f0:{c.instructions+=39;NFSU2_TR(0x4658f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4658f4:{NFSU2_TR(0x4658f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4658f6:{NFSU2_TR(0x4658f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4658f9:{NFSU2_TR(0x4658f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465903:{NFSU2_TR(0x465903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465905:{NFSU2_TR(0x465905);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465908:{NFSU2_TR(0x465908);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465912:{NFSU2_TR(0x465912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465914:{NFSU2_TR(0x465914);
__builtin_memmove((R+8),gp(0x7ed210),4);
}
B46591a:{NFSU2_TR(0x46591a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B46591d:{NFSU2_TR(0x46591d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465923:{NFSU2_TR(0x465923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465925:{NFSU2_TR(0x465925);
__builtin_memmove((R+8),gp(0x7ed174),4);
}
B46592b:{NFSU2_TR(0x46592b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B46592e:{NFSU2_TR(0x46592e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465934:{NFSU2_TR(0x465934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465936:{NFSU2_TR(0x465936);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465939:{NFSU2_TR(0x465939);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46593b:{NFSU2_TR(0x46593b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465941:{NFSU2_TR(0x465941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465943:{NFSU2_TR(0x465943);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465946:{NFSU2_TR(0x465946);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46594c:{NFSU2_TR(0x46594c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46594e:{NFSU2_TR(0x46594e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465951:{NFSU2_TR(0x465951);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465957:{NFSU2_TR(0x465957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465959:{NFSU2_TR(0x465959);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46595c:{NFSU2_TR(0x46595c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465962:{NFSU2_TR(0x465962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465964:{NFSU2_TR(0x465964);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465967:{NFSU2_TR(0x465967);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46596d:{NFSU2_TR(0x46596d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46596f:{NFSU2_TR(0x46596f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465972:{NFSU2_TR(0x465972);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465978:{NFSU2_TR(0x465978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46597a:{NFSU2_TR(0x46597a);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B46597d:{NFSU2_TR(0x46597d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465987:{NFSU2_TR(0x465987);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B465989:{NFSU2_TR(0x465989);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465990:L465990:{c.instructions+=48;NFSU2_TR(0x465990);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465991:{NFSU2_TR(0x465991);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465992:{NFSU2_TR(0x465992);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B465996:{NFSU2_TR(0x465996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465998:{NFSU2_TR(0x465998);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B46599b:{NFSU2_TR(0x46599b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4659a5:{NFSU2_TR(0x4659a5);
__builtin_memmove((R+12),(R+4),4);
}
B4659a7:{NFSU2_TR(0x4659a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4659a9:{NFSU2_TR(0x4659a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4659ac:{NFSU2_TR(0x4659ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4659b6:{NFSU2_TR(0x4659b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4659b8:{NFSU2_TR(0x4659b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4659be:{NFSU2_TR(0x4659be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4659c1:{NFSU2_TR(0x4659c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4659c3:{NFSU2_TR(0x4659c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4659c9:{NFSU2_TR(0x4659c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4659cb:{NFSU2_TR(0x4659cb);
__builtin_memmove((R+0),gp(0x7ed18c),4);
}
B4659d0:{NFSU2_TR(0x4659d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4659d3:{NFSU2_TR(0x4659d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4659d9:{NFSU2_TR(0x4659d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4659db:{NFSU2_TR(0x4659db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4659de:{NFSU2_TR(0x4659de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4659df:{NFSU2_TR(0x4659df);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4659e1:{NFSU2_TR(0x4659e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4659e7:{NFSU2_TR(0x4659e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4659e9:{NFSU2_TR(0x4659e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4659ec:{NFSU2_TR(0x4659ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4659f2:{NFSU2_TR(0x4659f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4659f4:{NFSU2_TR(0x4659f4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4659f7:{NFSU2_TR(0x4659f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4659fd:{NFSU2_TR(0x4659fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4659ff:{NFSU2_TR(0x4659ff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465a02:{NFSU2_TR(0x465a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465a08:{NFSU2_TR(0x465a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465a0a:{NFSU2_TR(0x465a0a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465a0d:{NFSU2_TR(0x465a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465a13:{NFSU2_TR(0x465a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465a15:{NFSU2_TR(0x465a15);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465a18:{NFSU2_TR(0x465a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465a1e:{NFSU2_TR(0x465a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465a20:{NFSU2_TR(0x465a20);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465a23:{NFSU2_TR(0x465a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465a2d:{NFSU2_TR(0x465a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B465a2f:{NFSU2_TR(0x465a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465a35:{NFSU2_TR(0x465a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465a37:{NFSU2_TR(0x465a37);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465a3c:{NFSU2_TR(0x465a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465a3d:{NFSU2_TR(0x465a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465a42ull));
TAIL_STATIC(0x43dc30u,43d);
}
B465a42:L465a42:{c.instructions+=3;NFSU2_TR(0x465a42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B465a45:{NFSU2_TR(0x465a45);
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
B465a47:{NFSU2_TR(0x465a47);
if(r1(R+518)){{goto L465ae2;}}
}
B465a4d:L465a4d:{c.instructions+=37;NFSU2_TR(0x465a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465a4f:{NFSU2_TR(0x465a4f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465a52:{NFSU2_TR(0x465a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465a5c:{NFSU2_TR(0x465a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465a5e:{NFSU2_TR(0x465a5e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465a61:{NFSU2_TR(0x465a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465a6b:{NFSU2_TR(0x465a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465a6d:{NFSU2_TR(0x465a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465a73:{NFSU2_TR(0x465a73);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465a76:{NFSU2_TR(0x465a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465a78:{NFSU2_TR(0x465a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465a7e:{NFSU2_TR(0x465a7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465a80:{NFSU2_TR(0x465a80);
__builtin_memmove((R+4),gp(0x7ed164),4);
}
B465a86:{NFSU2_TR(0x465a86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465a89:{NFSU2_TR(0x465a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465a8f:{NFSU2_TR(0x465a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465a91:{NFSU2_TR(0x465a91);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465a94:{NFSU2_TR(0x465a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465a9a:{NFSU2_TR(0x465a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465a9c:{NFSU2_TR(0x465a9c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465a9f:{NFSU2_TR(0x465a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465aa5:{NFSU2_TR(0x465aa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465aa7:{NFSU2_TR(0x465aa7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465aaa:{NFSU2_TR(0x465aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465ab0:{NFSU2_TR(0x465ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465ab2:{NFSU2_TR(0x465ab2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465ab5:{NFSU2_TR(0x465ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465abb:{NFSU2_TR(0x465abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465abd:{NFSU2_TR(0x465abd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465ac0:{NFSU2_TR(0x465ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465ac6:{NFSU2_TR(0x465ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465ac8:{NFSU2_TR(0x465ac8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465acb:{NFSU2_TR(0x465acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465ad1:{NFSU2_TR(0x465ad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465ad3:{NFSU2_TR(0x465ad3);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B465ad6:{NFSU2_TR(0x465ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465ae0:{NFSU2_TR(0x465ae0);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B465ae2:L465ae2:{c.instructions+=4;NFSU2_TR(0x465ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465ae3:{NFSU2_TR(0x465ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465ae4:{NFSU2_TR(0x465ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465ae5:{NFSU2_TR(0x465ae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465af0:L465af0:{c.instructions+=40;NFSU2_TR(0x465af0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465af4:{NFSU2_TR(0x465af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465af6:{NFSU2_TR(0x465af6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465af9:{NFSU2_TR(0x465af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465b03:{NFSU2_TR(0x465b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b05:{NFSU2_TR(0x465b05);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b08:{NFSU2_TR(0x465b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465b12:{NFSU2_TR(0x465b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b14:{NFSU2_TR(0x465b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465b1a:{NFSU2_TR(0x465b1a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b1d:{NFSU2_TR(0x465b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465b1f:{NFSU2_TR(0x465b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b25:{NFSU2_TR(0x465b25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b27:{NFSU2_TR(0x465b27);
__builtin_memmove((R+4),gp(0x7ed188),4);
}
B465b2d:{NFSU2_TR(0x465b2d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b30:{NFSU2_TR(0x465b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b36:{NFSU2_TR(0x465b36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b38:{NFSU2_TR(0x465b38);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b3b:{NFSU2_TR(0x465b3b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B465b3d:{NFSU2_TR(0x465b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b43:{NFSU2_TR(0x465b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b45:{NFSU2_TR(0x465b45);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b48:{NFSU2_TR(0x465b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b4e:{NFSU2_TR(0x465b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b50:{NFSU2_TR(0x465b50);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b53:{NFSU2_TR(0x465b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b59:{NFSU2_TR(0x465b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b5b:{NFSU2_TR(0x465b5b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b5e:{NFSU2_TR(0x465b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b64:{NFSU2_TR(0x465b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b66:{NFSU2_TR(0x465b66);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b69:{NFSU2_TR(0x465b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b6f:{NFSU2_TR(0x465b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465b71:{NFSU2_TR(0x465b71);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465b74:{NFSU2_TR(0x465b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465b7a:{NFSU2_TR(0x465b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465b7c:{NFSU2_TR(0x465b7c);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B465b7f:{NFSU2_TR(0x465b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465b89:{NFSU2_TR(0x465b89);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B465b8b:{NFSU2_TR(0x465b8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465b90:L465b90:{c.instructions+=7;NFSU2_TR(0x465b90);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B465b95:{NFSU2_TR(0x465b95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465b96:{NFSU2_TR(0x465b96);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B465b98:{NFSU2_TR(0x465b98);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B465b9a:{NFSU2_TR(0x465b9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465b9b:{NFSU2_TR(0x465b9b);
__builtin_memmove((R+28),(R+4),4);
}
B465b9d:{NFSU2_TR(0x465b9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465bab;}}
}
B465b9f:L465b9f:{c.instructions+=2;NFSU2_TR(0x465b9f);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465ba5:{NFSU2_TR(0x465ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465bab;}}
}
B465ba7:L465ba7:{c.instructions+=2;NFSU2_TR(0x465ba7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B465ba9:{NFSU2_TR(0x465ba9);
{goto L465bb0;}
}
B465bab:L465bab:{c.instructions+=1;NFSU2_TR(0x465bab);
w4(R+0,u32(0x1ull));
}
B465bb0:L465bb0:{c.instructions+=9;NFSU2_TR(0x465bb0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B465bb2:{NFSU2_TR(0x465bb2);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B465bb4:{NFSU2_TR(0x465bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B465bb7:{NFSU2_TR(0x465bb7);
__builtin_memmove((R+24),(R+4),4);
}
B465bb9:{NFSU2_TR(0x465bb9);
__builtin_memmove(gp(0x82bc2c),(R+24),4);
}
B465bbf:{NFSU2_TR(0x465bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465bc5:{NFSU2_TR(0x465bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465bcb:{NFSU2_TR(0x465bcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465bcc:{NFSU2_TR(0x465bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465bd1ull));
TAIL_STATIC(0x458f00u,458);
}
B465bd1:L465bd1:{c.instructions+=48;NFSU2_TR(0x465bd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465bd5:{NFSU2_TR(0x465bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B465bd7:{NFSU2_TR(0x465bd7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B465bda:{NFSU2_TR(0x465bda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B465bdd:{NFSU2_TR(0x465bdd);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B465bdf:{NFSU2_TR(0x465bdf);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B465be1:{NFSU2_TR(0x465be1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B465be4:{NFSU2_TR(0x465be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465bee:{NFSU2_TR(0x465bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B465bf0:{NFSU2_TR(0x465bf0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B465bf1:{NFSU2_TR(0x465bf1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B465bf4:{NFSU2_TR(0x465bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465bfe:{NFSU2_TR(0x465bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B465c01:{NFSU2_TR(0x465c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B465c03:{NFSU2_TR(0x465c03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed1f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B465c0a:{NFSU2_TR(0x465c0a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B465c0d:{NFSU2_TR(0x465c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c13:{NFSU2_TR(0x465c13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c15:{NFSU2_TR(0x465c15);
__builtin_memmove((R+24),gp(0x7ed180),4);
}
B465c1b:{NFSU2_TR(0x465c1b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465c1e:{NFSU2_TR(0x465c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c24:{NFSU2_TR(0x465c24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c26:{NFSU2_TR(0x465c26);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465c29:{NFSU2_TR(0x465c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c2f:{NFSU2_TR(0x465c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c31:{NFSU2_TR(0x465c31);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465c34:{NFSU2_TR(0x465c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c3a:{NFSU2_TR(0x465c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c3c:{NFSU2_TR(0x465c3c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465c3f:{NFSU2_TR(0x465c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c45:{NFSU2_TR(0x465c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c47:{NFSU2_TR(0x465c47);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465c4a:{NFSU2_TR(0x465c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c50:{NFSU2_TR(0x465c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c52:{NFSU2_TR(0x465c52);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465c55:{NFSU2_TR(0x465c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c5b:{NFSU2_TR(0x465c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c5d:{NFSU2_TR(0x465c5d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B465c60:{NFSU2_TR(0x465c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c66:{NFSU2_TR(0x465c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465c68:{NFSU2_TR(0x465c68);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B465c6b:{NFSU2_TR(0x465c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465c75:{NFSU2_TR(0x465c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B465c77:{NFSU2_TR(0x465c77);
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
B465c78:{NFSU2_TR(0x465c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465c79:{NFSU2_TR(0x465c79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B465c7b:{NFSU2_TR(0x465c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465c7c:{NFSU2_TR(0x465c7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465c80:L465c80:{c.instructions+=15;NFSU2_TR(0x465c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465c84:{NFSU2_TR(0x465c84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B465c87:{NFSU2_TR(0x465c87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465c88:{NFSU2_TR(0x465c88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465c89:{NFSU2_TR(0x465c89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465c8a:{NFSU2_TR(0x465c8a);
__builtin_memmove((R+24),(R+4),4);
}
B465c8c:{NFSU2_TR(0x465c8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465c8e:{NFSU2_TR(0x465c8e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465c91:{NFSU2_TR(0x465c91);
w4(R+12,u32(0x1ull));
}
B465c96:{NFSU2_TR(0x465c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465c9c:{NFSU2_TR(0x465c9c);
__builtin_memmove((R+4),gp(0x850078),4);
}
B465ca2:{NFSU2_TR(0x465ca2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B465ca4:{NFSU2_TR(0x465ca4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465ca7:{NFSU2_TR(0x465ca7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465ca8:{NFSU2_TR(0x465ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465cd1;}}
}
B465caa:L465caa:{c.instructions+=10;NFSU2_TR(0x465caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465cac:{NFSU2_TR(0x465cac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465caf:{NFSU2_TR(0x465caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465cb5:{NFSU2_TR(0x465cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465cbb:{NFSU2_TR(0x465cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465cc1:{NFSU2_TR(0x465cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465cc3:{NFSU2_TR(0x465cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465cc6:{NFSU2_TR(0x465cc6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465cc9:{NFSU2_TR(0x465cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465ccf:{NFSU2_TR(0x465ccf);
{goto L465cf5;}
}
B465cd1:L465cd1:{c.instructions+=9;NFSU2_TR(0x465cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465cd3:{NFSU2_TR(0x465cd3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465cd6:{NFSU2_TR(0x465cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465cdc:{NFSU2_TR(0x465cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465ce2:{NFSU2_TR(0x465ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465ce8:{NFSU2_TR(0x465ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465cea:{NFSU2_TR(0x465cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465cec:{NFSU2_TR(0x465cec);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465cef:{NFSU2_TR(0x465cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465cf5:L465cf5:{c.instructions+=35;NFSU2_TR(0x465cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465cf7:{NFSU2_TR(0x465cf7);
__builtin_memmove((R+4),gp(0x7ed164),4);
}
B465cfd:{NFSU2_TR(0x465cfd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465d00:{NFSU2_TR(0x465d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465d06:{NFSU2_TR(0x465d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465d08:{NFSU2_TR(0x465d08);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465d0b:{NFSU2_TR(0x465d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465d11:{NFSU2_TR(0x465d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465d13:{NFSU2_TR(0x465d13);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465d16:{NFSU2_TR(0x465d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465d1c:{NFSU2_TR(0x465d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465d1e:{NFSU2_TR(0x465d1e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465d21:{NFSU2_TR(0x465d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465d27:{NFSU2_TR(0x465d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465d29:{NFSU2_TR(0x465d29);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465d2c:{NFSU2_TR(0x465d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465d32:{NFSU2_TR(0x465d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465d34:{NFSU2_TR(0x465d34);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465d37:{NFSU2_TR(0x465d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465d3d:{NFSU2_TR(0x465d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465d3f:{NFSU2_TR(0x465d3f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465d42:{NFSU2_TR(0x465d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465d48:{NFSU2_TR(0x465d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465d4a:{NFSU2_TR(0x465d4a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465d4d:{NFSU2_TR(0x465d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465d57:{NFSU2_TR(0x465d57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B465d59:{NFSU2_TR(0x465d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465d5f:{NFSU2_TR(0x465d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465d65:{NFSU2_TR(0x465d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465d68:{NFSU2_TR(0x465d68);
__builtin_memmove((R+0),gp(0x7ed164),4);
}
B465d6d:{NFSU2_TR(0x465d6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465d6e:{NFSU2_TR(0x465d6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465d6f:{NFSU2_TR(0x465d6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B465d73:{NFSU2_TR(0x465d73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465d74:{NFSU2_TR(0x465d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465d79ull));
TAIL_STATIC(0x43dda0u,43d);
}
B465d79:L465d79:{c.instructions+=3;NFSU2_TR(0x465d79);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B465d7d:{NFSU2_TR(0x465d7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465d7e:{NFSU2_TR(0x465d7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465d83ull));
TAIL_STATIC(0x57d900u,57d);
}
B465d83:L465d83:{c.instructions+=4;NFSU2_TR(0x465d83);
__builtin_memmove((R+28),(R+0),4);
}
B465d85:{NFSU2_TR(0x465d85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B465d88:{NFSU2_TR(0x465d88);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465d8a:{NFSU2_TR(0x465d8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L465df2;}}
}
B465d8c:L465d8c:{c.instructions+=4;NFSU2_TR(0x465d8c);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B465d91:{NFSU2_TR(0x465d91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465d92:{NFSU2_TR(0x465d92);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B465d94:{NFSU2_TR(0x465d94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465d99ull));
TAIL_STATIC(0x43e910u,43e);
}
B465d99:L465d99:{c.instructions+=4;NFSU2_TR(0x465d99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B465d9f:{NFSU2_TR(0x465d9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B465da2:{NFSU2_TR(0x465da2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465da4:{NFSU2_TR(0x465da4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L465dc1;}}
}
B465da6:L465da6:{c.instructions+=6;NFSU2_TR(0x465da6);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B465dac:{NFSU2_TR(0x465dac);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B465daf:{NFSU2_TR(0x465daf);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B465db5:{NFSU2_TR(0x465db5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465db6:{NFSU2_TR(0x465db6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465db7:{NFSU2_TR(0x465db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465dbcull));
TAIL_STATIC(0x440820u,440);
}
B465dbc:L465dbc:{c.instructions+=2;NFSU2_TR(0x465dbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B465dbf:{NFSU2_TR(0x465dbf);
__builtin_memmove((R+12),(R+0),4);
}
B465dc1:L465dc1:{c.instructions+=12;NFSU2_TR(0x465dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465dc7:{NFSU2_TR(0x465dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465dca:{NFSU2_TR(0x465dca);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B465dd0:{NFSU2_TR(0x465dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465dd1:{NFSU2_TR(0x465dd1);
u8 U[4];
w4(U+0,u32(0x461550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465dd6:{NFSU2_TR(0x465dd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465dd7:{NFSU2_TR(0x465dd7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465dd8:{NFSU2_TR(0x465dd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B465ddc:{NFSU2_TR(0x465ddc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465ddd:{NFSU2_TR(0x465ddd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465dde:{NFSU2_TR(0x465dde);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B465de5:{NFSU2_TR(0x465de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465deaull));
TAIL_STATIC(0x57b4a0u,57b);
}
B465dea:L465dea:{c.instructions+=2;NFSU2_TR(0x465dea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B465ded:{NFSU2_TR(0x465ded);
w4(R+12,u32(0x1ull));
}
B465df2:L465df2:{c.instructions+=3;NFSU2_TR(0x465df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465df8:{NFSU2_TR(0x465df8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B465dfb:{NFSU2_TR(0x465dfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L465e8e;}}
}
B465e01:L465e01:{c.instructions+=8;NFSU2_TR(0x465e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465e07:{NFSU2_TR(0x465e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465e09:{NFSU2_TR(0x465e09);
__builtin_memmove((R+0),gp(0x7ed164),4);
}
B465e0e:{NFSU2_TR(0x465e0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e0f:{NFSU2_TR(0x465e0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e10:{NFSU2_TR(0x465e10);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B465e14:{NFSU2_TR(0x465e14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e15:{NFSU2_TR(0x465e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465e1aull));
TAIL_STATIC(0x43dda0u,43d);
}
B465e1a:L465e1a:{c.instructions+=3;NFSU2_TR(0x465e1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B465e1e:{NFSU2_TR(0x465e1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e1f:{NFSU2_TR(0x465e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465e24ull));
TAIL_STATIC(0x57d900u,57d);
}
B465e24:L465e24:{c.instructions+=4;NFSU2_TR(0x465e24);
__builtin_memmove((R+28),(R+0),4);
}
B465e26:{NFSU2_TR(0x465e26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B465e29:{NFSU2_TR(0x465e29);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465e2b:{NFSU2_TR(0x465e2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L465e8e;}}
}
B465e2d:L465e2d:{c.instructions+=4;NFSU2_TR(0x465e2d);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B465e32:{NFSU2_TR(0x465e32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e33:{NFSU2_TR(0x465e33);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B465e35:{NFSU2_TR(0x465e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465e3aull));
TAIL_STATIC(0x43e910u,43e);
}
B465e3a:L465e3a:{c.instructions+=4;NFSU2_TR(0x465e3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B465e40:{NFSU2_TR(0x465e40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B465e43:{NFSU2_TR(0x465e43);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B465e45:{NFSU2_TR(0x465e45);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L465e62;}}
}
B465e47:L465e47:{c.instructions+=6;NFSU2_TR(0x465e47);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B465e4d:{NFSU2_TR(0x465e4d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B465e50:{NFSU2_TR(0x465e50);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B465e56:{NFSU2_TR(0x465e56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e57:{NFSU2_TR(0x465e57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e58:{NFSU2_TR(0x465e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465e5dull));
TAIL_STATIC(0x440820u,440);
}
B465e5d:L465e5d:{c.instructions+=2;NFSU2_TR(0x465e5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B465e60:{NFSU2_TR(0x465e60);
__builtin_memmove((R+12),(R+0),4);
}
B465e62:L465e62:{c.instructions+=12;NFSU2_TR(0x465e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465e68:{NFSU2_TR(0x465e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465e6b:{NFSU2_TR(0x465e6b);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B465e71:{NFSU2_TR(0x465e71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e72:{NFSU2_TR(0x465e72);
u8 U[4];
w4(U+0,u32(0x461560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e77:{NFSU2_TR(0x465e77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e78:{NFSU2_TR(0x465e78);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e79:{NFSU2_TR(0x465e79);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B465e7d:{NFSU2_TR(0x465e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e7e:{NFSU2_TR(0x465e7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465e7f:{NFSU2_TR(0x465e7f);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B465e86:{NFSU2_TR(0x465e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x465e8bull));
TAIL_STATIC(0x57b4a0u,57b);
}
B465e8b:L465e8b:{c.instructions+=1;NFSU2_TR(0x465e8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B465e8e:L465e8e:{c.instructions+=6;NFSU2_TR(0x465e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B465e8f:{NFSU2_TR(0x465e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465e90:{NFSU2_TR(0x465e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B465e91:{NFSU2_TR(0x465e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B465e92:{NFSU2_TR(0x465e92);
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
B465e95:{NFSU2_TR(0x465e95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465ea0:L465ea0:{c.instructions+=49;NFSU2_TR(0x465ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465ea6:{NFSU2_TR(0x465ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465eac:{NFSU2_TR(0x465eac);
__builtin_memmove((R+0),gp(0x7ed928),4);
}
B465eb1:{NFSU2_TR(0x465eb1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B465eb3:{NFSU2_TR(0x465eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465eb7:{NFSU2_TR(0x465eb7);
s4(0x7ed928,u32(u32(m4(0x7ed928))+u32(u32(0x4ull))));
}
B465ebe:{NFSU2_TR(0x465ebe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B465ebf:{NFSU2_TR(0x465ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B465ec1:{NFSU2_TR(0x465ec1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B465ec4:{NFSU2_TR(0x465ec4);
w4(R+8,u32(0x1ull));
}
B465ec9:{NFSU2_TR(0x465ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465ecf:{NFSU2_TR(0x465ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B465ed1:{NFSU2_TR(0x465ed1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B465ed4:{NFSU2_TR(0x465ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465eda:{NFSU2_TR(0x465eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B465ee0:{NFSU2_TR(0x465ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465ee6:{NFSU2_TR(0x465ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B465ee9:{NFSU2_TR(0x465ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465eeb:{NFSU2_TR(0x465eeb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465eee:{NFSU2_TR(0x465eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465ef4:{NFSU2_TR(0x465ef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465ef6:{NFSU2_TR(0x465ef6);
__builtin_memmove((R+8),gp(0x7ed164),4);
}
B465efc:{NFSU2_TR(0x465efc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465eff:{NFSU2_TR(0x465eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f05:{NFSU2_TR(0x465f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465f07:{NFSU2_TR(0x465f07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465f0a:{NFSU2_TR(0x465f0a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B465f0c:{NFSU2_TR(0x465f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f12:{NFSU2_TR(0x465f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465f14:{NFSU2_TR(0x465f14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465f17:{NFSU2_TR(0x465f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f1d:{NFSU2_TR(0x465f1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465f1f:{NFSU2_TR(0x465f1f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465f22:{NFSU2_TR(0x465f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f28:{NFSU2_TR(0x465f28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465f2a:{NFSU2_TR(0x465f2a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465f2d:{NFSU2_TR(0x465f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f33:{NFSU2_TR(0x465f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465f35:{NFSU2_TR(0x465f35);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465f38:{NFSU2_TR(0x465f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f3e:{NFSU2_TR(0x465f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465f40:{NFSU2_TR(0x465f40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465f43:{NFSU2_TR(0x465f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f49:{NFSU2_TR(0x465f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465f4b:{NFSU2_TR(0x465f4b);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B465f4e:{NFSU2_TR(0x465f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465f58:{NFSU2_TR(0x465f58);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B465f5a:{NFSU2_TR(0x465f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B465f5b:{NFSU2_TR(0x465f5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B465f60:L465f60:{c.instructions+=39;NFSU2_TR(0x465f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B465f64:{NFSU2_TR(0x465f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465f66:{NFSU2_TR(0x465f66);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465f69:{NFSU2_TR(0x465f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b098ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B465f73:{NFSU2_TR(0x465f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465f75:{NFSU2_TR(0x465f75);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465f78:{NFSU2_TR(0x465f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B465f82:{NFSU2_TR(0x465f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465f84:{NFSU2_TR(0x465f84);
__builtin_memmove((R+8),gp(0x7ed21c),4);
}
B465f8a:{NFSU2_TR(0x465f8a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465f8d:{NFSU2_TR(0x465f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465f93:{NFSU2_TR(0x465f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465f95:{NFSU2_TR(0x465f95);
__builtin_memmove((R+8),gp(0x7ed174),4);
}
B465f9b:{NFSU2_TR(0x465f9b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B465f9e:{NFSU2_TR(0x465f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465fa4:{NFSU2_TR(0x465fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465fa6:{NFSU2_TR(0x465fa6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465fa9:{NFSU2_TR(0x465fa9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B465fab:{NFSU2_TR(0x465fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465fb1:{NFSU2_TR(0x465fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465fb3:{NFSU2_TR(0x465fb3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465fb6:{NFSU2_TR(0x465fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465fbc:{NFSU2_TR(0x465fbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465fbe:{NFSU2_TR(0x465fbe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465fc1:{NFSU2_TR(0x465fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465fc7:{NFSU2_TR(0x465fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465fc9:{NFSU2_TR(0x465fc9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465fcc:{NFSU2_TR(0x465fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465fd2:{NFSU2_TR(0x465fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465fd4:{NFSU2_TR(0x465fd4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465fd7:{NFSU2_TR(0x465fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465fdd:{NFSU2_TR(0x465fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B465fdf:{NFSU2_TR(0x465fdf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B465fe2:{NFSU2_TR(0x465fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B465fe8:{NFSU2_TR(0x465fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B465fea:{NFSU2_TR(0x465fea);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B465fed:{NFSU2_TR(0x465fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B465ff7:{NFSU2_TR(0x465ff7);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B465ff9:{NFSU2_TR(0x465ff9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x465,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
