#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_676(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x677,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x677,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_677(u8* __restrict R,Cpu& c);
u32 page_677(Cpu& c){return body_677(c.regs.data(),c);}
__attribute__((noinline)) u32 body_677(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x677002:goto L677002;
case 0x677003:c.instructions+=7;goto B677003;
case 0x677006:c.instructions+=6;goto B677006;
case 0x677008:c.instructions+=5;goto B677008;
case 0x67700b:c.instructions+=4;goto B67700b;
case 0x67700e:c.instructions+=3;goto B67700e;
case 0x677011:c.instructions+=2;goto B677011;
case 0x677014:c.instructions+=1;goto B677014;
case 0x677019:goto L677019;
case 0x67701b:c.instructions+=2;goto B67701b;
case 0x67701d:c.instructions+=1;goto B67701d;
case 0x677023:goto L677023;
case 0x677024:c.instructions+=7;goto B677024;
case 0x677027:c.instructions+=6;goto B677027;
case 0x677029:c.instructions+=5;goto B677029;
case 0x67702c:c.instructions+=4;goto B67702c;
case 0x67702f:c.instructions+=3;goto B67702f;
case 0x677032:c.instructions+=2;goto B677032;
case 0x677035:c.instructions+=1;goto B677035;
case 0x67703a:goto L67703a;
case 0x67703c:c.instructions+=2;goto B67703c;
case 0x67703e:c.instructions+=1;goto B67703e;
case 0x677044:goto L677044;
case 0x677045:c.instructions+=7;goto B677045;
case 0x677048:c.instructions+=6;goto B677048;
case 0x67704a:c.instructions+=5;goto B67704a;
case 0x67704d:c.instructions+=4;goto B67704d;
case 0x677050:c.instructions+=3;goto B677050;
case 0x677053:c.instructions+=2;goto B677053;
case 0x677056:c.instructions+=1;goto B677056;
case 0x67705b:goto L67705b;
case 0x67705d:c.instructions+=2;goto B67705d;
case 0x67705f:c.instructions+=1;goto B67705f;
case 0x677065:goto L677065;
case 0x677066:c.instructions+=7;goto B677066;
case 0x677069:c.instructions+=6;goto B677069;
case 0x67706b:c.instructions+=5;goto B67706b;
case 0x67706e:c.instructions+=4;goto B67706e;
case 0x677071:c.instructions+=3;goto B677071;
case 0x677074:c.instructions+=2;goto B677074;
case 0x677077:c.instructions+=1;goto B677077;
case 0x67707c:goto L67707c;
case 0x67707e:c.instructions+=2;goto B67707e;
case 0x677080:c.instructions+=1;goto B677080;
case 0x677086:goto L677086;
case 0x677087:c.instructions+=7;goto B677087;
case 0x67708a:c.instructions+=6;goto B67708a;
case 0x67708c:c.instructions+=5;goto B67708c;
case 0x67708f:c.instructions+=4;goto B67708f;
case 0x677092:c.instructions+=3;goto B677092;
case 0x677095:c.instructions+=2;goto B677095;
case 0x677098:c.instructions+=1;goto B677098;
case 0x67709d:goto L67709d;
case 0x67709f:c.instructions+=2;goto B67709f;
case 0x6770a1:c.instructions+=1;goto B6770a1;
case 0x6770a7:goto L6770a7;
case 0x6770a8:c.instructions+=7;goto B6770a8;
case 0x6770ab:c.instructions+=6;goto B6770ab;
case 0x6770ad:c.instructions+=5;goto B6770ad;
case 0x6770b0:c.instructions+=4;goto B6770b0;
case 0x6770b3:c.instructions+=3;goto B6770b3;
case 0x6770b6:c.instructions+=2;goto B6770b6;
case 0x6770b9:c.instructions+=1;goto B6770b9;
case 0x6770be:goto L6770be;
case 0x6770c0:c.instructions+=2;goto B6770c0;
case 0x6770c2:c.instructions+=1;goto B6770c2;
case 0x6770c8:goto L6770c8;
case 0x6770cb:c.instructions+=9;goto B6770cb;
case 0x6770cd:c.instructions+=8;goto B6770cd;
case 0x6770d0:c.instructions+=7;goto B6770d0;
case 0x6770d5:c.instructions+=6;goto B6770d5;
case 0x6770d8:c.instructions+=5;goto B6770d8;
case 0x6770da:c.instructions+=4;goto B6770da;
case 0x6770dd:c.instructions+=3;goto B6770dd;
case 0x6770de:c.instructions+=2;goto B6770de;
case 0x6770e1:c.instructions+=1;goto B6770e1;
case 0x6770e6:goto L6770e6;
case 0x6770e8:c.instructions+=2;goto B6770e8;
case 0x6770ea:c.instructions+=1;goto B6770ea;
case 0x6770f0:goto L6770f0;
case 0x6770f1:c.instructions+=7;goto B6770f1;
case 0x6770f4:c.instructions+=6;goto B6770f4;
case 0x6770f6:c.instructions+=5;goto B6770f6;
case 0x6770f9:c.instructions+=4;goto B6770f9;
case 0x6770fc:c.instructions+=3;goto B6770fc;
case 0x6770ff:c.instructions+=2;goto B6770ff;
case 0x677102:c.instructions+=1;goto B677102;
case 0x677107:goto L677107;
case 0x677109:c.instructions+=2;goto B677109;
case 0x67710b:c.instructions+=1;goto B67710b;
case 0x677111:goto L677111;
case 0x677113:c.instructions+=7;goto B677113;
case 0x677116:c.instructions+=6;goto B677116;
case 0x677118:c.instructions+=5;goto B677118;
case 0x67711b:c.instructions+=4;goto B67711b;
case 0x67711e:c.instructions+=3;goto B67711e;
case 0x677121:c.instructions+=2;goto B677121;
case 0x677124:c.instructions+=1;goto B677124;
case 0x677129:goto L677129;
case 0x67712b:c.instructions+=2;goto B67712b;
case 0x67712d:c.instructions+=1;goto B67712d;
case 0x677133:goto L677133;
case 0x677135:c.instructions+=7;goto B677135;
case 0x677136:c.instructions+=6;goto B677136;
case 0x677139:c.instructions+=5;goto B677139;
case 0x67713b:c.instructions+=4;goto B67713b;
case 0x67713e:c.instructions+=3;goto B67713e;
case 0x677141:c.instructions+=2;goto B677141;
case 0x677144:c.instructions+=1;goto B677144;
case 0x677149:goto L677149;
case 0x67714b:c.instructions+=2;goto B67714b;
case 0x67714d:c.instructions+=1;goto B67714d;
case 0x677153:goto L677153;
case 0x677154:c.instructions+=7;goto B677154;
case 0x677157:c.instructions+=6;goto B677157;
case 0x677159:c.instructions+=5;goto B677159;
case 0x67715c:c.instructions+=4;goto B67715c;
case 0x67715f:c.instructions+=3;goto B67715f;
case 0x677162:c.instructions+=2;goto B677162;
case 0x677165:c.instructions+=1;goto B677165;
case 0x67716a:goto L67716a;
case 0x67716c:c.instructions+=2;goto B67716c;
case 0x67716e:c.instructions+=1;goto B67716e;
case 0x677174:goto L677174;
case 0x677177:c.instructions+=1;goto B677177;
case 0x677179:goto L677179;
case 0x67717c:c.instructions+=9;goto B67717c;
case 0x67717d:c.instructions+=8;goto B67717d;
case 0x67717e:c.instructions+=7;goto B67717e;
case 0x677181:c.instructions+=6;goto B677181;
case 0x677186:c.instructions+=5;goto B677186;
case 0x677189:c.instructions+=4;goto B677189;
case 0x67718b:c.instructions+=3;goto B67718b;
case 0x67718c:c.instructions+=2;goto B67718c;
case 0x67718f:c.instructions+=1;goto B67718f;
case 0x677194:goto L677194;
case 0x677196:c.instructions+=2;goto B677196;
case 0x677198:c.instructions+=1;goto B677198;
case 0x67719e:goto L67719e;
case 0x6771a1:c.instructions+=1;goto B6771a1;
case 0x6771a7:goto L6771a7;
case 0x6771aa:c.instructions+=5;goto B6771aa;
case 0x6771ac:c.instructions+=4;goto B6771ac;
case 0x6771ad:c.instructions+=3;goto B6771ad;
case 0x6771b0:c.instructions+=2;goto B6771b0;
case 0x6771b5:c.instructions+=1;goto B6771b5;
case 0x6771ba:goto L6771ba;
case 0x6771bc:c.instructions+=12;goto B6771bc;
case 0x6771bd:c.instructions+=11;goto B6771bd;
case 0x6771bf:c.instructions+=10;goto B6771bf;
case 0x6771c5:c.instructions+=9;goto B6771c5;
case 0x6771c6:c.instructions+=8;goto B6771c6;
case 0x6771c7:c.instructions+=7;goto B6771c7;
case 0x6771c9:c.instructions+=6;goto B6771c9;
case 0x6771cc:c.instructions+=5;goto B6771cc;
case 0x6771ce:c.instructions+=4;goto B6771ce;
case 0x6771d2:c.instructions+=3;goto B6771d2;
case 0x6771d3:c.instructions+=2;goto B6771d3;
case 0x6771d6:c.instructions+=1;goto B6771d6;
case 0x6771d8:goto L6771d8;
case 0x6771db:c.instructions+=4;goto B6771db;
case 0x6771e0:c.instructions+=3;goto B6771e0;
case 0x6771e3:c.instructions+=2;goto B6771e3;
case 0x6771e4:c.instructions+=1;goto B6771e4;
case 0x6771e6:goto L6771e6;
case 0x6771e9:c.instructions+=2;goto B6771e9;
case 0x6771ee:c.instructions+=1;goto B6771ee;
case 0x6771f0:goto L6771f0;
case 0x6771f1:c.instructions+=1;goto B6771f1;
case 0x6771f6:goto L6771f6;
case 0x6771f9:c.instructions+=3;goto B6771f9;
case 0x6771fc:c.instructions+=2;goto B6771fc;
case 0x6771fd:c.instructions+=1;goto B6771fd;
case 0x677202:goto L677202;
case 0x677205:c.instructions+=8;goto B677205;
case 0x67720b:c.instructions+=7;goto B67720b;
case 0x67720c:c.instructions+=6;goto B67720c;
case 0x67720d:c.instructions+=5;goto B67720d;
case 0x677210:c.instructions+=4;goto B677210;
case 0x677211:c.instructions+=3;goto B677211;
case 0x677212:c.instructions+=2;goto B677212;
case 0x677215:c.instructions+=1;goto B677215;
case 0x67721a:goto L67721a;
case 0x677220:c.instructions+=9;goto B677220;
case 0x677223:c.instructions+=8;goto B677223;
case 0x677224:c.instructions+=7;goto B677224;
case 0x677225:c.instructions+=6;goto B677225;
case 0x677228:c.instructions+=5;goto B677228;
case 0x677229:c.instructions+=4;goto B677229;
case 0x67722a:c.instructions+=3;goto B67722a;
case 0x67722d:c.instructions+=2;goto B67722d;
case 0x677230:c.instructions+=1;goto B677230;
case 0x677235:goto L677235;
case 0x67723b:c.instructions+=9;goto B67723b;
case 0x67723e:c.instructions+=8;goto B67723e;
case 0x67723f:c.instructions+=7;goto B67723f;
case 0x677240:c.instructions+=6;goto B677240;
case 0x677243:c.instructions+=5;goto B677243;
case 0x677244:c.instructions+=4;goto B677244;
case 0x677245:c.instructions+=3;goto B677245;
case 0x677248:c.instructions+=2;goto B677248;
case 0x67724b:c.instructions+=1;goto B67724b;
case 0x677250:goto L677250;
case 0x677256:c.instructions+=9;goto B677256;
case 0x677259:c.instructions+=8;goto B677259;
case 0x67725a:c.instructions+=7;goto B67725a;
case 0x67725b:c.instructions+=6;goto B67725b;
case 0x67725e:c.instructions+=5;goto B67725e;
case 0x67725f:c.instructions+=4;goto B67725f;
case 0x677260:c.instructions+=3;goto B677260;
case 0x677263:c.instructions+=2;goto B677263;
case 0x677266:c.instructions+=1;goto B677266;
case 0x67726b:goto L67726b;
case 0x677271:c.instructions+=9;goto B677271;
case 0x677274:c.instructions+=8;goto B677274;
case 0x677275:c.instructions+=7;goto B677275;
case 0x677276:c.instructions+=6;goto B677276;
case 0x677279:c.instructions+=5;goto B677279;
case 0x67727a:c.instructions+=4;goto B67727a;
case 0x67727b:c.instructions+=3;goto B67727b;
case 0x67727e:c.instructions+=2;goto B67727e;
case 0x677284:c.instructions+=1;goto B677284;
case 0x677289:goto L677289;
case 0x67728f:c.instructions+=9;goto B67728f;
case 0x677292:c.instructions+=8;goto B677292;
case 0x677293:c.instructions+=7;goto B677293;
case 0x677294:c.instructions+=6;goto B677294;
case 0x677297:c.instructions+=5;goto B677297;
case 0x677298:c.instructions+=4;goto B677298;
case 0x677299:c.instructions+=3;goto B677299;
case 0x67729c:c.instructions+=2;goto B67729c;
case 0x6772a2:c.instructions+=1;goto B6772a2;
case 0x6772a7:goto L6772a7;
case 0x6772ad:c.instructions+=9;goto B6772ad;
case 0x6772b0:c.instructions+=8;goto B6772b0;
case 0x6772b1:c.instructions+=7;goto B6772b1;
case 0x6772b2:c.instructions+=6;goto B6772b2;
case 0x6772b5:c.instructions+=5;goto B6772b5;
case 0x6772b6:c.instructions+=4;goto B6772b6;
case 0x6772b7:c.instructions+=3;goto B6772b7;
case 0x6772ba:c.instructions+=2;goto B6772ba;
case 0x6772c0:c.instructions+=1;goto B6772c0;
case 0x6772c5:goto L6772c5;
case 0x6772cb:c.instructions+=9;goto B6772cb;
case 0x6772ce:c.instructions+=8;goto B6772ce;
case 0x6772cf:c.instructions+=7;goto B6772cf;
case 0x6772d0:c.instructions+=6;goto B6772d0;
case 0x6772d3:c.instructions+=5;goto B6772d3;
case 0x6772d4:c.instructions+=4;goto B6772d4;
case 0x6772d5:c.instructions+=3;goto B6772d5;
case 0x6772d8:c.instructions+=2;goto B6772d8;
case 0x6772de:c.instructions+=1;goto B6772de;
case 0x6772e3:goto L6772e3;
case 0x6772e6:c.instructions+=5;goto B6772e6;
case 0x6772ec:c.instructions+=4;goto B6772ec;
case 0x6772ef:c.instructions+=3;goto B6772ef;
case 0x6772f2:c.instructions+=2;goto B6772f2;
case 0x6772f3:c.instructions+=1;goto B6772f3;
case 0x6772f8:goto L6772f8;
case 0x6772fa:c.instructions+=4;goto B6772fa;
case 0x6772fc:c.instructions+=3;goto B6772fc;
case 0x6772fd:c.instructions+=2;goto B6772fd;
case 0x677300:c.instructions+=1;goto B677300;
case 0x677302:goto L677302;
case 0x677307:c.instructions+=1;goto B677307;
case 0x67730c:goto L67730c;
case 0x67730e:c.instructions+=2;goto B67730e;
case 0x677310:c.instructions+=1;goto B677310;
case 0x677313:goto L677313;
case 0x67731a:c.instructions+=4;goto B67731a;
case 0x67731b:c.instructions+=3;goto B67731b;
case 0x67731d:c.instructions+=2;goto B67731d;
case 0x677320:c.instructions+=1;goto B677320;
case 0x677322:goto L677322;
case 0x677324:c.instructions+=1;goto B677324;
case 0x677326:goto L677326;
case 0x677329:goto L677329;
case 0x67732a:c.instructions+=3;goto B67732a;
case 0x677331:c.instructions+=2;goto B677331;
case 0x677333:c.instructions+=1;goto B677333;
case 0x677338:goto L677338;
case 0x67733a:c.instructions+=2;goto B67733a;
case 0x67733c:c.instructions+=1;goto B67733c;
case 0x677342:goto L677342;
case 0x677343:c.instructions+=2;goto B677343;
case 0x677346:c.instructions+=1;goto B677346;
case 0x677348:goto L677348;
case 0x67734b:c.instructions+=1;goto B67734b;
case 0x677351:goto L677351;
case 0x677354:c.instructions+=26;goto B677354;
case 0x677357:c.instructions+=25;goto B677357;
case 0x677359:c.instructions+=24;goto B677359;
case 0x67735c:c.instructions+=23;goto B67735c;
case 0x67735f:c.instructions+=22;goto B67735f;
case 0x677365:c.instructions+=21;goto B677365;
case 0x677368:c.instructions+=20;goto B677368;
case 0x67736a:c.instructions+=19;goto B67736a;
case 0x677370:c.instructions+=18;goto B677370;
case 0x677373:c.instructions+=17;goto B677373;
case 0x677375:c.instructions+=16;goto B677375;
case 0x67737b:c.instructions+=15;goto B67737b;
case 0x67737e:c.instructions+=14;goto B67737e;
case 0x677380:c.instructions+=13;goto B677380;
case 0x677386:c.instructions+=12;goto B677386;
case 0x677389:c.instructions+=11;goto B677389;
case 0x67738b:c.instructions+=10;goto B67738b;
case 0x677391:c.instructions+=9;goto B677391;
case 0x677394:c.instructions+=8;goto B677394;
case 0x677396:c.instructions+=7;goto B677396;
case 0x677398:c.instructions+=6;goto B677398;
case 0x67739a:c.instructions+=5;goto B67739a;
case 0x67739d:c.instructions+=4;goto B67739d;
case 0x6773a0:c.instructions+=3;goto B6773a0;
case 0x6773a3:c.instructions+=2;goto B6773a3;
case 0x6773a6:c.instructions+=1;goto B6773a6;
case 0x6773a8:goto L6773a8;
case 0x6773ab:goto L6773ab;
case 0x6773ae:c.instructions+=26;goto B6773ae;
case 0x6773b1:c.instructions+=25;goto B6773b1;
case 0x6773b4:c.instructions+=24;goto B6773b4;
case 0x6773b6:c.instructions+=23;goto B6773b6;
case 0x6773b9:c.instructions+=22;goto B6773b9;
case 0x6773bc:c.instructions+=21;goto B6773bc;
case 0x6773c2:c.instructions+=20;goto B6773c2;
case 0x6773c8:c.instructions+=19;goto B6773c8;
case 0x6773cb:c.instructions+=18;goto B6773cb;
case 0x6773d1:c.instructions+=17;goto B6773d1;
case 0x6773d7:c.instructions+=16;goto B6773d7;
case 0x6773da:c.instructions+=15;goto B6773da;
case 0x6773e0:c.instructions+=14;goto B6773e0;
case 0x6773e6:c.instructions+=13;goto B6773e6;
case 0x6773e9:c.instructions+=12;goto B6773e9;
case 0x6773ef:c.instructions+=11;goto B6773ef;
case 0x6773f5:c.instructions+=10;goto B6773f5;
case 0x6773f8:c.instructions+=9;goto B6773f8;
case 0x6773fe:c.instructions+=8;goto B6773fe;
case 0x677404:c.instructions+=7;goto B677404;
case 0x677407:c.instructions+=6;goto B677407;
case 0x67740a:c.instructions+=5;goto B67740a;
case 0x67740d:c.instructions+=4;goto B67740d;
case 0x677410:c.instructions+=3;goto B677410;
case 0x677413:c.instructions+=2;goto B677413;
case 0x677416:c.instructions+=1;goto B677416;
case 0x677418:goto L677418;
case 0x67741b:c.instructions+=1;goto B67741b;
case 0x67741d:goto L67741d;
case 0x677420:c.instructions+=1;goto B677420;
case 0x677423:goto L677423;
case 0x677426:c.instructions+=12;goto B677426;
case 0x677427:c.instructions+=11;goto B677427;
case 0x677428:c.instructions+=10;goto B677428;
case 0x67742b:c.instructions+=9;goto B67742b;
case 0x677430:c.instructions+=8;goto B677430;
case 0x677436:c.instructions+=7;goto B677436;
case 0x677439:c.instructions+=6;goto B677439;
case 0x67743f:c.instructions+=5;goto B67743f;
case 0x677442:c.instructions+=4;goto B677442;
case 0x677444:c.instructions+=3;goto B677444;
case 0x677447:c.instructions+=2;goto B677447;
case 0x67744a:c.instructions+=1;goto B67744a;
case 0x67744f:goto L67744f;
case 0x677451:c.instructions+=2;goto B677451;
case 0x677453:c.instructions+=1;goto B677453;
case 0x677459:goto L677459;
case 0x67745c:c.instructions+=10;goto B67745c;
case 0x67745e:c.instructions+=9;goto B67745e;
case 0x677464:c.instructions+=8;goto B677464;
case 0x677469:c.instructions+=7;goto B677469;
case 0x67746c:c.instructions+=6;goto B67746c;
case 0x67746e:c.instructions+=5;goto B67746e;
case 0x677474:c.instructions+=4;goto B677474;
case 0x677477:c.instructions+=3;goto B677477;
case 0x677478:c.instructions+=2;goto B677478;
case 0x67747b:c.instructions+=1;goto B67747b;
case 0x677480:goto L677480;
case 0x677482:c.instructions+=2;goto B677482;
case 0x677484:c.instructions+=1;goto B677484;
case 0x67748a:goto L67748a;
case 0x67748b:c.instructions+=7;goto B67748b;
case 0x67748c:c.instructions+=6;goto B67748c;
case 0x67748f:c.instructions+=5;goto B67748f;
case 0x677491:c.instructions+=4;goto B677491;
case 0x677497:c.instructions+=3;goto B677497;
case 0x67749a:c.instructions+=2;goto B67749a;
case 0x67749d:c.instructions+=1;goto B67749d;
case 0x6774a2:goto L6774a2;
case 0x6774a4:c.instructions+=2;goto B6774a4;
case 0x6774a6:c.instructions+=1;goto B6774a6;
case 0x6774ac:goto L6774ac;
case 0x6774ae:c.instructions+=7;goto B6774ae;
case 0x6774b4:c.instructions+=6;goto B6774b4;
case 0x6774b6:c.instructions+=5;goto B6774b6;
case 0x6774b9:c.instructions+=4;goto B6774b9;
case 0x6774bf:c.instructions+=3;goto B6774bf;
case 0x6774c2:c.instructions+=2;goto B6774c2;
case 0x6774c5:c.instructions+=1;goto B6774c5;
case 0x6774ca:goto L6774ca;
case 0x6774cc:c.instructions+=2;goto B6774cc;
case 0x6774ce:c.instructions+=1;goto B6774ce;
case 0x6774d4:goto L6774d4;
case 0x6774d7:c.instructions+=10;goto B6774d7;
case 0x6774d9:c.instructions+=9;goto B6774d9;
case 0x6774df:c.instructions+=8;goto B6774df;
case 0x6774e4:c.instructions+=7;goto B6774e4;
case 0x6774ea:c.instructions+=6;goto B6774ea;
case 0x6774ec:c.instructions+=5;goto B6774ec;
case 0x6774f2:c.instructions+=4;goto B6774f2;
case 0x6774f5:c.instructions+=3;goto B6774f5;
case 0x6774f6:c.instructions+=2;goto B6774f6;
case 0x6774f9:c.instructions+=1;goto B6774f9;
case 0x6774fe:goto L6774fe;
case 0x677500:c.instructions+=2;goto B677500;
case 0x677502:c.instructions+=1;goto B677502;
case 0x677508:goto L677508;
case 0x67750a:c.instructions+=7;goto B67750a;
case 0x677510:c.instructions+=6;goto B677510;
case 0x677512:c.instructions+=5;goto B677512;
case 0x677518:c.instructions+=4;goto B677518;
case 0x67751e:c.instructions+=3;goto B67751e;
case 0x677521:c.instructions+=2;goto B677521;
case 0x677524:c.instructions+=1;goto B677524;
case 0x677529:goto L677529;
case 0x67752b:c.instructions+=2;goto B67752b;
case 0x67752d:c.instructions+=1;goto B67752d;
case 0x677533:goto L677533;
case 0x677536:c.instructions+=9;goto B677536;
case 0x677538:c.instructions+=8;goto B677538;
case 0x677539:c.instructions+=7;goto B677539;
case 0x67753f:c.instructions+=6;goto B67753f;
case 0x677544:c.instructions+=5;goto B677544;
case 0x67754a:c.instructions+=4;goto B67754a;
case 0x67754c:c.instructions+=3;goto B67754c;
case 0x67754d:c.instructions+=2;goto B67754d;
case 0x677550:c.instructions+=1;goto B677550;
case 0x677555:goto L677555;
case 0x677557:c.instructions+=2;goto B677557;
case 0x677559:c.instructions+=1;goto B677559;
case 0x67755f:goto L67755f;
case 0x677562:c.instructions+=10;goto B677562;
case 0x677564:c.instructions+=9;goto B677564;
case 0x67756a:c.instructions+=8;goto B67756a;
case 0x67756f:c.instructions+=7;goto B67756f;
case 0x677575:c.instructions+=6;goto B677575;
case 0x677577:c.instructions+=5;goto B677577;
case 0x67757d:c.instructions+=4;goto B67757d;
case 0x677580:c.instructions+=3;goto B677580;
case 0x677581:c.instructions+=2;goto B677581;
case 0x677584:c.instructions+=1;goto B677584;
case 0x677589:goto L677589;
case 0x67758b:c.instructions+=2;goto B67758b;
case 0x67758d:c.instructions+=1;goto B67758d;
case 0x677593:goto L677593;
case 0x677595:c.instructions+=7;goto B677595;
case 0x67759b:c.instructions+=6;goto B67759b;
case 0x67759d:c.instructions+=5;goto B67759d;
case 0x6775a3:c.instructions+=4;goto B6775a3;
case 0x6775a9:c.instructions+=3;goto B6775a9;
case 0x6775ac:c.instructions+=2;goto B6775ac;
case 0x6775af:c.instructions+=1;goto B6775af;
case 0x6775b4:goto L6775b4;
case 0x6775b6:c.instructions+=2;goto B6775b6;
case 0x6775b8:c.instructions+=1;goto B6775b8;
case 0x6775be:goto L6775be;
case 0x6775bf:c.instructions+=7;goto B6775bf;
case 0x6775c2:c.instructions+=6;goto B6775c2;
case 0x6775c4:c.instructions+=5;goto B6775c4;
case 0x6775ca:c.instructions+=4;goto B6775ca;
case 0x6775d0:c.instructions+=3;goto B6775d0;
case 0x6775d3:c.instructions+=2;goto B6775d3;
case 0x6775d6:c.instructions+=1;goto B6775d6;
case 0x6775db:goto L6775db;
case 0x6775dd:c.instructions+=2;goto B6775dd;
case 0x6775df:c.instructions+=1;goto B6775df;
case 0x6775e5:goto L6775e5;
case 0x6775e8:c.instructions+=10;goto B6775e8;
case 0x6775e9:c.instructions+=9;goto B6775e9;
case 0x6775ec:c.instructions+=8;goto B6775ec;
case 0x6775f1:c.instructions+=7;goto B6775f1;
case 0x6775f7:c.instructions+=6;goto B6775f7;
case 0x6775f9:c.instructions+=5;goto B6775f9;
case 0x6775ff:c.instructions+=4;goto B6775ff;
case 0x677602:c.instructions+=3;goto B677602;
case 0x677603:c.instructions+=2;goto B677603;
case 0x677606:c.instructions+=1;goto B677606;
case 0x67760b:goto L67760b;
case 0x67760d:c.instructions+=2;goto B67760d;
case 0x67760f:c.instructions+=1;goto B67760f;
case 0x677615:goto L677615;
case 0x677616:c.instructions+=7;goto B677616;
case 0x67761c:c.instructions+=6;goto B67761c;
case 0x67761e:c.instructions+=5;goto B67761e;
case 0x677624:c.instructions+=4;goto B677624;
case 0x67762a:c.instructions+=3;goto B67762a;
case 0x67762d:c.instructions+=2;goto B67762d;
case 0x677630:c.instructions+=1;goto B677630;
case 0x677635:goto L677635;
case 0x677637:c.instructions+=2;goto B677637;
case 0x677639:c.instructions+=1;goto B677639;
case 0x67763f:goto L67763f;
case 0x677640:c.instructions+=7;goto B677640;
case 0x677643:c.instructions+=6;goto B677643;
case 0x677645:c.instructions+=5;goto B677645;
case 0x67764b:c.instructions+=4;goto B67764b;
case 0x677651:c.instructions+=3;goto B677651;
case 0x677654:c.instructions+=2;goto B677654;
case 0x677657:c.instructions+=1;goto B677657;
case 0x67765c:goto L67765c;
case 0x67765e:c.instructions+=2;goto B67765e;
case 0x677660:c.instructions+=1;goto B677660;
case 0x677666:goto L677666;
case 0x677667:c.instructions+=7;goto B677667;
case 0x67766d:c.instructions+=6;goto B67766d;
case 0x67766f:c.instructions+=5;goto B67766f;
case 0x677675:c.instructions+=4;goto B677675;
case 0x67767b:c.instructions+=3;goto B67767b;
case 0x67767e:c.instructions+=2;goto B67767e;
case 0x677681:c.instructions+=1;goto B677681;
case 0x677686:goto L677686;
case 0x677688:c.instructions+=2;goto B677688;
case 0x67768a:c.instructions+=1;goto B67768a;
case 0x677690:goto L677690;
case 0x677691:c.instructions+=7;goto B677691;
case 0x677694:c.instructions+=6;goto B677694;
case 0x677696:c.instructions+=5;goto B677696;
case 0x67769c:c.instructions+=4;goto B67769c;
case 0x6776a2:c.instructions+=3;goto B6776a2;
case 0x6776a5:c.instructions+=2;goto B6776a5;
case 0x6776a8:c.instructions+=1;goto B6776a8;
case 0x6776ad:goto L6776ad;
case 0x6776af:c.instructions+=2;goto B6776af;
case 0x6776b1:c.instructions+=1;goto B6776b1;
case 0x6776b7:goto L6776b7;
case 0x6776b8:c.instructions+=7;goto B6776b8;
case 0x6776be:c.instructions+=6;goto B6776be;
case 0x6776c0:c.instructions+=5;goto B6776c0;
case 0x6776c6:c.instructions+=4;goto B6776c6;
case 0x6776cc:c.instructions+=3;goto B6776cc;
case 0x6776cf:c.instructions+=2;goto B6776cf;
case 0x6776d2:c.instructions+=1;goto B6776d2;
case 0x6776d7:goto L6776d7;
case 0x6776d9:c.instructions+=2;goto B6776d9;
case 0x6776db:c.instructions+=1;goto B6776db;
case 0x6776e1:goto L6776e1;
case 0x6776e2:c.instructions+=7;goto B6776e2;
case 0x6776e5:c.instructions+=6;goto B6776e5;
case 0x6776e7:c.instructions+=5;goto B6776e7;
case 0x6776ed:c.instructions+=4;goto B6776ed;
case 0x6776f3:c.instructions+=3;goto B6776f3;
case 0x6776f6:c.instructions+=2;goto B6776f6;
case 0x6776f9:c.instructions+=1;goto B6776f9;
case 0x6776fe:goto L6776fe;
case 0x677700:c.instructions+=2;goto B677700;
case 0x677702:c.instructions+=1;goto B677702;
case 0x677708:goto L677708;
case 0x677709:c.instructions+=7;goto B677709;
case 0x67770f:c.instructions+=6;goto B67770f;
case 0x677711:c.instructions+=5;goto B677711;
case 0x677717:c.instructions+=4;goto B677717;
case 0x67771d:c.instructions+=3;goto B67771d;
case 0x677720:c.instructions+=2;goto B677720;
case 0x677723:c.instructions+=1;goto B677723;
case 0x677728:goto L677728;
case 0x67772a:c.instructions+=2;goto B67772a;
case 0x67772c:c.instructions+=1;goto B67772c;
case 0x677732:goto L677732;
case 0x677735:c.instructions+=10;goto B677735;
case 0x677737:c.instructions+=9;goto B677737;
case 0x67773d:c.instructions+=8;goto B67773d;
case 0x677742:c.instructions+=7;goto B677742;
case 0x677748:c.instructions+=6;goto B677748;
case 0x67774a:c.instructions+=5;goto B67774a;
case 0x677750:c.instructions+=4;goto B677750;
case 0x677753:c.instructions+=3;goto B677753;
case 0x677754:c.instructions+=2;goto B677754;
case 0x677757:c.instructions+=1;goto B677757;
case 0x67775c:goto L67775c;
case 0x67775e:c.instructions+=2;goto B67775e;
case 0x677760:c.instructions+=1;goto B677760;
case 0x677766:goto L677766;
case 0x677767:c.instructions+=7;goto B677767;
case 0x67776a:c.instructions+=6;goto B67776a;
case 0x67776c:c.instructions+=5;goto B67776c;
case 0x677772:c.instructions+=4;goto B677772;
case 0x677778:c.instructions+=3;goto B677778;
case 0x67777b:c.instructions+=2;goto B67777b;
case 0x67777e:c.instructions+=1;goto B67777e;
case 0x677783:goto L677783;
case 0x677785:c.instructions+=2;goto B677785;
case 0x677787:c.instructions+=1;goto B677787;
case 0x67778d:goto L67778d;
case 0x67778e:c.instructions+=7;goto B67778e;
case 0x677791:c.instructions+=6;goto B677791;
case 0x677793:c.instructions+=5;goto B677793;
case 0x677799:c.instructions+=4;goto B677799;
case 0x67779f:c.instructions+=3;goto B67779f;
case 0x6777a2:c.instructions+=2;goto B6777a2;
case 0x6777a5:c.instructions+=1;goto B6777a5;
case 0x6777aa:goto L6777aa;
case 0x6777ac:c.instructions+=2;goto B6777ac;
case 0x6777ae:c.instructions+=1;goto B6777ae;
case 0x6777b4:goto L6777b4;
case 0x6777b5:c.instructions+=7;goto B6777b5;
case 0x6777bb:c.instructions+=6;goto B6777bb;
case 0x6777bd:c.instructions+=5;goto B6777bd;
case 0x6777c3:c.instructions+=4;goto B6777c3;
case 0x6777c9:c.instructions+=3;goto B6777c9;
case 0x6777cc:c.instructions+=2;goto B6777cc;
case 0x6777cf:c.instructions+=1;goto B6777cf;
case 0x6777d4:goto L6777d4;
case 0x6777d6:c.instructions+=2;goto B6777d6;
case 0x6777d8:c.instructions+=1;goto B6777d8;
case 0x6777de:goto L6777de;
case 0x6777df:c.instructions+=7;goto B6777df;
case 0x6777e5:c.instructions+=6;goto B6777e5;
case 0x6777e7:c.instructions+=5;goto B6777e7;
case 0x6777ed:c.instructions+=4;goto B6777ed;
case 0x6777f3:c.instructions+=3;goto B6777f3;
case 0x6777f6:c.instructions+=2;goto B6777f6;
case 0x6777f9:c.instructions+=1;goto B6777f9;
case 0x6777fe:goto L6777fe;
case 0x677800:c.instructions+=2;goto B677800;
case 0x677802:c.instructions+=1;goto B677802;
case 0x677808:goto L677808;
case 0x67780a:c.instructions+=7;goto B67780a;
case 0x677810:c.instructions+=6;goto B677810;
case 0x677812:c.instructions+=5;goto B677812;
case 0x677815:c.instructions+=4;goto B677815;
case 0x677818:c.instructions+=3;goto B677818;
case 0x67781b:c.instructions+=2;goto B67781b;
case 0x67781e:c.instructions+=1;goto B67781e;
case 0x677823:goto L677823;
case 0x677825:c.instructions+=2;goto B677825;
case 0x677827:c.instructions+=1;goto B677827;
case 0x67782d:goto L67782d;
case 0x67782e:c.instructions+=7;goto B67782e;
case 0x677831:c.instructions+=6;goto B677831;
case 0x677833:c.instructions+=5;goto B677833;
case 0x677836:c.instructions+=4;goto B677836;
case 0x677839:c.instructions+=3;goto B677839;
case 0x67783c:c.instructions+=2;goto B67783c;
case 0x67783f:c.instructions+=1;goto B67783f;
case 0x677844:goto L677844;
case 0x677846:c.instructions+=2;goto B677846;
case 0x677848:c.instructions+=1;goto B677848;
case 0x67784e:goto L67784e;
case 0x67784f:c.instructions+=7;goto B67784f;
case 0x677852:c.instructions+=6;goto B677852;
case 0x677854:c.instructions+=5;goto B677854;
case 0x67785a:c.instructions+=4;goto B67785a;
case 0x67785d:c.instructions+=3;goto B67785d;
case 0x677860:c.instructions+=2;goto B677860;
case 0x677863:c.instructions+=1;goto B677863;
case 0x677868:goto L677868;
case 0x67786a:c.instructions+=2;goto B67786a;
case 0x67786c:c.instructions+=1;goto B67786c;
case 0x677872:goto L677872;
case 0x677873:c.instructions+=7;goto B677873;
case 0x677876:c.instructions+=6;goto B677876;
case 0x677878:c.instructions+=5;goto B677878;
case 0x67787b:c.instructions+=4;goto B67787b;
case 0x67787e:c.instructions+=3;goto B67787e;
case 0x677881:c.instructions+=2;goto B677881;
case 0x677884:c.instructions+=1;goto B677884;
case 0x677889:goto L677889;
case 0x67788b:c.instructions+=2;goto B67788b;
case 0x67788d:c.instructions+=1;goto B67788d;
case 0x677893:goto L677893;
case 0x677894:c.instructions+=7;goto B677894;
case 0x677897:c.instructions+=6;goto B677897;
case 0x677899:c.instructions+=5;goto B677899;
case 0x67789c:c.instructions+=4;goto B67789c;
case 0x67789f:c.instructions+=3;goto B67789f;
case 0x6778a2:c.instructions+=2;goto B6778a2;
case 0x6778a5:c.instructions+=1;goto B6778a5;
case 0x6778aa:goto L6778aa;
case 0x6778ac:c.instructions+=2;goto B6778ac;
case 0x6778ae:c.instructions+=1;goto B6778ae;
case 0x6778b4:goto L6778b4;
case 0x6778b5:c.instructions+=7;goto B6778b5;
case 0x6778b6:c.instructions+=6;goto B6778b6;
case 0x6778b9:c.instructions+=5;goto B6778b9;
case 0x6778bb:c.instructions+=4;goto B6778bb;
case 0x6778be:c.instructions+=3;goto B6778be;
case 0x6778c1:c.instructions+=2;goto B6778c1;
case 0x6778c4:c.instructions+=1;goto B6778c4;
case 0x6778c9:goto L6778c9;
case 0x6778cb:c.instructions+=2;goto B6778cb;
case 0x6778cd:c.instructions+=1;goto B6778cd;
case 0x6778d3:goto L6778d3;
case 0x6778d5:c.instructions+=7;goto B6778d5;
case 0x6778d8:c.instructions+=6;goto B6778d8;
case 0x6778da:c.instructions+=5;goto B6778da;
case 0x6778dd:c.instructions+=4;goto B6778dd;
case 0x6778e0:c.instructions+=3;goto B6778e0;
case 0x6778e3:c.instructions+=2;goto B6778e3;
case 0x6778e6:c.instructions+=1;goto B6778e6;
case 0x6778eb:goto L6778eb;
case 0x6778ed:c.instructions+=2;goto B6778ed;
case 0x6778ef:c.instructions+=1;goto B6778ef;
case 0x6778f5:goto L6778f5;
case 0x6778f6:c.instructions+=7;goto B6778f6;
case 0x6778f7:c.instructions+=6;goto B6778f7;
case 0x6778fa:c.instructions+=5;goto B6778fa;
case 0x6778fc:c.instructions+=4;goto B6778fc;
case 0x6778ff:c.instructions+=3;goto B6778ff;
case 0x677902:c.instructions+=2;goto B677902;
case 0x677905:c.instructions+=1;goto B677905;
case 0x67790a:goto L67790a;
case 0x67790c:c.instructions+=2;goto B67790c;
case 0x67790e:c.instructions+=1;goto B67790e;
case 0x677914:goto L677914;
case 0x677917:c.instructions+=9;goto B677917;
case 0x677919:c.instructions+=8;goto B677919;
case 0x67791c:c.instructions+=7;goto B67791c;
case 0x677921:c.instructions+=6;goto B677921;
case 0x677924:c.instructions+=5;goto B677924;
case 0x677926:c.instructions+=4;goto B677926;
case 0x677929:c.instructions+=3;goto B677929;
case 0x67792a:c.instructions+=2;goto B67792a;
case 0x67792d:c.instructions+=1;goto B67792d;
case 0x677932:goto L677932;
case 0x677934:c.instructions+=2;goto B677934;
case 0x677936:c.instructions+=1;goto B677936;
case 0x67793c:goto L67793c;
case 0x67793e:c.instructions+=7;goto B67793e;
case 0x677941:c.instructions+=6;goto B677941;
case 0x677943:c.instructions+=5;goto B677943;
case 0x677946:c.instructions+=4;goto B677946;
case 0x677949:c.instructions+=3;goto B677949;
case 0x67794c:c.instructions+=2;goto B67794c;
case 0x67794f:c.instructions+=1;goto B67794f;
case 0x677954:goto L677954;
case 0x677956:c.instructions+=2;goto B677956;
case 0x677958:c.instructions+=1;goto B677958;
case 0x67795a:goto L67795a;
case 0x67795b:c.instructions+=7;goto B67795b;
case 0x67795e:c.instructions+=6;goto B67795e;
case 0x677960:c.instructions+=5;goto B677960;
case 0x677963:c.instructions+=4;goto B677963;
case 0x677966:c.instructions+=3;goto B677966;
case 0x677969:c.instructions+=2;goto B677969;
case 0x67796c:c.instructions+=1;goto B67796c;
case 0x677971:goto L677971;
case 0x677973:c.instructions+=2;goto B677973;
case 0x677975:c.instructions+=1;goto B677975;
case 0x677977:goto L677977;
case 0x677978:c.instructions+=7;goto B677978;
case 0x677979:c.instructions+=6;goto B677979;
case 0x67797c:c.instructions+=5;goto B67797c;
case 0x67797e:c.instructions+=4;goto B67797e;
case 0x677981:c.instructions+=3;goto B677981;
case 0x677984:c.instructions+=2;goto B677984;
case 0x677987:c.instructions+=1;goto B677987;
case 0x67798c:goto L67798c;
case 0x67798e:c.instructions+=2;goto B67798e;
case 0x677990:c.instructions+=1;goto B677990;
case 0x677992:goto L677992;
case 0x677993:c.instructions+=7;goto B677993;
case 0x677996:c.instructions+=6;goto B677996;
case 0x677998:c.instructions+=5;goto B677998;
case 0x67799b:c.instructions+=4;goto B67799b;
case 0x67799e:c.instructions+=3;goto B67799e;
case 0x6779a1:c.instructions+=2;goto B6779a1;
case 0x6779a4:c.instructions+=1;goto B6779a4;
case 0x6779a9:goto L6779a9;
case 0x6779ab:c.instructions+=2;goto B6779ab;
case 0x6779ad:c.instructions+=1;goto B6779ad;
case 0x6779af:goto L6779af;
case 0x6779b0:c.instructions+=5;goto B6779b0;
case 0x6779b3:c.instructions+=4;goto B6779b3;
case 0x6779b5:c.instructions+=3;goto B6779b5;
case 0x6779b8:c.instructions+=2;goto B6779b8;
case 0x6779bb:c.instructions+=1;goto B6779bb;
case 0x6779be:goto L6779be;
case 0x6779c1:c.instructions+=1;goto B6779c1;
case 0x6779c6:goto L6779c6;
case 0x6779c8:c.instructions+=2;goto B6779c8;
case 0x6779ca:c.instructions+=1;goto B6779ca;
case 0x6779cc:goto L6779cc;
case 0x6779ce:goto L6779ce;
case 0x6779d1:c.instructions+=1;goto B6779d1;
case 0x6779d6:goto L6779d6;
case 0x6779d7:c.instructions+=6;goto B6779d7;
case 0x6779d9:c.instructions+=5;goto B6779d9;
case 0x6779da:c.instructions+=4;goto B6779da;
case 0x6779db:c.instructions+=3;goto B6779db;
case 0x6779dc:c.instructions+=2;goto B6779dc;
case 0x6779dd:c.instructions+=1;goto B6779dd;
case 0x6779e0:goto L6779e0;
case 0x6779e2:c.instructions+=13;goto B6779e2;
case 0x6779e3:c.instructions+=12;goto B6779e3;
case 0x6779e5:c.instructions+=11;goto B6779e5;
case 0x6779e8:c.instructions+=10;goto B6779e8;
case 0x6779e9:c.instructions+=9;goto B6779e9;
case 0x6779eb:c.instructions+=8;goto B6779eb;
case 0x6779ee:c.instructions+=7;goto B6779ee;
case 0x6779f1:c.instructions+=6;goto B6779f1;
case 0x6779f3:c.instructions+=5;goto B6779f3;
case 0x6779f4:c.instructions+=4;goto B6779f4;
case 0x6779f5:c.instructions+=3;goto B6779f5;
case 0x6779f8:c.instructions+=2;goto B6779f8;
case 0x6779fb:c.instructions+=1;goto B6779fb;
case 0x677a01:goto L677a01;
case 0x677a03:c.instructions+=2;goto B677a03;
case 0x677a05:c.instructions+=1;goto B677a05;
case 0x677a07:goto L677a07;
case 0x677a0a:c.instructions+=1;goto B677a0a;
case 0x677a0d:goto L677a0d;
case 0x677a10:c.instructions+=5;goto B677a10;
case 0x677a13:c.instructions+=4;goto B677a13;
case 0x677a16:c.instructions+=3;goto B677a16;
case 0x677a19:c.instructions+=2;goto B677a19;
case 0x677a1c:c.instructions+=1;goto B677a1c;
case 0x677a1e:goto L677a1e;
case 0x677a22:c.instructions+=1;goto B677a22;
case 0x677a24:goto L677a24;
case 0x677a26:c.instructions+=1;goto B677a26;
case 0x677a28:goto L677a28;
case 0x677a29:c.instructions+=2;goto B677a29;
case 0x677a2b:c.instructions+=1;goto B677a2b;
case 0x677a2d:goto L677a2d;
case 0x677a2f:c.instructions+=1;goto B677a2f;
case 0x677a35:goto L677a35;
case 0x677a38:c.instructions+=3;goto B677a38;
case 0x677a3b:c.instructions+=2;goto B677a3b;
case 0x677a3c:c.instructions+=1;goto B677a3c;
case 0x677a41:goto L677a41;
case 0x677a42:c.instructions+=4;goto B677a42;
case 0x677a44:c.instructions+=3;goto B677a44;
case 0x677a46:c.instructions+=2;goto B677a46;
case 0x677a49:c.instructions+=1;goto B677a49;
case 0x677a4f:goto L677a4f;
case 0x677a51:c.instructions+=3;goto B677a51;
case 0x677a53:c.instructions+=2;goto B677a53;
case 0x677a56:c.instructions+=1;goto B677a56;
case 0x677a59:goto L677a59;
case 0x677a5d:c.instructions+=4;goto B677a5d;
case 0x677a5e:c.instructions+=3;goto B677a5e;
case 0x677a60:c.instructions+=2;goto B677a60;
case 0x677a63:c.instructions+=1;goto B677a63;
case 0x677a65:goto L677a65;
case 0x677a67:c.instructions+=1;goto B677a67;
case 0x677a69:goto L677a69;
case 0x677a6c:c.instructions+=8;goto B677a6c;
case 0x677a6f:c.instructions+=7;goto B677a6f;
case 0x677a72:c.instructions+=6;goto B677a72;
case 0x677a74:c.instructions+=5;goto B677a74;
case 0x677a77:c.instructions+=4;goto B677a77;
case 0x677a7a:c.instructions+=3;goto B677a7a;
case 0x677a7c:c.instructions+=2;goto B677a7c;
case 0x677a7e:c.instructions+=1;goto B677a7e;
case 0x677a81:goto L677a81;
case 0x677a84:c.instructions+=7;goto B677a84;
case 0x677a86:c.instructions+=6;goto B677a86;
case 0x677a89:c.instructions+=5;goto B677a89;
case 0x677a8c:c.instructions+=4;goto B677a8c;
case 0x677a8f:c.instructions+=3;goto B677a8f;
case 0x677a92:c.instructions+=2;goto B677a92;
case 0x677a95:c.instructions+=1;goto B677a95;
case 0x677a97:goto L677a97;
case 0x677a98:c.instructions+=3;goto B677a98;
case 0x677a9b:c.instructions+=2;goto B677a9b;
case 0x677a9d:c.instructions+=1;goto B677a9d;
case 0x677aa2:goto L677aa2;
case 0x677aa4:c.instructions+=2;goto B677aa4;
case 0x677aa6:c.instructions+=1;goto B677aa6;
case 0x677aac:goto L677aac;
case 0x677aad:c.instructions+=3;goto B677aad;
case 0x677ab0:c.instructions+=2;goto B677ab0;
case 0x677ab2:c.instructions+=1;goto B677ab2;
case 0x677ab7:goto L677ab7;
case 0x677ab9:c.instructions+=2;goto B677ab9;
case 0x677abb:c.instructions+=1;goto B677abb;
case 0x677ac1:goto L677ac1;
case 0x677ac3:c.instructions+=10;goto B677ac3;
case 0x677ac5:c.instructions+=9;goto B677ac5;
case 0x677ac8:c.instructions+=8;goto B677ac8;
case 0x677ace:c.instructions+=7;goto B677ace;
case 0x677ad1:c.instructions+=6;goto B677ad1;
case 0x677ad3:c.instructions+=5;goto B677ad3;
case 0x677ad8:c.instructions+=4;goto B677ad8;
case 0x677ad9:c.instructions+=3;goto B677ad9;
case 0x677adc:c.instructions+=2;goto B677adc;
case 0x677ade:c.instructions+=1;goto B677ade;
case 0x677ae3:goto L677ae3;
case 0x677ae5:c.instructions+=2;goto B677ae5;
case 0x677ae7:c.instructions+=1;goto B677ae7;
case 0x677aed:goto L677aed;
case 0x677af0:c.instructions+=9;goto B677af0;
case 0x677af3:c.instructions+=8;goto B677af3;
case 0x677af5:c.instructions+=7;goto B677af5;
case 0x677af7:c.instructions+=6;goto B677af7;
case 0x677af8:c.instructions+=5;goto B677af8;
case 0x677afb:c.instructions+=4;goto B677afb;
case 0x677b01:c.instructions+=3;goto B677b01;
case 0x677b04:c.instructions+=2;goto B677b04;
case 0x677b05:c.instructions+=1;goto B677b05;
case 0x677b0a:goto L677b0a;
case 0x677b0e:c.instructions+=1;goto B677b0e;
case 0x677b14:goto L677b14;
case 0x677b17:c.instructions+=3;goto B677b17;
case 0x677b1a:c.instructions+=2;goto B677b1a;
case 0x677b1b:c.instructions+=1;goto B677b1b;
case 0x677b20:goto L677b20;
case 0x677b22:c.instructions+=3;goto B677b22;
case 0x677b23:c.instructions+=2;goto B677b23;
case 0x677b26:c.instructions+=1;goto B677b26;
case 0x677b2c:goto L677b2c;
case 0x677b2f:c.instructions+=3;goto B677b2f;
case 0x677b31:c.instructions+=2;goto B677b31;
case 0x677b33:c.instructions+=1;goto B677b33;
case 0x677b36:goto L677b36;
case 0x677b3a:c.instructions+=4;goto B677b3a;
case 0x677b3b:c.instructions+=3;goto B677b3b;
case 0x677b3d:c.instructions+=2;goto B677b3d;
case 0x677b40:c.instructions+=1;goto B677b40;
case 0x677b42:goto L677b42;
case 0x677b43:c.instructions+=3;goto B677b43;
case 0x677b46:c.instructions+=2;goto B677b46;
case 0x677b48:c.instructions+=1;goto B677b48;
case 0x677b4d:goto L677b4d;
case 0x677b4f:c.instructions+=2;goto B677b4f;
case 0x677b51:c.instructions+=1;goto B677b51;
case 0x677b57:goto L677b57;
case 0x677b58:c.instructions+=3;goto B677b58;
case 0x677b5b:c.instructions+=2;goto B677b5b;
case 0x677b5d:c.instructions+=1;goto B677b5d;
case 0x677b62:goto L677b62;
case 0x677b64:c.instructions+=2;goto B677b64;
case 0x677b66:c.instructions+=1;goto B677b66;
case 0x677b6c:goto L677b6c;
case 0x677b6d:c.instructions+=3;goto B677b6d;
case 0x677b70:c.instructions+=2;goto B677b70;
case 0x677b72:c.instructions+=1;goto B677b72;
case 0x677b77:goto L677b77;
case 0x677b79:c.instructions+=2;goto B677b79;
case 0x677b7b:c.instructions+=1;goto B677b7b;
case 0x677b81:goto L677b81;
case 0x677b82:c.instructions+=3;goto B677b82;
case 0x677b85:c.instructions+=2;goto B677b85;
case 0x677b87:c.instructions+=1;goto B677b87;
case 0x677b8c:goto L677b8c;
case 0x677b8e:c.instructions+=2;goto B677b8e;
case 0x677b90:c.instructions+=1;goto B677b90;
case 0x677b96:goto L677b96;
case 0x677b98:c.instructions+=10;goto B677b98;
case 0x677b9a:c.instructions+=9;goto B677b9a;
case 0x677b9d:c.instructions+=8;goto B677b9d;
case 0x677ba3:c.instructions+=7;goto B677ba3;
case 0x677ba6:c.instructions+=6;goto B677ba6;
case 0x677ba8:c.instructions+=5;goto B677ba8;
case 0x677bad:c.instructions+=4;goto B677bad;
case 0x677bae:c.instructions+=3;goto B677bae;
case 0x677bb1:c.instructions+=2;goto B677bb1;
case 0x677bb3:c.instructions+=1;goto B677bb3;
case 0x677bb8:goto L677bb8;
case 0x677bba:c.instructions+=2;goto B677bba;
case 0x677bbc:c.instructions+=1;goto B677bbc;
case 0x677bbe:goto L677bbe;
case 0x677bc0:c.instructions+=9;goto B677bc0;
case 0x677bc3:c.instructions+=8;goto B677bc3;
case 0x677bc6:c.instructions+=7;goto B677bc6;
case 0x677bc9:c.instructions+=6;goto B677bc9;
case 0x677bcf:c.instructions+=5;goto B677bcf;
case 0x677bd2:c.instructions+=4;goto B677bd2;
case 0x677bd4:c.instructions+=3;goto B677bd4;
case 0x677bd7:c.instructions+=2;goto B677bd7;
case 0x677bda:c.instructions+=1;goto B677bda;
case 0x677bdf:goto L677bdf;
case 0x677be1:c.instructions+=2;goto B677be1;
case 0x677be3:c.instructions+=1;goto B677be3;
case 0x677be5:goto L677be5;
case 0x677be7:c.instructions+=8;goto B677be7;
case 0x677bea:c.instructions+=7;goto B677bea;
case 0x677bf0:c.instructions+=6;goto B677bf0;
case 0x677bf3:c.instructions+=5;goto B677bf3;
case 0x677bf5:c.instructions+=4;goto B677bf5;
case 0x677bf8:c.instructions+=3;goto B677bf8;
case 0x677bf9:c.instructions+=2;goto B677bf9;
case 0x677bfc:c.instructions+=1;goto B677bfc;
case 0x677c01:goto L677c01;
case 0x677c03:c.instructions+=2;goto B677c03;
case 0x677c05:c.instructions+=1;goto B677c05;
case 0x677c07:goto L677c07;
case 0x677c09:c.instructions+=2;goto B677c09;
case 0x677c0c:c.instructions+=1;goto B677c0c;
case 0x677c0f:goto L677c0f;
case 0x677c12:c.instructions+=1;goto B677c12;
case 0x677c15:goto L677c15;
case 0x677c18:c.instructions+=2;goto B677c18;
case 0x677c1a:c.instructions+=1;goto B677c1a;
case 0x677c1f:goto L677c1f;
case 0x677c21:c.instructions+=2;goto B677c21;
case 0x677c23:c.instructions+=1;goto B677c23;
case 0x677c25:goto L677c25;
case 0x677c27:goto L677c27;
case 0x677c2a:c.instructions+=1;goto B677c2a;
case 0x677c2f:goto L677c2f;
case 0x677c30:c.instructions+=6;goto B677c30;
case 0x677c31:c.instructions+=5;goto B677c31;
case 0x677c33:c.instructions+=4;goto B677c33;
case 0x677c34:c.instructions+=3;goto B677c34;
case 0x677c35:c.instructions+=2;goto B677c35;
case 0x677c36:c.instructions+=1;goto B677c36;
case 0x677c39:goto L677c39;
case 0x677c3c:c.instructions+=3;goto B677c3c;
case 0x677c3f:c.instructions+=2;goto B677c3f;
case 0x677c40:c.instructions+=1;goto B677c40;
case 0x677c45:goto L677c45;
case 0x677c47:c.instructions+=3;goto B677c47;
case 0x677c48:c.instructions+=2;goto B677c48;
case 0x677c4b:c.instructions+=1;goto B677c4b;
case 0x677c4d:goto L677c4d;
case 0x677c52:c.instructions+=1;goto B677c52;
case 0x677c54:goto L677c54;
case 0x677c57:c.instructions+=3;goto B677c57;
case 0x677c59:c.instructions+=2;goto B677c59;
case 0x677c5b:c.instructions+=1;goto B677c5b;
case 0x677c5e:goto L677c5e;
case 0x677c62:c.instructions+=4;goto B677c62;
case 0x677c63:c.instructions+=3;goto B677c63;
case 0x677c65:c.instructions+=2;goto B677c65;
case 0x677c68:c.instructions+=1;goto B677c68;
case 0x677c6a:goto L677c6a;
case 0x677c6c:c.instructions+=2;goto B677c6c;
case 0x677c6e:c.instructions+=1;goto B677c6e;
case 0x677c70:goto L677c70;
case 0x677c73:c.instructions+=5;goto B677c73;
case 0x677c76:c.instructions+=4;goto B677c76;
case 0x677c79:c.instructions+=3;goto B677c79;
case 0x677c7a:c.instructions+=2;goto B677c7a;
case 0x677c7c:c.instructions+=1;goto B677c7c;
case 0x677c7e:goto L677c7e;
case 0x677c7f:c.instructions+=3;goto B677c7f;
case 0x677c82:c.instructions+=2;goto B677c82;
case 0x677c84:c.instructions+=1;goto B677c84;
case 0x677c89:goto L677c89;
case 0x677c8b:c.instructions+=2;goto B677c8b;
case 0x677c8d:c.instructions+=1;goto B677c8d;
case 0x677c8f:goto L677c8f;
case 0x677c90:c.instructions+=3;goto B677c90;
case 0x677c93:c.instructions+=2;goto B677c93;
case 0x677c95:c.instructions+=1;goto B677c95;
case 0x677c9a:goto L677c9a;
case 0x677c9c:c.instructions+=2;goto B677c9c;
case 0x677c9e:c.instructions+=1;goto B677c9e;
case 0x677ca0:goto L677ca0;
case 0x677ca1:c.instructions+=3;goto B677ca1;
case 0x677ca4:c.instructions+=2;goto B677ca4;
case 0x677ca6:c.instructions+=1;goto B677ca6;
case 0x677cab:goto L677cab;
case 0x677cad:c.instructions+=2;goto B677cad;
case 0x677caf:c.instructions+=1;goto B677caf;
case 0x677cb5:goto L677cb5;
case 0x677cb6:c.instructions+=3;goto B677cb6;
case 0x677cb9:c.instructions+=2;goto B677cb9;
case 0x677cbb:c.instructions+=1;goto B677cbb;
case 0x677cc0:goto L677cc0;
case 0x677cc2:c.instructions+=2;goto B677cc2;
case 0x677cc4:c.instructions+=1;goto B677cc4;
case 0x677cca:goto L677cca;
case 0x677ccb:c.instructions+=3;goto B677ccb;
case 0x677cce:c.instructions+=2;goto B677cce;
case 0x677cd0:c.instructions+=1;goto B677cd0;
case 0x677cd5:goto L677cd5;
case 0x677cd7:c.instructions+=2;goto B677cd7;
case 0x677cd9:c.instructions+=1;goto B677cd9;
case 0x677cdf:goto L677cdf;
case 0x677ce1:c.instructions+=10;goto B677ce1;
case 0x677ce3:c.instructions+=9;goto B677ce3;
case 0x677ce6:c.instructions+=8;goto B677ce6;
case 0x677cec:c.instructions+=7;goto B677cec;
case 0x677cef:c.instructions+=6;goto B677cef;
case 0x677cf1:c.instructions+=5;goto B677cf1;
case 0x677cf6:c.instructions+=4;goto B677cf6;
case 0x677cf7:c.instructions+=3;goto B677cf7;
case 0x677cfa:c.instructions+=2;goto B677cfa;
case 0x677cfc:c.instructions+=1;goto B677cfc;
case 0x677d01:goto L677d01;
case 0x677d03:c.instructions+=2;goto B677d03;
case 0x677d05:c.instructions+=1;goto B677d05;
case 0x677d0b:goto L677d0b;
case 0x677d0d:c.instructions+=9;goto B677d0d;
case 0x677d10:c.instructions+=8;goto B677d10;
case 0x677d13:c.instructions+=7;goto B677d13;
case 0x677d16:c.instructions+=6;goto B677d16;
case 0x677d1c:c.instructions+=5;goto B677d1c;
case 0x677d1f:c.instructions+=4;goto B677d1f;
case 0x677d21:c.instructions+=3;goto B677d21;
case 0x677d24:c.instructions+=2;goto B677d24;
case 0x677d27:c.instructions+=1;goto B677d27;
case 0x677d2c:goto L677d2c;
case 0x677d2e:c.instructions+=2;goto B677d2e;
case 0x677d30:c.instructions+=1;goto B677d30;
case 0x677d36:goto L677d36;
case 0x677d38:c.instructions+=8;goto B677d38;
case 0x677d3b:c.instructions+=7;goto B677d3b;
case 0x677d41:c.instructions+=6;goto B677d41;
case 0x677d44:c.instructions+=5;goto B677d44;
case 0x677d46:c.instructions+=4;goto B677d46;
case 0x677d49:c.instructions+=3;goto B677d49;
case 0x677d4a:c.instructions+=2;goto B677d4a;
case 0x677d4d:c.instructions+=1;goto B677d4d;
case 0x677d52:goto L677d52;
case 0x677d54:c.instructions+=2;goto B677d54;
case 0x677d56:c.instructions+=1;goto B677d56;
case 0x677d5c:goto L677d5c;
case 0x677d5e:c.instructions+=7;goto B677d5e;
case 0x677d61:c.instructions+=6;goto B677d61;
case 0x677d63:c.instructions+=5;goto B677d63;
case 0x677d66:c.instructions+=4;goto B677d66;
case 0x677d69:c.instructions+=3;goto B677d69;
case 0x677d6a:c.instructions+=2;goto B677d6a;
case 0x677d6d:c.instructions+=1;goto B677d6d;
case 0x677d72:goto L677d72;
case 0x677d74:c.instructions+=2;goto B677d74;
case 0x677d76:c.instructions+=1;goto B677d76;
case 0x677d7c:goto L677d7c;
case 0x677d7e:c.instructions+=3;goto B677d7e;
case 0x677d81:c.instructions+=2;goto B677d81;
case 0x677d84:c.instructions+=1;goto B677d84;
case 0x677d89:goto L677d89;
case 0x677d8b:c.instructions+=16;goto B677d8b;
case 0x677d8c:c.instructions+=15;goto B677d8c;
case 0x677d8e:c.instructions+=14;goto B677d8e;
case 0x677d91:c.instructions+=13;goto B677d91;
case 0x677d92:c.instructions+=12;goto B677d92;
case 0x677d93:c.instructions+=11;goto B677d93;
case 0x677d95:c.instructions+=10;goto B677d95;
case 0x677d96:c.instructions+=9;goto B677d96;
case 0x677d99:c.instructions+=8;goto B677d99;
case 0x677d9b:c.instructions+=7;goto B677d9b;
case 0x677d9c:c.instructions+=6;goto B677d9c;
case 0x677d9e:c.instructions+=5;goto B677d9e;
case 0x677da0:c.instructions+=4;goto B677da0;
case 0x677da3:c.instructions+=3;goto B677da3;
case 0x677da6:c.instructions+=2;goto B677da6;
case 0x677da9:c.instructions+=1;goto B677da9;
case 0x677dab:goto L677dab;
case 0x677dae:c.instructions+=5;goto B677dae;
case 0x677daf:c.instructions+=4;goto B677daf;
case 0x677db2:c.instructions+=3;goto B677db2;
case 0x677db5:c.instructions+=2;goto B677db5;
case 0x677db7:c.instructions+=1;goto B677db7;
case 0x677dbc:goto L677dbc;
case 0x677dbe:c.instructions+=1;goto B677dbe;
case 0x677dc0:goto L677dc0;
case 0x677dc6:c.instructions+=5;goto B677dc6;
case 0x677dc9:c.instructions+=4;goto B677dc9;
case 0x677dcb:c.instructions+=3;goto B677dcb;
case 0x677dcd:c.instructions+=2;goto B677dcd;
case 0x677dd0:c.instructions+=1;goto B677dd0;
case 0x677dd2:goto L677dd2;
case 0x677dd6:goto L677dd6;
case 0x677ddc:c.instructions+=5;goto B677ddc;
case 0x677ddf:c.instructions+=4;goto B677ddf;
case 0x677de1:c.instructions+=3;goto B677de1;
case 0x677de3:c.instructions+=2;goto B677de3;
case 0x677de6:c.instructions+=1;goto B677de6;
case 0x677de8:goto L677de8;
case 0x677dec:goto L677dec;
case 0x677ded:c.instructions+=2;goto B677ded;
case 0x677def:c.instructions+=1;goto B677def;
case 0x677df1:goto L677df1;
case 0x677df3:c.instructions+=2;goto B677df3;
case 0x677df4:c.instructions+=1;goto B677df4;
case 0x677df6:goto L677df6;
case 0x677df8:goto L677df8;
case 0x677dfc:c.instructions+=1;goto B677dfc;
case 0x677dfe:goto L677dfe;
case 0x677e02:c.instructions+=1;goto B677e02;
case 0x677e04:goto L677e04;
case 0x677e06:c.instructions+=3;goto B677e06;
case 0x677e09:c.instructions+=2;goto B677e09;
case 0x677e0a:c.instructions+=1;goto B677e0a;
case 0x677e0f:goto L677e0f;
case 0x677e11:c.instructions+=4;goto B677e11;
case 0x677e13:c.instructions+=3;goto B677e13;
case 0x677e14:c.instructions+=2;goto B677e14;
case 0x677e17:c.instructions+=1;goto B677e17;
case 0x677e1d:goto L677e1d;
case 0x677e1f:c.instructions+=2;goto B677e1f;
case 0x677e21:c.instructions+=1;goto B677e21;
case 0x677e23:goto L677e23;
case 0x677e27:c.instructions+=1;goto B677e27;
case 0x677e29:goto L677e29;
case 0x677e2c:c.instructions+=1;goto B677e2c;
case 0x677e2e:goto L677e2e;
case 0x677e31:goto L677e31;
case 0x677e34:c.instructions+=3;goto B677e34;
case 0x677e35:c.instructions+=2;goto B677e35;
case 0x677e37:c.instructions+=1;goto B677e37;
case 0x677e39:goto L677e39;
case 0x677e3a:c.instructions+=3;goto B677e3a;
case 0x677e3d:c.instructions+=2;goto B677e3d;
case 0x677e3f:c.instructions+=1;goto B677e3f;
case 0x677e44:goto L677e44;
case 0x677e46:c.instructions+=2;goto B677e46;
case 0x677e48:c.instructions+=1;goto B677e48;
case 0x677e4e:goto L677e4e;
case 0x677e50:c.instructions+=5;goto B677e50;
case 0x677e52:c.instructions+=4;goto B677e52;
case 0x677e58:c.instructions+=3;goto B677e58;
case 0x677e59:c.instructions+=2;goto B677e59;
case 0x677e5f:c.instructions+=1;goto B677e5f;
case 0x677e64:goto L677e64;
case 0x677e66:c.instructions+=2;goto B677e66;
case 0x677e69:c.instructions+=1;goto B677e69;
case 0x677e6b:goto L677e6b;
case 0x677e6d:goto L677e6d;
case 0x677e70:c.instructions+=1;goto B677e70;
case 0x677e72:goto L677e72;
case 0x677e73:c.instructions+=2;goto B677e73;
case 0x677e75:c.instructions+=1;goto B677e75;
case 0x677e77:goto L677e77;
case 0x677e79:goto L677e79;
case 0x677e7f:goto L677e7f;
case 0x677e82:c.instructions+=4;goto B677e82;
case 0x677e83:c.instructions+=3;goto B677e83;
case 0x677e85:c.instructions+=2;goto B677e85;
case 0x677e87:c.instructions+=1;goto B677e87;
case 0x677e8c:goto L677e8c;
case 0x677e8e:c.instructions+=1;goto B677e8e;
case 0x677e94:goto L677e94;
case 0x677e97:c.instructions+=1;goto B677e97;
case 0x677e9c:goto L677e9c;
case 0x677e9f:c.instructions+=7;goto B677e9f;
case 0x677ea2:c.instructions+=6;goto B677ea2;
case 0x677ea5:c.instructions+=5;goto B677ea5;
case 0x677ea7:c.instructions+=4;goto B677ea7;
case 0x677ead:c.instructions+=3;goto B677ead;
case 0x677eaf:c.instructions+=2;goto B677eaf;
case 0x677eb2:c.instructions+=1;goto B677eb2;
case 0x677eb8:goto L677eb8;
case 0x677ebb:c.instructions+=9;goto B677ebb;
case 0x677ebc:c.instructions+=8;goto B677ebc;
case 0x677ebe:c.instructions+=7;goto B677ebe;
case 0x677ec0:c.instructions+=6;goto B677ec0;
case 0x677ec1:c.instructions+=5;goto B677ec1;
case 0x677ec3:c.instructions+=4;goto B677ec3;
case 0x677ec4:c.instructions+=3;goto B677ec4;
case 0x677ec7:c.instructions+=2;goto B677ec7;
case 0x677ec8:c.instructions+=1;goto B677ec8;
case 0x677eca:goto L677eca;
case 0x677ecc:c.instructions+=5;goto B677ecc;
case 0x677ecf:c.instructions+=4;goto B677ecf;
case 0x677ed0:c.instructions+=3;goto B677ed0;
case 0x677ed2:c.instructions+=2;goto B677ed2;
case 0x677ed4:c.instructions+=1;goto B677ed4;
case 0x677ed6:goto L677ed6;
case 0x677ed8:c.instructions+=12;goto B677ed8;
case 0x677ed9:c.instructions+=11;goto B677ed9;
case 0x677edb:c.instructions+=10;goto B677edb;
case 0x677edd:c.instructions+=9;goto B677edd;
case 0x677edf:c.instructions+=8;goto B677edf;
case 0x677ee1:c.instructions+=7;goto B677ee1;
case 0x677ee2:c.instructions+=6;goto B677ee2;
case 0x677ee4:c.instructions+=5;goto B677ee4;
case 0x677ee6:c.instructions+=4;goto B677ee6;
case 0x677ee8:c.instructions+=3;goto B677ee8;
case 0x677eea:c.instructions+=2;goto B677eea;
case 0x677eee:c.instructions+=1;goto B677eee;
case 0x677ef0:goto L677ef0;
case 0x677ef2:goto L677ef2;
case 0x677ef5:c.instructions+=2;goto B677ef5;
case 0x677ef9:c.instructions+=1;goto B677ef9;
case 0x677efb:goto L677efb;
case 0x677eff:c.instructions+=1;goto B677eff;
case 0x677f01:goto L677f01;
case 0x677f04:c.instructions+=1;goto B677f04;
case 0x677f06:goto L677f06;
case 0x677f09:c.instructions+=2;goto B677f09;
case 0x677f0b:c.instructions+=1;goto B677f0b;
case 0x677f0d:goto L677f0d;
case 0x677f0e:goto L677f0e;
case 0x677f11:c.instructions+=1;goto B677f11;
case 0x677f15:goto L677f15;
case 0x677f17:c.instructions+=1;goto B677f17;
case 0x677f1d:goto L677f1d;
case 0x677f1f:c.instructions+=3;goto B677f1f;
case 0x677f22:c.instructions+=2;goto B677f22;
case 0x677f23:c.instructions+=1;goto B677f23;
case 0x677f28:goto L677f28;
case 0x677f2a:c.instructions+=3;goto B677f2a;
case 0x677f2b:c.instructions+=2;goto B677f2b;
case 0x677f2e:c.instructions+=1;goto B677f2e;
case 0x677f34:goto L677f34;
case 0x677f36:c.instructions+=2;goto B677f36;
case 0x677f38:c.instructions+=1;goto B677f38;
case 0x677f3a:goto L677f3a;
case 0x677f3d:c.instructions+=5;goto B677f3d;
case 0x677f40:c.instructions+=4;goto B677f40;
case 0x677f43:c.instructions+=3;goto B677f43;
case 0x677f44:c.instructions+=2;goto B677f44;
case 0x677f46:c.instructions+=1;goto B677f46;
case 0x677f48:goto L677f48;
case 0x677f49:c.instructions+=3;goto B677f49;
case 0x677f4c:c.instructions+=2;goto B677f4c;
case 0x677f4e:c.instructions+=1;goto B677f4e;
case 0x677f53:goto L677f53;
case 0x677f55:c.instructions+=2;goto B677f55;
case 0x677f57:c.instructions+=1;goto B677f57;
case 0x677f5d:goto L677f5d;
case 0x677f5f:c.instructions+=12;goto B677f5f;
case 0x677f61:c.instructions+=11;goto B677f61;
case 0x677f64:c.instructions+=10;goto B677f64;
case 0x677f66:c.instructions+=9;goto B677f66;
case 0x677f69:c.instructions+=8;goto B677f69;
case 0x677f6e:c.instructions+=7;goto B677f6e;
case 0x677f71:c.instructions+=6;goto B677f71;
case 0x677f75:c.instructions+=5;goto B677f75;
case 0x677f78:c.instructions+=4;goto B677f78;
case 0x677f7a:c.instructions+=3;goto B677f7a;
case 0x677f7d:c.instructions+=2;goto B677f7d;
case 0x677f80:c.instructions+=1;goto B677f80;
case 0x677f85:goto L677f85;
case 0x677f87:c.instructions+=3;goto B677f87;
case 0x677f89:c.instructions+=2;goto B677f89;
case 0x677f8b:c.instructions+=1;goto B677f8b;
case 0x677f91:goto L677f91;
case 0x677f94:c.instructions+=1;goto B677f94;
case 0x677f9a:goto L677f9a;
case 0x677f9b:c.instructions+=3;goto B677f9b;
case 0x677f9e:c.instructions+=2;goto B677f9e;
case 0x677fa0:c.instructions+=1;goto B677fa0;
case 0x677fa5:goto L677fa5;
case 0x677fa7:c.instructions+=2;goto B677fa7;
case 0x677fa9:c.instructions+=1;goto B677fa9;
case 0x677faf:goto L677faf;
case 0x677fb0:c.instructions+=7;goto B677fb0;
case 0x677fb1:c.instructions+=6;goto B677fb1;
case 0x677fb4:c.instructions+=5;goto B677fb4;
case 0x677fb6:c.instructions+=4;goto B677fb6;
case 0x677fb9:c.instructions+=3;goto B677fb9;
case 0x677fbc:c.instructions+=2;goto B677fbc;
case 0x677fbf:c.instructions+=1;goto B677fbf;
case 0x677fc4:goto L677fc4;
case 0x677fc6:c.instructions+=2;goto B677fc6;
case 0x677fc8:c.instructions+=1;goto B677fc8;
case 0x677fce:goto L677fce;
case 0x677fd3:c.instructions+=2;goto B677fd3;
case 0x677fd7:c.instructions+=1;goto B677fd7;
case 0x677fd9:goto L677fd9;
case 0x677fdc:c.instructions+=9;goto B677fdc;
case 0x677fde:c.instructions+=8;goto B677fde;
case 0x677fe1:c.instructions+=7;goto B677fe1;
case 0x677fe3:c.instructions+=6;goto B677fe3;
case 0x677fe6:c.instructions+=5;goto B677fe6;
case 0x677fe8:c.instructions+=4;goto B677fe8;
case 0x677feb:c.instructions+=3;goto B677feb;
case 0x677fec:c.instructions+=2;goto B677fec;
case 0x677fef:c.instructions+=1;goto B677fef;
case 0x677ff4:goto L677ff4;
case 0x677ff6:c.instructions+=2;goto B677ff6;
case 0x677ff8:c.instructions+=1;goto B677ff8;
case 0x677ffe:goto L677ffe;
default:missing_instruction(c.pc);}
B677002:L677002:{c.instructions+=8;NFSU2_TR(0x677002);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677003:{NFSU2_TR(0x677003);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677006:{NFSU2_TR(0x677006);
__builtin_memmove((R+4),(R+24),4);
}
B677008:{NFSU2_TR(0x677008);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67700b:{NFSU2_TR(0x67700b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67700e:{NFSU2_TR(0x67700e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677011:{NFSU2_TR(0x677011);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677014:{NFSU2_TR(0x677014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677019ull));
TAIL_STATIC(0x6758ceu,675);
}
B677019:L677019:{c.instructions+=3;NFSU2_TR(0x677019);
__builtin_memmove((R+28),(R+0),4);
}
B67701b:{NFSU2_TR(0x67701b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67701d:{NFSU2_TR(0x67701d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677023:L677023:{c.instructions+=8;NFSU2_TR(0x677023);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677024:{NFSU2_TR(0x677024);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677027:{NFSU2_TR(0x677027);
__builtin_memmove((R+4),(R+24),4);
}
B677029:{NFSU2_TR(0x677029);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67702c:{NFSU2_TR(0x67702c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67702f:{NFSU2_TR(0x67702f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677032:{NFSU2_TR(0x677032);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677035:{NFSU2_TR(0x677035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67703aull));
TAIL_STATIC(0x6758ceu,675);
}
B67703a:L67703a:{c.instructions+=3;NFSU2_TR(0x67703a);
__builtin_memmove((R+28),(R+0),4);
}
B67703c:{NFSU2_TR(0x67703c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67703e:{NFSU2_TR(0x67703e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677044:L677044:{c.instructions+=8;NFSU2_TR(0x677044);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677045:{NFSU2_TR(0x677045);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677048:{NFSU2_TR(0x677048);
__builtin_memmove((R+4),(R+24),4);
}
B67704a:{NFSU2_TR(0x67704a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67704d:{NFSU2_TR(0x67704d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677050:{NFSU2_TR(0x677050);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677053:{NFSU2_TR(0x677053);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677056:{NFSU2_TR(0x677056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67705bull));
TAIL_STATIC(0x6758ceu,675);
}
B67705b:L67705b:{c.instructions+=3;NFSU2_TR(0x67705b);
__builtin_memmove((R+28),(R+0),4);
}
B67705d:{NFSU2_TR(0x67705d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67705f:{NFSU2_TR(0x67705f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677065:L677065:{c.instructions+=8;NFSU2_TR(0x677065);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677066:{NFSU2_TR(0x677066);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677069:{NFSU2_TR(0x677069);
__builtin_memmove((R+4),(R+24),4);
}
B67706b:{NFSU2_TR(0x67706b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67706e:{NFSU2_TR(0x67706e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677071:{NFSU2_TR(0x677071);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677074:{NFSU2_TR(0x677074);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677077:{NFSU2_TR(0x677077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67707cull));
TAIL_STATIC(0x6758ceu,675);
}
B67707c:L67707c:{c.instructions+=3;NFSU2_TR(0x67707c);
__builtin_memmove((R+28),(R+0),4);
}
B67707e:{NFSU2_TR(0x67707e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677080:{NFSU2_TR(0x677080);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677086:L677086:{c.instructions+=8;NFSU2_TR(0x677086);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677087:{NFSU2_TR(0x677087);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67708a:{NFSU2_TR(0x67708a);
__builtin_memmove((R+4),(R+24),4);
}
B67708c:{NFSU2_TR(0x67708c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67708f:{NFSU2_TR(0x67708f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677092:{NFSU2_TR(0x677092);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677095:{NFSU2_TR(0x677095);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677098:{NFSU2_TR(0x677098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67709dull));
TAIL_STATIC(0x6758ceu,675);
}
B67709d:L67709d:{c.instructions+=3;NFSU2_TR(0x67709d);
__builtin_memmove((R+28),(R+0),4);
}
B67709f:{NFSU2_TR(0x67709f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6770a1:{NFSU2_TR(0x6770a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B6770a7:L6770a7:{c.instructions+=8;NFSU2_TR(0x6770a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6770a8:{NFSU2_TR(0x6770a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770ab:{NFSU2_TR(0x6770ab);
__builtin_memmove((R+4),(R+24),4);
}
B6770ad:{NFSU2_TR(0x6770ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770b0:{NFSU2_TR(0x6770b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770b3:{NFSU2_TR(0x6770b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770b6:{NFSU2_TR(0x6770b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770b9:{NFSU2_TR(0x6770b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6770beull));
TAIL_STATIC(0x6758ceu,675);
}
B6770be:L6770be:{c.instructions+=3;NFSU2_TR(0x6770be);
__builtin_memmove((R+28),(R+0),4);
}
B6770c0:{NFSU2_TR(0x6770c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6770c2:{NFSU2_TR(0x6770c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B6770c8:L6770c8:{c.instructions+=10;NFSU2_TR(0x6770c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6770cb:{NFSU2_TR(0x6770cb);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6770cd:{NFSU2_TR(0x6770cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770d0:{NFSU2_TR(0x6770d0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B6770d5:{NFSU2_TR(0x6770d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770d8:{NFSU2_TR(0x6770d8);
__builtin_memmove((R+4),(R+24),4);
}
B6770da:{NFSU2_TR(0x6770da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770dd:{NFSU2_TR(0x6770dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6770de:{NFSU2_TR(0x6770de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770e1:{NFSU2_TR(0x6770e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6770e6ull));
TAIL_STATIC(0x6758ceu,675);
}
B6770e6:L6770e6:{c.instructions+=3;NFSU2_TR(0x6770e6);
__builtin_memmove((R+28),(R+0),4);
}
B6770e8:{NFSU2_TR(0x6770e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6770ea:{NFSU2_TR(0x6770ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B6770f0:L6770f0:{c.instructions+=8;NFSU2_TR(0x6770f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6770f1:{NFSU2_TR(0x6770f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770f4:{NFSU2_TR(0x6770f4);
__builtin_memmove((R+4),(R+24),4);
}
B6770f6:{NFSU2_TR(0x6770f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770f9:{NFSU2_TR(0x6770f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770fc:{NFSU2_TR(0x6770fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6770ff:{NFSU2_TR(0x6770ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677102:{NFSU2_TR(0x677102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677107ull));
TAIL_STATIC(0x6758ceu,675);
}
B677107:L677107:{c.instructions+=3;NFSU2_TR(0x677107);
__builtin_memmove((R+28),(R+0),4);
}
B677109:{NFSU2_TR(0x677109);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67710b:{NFSU2_TR(0x67710b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677111:L677111:{c.instructions+=8;NFSU2_TR(0x677111);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677113:{NFSU2_TR(0x677113);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677116:{NFSU2_TR(0x677116);
__builtin_memmove((R+4),(R+24),4);
}
B677118:{NFSU2_TR(0x677118);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67711b:{NFSU2_TR(0x67711b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67711e:{NFSU2_TR(0x67711e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677121:{NFSU2_TR(0x677121);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677124:{NFSU2_TR(0x677124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677129ull));
TAIL_STATIC(0x6758ceu,675);
}
B677129:L677129:{c.instructions+=3;NFSU2_TR(0x677129);
__builtin_memmove((R+28),(R+0),4);
}
B67712b:{NFSU2_TR(0x67712b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67712d:{NFSU2_TR(0x67712d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677133:L677133:{c.instructions+=8;NFSU2_TR(0x677133);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677135:{NFSU2_TR(0x677135);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677136:{NFSU2_TR(0x677136);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677139:{NFSU2_TR(0x677139);
__builtin_memmove((R+4),(R+24),4);
}
B67713b:{NFSU2_TR(0x67713b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67713e:{NFSU2_TR(0x67713e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677141:{NFSU2_TR(0x677141);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677144:{NFSU2_TR(0x677144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677149ull));
TAIL_STATIC(0x6758ceu,675);
}
B677149:L677149:{c.instructions+=3;NFSU2_TR(0x677149);
__builtin_memmove((R+28),(R+0),4);
}
B67714b:{NFSU2_TR(0x67714b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67714d:{NFSU2_TR(0x67714d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677153:L677153:{c.instructions+=8;NFSU2_TR(0x677153);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677154:{NFSU2_TR(0x677154);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677157:{NFSU2_TR(0x677157);
__builtin_memmove((R+4),(R+24),4);
}
B677159:{NFSU2_TR(0x677159);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67715c:{NFSU2_TR(0x67715c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67715f:{NFSU2_TR(0x67715f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677162:{NFSU2_TR(0x677162);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677165:{NFSU2_TR(0x677165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67716aull));
TAIL_STATIC(0x6758ceu,675);
}
B67716a:L67716a:{c.instructions+=3;NFSU2_TR(0x67716a);
__builtin_memmove((R+28),(R+0),4);
}
B67716c:{NFSU2_TR(0x67716c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67716e:{NFSU2_TR(0x67716e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B677174:L677174:{c.instructions+=2;NFSU2_TR(0x677174);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B677177:{NFSU2_TR(0x677177);
if(r1(R+518)){{goto L67719e;}}
}
B677179:L677179:{c.instructions+=10;NFSU2_TR(0x677179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67717c:{NFSU2_TR(0x67717c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67717d:{NFSU2_TR(0x67717d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67717e:{NFSU2_TR(0x67717e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677181:{NFSU2_TR(0x677181);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B677186:{NFSU2_TR(0x677186);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677189:{NFSU2_TR(0x677189);
__builtin_memmove((R+4),(R+24),4);
}
B67718b:{NFSU2_TR(0x67718b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67718c:{NFSU2_TR(0x67718c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67718f:{NFSU2_TR(0x67718f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677194ull));
TAIL_STATIC(0x6758ceu,675);
}
B677194:L677194:{c.instructions+=3;NFSU2_TR(0x677194);
__builtin_memmove((R+28),(R+0),4);
}
B677196:{NFSU2_TR(0x677196);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677198:{NFSU2_TR(0x677198);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x676cb1u,676);}
}
B67719e:L67719e:{c.instructions+=2;NFSU2_TR(0x67719e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6771a1:{NFSU2_TR(0x6771a1);
if(r1(R+518)){TAIL_STATIC(0x676cafu,676);}
}
B6771a7:L6771a7:{c.instructions+=6;NFSU2_TR(0x6771a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6771aa:{NFSU2_TR(0x6771aa);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771ac:{NFSU2_TR(0x6771ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771ad:{NFSU2_TR(0x6771ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6771b0:{NFSU2_TR(0x6771b0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6771b5:{NFSU2_TR(0x6771b5);
TAIL_STATIC(0x676c9bu,676);
}
B6771ba:L6771ba:{c.instructions+=13;NFSU2_TR(0x6771ba);
__builtin_memmove((R+28),(R+28),4);
}
B6771bc:{NFSU2_TR(0x6771bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771bd:{NFSU2_TR(0x6771bd);
__builtin_memmove((R+20),(R+16),4);
}
B6771bf:{NFSU2_TR(0x6771bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6771c5:{NFSU2_TR(0x6771c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771c6:{NFSU2_TR(0x6771c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771c7:{NFSU2_TR(0x6771c7);
__builtin_memmove((R+24),(R+4),4);
}
B6771c9:{NFSU2_TR(0x6771c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6771cc:{NFSU2_TR(0x6771cc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6771ce:{NFSU2_TR(0x6771ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6771d2:{NFSU2_TR(0x6771d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771d3:{NFSU2_TR(0x6771d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6771d6:{NFSU2_TR(0x6771d6);
if(r1(R+518)){{goto L677202;}}
}
B6771d8:L6771d8:{c.instructions+=5;NFSU2_TR(0x6771d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6771db:{NFSU2_TR(0x6771db);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6771e0:{NFSU2_TR(0x6771e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6771e3:{NFSU2_TR(0x6771e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771e4:{NFSU2_TR(0x6771e4);
if(r1(R+518)){{goto L6771f0;}}
}
B6771e6:L6771e6:{c.instructions+=3;NFSU2_TR(0x6771e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6771e9:{NFSU2_TR(0x6771e9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20600000ull))));
}
B6771ee:{NFSU2_TR(0x6771ee);
{goto L6771f6;}
}
B6771f0:L6771f0:{c.instructions+=2;NFSU2_TR(0x6771f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771f1:{NFSU2_TR(0x6771f1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10c00000ull))));
}
B6771f6:L6771f6:{c.instructions+=4;NFSU2_TR(0x6771f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6771f9:{NFSU2_TR(0x6771f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6771fc:{NFSU2_TR(0x6771fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6771fd:{NFSU2_TR(0x6771fd);
{goto L6779be;}
}
B677202:L677202:{c.instructions+=9;NFSU2_TR(0x677202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677205:{NFSU2_TR(0x677205);
{u32 ea_=u32(u32(8092024u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67720b:{NFSU2_TR(0x67720b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67720c:{NFSU2_TR(0x67720c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67720d:{NFSU2_TR(0x67720d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B677210:{NFSU2_TR(0x677210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677211:{NFSU2_TR(0x677211);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677212:{NFSU2_TR(0x677212);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677215:{NFSU2_TR(0x677215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67721aull));
TAIL_STATIC(0x699c39u,699);
}
B67721a:L67721a:{c.instructions+=10;NFSU2_TR(0x67721a);
{u32 ea_=u32(u32(8092016u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677220:{NFSU2_TR(0x677220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677223:{NFSU2_TR(0x677223);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677224:{NFSU2_TR(0x677224);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677225:{NFSU2_TR(0x677225);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B677228:{NFSU2_TR(0x677228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677229:{NFSU2_TR(0x677229);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67722a:{NFSU2_TR(0x67722a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67722d:{NFSU2_TR(0x67722d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677230:{NFSU2_TR(0x677230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677235ull));
TAIL_STATIC(0x699c39u,699);
}
B677235:L677235:{c.instructions+=10;NFSU2_TR(0x677235);
{u32 ea_=u32(u32(8092008u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67723b:{NFSU2_TR(0x67723b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67723e:{NFSU2_TR(0x67723e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67723f:{NFSU2_TR(0x67723f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677240:{NFSU2_TR(0x677240);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B677243:{NFSU2_TR(0x677243);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677244:{NFSU2_TR(0x677244);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677245:{NFSU2_TR(0x677245);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677248:{NFSU2_TR(0x677248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67724b:{NFSU2_TR(0x67724b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677250ull));
TAIL_STATIC(0x699c39u,699);
}
B677250:L677250:{c.instructions+=10;NFSU2_TR(0x677250);
{u32 ea_=u32(u32(8092000u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677256:{NFSU2_TR(0x677256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677259:{NFSU2_TR(0x677259);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67725a:{NFSU2_TR(0x67725a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67725b:{NFSU2_TR(0x67725b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67725e:{NFSU2_TR(0x67725e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67725f:{NFSU2_TR(0x67725f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677260:{NFSU2_TR(0x677260);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677263:{NFSU2_TR(0x677263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677266:{NFSU2_TR(0x677266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67726bull));
TAIL_STATIC(0x699c39u,699);
}
B67726b:L67726b:{c.instructions+=10;NFSU2_TR(0x67726b);
{u32 ea_=u32(u32(8091992u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677271:{NFSU2_TR(0x677271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677274:{NFSU2_TR(0x677274);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677275:{NFSU2_TR(0x677275);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677276:{NFSU2_TR(0x677276);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B677279:{NFSU2_TR(0x677279);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67727a:{NFSU2_TR(0x67727a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67727b:{NFSU2_TR(0x67727b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67727e:{NFSU2_TR(0x67727e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677284:{NFSU2_TR(0x677284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677289ull));
TAIL_STATIC(0x699c39u,699);
}
B677289:L677289:{c.instructions+=10;NFSU2_TR(0x677289);
{u32 ea_=u32(u32(8091952u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67728f:{NFSU2_TR(0x67728f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677292:{NFSU2_TR(0x677292);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677293:{NFSU2_TR(0x677293);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677294:{NFSU2_TR(0x677294);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B677297:{NFSU2_TR(0x677297);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677298:{NFSU2_TR(0x677298);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677299:{NFSU2_TR(0x677299);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67729c:{NFSU2_TR(0x67729c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6772a2:{NFSU2_TR(0x6772a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6772a7ull));
TAIL_STATIC(0x699c39u,699);
}
B6772a7:L6772a7:{c.instructions+=10;NFSU2_TR(0x6772a7);
{u32 ea_=u32(u32(8091792u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6772ad:{NFSU2_TR(0x6772ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6772b0:{NFSU2_TR(0x6772b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772b1:{NFSU2_TR(0x6772b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772b2:{NFSU2_TR(0x6772b2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6772b5:{NFSU2_TR(0x6772b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772b6:{NFSU2_TR(0x6772b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772b7:{NFSU2_TR(0x6772b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6772ba:{NFSU2_TR(0x6772ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6772c0:{NFSU2_TR(0x6772c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6772c5ull));
TAIL_STATIC(0x699c39u,699);
}
B6772c5:L6772c5:{c.instructions+=10;NFSU2_TR(0x6772c5);
{u32 ea_=u32(u32(8091784u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6772cb:{NFSU2_TR(0x6772cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6772ce:{NFSU2_TR(0x6772ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772cf:{NFSU2_TR(0x6772cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772d0:{NFSU2_TR(0x6772d0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6772d3:{NFSU2_TR(0x6772d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772d4:{NFSU2_TR(0x6772d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772d5:{NFSU2_TR(0x6772d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6772d8:{NFSU2_TR(0x6772d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6772de:{NFSU2_TR(0x6772de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6772e3ull));
TAIL_STATIC(0x699c39u,699);
}
B6772e3:L6772e3:{c.instructions+=6;NFSU2_TR(0x6772e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6772e6:{NFSU2_TR(0x6772e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6772ec:{NFSU2_TR(0x6772ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6772ef:{NFSU2_TR(0x6772ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6772f2:{NFSU2_TR(0x6772f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6772f3:{NFSU2_TR(0x6772f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6772f8ull));
TAIL_STATIC(0x575620u,575);
}
B6772f8:L6772f8:{c.instructions+=5;NFSU2_TR(0x6772f8);
__builtin_memmove((R+8),(R+0),4);
}
B6772fa:{NFSU2_TR(0x6772fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6772fc:{NFSU2_TR(0x6772fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6772fd:{NFSU2_TR(0x6772fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677300:{NFSU2_TR(0x677300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67730c;}}
}
B677302:L677302:{c.instructions+=2;NFSU2_TR(0x677302);
w4(R+28,u32(0x8007000eull));
}
B677307:{NFSU2_TR(0x677307);
{goto L6779ce;}
}
B67730c:L67730c:{c.instructions+=3;NFSU2_TR(0x67730c);
__builtin_memmove((R+4),(R+28),4);
}
B67730e:{NFSU2_TR(0x67730e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677310:{NFSU2_TR(0x677310);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B677313:L677313:{c.instructions+=5;NFSU2_TR(0x677313);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67731a:{NFSU2_TR(0x67731a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67731b:{NFSU2_TR(0x67731b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B67731d:{NFSU2_TR(0x67731d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x30ull))));
}
B677320:{NFSU2_TR(0x677320);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677313u);}goto L677313;}}
}
B677322:L677322:{c.instructions+=2;NFSU2_TR(0x677322);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B677324:{NFSU2_TR(0x677324);
{goto L677329;}
}
B677326:L677326:{c.instructions+=1;NFSU2_TR(0x677326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677329:L677329:{c.instructions+=4;NFSU2_TR(0x677329);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67732a:{NFSU2_TR(0x67732a);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B677331:{NFSU2_TR(0x677331);
__builtin_memmove((R+4),(R+24),4);
}
B677333:{NFSU2_TR(0x677333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677338ull));
TAIL_STATIC(0x673b2cu,673);
}
B677338:L677338:{c.instructions+=3;NFSU2_TR(0x677338);
__builtin_memmove((R+28),(R+0),4);
}
B67733a:{NFSU2_TR(0x67733a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67733c:{NFSU2_TR(0x67733c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677342:L677342:{c.instructions+=3;NFSU2_TR(0x677342);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B677343:{NFSU2_TR(0x677343);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x27ull))));
}
B677346:{NFSU2_TR(0x677346);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677326u);}goto L677326;}}
}
B677348:L677348:{c.instructions+=2;NFSU2_TR(0x677348);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67734b:{NFSU2_TR(0x67734b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L677418;}}
}
B677351:L677351:{c.instructions+=27;NFSU2_TR(0x677351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677354:{NFSU2_TR(0x677354);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677357:{NFSU2_TR(0x677357);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B677359:{NFSU2_TR(0x677359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67735c:{NFSU2_TR(0x67735c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67735f:{NFSU2_TR(0x67735f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677365:{NFSU2_TR(0x677365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677368:{NFSU2_TR(0x677368);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B67736a:{NFSU2_TR(0x67736a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677370:{NFSU2_TR(0x677370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677373:{NFSU2_TR(0x677373);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B677375:{NFSU2_TR(0x677375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67737b:{NFSU2_TR(0x67737b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67737e:{NFSU2_TR(0x67737e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B677380:{NFSU2_TR(0x677380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677386:{NFSU2_TR(0x677386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677389:{NFSU2_TR(0x677389);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B67738b:{NFSU2_TR(0x67738b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677391:{NFSU2_TR(0x677391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677394:{NFSU2_TR(0x677394);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B677396:{NFSU2_TR(0x677396);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B677398:{NFSU2_TR(0x677398);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B67739a:{NFSU2_TR(0x67739a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67739d:{NFSU2_TR(0x67739d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773a0:{NFSU2_TR(0x6773a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6773a3:{NFSU2_TR(0x6773a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6773a6:{NFSU2_TR(0x6773a6);
{goto L6773ab;}
}
B6773a8:L6773a8:{c.instructions+=1;NFSU2_TR(0x6773a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6773ab:L6773ab:{c.instructions+=27;NFSU2_TR(0x6773ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773ae:{NFSU2_TR(0x6773ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6773b1:{NFSU2_TR(0x6773b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773b4:{NFSU2_TR(0x6773b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6773b6:{NFSU2_TR(0x6773b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773b9:{NFSU2_TR(0x6773b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6773bc:{NFSU2_TR(0x6773bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6773c2:{NFSU2_TR(0x6773c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773c8:{NFSU2_TR(0x6773c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6773cb:{NFSU2_TR(0x6773cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6773d1:{NFSU2_TR(0x6773d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773d7:{NFSU2_TR(0x6773d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6773da:{NFSU2_TR(0x6773da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6773e0:{NFSU2_TR(0x6773e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773e6:{NFSU2_TR(0x6773e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6773e9:{NFSU2_TR(0x6773e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6773ef:{NFSU2_TR(0x6773ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6773f5:{NFSU2_TR(0x6773f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6773f8:{NFSU2_TR(0x6773f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6773fe:{NFSU2_TR(0x6773fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677404:{NFSU2_TR(0x677404);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B677407:{NFSU2_TR(0x677407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67740a:{NFSU2_TR(0x67740a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67740d:{NFSU2_TR(0x67740d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B677410:{NFSU2_TR(0x677410);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B677413:{NFSU2_TR(0x677413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677416:{NFSU2_TR(0x677416);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6773a8u);}goto L6773a8;}}
}
B677418:L677418:{c.instructions+=2;NFSU2_TR(0x677418);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67741b:{NFSU2_TR(0x67741b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677423;}}
}
B67741d:L67741d:{c.instructions+=2;NFSU2_TR(0x67741d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677420:{NFSU2_TR(0x677420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677423:L677423:{c.instructions+=13;NFSU2_TR(0x677423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677426:{NFSU2_TR(0x677426);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677427:{NFSU2_TR(0x677427);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677428:{NFSU2_TR(0x677428);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67742b:{NFSU2_TR(0x67742b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B677430:{NFSU2_TR(0x677430);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677436:{NFSU2_TR(0x677436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677439:{NFSU2_TR(0x677439);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x1010ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B67743f:{NFSU2_TR(0x67743f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677442:{NFSU2_TR(0x677442);
__builtin_memmove((R+4),(R+24),4);
}
B677444:{NFSU2_TR(0x677444);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677447:{NFSU2_TR(0x677447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67744a:{NFSU2_TR(0x67744a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67744full));
TAIL_STATIC(0x6758ceu,675);
}
B67744f:L67744f:{c.instructions+=3;NFSU2_TR(0x67744f);
__builtin_memmove((R+28),(R+0),4);
}
B677451:{NFSU2_TR(0x677451);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677453:{NFSU2_TR(0x677453);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677459:L677459:{c.instructions+=11;NFSU2_TR(0x677459);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67745c:{NFSU2_TR(0x67745c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67745e:{NFSU2_TR(0x67745e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677464:{NFSU2_TR(0x677464);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B677469:{NFSU2_TR(0x677469);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67746c:{NFSU2_TR(0x67746c);
__builtin_memmove((R+4),(R+24),4);
}
B67746e:{NFSU2_TR(0x67746e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677474:{NFSU2_TR(0x677474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677477:{NFSU2_TR(0x677477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677478:{NFSU2_TR(0x677478);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67747b:{NFSU2_TR(0x67747b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677480ull));
TAIL_STATIC(0x6758ceu,675);
}
B677480:L677480:{c.instructions+=3;NFSU2_TR(0x677480);
__builtin_memmove((R+28),(R+0),4);
}
B677482:{NFSU2_TR(0x677482);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677484:{NFSU2_TR(0x677484);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67748a:L67748a:{c.instructions+=8;NFSU2_TR(0x67748a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67748b:{NFSU2_TR(0x67748b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67748c:{NFSU2_TR(0x67748c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67748f:{NFSU2_TR(0x67748f);
__builtin_memmove((R+4),(R+24),4);
}
B677491:{NFSU2_TR(0x677491);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677497:{NFSU2_TR(0x677497);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67749a:{NFSU2_TR(0x67749a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67749d:{NFSU2_TR(0x67749d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6774a2ull));
TAIL_STATIC(0x6758ceu,675);
}
B6774a2:L6774a2:{c.instructions+=3;NFSU2_TR(0x6774a2);
__builtin_memmove((R+28),(R+0),4);
}
B6774a4:{NFSU2_TR(0x6774a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6774a6:{NFSU2_TR(0x6774a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6774ac:L6774ac:{c.instructions+=8;NFSU2_TR(0x6774ac);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6774ae:{NFSU2_TR(0x6774ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774b4:{NFSU2_TR(0x6774b4);
__builtin_memmove((R+4),(R+24),4);
}
B6774b6:{NFSU2_TR(0x6774b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774b9:{NFSU2_TR(0x6774b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774bf:{NFSU2_TR(0x6774bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774c2:{NFSU2_TR(0x6774c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774c5:{NFSU2_TR(0x6774c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6774caull));
TAIL_STATIC(0x6758ceu,675);
}
B6774ca:L6774ca:{c.instructions+=3;NFSU2_TR(0x6774ca);
__builtin_memmove((R+28),(R+0),4);
}
B6774cc:{NFSU2_TR(0x6774cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6774ce:{NFSU2_TR(0x6774ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6774d4:L6774d4:{c.instructions+=11;NFSU2_TR(0x6774d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6774d7:{NFSU2_TR(0x6774d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6774d9:{NFSU2_TR(0x6774d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774df:{NFSU2_TR(0x6774df);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20000000ull))));
}
B6774e4:{NFSU2_TR(0x6774e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774ea:{NFSU2_TR(0x6774ea);
__builtin_memmove((R+4),(R+24),4);
}
B6774ec:{NFSU2_TR(0x6774ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774f2:{NFSU2_TR(0x6774f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6774f5:{NFSU2_TR(0x6774f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6774f6:{NFSU2_TR(0x6774f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6774f9:{NFSU2_TR(0x6774f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6774feull));
TAIL_STATIC(0x6758ceu,675);
}
B6774fe:L6774fe:{c.instructions+=3;NFSU2_TR(0x6774fe);
__builtin_memmove((R+28),(R+0),4);
}
B677500:{NFSU2_TR(0x677500);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677502:{NFSU2_TR(0x677502);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677508:L677508:{c.instructions+=8;NFSU2_TR(0x677508);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67750a:{NFSU2_TR(0x67750a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677510:{NFSU2_TR(0x677510);
__builtin_memmove((R+4),(R+24),4);
}
B677512:{NFSU2_TR(0x677512);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677518:{NFSU2_TR(0x677518);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67751e:{NFSU2_TR(0x67751e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677521:{NFSU2_TR(0x677521);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677524:{NFSU2_TR(0x677524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677529ull));
TAIL_STATIC(0x6758ceu,675);
}
B677529:L677529:{c.instructions+=3;NFSU2_TR(0x677529);
__builtin_memmove((R+28),(R+0),4);
}
B67752b:{NFSU2_TR(0x67752b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67752d:{NFSU2_TR(0x67752d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677533:L677533:{c.instructions+=10;NFSU2_TR(0x677533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677536:{NFSU2_TR(0x677536);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677538:{NFSU2_TR(0x677538);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677539:{NFSU2_TR(0x677539);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67753f:{NFSU2_TR(0x67753f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B677544:{NFSU2_TR(0x677544);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67754a:{NFSU2_TR(0x67754a);
__builtin_memmove((R+4),(R+24),4);
}
B67754c:{NFSU2_TR(0x67754c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67754d:{NFSU2_TR(0x67754d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677550:{NFSU2_TR(0x677550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677555ull));
TAIL_STATIC(0x6758ceu,675);
}
B677555:L677555:{c.instructions+=3;NFSU2_TR(0x677555);
__builtin_memmove((R+28),(R+0),4);
}
B677557:{NFSU2_TR(0x677557);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677559:{NFSU2_TR(0x677559);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67755f:L67755f:{c.instructions+=11;NFSU2_TR(0x67755f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677562:{NFSU2_TR(0x677562);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677564:{NFSU2_TR(0x677564);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67756a:{NFSU2_TR(0x67756a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67756f:{NFSU2_TR(0x67756f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677575:{NFSU2_TR(0x677575);
__builtin_memmove((R+4),(R+24),4);
}
B677577:{NFSU2_TR(0x677577);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67757d:{NFSU2_TR(0x67757d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677580:{NFSU2_TR(0x677580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677581:{NFSU2_TR(0x677581);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677584:{NFSU2_TR(0x677584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677589ull));
TAIL_STATIC(0x6758ceu,675);
}
B677589:L677589:{c.instructions+=3;NFSU2_TR(0x677589);
__builtin_memmove((R+28),(R+0),4);
}
B67758b:{NFSU2_TR(0x67758b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67758d:{NFSU2_TR(0x67758d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677593:L677593:{c.instructions+=8;NFSU2_TR(0x677593);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677595:{NFSU2_TR(0x677595);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67759b:{NFSU2_TR(0x67759b);
__builtin_memmove((R+4),(R+24),4);
}
B67759d:{NFSU2_TR(0x67759d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775a3:{NFSU2_TR(0x6775a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775a9:{NFSU2_TR(0x6775a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775ac:{NFSU2_TR(0x6775ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775af:{NFSU2_TR(0x6775af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6775b4ull));
TAIL_STATIC(0x6758ceu,675);
}
B6775b4:L6775b4:{c.instructions+=3;NFSU2_TR(0x6775b4);
__builtin_memmove((R+28),(R+0),4);
}
B6775b6:{NFSU2_TR(0x6775b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6775b8:{NFSU2_TR(0x6775b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6775be:L6775be:{c.instructions+=8;NFSU2_TR(0x6775be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6775bf:{NFSU2_TR(0x6775bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775c2:{NFSU2_TR(0x6775c2);
__builtin_memmove((R+4),(R+24),4);
}
B6775c4:{NFSU2_TR(0x6775c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775ca:{NFSU2_TR(0x6775ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775d0:{NFSU2_TR(0x6775d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775d3:{NFSU2_TR(0x6775d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775d6:{NFSU2_TR(0x6775d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6775dbull));
TAIL_STATIC(0x6758ceu,675);
}
B6775db:L6775db:{c.instructions+=3;NFSU2_TR(0x6775db);
__builtin_memmove((R+28),(R+0),4);
}
B6775dd:{NFSU2_TR(0x6775dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6775df:{NFSU2_TR(0x6775df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6775e5:L6775e5:{c.instructions+=11;NFSU2_TR(0x6775e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6775e8:{NFSU2_TR(0x6775e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6775e9:{NFSU2_TR(0x6775e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775ec:{NFSU2_TR(0x6775ec);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6775f1:{NFSU2_TR(0x6775f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775f7:{NFSU2_TR(0x6775f7);
__builtin_memmove((R+4),(R+24),4);
}
B6775f9:{NFSU2_TR(0x6775f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6775ff:{NFSU2_TR(0x6775ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677602:{NFSU2_TR(0x677602);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677603:{NFSU2_TR(0x677603);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677606:{NFSU2_TR(0x677606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67760bull));
TAIL_STATIC(0x6758ceu,675);
}
B67760b:L67760b:{c.instructions+=3;NFSU2_TR(0x67760b);
__builtin_memmove((R+28),(R+0),4);
}
B67760d:{NFSU2_TR(0x67760d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67760f:{NFSU2_TR(0x67760f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677615:L677615:{c.instructions+=8;NFSU2_TR(0x677615);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677616:{NFSU2_TR(0x677616);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67761c:{NFSU2_TR(0x67761c);
__builtin_memmove((R+4),(R+24),4);
}
B67761e:{NFSU2_TR(0x67761e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677624:{NFSU2_TR(0x677624);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67762a:{NFSU2_TR(0x67762a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67762d:{NFSU2_TR(0x67762d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677630:{NFSU2_TR(0x677630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677635ull));
TAIL_STATIC(0x6758ceu,675);
}
B677635:L677635:{c.instructions+=3;NFSU2_TR(0x677635);
__builtin_memmove((R+28),(R+0),4);
}
B677637:{NFSU2_TR(0x677637);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677639:{NFSU2_TR(0x677639);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67763f:L67763f:{c.instructions+=8;NFSU2_TR(0x67763f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677640:{NFSU2_TR(0x677640);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677643:{NFSU2_TR(0x677643);
__builtin_memmove((R+4),(R+24),4);
}
B677645:{NFSU2_TR(0x677645);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67764b:{NFSU2_TR(0x67764b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677651:{NFSU2_TR(0x677651);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677654:{NFSU2_TR(0x677654);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677657:{NFSU2_TR(0x677657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67765cull));
TAIL_STATIC(0x6758ceu,675);
}
B67765c:L67765c:{c.instructions+=3;NFSU2_TR(0x67765c);
__builtin_memmove((R+28),(R+0),4);
}
B67765e:{NFSU2_TR(0x67765e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677660:{NFSU2_TR(0x677660);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677666:L677666:{c.instructions+=8;NFSU2_TR(0x677666);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677667:{NFSU2_TR(0x677667);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67766d:{NFSU2_TR(0x67766d);
__builtin_memmove((R+4),(R+24),4);
}
B67766f:{NFSU2_TR(0x67766f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677675:{NFSU2_TR(0x677675);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67767b:{NFSU2_TR(0x67767b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67767e:{NFSU2_TR(0x67767e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677681:{NFSU2_TR(0x677681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677686ull));
TAIL_STATIC(0x6758ceu,675);
}
B677686:L677686:{c.instructions+=3;NFSU2_TR(0x677686);
__builtin_memmove((R+28),(R+0),4);
}
B677688:{NFSU2_TR(0x677688);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67768a:{NFSU2_TR(0x67768a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677690:L677690:{c.instructions+=8;NFSU2_TR(0x677690);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677691:{NFSU2_TR(0x677691);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677694:{NFSU2_TR(0x677694);
__builtin_memmove((R+4),(R+24),4);
}
B677696:{NFSU2_TR(0x677696);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67769c:{NFSU2_TR(0x67769c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776a2:{NFSU2_TR(0x6776a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776a5:{NFSU2_TR(0x6776a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776a8:{NFSU2_TR(0x6776a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6776adull));
TAIL_STATIC(0x6758ceu,675);
}
B6776ad:L6776ad:{c.instructions+=3;NFSU2_TR(0x6776ad);
__builtin_memmove((R+28),(R+0),4);
}
B6776af:{NFSU2_TR(0x6776af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6776b1:{NFSU2_TR(0x6776b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6776b7:L6776b7:{c.instructions+=8;NFSU2_TR(0x6776b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6776b8:{NFSU2_TR(0x6776b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776be:{NFSU2_TR(0x6776be);
__builtin_memmove((R+4),(R+24),4);
}
B6776c0:{NFSU2_TR(0x6776c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776c6:{NFSU2_TR(0x6776c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776cc:{NFSU2_TR(0x6776cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776cf:{NFSU2_TR(0x6776cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776d2:{NFSU2_TR(0x6776d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6776d7ull));
TAIL_STATIC(0x6758ceu,675);
}
B6776d7:L6776d7:{c.instructions+=3;NFSU2_TR(0x6776d7);
__builtin_memmove((R+28),(R+0),4);
}
B6776d9:{NFSU2_TR(0x6776d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6776db:{NFSU2_TR(0x6776db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6776e1:L6776e1:{c.instructions+=8;NFSU2_TR(0x6776e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6776e2:{NFSU2_TR(0x6776e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776e5:{NFSU2_TR(0x6776e5);
__builtin_memmove((R+4),(R+24),4);
}
B6776e7:{NFSU2_TR(0x6776e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776ed:{NFSU2_TR(0x6776ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776f3:{NFSU2_TR(0x6776f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776f6:{NFSU2_TR(0x6776f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6776f9:{NFSU2_TR(0x6776f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6776feull));
TAIL_STATIC(0x6758ceu,675);
}
B6776fe:L6776fe:{c.instructions+=3;NFSU2_TR(0x6776fe);
__builtin_memmove((R+28),(R+0),4);
}
B677700:{NFSU2_TR(0x677700);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677702:{NFSU2_TR(0x677702);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677708:L677708:{c.instructions+=8;NFSU2_TR(0x677708);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677709:{NFSU2_TR(0x677709);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67770f:{NFSU2_TR(0x67770f);
__builtin_memmove((R+4),(R+24),4);
}
B677711:{NFSU2_TR(0x677711);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677717:{NFSU2_TR(0x677717);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67771d:{NFSU2_TR(0x67771d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677720:{NFSU2_TR(0x677720);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677723:{NFSU2_TR(0x677723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677728ull));
TAIL_STATIC(0x6758ceu,675);
}
B677728:L677728:{c.instructions+=3;NFSU2_TR(0x677728);
__builtin_memmove((R+28),(R+0),4);
}
B67772a:{NFSU2_TR(0x67772a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67772c:{NFSU2_TR(0x67772c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677732:L677732:{c.instructions+=11;NFSU2_TR(0x677732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677735:{NFSU2_TR(0x677735);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677737:{NFSU2_TR(0x677737);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67773d:{NFSU2_TR(0x67773d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B677742:{NFSU2_TR(0x677742);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677748:{NFSU2_TR(0x677748);
__builtin_memmove((R+4),(R+24),4);
}
B67774a:{NFSU2_TR(0x67774a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677750:{NFSU2_TR(0x677750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677753:{NFSU2_TR(0x677753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677754:{NFSU2_TR(0x677754);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677757:{NFSU2_TR(0x677757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67775cull));
TAIL_STATIC(0x6758ceu,675);
}
B67775c:L67775c:{c.instructions+=3;NFSU2_TR(0x67775c);
__builtin_memmove((R+28),(R+0),4);
}
B67775e:{NFSU2_TR(0x67775e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677760:{NFSU2_TR(0x677760);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677766:L677766:{c.instructions+=8;NFSU2_TR(0x677766);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677767:{NFSU2_TR(0x677767);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67776a:{NFSU2_TR(0x67776a);
__builtin_memmove((R+4),(R+24),4);
}
B67776c:{NFSU2_TR(0x67776c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677772:{NFSU2_TR(0x677772);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677778:{NFSU2_TR(0x677778);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67777b:{NFSU2_TR(0x67777b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67777e:{NFSU2_TR(0x67777e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677783ull));
TAIL_STATIC(0x6758ceu,675);
}
B677783:L677783:{c.instructions+=3;NFSU2_TR(0x677783);
__builtin_memmove((R+28),(R+0),4);
}
B677785:{NFSU2_TR(0x677785);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677787:{NFSU2_TR(0x677787);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67778d:L67778d:{c.instructions+=8;NFSU2_TR(0x67778d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67778e:{NFSU2_TR(0x67778e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677791:{NFSU2_TR(0x677791);
__builtin_memmove((R+4),(R+24),4);
}
B677793:{NFSU2_TR(0x677793);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677799:{NFSU2_TR(0x677799);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67779f:{NFSU2_TR(0x67779f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777a2:{NFSU2_TR(0x6777a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777a5:{NFSU2_TR(0x6777a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6777aaull));
TAIL_STATIC(0x6758ceu,675);
}
B6777aa:L6777aa:{c.instructions+=3;NFSU2_TR(0x6777aa);
__builtin_memmove((R+28),(R+0),4);
}
B6777ac:{NFSU2_TR(0x6777ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6777ae:{NFSU2_TR(0x6777ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6777b4:L6777b4:{c.instructions+=8;NFSU2_TR(0x6777b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6777b5:{NFSU2_TR(0x6777b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777bb:{NFSU2_TR(0x6777bb);
__builtin_memmove((R+4),(R+24),4);
}
B6777bd:{NFSU2_TR(0x6777bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777c3:{NFSU2_TR(0x6777c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777c9:{NFSU2_TR(0x6777c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777cc:{NFSU2_TR(0x6777cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777cf:{NFSU2_TR(0x6777cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6777d4ull));
TAIL_STATIC(0x6758ceu,675);
}
B6777d4:L6777d4:{c.instructions+=3;NFSU2_TR(0x6777d4);
__builtin_memmove((R+28),(R+0),4);
}
B6777d6:{NFSU2_TR(0x6777d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6777d8:{NFSU2_TR(0x6777d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6777de:L6777de:{c.instructions+=8;NFSU2_TR(0x6777de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6777df:{NFSU2_TR(0x6777df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777e5:{NFSU2_TR(0x6777e5);
__builtin_memmove((R+4),(R+24),4);
}
B6777e7:{NFSU2_TR(0x6777e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777ed:{NFSU2_TR(0x6777ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777f3:{NFSU2_TR(0x6777f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777f6:{NFSU2_TR(0x6777f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6777f9:{NFSU2_TR(0x6777f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6777feull));
TAIL_STATIC(0x6758ceu,675);
}
B6777fe:L6777fe:{c.instructions+=3;NFSU2_TR(0x6777fe);
__builtin_memmove((R+28),(R+0),4);
}
B677800:{NFSU2_TR(0x677800);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677802:{NFSU2_TR(0x677802);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677808:L677808:{c.instructions+=8;NFSU2_TR(0x677808);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67780a:{NFSU2_TR(0x67780a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677810:{NFSU2_TR(0x677810);
__builtin_memmove((R+4),(R+24),4);
}
B677812:{NFSU2_TR(0x677812);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677815:{NFSU2_TR(0x677815);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677818:{NFSU2_TR(0x677818);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67781b:{NFSU2_TR(0x67781b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67781e:{NFSU2_TR(0x67781e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677823ull));
TAIL_STATIC(0x6758ceu,675);
}
B677823:L677823:{c.instructions+=3;NFSU2_TR(0x677823);
__builtin_memmove((R+28),(R+0),4);
}
B677825:{NFSU2_TR(0x677825);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677827:{NFSU2_TR(0x677827);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67782d:L67782d:{c.instructions+=8;NFSU2_TR(0x67782d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67782e:{NFSU2_TR(0x67782e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677831:{NFSU2_TR(0x677831);
__builtin_memmove((R+4),(R+24),4);
}
B677833:{NFSU2_TR(0x677833);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677836:{NFSU2_TR(0x677836);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677839:{NFSU2_TR(0x677839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67783c:{NFSU2_TR(0x67783c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67783f:{NFSU2_TR(0x67783f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677844ull));
TAIL_STATIC(0x6758ceu,675);
}
B677844:L677844:{c.instructions+=3;NFSU2_TR(0x677844);
__builtin_memmove((R+28),(R+0),4);
}
B677846:{NFSU2_TR(0x677846);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677848:{NFSU2_TR(0x677848);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67784e:L67784e:{c.instructions+=8;NFSU2_TR(0x67784e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67784f:{NFSU2_TR(0x67784f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677852:{NFSU2_TR(0x677852);
__builtin_memmove((R+4),(R+24),4);
}
B677854:{NFSU2_TR(0x677854);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67785a:{NFSU2_TR(0x67785a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67785d:{NFSU2_TR(0x67785d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677860:{NFSU2_TR(0x677860);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677863:{NFSU2_TR(0x677863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677868ull));
TAIL_STATIC(0x6758ceu,675);
}
B677868:L677868:{c.instructions+=3;NFSU2_TR(0x677868);
__builtin_memmove((R+28),(R+0),4);
}
B67786a:{NFSU2_TR(0x67786a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67786c:{NFSU2_TR(0x67786c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677872:L677872:{c.instructions+=8;NFSU2_TR(0x677872);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677873:{NFSU2_TR(0x677873);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677876:{NFSU2_TR(0x677876);
__builtin_memmove((R+4),(R+24),4);
}
B677878:{NFSU2_TR(0x677878);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67787b:{NFSU2_TR(0x67787b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67787e:{NFSU2_TR(0x67787e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677881:{NFSU2_TR(0x677881);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677884:{NFSU2_TR(0x677884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677889ull));
TAIL_STATIC(0x6758ceu,675);
}
B677889:L677889:{c.instructions+=3;NFSU2_TR(0x677889);
__builtin_memmove((R+28),(R+0),4);
}
B67788b:{NFSU2_TR(0x67788b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67788d:{NFSU2_TR(0x67788d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677893:L677893:{c.instructions+=8;NFSU2_TR(0x677893);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677894:{NFSU2_TR(0x677894);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677897:{NFSU2_TR(0x677897);
__builtin_memmove((R+4),(R+24),4);
}
B677899:{NFSU2_TR(0x677899);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67789c:{NFSU2_TR(0x67789c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67789f:{NFSU2_TR(0x67789f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778a2:{NFSU2_TR(0x6778a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778a5:{NFSU2_TR(0x6778a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6778aaull));
TAIL_STATIC(0x6758ceu,675);
}
B6778aa:L6778aa:{c.instructions+=3;NFSU2_TR(0x6778aa);
__builtin_memmove((R+28),(R+0),4);
}
B6778ac:{NFSU2_TR(0x6778ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6778ae:{NFSU2_TR(0x6778ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6778b4:L6778b4:{c.instructions+=8;NFSU2_TR(0x6778b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6778b5:{NFSU2_TR(0x6778b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6778b6:{NFSU2_TR(0x6778b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778b9:{NFSU2_TR(0x6778b9);
__builtin_memmove((R+4),(R+24),4);
}
B6778bb:{NFSU2_TR(0x6778bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778be:{NFSU2_TR(0x6778be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778c1:{NFSU2_TR(0x6778c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778c4:{NFSU2_TR(0x6778c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6778c9ull));
TAIL_STATIC(0x6758ceu,675);
}
B6778c9:L6778c9:{c.instructions+=3;NFSU2_TR(0x6778c9);
__builtin_memmove((R+28),(R+0),4);
}
B6778cb:{NFSU2_TR(0x6778cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6778cd:{NFSU2_TR(0x6778cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6778d3:L6778d3:{c.instructions+=8;NFSU2_TR(0x6778d3);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6778d5:{NFSU2_TR(0x6778d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778d8:{NFSU2_TR(0x6778d8);
__builtin_memmove((R+4),(R+24),4);
}
B6778da:{NFSU2_TR(0x6778da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778dd:{NFSU2_TR(0x6778dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778e0:{NFSU2_TR(0x6778e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778e3:{NFSU2_TR(0x6778e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778e6:{NFSU2_TR(0x6778e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6778ebull));
TAIL_STATIC(0x6758ceu,675);
}
B6778eb:L6778eb:{c.instructions+=3;NFSU2_TR(0x6778eb);
__builtin_memmove((R+28),(R+0),4);
}
B6778ed:{NFSU2_TR(0x6778ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6778ef:{NFSU2_TR(0x6778ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6778f5:L6778f5:{c.instructions+=8;NFSU2_TR(0x6778f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6778f6:{NFSU2_TR(0x6778f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6778f7:{NFSU2_TR(0x6778f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778fa:{NFSU2_TR(0x6778fa);
__builtin_memmove((R+4),(R+24),4);
}
B6778fc:{NFSU2_TR(0x6778fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6778ff:{NFSU2_TR(0x6778ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677902:{NFSU2_TR(0x677902);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677905:{NFSU2_TR(0x677905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67790aull));
TAIL_STATIC(0x6758ceu,675);
}
B67790a:L67790a:{c.instructions+=3;NFSU2_TR(0x67790a);
__builtin_memmove((R+28),(R+0),4);
}
B67790c:{NFSU2_TR(0x67790c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67790e:{NFSU2_TR(0x67790e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677914:L677914:{c.instructions+=10;NFSU2_TR(0x677914);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677917:{NFSU2_TR(0x677917);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677919:{NFSU2_TR(0x677919);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67791c:{NFSU2_TR(0x67791c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B677921:{NFSU2_TR(0x677921);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677924:{NFSU2_TR(0x677924);
__builtin_memmove((R+4),(R+24),4);
}
B677926:{NFSU2_TR(0x677926);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677929:{NFSU2_TR(0x677929);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67792a:{NFSU2_TR(0x67792a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67792d:{NFSU2_TR(0x67792d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677932ull));
TAIL_STATIC(0x6758ceu,675);
}
B677932:L677932:{c.instructions+=3;NFSU2_TR(0x677932);
__builtin_memmove((R+28),(R+0),4);
}
B677934:{NFSU2_TR(0x677934);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677936:{NFSU2_TR(0x677936);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67793c:L67793c:{c.instructions+=8;NFSU2_TR(0x67793c);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67793e:{NFSU2_TR(0x67793e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677941:{NFSU2_TR(0x677941);
__builtin_memmove((R+4),(R+24),4);
}
B677943:{NFSU2_TR(0x677943);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677946:{NFSU2_TR(0x677946);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677949:{NFSU2_TR(0x677949);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67794c:{NFSU2_TR(0x67794c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67794f:{NFSU2_TR(0x67794f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677954ull));
TAIL_STATIC(0x6758ceu,675);
}
B677954:L677954:{c.instructions+=3;NFSU2_TR(0x677954);
__builtin_memmove((R+28),(R+0),4);
}
B677956:{NFSU2_TR(0x677956);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677958:{NFSU2_TR(0x677958);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B67795a:L67795a:{c.instructions+=8;NFSU2_TR(0x67795a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67795b:{NFSU2_TR(0x67795b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67795e:{NFSU2_TR(0x67795e);
__builtin_memmove((R+4),(R+24),4);
}
B677960:{NFSU2_TR(0x677960);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677963:{NFSU2_TR(0x677963);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677966:{NFSU2_TR(0x677966);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677969:{NFSU2_TR(0x677969);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67796c:{NFSU2_TR(0x67796c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677971ull));
TAIL_STATIC(0x6758ceu,675);
}
B677971:L677971:{c.instructions+=3;NFSU2_TR(0x677971);
__builtin_memmove((R+28),(R+0),4);
}
B677973:{NFSU2_TR(0x677973);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677975:{NFSU2_TR(0x677975);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677977:L677977:{c.instructions+=8;NFSU2_TR(0x677977);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677978:{NFSU2_TR(0x677978);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677979:{NFSU2_TR(0x677979);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67797c:{NFSU2_TR(0x67797c);
__builtin_memmove((R+4),(R+24),4);
}
B67797e:{NFSU2_TR(0x67797e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677981:{NFSU2_TR(0x677981);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677984:{NFSU2_TR(0x677984);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677987:{NFSU2_TR(0x677987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67798cull));
TAIL_STATIC(0x6758ceu,675);
}
B67798c:L67798c:{c.instructions+=3;NFSU2_TR(0x67798c);
__builtin_memmove((R+28),(R+0),4);
}
B67798e:{NFSU2_TR(0x67798e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677990:{NFSU2_TR(0x677990);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B677992:L677992:{c.instructions+=8;NFSU2_TR(0x677992);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677993:{NFSU2_TR(0x677993);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677996:{NFSU2_TR(0x677996);
__builtin_memmove((R+4),(R+24),4);
}
B677998:{NFSU2_TR(0x677998);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67799b:{NFSU2_TR(0x67799b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67799e:{NFSU2_TR(0x67799e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779a1:{NFSU2_TR(0x6779a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779a4:{NFSU2_TR(0x6779a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6779a9ull));
TAIL_STATIC(0x6758ceu,675);
}
B6779a9:L6779a9:{c.instructions+=3;NFSU2_TR(0x6779a9);
__builtin_memmove((R+28),(R+0),4);
}
B6779ab:{NFSU2_TR(0x6779ab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6779ad:{NFSU2_TR(0x6779ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6779af:L6779af:{c.instructions+=6;NFSU2_TR(0x6779af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6779b0:{NFSU2_TR(0x6779b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779b3:{NFSU2_TR(0x6779b3);
__builtin_memmove((R+4),(R+24),4);
}
B6779b5:{NFSU2_TR(0x6779b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779b8:{NFSU2_TR(0x6779b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779bb:{NFSU2_TR(0x6779bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779be:L6779be:{c.instructions+=2;NFSU2_TR(0x6779be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779c1:{NFSU2_TR(0x6779c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6779c6ull));
TAIL_STATIC(0x6758ceu,675);
}
B6779c6:L6779c6:{c.instructions+=3;NFSU2_TR(0x6779c6);
__builtin_memmove((R+28),(R+0),4);
}
B6779c8:{NFSU2_TR(0x6779c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6779ca:{NFSU2_TR(0x6779ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6779ce;}}
}
B6779cc:L6779cc:{c.instructions+=1;NFSU2_TR(0x6779cc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6779ce:L6779ce:{c.instructions+=2;NFSU2_TR(0x6779ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6779d1:{NFSU2_TR(0x6779d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6779d6ull));
TAIL_STATIC(0x575630u,575);
}
B6779d6:L6779d6:{c.instructions+=7;NFSU2_TR(0x6779d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6779d7:{NFSU2_TR(0x6779d7);
__builtin_memmove((R+0),(R+28),4);
}
B6779d9:{NFSU2_TR(0x6779d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6779da:{NFSU2_TR(0x6779da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6779db:{NFSU2_TR(0x6779db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6779dc:{NFSU2_TR(0x6779dc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6779dd:{NFSU2_TR(0x6779dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6779e0:L6779e0:{c.instructions+=14;NFSU2_TR(0x6779e0);
__builtin_memmove((R+28),(R+28),4);
}
B6779e2:{NFSU2_TR(0x6779e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6779e3:{NFSU2_TR(0x6779e3);
__builtin_memmove((R+20),(R+16),4);
}
B6779e5:{NFSU2_TR(0x6779e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6779e8:{NFSU2_TR(0x6779e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6779e9:{NFSU2_TR(0x6779e9);
__builtin_memmove((R+12),(R+4),4);
}
B6779eb:{NFSU2_TR(0x6779eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6779ee:{NFSU2_TR(0x6779ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6779f1:{NFSU2_TR(0x6779f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6779f3:{NFSU2_TR(0x6779f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6779f4:{NFSU2_TR(0x6779f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6779f5:{NFSU2_TR(0x6779f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6779f8:{NFSU2_TR(0x6779f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6779fb:{NFSU2_TR(0x6779fb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L677b0a;}}
}
B677a01:L677a01:{c.instructions+=3;NFSU2_TR(0x677a01);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B677a03:{NFSU2_TR(0x677a03);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677a05:{NFSU2_TR(0x677a05);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L677a2d;}}
}
B677a07:L677a07:{c.instructions+=2;NFSU2_TR(0x677a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677a0a:{NFSU2_TR(0x677a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677a0d:L677a0d:{c.instructions+=6;NFSU2_TR(0x677a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B677a10:{NFSU2_TR(0x677a10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B677a13:{NFSU2_TR(0x677a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677a16:{NFSU2_TR(0x677a16);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B677a19:{NFSU2_TR(0x677a19);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B677a1c:{NFSU2_TR(0x677a1c);
if(r1(R+518)){{goto L677a2d;}}
}
B677a1e:L677a1e:{c.instructions+=2;NFSU2_TR(0x677a1e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B677a22:{NFSU2_TR(0x677a22);
if(r1(R+518)){{goto L677a28;}}
}
B677a24:L677a24:{c.instructions+=2;NFSU2_TR(0x677a24);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B677a26:{NFSU2_TR(0x677a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677a2d;}}
}
B677a28:L677a28:{c.instructions+=3;NFSU2_TR(0x677a28);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B677a29:{NFSU2_TR(0x677a29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B677a2b:{NFSU2_TR(0x677a2b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677a0du);}goto L677a0d;}}
}
B677a2d:L677a2d:{c.instructions+=2;NFSU2_TR(0x677a2d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677a2f:{NFSU2_TR(0x677a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677b0a;}}
}
B677a35:L677a35:{c.instructions+=4;NFSU2_TR(0x677a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B677a38:{NFSU2_TR(0x677a38);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B677a3b:{NFSU2_TR(0x677a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677a3c:{NFSU2_TR(0x677a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677a41ull));
TAIL_STATIC(0x575620u,575);
}
B677a41:L677a41:{c.instructions+=5;NFSU2_TR(0x677a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677a42:{NFSU2_TR(0x677a42);
__builtin_memmove((R+4),(R+0),4);
}
B677a44:{NFSU2_TR(0x677a44);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677a46:{NFSU2_TR(0x677a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677a49:{NFSU2_TR(0x677a49);
if(r1(R+518)){{goto L677c4d;}}
}
B677a4f:L677a4f:{c.instructions+=4;NFSU2_TR(0x677a4f);
__builtin_memmove((R+8),(R+28),4);
}
B677a51:{NFSU2_TR(0x677a51);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677a53:{NFSU2_TR(0x677a53);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B677a56:{NFSU2_TR(0x677a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677a59:L677a59:{c.instructions+=5;NFSU2_TR(0x677a59);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B677a5d:{NFSU2_TR(0x677a5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677a5e:{NFSU2_TR(0x677a5e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B677a60:{NFSU2_TR(0x677a60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B677a63:{NFSU2_TR(0x677a63);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677a59u);}goto L677a59;}}
}
B677a65:L677a65:{c.instructions+=2;NFSU2_TR(0x677a65);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677a67:{NFSU2_TR(0x677a67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L677a97;}}
}
B677a69:L677a69:{c.instructions+=9;NFSU2_TR(0x677a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677a6c:{NFSU2_TR(0x677a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B677a6f:{NFSU2_TR(0x677a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677a72:{NFSU2_TR(0x677a72);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B677a74:{NFSU2_TR(0x677a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677a77:{NFSU2_TR(0x677a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B677a7a:{NFSU2_TR(0x677a7a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B677a7c:{NFSU2_TR(0x677a7c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B677a7e:{NFSU2_TR(0x677a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677a81:L677a81:{c.instructions+=8;NFSU2_TR(0x677a81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B677a84:{NFSU2_TR(0x677a84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B677a86:{NFSU2_TR(0x677a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B677a89:{NFSU2_TR(0x677a89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B677a8c:{NFSU2_TR(0x677a8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B677a8f:{NFSU2_TR(0x677a8f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B677a92:{NFSU2_TR(0x677a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677a95:{NFSU2_TR(0x677a95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677a81u);}goto L677a81;}}
}
B677a97:L677a97:{c.instructions+=4;NFSU2_TR(0x677a97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677a98:{NFSU2_TR(0x677a98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677a9b:{NFSU2_TR(0x677a9b);
__builtin_memmove((R+4),(R+12),4);
}
B677a9d:{NFSU2_TR(0x677a9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677aa2ull));
TAIL_STATIC(0x673b2cu,673);
}
B677aa2:L677aa2:{c.instructions+=3;NFSU2_TR(0x677aa2);
__builtin_memmove((R+24),(R+0),4);
}
B677aa4:{NFSU2_TR(0x677aa4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677aa6:{NFSU2_TR(0x677aa6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677aac:L677aac:{c.instructions+=4;NFSU2_TR(0x677aac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677aad:{NFSU2_TR(0x677aad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677ab0:{NFSU2_TR(0x677ab0);
__builtin_memmove((R+4),(R+12),4);
}
B677ab2:{NFSU2_TR(0x677ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677ab7ull));
TAIL_STATIC(0x673b2cu,673);
}
B677ab7:L677ab7:{c.instructions+=3;NFSU2_TR(0x677ab7);
__builtin_memmove((R+24),(R+0),4);
}
B677ab9:{NFSU2_TR(0x677ab9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677abb:{NFSU2_TR(0x677abb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677ac1:L677ac1:{c.instructions+=11;NFSU2_TR(0x677ac1);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ac3:{NFSU2_TR(0x677ac3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ac5:{NFSU2_TR(0x677ac5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677ac8:{NFSU2_TR(0x677ac8);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B677ace:{NFSU2_TR(0x677ace);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677ad1:{NFSU2_TR(0x677ad1);
__builtin_memmove((R+0),(R+28),4);
}
B677ad3:{NFSU2_TR(0x677ad3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B677ad8:{NFSU2_TR(0x677ad8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ad9:{NFSU2_TR(0x677ad9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677adc:{NFSU2_TR(0x677adc);
__builtin_memmove((R+4),(R+12),4);
}
B677ade:{NFSU2_TR(0x677ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677ae3ull));
TAIL_STATIC(0x6758ceu,675);
}
B677ae3:L677ae3:{c.instructions+=3;NFSU2_TR(0x677ae3);
__builtin_memmove((R+24),(R+0),4);
}
B677ae5:{NFSU2_TR(0x677ae5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677ae7:{NFSU2_TR(0x677ae7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677aed:L677aed:{c.instructions+=10;NFSU2_TR(0x677aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677af0:{NFSU2_TR(0x677af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677af3:{NFSU2_TR(0x677af3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677af5:{NFSU2_TR(0x677af5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B677af7:{NFSU2_TR(0x677af7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677af8:{NFSU2_TR(0x677af8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677afb:{NFSU2_TR(0x677afb);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x30000000ull))));
}
B677b01:{NFSU2_TR(0x677b01);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677b04:{NFSU2_TR(0x677b04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b05:{NFSU2_TR(0x677b05);
{goto L677c15;}
}
B677b0a:L677b0a:{c.instructions+=2;NFSU2_TR(0x677b0a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B677b0e:{NFSU2_TR(0x677b0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677c39;}}
}
B677b14:L677b14:{c.instructions+=4;NFSU2_TR(0x677b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B677b17:{NFSU2_TR(0x677b17);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B677b1a:{NFSU2_TR(0x677b1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b1b:{NFSU2_TR(0x677b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677b20ull));
TAIL_STATIC(0x575620u,575);
}
B677b20:L677b20:{c.instructions+=4;NFSU2_TR(0x677b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677b22:{NFSU2_TR(0x677b22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677b23:{NFSU2_TR(0x677b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677b26:{NFSU2_TR(0x677b26);
if(r1(R+518)){{goto L677c4d;}}
}
B677b2c:L677b2c:{c.instructions+=4;NFSU2_TR(0x677b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677b2f:{NFSU2_TR(0x677b2f);
__builtin_memmove((R+8),(R+28),4);
}
B677b31:{NFSU2_TR(0x677b31);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677b33:{NFSU2_TR(0x677b33);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B677b36:L677b36:{c.instructions+=5;NFSU2_TR(0x677b36);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B677b3a:{NFSU2_TR(0x677b3a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677b3b:{NFSU2_TR(0x677b3b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B677b3d:{NFSU2_TR(0x677b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B677b40:{NFSU2_TR(0x677b40);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677b36u);}goto L677b36;}}
}
B677b42:L677b42:{c.instructions+=4;NFSU2_TR(0x677b42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b43:{NFSU2_TR(0x677b43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677b46:{NFSU2_TR(0x677b46);
__builtin_memmove((R+4),(R+12),4);
}
B677b48:{NFSU2_TR(0x677b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677b4dull));
TAIL_STATIC(0x673b2cu,673);
}
B677b4d:L677b4d:{c.instructions+=3;NFSU2_TR(0x677b4d);
__builtin_memmove((R+24),(R+0),4);
}
B677b4f:{NFSU2_TR(0x677b4f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677b51:{NFSU2_TR(0x677b51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677b57:L677b57:{c.instructions+=4;NFSU2_TR(0x677b57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b58:{NFSU2_TR(0x677b58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677b5b:{NFSU2_TR(0x677b5b);
__builtin_memmove((R+4),(R+12),4);
}
B677b5d:{NFSU2_TR(0x677b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677b62ull));
TAIL_STATIC(0x673b2cu,673);
}
B677b62:L677b62:{c.instructions+=3;NFSU2_TR(0x677b62);
__builtin_memmove((R+24),(R+0),4);
}
B677b64:{NFSU2_TR(0x677b64);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677b66:{NFSU2_TR(0x677b66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677b6c:L677b6c:{c.instructions+=4;NFSU2_TR(0x677b6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b6d:{NFSU2_TR(0x677b6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677b70:{NFSU2_TR(0x677b70);
__builtin_memmove((R+4),(R+12),4);
}
B677b72:{NFSU2_TR(0x677b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677b77ull));
TAIL_STATIC(0x673b2cu,673);
}
B677b77:L677b77:{c.instructions+=3;NFSU2_TR(0x677b77);
__builtin_memmove((R+24),(R+0),4);
}
B677b79:{NFSU2_TR(0x677b79);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677b7b:{NFSU2_TR(0x677b7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677b81:L677b81:{c.instructions+=4;NFSU2_TR(0x677b81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b82:{NFSU2_TR(0x677b82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677b85:{NFSU2_TR(0x677b85);
__builtin_memmove((R+4),(R+12),4);
}
B677b87:{NFSU2_TR(0x677b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677b8cull));
TAIL_STATIC(0x673b2cu,673);
}
B677b8c:L677b8c:{c.instructions+=3;NFSU2_TR(0x677b8c);
__builtin_memmove((R+24),(R+0),4);
}
B677b8e:{NFSU2_TR(0x677b8e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677b90:{NFSU2_TR(0x677b90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677b96:L677b96:{c.instructions+=11;NFSU2_TR(0x677b96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b98:{NFSU2_TR(0x677b98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677b9a:{NFSU2_TR(0x677b9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677b9d:{NFSU2_TR(0x677b9d);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B677ba3:{NFSU2_TR(0x677ba3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677ba6:{NFSU2_TR(0x677ba6);
__builtin_memmove((R+0),(R+28),4);
}
B677ba8:{NFSU2_TR(0x677ba8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B677bad:{NFSU2_TR(0x677bad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677bae:{NFSU2_TR(0x677bae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bb1:{NFSU2_TR(0x677bb1);
__builtin_memmove((R+4),(R+12),4);
}
B677bb3:{NFSU2_TR(0x677bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677bb8ull));
TAIL_STATIC(0x6758ceu,675);
}
B677bb8:L677bb8:{c.instructions+=3;NFSU2_TR(0x677bb8);
__builtin_memmove((R+24),(R+0),4);
}
B677bba:{NFSU2_TR(0x677bba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677bbc:{NFSU2_TR(0x677bbc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677bbe:L677bbe:{c.instructions+=10;NFSU2_TR(0x677bbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677bc0:{NFSU2_TR(0x677bc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bc3:{NFSU2_TR(0x677bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677bc6:{NFSU2_TR(0x677bc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bc9:{NFSU2_TR(0x677bc9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x2040ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B677bcf:{NFSU2_TR(0x677bcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bd2:{NFSU2_TR(0x677bd2);
__builtin_memmove((R+4),(R+12),4);
}
B677bd4:{NFSU2_TR(0x677bd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bd7:{NFSU2_TR(0x677bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bda:{NFSU2_TR(0x677bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677bdfull));
TAIL_STATIC(0x6758ceu,675);
}
B677bdf:L677bdf:{c.instructions+=3;NFSU2_TR(0x677bdf);
__builtin_memmove((R+24),(R+0),4);
}
B677be1:{NFSU2_TR(0x677be1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677be3:{NFSU2_TR(0x677be3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677be5:L677be5:{c.instructions+=9;NFSU2_TR(0x677be5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677be7:{NFSU2_TR(0x677be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bea:{NFSU2_TR(0x677bea);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20500000ull))));
}
B677bf0:{NFSU2_TR(0x677bf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bf3:{NFSU2_TR(0x677bf3);
__builtin_memmove((R+4),(R+12),4);
}
B677bf5:{NFSU2_TR(0x677bf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bf8:{NFSU2_TR(0x677bf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677bf9:{NFSU2_TR(0x677bf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677bfc:{NFSU2_TR(0x677bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677c01ull));
TAIL_STATIC(0x6758ceu,675);
}
B677c01:L677c01:{c.instructions+=3;NFSU2_TR(0x677c01);
__builtin_memmove((R+24),(R+0),4);
}
B677c03:{NFSU2_TR(0x677c03);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677c05:{NFSU2_TR(0x677c05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677c07:L677c07:{c.instructions+=3;NFSU2_TR(0x677c07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677c09:{NFSU2_TR(0x677c09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c0c:{NFSU2_TR(0x677c0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c0f:L677c0f:{c.instructions+=2;NFSU2_TR(0x677c0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c12:{NFSU2_TR(0x677c12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c15:L677c15:{c.instructions+=3;NFSU2_TR(0x677c15);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c18:{NFSU2_TR(0x677c18);
__builtin_memmove((R+4),(R+12),4);
}
B677c1a:{NFSU2_TR(0x677c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677c1full));
TAIL_STATIC(0x6758ceu,675);
}
B677c1f:L677c1f:{c.instructions+=3;NFSU2_TR(0x677c1f);
__builtin_memmove((R+24),(R+0),4);
}
B677c21:{NFSU2_TR(0x677c21);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677c23:{NFSU2_TR(0x677c23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677c27;}}
}
B677c25:L677c25:{c.instructions+=1;NFSU2_TR(0x677c25);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B677c27:L677c27:{c.instructions+=2;NFSU2_TR(0x677c27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c2a:{NFSU2_TR(0x677c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677c2full));
TAIL_STATIC(0x575630u,575);
}
B677c2f:L677c2f:{c.instructions+=7;NFSU2_TR(0x677c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677c30:{NFSU2_TR(0x677c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B677c31:{NFSU2_TR(0x677c31);
__builtin_memmove((R+0),(R+24),4);
}
B677c33:{NFSU2_TR(0x677c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B677c34:{NFSU2_TR(0x677c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B677c35:{NFSU2_TR(0x677c35);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B677c36:{NFSU2_TR(0x677c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B677c39:L677c39:{c.instructions+=4;NFSU2_TR(0x677c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B677c3c:{NFSU2_TR(0x677c3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B677c3f:{NFSU2_TR(0x677c3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677c40:{NFSU2_TR(0x677c40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677c45ull));
TAIL_STATIC(0x575620u,575);
}
B677c45:L677c45:{c.instructions+=4;NFSU2_TR(0x677c45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677c47:{NFSU2_TR(0x677c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677c48:{NFSU2_TR(0x677c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677c4b:{NFSU2_TR(0x677c4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677c54;}}
}
B677c4d:L677c4d:{c.instructions+=2;NFSU2_TR(0x677c4d);
w4(R+24,u32(0x8007000eull));
}
B677c52:{NFSU2_TR(0x677c52);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}
}
B677c54:L677c54:{c.instructions+=4;NFSU2_TR(0x677c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B677c57:{NFSU2_TR(0x677c57);
__builtin_memmove((R+4),(R+28),4);
}
B677c59:{NFSU2_TR(0x677c59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677c5b:{NFSU2_TR(0x677c5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B677c5e:L677c5e:{c.instructions+=5;NFSU2_TR(0x677c5e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B677c62:{NFSU2_TR(0x677c62);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677c63:{NFSU2_TR(0x677c63);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B677c65:{NFSU2_TR(0x677c65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B677c68:{NFSU2_TR(0x677c68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c5eu);}goto L677c5e;}}
}
B677c6a:L677c6a:{c.instructions+=3;NFSU2_TR(0x677c6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677c6c:{NFSU2_TR(0x677c6c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677c6e:{NFSU2_TR(0x677c6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L677c7e;}}
}
B677c70:L677c70:{c.instructions+=6;NFSU2_TR(0x677c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677c73:{NFSU2_TR(0x677c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B677c76:{NFSU2_TR(0x677c76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B677c79:{NFSU2_TR(0x677c79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677c7a:{NFSU2_TR(0x677c7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B677c7c:{NFSU2_TR(0x677c7c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c70u);}goto L677c70;}}
}
B677c7e:L677c7e:{c.instructions+=4;NFSU2_TR(0x677c7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677c7f:{NFSU2_TR(0x677c7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c82:{NFSU2_TR(0x677c82);
__builtin_memmove((R+4),(R+12),4);
}
B677c84:{NFSU2_TR(0x677c84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677c89ull));
TAIL_STATIC(0x673b2cu,673);
}
B677c89:L677c89:{c.instructions+=3;NFSU2_TR(0x677c89);
__builtin_memmove((R+24),(R+0),4);
}
B677c8b:{NFSU2_TR(0x677c8b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677c8d:{NFSU2_TR(0x677c8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677c8f:L677c8f:{c.instructions+=4;NFSU2_TR(0x677c8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677c90:{NFSU2_TR(0x677c90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677c93:{NFSU2_TR(0x677c93);
__builtin_memmove((R+4),(R+12),4);
}
B677c95:{NFSU2_TR(0x677c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677c9aull));
TAIL_STATIC(0x673b2cu,673);
}
B677c9a:L677c9a:{c.instructions+=3;NFSU2_TR(0x677c9a);
__builtin_memmove((R+24),(R+0),4);
}
B677c9c:{NFSU2_TR(0x677c9c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677c9e:{NFSU2_TR(0x677c9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677ca0:L677ca0:{c.instructions+=4;NFSU2_TR(0x677ca0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ca1:{NFSU2_TR(0x677ca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677ca4:{NFSU2_TR(0x677ca4);
__builtin_memmove((R+4),(R+12),4);
}
B677ca6:{NFSU2_TR(0x677ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677cabull));
TAIL_STATIC(0x673b2cu,673);
}
B677cab:L677cab:{c.instructions+=3;NFSU2_TR(0x677cab);
__builtin_memmove((R+24),(R+0),4);
}
B677cad:{NFSU2_TR(0x677cad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677caf:{NFSU2_TR(0x677caf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677cb5:L677cb5:{c.instructions+=4;NFSU2_TR(0x677cb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677cb6:{NFSU2_TR(0x677cb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677cb9:{NFSU2_TR(0x677cb9);
__builtin_memmove((R+4),(R+12),4);
}
B677cbb:{NFSU2_TR(0x677cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677cc0ull));
TAIL_STATIC(0x673b2cu,673);
}
B677cc0:L677cc0:{c.instructions+=3;NFSU2_TR(0x677cc0);
__builtin_memmove((R+24),(R+0),4);
}
B677cc2:{NFSU2_TR(0x677cc2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677cc4:{NFSU2_TR(0x677cc4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677cca:L677cca:{c.instructions+=4;NFSU2_TR(0x677cca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ccb:{NFSU2_TR(0x677ccb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677cce:{NFSU2_TR(0x677cce);
__builtin_memmove((R+4),(R+12),4);
}
B677cd0:{NFSU2_TR(0x677cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677cd5ull));
TAIL_STATIC(0x673b2cu,673);
}
B677cd5:L677cd5:{c.instructions+=3;NFSU2_TR(0x677cd5);
__builtin_memmove((R+24),(R+0),4);
}
B677cd7:{NFSU2_TR(0x677cd7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677cd9:{NFSU2_TR(0x677cd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677cdf:L677cdf:{c.instructions+=11;NFSU2_TR(0x677cdf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ce1:{NFSU2_TR(0x677ce1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ce3:{NFSU2_TR(0x677ce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677ce6:{NFSU2_TR(0x677ce6);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B677cec:{NFSU2_TR(0x677cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677cef:{NFSU2_TR(0x677cef);
__builtin_memmove((R+0),(R+28),4);
}
B677cf1:{NFSU2_TR(0x677cf1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B677cf6:{NFSU2_TR(0x677cf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677cf7:{NFSU2_TR(0x677cf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677cfa:{NFSU2_TR(0x677cfa);
__builtin_memmove((R+4),(R+12),4);
}
B677cfc:{NFSU2_TR(0x677cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677d01ull));
TAIL_STATIC(0x6758ceu,675);
}
B677d01:L677d01:{c.instructions+=3;NFSU2_TR(0x677d01);
__builtin_memmove((R+24),(R+0),4);
}
B677d03:{NFSU2_TR(0x677d03);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677d05:{NFSU2_TR(0x677d05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677d0b:L677d0b:{c.instructions+=10;NFSU2_TR(0x677d0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d0d:{NFSU2_TR(0x677d0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d10:{NFSU2_TR(0x677d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677d13:{NFSU2_TR(0x677d13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d16:{NFSU2_TR(0x677d16);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x2040ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B677d1c:{NFSU2_TR(0x677d1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d1f:{NFSU2_TR(0x677d1f);
__builtin_memmove((R+4),(R+12),4);
}
B677d21:{NFSU2_TR(0x677d21);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d24:{NFSU2_TR(0x677d24);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d27:{NFSU2_TR(0x677d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677d2cull));
TAIL_STATIC(0x6758ceu,675);
}
B677d2c:L677d2c:{c.instructions+=3;NFSU2_TR(0x677d2c);
__builtin_memmove((R+24),(R+0),4);
}
B677d2e:{NFSU2_TR(0x677d2e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677d30:{NFSU2_TR(0x677d30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677d36:L677d36:{c.instructions+=9;NFSU2_TR(0x677d36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d38:{NFSU2_TR(0x677d38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d3b:{NFSU2_TR(0x677d3b);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20500000ull))));
}
B677d41:{NFSU2_TR(0x677d41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d44:{NFSU2_TR(0x677d44);
__builtin_memmove((R+4),(R+12),4);
}
B677d46:{NFSU2_TR(0x677d46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d49:{NFSU2_TR(0x677d49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d4a:{NFSU2_TR(0x677d4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d4d:{NFSU2_TR(0x677d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677d52ull));
TAIL_STATIC(0x6758ceu,675);
}
B677d52:L677d52:{c.instructions+=3;NFSU2_TR(0x677d52);
__builtin_memmove((R+24),(R+0),4);
}
B677d54:{NFSU2_TR(0x677d54);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677d56:{NFSU2_TR(0x677d56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677d5c:L677d5c:{c.instructions+=8;NFSU2_TR(0x677d5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d5e:{NFSU2_TR(0x677d5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d61:{NFSU2_TR(0x677d61);
__builtin_memmove((R+4),(R+12),4);
}
B677d63:{NFSU2_TR(0x677d63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d66:{NFSU2_TR(0x677d66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d69:{NFSU2_TR(0x677d69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d6a:{NFSU2_TR(0x677d6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d6d:{NFSU2_TR(0x677d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677d72ull));
TAIL_STATIC(0x6758ceu,675);
}
B677d72:L677d72:{c.instructions+=3;NFSU2_TR(0x677d72);
__builtin_memmove((R+24),(R+0),4);
}
B677d74:{NFSU2_TR(0x677d74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677d76:{NFSU2_TR(0x677d76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c27u);}goto L677c27;}}
}
B677d7c:L677d7c:{c.instructions+=4;NFSU2_TR(0x677d7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d7e:{NFSU2_TR(0x677d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d81:{NFSU2_TR(0x677d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677d84:{NFSU2_TR(0x677d84);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677c0fu);}goto L677c0f;}
}
B677d89:L677d89:{c.instructions+=17;NFSU2_TR(0x677d89);
__builtin_memmove((R+28),(R+28),4);
}
B677d8b:{NFSU2_TR(0x677d8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d8c:{NFSU2_TR(0x677d8c);
__builtin_memmove((R+20),(R+16),4);
}
B677d8e:{NFSU2_TR(0x677d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B677d91:{NFSU2_TR(0x677d91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d92:{NFSU2_TR(0x677d92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d93:{NFSU2_TR(0x677d93);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677d95:{NFSU2_TR(0x677d95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677d96:{NFSU2_TR(0x677d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B677d99:{NFSU2_TR(0x677d99);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B677d9b:{NFSU2_TR(0x677d9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677d9c:{NFSU2_TR(0x677d9c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677d9e:{NFSU2_TR(0x677d9e);
__builtin_memmove((R+12),(R+4),4);
}
B677da0:{NFSU2_TR(0x677da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677da3:{NFSU2_TR(0x677da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677da6:{NFSU2_TR(0x677da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677da9:{NFSU2_TR(0x677da9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L677df6;}}
}
B677dab:L677dab:{c.instructions+=6;NFSU2_TR(0x677dab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B677dae:{NFSU2_TR(0x677dae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677daf:{NFSU2_TR(0x677daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677db2:{NFSU2_TR(0x677db2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B677db5:{NFSU2_TR(0x677db5);
__builtin_memmove((R+4),(R+12),4);
}
B677db7:{NFSU2_TR(0x677db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677dbcull));
TAIL_STATIC(0x675732u,675);
}
B677dbc:L677dbc:{c.instructions+=2;NFSU2_TR(0x677dbc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677dbe:{NFSU2_TR(0x677dbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L677df1;}}
}
B677dc0:L677dc0:{c.instructions+=6;NFSU2_TR(0x677dc0);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677dc6:{NFSU2_TR(0x677dc6);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677dc9:{NFSU2_TR(0x677dc9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B677dcb:{NFSU2_TR(0x677dcb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B677dcd:{NFSU2_TR(0x677dcd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B677dd0:{NFSU2_TR(0x677dd0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L677dd6;}}
}
B677dd2:L677dd2:{c.instructions+=1;NFSU2_TR(0x677dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B677dd6:L677dd6:{c.instructions+=6;NFSU2_TR(0x677dd6);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677ddc:{NFSU2_TR(0x677ddc);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677ddf:{NFSU2_TR(0x677ddf);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B677de1:{NFSU2_TR(0x677de1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B677de3:{NFSU2_TR(0x677de3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B677de6:{NFSU2_TR(0x677de6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L677dec;}}
}
B677de8:L677de8:{c.instructions+=1;NFSU2_TR(0x677de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B677dec:L677dec:{c.instructions+=3;NFSU2_TR(0x677dec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B677ded:{NFSU2_TR(0x677ded);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B677def:{NFSU2_TR(0x677def);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677dabu);}goto L677dab;}}
}
B677df1:L677df1:{c.instructions+=3;NFSU2_TR(0x677df1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677df3:{NFSU2_TR(0x677df3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677df4:{NFSU2_TR(0x677df4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677df6:L677df6:{c.instructions+=1;NFSU2_TR(0x677df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677e64;}}
}
B677df8:L677df8:{c.instructions+=2;NFSU2_TR(0x677df8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B677dfc:{NFSU2_TR(0x677dfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677e04;}}
}
B677dfe:L677dfe:{c.instructions+=2;NFSU2_TR(0x677dfe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B677e02:{NFSU2_TR(0x677e02);
if(r1(R+518)){{goto L677e64;}}
}
B677e04:L677e04:{c.instructions+=4;NFSU2_TR(0x677e04);
__builtin_memmove((R+0),(R+28),4);
}
B677e06:{NFSU2_TR(0x677e06);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B677e09:{NFSU2_TR(0x677e09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677e0a:{NFSU2_TR(0x677e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677e0full));
TAIL_STATIC(0x575620u,575);
}
B677e0f:L677e0f:{c.instructions+=5;NFSU2_TR(0x677e0f);
__builtin_memmove((R+8),(R+0),4);
}
B677e11:{NFSU2_TR(0x677e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677e13:{NFSU2_TR(0x677e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677e14:{NFSU2_TR(0x677e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677e17:{NFSU2_TR(0x677e17);
if(r1(R+518)){TAIL_STATIC(0x6780deu,678);}
}
B677e1d:L677e1d:{c.instructions+=3;NFSU2_TR(0x677e1d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B677e1f:{NFSU2_TR(0x677e1f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677e21:{NFSU2_TR(0x677e21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L677e39;}}
}
B677e23:L677e23:{c.instructions+=2;NFSU2_TR(0x677e23);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B677e27:{NFSU2_TR(0x677e27);
if(r1(R+518)){{goto L677e2e;}}
}
B677e29:L677e29:{c.instructions+=2;NFSU2_TR(0x677e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677e2c:{NFSU2_TR(0x677e2c);
{goto L677e31;}
}
B677e2e:L677e2e:{c.instructions+=1;NFSU2_TR(0x677e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677e31:L677e31:{c.instructions+=4;NFSU2_TR(0x677e31);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B677e34:{NFSU2_TR(0x677e34);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B677e35:{NFSU2_TR(0x677e35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B677e37:{NFSU2_TR(0x677e37);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677e23u);}goto L677e23;}}
}
B677e39:L677e39:{c.instructions+=4;NFSU2_TR(0x677e39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677e3a:{NFSU2_TR(0x677e3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677e3d:{NFSU2_TR(0x677e3d);
__builtin_memmove((R+4),(R+12),4);
}
B677e3f:{NFSU2_TR(0x677e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677e44ull));
TAIL_STATIC(0x673b2cu,673);
}
B677e44:L677e44:{c.instructions+=3;NFSU2_TR(0x677e44);
__builtin_memmove((R+24),(R+0),4);
}
B677e46:{NFSU2_TR(0x677e46);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677e48:{NFSU2_TR(0x677e48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6781a3u,678);}
}
B677e4e:L677e4e:{c.instructions+=6;NFSU2_TR(0x677e4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677e50:{NFSU2_TR(0x677e50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677e52:{NFSU2_TR(0x677e52);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B677e58:{NFSU2_TR(0x677e58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677e59:{NFSU2_TR(0x677e59);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x10000000ull))));
}
B677e5f:{NFSU2_TR(0x677e5f);
TAIL_STATIC(0x67818du,678);
}
B677e64:L677e64:{c.instructions+=3;NFSU2_TR(0x677e64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677e66:{NFSU2_TR(0x677e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677e69:{NFSU2_TR(0x677e69);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L677e79;}}
}
B677e6b:L677e6b:{c.instructions+=1;NFSU2_TR(0x677e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B677e6d:L677e6d:{c.instructions+=2;NFSU2_TR(0x677e6d);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B677e70:{NFSU2_TR(0x677e70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677e77;}}
}
B677e72:L677e72:{c.instructions+=3;NFSU2_TR(0x677e72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677e73:{NFSU2_TR(0x677e73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B677e75:{NFSU2_TR(0x677e75);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677e6du);}goto L677e6d;}}
}
B677e77:L677e77:{c.instructions+=1;NFSU2_TR(0x677e77);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677e79:L677e79:{c.instructions+=1;NFSU2_TR(0x677e79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6780cbu,678);}
}
B677e7f:L677e7f:{c.instructions+=5;NFSU2_TR(0x677e7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B677e82:{NFSU2_TR(0x677e82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677e83:{NFSU2_TR(0x677e83);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B677e85:{NFSU2_TR(0x677e85);
__builtin_memmove((R+4),(R+12),4);
}
B677e87:{NFSU2_TR(0x677e87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677e8cull));
TAIL_STATIC(0x675732u,675);
}
B677e8c:L677e8c:{c.instructions+=2;NFSU2_TR(0x677e8c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677e8e:{NFSU2_TR(0x677e8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6780cbu,678);}
}
B677e94:L677e94:{c.instructions+=2;NFSU2_TR(0x677e94);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B677e97:{NFSU2_TR(0x677e97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677e9cull));
TAIL_STATIC(0x75dd28u,75d);
}
B677e9c:L677e9c:{c.instructions+=8;NFSU2_TR(0x677e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677e9f:{NFSU2_TR(0x677e9f);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B677ea2:{NFSU2_TR(0x677ea2);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_):"memory");}
}
B677ea5:{NFSU2_TR(0x677ea5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B677ea7:{NFSU2_TR(0x677ea7);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B677ead:{NFSU2_TR(0x677ead);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B677eaf:{NFSU2_TR(0x677eaf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B677eb2:{NFSU2_TR(0x677eb2);
if(r1(R+514)){TAIL_STATIC(0x67804au,678);}
}
B677eb8:L677eb8:{c.instructions+=10;NFSU2_TR(0x677eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677ebb:{NFSU2_TR(0x677ebb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B677ebc:{NFSU2_TR(0x677ebc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ebe:{NFSU2_TR(0x677ebe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B677ec0:{NFSU2_TR(0x677ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677ec1:{NFSU2_TR(0x677ec1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B677ec3:{NFSU2_TR(0x677ec3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677ec4:{NFSU2_TR(0x677ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677ec7:{NFSU2_TR(0x677ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B677ec8:{NFSU2_TR(0x677ec8);
if(r1(R+518)){{goto L677ed6;}}
}
B677eca:L677eca:{c.instructions+=6;NFSU2_TR(0x677eca);
__builtin_memmove((R+24),(R+0),4);
}
B677ecc:{NFSU2_TR(0x677ecc);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
}
B677ecf:{NFSU2_TR(0x677ecf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B677ed0:{NFSU2_TR(0x677ed0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B677ed2:{NFSU2_TR(0x677ed2);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B677ed4:{NFSU2_TR(0x677ed4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677ecau);}goto L677eca;}}
}
B677ed6:L677ed6:{c.instructions+=13;NFSU2_TR(0x677ed6);
__builtin_memmove((R+0),(R+8),4);
}
B677ed8:{NFSU2_TR(0x677ed8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B677ed9:{NFSU2_TR(0x677ed9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B677edb:{NFSU2_TR(0x677edb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B677edd:{NFSU2_TR(0x677edd);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B677edf:{NFSU2_TR(0x677edf);
__builtin_memmove((R+8),(R+4),4);
}
B677ee1:{NFSU2_TR(0x677ee1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B677ee2:{NFSU2_TR(0x677ee2);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B677ee4:{NFSU2_TR(0x677ee4);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B677ee6:{NFSU2_TR(0x677ee6);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B677ee8:{NFSU2_TR(0x677ee8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B677eea:{NFSU2_TR(0x677eea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B677eee:{NFSU2_TR(0x677eee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L677ef2;}}
}
B677ef0:L677ef0:{c.instructions+=1;NFSU2_TR(0x677ef0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B677ef2:L677ef2:{c.instructions+=3;NFSU2_TR(0x677ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677ef5:{NFSU2_TR(0x677ef5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B677ef9:{NFSU2_TR(0x677ef9);
if(r1(R+518)){{goto L677f06;}}
}
B677efb:L677efb:{c.instructions+=2;NFSU2_TR(0x677efb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B677eff:{NFSU2_TR(0x677eff);
if(r1(R+518)){{goto L677f06;}}
}
B677f01:L677f01:{c.instructions+=2;NFSU2_TR(0x677f01);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677f04:{NFSU2_TR(0x677f04);
{goto L677f15;}
}
B677f06:L677f06:{c.instructions+=3;NFSU2_TR(0x677f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677f09:{NFSU2_TR(0x677f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677f0b:{NFSU2_TR(0x677f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L677f0e;}}
}
B677f0d:L677f0d:{c.instructions+=1;NFSU2_TR(0x677f0d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B677f0e:L677f0e:{c.instructions+=2;NFSU2_TR(0x677f0e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B677f11:{NFSU2_TR(0x677f11);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B677f15:L677f15:{c.instructions+=2;NFSU2_TR(0x677f15);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B677f17:{NFSU2_TR(0x677f17);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6780cbu,678);}
}
B677f1d:L677f1d:{c.instructions+=4;NFSU2_TR(0x677f1d);
__builtin_memmove((R+0),(R+28),4);
}
B677f1f:{NFSU2_TR(0x677f1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B677f22:{NFSU2_TR(0x677f22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677f23:{NFSU2_TR(0x677f23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677f28ull));
TAIL_STATIC(0x575620u,575);
}
B677f28:L677f28:{c.instructions+=4;NFSU2_TR(0x677f28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677f2a:{NFSU2_TR(0x677f2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B677f2b:{NFSU2_TR(0x677f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677f2e:{NFSU2_TR(0x677f2e);
if(r1(R+518)){TAIL_STATIC(0x6780deu,678);}
}
B677f34:L677f34:{c.instructions+=3;NFSU2_TR(0x677f34);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B677f36:{NFSU2_TR(0x677f36);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B677f38:{NFSU2_TR(0x677f38);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L677f48;}}
}
B677f3a:L677f3a:{c.instructions+=6;NFSU2_TR(0x677f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B677f3d:{NFSU2_TR(0x677f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B677f40:{NFSU2_TR(0x677f40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B677f43:{NFSU2_TR(0x677f43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B677f44:{NFSU2_TR(0x677f44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B677f46:{NFSU2_TR(0x677f46);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x677f3au);}goto L677f3a;}}
}
B677f48:L677f48:{c.instructions+=4;NFSU2_TR(0x677f48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677f49:{NFSU2_TR(0x677f49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677f4c:{NFSU2_TR(0x677f4c);
__builtin_memmove((R+4),(R+12),4);
}
B677f4e:{NFSU2_TR(0x677f4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677f53ull));
TAIL_STATIC(0x673b2cu,673);
}
B677f53:L677f53:{c.instructions+=3;NFSU2_TR(0x677f53);
__builtin_memmove((R+24),(R+0),4);
}
B677f55:{NFSU2_TR(0x677f55);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677f57:{NFSU2_TR(0x677f57);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6781a3u,678);}
}
B677f5d:L677f5d:{c.instructions+=13;NFSU2_TR(0x677f5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677f5f:{NFSU2_TR(0x677f5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677f61:{NFSU2_TR(0x677f61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677f64:{NFSU2_TR(0x677f64);
__builtin_memmove((R+0),(R+28),4);
}
B677f66:{NFSU2_TR(0x677f66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677f69:{NFSU2_TR(0x677f69);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B677f6e:{NFSU2_TR(0x677f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677f71:{NFSU2_TR(0x677f71);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B677f75:{NFSU2_TR(0x677f75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677f78:{NFSU2_TR(0x677f78);
__builtin_memmove((R+4),(R+12),4);
}
B677f7a:{NFSU2_TR(0x677f7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677f7d:{NFSU2_TR(0x677f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B677f80:{NFSU2_TR(0x677f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677f85ull));
TAIL_STATIC(0x6758ceu,675);
}
B677f85:L677f85:{c.instructions+=4;NFSU2_TR(0x677f85);
__builtin_memmove((R+24),(R+0),4);
}
B677f87:{NFSU2_TR(0x677f87);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B677f89:{NFSU2_TR(0x677f89);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677f8b:{NFSU2_TR(0x677f8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6781a3u,678);}
}
B677f91:L677f91:{c.instructions+=2;NFSU2_TR(0x677f91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B677f94:{NFSU2_TR(0x677f94);
if(r1(R+518)){TAIL_STATIC(0x678029u,678);}
}
B677f9a:L677f9a:{c.instructions+=4;NFSU2_TR(0x677f9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677f9b:{NFSU2_TR(0x677f9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677f9e:{NFSU2_TR(0x677f9e);
__builtin_memmove((R+4),(R+12),4);
}
B677fa0:{NFSU2_TR(0x677fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677fa5ull));
TAIL_STATIC(0x673b2cu,673);
}
B677fa5:L677fa5:{c.instructions+=3;NFSU2_TR(0x677fa5);
__builtin_memmove((R+24),(R+0),4);
}
B677fa7:{NFSU2_TR(0x677fa7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B677fa9:{NFSU2_TR(0x677fa9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6781a3u,678);}
}
B677faf:L677faf:{c.instructions+=8;NFSU2_TR(0x677faf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677fb0:{NFSU2_TR(0x677fb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677fb1:{NFSU2_TR(0x677fb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677fb4:{NFSU2_TR(0x677fb4);
__builtin_memmove((R+4),(R+12),4);
}
B677fb6:{NFSU2_TR(0x677fb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677fb9:{NFSU2_TR(0x677fb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677fbc:{NFSU2_TR(0x677fbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677fbf:{NFSU2_TR(0x677fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677fc4ull));
TAIL_STATIC(0x6758ceu,675);
}
B677fc4:L677fc4:{c.instructions+=3;NFSU2_TR(0x677fc4);
__builtin_memmove((R+24),(R+0),4);
}
B677fc6:{NFSU2_TR(0x677fc6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677fc8:{NFSU2_TR(0x677fc8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6781a3u,678);}
}
B677fce:L677fce:{c.instructions+=3;NFSU2_TR(0x677fce);
w4(R+28,u32(0x20500000ull));
}
B677fd3:{NFSU2_TR(0x677fd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B677fd7:{NFSU2_TR(0x677fd7);
if(r1(R+518)){{goto L677ffe;}}
}
B677fd9:L677fd9:{c.instructions+=10;NFSU2_TR(0x677fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B677fdc:{NFSU2_TR(0x677fdc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677fde:{NFSU2_TR(0x677fde);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677fe1:{NFSU2_TR(0x677fe1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B677fe3:{NFSU2_TR(0x677fe3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677fe6:{NFSU2_TR(0x677fe6);
__builtin_memmove((R+4),(R+12),4);
}
B677fe8:{NFSU2_TR(0x677fe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677feb:{NFSU2_TR(0x677feb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B677fec:{NFSU2_TR(0x677fec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B677fef:{NFSU2_TR(0x677fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x677ff4ull));
TAIL_STATIC(0x6758ceu,675);
}
B677ff4:L677ff4:{c.instructions+=3;NFSU2_TR(0x677ff4);
__builtin_memmove((R+24),(R+0),4);
}
B677ff6:{NFSU2_TR(0x677ff6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B677ff8:{NFSU2_TR(0x677ff8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6781a3u,678);}
}
B677ffe:L677ffe:{c.instructions+=1;NFSU2_TR(0x677ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x678001u,678);
}
XIT:NFSU2_TR_EXIT(0x677,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
