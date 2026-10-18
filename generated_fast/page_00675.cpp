#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_676(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x675,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x675,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_675(u8* __restrict R,Cpu& c);
u32 page_675(Cpu& c){return body_675(c.regs.data(),c);}
__attribute__((noinline)) u32 body_675(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x675001:goto L675001;
case 0x675005:c.instructions+=1;goto B675005;
case 0x67500b:goto L67500b;
case 0x67500e:c.instructions+=3;goto B67500e;
case 0x675010:c.instructions+=2;goto B675010;
case 0x675013:c.instructions+=1;goto B675013;
case 0x675019:goto L675019;
case 0x67501a:c.instructions+=1;goto B67501a;
case 0x67501b:goto L67501b;
case 0x67501e:c.instructions+=3;goto B67501e;
case 0x675021:c.instructions+=2;goto B675021;
case 0x675023:c.instructions+=1;goto B675023;
case 0x675029:goto L675029;
case 0x67502d:c.instructions+=1;goto B67502d;
case 0x675033:goto L675033;
case 0x675037:c.instructions+=1;goto B675037;
case 0x67503d:goto L67503d;
case 0x675040:c.instructions+=2;goto B675040;
case 0x675042:c.instructions+=1;goto B675042;
case 0x675048:goto L675048;
case 0x67504b:goto L67504b;
case 0x67504e:c.instructions+=2;goto B67504e;
case 0x675051:c.instructions+=1;goto B675051;
case 0x675053:goto L675053;
case 0x675056:c.instructions+=2;goto B675056;
case 0x675058:c.instructions+=1;goto B675058;
case 0x67505a:goto L67505a;
case 0x67505c:c.instructions+=1;goto B67505c;
case 0x67505e:goto L67505e;
case 0x675061:c.instructions+=2;goto B675061;
case 0x675065:c.instructions+=1;goto B675065;
case 0x675067:goto L675067;
case 0x67506a:c.instructions+=3;goto B67506a;
case 0x67506c:c.instructions+=2;goto B67506c;
case 0x67506e:c.instructions+=1;goto B67506e;
case 0x675070:goto L675070;
case 0x675073:c.instructions+=4;goto B675073;
case 0x675074:c.instructions+=3;goto B675074;
case 0x675076:c.instructions+=2;goto B675076;
case 0x675079:c.instructions+=1;goto B675079;
case 0x67507e:goto L67507e;
case 0x675080:c.instructions+=1;goto B675080;
case 0x675082:goto L675082;
case 0x675085:c.instructions+=1;goto B675085;
case 0x675087:goto L675087;
case 0x67508a:goto L67508a;
case 0x67508c:c.instructions+=2;goto B67508c;
case 0x675091:c.instructions+=1;goto B675091;
case 0x675093:goto L675093;
case 0x675096:c.instructions+=3;goto B675096;
case 0x67509c:c.instructions+=2;goto B67509c;
case 0x67509e:c.instructions+=1;goto B67509e;
case 0x6750a0:goto L6750a0;
case 0x6750a2:c.instructions+=2;goto B6750a2;
case 0x6750a7:c.instructions+=1;goto B6750a7;
case 0x6750a9:goto L6750a9;
case 0x6750ac:c.instructions+=3;goto B6750ac;
case 0x6750b2:c.instructions+=2;goto B6750b2;
case 0x6750b4:c.instructions+=1;goto B6750b4;
case 0x6750b6:goto L6750b6;
case 0x6750ba:c.instructions+=1;goto B6750ba;
case 0x6750bc:goto L6750bc;
case 0x6750bf:c.instructions+=1;goto B6750bf;
case 0x6750c1:goto L6750c1;
case 0x6750c4:c.instructions+=4;goto B6750c4;
case 0x6750c7:c.instructions+=3;goto B6750c7;
case 0x6750ca:c.instructions+=2;goto B6750ca;
case 0x6750cd:c.instructions+=1;goto B6750cd;
case 0x6750d0:goto L6750d0;
case 0x6750d3:c.instructions+=4;goto B6750d3;
case 0x6750d6:c.instructions+=3;goto B6750d6;
case 0x6750d8:c.instructions+=2;goto B6750d8;
case 0x6750db:c.instructions+=1;goto B6750db;
case 0x6750e1:goto L6750e1;
case 0x6750e2:c.instructions+=1;goto B6750e2;
case 0x6750e3:goto L6750e3;
case 0x6750e6:c.instructions+=2;goto B6750e6;
case 0x6750e8:c.instructions+=1;goto B6750e8;
case 0x6750ea:goto L6750ea;
case 0x6750ed:c.instructions+=1;goto B6750ed;
case 0x6750ef:goto L6750ef;
case 0x6750f2:c.instructions+=1;goto B6750f2;
case 0x6750f4:goto L6750f4;
case 0x6750f6:goto L6750f6;
case 0x6750f7:c.instructions+=2;goto B6750f7;
case 0x6750f8:c.instructions+=1;goto B6750f8;
case 0x6750fb:goto L6750fb;
case 0x6750fd:c.instructions+=5;goto B6750fd;
case 0x6750fe:c.instructions+=4;goto B6750fe;
case 0x675100:c.instructions+=3;goto B675100;
case 0x675101:c.instructions+=2;goto B675101;
case 0x675103:c.instructions+=1;goto B675103;
case 0x675108:goto L675108;
case 0x67510c:c.instructions+=1;goto B67510c;
case 0x67510e:goto L67510e;
case 0x67510f:c.instructions+=1;goto B67510f;
case 0x675114:goto L675114;
case 0x675116:c.instructions+=3;goto B675116;
case 0x675117:c.instructions+=2;goto B675117;
case 0x675118:c.instructions+=1;goto B675118;
case 0x67511b:goto L67511b;
case 0x67511d:c.instructions+=10;goto B67511d;
case 0x67511e:c.instructions+=9;goto B67511e;
case 0x675120:c.instructions+=8;goto B675120;
case 0x675123:c.instructions+=7;goto B675123;
case 0x675124:c.instructions+=6;goto B675124;
case 0x675126:c.instructions+=5;goto B675126;
case 0x675128:c.instructions+=4;goto B675128;
case 0x675129:c.instructions+=3;goto B675129;
case 0x67512a:c.instructions+=2;goto B67512a;
case 0x67512d:c.instructions+=1;goto B67512d;
case 0x675132:goto L675132;
case 0x675135:c.instructions+=3;goto B675135;
case 0x675137:c.instructions+=2;goto B675137;
case 0x67513a:c.instructions+=1;goto B67513a;
case 0x67513d:goto L67513d;
case 0x675140:c.instructions+=2;goto B675140;
case 0x675143:c.instructions+=1;goto B675143;
case 0x675148:goto L675148;
case 0x67514a:c.instructions+=3;goto B67514a;
case 0x67514b:c.instructions+=2;goto B67514b;
case 0x67514c:c.instructions+=1;goto B67514c;
case 0x67514e:goto L67514e;
case 0x675151:c.instructions+=4;goto B675151;
case 0x675152:c.instructions+=3;goto B675152;
case 0x675154:c.instructions+=2;goto B675154;
case 0x675156:c.instructions+=1;goto B675156;
case 0x67515b:goto L67515b;
case 0x67515d:c.instructions+=1;goto B67515d;
case 0x67515f:goto L67515f;
case 0x675162:c.instructions+=2;goto B675162;
case 0x675165:c.instructions+=1;goto B675165;
case 0x675167:goto L675167;
case 0x675169:c.instructions+=1;goto B675169;
case 0x67516b:goto L67516b;
case 0x67516d:c.instructions+=1;goto B67516d;
case 0x67516f:goto L67516f;
case 0x675174:c.instructions+=2;goto B675174;
case 0x675177:c.instructions+=1;goto B675177;
case 0x675179:goto L675179;
case 0x67517d:c.instructions+=1;goto B67517d;
case 0x67517f:goto L67517f;
case 0x675182:goto L675182;
case 0x675185:c.instructions+=2;goto B675185;
case 0x675187:c.instructions+=1;goto B675187;
case 0x675189:goto L675189;
case 0x67518b:c.instructions+=1;goto B67518b;
case 0x67518d:goto L67518d;
case 0x675190:c.instructions+=2;goto B675190;
case 0x675192:c.instructions+=1;goto B675192;
case 0x675194:goto L675194;
case 0x675197:c.instructions+=5;goto B675197;
case 0x675199:c.instructions+=4;goto B675199;
case 0x67519b:c.instructions+=3;goto B67519b;
case 0x6751a0:c.instructions+=2;goto B6751a0;
case 0x6751a3:c.instructions+=1;goto B6751a3;
case 0x6751a8:goto L6751a8;
case 0x6751ab:c.instructions+=2;goto B6751ab;
case 0x6751ae:c.instructions+=1;goto B6751ae;
case 0x6751b0:goto L6751b0;
case 0x6751b4:c.instructions+=1;goto B6751b4;
case 0x6751b7:goto L6751b7;
case 0x6751b9:c.instructions+=8;goto B6751b9;
case 0x6751ba:c.instructions+=7;goto B6751ba;
case 0x6751bb:c.instructions+=6;goto B6751bb;
case 0x6751be:c.instructions+=5;goto B6751be;
case 0x6751c1:c.instructions+=4;goto B6751c1;
case 0x6751c4:c.instructions+=3;goto B6751c4;
case 0x6751c6:c.instructions+=2;goto B6751c6;
case 0x6751c9:c.instructions+=1;goto B6751c9;
case 0x6751ce:goto L6751ce;
case 0x6751d1:c.instructions+=1;goto B6751d1;
case 0x6751d3:goto L6751d3;
case 0x6751d6:c.instructions+=3;goto B6751d6;
case 0x6751d9:c.instructions+=2;goto B6751d9;
case 0x6751dd:c.instructions+=1;goto B6751dd;
case 0x6751df:goto L6751df;
case 0x6751e1:c.instructions+=1;goto B6751e1;
case 0x6751e7:goto L6751e7;
case 0x6751e9:goto L6751e9;
case 0x6751ea:c.instructions+=4;goto B6751ea;
case 0x6751eb:c.instructions+=3;goto B6751eb;
case 0x6751ec:c.instructions+=2;goto B6751ec;
case 0x6751ed:c.instructions+=1;goto B6751ed;
case 0x6751ee:goto L6751ee;
case 0x6751f3:c.instructions+=1;goto B6751f3;
case 0x6751f5:goto L6751f5;
case 0x6751f7:c.instructions+=8;goto B6751f7;
case 0x6751f8:c.instructions+=7;goto B6751f8;
case 0x6751fa:c.instructions+=6;goto B6751fa;
case 0x6751fb:c.instructions+=5;goto B6751fb;
case 0x6751fe:c.instructions+=4;goto B6751fe;
case 0x675200:c.instructions+=3;goto B675200;
case 0x675201:c.instructions+=2;goto B675201;
case 0x675203:c.instructions+=1;goto B675203;
case 0x675205:goto L675205;
case 0x675207:c.instructions+=1;goto B675207;
case 0x675209:goto L675209;
case 0x67520c:c.instructions+=2;goto B67520c;
case 0x67520f:c.instructions+=1;goto B67520f;
case 0x675211:goto L675211;
case 0x675214:c.instructions+=1;goto B675214;
case 0x675216:goto L675216;
case 0x675217:c.instructions+=1;goto B675217;
case 0x675219:goto L675219;
case 0x67521a:c.instructions+=1;goto B67521a;
case 0x67521c:goto L67521c;
case 0x67521f:c.instructions+=1;goto B67521f;
case 0x675221:goto L675221;
case 0x675224:c.instructions+=2;goto B675224;
case 0x675226:c.instructions+=1;goto B675226;
case 0x67522b:goto L67522b;
case 0x67522d:c.instructions+=1;goto B67522d;
case 0x67522f:goto L67522f;
case 0x675232:c.instructions+=2;goto B675232;
case 0x675234:c.instructions+=1;goto B675234;
case 0x675239:goto L675239;
case 0x67523b:c.instructions+=1;goto B67523b;
case 0x67523d:goto L67523d;
case 0x675240:c.instructions+=2;goto B675240;
case 0x675242:c.instructions+=1;goto B675242;
case 0x675247:goto L675247;
case 0x675249:c.instructions+=1;goto B675249;
case 0x67524b:goto L67524b;
case 0x67524e:c.instructions+=2;goto B67524e;
case 0x675250:c.instructions+=1;goto B675250;
case 0x675255:goto L675255;
case 0x675257:c.instructions+=1;goto B675257;
case 0x675259:goto L675259;
case 0x67525b:goto L67525b;
case 0x67525e:c.instructions+=1;goto B67525e;
case 0x675261:goto L675261;
case 0x675262:c.instructions+=3;goto B675262;
case 0x675263:c.instructions+=2;goto B675263;
case 0x675264:c.instructions+=1;goto B675264;
case 0x675267:goto L675267;
case 0x675269:c.instructions+=13;goto B675269;
case 0x67526a:c.instructions+=12;goto B67526a;
case 0x67526c:c.instructions+=11;goto B67526c;
case 0x675272:c.instructions+=10;goto B675272;
case 0x675273:c.instructions+=9;goto B675273;
case 0x675276:c.instructions+=8;goto B675276;
case 0x675279:c.instructions+=7;goto B675279;
case 0x67527a:c.instructions+=6;goto B67527a;
case 0x67527d:c.instructions+=5;goto B67527d;
case 0x675283:c.instructions+=4;goto B675283;
case 0x675288:c.instructions+=3;goto B675288;
case 0x675289:c.instructions+=2;goto B675289;
case 0x675290:c.instructions+=1;goto B675290;
case 0x675295:goto L675295;
case 0x675298:c.instructions+=8;goto B675298;
case 0x67529e:c.instructions+=7;goto B67529e;
case 0x67529f:c.instructions+=6;goto B67529f;
case 0x6752a4:c.instructions+=5;goto B6752a4;
case 0x6752a7:c.instructions+=4;goto B6752a7;
case 0x6752a9:c.instructions+=3;goto B6752a9;
case 0x6752ac:c.instructions+=2;goto B6752ac;
case 0x6752b0:c.instructions+=1;goto B6752b0;
case 0x6752b5:goto L6752b5;
case 0x6752b6:c.instructions+=4;goto B6752b6;
case 0x6752b8:c.instructions+=3;goto B6752b8;
case 0x6752bb:c.instructions+=2;goto B6752bb;
case 0x6752bc:c.instructions+=1;goto B6752bc;
case 0x6752c1:goto L6752c1;
case 0x6752c4:c.instructions+=4;goto B6752c4;
case 0x6752c6:c.instructions+=3;goto B6752c6;
case 0x6752c7:c.instructions+=2;goto B6752c7;
case 0x6752c8:c.instructions+=1;goto B6752c8;
case 0x6752c9:goto L6752c9;
case 0x6752cb:c.instructions+=10;goto B6752cb;
case 0x6752cc:c.instructions+=9;goto B6752cc;
case 0x6752ce:c.instructions+=8;goto B6752ce;
case 0x6752d4:c.instructions+=7;goto B6752d4;
case 0x6752d7:c.instructions+=6;goto B6752d7;
case 0x6752d8:c.instructions+=5;goto B6752d8;
case 0x6752db:c.instructions+=4;goto B6752db;
case 0x6752e1:c.instructions+=3;goto B6752e1;
case 0x6752e6:c.instructions+=2;goto B6752e6;
case 0x6752e7:c.instructions+=1;goto B6752e7;
case 0x6752ec:goto L6752ec;
case 0x6752ef:c.instructions+=9;goto B6752ef;
case 0x6752f2:c.instructions+=8;goto B6752f2;
case 0x6752f8:c.instructions+=7;goto B6752f8;
case 0x6752f9:c.instructions+=6;goto B6752f9;
case 0x6752fe:c.instructions+=5;goto B6752fe;
case 0x675301:c.instructions+=4;goto B675301;
case 0x675303:c.instructions+=3;goto B675303;
case 0x675306:c.instructions+=2;goto B675306;
case 0x67530a:c.instructions+=1;goto B67530a;
case 0x67530f:goto L67530f;
case 0x675310:c.instructions+=4;goto B675310;
case 0x675312:c.instructions+=3;goto B675312;
case 0x675315:c.instructions+=2;goto B675315;
case 0x675316:c.instructions+=1;goto B675316;
case 0x67531b:goto L67531b;
case 0x67531e:c.instructions+=3;goto B67531e;
case 0x675320:c.instructions+=2;goto B675320;
case 0x675321:c.instructions+=1;goto B675321;
case 0x675322:goto L675322;
case 0x675324:c.instructions+=19;goto B675324;
case 0x675325:c.instructions+=18;goto B675325;
case 0x675327:c.instructions+=17;goto B675327;
case 0x67532a:c.instructions+=16;goto B67532a;
case 0x67532d:c.instructions+=15;goto B67532d;
case 0x675330:c.instructions+=14;goto B675330;
case 0x675333:c.instructions+=13;goto B675333;
case 0x675334:c.instructions+=12;goto B675334;
case 0x675337:c.instructions+=11;goto B675337;
case 0x675338:c.instructions+=10;goto B675338;
case 0x675339:c.instructions+=9;goto B675339;
case 0x67533c:c.instructions+=8;goto B67533c;
case 0x67533f:c.instructions+=7;goto B67533f;
case 0x675342:c.instructions+=6;goto B675342;
case 0x675345:c.instructions+=5;goto B675345;
case 0x675348:c.instructions+=4;goto B675348;
case 0x67534b:c.instructions+=3;goto B67534b;
case 0x67534e:c.instructions+=2;goto B67534e;
case 0x675350:c.instructions+=1;goto B675350;
case 0x675352:goto L675352;
case 0x675355:c.instructions+=1;goto B675355;
case 0x675357:goto L675357;
case 0x675359:goto L675359;
case 0x67535b:c.instructions+=2;goto B67535b;
case 0x67535c:c.instructions+=1;goto B67535c;
case 0x67535e:goto L67535e;
case 0x675361:c.instructions+=3;goto B675361;
case 0x675364:c.instructions+=2;goto B675364;
case 0x675366:c.instructions+=1;goto B675366;
case 0x675368:goto L675368;
case 0x67536a:goto L67536a;
case 0x67536c:c.instructions+=1;goto B67536c;
case 0x67536e:goto L67536e;
case 0x675370:c.instructions+=1;goto B675370;
case 0x675372:goto L675372;
case 0x675373:c.instructions+=4;goto B675373;
case 0x675374:c.instructions+=3;goto B675374;
case 0x675375:c.instructions+=2;goto B675375;
case 0x675376:c.instructions+=1;goto B675376;
case 0x675379:goto L675379;
case 0x67537b:c.instructions+=5;goto B67537b;
case 0x67537c:c.instructions+=4;goto B67537c;
case 0x67537e:c.instructions+=3;goto B67537e;
case 0x675381:c.instructions+=2;goto B675381;
case 0x675383:c.instructions+=1;goto B675383;
case 0x675385:goto L675385;
case 0x675387:c.instructions+=2;goto B675387;
case 0x675389:c.instructions+=1;goto B675389;
case 0x67538b:goto L67538b;
case 0x67538e:c.instructions+=1;goto B67538e;
case 0x675393:goto L675393;
case 0x675399:c.instructions+=1;goto B675399;
case 0x67539e:goto L67539e;
case 0x6753a4:c.instructions+=1;goto B6753a4;
case 0x6753a9:goto L6753a9;
case 0x6753af:c.instructions+=1;goto B6753af;
case 0x6753b4:goto L6753b4;
case 0x6753b7:c.instructions+=2;goto B6753b7;
case 0x6753b8:c.instructions+=1;goto B6753b8;
case 0x6753b9:goto L6753b9;
case 0x6753bb:c.instructions+=11;goto B6753bb;
case 0x6753bc:c.instructions+=10;goto B6753bc;
case 0x6753be:c.instructions+=9;goto B6753be;
case 0x6753bf:c.instructions+=8;goto B6753bf;
case 0x6753c0:c.instructions+=7;goto B6753c0;
case 0x6753c3:c.instructions+=6;goto B6753c3;
case 0x6753c4:c.instructions+=5;goto B6753c4;
case 0x6753c6:c.instructions+=4;goto B6753c6;
case 0x6753c8:c.instructions+=3;goto B6753c8;
case 0x6753ca:c.instructions+=2;goto B6753ca;
case 0x6753cd:c.instructions+=1;goto B6753cd;
case 0x6753cf:goto L6753cf;
case 0x6753d1:c.instructions+=1;goto B6753d1;
case 0x6753d6:goto L6753d6;
case 0x6753d9:c.instructions+=4;goto B6753d9;
case 0x6753da:c.instructions+=3;goto B6753da;
case 0x6753dc:c.instructions+=2;goto B6753dc;
case 0x6753dd:c.instructions+=1;goto B6753dd;
case 0x6753e3:goto L6753e3;
case 0x6753e6:c.instructions+=1;goto B6753e6;
case 0x6753ec:goto L6753ec;
case 0x6753ed:c.instructions+=2;goto B6753ed;
case 0x6753ee:c.instructions+=1;goto B6753ee;
case 0x6753f4:goto L6753f4;
case 0x6753f5:c.instructions+=1;goto B6753f5;
case 0x6753f7:goto L6753f7;
case 0x6753f8:c.instructions+=2;goto B6753f8;
case 0x6753f9:c.instructions+=1;goto B6753f9;
case 0x6753fb:goto L6753fb;
case 0x675400:c.instructions+=4;goto B675400;
case 0x675401:c.instructions+=3;goto B675401;
case 0x675402:c.instructions+=2;goto B675402;
case 0x675403:c.instructions+=1;goto B675403;
case 0x675408:goto L675408;
case 0x67540b:c.instructions+=1;goto B67540b;
case 0x675410:goto L675410;
case 0x675413:c.instructions+=1;goto B675413;
case 0x675416:goto L675416;
case 0x675418:c.instructions+=1;goto B675418;
case 0x67541d:goto L67541d;
case 0x67541f:c.instructions+=1;goto B67541f;
case 0x675424:goto L675424;
case 0x675427:c.instructions+=6;goto B675427;
case 0x67542b:c.instructions+=5;goto B67542b;
case 0x67542e:c.instructions+=4;goto B67542e;
case 0x675430:c.instructions+=3;goto B675430;
case 0x675433:c.instructions+=2;goto B675433;
case 0x675438:c.instructions+=1;goto B675438;
case 0x67543a:goto L67543a;
case 0x675441:goto L675441;
case 0x675443:c.instructions+=1;goto B675443;
case 0x675445:goto L675445;
case 0x675447:goto L675447;
case 0x675448:c.instructions+=1;goto B675448;
case 0x67544a:goto L67544a;
case 0x67544f:c.instructions+=1;goto B67544f;
case 0x675451:goto L675451;
case 0x675456:c.instructions+=1;goto B675456;
case 0x675458:goto L675458;
case 0x67545d:c.instructions+=1;goto B67545d;
case 0x67545f:goto L67545f;
case 0x675461:c.instructions+=1;goto B675461;
case 0x675463:goto L675463;
case 0x675468:c.instructions+=1;goto B675468;
case 0x67546a:goto L67546a;
case 0x67546f:goto L67546f;
case 0x675473:c.instructions+=1;goto B675473;
case 0x675475:goto L675475;
case 0x67547a:c.instructions+=1;goto B67547a;
case 0x67547c:goto L67547c;
case 0x67547e:c.instructions+=1;goto B67547e;
case 0x675480:goto L675480;
case 0x675483:c.instructions+=1;goto B675483;
case 0x675485:goto L675485;
case 0x675487:goto L675487;
case 0x675489:goto L675489;
case 0x67548c:c.instructions+=1;goto B67548c;
case 0x67548e:goto L67548e;
case 0x675491:c.instructions+=5;goto B675491;
case 0x675494:c.instructions+=4;goto B675494;
case 0x675497:c.instructions+=3;goto B675497;
case 0x675498:c.instructions+=2;goto B675498;
case 0x67549b:c.instructions+=1;goto B67549b;
case 0x6754a0:goto L6754a0;
case 0x6754a2:c.instructions+=3;goto B6754a2;
case 0x6754a3:c.instructions+=2;goto B6754a3;
case 0x6754a6:c.instructions+=1;goto B6754a6;
case 0x6754a8:goto L6754a8;
case 0x6754aa:goto L6754aa;
case 0x6754ad:c.instructions+=2;goto B6754ad;
case 0x6754b0:c.instructions+=1;goto B6754b0;
case 0x6754b5:goto L6754b5;
case 0x6754b8:goto L6754b8;
case 0x6754bc:c.instructions+=1;goto B6754bc;
case 0x6754be:goto L6754be;
case 0x6754c1:c.instructions+=4;goto B6754c1;
case 0x6754c4:c.instructions+=3;goto B6754c4;
case 0x6754c5:c.instructions+=2;goto B6754c5;
case 0x6754c8:c.instructions+=1;goto B6754c8;
case 0x6754cd:goto L6754cd;
case 0x6754d0:c.instructions+=3;goto B6754d0;
case 0x6754d2:c.instructions+=2;goto B6754d2;
case 0x6754d4:c.instructions+=1;goto B6754d4;
case 0x6754d6:goto L6754d6;
case 0x6754d8:c.instructions+=1;goto B6754d8;
case 0x6754da:goto L6754da;
case 0x6754dd:c.instructions+=4;goto B6754dd;
case 0x6754e0:c.instructions+=3;goto B6754e0;
case 0x6754e1:c.instructions+=2;goto B6754e1;
case 0x6754e2:c.instructions+=1;goto B6754e2;
case 0x6754e7:goto L6754e7;
case 0x6754e9:goto L6754e9;
case 0x6754eb:c.instructions+=1;goto B6754eb;
case 0x6754ec:goto L6754ec;
case 0x6754ed:c.instructions+=3;goto B6754ed;
case 0x6754ee:c.instructions+=2;goto B6754ee;
case 0x6754ef:c.instructions+=1;goto B6754ef;
case 0x675526:goto L675526;
case 0x675528:c.instructions+=13;goto B675528;
case 0x675529:c.instructions+=12;goto B675529;
case 0x67552b:c.instructions+=11;goto B67552b;
case 0x67552c:c.instructions+=10;goto B67552c;
case 0x67552d:c.instructions+=9;goto B67552d;
case 0x67552e:c.instructions+=8;goto B67552e;
case 0x675530:c.instructions+=7;goto B675530;
case 0x675533:c.instructions+=6;goto B675533;
case 0x675534:c.instructions+=5;goto B675534;
case 0x675535:c.instructions+=4;goto B675535;
case 0x675537:c.instructions+=3;goto B675537;
case 0x67553a:c.instructions+=2;goto B67553a;
case 0x67553d:c.instructions+=1;goto B67553d;
case 0x67553f:goto L67553f;
case 0x675542:c.instructions+=1;goto B675542;
case 0x675545:goto L675545;
case 0x675548:c.instructions+=2;goto B675548;
case 0x67554a:c.instructions+=1;goto B67554a;
case 0x675550:goto L675550;
case 0x675553:c.instructions+=2;goto B675553;
case 0x675554:c.instructions+=1;goto B675554;
case 0x67555a:goto L67555a;
case 0x67555d:c.instructions+=1;goto B67555d;
case 0x675563:goto L675563;
case 0x675564:c.instructions+=2;goto B675564;
case 0x675565:c.instructions+=1;goto B675565;
case 0x67556b:goto L67556b;
case 0x67556c:c.instructions+=1;goto B67556c;
case 0x67556e:goto L67556e;
case 0x67556f:c.instructions+=2;goto B67556f;
case 0x675570:c.instructions+=1;goto B675570;
case 0x675572:goto L675572;
case 0x675577:c.instructions+=4;goto B675577;
case 0x675578:c.instructions+=3;goto B675578;
case 0x675579:c.instructions+=2;goto B675579;
case 0x67557a:c.instructions+=1;goto B67557a;
case 0x67557f:goto L67557f;
case 0x675582:c.instructions+=1;goto B675582;
case 0x675587:goto L675587;
case 0x67558a:c.instructions+=12;goto B67558a;
case 0x67558b:c.instructions+=11;goto B67558b;
case 0x67558e:c.instructions+=10;goto B67558e;
case 0x675590:c.instructions+=9;goto B675590;
case 0x675593:c.instructions+=8;goto B675593;
case 0x675596:c.instructions+=7;goto B675596;
case 0x675599:c.instructions+=6;goto B675599;
case 0x67559c:c.instructions+=5;goto B67559c;
case 0x67559f:c.instructions+=4;goto B67559f;
case 0x6755a2:c.instructions+=3;goto B6755a2;
case 0x6755a5:c.instructions+=2;goto B6755a5;
case 0x6755a8:c.instructions+=1;goto B6755a8;
case 0x6755ad:goto L6755ad;
case 0x6755af:c.instructions+=1;goto B6755af;
case 0x6755b5:goto L6755b5;
case 0x6755ba:goto L6755ba;
case 0x6755be:c.instructions+=1;goto B6755be;
case 0x6755c0:goto L6755c0;
case 0x6755c3:c.instructions+=1;goto B6755c3;
case 0x6755c5:goto L6755c5;
case 0x6755c8:c.instructions+=5;goto B6755c8;
case 0x6755ca:c.instructions+=4;goto B6755ca;
case 0x6755cc:c.instructions+=3;goto B6755cc;
case 0x6755d1:c.instructions+=2;goto B6755d1;
case 0x6755d6:c.instructions+=1;goto B6755d6;
case 0x6755db:goto L6755db;
case 0x6755de:c.instructions+=1;goto B6755de;
case 0x6755e0:goto L6755e0;
case 0x6755e3:c.instructions+=4;goto B6755e3;
case 0x6755e6:c.instructions+=3;goto B6755e6;
case 0x6755e9:c.instructions+=2;goto B6755e9;
case 0x6755ec:c.instructions+=1;goto B6755ec;
case 0x6755f0:goto L6755f0;
case 0x6755f3:c.instructions+=11;goto B6755f3;
case 0x6755f4:c.instructions+=10;goto B6755f4;
case 0x6755f7:c.instructions+=9;goto B6755f7;
case 0x6755f9:c.instructions+=8;goto B6755f9;
case 0x6755fc:c.instructions+=7;goto B6755fc;
case 0x6755ff:c.instructions+=6;goto B6755ff;
case 0x675602:c.instructions+=5;goto B675602;
case 0x675605:c.instructions+=4;goto B675605;
case 0x675608:c.instructions+=3;goto B675608;
case 0x67560b:c.instructions+=2;goto B67560b;
case 0x67560e:c.instructions+=1;goto B67560e;
case 0x675613:goto L675613;
case 0x675615:goto L675615;
case 0x675618:c.instructions+=1;goto B675618;
case 0x67561a:goto L67561a;
case 0x67561c:goto L67561c;
case 0x675620:c.instructions+=1;goto B675620;
case 0x675622:goto L675622;
case 0x675625:c.instructions+=2;goto B675625;
case 0x675627:c.instructions+=1;goto B675627;
case 0x675629:goto L675629;
case 0x67562b:c.instructions+=1;goto B67562b;
case 0x67562d:goto L67562d;
case 0x675631:c.instructions+=1;goto B675631;
case 0x675633:goto L675633;
case 0x675637:c.instructions+=1;goto B675637;
case 0x675639:goto L675639;
case 0x67563c:c.instructions+=5;goto B67563c;
case 0x67563e:c.instructions+=4;goto B67563e;
case 0x675640:c.instructions+=3;goto B675640;
case 0x675645:c.instructions+=2;goto B675645;
case 0x67564a:c.instructions+=1;goto B67564a;
case 0x67564f:goto L67564f;
case 0x675652:c.instructions+=1;goto B675652;
case 0x675659:goto L675659;
case 0x67565d:c.instructions+=1;goto B67565d;
case 0x675663:goto L675663;
case 0x675666:c.instructions+=13;goto B675666;
case 0x675669:c.instructions+=12;goto B675669;
case 0x67566a:c.instructions+=11;goto B67566a;
case 0x67566d:c.instructions+=10;goto B67566d;
case 0x675670:c.instructions+=9;goto B675670;
case 0x675673:c.instructions+=8;goto B675673;
case 0x675676:c.instructions+=7;goto B675676;
case 0x675679:c.instructions+=6;goto B675679;
case 0x67567b:c.instructions+=5;goto B67567b;
case 0x67567e:c.instructions+=4;goto B67567e;
case 0x675681:c.instructions+=3;goto B675681;
case 0x675682:c.instructions+=2;goto B675682;
case 0x675685:c.instructions+=1;goto B675685;
case 0x67568a:goto L67568a;
case 0x67568c:c.instructions+=1;goto B67568c;
case 0x675692:goto L675692;
case 0x675695:c.instructions+=4;goto B675695;
case 0x675698:c.instructions+=3;goto B675698;
case 0x675699:c.instructions+=2;goto B675699;
case 0x67569c:c.instructions+=1;goto B67569c;
case 0x67569e:goto L67569e;
case 0x6756a0:goto L6756a0;
case 0x6756a3:c.instructions+=10;goto B6756a3;
case 0x6756a4:c.instructions+=9;goto B6756a4;
case 0x6756a7:c.instructions+=8;goto B6756a7;
case 0x6756a9:c.instructions+=7;goto B6756a9;
case 0x6756ac:c.instructions+=6;goto B6756ac;
case 0x6756af:c.instructions+=5;goto B6756af;
case 0x6756b2:c.instructions+=4;goto B6756b2;
case 0x6756b5:c.instructions+=3;goto B6756b5;
case 0x6756b8:c.instructions+=2;goto B6756b8;
case 0x6756bb:c.instructions+=1;goto B6756bb;
case 0x6756c0:goto L6756c0;
case 0x6756c5:goto L6756c5;
case 0x6756c8:c.instructions+=11;goto B6756c8;
case 0x6756cb:c.instructions+=10;goto B6756cb;
case 0x6756cc:c.instructions+=9;goto B6756cc;
case 0x6756cf:c.instructions+=8;goto B6756cf;
case 0x6756d1:c.instructions+=7;goto B6756d1;
case 0x6756d4:c.instructions+=6;goto B6756d4;
case 0x6756d7:c.instructions+=5;goto B6756d7;
case 0x6756da:c.instructions+=4;goto B6756da;
case 0x6756dd:c.instructions+=3;goto B6756dd;
case 0x6756de:c.instructions+=2;goto B6756de;
case 0x6756e1:c.instructions+=1;goto B6756e1;
case 0x6756e6:goto L6756e6;
case 0x6756e8:c.instructions+=1;goto B6756e8;
case 0x6756ea:goto L6756ea;
case 0x6756ed:c.instructions+=12;goto B6756ed;
case 0x6756ee:c.instructions+=11;goto B6756ee;
case 0x6756f1:c.instructions+=10;goto B6756f1;
case 0x6756f4:c.instructions+=9;goto B6756f4;
case 0x6756f7:c.instructions+=8;goto B6756f7;
case 0x6756fa:c.instructions+=7;goto B6756fa;
case 0x6756fd:c.instructions+=6;goto B6756fd;
case 0x6756ff:c.instructions+=5;goto B6756ff;
case 0x675702:c.instructions+=4;goto B675702;
case 0x675705:c.instructions+=3;goto B675705;
case 0x675706:c.instructions+=2;goto B675706;
case 0x675709:c.instructions+=1;goto B675709;
case 0x67570e:goto L67570e;
case 0x675710:c.instructions+=1;goto B675710;
case 0x675712:goto L675712;
case 0x675715:c.instructions+=3;goto B675715;
case 0x675718:c.instructions+=2;goto B675718;
case 0x67571a:c.instructions+=1;goto B67571a;
case 0x67571d:goto L67571d;
case 0x675720:c.instructions+=2;goto B675720;
case 0x675722:c.instructions+=1;goto B675722;
case 0x675724:goto L675724;
case 0x675727:c.instructions+=1;goto B675727;
case 0x675729:goto L675729;
case 0x67572b:goto L67572b;
case 0x67572c:c.instructions+=4;goto B67572c;
case 0x67572d:c.instructions+=3;goto B67572d;
case 0x67572e:c.instructions+=2;goto B67572e;
case 0x67572f:c.instructions+=1;goto B67572f;
case 0x675732:goto L675732;
case 0x675734:c.instructions+=10;goto B675734;
case 0x675735:c.instructions+=9;goto B675735;
case 0x675737:c.instructions+=8;goto B675737;
case 0x67573a:c.instructions+=7;goto B67573a;
case 0x67573d:c.instructions+=6;goto B67573d;
case 0x675740:c.instructions+=5;goto B675740;
case 0x675743:c.instructions+=4;goto B675743;
case 0x675744:c.instructions+=3;goto B675744;
case 0x675747:c.instructions+=2;goto B675747;
case 0x67574a:c.instructions+=1;goto B67574a;
case 0x67574c:goto L67574c;
case 0x67574f:c.instructions+=4;goto B67574f;
case 0x675750:c.instructions+=3;goto B675750;
case 0x675751:c.instructions+=2;goto B675751;
case 0x675754:c.instructions+=1;goto B675754;
case 0x675759:goto L675759;
case 0x67575b:c.instructions+=3;goto B67575b;
case 0x67575c:c.instructions+=2;goto B67575c;
case 0x67575d:c.instructions+=1;goto B67575d;
case 0x67575f:goto L67575f;
case 0x675762:c.instructions+=2;goto B675762;
case 0x675764:c.instructions+=1;goto B675764;
case 0x675766:goto L675766;
case 0x675769:c.instructions+=1;goto B675769;
case 0x67576b:goto L67576b;
case 0x67576e:c.instructions+=3;goto B67576e;
case 0x67576f:c.instructions+=2;goto B67576f;
case 0x675770:c.instructions+=1;goto B675770;
case 0x675775:goto L675775;
case 0x675777:c.instructions+=1;goto B675777;
case 0x675779:goto L675779;
case 0x67577c:c.instructions+=5;goto B67577c;
case 0x67577f:c.instructions+=4;goto B67577f;
case 0x675781:c.instructions+=3;goto B675781;
case 0x675783:c.instructions+=2;goto B675783;
case 0x675786:c.instructions+=1;goto B675786;
case 0x675788:goto L675788;
case 0x67578b:c.instructions+=4;goto B67578b;
case 0x67578c:c.instructions+=3;goto B67578c;
case 0x67578d:c.instructions+=2;goto B67578d;
case 0x675790:c.instructions+=1;goto B675790;
case 0x675795:goto L675795;
case 0x675797:c.instructions+=3;goto B675797;
case 0x675798:c.instructions+=2;goto B675798;
case 0x675799:c.instructions+=1;goto B675799;
case 0x67579b:goto L67579b;
case 0x67579e:c.instructions+=2;goto B67579e;
case 0x6757a0:c.instructions+=1;goto B6757a0;
case 0x6757a2:goto L6757a2;
case 0x6757a5:goto L6757a5;
case 0x6757a7:goto L6757a7;
case 0x6757a9:c.instructions+=1;goto B6757a9;
case 0x6757ab:goto L6757ab;
case 0x6757b0:goto L6757b0;
case 0x6757b1:c.instructions+=2;goto B6757b1;
case 0x6757b2:c.instructions+=1;goto B6757b2;
case 0x6757b5:goto L6757b5;
case 0x6757b7:c.instructions+=6;goto B6757b7;
case 0x6757b8:c.instructions+=5;goto B6757b8;
case 0x6757ba:c.instructions+=4;goto B6757ba;
case 0x6757bb:c.instructions+=3;goto B6757bb;
case 0x6757bc:c.instructions+=2;goto B6757bc;
case 0x6757bf:c.instructions+=1;goto B6757bf;
case 0x6757c1:goto L6757c1;
case 0x6757c3:c.instructions+=1;goto B6757c3;
case 0x6757c5:goto L6757c5;
case 0x6757c8:c.instructions+=2;goto B6757c8;
case 0x6757cb:c.instructions+=1;goto B6757cb;
case 0x6757cd:goto L6757cd;
case 0x6757d0:c.instructions+=2;goto B6757d0;
case 0x6757d2:c.instructions+=1;goto B6757d2;
case 0x6757d7:goto L6757d7;
case 0x6757d9:c.instructions+=1;goto B6757d9;
case 0x6757db:goto L6757db;
case 0x6757de:c.instructions+=1;goto B6757de;
case 0x6757e0:goto L6757e0;
case 0x6757e3:c.instructions+=1;goto B6757e3;
case 0x6757e5:goto L6757e5;
case 0x6757e6:c.instructions+=2;goto B6757e6;
case 0x6757e7:c.instructions+=1;goto B6757e7;
case 0x6757e9:goto L6757e9;
case 0x6757ea:c.instructions+=1;goto B6757ea;
case 0x6757ec:goto L6757ec;
case 0x6757ed:c.instructions+=2;goto B6757ed;
case 0x6757ee:c.instructions+=1;goto B6757ee;
case 0x6757f0:goto L6757f0;
case 0x6757f1:c.instructions+=2;goto B6757f1;
case 0x6757f2:c.instructions+=1;goto B6757f2;
case 0x6757f4:goto L6757f4;
case 0x6757f7:c.instructions+=1;goto B6757f7;
case 0x6757f9:goto L6757f9;
case 0x6757fc:c.instructions+=1;goto B6757fc;
case 0x6757fe:goto L6757fe;
case 0x675801:c.instructions+=1;goto B675801;
case 0x675803:goto L675803;
case 0x675805:c.instructions+=2;goto B675805;
case 0x675806:c.instructions+=1;goto B675806;
case 0x675808:goto L675808;
case 0x67580d:c.instructions+=4;goto B67580d;
case 0x67580f:c.instructions+=3;goto B67580f;
case 0x675811:c.instructions+=2;goto B675811;
case 0x675812:c.instructions+=1;goto B675812;
case 0x675817:goto L675817;
case 0x67581a:c.instructions+=1;goto B67581a;
case 0x67581c:goto L67581c;
case 0x67581f:c.instructions+=2;goto B67581f;
case 0x675821:c.instructions+=1;goto B675821;
case 0x675823:goto L675823;
case 0x675826:c.instructions+=1;goto B675826;
case 0x675828:goto L675828;
case 0x67582a:goto L67582a;
case 0x67582b:c.instructions+=3;goto B67582b;
case 0x67582c:c.instructions+=2;goto B67582c;
case 0x67582d:c.instructions+=1;goto B67582d;
case 0x675830:goto L675830;
case 0x675832:c.instructions+=11;goto B675832;
case 0x675833:c.instructions+=10;goto B675833;
case 0x675835:c.instructions+=9;goto B675835;
case 0x675836:c.instructions+=8;goto B675836;
case 0x675839:c.instructions+=7;goto B675839;
case 0x67583a:c.instructions+=6;goto B67583a;
case 0x67583b:c.instructions+=5;goto B67583b;
case 0x67583d:c.instructions+=4;goto B67583d;
case 0x675840:c.instructions+=3;goto B675840;
case 0x675843:c.instructions+=2;goto B675843;
case 0x675845:c.instructions+=1;goto B675845;
case 0x675847:goto L675847;
case 0x67584a:c.instructions+=3;goto B67584a;
case 0x67584d:c.instructions+=2;goto B67584d;
case 0x67584f:c.instructions+=1;goto B67584f;
case 0x675851:goto L675851;
case 0x675853:c.instructions+=1;goto B675853;
case 0x675858:goto L675858;
case 0x67585b:c.instructions+=6;goto B67585b;
case 0x67585e:c.instructions+=5;goto B67585e;
case 0x675862:c.instructions+=4;goto B675862;
case 0x675865:c.instructions+=3;goto B675865;
case 0x675866:c.instructions+=2;goto B675866;
case 0x675869:c.instructions+=1;goto B675869;
case 0x67586b:goto L67586b;
case 0x67586e:c.instructions+=6;goto B67586e;
case 0x675871:c.instructions+=5;goto B675871;
case 0x675874:c.instructions+=4;goto B675874;
case 0x675877:c.instructions+=3;goto B675877;
case 0x67587a:c.instructions+=2;goto B67587a;
case 0x67587c:c.instructions+=1;goto B67587c;
case 0x67587e:goto L67587e;
case 0x675881:c.instructions+=3;goto B675881;
case 0x675884:c.instructions+=2;goto B675884;
case 0x675886:c.instructions+=1;goto B675886;
case 0x675888:goto L675888;
case 0x67588a:c.instructions+=1;goto B67588a;
case 0x67588f:goto L67588f;
case 0x675892:c.instructions+=6;goto B675892;
case 0x675895:c.instructions+=5;goto B675895;
case 0x675899:c.instructions+=4;goto B675899;
case 0x67589c:c.instructions+=3;goto B67589c;
case 0x67589d:c.instructions+=2;goto B67589d;
case 0x6758a0:c.instructions+=1;goto B6758a0;
case 0x6758a2:goto L6758a2;
case 0x6758a5:c.instructions+=8;goto B6758a5;
case 0x6758a8:c.instructions+=7;goto B6758a8;
case 0x6758ab:c.instructions+=6;goto B6758ab;
case 0x6758ae:c.instructions+=5;goto B6758ae;
case 0x6758b1:c.instructions+=4;goto B6758b1;
case 0x6758b4:c.instructions+=3;goto B6758b4;
case 0x6758b7:c.instructions+=2;goto B6758b7;
case 0x6758b9:c.instructions+=1;goto B6758b9;
case 0x6758bc:goto L6758bc;
case 0x6758be:goto L6758be;
case 0x6758c0:c.instructions+=1;goto B6758c0;
case 0x6758c3:goto L6758c3;
case 0x6758c5:goto L6758c5;
case 0x6758c6:c.instructions+=5;goto B6758c6;
case 0x6758c7:c.instructions+=4;goto B6758c7;
case 0x6758c9:c.instructions+=3;goto B6758c9;
case 0x6758ca:c.instructions+=2;goto B6758ca;
case 0x6758cb:c.instructions+=1;goto B6758cb;
case 0x6758ce:goto L6758ce;
case 0x6758d0:c.instructions+=13;goto B6758d0;
case 0x6758d1:c.instructions+=12;goto B6758d1;
case 0x6758d3:c.instructions+=11;goto B6758d3;
case 0x6758d6:c.instructions+=10;goto B6758d6;
case 0x6758d9:c.instructions+=9;goto B6758d9;
case 0x6758da:c.instructions+=8;goto B6758da;
case 0x6758dc:c.instructions+=7;goto B6758dc;
case 0x6758e1:c.instructions+=6;goto B6758e1;
case 0x6758e6:c.instructions+=5;goto B6758e6;
case 0x6758e7:c.instructions+=4;goto B6758e7;
case 0x6758e9:c.instructions+=3;goto B6758e9;
case 0x6758ea:c.instructions+=2;goto B6758ea;
case 0x6758ed:c.instructions+=1;goto B6758ed;
case 0x6758ef:goto L6758ef;
case 0x6758f3:c.instructions+=1;goto B6758f3;
case 0x6758f5:goto L6758f5;
case 0x6758f7:c.instructions+=3;goto B6758f7;
case 0x6758fc:c.instructions+=2;goto B6758fc;
case 0x675903:c.instructions+=1;goto B675903;
case 0x675905:goto L675905;
case 0x675908:c.instructions+=4;goto B675908;
case 0x67590b:c.instructions+=3;goto B67590b;
case 0x67590d:c.instructions+=2;goto B67590d;
case 0x675910:c.instructions+=1;goto B675910;
case 0x675912:goto L675912;
case 0x675915:goto L675915;
case 0x675917:c.instructions+=2;goto B675917;
case 0x67591a:c.instructions+=1;goto B67591a;
case 0x67591c:goto L67591c;
case 0x67591f:c.instructions+=4;goto B67591f;
case 0x675922:c.instructions+=3;goto B675922;
case 0x675925:c.instructions+=2;goto B675925;
case 0x675928:c.instructions+=1;goto B675928;
case 0x67592a:goto L67592a;
case 0x67592d:c.instructions+=3;goto B67592d;
case 0x675930:c.instructions+=2;goto B675930;
case 0x675933:c.instructions+=1;goto B675933;
case 0x675935:goto L675935;
case 0x675938:c.instructions+=1;goto B675938;
case 0x67593a:goto L67593a;
case 0x67593f:c.instructions+=2;goto B67593f;
case 0x675944:c.instructions+=1;goto B675944;
case 0x675946:goto L675946;
case 0x67594c:c.instructions+=1;goto B67594c;
case 0x67594e:goto L67594e;
case 0x675951:c.instructions+=5;goto B675951;
case 0x675954:c.instructions+=4;goto B675954;
case 0x675957:c.instructions+=3;goto B675957;
case 0x67595a:c.instructions+=2;goto B67595a;
case 0x67595f:c.instructions+=1;goto B67595f;
case 0x675964:goto L675964;
case 0x67596a:c.instructions+=1;goto B67596a;
case 0x675970:goto L675970;
case 0x675973:c.instructions+=2;goto B675973;
case 0x675977:c.instructions+=1;goto B675977;
case 0x67597d:goto L67597d;
case 0x675980:c.instructions+=15;goto B675980;
case 0x675983:c.instructions+=14;goto B675983;
case 0x675986:c.instructions+=13;goto B675986;
case 0x675987:c.instructions+=12;goto B675987;
case 0x67598a:c.instructions+=11;goto B67598a;
case 0x67598d:c.instructions+=10;goto B67598d;
case 0x675990:c.instructions+=9;goto B675990;
case 0x675991:c.instructions+=8;goto B675991;
case 0x675992:c.instructions+=7;goto B675992;
case 0x675995:c.instructions+=6;goto B675995;
case 0x675996:c.instructions+=5;goto B675996;
case 0x67599b:c.instructions+=4;goto B67599b;
case 0x67599c:c.instructions+=3;goto B67599c;
case 0x67599f:c.instructions+=2;goto B67599f;
case 0x6759a1:c.instructions+=1;goto B6759a1;
case 0x6759a6:goto L6759a6;
case 0x6759a8:c.instructions+=1;goto B6759a8;
case 0x6759ae:goto L6759ae;
case 0x6759b1:c.instructions+=12;goto B6759b1;
case 0x6759b2:c.instructions+=11;goto B6759b2;
case 0x6759b5:c.instructions+=10;goto B6759b5;
case 0x6759b6:c.instructions+=9;goto B6759b6;
case 0x6759b9:c.instructions+=8;goto B6759b9;
case 0x6759bc:c.instructions+=7;goto B6759bc;
case 0x6759bd:c.instructions+=6;goto B6759bd;
case 0x6759c0:c.instructions+=5;goto B6759c0;
case 0x6759c1:c.instructions+=4;goto B6759c1;
case 0x6759c2:c.instructions+=3;goto B6759c2;
case 0x6759c5:c.instructions+=2;goto B6759c5;
case 0x6759c7:c.instructions+=1;goto B6759c7;
case 0x6759cc:goto L6759cc;
case 0x6759ce:c.instructions+=1;goto B6759ce;
case 0x6759d4:goto L6759d4;
case 0x6759d7:c.instructions+=6;goto B6759d7;
case 0x6759da:c.instructions+=5;goto B6759da;
case 0x6759db:c.instructions+=4;goto B6759db;
case 0x6759de:c.instructions+=3;goto B6759de;
case 0x6759df:c.instructions+=2;goto B6759df;
case 0x6759e2:c.instructions+=1;goto B6759e2;
case 0x6759e7:goto L6759e7;
case 0x6759ea:c.instructions+=2;goto B6759ea;
case 0x6759ec:c.instructions+=1;goto B6759ec;
case 0x6759f1:goto L6759f1;
case 0x6759f3:c.instructions+=1;goto B6759f3;
case 0x6759f9:goto L6759f9;
case 0x6759fe:goto L6759fe;
case 0x675a01:c.instructions+=2;goto B675a01;
case 0x675a05:c.instructions+=1;goto B675a05;
case 0x675a0b:goto L675a0b;
case 0x675a0d:c.instructions+=4;goto B675a0d;
case 0x675a12:c.instructions+=3;goto B675a12;
case 0x675a17:c.instructions+=2;goto B675a17;
case 0x675a1a:c.instructions+=1;goto B675a1a;
case 0x675a1c:goto L675a1c;
case 0x675a21:c.instructions+=1;goto B675a21;
case 0x675a23:goto L675a23;
case 0x675a28:c.instructions+=1;goto B675a28;
case 0x675a2a:goto L675a2a;
case 0x675a2f:c.instructions+=1;goto B675a2f;
case 0x675a35:goto L675a35;
case 0x675a3b:c.instructions+=5;goto B675a3b;
case 0x675a3d:c.instructions+=4;goto B675a3d;
case 0x675a3f:c.instructions+=3;goto B675a3f;
case 0x675a42:c.instructions+=2;goto B675a42;
case 0x675a43:c.instructions+=1;goto B675a43;
case 0x675a48:goto L675a48;
case 0x675a49:c.instructions+=4;goto B675a49;
case 0x675a4b:c.instructions+=3;goto B675a4b;
case 0x675a4d:c.instructions+=2;goto B675a4d;
case 0x675a50:c.instructions+=1;goto B675a50;
case 0x675a56:goto L675a56;
case 0x675a58:c.instructions+=2;goto B675a58;
case 0x675a5a:c.instructions+=1;goto B675a5a;
case 0x675a5d:goto L675a5d;
case 0x675a61:c.instructions+=4;goto B675a61;
case 0x675a62:c.instructions+=3;goto B675a62;
case 0x675a64:c.instructions+=2;goto B675a64;
case 0x675a67:c.instructions+=1;goto B675a67;
case 0x675a69:goto L675a69;
case 0x675a6b:c.instructions+=1;goto B675a6b;
case 0x675a6d:goto L675a6d;
case 0x675a70:c.instructions+=8;goto B675a70;
case 0x675a73:c.instructions+=7;goto B675a73;
case 0x675a76:c.instructions+=6;goto B675a76;
case 0x675a78:c.instructions+=5;goto B675a78;
case 0x675a7b:c.instructions+=4;goto B675a7b;
case 0x675a7e:c.instructions+=3;goto B675a7e;
case 0x675a80:c.instructions+=2;goto B675a80;
case 0x675a82:c.instructions+=1;goto B675a82;
case 0x675a85:goto L675a85;
case 0x675a88:c.instructions+=2;goto B675a88;
case 0x675a8e:c.instructions+=1;goto B675a8e;
case 0x675a90:goto L675a90;
case 0x675a96:c.instructions+=1;goto B675a96;
case 0x675a98:goto L675a98;
case 0x675a9e:c.instructions+=1;goto B675a9e;
case 0x675aa0:goto L675aa0;
case 0x675aa6:c.instructions+=1;goto B675aa6;
case 0x675aa8:goto L675aa8;
case 0x675aab:c.instructions+=3;goto B675aab;
case 0x675aad:c.instructions+=2;goto B675aad;
case 0x675ab0:c.instructions+=1;goto B675ab0;
case 0x675ab2:goto L675ab2;
case 0x675ab5:c.instructions+=3;goto B675ab5;
case 0x675ab7:c.instructions+=2;goto B675ab7;
case 0x675aba:c.instructions+=1;goto B675aba;
case 0x675abc:goto L675abc;
case 0x675abf:c.instructions+=4;goto B675abf;
case 0x675ac2:c.instructions+=3;goto B675ac2;
case 0x675ac4:c.instructions+=2;goto B675ac4;
case 0x675ac7:c.instructions+=1;goto B675ac7;
case 0x675ac9:goto L675ac9;
case 0x675acc:c.instructions+=3;goto B675acc;
case 0x675ace:c.instructions+=2;goto B675ace;
case 0x675ad1:c.instructions+=1;goto B675ad1;
case 0x675ad4:goto L675ad4;
case 0x675ad7:goto L675ad7;
case 0x675ada:c.instructions+=2;goto B675ada;
case 0x675add:c.instructions+=1;goto B675add;
case 0x675adf:goto L675adf;
case 0x675ae0:c.instructions+=3;goto B675ae0;
case 0x675ae3:c.instructions+=2;goto B675ae3;
case 0x675ae5:c.instructions+=1;goto B675ae5;
case 0x675aea:goto L675aea;
case 0x675aec:c.instructions+=1;goto B675aec;
case 0x675af2:goto L675af2;
case 0x675af3:c.instructions+=3;goto B675af3;
case 0x675af6:c.instructions+=2;goto B675af6;
case 0x675af8:c.instructions+=1;goto B675af8;
case 0x675afd:goto L675afd;
case 0x675aff:c.instructions+=1;goto B675aff;
case 0x675b05:goto L675b05;
case 0x675b08:c.instructions+=14;goto B675b08;
case 0x675b0b:c.instructions+=13;goto B675b0b;
case 0x675b0c:c.instructions+=12;goto B675b0c;
case 0x675b0e:c.instructions+=11;goto B675b0e;
case 0x675b11:c.instructions+=10;goto B675b11;
case 0x675b13:c.instructions+=9;goto B675b13;
case 0x675b16:c.instructions+=8;goto B675b16;
case 0x675b19:c.instructions+=7;goto B675b19;
case 0x675b1f:c.instructions+=6;goto B675b1f;
case 0x675b21:c.instructions+=5;goto B675b21;
case 0x675b26:c.instructions+=4;goto B675b26;
case 0x675b27:c.instructions+=3;goto B675b27;
case 0x675b2a:c.instructions+=2;goto B675b2a;
case 0x675b2c:c.instructions+=1;goto B675b2c;
case 0x675b31:goto L675b31;
case 0x675b33:c.instructions+=1;goto B675b33;
case 0x675b35:goto L675b35;
case 0x675b38:c.instructions+=9;goto B675b38;
case 0x675b3a:c.instructions+=8;goto B675b3a;
case 0x675b3d:c.instructions+=7;goto B675b3d;
case 0x675b42:c.instructions+=6;goto B675b42;
case 0x675b45:c.instructions+=5;goto B675b45;
case 0x675b47:c.instructions+=4;goto B675b47;
case 0x675b4a:c.instructions+=3;goto B675b4a;
case 0x675b4b:c.instructions+=2;goto B675b4b;
case 0x675b4e:c.instructions+=1;goto B675b4e;
case 0x675b53:goto L675b53;
case 0x675b55:c.instructions+=1;goto B675b55;
case 0x675b57:goto L675b57;
case 0x675b5a:c.instructions+=10;goto B675b5a;
case 0x675b5d:c.instructions+=9;goto B675b5d;
case 0x675b60:c.instructions+=8;goto B675b60;
case 0x675b61:c.instructions+=7;goto B675b61;
case 0x675b64:c.instructions+=6;goto B675b64;
case 0x675b6a:c.instructions+=5;goto B675b6a;
case 0x675b6d:c.instructions+=4;goto B675b6d;
case 0x675b6f:c.instructions+=3;goto B675b6f;
case 0x675b70:c.instructions+=2;goto B675b70;
case 0x675b73:c.instructions+=1;goto B675b73;
case 0x675b78:goto L675b78;
case 0x675b7a:c.instructions+=1;goto B675b7a;
case 0x675b7c:goto L675b7c;
case 0x675b7e:goto L675b7e;
case 0x675b81:c.instructions+=1;goto B675b81;
case 0x675b86:goto L675b86;
case 0x675b87:c.instructions+=2;goto B675b87;
case 0x675b89:c.instructions+=1;goto B675b89;
case 0x675b8e:goto L675b8e;
case 0x675b90:c.instructions+=1;goto B675b90;
case 0x675b92:goto L675b92;
case 0x675b94:c.instructions+=3;goto B675b94;
case 0x675b96:c.instructions+=2;goto B675b96;
case 0x675b97:c.instructions+=1;goto B675b97;
case 0x675b9c:goto L675b9c;
case 0x675b9f:c.instructions+=3;goto B675b9f;
case 0x675ba2:c.instructions+=2;goto B675ba2;
case 0x675ba5:c.instructions+=1;goto B675ba5;
case 0x675ba7:goto L675ba7;
case 0x675baa:c.instructions+=2;goto B675baa;
case 0x675bad:c.instructions+=1;goto B675bad;
case 0x675baf:goto L675baf;
case 0x675bb1:goto L675bb1;
case 0x675bb3:c.instructions+=2;goto B675bb3;
case 0x675bb5:c.instructions+=1;goto B675bb5;
case 0x675bbb:goto L675bbb;
case 0x675bbe:c.instructions+=1;goto B675bbe;
case 0x675bc0:goto L675bc0;
case 0x675bc3:c.instructions+=1;goto B675bc3;
case 0x675bc5:goto L675bc5;
case 0x675bc7:c.instructions+=1;goto B675bc7;
case 0x675bcc:goto L675bcc;
case 0x675bce:c.instructions+=4;goto B675bce;
case 0x675bcf:c.instructions+=3;goto B675bcf;
case 0x675bd0:c.instructions+=2;goto B675bd0;
case 0x675bd2:c.instructions+=1;goto B675bd2;
case 0x675bd7:goto L675bd7;
case 0x675bd8:c.instructions+=4;goto B675bd8;
case 0x675bd9:c.instructions+=3;goto B675bd9;
case 0x675bdb:c.instructions+=2;goto B675bdb;
case 0x675bde:c.instructions+=1;goto B675bde;
case 0x675be3:goto L675be3;
case 0x675be6:c.instructions+=8;goto B675be6;
case 0x675be9:c.instructions+=7;goto B675be9;
case 0x675bec:c.instructions+=6;goto B675bec;
case 0x675bee:c.instructions+=5;goto B675bee;
case 0x675bf1:c.instructions+=4;goto B675bf1;
case 0x675bf4:c.instructions+=3;goto B675bf4;
case 0x675bf6:c.instructions+=2;goto B675bf6;
case 0x675bf8:c.instructions+=1;goto B675bf8;
case 0x675bfb:goto L675bfb;
case 0x675bfd:goto L675bfd;
case 0x675bff:c.instructions+=1;goto B675bff;
case 0x675c02:goto L675c02;
case 0x675c04:goto L675c04;
case 0x675c07:c.instructions+=3;goto B675c07;
case 0x675c0a:c.instructions+=2;goto B675c0a;
case 0x675c0c:c.instructions+=1;goto B675c0c;
case 0x675c0e:goto L675c0e;
case 0x675c10:goto L675c10;
case 0x675c13:c.instructions+=3;goto B675c13;
case 0x675c15:c.instructions+=2;goto B675c15;
case 0x675c18:c.instructions+=1;goto B675c18;
case 0x675c1a:goto L675c1a;
case 0x675c1d:c.instructions+=4;goto B675c1d;
case 0x675c20:c.instructions+=3;goto B675c20;
case 0x675c23:c.instructions+=2;goto B675c23;
case 0x675c26:c.instructions+=1;goto B675c26;
case 0x675c28:goto L675c28;
case 0x675c2b:c.instructions+=2;goto B675c2b;
case 0x675c2e:c.instructions+=1;goto B675c2e;
case 0x675c30:goto L675c30;
case 0x675c32:goto L675c32;
case 0x675c34:c.instructions+=1;goto B675c34;
case 0x675c36:goto L675c36;
case 0x675c39:goto L675c39;
case 0x675c3a:c.instructions+=2;goto B675c3a;
case 0x675c3d:c.instructions+=1;goto B675c3d;
case 0x675c3f:goto L675c3f;
case 0x675c41:c.instructions+=3;goto B675c41;
case 0x675c44:c.instructions+=2;goto B675c44;
case 0x675c47:c.instructions+=1;goto B675c47;
case 0x675c4d:goto L675c4d;
case 0x675c50:c.instructions+=3;goto B675c50;
case 0x675c54:c.instructions+=2;goto B675c54;
case 0x675c56:c.instructions+=1;goto B675c56;
case 0x675c58:goto L675c58;
case 0x675c5b:c.instructions+=2;goto B675c5b;
case 0x675c5e:c.instructions+=1;goto B675c5e;
case 0x675c60:goto L675c60;
case 0x675c63:c.instructions+=2;goto B675c63;
case 0x675c66:c.instructions+=1;goto B675c66;
case 0x675c68:goto L675c68;
case 0x675c6b:c.instructions+=2;goto B675c6b;
case 0x675c6e:c.instructions+=1;goto B675c6e;
case 0x675c70:goto L675c70;
case 0x675c72:goto L675c72;
case 0x675c74:c.instructions+=2;goto B675c74;
case 0x675c77:c.instructions+=1;goto B675c77;
case 0x675c7d:goto L675c7d;
case 0x675c80:c.instructions+=8;goto B675c80;
case 0x675c82:c.instructions+=7;goto B675c82;
case 0x675c83:c.instructions+=6;goto B675c83;
case 0x675c84:c.instructions+=5;goto B675c84;
case 0x675c87:c.instructions+=4;goto B675c87;
case 0x675c89:c.instructions+=3;goto B675c89;
case 0x675c8b:c.instructions+=2;goto B675c8b;
case 0x675c91:c.instructions+=1;goto B675c91;
case 0x675c96:goto L675c96;
case 0x675c99:c.instructions+=2;goto B675c99;
case 0x675c9c:c.instructions+=1;goto B675c9c;
case 0x675ca2:goto L675ca2;
case 0x675ca5:c.instructions+=2;goto B675ca5;
case 0x675ca8:c.instructions+=1;goto B675ca8;
case 0x675caa:goto L675caa;
case 0x675cad:c.instructions+=2;goto B675cad;
case 0x675cb0:c.instructions+=1;goto B675cb0;
case 0x675cb2:goto L675cb2;
case 0x675cb4:goto L675cb4;
case 0x675cb6:c.instructions+=1;goto B675cb6;
case 0x675cbc:goto L675cbc;
case 0x675cc0:c.instructions+=6;goto B675cc0;
case 0x675cc3:c.instructions+=5;goto B675cc3;
case 0x675cc5:c.instructions+=4;goto B675cc5;
case 0x675cc8:c.instructions+=3;goto B675cc8;
case 0x675ccb:c.instructions+=2;goto B675ccb;
case 0x675cce:c.instructions+=1;goto B675cce;
case 0x675cd0:goto L675cd0;
case 0x675cd3:c.instructions+=3;goto B675cd3;
case 0x675cd6:c.instructions+=2;goto B675cd6;
case 0x675cd9:c.instructions+=1;goto B675cd9;
case 0x675cdb:goto L675cdb;
case 0x675cde:c.instructions+=9;goto B675cde;
case 0x675ce1:c.instructions+=8;goto B675ce1;
case 0x675ce4:c.instructions+=7;goto B675ce4;
case 0x675ce7:c.instructions+=6;goto B675ce7;
case 0x675ce9:c.instructions+=5;goto B675ce9;
case 0x675cec:c.instructions+=4;goto B675cec;
case 0x675cef:c.instructions+=3;goto B675cef;
case 0x675cf3:c.instructions+=2;goto B675cf3;
case 0x675cf6:c.instructions+=1;goto B675cf6;
case 0x675cf8:goto L675cf8;
case 0x675cfb:c.instructions+=1;goto B675cfb;
case 0x675cfe:goto L675cfe;
case 0x675d01:c.instructions+=2;goto B675d01;
case 0x675d03:c.instructions+=1;goto B675d03;
case 0x675d05:goto L675d05;
case 0x675d08:c.instructions+=5;goto B675d08;
case 0x675d0b:c.instructions+=4;goto B675d0b;
case 0x675d0e:c.instructions+=3;goto B675d0e;
case 0x675d11:c.instructions+=2;goto B675d11;
case 0x675d14:c.instructions+=1;goto B675d14;
case 0x675d17:goto L675d17;
case 0x675d1a:c.instructions+=2;goto B675d1a;
case 0x675d1d:c.instructions+=1;goto B675d1d;
case 0x675d1f:goto L675d1f;
case 0x675d22:c.instructions+=7;goto B675d22;
case 0x675d25:c.instructions+=6;goto B675d25;
case 0x675d28:c.instructions+=5;goto B675d28;
case 0x675d2b:c.instructions+=4;goto B675d2b;
case 0x675d2e:c.instructions+=3;goto B675d2e;
case 0x675d30:c.instructions+=2;goto B675d30;
case 0x675d33:c.instructions+=1;goto B675d33;
case 0x675d35:goto L675d35;
case 0x675d38:c.instructions+=5;goto B675d38;
case 0x675d3d:c.instructions+=4;goto B675d3d;
case 0x675d3e:c.instructions+=3;goto B675d3e;
case 0x675d3f:c.instructions+=2;goto B675d3f;
case 0x675d40:c.instructions+=1;goto B675d40;
case 0x675d45:goto L675d45;
case 0x675d48:goto L675d48;
case 0x675d4b:c.instructions+=4;goto B675d4b;
case 0x675d4c:c.instructions+=3;goto B675d4c;
case 0x675d4f:c.instructions+=2;goto B675d4f;
case 0x675d52:c.instructions+=1;goto B675d52;
case 0x675d58:goto L675d58;
case 0x675d5a:c.instructions+=2;goto B675d5a;
case 0x675d5d:c.instructions+=1;goto B675d5d;
case 0x675d5f:goto L675d5f;
case 0x675d62:c.instructions+=4;goto B675d62;
case 0x675d64:c.instructions+=3;goto B675d64;
case 0x675d67:c.instructions+=2;goto B675d67;
case 0x675d69:c.instructions+=1;goto B675d69;
case 0x675d6e:goto L675d6e;
case 0x675d6f:c.instructions+=2;goto B675d6f;
case 0x675d72:c.instructions+=1;goto B675d72;
case 0x675d74:goto L675d74;
case 0x675d78:c.instructions+=1;goto B675d78;
case 0x675d7e:goto L675d7e;
case 0x675d80:c.instructions+=1;goto B675d80;
case 0x675d85:goto L675d85;
case 0x675d87:c.instructions+=1;goto B675d87;
case 0x675d8d:goto L675d8d;
case 0x675d8f:c.instructions+=2;goto B675d8f;
case 0x675d92:c.instructions+=1;goto B675d92;
case 0x675d94:goto L675d94;
case 0x675d97:c.instructions+=6;goto B675d97;
case 0x675d9a:c.instructions+=5;goto B675d9a;
case 0x675d9d:c.instructions+=4;goto B675d9d;
case 0x675da0:c.instructions+=3;goto B675da0;
case 0x675da3:c.instructions+=2;goto B675da3;
case 0x675da6:c.instructions+=1;goto B675da6;
case 0x675da8:goto L675da8;
case 0x675dab:c.instructions+=4;goto B675dab;
case 0x675dac:c.instructions+=3;goto B675dac;
case 0x675dad:c.instructions+=2;goto B675dad;
case 0x675daf:c.instructions+=1;goto B675daf;
case 0x675db4:goto L675db4;
case 0x675db6:c.instructions+=1;goto B675db6;
case 0x675db8:goto L675db8;
case 0x675db9:c.instructions+=2;goto B675db9;
case 0x675dbc:c.instructions+=1;goto B675dbc;
case 0x675dbe:goto L675dbe;
case 0x675dc1:goto L675dc1;
case 0x675dc3:goto L675dc3;
case 0x675dc6:c.instructions+=8;goto B675dc6;
case 0x675dcb:c.instructions+=7;goto B675dcb;
case 0x675dd0:c.instructions+=6;goto B675dd0;
case 0x675dd2:c.instructions+=5;goto B675dd2;
case 0x675dd5:c.instructions+=4;goto B675dd5;
case 0x675dd7:c.instructions+=3;goto B675dd7;
case 0x675dda:c.instructions+=2;goto B675dda;
case 0x675ddd:c.instructions+=1;goto B675ddd;
case 0x675ddf:goto L675ddf;
case 0x675de2:c.instructions+=12;goto B675de2;
case 0x675de5:c.instructions+=11;goto B675de5;
case 0x675de8:c.instructions+=10;goto B675de8;
case 0x675deb:c.instructions+=9;goto B675deb;
case 0x675dee:c.instructions+=8;goto B675dee;
case 0x675df1:c.instructions+=7;goto B675df1;
case 0x675df2:c.instructions+=6;goto B675df2;
case 0x675df3:c.instructions+=5;goto B675df3;
case 0x675df6:c.instructions+=4;goto B675df6;
case 0x675df8:c.instructions+=3;goto B675df8;
case 0x675dfa:c.instructions+=2;goto B675dfa;
case 0x675dfd:c.instructions+=1;goto B675dfd;
case 0x675e02:goto L675e02;
case 0x675e05:c.instructions+=4;goto B675e05;
case 0x675e08:c.instructions+=3;goto B675e08;
case 0x675e0b:c.instructions+=2;goto B675e0b;
case 0x675e0f:c.instructions+=1;goto B675e0f;
case 0x675e15:goto L675e15;
case 0x675e16:c.instructions+=2;goto B675e16;
case 0x675e19:c.instructions+=1;goto B675e19;
case 0x675e1b:goto L675e1b;
case 0x675e1d:c.instructions+=4;goto B675e1d;
case 0x675e22:c.instructions+=3;goto B675e22;
case 0x675e27:c.instructions+=2;goto B675e27;
case 0x675e29:c.instructions+=1;goto B675e29;
case 0x675e2f:goto L675e2f;
case 0x675e35:goto L675e35;
case 0x675e3a:c.instructions+=1;goto B675e3a;
case 0x675e40:goto L675e40;
case 0x675e45:c.instructions+=1;goto B675e45;
case 0x675e4b:goto L675e4b;
case 0x675e50:c.instructions+=1;goto B675e50;
case 0x675e56:goto L675e56;
case 0x675e5b:c.instructions+=1;goto B675e5b;
case 0x675e61:goto L675e61;
case 0x675e66:c.instructions+=1;goto B675e66;
case 0x675e6c:goto L675e6c;
case 0x675e70:c.instructions+=2;goto B675e70;
case 0x675e74:c.instructions+=1;goto B675e74;
case 0x675e7a:goto L675e7a;
case 0x675e7d:c.instructions+=23;goto B675e7d;
case 0x675e80:c.instructions+=22;goto B675e80;
case 0x675e83:c.instructions+=21;goto B675e83;
case 0x675e86:c.instructions+=20;goto B675e86;
case 0x675e89:c.instructions+=19;goto B675e89;
case 0x675e8c:c.instructions+=18;goto B675e8c;
case 0x675e8f:c.instructions+=17;goto B675e8f;
case 0x675e92:c.instructions+=16;goto B675e92;
case 0x675e95:c.instructions+=15;goto B675e95;
case 0x675e98:c.instructions+=14;goto B675e98;
case 0x675e9b:c.instructions+=13;goto B675e9b;
case 0x675e9e:c.instructions+=12;goto B675e9e;
case 0x675ea1:c.instructions+=11;goto B675ea1;
case 0x675ea4:c.instructions+=10;goto B675ea4;
case 0x675ea7:c.instructions+=9;goto B675ea7;
case 0x675ea9:c.instructions+=8;goto B675ea9;
case 0x675eab:c.instructions+=7;goto B675eab;
case 0x675eae:c.instructions+=6;goto B675eae;
case 0x675eb1:c.instructions+=5;goto B675eb1;
case 0x675eb3:c.instructions+=4;goto B675eb3;
case 0x675eb6:c.instructions+=3;goto B675eb6;
case 0x675eb9:c.instructions+=2;goto B675eb9;
case 0x675ebc:c.instructions+=1;goto B675ebc;
case 0x675ebe:goto L675ebe;
case 0x675ec3:goto L675ec3;
case 0x675ec8:c.instructions+=4;goto B675ec8;
case 0x675eca:c.instructions+=3;goto B675eca;
case 0x675ecc:c.instructions+=2;goto B675ecc;
case 0x675ecd:c.instructions+=1;goto B675ecd;
case 0x675ed2:goto L675ed2;
case 0x675ed5:c.instructions+=2;goto B675ed5;
case 0x675eda:c.instructions+=1;goto B675eda;
case 0x675edf:goto L675edf;
case 0x675ee4:c.instructions+=1;goto B675ee4;
case 0x675ee9:goto L675ee9;
case 0x675eeb:c.instructions+=3;goto B675eeb;
case 0x675eee:c.instructions+=2;goto B675eee;
case 0x675ef1:c.instructions+=1;goto B675ef1;
case 0x675ef7:goto L675ef7;
case 0x675efa:c.instructions+=17;goto B675efa;
case 0x675efd:c.instructions+=16;goto B675efd;
case 0x675eff:c.instructions+=15;goto B675eff;
case 0x675f02:c.instructions+=14;goto B675f02;
case 0x675f05:c.instructions+=13;goto B675f05;
case 0x675f08:c.instructions+=12;goto B675f08;
case 0x675f0b:c.instructions+=11;goto B675f0b;
case 0x675f0e:c.instructions+=10;goto B675f0e;
case 0x675f11:c.instructions+=9;goto B675f11;
case 0x675f14:c.instructions+=8;goto B675f14;
case 0x675f16:c.instructions+=7;goto B675f16;
case 0x675f19:c.instructions+=6;goto B675f19;
case 0x675f1b:c.instructions+=5;goto B675f1b;
case 0x675f1e:c.instructions+=4;goto B675f1e;
case 0x675f1f:c.instructions+=3;goto B675f1f;
case 0x675f22:c.instructions+=2;goto B675f22;
case 0x675f25:c.instructions+=1;goto B675f25;
case 0x675f27:goto L675f27;
case 0x675f2c:goto L675f2c;
case 0x675f2e:c.instructions+=3;goto B675f2e;
case 0x675f31:c.instructions+=2;goto B675f31;
case 0x675f34:c.instructions+=1;goto B675f34;
case 0x675f3a:goto L675f3a;
case 0x675f3d:c.instructions+=21;goto B675f3d;
case 0x675f3f:c.instructions+=20;goto B675f3f;
case 0x675f42:c.instructions+=19;goto B675f42;
case 0x675f45:c.instructions+=18;goto B675f45;
case 0x675f48:c.instructions+=17;goto B675f48;
case 0x675f4b:c.instructions+=16;goto B675f4b;
case 0x675f4e:c.instructions+=15;goto B675f4e;
case 0x675f51:c.instructions+=14;goto B675f51;
case 0x675f54:c.instructions+=13;goto B675f54;
case 0x675f57:c.instructions+=12;goto B675f57;
case 0x675f5a:c.instructions+=11;goto B675f5a;
case 0x675f5c:c.instructions+=10;goto B675f5c;
case 0x675f5e:c.instructions+=9;goto B675f5e;
case 0x675f61:c.instructions+=8;goto B675f61;
case 0x675f64:c.instructions+=7;goto B675f64;
case 0x675f67:c.instructions+=6;goto B675f67;
case 0x675f6a:c.instructions+=5;goto B675f6a;
case 0x675f6d:c.instructions+=4;goto B675f6d;
case 0x675f6e:c.instructions+=3;goto B675f6e;
case 0x675f71:c.instructions+=2;goto B675f71;
case 0x675f74:c.instructions+=1;goto B675f74;
case 0x675f76:goto L675f76;
case 0x675f7b:goto L675f7b;
case 0x675f80:c.instructions+=1;goto B675f80;
case 0x675f86:goto L675f86;
case 0x675f8b:c.instructions+=1;goto B675f8b;
case 0x675f91:goto L675f91;
case 0x675f96:c.instructions+=1;goto B675f96;
case 0x675f98:goto L675f98;
case 0x675f9d:c.instructions+=1;goto B675f9d;
case 0x675fa3:goto L675fa3;
case 0x675fa6:c.instructions+=8;goto B675fa6;
case 0x675fa9:c.instructions+=7;goto B675fa9;
case 0x675fab:c.instructions+=6;goto B675fab;
case 0x675fae:c.instructions+=5;goto B675fae;
case 0x675fb1:c.instructions+=4;goto B675fb1;
case 0x675fb5:c.instructions+=3;goto B675fb5;
case 0x675fb9:c.instructions+=2;goto B675fb9;
case 0x675fbc:c.instructions+=1;goto B675fbc;
case 0x675fbe:goto L675fbe;
case 0x675fc1:c.instructions+=5;goto B675fc1;
case 0x675fc4:c.instructions+=4;goto B675fc4;
case 0x675fc7:c.instructions+=3;goto B675fc7;
case 0x675fca:c.instructions+=2;goto B675fca;
case 0x675fcd:c.instructions+=1;goto B675fcd;
case 0x675fd0:goto L675fd0;
case 0x675fd3:c.instructions+=8;goto B675fd3;
case 0x675fd5:c.instructions+=7;goto B675fd5;
case 0x675fd8:c.instructions+=6;goto B675fd8;
case 0x675fda:c.instructions+=5;goto B675fda;
case 0x675fdd:c.instructions+=4;goto B675fdd;
case 0x675fdf:c.instructions+=3;goto B675fdf;
case 0x675fe1:c.instructions+=2;goto B675fe1;
case 0x675fe3:c.instructions+=1;goto B675fe3;
case 0x675fe5:goto L675fe5;
case 0x675fe8:c.instructions+=5;goto B675fe8;
case 0x675feb:c.instructions+=4;goto B675feb;
case 0x675fef:c.instructions+=3;goto B675fef;
case 0x675ff2:c.instructions+=2;goto B675ff2;
case 0x675ff5:c.instructions+=1;goto B675ff5;
case 0x675ff7:goto L675ff7;
case 0x675ffa:c.instructions+=2;goto B675ffa;
case 0x675ffd:c.instructions+=1;goto B675ffd;
default:missing_instruction(c.pc);}
B675001:L675001:{c.instructions+=2;NFSU2_TR(0x675001);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675005:{NFSU2_TR(0x675005);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6750f4;}}
}
B67500b:L67500b:{c.instructions+=4;NFSU2_TR(0x67500b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67500e:{NFSU2_TR(0x67500e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675010:{NFSU2_TR(0x675010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675013:{NFSU2_TR(0x675013);
if(r1(R+518)){{goto L6750e3;}}
}
B675019:L675019:{c.instructions+=2;NFSU2_TR(0x675019);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67501a:{NFSU2_TR(0x67501a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67501b:L67501b:{c.instructions+=4;NFSU2_TR(0x67501b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67501e:{NFSU2_TR(0x67501e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675021:{NFSU2_TR(0x675021);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675023:{NFSU2_TR(0x675023);
if(r1(R+518)){{goto L6750d0;}}
}
B675029:L675029:{c.instructions+=2;NFSU2_TR(0x675029);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67502d:{NFSU2_TR(0x67502d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6750d0;}}
}
B675033:L675033:{c.instructions+=2;NFSU2_TR(0x675033);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675037:{NFSU2_TR(0x675037);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6750d0;}}
}
B67503d:L67503d:{c.instructions+=3;NFSU2_TR(0x67503d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675040:{NFSU2_TR(0x675040);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675042:{NFSU2_TR(0x675042);
if(r1(R+518)){{goto L6750d0;}}
}
B675048:L675048:{c.instructions+=1;NFSU2_TR(0x675048);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67504b:L67504b:{c.instructions+=3;NFSU2_TR(0x67504b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67504e:{NFSU2_TR(0x67504e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675051:{NFSU2_TR(0x675051);
if(r1(R+518)){{goto L67505a;}}
}
B675053:L675053:{c.instructions+=3;NFSU2_TR(0x675053);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675056:{NFSU2_TR(0x675056);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675058:{NFSU2_TR(0x675058);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67504bu);}goto L67504b;}}
}
B67505a:L67505a:{c.instructions+=2;NFSU2_TR(0x67505a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67505c:{NFSU2_TR(0x67505c);
if(r1(R+518)){{goto L6750d0;}}
}
B67505e:L67505e:{c.instructions+=3;NFSU2_TR(0x67505e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675061:{NFSU2_TR(0x675061);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675065:{NFSU2_TR(0x675065);
if(r1(R+518)){{goto L6750d0;}}
}
B675067:L675067:{c.instructions+=4;NFSU2_TR(0x675067);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67506a:{NFSU2_TR(0x67506a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67506c:{NFSU2_TR(0x67506c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67506e:{NFSU2_TR(0x67506e);
if(r1(R+518)){{goto L67508a;}}
}
B675070:L675070:{c.instructions+=5;NFSU2_TR(0x675070);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B675073:{NFSU2_TR(0x675073);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675074:{NFSU2_TR(0x675074);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675076:{NFSU2_TR(0x675076);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675079:{NFSU2_TR(0x675079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67507eull));
TAIL_STATIC(0x672277u,672);
}
B67507e:L67507e:{c.instructions+=2;NFSU2_TR(0x67507e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675080:{NFSU2_TR(0x675080);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675087;}}
}
B675082:L675082:{c.instructions+=2;NFSU2_TR(0x675082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675085:{NFSU2_TR(0x675085);
{goto L67508a;}
}
B675087:L675087:{c.instructions+=1;NFSU2_TR(0x675087);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B67508a:L67508a:{c.instructions+=3;NFSU2_TR(0x67508a);
__builtin_memmove((R+0),(R+4),4);
}
B67508c:{NFSU2_TR(0x67508c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B675091:{NFSU2_TR(0x675091);
if(r1(R+518)){{goto L6750a0;}}
}
B675093:L675093:{c.instructions+=4;NFSU2_TR(0x675093);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675096:{NFSU2_TR(0x675096);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff0000ull))));
}
B67509c:{NFSU2_TR(0x67509c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67509e:{NFSU2_TR(0x67509e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6750d0;}}
}
B6750a0:L6750a0:{c.instructions+=3;NFSU2_TR(0x6750a0);
__builtin_memmove((R+0),(R+4),4);
}
B6750a2:{NFSU2_TR(0x6750a2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6750a7:{NFSU2_TR(0x6750a7);
if(r1(R+518)){{goto L6750b6;}}
}
B6750a9:L6750a9:{c.instructions+=4;NFSU2_TR(0x6750a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6750ac:{NFSU2_TR(0x6750ac);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B6750b2:{NFSU2_TR(0x6750b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6750b4:{NFSU2_TR(0x6750b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6750d0;}}
}
B6750b6:L6750b6:{c.instructions+=2;NFSU2_TR(0x6750b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6750ba:{NFSU2_TR(0x6750ba);
if(r1(R+518)){{goto L6750c1;}}
}
B6750bc:L6750bc:{c.instructions+=2;NFSU2_TR(0x6750bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6750bf:{NFSU2_TR(0x6750bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6750d0;}}
}
B6750c1:L6750c1:{c.instructions+=5;NFSU2_TR(0x6750c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6750c4:{NFSU2_TR(0x6750c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6750c7:{NFSU2_TR(0x6750c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6750ca:{NFSU2_TR(0x6750ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6750cd:{NFSU2_TR(0x6750cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6750d0:L6750d0:{c.instructions+=5;NFSU2_TR(0x6750d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6750d3:{NFSU2_TR(0x6750d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6750d6:{NFSU2_TR(0x6750d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6750d8:{NFSU2_TR(0x6750d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6750db:{NFSU2_TR(0x6750db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67501bu);}goto L67501b;}}
}
B6750e1:L6750e1:{c.instructions+=2;NFSU2_TR(0x6750e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6750e2:{NFSU2_TR(0x6750e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6750e3:L6750e3:{c.instructions+=3;NFSU2_TR(0x6750e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6750e6:{NFSU2_TR(0x6750e6);
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
B6750e8:{NFSU2_TR(0x6750e8);
if(r1(R+518)){{goto L6750ef;}}
}
B6750ea:L6750ea:{c.instructions+=2;NFSU2_TR(0x6750ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6750ed:{NFSU2_TR(0x6750ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6750ef:L6750ef:{c.instructions+=2;NFSU2_TR(0x6750ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6750f2:{NFSU2_TR(0x6750f2);
{goto L6750f6;}
}
B6750f4:L6750f4:{c.instructions+=1;NFSU2_TR(0x6750f4);
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
B6750f6:L6750f6:{c.instructions+=3;NFSU2_TR(0x6750f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6750f7:{NFSU2_TR(0x6750f7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6750f8:{NFSU2_TR(0x6750f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6750fb:L6750fb:{c.instructions+=6;NFSU2_TR(0x6750fb);
__builtin_memmove((R+28),(R+28),4);
}
B6750fd:{NFSU2_TR(0x6750fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6750fe:{NFSU2_TR(0x6750fe);
__builtin_memmove((R+20),(R+16),4);
}
B675100:{NFSU2_TR(0x675100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675101:{NFSU2_TR(0x675101);
__builtin_memmove((R+24),(R+4),4);
}
B675103:{NFSU2_TR(0x675103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675108ull));
TAIL_STATIC(0x6996f4u,699);
}
B675108:L675108:{c.instructions+=2;NFSU2_TR(0x675108);
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
B67510c:{NFSU2_TR(0x67510c);
if(r1(R+518)){{goto L675114;}}
}
B67510e:L67510e:{c.instructions+=2;NFSU2_TR(0x67510e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67510f:{NFSU2_TR(0x67510f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675114ull));
TAIL_STATIC(0x6998a3u,699);
}
B675114:L675114:{c.instructions+=4;NFSU2_TR(0x675114);
__builtin_memmove((R+0),(R+24),4);
}
B675116:{NFSU2_TR(0x675116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B675117:{NFSU2_TR(0x675117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B675118:{NFSU2_TR(0x675118);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67511b:L67511b:{c.instructions+=11;NFSU2_TR(0x67511b);
__builtin_memmove((R+28),(R+28),4);
}
B67511d:{NFSU2_TR(0x67511d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67511e:{NFSU2_TR(0x67511e);
__builtin_memmove((R+20),(R+16),4);
}
B675120:{NFSU2_TR(0x675120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B675123:{NFSU2_TR(0x675123);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675124:{NFSU2_TR(0x675124);
__builtin_memmove((R+12),(R+4),4);
}
B675126:{NFSU2_TR(0x675126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675128:{NFSU2_TR(0x675128);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675129:{NFSU2_TR(0x675129);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67512a:{NFSU2_TR(0x67512a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67512d:{NFSU2_TR(0x67512d);
{goto L6751df;}
}
B675132:L675132:{c.instructions+=4;NFSU2_TR(0x675132);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675135:{NFSU2_TR(0x675135);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B675137:{NFSU2_TR(0x675137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67513a:{NFSU2_TR(0x67513a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67513d:L67513d:{c.instructions+=3;NFSU2_TR(0x67513d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675140:{NFSU2_TR(0x675140);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675143:{NFSU2_TR(0x675143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675148ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B675148:L675148:{c.instructions+=4;NFSU2_TR(0x675148);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67514a:{NFSU2_TR(0x67514a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67514b:{NFSU2_TR(0x67514b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67514c:{NFSU2_TR(0x67514c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675189;}}
}
B67514e:L67514e:{c.instructions+=5;NFSU2_TR(0x67514e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B675151:{NFSU2_TR(0x675151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675152:{NFSU2_TR(0x675152);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675154:{NFSU2_TR(0x675154);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B675156:{NFSU2_TR(0x675156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67515bull));
TAIL_STATIC(0x672277u,672);
}
B67515b:L67515b:{c.instructions+=2;NFSU2_TR(0x67515b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67515d:{NFSU2_TR(0x67515d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675182;}}
}
B67515f:L67515f:{c.instructions+=3;NFSU2_TR(0x67515f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675162:{NFSU2_TR(0x675162);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675165:{NFSU2_TR(0x675165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67516f;}}
}
B675167:L675167:{c.instructions+=2;NFSU2_TR(0x675167);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675169:{NFSU2_TR(0x675169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675182;}}
}
B67516b:L67516b:{c.instructions+=2;NFSU2_TR(0x67516b);
__builtin_memmove((R+24),(R+28),4);
}
B67516d:{NFSU2_TR(0x67516d);
{goto L675182;}
}
B67516f:L67516f:{c.instructions+=3;NFSU2_TR(0x67516f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
}
B675174:{NFSU2_TR(0x675174);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675177:{NFSU2_TR(0x675177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675182;}}
}
B675179:L675179:{c.instructions+=2;NFSU2_TR(0x675179);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67517d:{NFSU2_TR(0x67517d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675182;}}
}
B67517f:L67517f:{c.instructions+=1;NFSU2_TR(0x67517f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675182:L675182:{c.instructions+=3;NFSU2_TR(0x675182);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675185:{NFSU2_TR(0x675185);
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
B675187:{NFSU2_TR(0x675187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67513du);}goto L67513d;}}
}
B675189:L675189:{c.instructions+=2;NFSU2_TR(0x675189);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67518b:{NFSU2_TR(0x67518b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675194;}}
}
B67518d:L67518d:{c.instructions+=3;NFSU2_TR(0x67518d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675190:{NFSU2_TR(0x675190);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675192:{NFSU2_TR(0x675192);
if(r1(R+518)){{goto L6751df;}}
}
B675194:L675194:{c.instructions+=6;NFSU2_TR(0x675194);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675197:{NFSU2_TR(0x675197);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675199:{NFSU2_TR(0x675199);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67519b:{NFSU2_TR(0x67519b);
u8 U[4];
w4(U+0,u32(0xb51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6751a0:{NFSU2_TR(0x6751a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6751a3:{NFSU2_TR(0x6751a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6751a8ull));
TAIL_STATIC(0x699be0u,699);
}
B6751a8:L6751a8:{c.instructions+=3;NFSU2_TR(0x6751a8);
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
B6751ab:{NFSU2_TR(0x6751ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6751ae:{NFSU2_TR(0x6751ae);
if(r1(R+518)){{goto L6751ee;}}
}
B6751b0:L6751b0:{c.instructions+=2;NFSU2_TR(0x6751b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6751b4:{NFSU2_TR(0x6751b4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6751b7:L6751b7:{c.instructions+=9;NFSU2_TR(0x6751b7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6751b9:{NFSU2_TR(0x6751b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6751ba:{NFSU2_TR(0x6751ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6751bb:{NFSU2_TR(0x6751bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6751be:{NFSU2_TR(0x6751be);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6751c1:{NFSU2_TR(0x6751c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6751c4:{NFSU2_TR(0x6751c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6751c6:{NFSU2_TR(0x6751c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6751c9:{NFSU2_TR(0x6751c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6751ceull));
TAIL_STATIC(0x699c39u,699);
}
B6751ce:L6751ce:{c.instructions+=2;NFSU2_TR(0x6751ce);
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
B6751d1:{NFSU2_TR(0x6751d1);
if(r1(R+518)){{goto L6751ee;}}
}
B6751d3:L6751d3:{c.instructions+=4;NFSU2_TR(0x6751d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6751d6:{NFSU2_TR(0x6751d6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6751d9:{NFSU2_TR(0x6751d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6751dd:{NFSU2_TR(0x6751dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751b7u);}goto L6751b7;}}
}
B6751df:L6751df:{c.instructions+=2;NFSU2_TR(0x6751df);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6751e1:{NFSU2_TR(0x6751e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675132u);}goto L675132;}}
}
B6751e7:L6751e7:{c.instructions+=1;NFSU2_TR(0x6751e7);
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
B6751e9:L6751e9:{c.instructions+=5;NFSU2_TR(0x6751e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6751ea:{NFSU2_TR(0x6751ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6751eb:{NFSU2_TR(0x6751eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6751ec:{NFSU2_TR(0x6751ec);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6751ed:{NFSU2_TR(0x6751ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6751ee:L6751ee:{c.instructions+=2;NFSU2_TR(0x6751ee);
w4(R+0,u32(0x8007000eull));
}
B6751f3:{NFSU2_TR(0x6751f3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751e9u);}goto L6751e9;}
}
B6751f5:L6751f5:{c.instructions+=9;NFSU2_TR(0x6751f5);
__builtin_memmove((R+28),(R+28),4);
}
B6751f7:{NFSU2_TR(0x6751f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6751f8:{NFSU2_TR(0x6751f8);
__builtin_memmove((R+20),(R+16),4);
}
B6751fa:{NFSU2_TR(0x6751fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6751fb:{NFSU2_TR(0x6751fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6751fe:{NFSU2_TR(0x6751fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675200:{NFSU2_TR(0x675200);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675201:{NFSU2_TR(0x675201);
__builtin_memmove((R+28),(R+4),4);
}
B675203:{NFSU2_TR(0x675203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675209;}}
}
B675205:L675205:{c.instructions+=2;NFSU2_TR(0x675205);
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
B675207:{NFSU2_TR(0x675207);
{goto L675261;}
}
B675209:L675209:{c.instructions+=3;NFSU2_TR(0x675209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67520c:{NFSU2_TR(0x67520c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B67520f:{NFSU2_TR(0x67520f);
if(r1(R+518)){{goto L67525b;}}
}
B675211:L675211:{c.instructions+=2;NFSU2_TR(0x675211);
w1(R+512,u8((r4(R+0))<(u32(0x5ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B675214:{NFSU2_TR(0x675214);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675205u);}goto L675205;}}
}
B675216:L675216:{c.instructions+=2;NFSU2_TR(0x675216);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B675217:{NFSU2_TR(0x675217);
if(r1(R+518)){{goto L675221;}}
}
B675219:L675219:{c.instructions+=2;NFSU2_TR(0x675219);
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
B67521a:{NFSU2_TR(0x67521a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675205u);}goto L675205;}}
}
B67521c:L67521c:{c.instructions+=2;NFSU2_TR(0x67521c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67521f:{NFSU2_TR(0x67521f);
{goto L675261;}
}
B675221:L675221:{c.instructions+=3;NFSU2_TR(0x675221);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675224:{NFSU2_TR(0x675224);
__builtin_memmove((R+4),(R+28),4);
}
B675226:{NFSU2_TR(0x675226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67522bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751f5u);}goto L6751f5;}
}
B67522b:L67522b:{c.instructions+=2;NFSU2_TR(0x67522b);
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
B67522d:{NFSU2_TR(0x67522d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675261;}}
}
B67522f:L67522f:{c.instructions+=3;NFSU2_TR(0x67522f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675232:{NFSU2_TR(0x675232);
__builtin_memmove((R+4),(R+28),4);
}
B675234:{NFSU2_TR(0x675234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675239ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751f5u);}goto L6751f5;}
}
B675239:L675239:{c.instructions+=2;NFSU2_TR(0x675239);
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
B67523b:{NFSU2_TR(0x67523b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675261;}}
}
B67523d:L67523d:{c.instructions+=3;NFSU2_TR(0x67523d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675240:{NFSU2_TR(0x675240);
__builtin_memmove((R+4),(R+28),4);
}
B675242:{NFSU2_TR(0x675242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675247ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751f5u);}goto L6751f5;}
}
B675247:L675247:{c.instructions+=2;NFSU2_TR(0x675247);
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
B675249:{NFSU2_TR(0x675249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675261;}}
}
B67524b:L67524b:{c.instructions+=3;NFSU2_TR(0x67524b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67524e:{NFSU2_TR(0x67524e);
__builtin_memmove((R+4),(R+28),4);
}
B675250:{NFSU2_TR(0x675250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675255ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751f5u);}goto L6751f5;}
}
B675255:L675255:{c.instructions+=2;NFSU2_TR(0x675255);
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
B675257:{NFSU2_TR(0x675257);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675261;}}
}
B675259:L675259:{c.instructions+=1;NFSU2_TR(0x675259);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675205u);}goto L675205;}
}
B67525b:L67525b:{c.instructions+=2;NFSU2_TR(0x67525b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67525e:{NFSU2_TR(0x67525e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B675261:L675261:{c.instructions+=4;NFSU2_TR(0x675261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B675262:{NFSU2_TR(0x675262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B675263:{NFSU2_TR(0x675263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B675264:{NFSU2_TR(0x675264);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B675267:L675267:{c.instructions+=14;NFSU2_TR(0x675267);
__builtin_memmove((R+28),(R+28),4);
}
B675269:{NFSU2_TR(0x675269);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67526a:{NFSU2_TR(0x67526a);
__builtin_memmove((R+20),(R+16),4);
}
B67526c:{NFSU2_TR(0x67526c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B675272:{NFSU2_TR(0x675272);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675273:{NFSU2_TR(0x675273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675276:{NFSU2_TR(0x675276);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B675279:{NFSU2_TR(0x675279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67527a:{NFSU2_TR(0x67527a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67527d:{NFSU2_TR(0x67527d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B675283:{NFSU2_TR(0x675283);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675288:{NFSU2_TR(0x675288);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675289:{NFSU2_TR(0x675289);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B675290:{NFSU2_TR(0x675290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675295ull));
TAIL_STATIC(0x75e02bu,75e);
}
B675295:L675295:{c.instructions+=9;NFSU2_TR(0x675295);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B675298:{NFSU2_TR(0x675298);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67529e:{NFSU2_TR(0x67529e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67529f:{NFSU2_TR(0x67529f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752a4:{NFSU2_TR(0x6752a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6752a7:{NFSU2_TR(0x6752a7);
__builtin_memmove((R+4),(R+24),4);
}
B6752a9:{NFSU2_TR(0x6752a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6752ac:{NFSU2_TR(0x6752ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6752b0:{NFSU2_TR(0x6752b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6752b5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751f5u);}goto L6751f5;}
}
B6752b5:L6752b5:{c.instructions+=5;NFSU2_TR(0x6752b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752b6:{NFSU2_TR(0x6752b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6752b8:{NFSU2_TR(0x6752b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B6752bb:{NFSU2_TR(0x6752bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752bc:{NFSU2_TR(0x6752bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6752c1ull));
TAIL_STATIC(0x64307cu,643);
}
B6752c1:L6752c1:{c.instructions+=5;NFSU2_TR(0x6752c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6752c4:{NFSU2_TR(0x6752c4);
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
B6752c6:{NFSU2_TR(0x6752c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6752c7:{NFSU2_TR(0x6752c7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6752c8:{NFSU2_TR(0x6752c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6752c9:L6752c9:{c.instructions+=11;NFSU2_TR(0x6752c9);
__builtin_memmove((R+28),(R+28),4);
}
B6752cb:{NFSU2_TR(0x6752cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752cc:{NFSU2_TR(0x6752cc);
__builtin_memmove((R+20),(R+16),4);
}
B6752ce:{NFSU2_TR(0x6752ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B6752d4:{NFSU2_TR(0x6752d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6752d7:{NFSU2_TR(0x6752d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752d8:{NFSU2_TR(0x6752d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6752db:{NFSU2_TR(0x6752db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6752e1:{NFSU2_TR(0x6752e1);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752e6:{NFSU2_TR(0x6752e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752e7:{NFSU2_TR(0x6752e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6752ecull));
TAIL_STATIC(0x75e02bu,75e);
}
B6752ec:L6752ec:{c.instructions+=10;NFSU2_TR(0x6752ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6752ef:{NFSU2_TR(0x6752ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6752f2:{NFSU2_TR(0x6752f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6752f8:{NFSU2_TR(0x6752f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752f9:{NFSU2_TR(0x6752f9);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6752fe:{NFSU2_TR(0x6752fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675301:{NFSU2_TR(0x675301);
__builtin_memmove((R+4),(R+8),4);
}
B675303:{NFSU2_TR(0x675303);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675306:{NFSU2_TR(0x675306);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B67530a:{NFSU2_TR(0x67530a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67530full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6751f5u);}goto L6751f5;}
}
B67530f:L67530f:{c.instructions+=5;NFSU2_TR(0x67530f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675310:{NFSU2_TR(0x675310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675312:{NFSU2_TR(0x675312);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B675315:{NFSU2_TR(0x675315);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675316:{NFSU2_TR(0x675316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67531bull));
TAIL_STATIC(0x643143u,643);
}
B67531b:L67531b:{c.instructions+=4;NFSU2_TR(0x67531b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B67531e:{NFSU2_TR(0x67531e);
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
B675320:{NFSU2_TR(0x675320);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B675321:{NFSU2_TR(0x675321);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B675322:L675322:{c.instructions+=20;NFSU2_TR(0x675322);
__builtin_memmove((R+28),(R+28),4);
}
B675324:{NFSU2_TR(0x675324);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675325:{NFSU2_TR(0x675325);
__builtin_memmove((R+20),(R+16),4);
}
B675327:{NFSU2_TR(0x675327);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67532a:{NFSU2_TR(0x67532a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67532d:{NFSU2_TR(0x67532d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675330:{NFSU2_TR(0x675330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675333:{NFSU2_TR(0x675333);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675334:{NFSU2_TR(0x675334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B675337:{NFSU2_TR(0x675337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675338:{NFSU2_TR(0x675338);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675339:{NFSU2_TR(0x675339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67533c:{NFSU2_TR(0x67533c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67533f:{NFSU2_TR(0x67533f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675342:{NFSU2_TR(0x675342);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B675345:{NFSU2_TR(0x675345);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675348:{NFSU2_TR(0x675348);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67534b:{NFSU2_TR(0x67534b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67534e:{NFSU2_TR(0x67534e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675350:{NFSU2_TR(0x675350);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L675357;}}
}
B675352:L675352:{c.instructions+=2;NFSU2_TR(0x675352);
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
B675355:{NFSU2_TR(0x675355);
{goto L675372;}
}
B675357:L675357:{c.instructions+=1;NFSU2_TR(0x675357);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67535e;}}
}
B675359:L675359:{c.instructions+=3;NFSU2_TR(0x675359);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67535b:{NFSU2_TR(0x67535b);
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
B67535c:{NFSU2_TR(0x67535c);
{goto L675372;}
}
B67535e:L67535e:{c.instructions+=4;NFSU2_TR(0x67535e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675361:{NFSU2_TR(0x675361);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675364:{NFSU2_TR(0x675364);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675366:{NFSU2_TR(0x675366);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675352u);}goto L675352;}}
}
B675368:L675368:{c.instructions+=1;NFSU2_TR(0x675368);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675359u);}goto L675359;}}
}
B67536a:L67536a:{c.instructions+=2;NFSU2_TR(0x67536a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67536c:{NFSU2_TR(0x67536c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675352u);}goto L675352;}}
}
B67536e:L67536e:{c.instructions+=2;NFSU2_TR(0x67536e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B675370:{NFSU2_TR(0x675370);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B675372:L675372:{c.instructions+=5;NFSU2_TR(0x675372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B675373:{NFSU2_TR(0x675373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B675374:{NFSU2_TR(0x675374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B675375:{NFSU2_TR(0x675375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B675376:{NFSU2_TR(0x675376);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B675379:L675379:{c.instructions+=6;NFSU2_TR(0x675379);
__builtin_memmove((R+28),(R+28),4);
}
B67537b:{NFSU2_TR(0x67537b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67537c:{NFSU2_TR(0x67537c);
__builtin_memmove((R+24),(R+4),4);
}
B67537e:{NFSU2_TR(0x67537e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675381:{NFSU2_TR(0x675381);
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
B675383:{NFSU2_TR(0x675383);
if(r1(R+518)){{goto L67538b;}}
}
B675385:L675385:{c.instructions+=3;NFSU2_TR(0x675385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675387:{NFSU2_TR(0x675387);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675389:{NFSU2_TR(0x675389);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67538bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B67538b:L67538b:{c.instructions+=2;NFSU2_TR(0x67538b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67538e:{NFSU2_TR(0x67538e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675393ull));
TAIL_STATIC(0x575630u,575);
}
B675393:L675393:{c.instructions+=2;NFSU2_TR(0x675393);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675399:{NFSU2_TR(0x675399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67539eull));
TAIL_STATIC(0x575630u,575);
}
B67539e:L67539e:{c.instructions+=2;NFSU2_TR(0x67539e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6753a4:{NFSU2_TR(0x6753a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6753a9ull));
TAIL_STATIC(0x575630u,575);
}
B6753a9:L6753a9:{c.instructions+=2;NFSU2_TR(0x6753a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6753af:{NFSU2_TR(0x6753af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6753b4ull));
TAIL_STATIC(0x575630u,575);
}
B6753b4:L6753b4:{c.instructions+=3;NFSU2_TR(0x6753b4);
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
B6753b7:{NFSU2_TR(0x6753b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6753b8:{NFSU2_TR(0x6753b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6753b9:L6753b9:{c.instructions+=12;NFSU2_TR(0x6753b9);
__builtin_memmove((R+28),(R+28),4);
}
B6753bb:{NFSU2_TR(0x6753bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6753bc:{NFSU2_TR(0x6753bc);
__builtin_memmove((R+20),(R+16),4);
}
B6753be:{NFSU2_TR(0x6753be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6753bf:{NFSU2_TR(0x6753bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6753c0:{NFSU2_TR(0x6753c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6753c3:{NFSU2_TR(0x6753c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6753c4:{NFSU2_TR(0x6753c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6753c6:{NFSU2_TR(0x6753c6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6753c8:{NFSU2_TR(0x6753c8);
__builtin_memmove((R+8),(R+4),4);
}
B6753ca:{NFSU2_TR(0x6753ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6753cd:{NFSU2_TR(0x6753cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6753d6;}}
}
B6753cf:L6753cf:{c.instructions+=2;NFSU2_TR(0x6753cf);
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
B6753d1:{NFSU2_TR(0x6753d1);
{goto L6754ec;}
}
B6753d6:L6753d6:{c.instructions+=5;NFSU2_TR(0x6753d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6753d9:{NFSU2_TR(0x6753d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6753da:{NFSU2_TR(0x6753da);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6753dc:{NFSU2_TR(0x6753dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6753dd:{NFSU2_TR(0x6753dd);
if(r1(R+518)){{goto L6754b5;}}
}
B6753e3:L6753e3:{c.instructions+=2;NFSU2_TR(0x6753e3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6753e6:{NFSU2_TR(0x6753e6);
if(r1(R+518)){{goto L6754aa;}}
}
B6753ec:L6753ec:{c.instructions+=3;NFSU2_TR(0x6753ec);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6753ed:{NFSU2_TR(0x6753ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6753ee:{NFSU2_TR(0x6753ee);
if(r1(R+518)){{goto L675489;}}
}
B6753f4:L6753f4:{c.instructions+=2;NFSU2_TR(0x6753f4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6753f5:{NFSU2_TR(0x6753f5);
if(r1(R+518)){{goto L675424;}}
}
B6753f7:L6753f7:{c.instructions+=3;NFSU2_TR(0x6753f7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6753f8:{NFSU2_TR(0x6753f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6753f9:{NFSU2_TR(0x6753f9);
if(r1(R+518)){{goto L675410;}}
}
B6753fb:L6753fb:{c.instructions+=5;NFSU2_TR(0x6753fb);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675400:{NFSU2_TR(0x675400);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675401:{NFSU2_TR(0x675401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675402:{NFSU2_TR(0x675402);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675403:{NFSU2_TR(0x675403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675408ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675267u);}goto L675267;}
}
B675408:L675408:{c.instructions+=2;NFSU2_TR(0x675408);
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
B67540b:{NFSU2_TR(0x67540b);
{goto L6754e9;}
}
B675410:L675410:{c.instructions+=2;NFSU2_TR(0x675410);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675413:{NFSU2_TR(0x675413);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675416:L675416:{c.instructions+=2;NFSU2_TR(0x675416);
__builtin_memmove((R+4),(R+8),4);
}
B675418:{NFSU2_TR(0x675418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67541dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6753b9u);}goto L6753b9;}
}
B67541d:L67541d:{c.instructions+=2;NFSU2_TR(0x67541d);
__builtin_memmove((R+12),(R+0),4);
}
B67541f:{NFSU2_TR(0x67541f);
{goto L6754e9;}
}
B675424:L675424:{c.instructions+=7;NFSU2_TR(0x675424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B675427:{NFSU2_TR(0x675427);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B67542b:{NFSU2_TR(0x67542b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67542e:{NFSU2_TR(0x67542e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675430:{NFSU2_TR(0x675430);
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
B675433:{NFSU2_TR(0x675433);
w4(R+4,u32(0x2000000ull));
}
B675438:{NFSU2_TR(0x675438);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L67546f;}}
}
B67543a:L67543a:{c.instructions+=1;NFSU2_TR(0x67543a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6754f2ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B675441:L675441:{c.instructions+=2;NFSU2_TR(0x675441);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675443:{NFSU2_TR(0x675443);
{goto L675447;}
}
B675445:L675445:{c.instructions+=1;NFSU2_TR(0x675445);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675447:L675447:{c.instructions+=2;NFSU2_TR(0x675447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B675448:{NFSU2_TR(0x675448);
{goto L67546f;}
}
B67544a:L67544a:{c.instructions+=2;NFSU2_TR(0x67544a);
w4(R+0,u32(0x2000002ull));
}
B67544f:{NFSU2_TR(0x67544f);
{goto L67546f;}
}
B675451:L675451:{c.instructions+=2;NFSU2_TR(0x675451);
w4(R+0,u32(0x4000002ull));
}
B675456:{NFSU2_TR(0x675456);
{goto L67546f;}
}
B675458:L675458:{c.instructions+=2;NFSU2_TR(0x675458);
w4(R+0,u32(0x8000002ull));
}
B67545d:{NFSU2_TR(0x67545d);
{goto L67546f;}
}
B67545f:L67545f:{c.instructions+=2;NFSU2_TR(0x67545f);
__builtin_memmove((R+0),(R+4),4);
}
B675461:{NFSU2_TR(0x675461);
{goto L67546f;}
}
B675463:L675463:{c.instructions+=2;NFSU2_TR(0x675463);
w4(R+0,u32(0x4000000ull));
}
B675468:{NFSU2_TR(0x675468);
{goto L67546f;}
}
B67546a:L67546a:{c.instructions+=1;NFSU2_TR(0x67546a);
w4(R+0,u32(0x8000000ull));
}
B67546f:L67546f:{c.instructions+=2;NFSU2_TR(0x67546f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B675473:{NFSU2_TR(0x675473);
if(r1(R+518)){{goto L67547c;}}
}
B675475:L675475:{c.instructions+=2;NFSU2_TR(0x675475);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf3ffffffull))));
}
B67547a:{NFSU2_TR(0x67547a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B67547c:L67547c:{c.instructions+=2;NFSU2_TR(0x67547c);
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
B67547e:{NFSU2_TR(0x67547e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6754e9;}}
}
B675480:L675480:{c.instructions+=2;NFSU2_TR(0x675480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675483:{NFSU2_TR(0x675483);
__builtin_memmove((R+4),(R+12),4);
}
B675485:L675485:{c.instructions+=1;NFSU2_TR(0x675485);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L675487;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675485u);}goto L675485;}
}
B675487:L675487:{c.instructions+=1;NFSU2_TR(0x675487);
{goto L6754e9;}
}
B675489:L675489:{c.instructions+=2;NFSU2_TR(0x675489);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
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
B67548c:{NFSU2_TR(0x67548c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6754e9;}}
}
B67548e:L67548e:{c.instructions+=6;NFSU2_TR(0x67548e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675491:{NFSU2_TR(0x675491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675494:{NFSU2_TR(0x675494);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B675497:{NFSU2_TR(0x675497);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675498:{NFSU2_TR(0x675498);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67549b:{NFSU2_TR(0x67549b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6754a0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6753b9u);}goto L6753b9;}
}
B6754a0:L6754a0:{c.instructions+=4;NFSU2_TR(0x6754a0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6754a2:{NFSU2_TR(0x6754a2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6754a3:{NFSU2_TR(0x6754a3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6754a6:{NFSU2_TR(0x6754a6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67548eu);}goto L67548e;}}
}
B6754a8:L6754a8:{c.instructions+=1;NFSU2_TR(0x6754a8);
{goto L6754e9;}
}
B6754aa:L6754aa:{c.instructions+=3;NFSU2_TR(0x6754aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6754ad:{NFSU2_TR(0x6754ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6754b0:{NFSU2_TR(0x6754b0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675416u);}goto L675416;}
}
B6754b5:L6754b5:{c.instructions+=1;NFSU2_TR(0x6754b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6754b8:L6754b8:{c.instructions+=2;NFSU2_TR(0x6754b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6754bc:{NFSU2_TR(0x6754bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6754d6;}}
}
B6754be:L6754be:{c.instructions+=5;NFSU2_TR(0x6754be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6754c1:{NFSU2_TR(0x6754c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6754c4:{NFSU2_TR(0x6754c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6754c5:{NFSU2_TR(0x6754c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6754c8:{NFSU2_TR(0x6754c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6754cdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6753b9u);}goto L6753b9;}
}
B6754cd:L6754cd:{c.instructions+=4;NFSU2_TR(0x6754cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6754d0:{NFSU2_TR(0x6754d0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6754d2:{NFSU2_TR(0x6754d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6754d4:{NFSU2_TR(0x6754d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6754b8u);}goto L6754b8;}}
}
B6754d6:L6754d6:{c.instructions+=2;NFSU2_TR(0x6754d6);
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
B6754d8:{NFSU2_TR(0x6754d8);
if(r1(R+518)){{goto L6754e9;}}
}
B6754da:L6754da:{c.instructions+=5;NFSU2_TR(0x6754da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6754dd:{NFSU2_TR(0x6754dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6754e0:{NFSU2_TR(0x6754e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6754e1:{NFSU2_TR(0x6754e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6754e2:{NFSU2_TR(0x6754e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6754e7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6753b9u);}goto L6753b9;}
}
B6754e7:L6754e7:{c.instructions+=1;NFSU2_TR(0x6754e7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+12),r4(R+0)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6754e9:L6754e9:{c.instructions+=2;NFSU2_TR(0x6754e9);
__builtin_memmove((R+0),(R+12),4);
}
B6754eb:{NFSU2_TR(0x6754eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6754ec:L6754ec:{c.instructions+=4;NFSU2_TR(0x6754ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6754ed:{NFSU2_TR(0x6754ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6754ee:{NFSU2_TR(0x6754ee);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6754ef:{NFSU2_TR(0x6754ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B675526:L675526:{c.instructions+=14;NFSU2_TR(0x675526);
__builtin_memmove((R+28),(R+28),4);
}
B675528:{NFSU2_TR(0x675528);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675529:{NFSU2_TR(0x675529);
__builtin_memmove((R+20),(R+16),4);
}
B67552b:{NFSU2_TR(0x67552b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67552c:{NFSU2_TR(0x67552c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67552d:{NFSU2_TR(0x67552d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67552e:{NFSU2_TR(0x67552e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B675530:{NFSU2_TR(0x675530);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675533:{NFSU2_TR(0x675533);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675534:{NFSU2_TR(0x675534);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675535:{NFSU2_TR(0x675535);
__builtin_memmove((R+28),(R+4),4);
}
B675537:{NFSU2_TR(0x675537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67553a:{NFSU2_TR(0x67553a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67553d:{NFSU2_TR(0x67553d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675545;}}
}
B67553f:L67553f:{c.instructions+=2;NFSU2_TR(0x67553f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B675542:{NFSU2_TR(0x675542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675545:L675545:{c.instructions+=3;NFSU2_TR(0x675545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675548:{NFSU2_TR(0x675548);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67554a:{NFSU2_TR(0x67554a);
if(r1(R+518)){{goto L67571d;}}
}
B675550:L675550:{c.instructions+=3;NFSU2_TR(0x675550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675553:{NFSU2_TR(0x675553);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B675554:{NFSU2_TR(0x675554);
if(r1(R+518)){{goto L6756c5;}}
}
B67555a:L67555a:{c.instructions+=2;NFSU2_TR(0x67555a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B67555d:{NFSU2_TR(0x67555d);
if(r1(R+518)){{goto L6756a0;}}
}
B675563:L675563:{c.instructions+=3;NFSU2_TR(0x675563);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B675564:{NFSU2_TR(0x675564);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B675565:{NFSU2_TR(0x675565);
if(r1(R+518)){{goto L675615;}}
}
B67556b:L67556b:{c.instructions+=2;NFSU2_TR(0x67556b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B67556c:{NFSU2_TR(0x67556c);
if(r1(R+518)){{goto L6755ba;}}
}
B67556e:L67556e:{c.instructions+=3;NFSU2_TR(0x67556e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B67556f:{NFSU2_TR(0x67556f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B675570:{NFSU2_TR(0x675570);
if(r1(R+518)){{goto L675587;}}
}
B675572:L675572:{c.instructions+=5;NFSU2_TR(0x675572);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675577:{NFSU2_TR(0x675577);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675578:{NFSU2_TR(0x675578);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675579:{NFSU2_TR(0x675579);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67557a:{NFSU2_TR(0x67557a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67557full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675267u);}goto L675267;}
}
B67557f:L67557f:{c.instructions+=2;NFSU2_TR(0x67557f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B675582:{NFSU2_TR(0x675582);
{goto L67571d;}
}
B675587:L675587:{c.instructions+=13;NFSU2_TR(0x675587);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67558a:{NFSU2_TR(0x67558a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67558b:{NFSU2_TR(0x67558b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67558e:{NFSU2_TR(0x67558e);
__builtin_memmove((R+4),(R+28),4);
}
B675590:{NFSU2_TR(0x675590);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675593:{NFSU2_TR(0x675593);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675596:{NFSU2_TR(0x675596);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675599:{NFSU2_TR(0x675599);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67559c:{NFSU2_TR(0x67559c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67559f:{NFSU2_TR(0x67559f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6755a2:{NFSU2_TR(0x6755a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6755a5:{NFSU2_TR(0x6755a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6755a8:{NFSU2_TR(0x6755a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6755adull));
TAIL_STATIC(0x67614bu,676);
}
B6755ad:L6755ad:{c.instructions+=2;NFSU2_TR(0x6755ad);
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
B6755af:{NFSU2_TR(0x6755af);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67571d;}}
}
B6755b5:L6755b5:{c.instructions+=1;NFSU2_TR(0x6755b5);
{goto L67572b;}
}
B6755ba:L6755ba:{c.instructions+=2;NFSU2_TR(0x6755ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6755be:{NFSU2_TR(0x6755be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6755f0;}}
}
B6755c0:L6755c0:{c.instructions+=2;NFSU2_TR(0x6755c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6755c3:{NFSU2_TR(0x6755c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6755e0;}}
}
B6755c5:L6755c5:{c.instructions+=6;NFSU2_TR(0x6755c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6755c8:{NFSU2_TR(0x6755c8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6755ca:{NFSU2_TR(0x6755ca);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6755cc:{NFSU2_TR(0x6755cc);
u8 U[4];
w4(U+0,u32(0x2d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6755d1:{NFSU2_TR(0x6755d1);
u8 U[4];
w4(U+0,u32(0x7b3b24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6755d6:{NFSU2_TR(0x6755d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6755dbull));
TAIL_STATIC(0x699be0u,699);
}
B6755db:L6755db:{c.instructions+=2;NFSU2_TR(0x6755db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6755de:{NFSU2_TR(0x6755de);
{goto L6755f0;}
}
B6755e0:L6755e0:{c.instructions+=5;NFSU2_TR(0x6755e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6755e3:{NFSU2_TR(0x6755e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6755e6:{NFSU2_TR(0x6755e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6755e9:{NFSU2_TR(0x6755e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6755ec:{NFSU2_TR(0x6755ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6755f0:L6755f0:{c.instructions+=12;NFSU2_TR(0x6755f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6755f3:{NFSU2_TR(0x6755f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6755f4:{NFSU2_TR(0x6755f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6755f7:{NFSU2_TR(0x6755f7);
__builtin_memmove((R+4),(R+28),4);
}
B6755f9:{NFSU2_TR(0x6755f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6755fc:{NFSU2_TR(0x6755fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6755ff:{NFSU2_TR(0x6755ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675602:{NFSU2_TR(0x675602);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675605:{NFSU2_TR(0x675605);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675608:{NFSU2_TR(0x675608);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67560b:{NFSU2_TR(0x67560b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67560e:{NFSU2_TR(0x67560e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675613ull));
TAIL_STATIC(0x673b48u,673);
}
B675613:L675613:{c.instructions+=1;NFSU2_TR(0x675613);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6755adu);}goto L6755ad;}
}
B675615:L675615:{c.instructions+=2;NFSU2_TR(0x675615);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675618:{NFSU2_TR(0x675618);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675659;}}
}
B67561a:L67561a:{c.instructions+=1;NFSU2_TR(0x67561a);
__builtin_memmove((R+0),(R+24),4);
}
B67561c:L67561c:{c.instructions+=2;NFSU2_TR(0x67561c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675620:{NFSU2_TR(0x675620);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675629;}}
}
B675622:L675622:{c.instructions+=3;NFSU2_TR(0x675622);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675625:{NFSU2_TR(0x675625);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675627:{NFSU2_TR(0x675627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67561cu);}goto L67561c;}}
}
B675629:L675629:{c.instructions+=2;NFSU2_TR(0x675629);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67562b:{NFSU2_TR(0x67562b);
if(r1(R+518)){{goto L675659;}}
}
B67562d:L67562d:{c.instructions+=2;NFSU2_TR(0x67562d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675631:{NFSU2_TR(0x675631);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675659;}}
}
B675633:L675633:{c.instructions+=2;NFSU2_TR(0x675633);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675637:{NFSU2_TR(0x675637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675659;}}
}
B675639:L675639:{c.instructions+=6;NFSU2_TR(0x675639);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67563c:{NFSU2_TR(0x67563c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67563e:{NFSU2_TR(0x67563e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675640:{NFSU2_TR(0x675640);
u8 U[4];
w4(U+0,u32(0x2d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675645:{NFSU2_TR(0x675645);
u8 U[4];
w4(U+0,u32(0x7b3b24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67564a:{NFSU2_TR(0x67564a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67564full));
TAIL_STATIC(0x699be0u,699);
}
B67564f:L67564f:{c.instructions+=2;NFSU2_TR(0x67564f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675652:{NFSU2_TR(0x675652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B675659:L675659:{c.instructions+=2;NFSU2_TR(0x675659);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67565d:{NFSU2_TR(0x67565d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67571d;}}
}
B675663:L675663:{c.instructions+=14;NFSU2_TR(0x675663);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675666:{NFSU2_TR(0x675666);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B675669:{NFSU2_TR(0x675669);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67566a:{NFSU2_TR(0x67566a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67566d:{NFSU2_TR(0x67566d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675670:{NFSU2_TR(0x675670);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675673:{NFSU2_TR(0x675673);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B675676:{NFSU2_TR(0x675676);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675679:{NFSU2_TR(0x675679);
__builtin_memmove((R+4),(R+28),4);
}
B67567b:{NFSU2_TR(0x67567b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67567e:{NFSU2_TR(0x67567e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675681:{NFSU2_TR(0x675681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675682:{NFSU2_TR(0x675682);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675685:{NFSU2_TR(0x675685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67568aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675526u);}goto L675526;}
}
B67568a:L67568a:{c.instructions+=2;NFSU2_TR(0x67568a);
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
B67568c:{NFSU2_TR(0x67568c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67572b;}}
}
B675692:L675692:{c.instructions+=5;NFSU2_TR(0x675692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675695:{NFSU2_TR(0x675695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B675698:{NFSU2_TR(0x675698);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B675699:{NFSU2_TR(0x675699);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B67569c:{NFSU2_TR(0x67569c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675663u);}goto L675663;}}
}
B67569e:L67569e:{c.instructions+=1;NFSU2_TR(0x67569e);
{goto L67571d;}
}
B6756a0:L6756a0:{c.instructions+=11;NFSU2_TR(0x6756a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6756a3:{NFSU2_TR(0x6756a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6756a4:{NFSU2_TR(0x6756a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756a7:{NFSU2_TR(0x6756a7);
__builtin_memmove((R+4),(R+28),4);
}
B6756a9:{NFSU2_TR(0x6756a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756ac:{NFSU2_TR(0x6756ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756af:{NFSU2_TR(0x6756af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756b2:{NFSU2_TR(0x6756b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756b5:{NFSU2_TR(0x6756b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756b8:{NFSU2_TR(0x6756b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756bb:{NFSU2_TR(0x6756bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6756c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675526u);}goto L675526;}
}
B6756c0:L6756c0:{c.instructions+=1;NFSU2_TR(0x6756c0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6755adu);}goto L6755ad;}
}
B6756c5:L6756c5:{c.instructions+=12;NFSU2_TR(0x6756c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6756c8:{NFSU2_TR(0x6756c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6756cb:{NFSU2_TR(0x6756cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6756cc:{NFSU2_TR(0x6756cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756cf:{NFSU2_TR(0x6756cf);
__builtin_memmove((R+4),(R+28),4);
}
B6756d1:{NFSU2_TR(0x6756d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756d4:{NFSU2_TR(0x6756d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756d7:{NFSU2_TR(0x6756d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756da:{NFSU2_TR(0x6756da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756dd:{NFSU2_TR(0x6756dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6756de:{NFSU2_TR(0x6756de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756e1:{NFSU2_TR(0x6756e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6756e6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675526u);}goto L675526;}
}
B6756e6:L6756e6:{c.instructions+=2;NFSU2_TR(0x6756e6);
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
B6756e8:{NFSU2_TR(0x6756e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67572b;}}
}
B6756ea:L6756ea:{c.instructions+=13;NFSU2_TR(0x6756ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6756ed:{NFSU2_TR(0x6756ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6756ee:{NFSU2_TR(0x6756ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756f1:{NFSU2_TR(0x6756f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6756f4:{NFSU2_TR(0x6756f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756f7:{NFSU2_TR(0x6756f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6756fa:{NFSU2_TR(0x6756fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6756fd:{NFSU2_TR(0x6756fd);
__builtin_memmove((R+4),(R+28),4);
}
B6756ff:{NFSU2_TR(0x6756ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675702:{NFSU2_TR(0x675702);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675705:{NFSU2_TR(0x675705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675706:{NFSU2_TR(0x675706);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675709:{NFSU2_TR(0x675709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67570eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675526u);}goto L675526;}
}
B67570e:L67570e:{c.instructions+=2;NFSU2_TR(0x67570e);
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
B675710:{NFSU2_TR(0x675710);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67572b;}}
}
B675712:L675712:{c.instructions+=4;NFSU2_TR(0x675712);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675715:{NFSU2_TR(0x675715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675718:{NFSU2_TR(0x675718);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B67571a:{NFSU2_TR(0x67571a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67571d:L67571d:{c.instructions+=3;NFSU2_TR(0x67571d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675720:{NFSU2_TR(0x675720);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675722:{NFSU2_TR(0x675722);
if(r1(R+518)){{goto L675729;}}
}
B675724:L675724:{c.instructions+=2;NFSU2_TR(0x675724);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675727:{NFSU2_TR(0x675727);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B675729:L675729:{c.instructions+=1;NFSU2_TR(0x675729);
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
B67572b:L67572b:{c.instructions+=5;NFSU2_TR(0x67572b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67572c:{NFSU2_TR(0x67572c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67572d:{NFSU2_TR(0x67572d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67572e:{NFSU2_TR(0x67572e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B67572f:{NFSU2_TR(0x67572f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B675732:L675732:{c.instructions+=11;NFSU2_TR(0x675732);
__builtin_memmove((R+28),(R+28),4);
}
B675734:{NFSU2_TR(0x675734);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675735:{NFSU2_TR(0x675735);
__builtin_memmove((R+20),(R+16),4);
}
B675737:{NFSU2_TR(0x675737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B67573a:{NFSU2_TR(0x67573a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67573d:{NFSU2_TR(0x67573d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675740:{NFSU2_TR(0x675740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675743:{NFSU2_TR(0x675743);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675744:{NFSU2_TR(0x675744);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B675747:{NFSU2_TR(0x675747);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B67574a:{NFSU2_TR(0x67574a);
if(r1(R+518)){{goto L67576b;}}
}
B67574c:L67574c:{c.instructions+=5;NFSU2_TR(0x67574c);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67574f:{NFSU2_TR(0x67574f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675750:{NFSU2_TR(0x675750);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675751:{NFSU2_TR(0x675751);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B675754:{NFSU2_TR(0x675754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675759ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B675759:L675759:{c.instructions+=4;NFSU2_TR(0x675759);
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
B67575b:{NFSU2_TR(0x67575b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67575c:{NFSU2_TR(0x67575c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67575d:{NFSU2_TR(0x67575d);
if(r1(R+518)){{goto L6757ab;}}
}
B67575f:L67575f:{c.instructions+=3;NFSU2_TR(0x67575f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675762:{NFSU2_TR(0x675762);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675764:{NFSU2_TR(0x675764);
if(r1(R+518)){{goto L6757a7;}}
}
B675766:L675766:{c.instructions+=2;NFSU2_TR(0x675766);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B675769:{NFSU2_TR(0x675769);
{goto L6757a5;}
}
B67576b:L67576b:{c.instructions+=4;NFSU2_TR(0x67576b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B67576e:{NFSU2_TR(0x67576e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67576f:{NFSU2_TR(0x67576f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675770:{NFSU2_TR(0x675770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675775ull));
TAIL_STATIC(0x673e90u,673);
}
B675775:L675775:{c.instructions+=2;NFSU2_TR(0x675775);
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
B675777:{NFSU2_TR(0x675777);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6757b0;}}
}
B675779:L675779:{c.instructions+=6;NFSU2_TR(0x675779);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67577c:{NFSU2_TR(0x67577c);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67577f:{NFSU2_TR(0x67577f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B675781:{NFSU2_TR(0x675781);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B675783:{NFSU2_TR(0x675783);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B675786:{NFSU2_TR(0x675786);
if(r1(R+514)){{goto L6757ab;}}
}
B675788:L675788:{c.instructions+=5;NFSU2_TR(0x675788);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67578b:{NFSU2_TR(0x67578b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67578c:{NFSU2_TR(0x67578c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67578d:{NFSU2_TR(0x67578d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B675790:{NFSU2_TR(0x675790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675795ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B675795:L675795:{c.instructions+=4;NFSU2_TR(0x675795);
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
B675797:{NFSU2_TR(0x675797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B675798:{NFSU2_TR(0x675798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B675799:{NFSU2_TR(0x675799);
if(r1(R+518)){{goto L6757ab;}}
}
B67579b:L67579b:{c.instructions+=3;NFSU2_TR(0x67579b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67579e:{NFSU2_TR(0x67579e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6757a0:{NFSU2_TR(0x6757a0);
if(r1(R+518)){{goto L6757a7;}}
}
B6757a2:L6757a2:{c.instructions+=1;NFSU2_TR(0x6757a2);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6757a5:L6757a5:{c.instructions+=1;NFSU2_TR(0x6757a5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6757a7:L6757a7:{c.instructions+=2;NFSU2_TR(0x6757a7);
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
B6757a9:{NFSU2_TR(0x6757a9);
{goto L6757b0;}
}
B6757ab:L6757ab:{c.instructions+=1;NFSU2_TR(0x6757ab);
w4(R+0,u32(0x80004005ull));
}
B6757b0:L6757b0:{c.instructions+=3;NFSU2_TR(0x6757b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6757b1:{NFSU2_TR(0x6757b1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6757b2:{NFSU2_TR(0x6757b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6757b5:L6757b5:{c.instructions+=7;NFSU2_TR(0x6757b5);
__builtin_memmove((R+28),(R+28),4);
}
B6757b7:{NFSU2_TR(0x6757b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6757b8:{NFSU2_TR(0x6757b8);
__builtin_memmove((R+20),(R+16),4);
}
B6757ba:{NFSU2_TR(0x6757ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6757bb:{NFSU2_TR(0x6757bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6757bc:{NFSU2_TR(0x6757bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6757bf:{NFSU2_TR(0x6757bf);
__builtin_memmove((R+12),(R+4),4);
}
B6757c1:L6757c1:{c.instructions+=2;NFSU2_TR(0x6757c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6757c3:{NFSU2_TR(0x6757c3);
if(r1(R+518)){{goto L675803;}}
}
B6757c5:L6757c5:{c.instructions+=3;NFSU2_TR(0x6757c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6757c8:{NFSU2_TR(0x6757c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6757cb:{NFSU2_TR(0x6757cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6757e0;}}
}
B6757cd:L6757cd:{c.instructions+=3;NFSU2_TR(0x6757cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6757d0:{NFSU2_TR(0x6757d0);
__builtin_memmove((R+4),(R+12),4);
}
B6757d2:{NFSU2_TR(0x6757d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6757d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6757b5u);}goto L6757b5;}
}
B6757d7:L6757d7:{c.instructions+=2;NFSU2_TR(0x6757d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6757d9:{NFSU2_TR(0x6757d9);
if(r1(R+518)){{goto L675828;}}
}
B6757db:L6757db:{c.instructions+=2;NFSU2_TR(0x6757db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6757de:{NFSU2_TR(0x6757de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6757c1u);}goto L6757c1;}
}
B6757e0:L6757e0:{c.instructions+=2;NFSU2_TR(0x6757e0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6757e3:{NFSU2_TR(0x6757e3);
if(r1(R+518)){{goto L6757fe;}}
}
B6757e5:L6757e5:{c.instructions+=3;NFSU2_TR(0x6757e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6757e6:{NFSU2_TR(0x6757e6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6757e7:{NFSU2_TR(0x6757e7);
if(r1(R+518)){{goto L6757f4;}}
}
B6757e9:L6757e9:{c.instructions+=2;NFSU2_TR(0x6757e9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6757ea:{NFSU2_TR(0x6757ea);
if(r1(R+518)){{goto L67581c;}}
}
B6757ec:L6757ec:{c.instructions+=3;NFSU2_TR(0x6757ec);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6757ed:{NFSU2_TR(0x6757ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6757ee:{NFSU2_TR(0x6757ee);
if(r1(R+518)){{goto L6757f9;}}
}
B6757f0:L6757f0:{c.instructions+=3;NFSU2_TR(0x6757f0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6757f1:{NFSU2_TR(0x6757f1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6757f2:{NFSU2_TR(0x6757f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675808;}}
}
B6757f4:L6757f4:{c.instructions+=2;NFSU2_TR(0x6757f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6757f7:{NFSU2_TR(0x6757f7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6757c1u);}goto L6757c1;}
}
B6757f9:L6757f9:{c.instructions+=2;NFSU2_TR(0x6757f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6757fc:{NFSU2_TR(0x6757fc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6757c1u);}goto L6757c1;}
}
B6757fe:L6757fe:{c.instructions+=2;NFSU2_TR(0x6757fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675801:{NFSU2_TR(0x675801);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6757c1u);}goto L6757c1;}
}
B675803:L675803:{c.instructions+=3;NFSU2_TR(0x675803);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675805:{NFSU2_TR(0x675805);
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
B675806:{NFSU2_TR(0x675806);
{goto L67582a;}
}
B675808:L675808:{c.instructions+=5;NFSU2_TR(0x675808);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67580d:{NFSU2_TR(0x67580d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67580f:{NFSU2_TR(0x67580f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675811:{NFSU2_TR(0x675811);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675812:{NFSU2_TR(0x675812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675817ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675267u);}goto L675267;}
}
B675817:L675817:{c.instructions+=2;NFSU2_TR(0x675817);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B67581a:{NFSU2_TR(0x67581a);
{goto L675828;}
}
B67581c:L67581c:{c.instructions+=3;NFSU2_TR(0x67581c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67581f:{NFSU2_TR(0x67581f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675821:{NFSU2_TR(0x675821);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675828;}}
}
B675823:L675823:{c.instructions+=2;NFSU2_TR(0x675823);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675826:{NFSU2_TR(0x675826);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675803u);}goto L675803;}}
}
B675828:L675828:{c.instructions+=1;NFSU2_TR(0x675828);
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
B67582a:L67582a:{c.instructions+=4;NFSU2_TR(0x67582a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67582b:{NFSU2_TR(0x67582b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67582c:{NFSU2_TR(0x67582c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67582d:{NFSU2_TR(0x67582d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B675830:L675830:{c.instructions+=12;NFSU2_TR(0x675830);
__builtin_memmove((R+28),(R+28),4);
}
B675832:{NFSU2_TR(0x675832);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675833:{NFSU2_TR(0x675833);
__builtin_memmove((R+20),(R+16),4);
}
B675835:{NFSU2_TR(0x675835);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675836:{NFSU2_TR(0x675836);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B675839:{NFSU2_TR(0x675839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67583a:{NFSU2_TR(0x67583a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67583b:{NFSU2_TR(0x67583b);
__builtin_memmove((R+28),(R+4),4);
}
B67583d:{NFSU2_TR(0x67583d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675840:{NFSU2_TR(0x675840);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B675843:{NFSU2_TR(0x675843);
__builtin_memmove((R+24),(R+12),4);
}
B675845:{NFSU2_TR(0x675845);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L67586b;}}
}
B675847:L675847:{c.instructions+=4;NFSU2_TR(0x675847);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67584a:{NFSU2_TR(0x67584a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67584d:{NFSU2_TR(0x67584d);
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
B67584f:{NFSU2_TR(0x67584f);
if(r1(R+518)){{goto L675858;}}
}
B675851:L675851:{c.instructions+=2;NFSU2_TR(0x675851);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675853:{NFSU2_TR(0x675853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675858ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6750fbu);}goto L6750fb;}
}
B675858:L675858:{c.instructions+=7;NFSU2_TR(0x675858);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67585b:{NFSU2_TR(0x67585b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67585e:{NFSU2_TR(0x67585e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B675862:{NFSU2_TR(0x675862);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675865:{NFSU2_TR(0x675865);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B675866:{NFSU2_TR(0x675866);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B675869:{NFSU2_TR(0x675869);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675847u);}goto L675847;}}
}
B67586b:L67586b:{c.instructions+=7;NFSU2_TR(0x67586b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67586e:{NFSU2_TR(0x67586e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675871:{NFSU2_TR(0x675871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B675874:{NFSU2_TR(0x675874);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675877:{NFSU2_TR(0x675877);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B67587a:{NFSU2_TR(0x67587a);
__builtin_memmove((R+24),(R+12),4);
}
B67587c:{NFSU2_TR(0x67587c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6758a2;}}
}
B67587e:L67587e:{c.instructions+=4;NFSU2_TR(0x67587e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675881:{NFSU2_TR(0x675881);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675884:{NFSU2_TR(0x675884);
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
B675886:{NFSU2_TR(0x675886);
if(r1(R+518)){{goto L67588f;}}
}
B675888:L675888:{c.instructions+=2;NFSU2_TR(0x675888);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67588a:{NFSU2_TR(0x67588a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67588full));
TAIL_STATIC(0x6739efu,673);
}
B67588f:L67588f:{c.instructions+=7;NFSU2_TR(0x67588f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675892:{NFSU2_TR(0x675892);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675895:{NFSU2_TR(0x675895);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B675899:{NFSU2_TR(0x675899);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67589c:{NFSU2_TR(0x67589c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B67589d:{NFSU2_TR(0x67589d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6758a0:{NFSU2_TR(0x6758a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67587eu);}goto L67587e;}}
}
B6758a2:L6758a2:{c.instructions+=9;NFSU2_TR(0x6758a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6758a5:{NFSU2_TR(0x6758a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6758a8:{NFSU2_TR(0x6758a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6758ab:{NFSU2_TR(0x6758ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6758ae:{NFSU2_TR(0x6758ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6758b1:{NFSU2_TR(0x6758b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6758b4:{NFSU2_TR(0x6758b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6758b7:{NFSU2_TR(0x6758b7);
__builtin_memmove((R+0),(R+4),4);
}
B6758b9:{NFSU2_TR(0x6758b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6758bc:L6758bc:{c.instructions+=1;NFSU2_TR(0x6758bc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6758be;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758bcu);}goto L6758bc;}
}
B6758be:L6758be:{c.instructions+=2;NFSU2_TR(0x6758be);
__builtin_memmove((R+4),(R+0),4);
}
B6758c0:{NFSU2_TR(0x6758c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6758c3:L6758c3:{c.instructions+=1;NFSU2_TR(0x6758c3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6758c5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758c3u);}goto L6758c3;}
}
B6758c5:L6758c5:{c.instructions+=6;NFSU2_TR(0x6758c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6758c6:{NFSU2_TR(0x6758c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6758c7:{NFSU2_TR(0x6758c7);
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
B6758c9:{NFSU2_TR(0x6758c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6758ca:{NFSU2_TR(0x6758ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6758cb:{NFSU2_TR(0x6758cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6758ce:L6758ce:{c.instructions+=14;NFSU2_TR(0x6758ce);
__builtin_memmove((R+28),(R+28),4);
}
B6758d0:{NFSU2_TR(0x6758d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6758d1:{NFSU2_TR(0x6758d1);
__builtin_memmove((R+20),(R+16),4);
}
B6758d3:{NFSU2_TR(0x6758d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6758d6:{NFSU2_TR(0x6758d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6758d9:{NFSU2_TR(0x6758d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6758da:{NFSU2_TR(0x6758da);
__builtin_memmove((R+0),(R+8),4);
}
B6758dc:{NFSU2_TR(0x6758dc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6758e1:{NFSU2_TR(0x6758e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6758e6:{NFSU2_TR(0x6758e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6758e7:{NFSU2_TR(0x6758e7);
__builtin_memmove((R+12),(R+4),4);
}
B6758e9:{NFSU2_TR(0x6758e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6758ea:{NFSU2_TR(0x6758ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6758ed:{NFSU2_TR(0x6758ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675946;}}
}
B6758ef:L6758ef:{c.instructions+=2;NFSU2_TR(0x6758ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6758f3:{NFSU2_TR(0x6758f3);
if(r1(R+518)){{goto L675946;}}
}
B6758f5:L6758f5:{c.instructions+=4;NFSU2_TR(0x6758f5);
__builtin_memmove((R+0),(R+8),4);
}
B6758f7:{NFSU2_TR(0x6758f7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6758fc:{NFSU2_TR(0x6758fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B675903:{NFSU2_TR(0x675903);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L675935;}}
}
B675905:L675905:{c.instructions+=5;NFSU2_TR(0x675905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675908:{NFSU2_TR(0x675908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67590b:{NFSU2_TR(0x67590b);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B67590d:{NFSU2_TR(0x67590d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675910:{NFSU2_TR(0x675910);
{goto L675915;}
}
B675912:L675912:{c.instructions+=1;NFSU2_TR(0x675912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675915:L675915:{c.instructions+=3;NFSU2_TR(0x675915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B675917:{NFSU2_TR(0x675917);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B67591a:{NFSU2_TR(0x67591a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675935;}}
}
B67591c:L67591c:{c.instructions+=5;NFSU2_TR(0x67591c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67591f:{NFSU2_TR(0x67591f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675922:{NFSU2_TR(0x675922);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675925:{NFSU2_TR(0x675925);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B675928:{NFSU2_TR(0x675928);
if(r1(R+518)){{goto L675935;}}
}
B67592a:L67592a:{c.instructions+=4;NFSU2_TR(0x67592a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67592d:{NFSU2_TR(0x67592d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B675930:{NFSU2_TR(0x675930);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B675933:{NFSU2_TR(0x675933);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675912u);}goto L675912;}}
}
B675935:L675935:{c.instructions+=2;NFSU2_TR(0x675935);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675938:{NFSU2_TR(0x675938);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675946;}}
}
B67593a:L67593a:{c.instructions+=3;NFSU2_TR(0x67593a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67593f:{NFSU2_TR(0x67593f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B675944:{NFSU2_TR(0x675944);
__builtin_memmove((R+8),(R+0),4);
}
B675946:L675946:{c.instructions+=2;NFSU2_TR(0x675946);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000001ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67594c:{NFSU2_TR(0x67594c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675964;}}
}
B67594e:L67594e:{c.instructions+=6;NFSU2_TR(0x67594e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675951:{NFSU2_TR(0x675951);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675954:{NFSU2_TR(0x675954);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675957:{NFSU2_TR(0x675957);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67595a:{NFSU2_TR(0x67595a);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67595f:{NFSU2_TR(0x67595f);
{goto L6759e7;}
}
B675964:L675964:{c.instructions+=2;NFSU2_TR(0x675964);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000002ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67596a:{NFSU2_TR(0x67596a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6759fe;}}
}
B675970:L675970:{c.instructions+=3;NFSU2_TR(0x675970);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675973:{NFSU2_TR(0x675973);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B675977:{NFSU2_TR(0x675977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6759fe;}}
}
B67597d:L67597d:{c.instructions+=16;NFSU2_TR(0x67597d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675980:{NFSU2_TR(0x675980);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B675983:{NFSU2_TR(0x675983);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x40ull))));
}
B675986:{NFSU2_TR(0x675986);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675987:{NFSU2_TR(0x675987);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67598a:{NFSU2_TR(0x67598a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67598d:{NFSU2_TR(0x67598d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675990:{NFSU2_TR(0x675990);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B675991:{NFSU2_TR(0x675991);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B675992:{NFSU2_TR(0x675992);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B675995:{NFSU2_TR(0x675995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675996:{NFSU2_TR(0x675996);
w4(R+28,u32(0x20500001ull));
}
B67599b:{NFSU2_TR(0x67599b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67599c:{NFSU2_TR(0x67599c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67599f:{NFSU2_TR(0x67599f);
__builtin_memmove((R+4),(R+12),4);
}
B6759a1:{NFSU2_TR(0x6759a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6759a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758ceu);}goto L6758ce;}
}
B6759a6:L6759a6:{c.instructions+=2;NFSU2_TR(0x6759a6);
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
B6759a8:{NFSU2_TR(0x6759a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6760ddu,676);}
}
B6759ae:L6759ae:{c.instructions+=13;NFSU2_TR(0x6759ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6759b1:{NFSU2_TR(0x6759b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759b2:{NFSU2_TR(0x6759b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6759b5:{NFSU2_TR(0x6759b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759b6:{NFSU2_TR(0x6759b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6759b9:{NFSU2_TR(0x6759b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6759bc:{NFSU2_TR(0x6759bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759bd:{NFSU2_TR(0x6759bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6759c0:{NFSU2_TR(0x6759c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759c1:{NFSU2_TR(0x6759c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759c2:{NFSU2_TR(0x6759c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6759c5:{NFSU2_TR(0x6759c5);
__builtin_memmove((R+4),(R+12),4);
}
B6759c7:{NFSU2_TR(0x6759c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6759ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758ceu);}goto L6758ce;}
}
B6759cc:L6759cc:{c.instructions+=2;NFSU2_TR(0x6759cc);
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
B6759ce:{NFSU2_TR(0x6759ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6760ddu,676);}
}
B6759d4:L6759d4:{c.instructions+=7;NFSU2_TR(0x6759d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6759d7:{NFSU2_TR(0x6759d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6759da:{NFSU2_TR(0x6759da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759db:{NFSU2_TR(0x6759db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6759de:{NFSU2_TR(0x6759de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759df:{NFSU2_TR(0x6759df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6759e2:{NFSU2_TR(0x6759e2);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6759e7:L6759e7:{c.instructions+=3;NFSU2_TR(0x6759e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6759ea:{NFSU2_TR(0x6759ea);
__builtin_memmove((R+4),(R+12),4);
}
B6759ec:{NFSU2_TR(0x6759ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6759f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758ceu);}goto L6758ce;}
}
B6759f1:L6759f1:{c.instructions+=2;NFSU2_TR(0x6759f1);
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
B6759f3:{NFSU2_TR(0x6759f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6760ddu,676);}
}
B6759f9:L6759f9:{c.instructions+=1;NFSU2_TR(0x6759f9);
TAIL_STATIC(0x6760dbu,676);
}
B6759fe:L6759fe:{c.instructions+=3;NFSU2_TR(0x6759fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675a01:{NFSU2_TR(0x675a01);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B675a05:{NFSU2_TR(0x675a05);
if(r1(R+518)){{goto L675b92;}}
}
B675a0b:L675a0b:{c.instructions+=5;NFSU2_TR(0x675a0b);
__builtin_memmove((R+0),(R+8),4);
}
B675a0d:{NFSU2_TR(0x675a0d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B675a12:{NFSU2_TR(0x675a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675a17:{NFSU2_TR(0x675a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675a1a:{NFSU2_TR(0x675a1a);
if(r1(R+518)){{goto L675a35;}}
}
B675a1c:L675a1c:{c.instructions+=2;NFSU2_TR(0x675a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675a21:{NFSU2_TR(0x675a21);
if(r1(R+518)){{goto L675a35;}}
}
B675a23:L675a23:{c.instructions+=2;NFSU2_TR(0x675a23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675a28:{NFSU2_TR(0x675a28);
if(r1(R+518)){{goto L675a35;}}
}
B675a2a:L675a2a:{c.instructions+=2;NFSU2_TR(0x675a2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675a2f:{NFSU2_TR(0x675a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675b92;}}
}
B675a35:L675a35:{c.instructions+=6;NFSU2_TR(0x675a35);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B675a3b:{NFSU2_TR(0x675a3b);
__builtin_memmove((R+24),(R+8),4);
}
B675a3d:{NFSU2_TR(0x675a3d);
__builtin_memmove((R+0),(R+24),4);
}
B675a3f:{NFSU2_TR(0x675a3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B675a42:{NFSU2_TR(0x675a42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675a43:{NFSU2_TR(0x675a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675a48ull));
TAIL_STATIC(0x575620u,575);
}
B675a48:L675a48:{c.instructions+=5;NFSU2_TR(0x675a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B675a49:{NFSU2_TR(0x675a49);
__builtin_memmove((R+4),(R+0),4);
}
B675a4b:{NFSU2_TR(0x675a4b);
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
B675a4d:{NFSU2_TR(0x675a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675a50:{NFSU2_TR(0x675a50);
if(r1(R+518)){{goto L675edf;}}
}
B675a56:L675a56:{c.instructions+=3;NFSU2_TR(0x675a56);
__builtin_memmove((R+8),(R+24),4);
}
B675a58:{NFSU2_TR(0x675a58);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675a5a:{NFSU2_TR(0x675a5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B675a5d:L675a5d:{c.instructions+=5;NFSU2_TR(0x675a5d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B675a61:{NFSU2_TR(0x675a61);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B675a62:{NFSU2_TR(0x675a62);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B675a64:{NFSU2_TR(0x675a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B675a67:{NFSU2_TR(0x675a67);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675a5du);}goto L675a5d;}}
}
B675a69:L675a69:{c.instructions+=2;NFSU2_TR(0x675a69);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675a6b:{NFSU2_TR(0x675a6b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L675adf;}}
}
B675a6d:L675a6d:{c.instructions+=9;NFSU2_TR(0x675a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675a70:{NFSU2_TR(0x675a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675a73:{NFSU2_TR(0x675a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675a76:{NFSU2_TR(0x675a76);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B675a78:{NFSU2_TR(0x675a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675a7b:{NFSU2_TR(0x675a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675a7e:{NFSU2_TR(0x675a7e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B675a80:{NFSU2_TR(0x675a80);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B675a82:{NFSU2_TR(0x675a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675a85:L675a85:{c.instructions+=3;NFSU2_TR(0x675a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675a88:{NFSU2_TR(0x675a88);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675a8e:{NFSU2_TR(0x675a8e);
if(r1(R+518)){{goto L675ac9;}}
}
B675a90:L675a90:{c.instructions+=2;NFSU2_TR(0x675a90);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675a96:{NFSU2_TR(0x675a96);
if(r1(R+518)){{goto L675abc;}}
}
B675a98:L675a98:{c.instructions+=2;NFSU2_TR(0x675a98);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675a9e:{NFSU2_TR(0x675a9e);
if(r1(R+518)){{goto L675ab2;}}
}
B675aa0:L675aa0:{c.instructions+=2;NFSU2_TR(0x675aa0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675aa6:{NFSU2_TR(0x675aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675ad7;}}
}
B675aa8:L675aa8:{c.instructions+=4;NFSU2_TR(0x675aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675aab:{NFSU2_TR(0x675aab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B675aad:{NFSU2_TR(0x675aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675ab0:{NFSU2_TR(0x675ab0);
{goto L675ad4;}
}
B675ab2:L675ab2:{c.instructions+=4;NFSU2_TR(0x675ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675ab5:{NFSU2_TR(0x675ab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B675ab7:{NFSU2_TR(0x675ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675aba:{NFSU2_TR(0x675aba);
{goto L675ad4;}
}
B675abc:L675abc:{c.instructions+=5;NFSU2_TR(0x675abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675abf:{NFSU2_TR(0x675abf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B675ac2:{NFSU2_TR(0x675ac2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B675ac4:{NFSU2_TR(0x675ac4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B675ac7:{NFSU2_TR(0x675ac7);
{goto L675ad4;}
}
B675ac9:L675ac9:{c.instructions+=4;NFSU2_TR(0x675ac9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B675acc:{NFSU2_TR(0x675acc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B675ace:{NFSU2_TR(0x675ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675ad1:{NFSU2_TR(0x675ad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B675ad4:L675ad4:{c.instructions+=1;NFSU2_TR(0x675ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B675ad7:L675ad7:{c.instructions+=3;NFSU2_TR(0x675ad7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B675ada:{NFSU2_TR(0x675ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675add:{NFSU2_TR(0x675add);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675a85u);}goto L675a85;}}
}
B675adf:L675adf:{c.instructions+=4;NFSU2_TR(0x675adf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675ae0:{NFSU2_TR(0x675ae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675ae3:{NFSU2_TR(0x675ae3);
__builtin_memmove((R+4),(R+12),4);
}
B675ae5:{NFSU2_TR(0x675ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675aeaull));
TAIL_STATIC(0x673b2cu,673);
}
B675aea:L675aea:{c.instructions+=2;NFSU2_TR(0x675aea);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675aec:{NFSU2_TR(0x675aec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675b8e;}}
}
B675af2:L675af2:{c.instructions+=4;NFSU2_TR(0x675af2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675af3:{NFSU2_TR(0x675af3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675af6:{NFSU2_TR(0x675af6);
__builtin_memmove((R+4),(R+12),4);
}
B675af8:{NFSU2_TR(0x675af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675afdull));
TAIL_STATIC(0x673b2cu,673);
}
B675afd:L675afd:{c.instructions+=2;NFSU2_TR(0x675afd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675aff:{NFSU2_TR(0x675aff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675b8e;}}
}
B675b05:L675b05:{c.instructions+=15;NFSU2_TR(0x675b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675b08:{NFSU2_TR(0x675b08);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
}
B675b0b:{NFSU2_TR(0x675b0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b0c:{NFSU2_TR(0x675b0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b0e:{NFSU2_TR(0x675b0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b11:{NFSU2_TR(0x675b11);
__builtin_memmove((R+28),(R+24),4);
}
B675b13:{NFSU2_TR(0x675b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b16:{NFSU2_TR(0x675b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675b19:{NFSU2_TR(0x675b19);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B675b1f:{NFSU2_TR(0x675b1f);
__builtin_memmove((R+0),(R+28),4);
}
B675b21:{NFSU2_TR(0x675b21);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B675b26:{NFSU2_TR(0x675b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b27:{NFSU2_TR(0x675b27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b2a:{NFSU2_TR(0x675b2a);
__builtin_memmove((R+4),(R+12),4);
}
B675b2c:{NFSU2_TR(0x675b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675b31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758ceu);}goto L6758ce;}
}
B675b31:L675b31:{c.instructions+=2;NFSU2_TR(0x675b31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675b33:{NFSU2_TR(0x675b33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675b8e;}}
}
B675b35:L675b35:{c.instructions+=10;NFSU2_TR(0x675b35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b38:{NFSU2_TR(0x675b38);
__builtin_memmove((R+0),(R+28),4);
}
B675b3a:{NFSU2_TR(0x675b3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b3d:{NFSU2_TR(0x675b3d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B675b42:{NFSU2_TR(0x675b42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b45:{NFSU2_TR(0x675b45);
__builtin_memmove((R+4),(R+12),4);
}
B675b47:{NFSU2_TR(0x675b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b4a:{NFSU2_TR(0x675b4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b4b:{NFSU2_TR(0x675b4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b4e:{NFSU2_TR(0x675b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675b53ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758ceu);}goto L6758ce;}
}
B675b53:L675b53:{c.instructions+=2;NFSU2_TR(0x675b53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675b55:{NFSU2_TR(0x675b55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675b8e;}}
}
B675b57:L675b57:{c.instructions+=11;NFSU2_TR(0x675b57);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b5a:{NFSU2_TR(0x675b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675b5d:{NFSU2_TR(0x675b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B675b60:{NFSU2_TR(0x675b60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b61:{NFSU2_TR(0x675b61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b64:{NFSU2_TR(0x675b64);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x30000000ull))));
}
B675b6a:{NFSU2_TR(0x675b6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b6d:{NFSU2_TR(0x675b6d);
__builtin_memmove((R+4),(R+12),4);
}
B675b6f:{NFSU2_TR(0x675b6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b70:{NFSU2_TR(0x675b70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b73:{NFSU2_TR(0x675b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675b78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6758ceu);}goto L6758ce;}
}
B675b78:L675b78:{c.instructions+=2;NFSU2_TR(0x675b78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675b7a:{NFSU2_TR(0x675b7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675b8e;}}
}
B675b7c:L675b7c:{c.instructions+=1;NFSU2_TR(0x675b7c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B675b7e:L675b7e:{c.instructions+=2;NFSU2_TR(0x675b7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675b81:{NFSU2_TR(0x675b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675b86ull));
TAIL_STATIC(0x575630u,575);
}
B675b86:L675b86:{c.instructions+=3;NFSU2_TR(0x675b86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B675b87:{NFSU2_TR(0x675b87);
__builtin_memmove((R+0),(R+24),4);
}
B675b89:{NFSU2_TR(0x675b89);
TAIL_STATIC(0x6760ddu,676);
}
B675b8e:L675b8e:{c.instructions+=2;NFSU2_TR(0x675b8e);
__builtin_memmove((R+24),(R+0),4);
}
B675b90:{NFSU2_TR(0x675b90);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675b7eu);}goto L675b7e;}
}
B675b92:L675b92:{c.instructions+=4;NFSU2_TR(0x675b92);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b94:{NFSU2_TR(0x675b94);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b96:{NFSU2_TR(0x675b96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675b97:{NFSU2_TR(0x675b97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675b9cull));
TAIL_STATIC(0x699c99u,699);
}
B675b9c:L675b9c:{c.instructions+=4;NFSU2_TR(0x675b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B675b9f:{NFSU2_TR(0x675b9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675ba2:{NFSU2_TR(0x675ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675ba5:{NFSU2_TR(0x675ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L675baf;}}
}
B675ba7:L675ba7:{c.instructions+=3;NFSU2_TR(0x675ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675baa:{NFSU2_TR(0x675baa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B675bad:{NFSU2_TR(0x675bad);
{goto L675bb1;}
}
B675baf:L675baf:{c.instructions+=1;NFSU2_TR(0x675baf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B675bb1:L675bb1:{c.instructions+=3;NFSU2_TR(0x675bb1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675bb3:{NFSU2_TR(0x675bb3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B675bb5:{NFSU2_TR(0x675bb5);
if(r1(R+518)){{goto L675edf;}}
}
B675bbb:L675bbb:{c.instructions+=2;NFSU2_TR(0x675bbb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675bbe:{NFSU2_TR(0x675bbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675bcc;}}
}
B675bc0:L675bc0:{c.instructions+=2;NFSU2_TR(0x675bc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675bc3:{NFSU2_TR(0x675bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675bcc;}}
}
B675bc5:L675bc5:{c.instructions+=2;NFSU2_TR(0x675bc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B675bc7:{NFSU2_TR(0x675bc7);
TAIL_STATIC(0x6760dbu,676);
}
B675bcc:L675bcc:{c.instructions+=5;NFSU2_TR(0x675bcc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B675bce:{NFSU2_TR(0x675bce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675bcf:{NFSU2_TR(0x675bcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675bd0:{NFSU2_TR(0x675bd0);
__builtin_memmove((R+4),(R+12),4);
}
B675bd2:{NFSU2_TR(0x675bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675bd7ull));
TAIL_STATIC(0x699675u,699);
}
B675bd7:L675bd7:{c.instructions+=5;NFSU2_TR(0x675bd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675bd8:{NFSU2_TR(0x675bd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675bd9:{NFSU2_TR(0x675bd9);
__builtin_memmove((R+4),(R+12),4);
}
B675bdb:{NFSU2_TR(0x675bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675bde:{NFSU2_TR(0x675bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675be3ull));
TAIL_STATIC(0x698ed2u,698);
}
B675be3:L675be3:{c.instructions+=9;NFSU2_TR(0x675be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675be6:{NFSU2_TR(0x675be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675be9:{NFSU2_TR(0x675be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675bec:{NFSU2_TR(0x675bec);
__builtin_memmove((R+4),(R+0),4);
}
B675bee:{NFSU2_TR(0x675bee);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B675bf1:{NFSU2_TR(0x675bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675bf4:{NFSU2_TR(0x675bf4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B675bf6:{NFSU2_TR(0x675bf6);
__builtin_memmove((R+0),(R+4),4);
}
B675bf8:{NFSU2_TR(0x675bf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B675bfb:L675bfb:{c.instructions+=1;NFSU2_TR(0x675bfb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L675bfd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675bfbu);}goto L675bfb;}
}
B675bfd:L675bfd:{c.instructions+=2;NFSU2_TR(0x675bfd);
__builtin_memmove((R+4),(R+0),4);
}
B675bff:{NFSU2_TR(0x675bff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B675c02:L675c02:{c.instructions+=1;NFSU2_TR(0x675c02);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L675c04;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675c02u);}goto L675c02;}
}
B675c04:L675c04:{c.instructions+=4;NFSU2_TR(0x675c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675c07:{NFSU2_TR(0x675c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675c0a:{NFSU2_TR(0x675c0a);
__builtin_memmove((R+4),(R+8),4);
}
B675c0c:{NFSU2_TR(0x675c0c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B675c0e:L675c0e:{c.instructions+=1;NFSU2_TR(0x675c0e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L675c10;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675c0eu);}goto L675c0e;}
}
B675c10:L675c10:{c.instructions+=4;NFSU2_TR(0x675c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B675c13:{NFSU2_TR(0x675c13);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B675c15:{NFSU2_TR(0x675c15);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675c18:{NFSU2_TR(0x675c18);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L675c3f;}}
}
B675c1a:L675c1a:{c.instructions+=5;NFSU2_TR(0x675c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675c1d:{NFSU2_TR(0x675c1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675c20:{NFSU2_TR(0x675c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675c23:{NFSU2_TR(0x675c23);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675c26:{NFSU2_TR(0x675c26);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L675c30;}}
}
B675c28:L675c28:{c.instructions+=3;NFSU2_TR(0x675c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675c2b:{NFSU2_TR(0x675c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675c2e:{NFSU2_TR(0x675c2e);
{goto L675c32;}
}
B675c30:L675c30:{c.instructions+=1;NFSU2_TR(0x675c30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675c32:L675c32:{c.instructions+=2;NFSU2_TR(0x675c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675c34:{NFSU2_TR(0x675c34);
if(r1(R+518)){{goto L675c39;}}
}
B675c36:L675c36:{c.instructions+=1;NFSU2_TR(0x675c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B675c39:L675c39:{c.instructions+=3;NFSU2_TR(0x675c39);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B675c3a:{NFSU2_TR(0x675c3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B675c3d:{NFSU2_TR(0x675c3d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675c1au);}goto L675c1a;}}
}
B675c3f:L675c3f:{c.instructions+=4;NFSU2_TR(0x675c3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B675c41:{NFSU2_TR(0x675c41);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675c44:{NFSU2_TR(0x675c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675c47:{NFSU2_TR(0x675c47);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L675d58;}}
}
B675c4d:L675c4d:{c.instructions+=4;NFSU2_TR(0x675c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675c50:{NFSU2_TR(0x675c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B675c54:{NFSU2_TR(0x675c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675c56:{NFSU2_TR(0x675c56);
if(r1(R+518)){{goto L675c7d;}}
}
B675c58:L675c58:{c.instructions+=3;NFSU2_TR(0x675c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675c5b:{NFSU2_TR(0x675c5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675c5e:{NFSU2_TR(0x675c5e);
if(r1(R+518)){{goto L675c7d;}}
}
B675c60:L675c60:{c.instructions+=3;NFSU2_TR(0x675c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675c63:{NFSU2_TR(0x675c63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675c66:{NFSU2_TR(0x675c66);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L675c70;}}
}
B675c68:L675c68:{c.instructions+=3;NFSU2_TR(0x675c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675c6b:{NFSU2_TR(0x675c6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675c6e:{NFSU2_TR(0x675c6e);
{goto L675c72;}
}
B675c70:L675c70:{c.instructions+=1;NFSU2_TR(0x675c70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675c72:L675c72:{c.instructions+=3;NFSU2_TR(0x675c72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675c74:{NFSU2_TR(0x675c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675c77:{NFSU2_TR(0x675c77);
if(r1(R+518)){{goto L675ec3;}}
}
B675c7d:L675c7d:{c.instructions+=9;NFSU2_TR(0x675c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675c80:{NFSU2_TR(0x675c80);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B675c82:{NFSU2_TR(0x675c82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675c83:{NFSU2_TR(0x675c83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675c84:{NFSU2_TR(0x675c84);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B675c87:{NFSU2_TR(0x675c87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675c89:{NFSU2_TR(0x675c89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675c8b:{NFSU2_TR(0x675c8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675c91:{NFSU2_TR(0x675c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675c96ull));
TAIL_STATIC(0x699c39u,699);
}
B675c96:L675c96:{c.instructions+=3;NFSU2_TR(0x675c96);
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
B675c99:{NFSU2_TR(0x675c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675c9c:{NFSU2_TR(0x675c9c);
if(r1(R+518)){{goto L675edf;}}
}
B675ca2:L675ca2:{c.instructions+=3;NFSU2_TR(0x675ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675ca5:{NFSU2_TR(0x675ca5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675ca8:{NFSU2_TR(0x675ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L675cb2;}}
}
B675caa:L675caa:{c.instructions+=3;NFSU2_TR(0x675caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675cad:{NFSU2_TR(0x675cad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675cb0:{NFSU2_TR(0x675cb0);
{goto L675cb4;}
}
B675cb2:L675cb2:{c.instructions+=1;NFSU2_TR(0x675cb2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B675cb4:L675cb4:{c.instructions+=2;NFSU2_TR(0x675cb4);
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
B675cb6:{NFSU2_TR(0x675cb6);
if(r1(R+518)){{goto L675edf;}}
}
B675cbc:L675cbc:{c.instructions+=7;NFSU2_TR(0x675cbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xeull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B675cc0:{NFSU2_TR(0x675cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675cc3:{NFSU2_TR(0x675cc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B675cc5:{NFSU2_TR(0x675cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675cc8:{NFSU2_TR(0x675cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675ccb:{NFSU2_TR(0x675ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675cce:{NFSU2_TR(0x675cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675cdb;}}
}
B675cd0:L675cd0:{c.instructions+=4;NFSU2_TR(0x675cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675cd3:{NFSU2_TR(0x675cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))|u32(r4(U+4))));
}
B675cd6:{NFSU2_TR(0x675cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675cd9:{NFSU2_TR(0x675cd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B675cdb:L675cdb:{c.instructions+=10;NFSU2_TR(0x675cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675cde:{NFSU2_TR(0x675cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675ce1:{NFSU2_TR(0x675ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675ce4:{NFSU2_TR(0x675ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675ce7:{NFSU2_TR(0x675ce7);
__builtin_memmove((R+8),(R+28),4);
}
B675ce9:{NFSU2_TR(0x675ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675cec:{NFSU2_TR(0x675cec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B675cef:{NFSU2_TR(0x675cef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675cf3:{NFSU2_TR(0x675cf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B675cf6:{NFSU2_TR(0x675cf6);
if(r1(R+518)){{goto L675cfe;}}
}
B675cf8:L675cf8:{c.instructions+=2;NFSU2_TR(0x675cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675cfb:{NFSU2_TR(0x675cfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B675cfe:L675cfe:{c.instructions+=3;NFSU2_TR(0x675cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675d01:{NFSU2_TR(0x675d01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675d03:{NFSU2_TR(0x675d03);
if(r1(R+518)){{goto L675d17;}}
}
B675d05:L675d05:{c.instructions+=6;NFSU2_TR(0x675d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675d08:{NFSU2_TR(0x675d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675d0b:{NFSU2_TR(0x675d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675d0e:{NFSU2_TR(0x675d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675d11:{NFSU2_TR(0x675d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675d14:{NFSU2_TR(0x675d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675d17:L675d17:{c.instructions+=3;NFSU2_TR(0x675d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675d1a:{NFSU2_TR(0x675d1a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675d1d:{NFSU2_TR(0x675d1d);
if(r1(R+518)){{goto L675d48;}}
}
B675d1f:L675d1f:{c.instructions+=8;NFSU2_TR(0x675d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675d22:{NFSU2_TR(0x675d22);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B675d25:{NFSU2_TR(0x675d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675d28:{NFSU2_TR(0x675d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675d2b:{NFSU2_TR(0x675d2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B675d2e:{NFSU2_TR(0x675d2e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675d30:{NFSU2_TR(0x675d30);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675d33:{NFSU2_TR(0x675d33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675d48;}}
}
B675d35:L675d35:{c.instructions+=6;NFSU2_TR(0x675d35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675d38:{NFSU2_TR(0x675d38);
u8 U[4];
w4(U+0,u32(0x7b78c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675d3d:{NFSU2_TR(0x675d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675d3e:{NFSU2_TR(0x675d3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675d3f:{NFSU2_TR(0x675d3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675d40:{NFSU2_TR(0x675d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675d45ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675267u);}goto L675267;}
}
B675d45:L675d45:{c.instructions+=1;NFSU2_TR(0x675d45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B675d48:L675d48:{c.instructions+=5;NFSU2_TR(0x675d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675d4b:{NFSU2_TR(0x675d4b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B675d4c:{NFSU2_TR(0x675d4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B675d4f:{NFSU2_TR(0x675d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675d52:{NFSU2_TR(0x675d52);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675c4du);}goto L675c4d;}}
}
B675d58:L675d58:{c.instructions+=3;NFSU2_TR(0x675d58);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B675d5a:{NFSU2_TR(0x675d5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675d5d:{NFSU2_TR(0x675d5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L675d74;}}
}
B675d5f:L675d5f:{c.instructions+=5;NFSU2_TR(0x675d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675d62:{NFSU2_TR(0x675d62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675d64:{NFSU2_TR(0x675d64);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B675d67:{NFSU2_TR(0x675d67);
__builtin_memmove((R+4),(R+24),4);
}
B675d69:{NFSU2_TR(0x675d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675d6eull));
TAIL_STATIC(0x673e90u,673);
}
B675d6e:L675d6e:{c.instructions+=3;NFSU2_TR(0x675d6e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B675d6f:{NFSU2_TR(0x675d6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B675d72:{NFSU2_TR(0x675d72);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675d5fu);}goto L675d5f;}}
}
B675d74:L675d74:{c.instructions+=2;NFSU2_TR(0x675d74);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B675d78:{NFSU2_TR(0x675d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675e1b;}}
}
B675d7e:L675d7e:{c.instructions+=2;NFSU2_TR(0x675d7e);
__builtin_memmove((R+4),(R+12),4);
}
B675d80:{NFSU2_TR(0x675d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675d85ull));
TAIL_STATIC(0x699107u,699);
}
B675d85:L675d85:{c.instructions+=2;NFSU2_TR(0x675d85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675d87:{NFSU2_TR(0x675d87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675e1b;}}
}
B675d8d:L675d8d:{c.instructions+=3;NFSU2_TR(0x675d8d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B675d8f:{NFSU2_TR(0x675d8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675d92:{NFSU2_TR(0x675d92);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L675dc1;}}
}
B675d94:L675d94:{c.instructions+=7;NFSU2_TR(0x675d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675d97:{NFSU2_TR(0x675d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675d9a:{NFSU2_TR(0x675d9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675d9d:{NFSU2_TR(0x675d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675da0:{NFSU2_TR(0x675da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675da3:{NFSU2_TR(0x675da3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B675da6:{NFSU2_TR(0x675da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675dbe;}}
}
B675da8:L675da8:{c.instructions+=5;NFSU2_TR(0x675da8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B675dab:{NFSU2_TR(0x675dab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675dac:{NFSU2_TR(0x675dac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675dad:{NFSU2_TR(0x675dad);
__builtin_memmove((R+4),(R+24),4);
}
B675daf:{NFSU2_TR(0x675daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675db4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675732u);}goto L675732;}
}
B675db4:L675db4:{c.instructions+=2;NFSU2_TR(0x675db4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B675db6:{NFSU2_TR(0x675db6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L675dbe;}}
}
B675db8:L675db8:{c.instructions+=3;NFSU2_TR(0x675db8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B675db9:{NFSU2_TR(0x675db9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B675dbc:{NFSU2_TR(0x675dbc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675d94u);}goto L675d94;}}
}
B675dbe:L675dbe:{c.instructions+=1;NFSU2_TR(0x675dbe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675dc1:L675dc1:{c.instructions+=1;NFSU2_TR(0x675dc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L675e1b;}}
}
B675dc3:L675dc3:{c.instructions+=9;NFSU2_TR(0x675dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675dc6:{NFSU2_TR(0x675dc6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B675dcb:{NFSU2_TR(0x675dcb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B675dd0:{NFSU2_TR(0x675dd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B675dd2:{NFSU2_TR(0x675dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675dd5:{NFSU2_TR(0x675dd5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B675dd7:{NFSU2_TR(0x675dd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675dda:{NFSU2_TR(0x675dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675ddd:{NFSU2_TR(0x675ddd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L675e1b;}}
}
B675ddf:L675ddf:{c.instructions+=13;NFSU2_TR(0x675ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675de2:{NFSU2_TR(0x675de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675de5:{NFSU2_TR(0x675de5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675de8:{NFSU2_TR(0x675de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675deb:{NFSU2_TR(0x675deb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675dee:{NFSU2_TR(0x675dee);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B675df1:{NFSU2_TR(0x675df1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675df2:{NFSU2_TR(0x675df2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675df3:{NFSU2_TR(0x675df3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B675df6:{NFSU2_TR(0x675df6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675df8:{NFSU2_TR(0x675df8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675dfa:{NFSU2_TR(0x675dfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B675dfd:{NFSU2_TR(0x675dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675e02ull));
TAIL_STATIC(0x699c39u,699);
}
B675e02:L675e02:{c.instructions+=5;NFSU2_TR(0x675e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675e05:{NFSU2_TR(0x675e05);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B675e08:{NFSU2_TR(0x675e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675e0b:{NFSU2_TR(0x675e0b);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B675e0f:{NFSU2_TR(0x675e0f);
if(r1(R+518)){{goto L675edf;}}
}
B675e15:L675e15:{c.instructions+=3;NFSU2_TR(0x675e15);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B675e16:{NFSU2_TR(0x675e16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B675e19:{NFSU2_TR(0x675e19);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675ddfu);}goto L675ddf;}}
}
B675e1b:L675e1b:{c.instructions+=5;NFSU2_TR(0x675e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675e1d:{NFSU2_TR(0x675e1d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B675e22:{NFSU2_TR(0x675e22);
w4(R+4,u32(0x20500000ull));
}
B675e27:{NFSU2_TR(0x675e27);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B675e29:{NFSU2_TR(0x675e29);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L675f7b;}}
}
B675e2f:L675e2f:{c.instructions+=1;NFSU2_TR(0x675e2f);
if(r1(R+518)){TAIL_STATIC(0x676073u,676);}
}
B675e35:L675e35:{c.instructions+=2;NFSU2_TR(0x675e35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675e3a:{NFSU2_TR(0x675e3a);
if(r1(R+518)){{goto L675f2c;}}
}
B675e40:L675e40:{c.instructions+=2;NFSU2_TR(0x675e40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675e45:{NFSU2_TR(0x675e45);
if(r1(R+518)){{goto L675ee9;}}
}
B675e4b:L675e4b:{c.instructions+=2;NFSU2_TR(0x675e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675e50:{NFSU2_TR(0x675e50);
if(r1(R+518)){TAIL_STATIC(0x676073u,676);}
}
B675e56:L675e56:{c.instructions+=2;NFSU2_TR(0x675e56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675e5b:{NFSU2_TR(0x675e5b);
if(r1(R+518)){TAIL_STATIC(0x676073u,676);}
}
B675e61:L675e61:{c.instructions+=2;NFSU2_TR(0x675e61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675e66:{NFSU2_TR(0x675e66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6760cfu,676);}
}
B675e6c:L675e6c:{c.instructions+=3;NFSU2_TR(0x675e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B675e70:{NFSU2_TR(0x675e70);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675e74:{NFSU2_TR(0x675e74);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6760cfu,676);}
}
B675e7a:L675e7a:{c.instructions+=24;NFSU2_TR(0x675e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675e7d:{NFSU2_TR(0x675e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675e80:{NFSU2_TR(0x675e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675e83:{NFSU2_TR(0x675e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675e86:{NFSU2_TR(0x675e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675e89:{NFSU2_TR(0x675e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B675e8c:{NFSU2_TR(0x675e8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B675e8f:{NFSU2_TR(0x675e8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B675e92:{NFSU2_TR(0x675e92);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B675e95:{NFSU2_TR(0x675e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675e98:{NFSU2_TR(0x675e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675e9b:{NFSU2_TR(0x675e9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675e9e:{NFSU2_TR(0x675e9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B675ea1:{NFSU2_TR(0x675ea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B675ea4:{NFSU2_TR(0x675ea4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675ea7:{NFSU2_TR(0x675ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B675ea9:{NFSU2_TR(0x675ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+0))));
}
B675eab:{NFSU2_TR(0x675eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675eae:{NFSU2_TR(0x675eae);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B675eb1:{NFSU2_TR(0x675eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B675eb3:{NFSU2_TR(0x675eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B675eb6:{NFSU2_TR(0x675eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675eb9:{NFSU2_TR(0x675eb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675ebc:{NFSU2_TR(0x675ebc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675e7au);}goto L675e7a;}}
}
B675ebe:L675ebe:{c.instructions+=1;NFSU2_TR(0x675ebe);
TAIL_STATIC(0x6760cfu,676);
}
B675ec3:L675ec3:{c.instructions+=5;NFSU2_TR(0x675ec3);
u8 U[4];
w4(U+0,u32(0x7b78a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675ec8:{NFSU2_TR(0x675ec8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675eca:{NFSU2_TR(0x675eca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675ecc:{NFSU2_TR(0x675ecc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B675ecd:{NFSU2_TR(0x675ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x675ed2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675267u);}goto L675267;}
}
B675ed2:L675ed2:{c.instructions+=3;NFSU2_TR(0x675ed2);
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
B675ed5:{NFSU2_TR(0x675ed5);
w4(R+0,u32(0x80004005ull));
}
B675eda:{NFSU2_TR(0x675eda);
TAIL_STATIC(0x6760ddu,676);
}
B675edf:L675edf:{c.instructions+=2;NFSU2_TR(0x675edf);
w4(R+0,u32(0x8007000eull));
}
B675ee4:{NFSU2_TR(0x675ee4);
TAIL_STATIC(0x6760ddu,676);
}
B675ee9:L675ee9:{c.instructions+=4;NFSU2_TR(0x675ee9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675eeb:{NFSU2_TR(0x675eeb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675eee:{NFSU2_TR(0x675eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675ef1:{NFSU2_TR(0x675ef1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6760cfu,676);}
}
B675ef7:L675ef7:{c.instructions+=18;NFSU2_TR(0x675ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675efa:{NFSU2_TR(0x675efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675efd:{NFSU2_TR(0x675efd);
__builtin_memmove((R+8),(R+0),4);
}
B675eff:{NFSU2_TR(0x675eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675f02:{NFSU2_TR(0x675f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675f05:{NFSU2_TR(0x675f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B675f08:{NFSU2_TR(0x675f08);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675f0b:{NFSU2_TR(0x675f0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675f0e:{NFSU2_TR(0x675f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B675f11:{NFSU2_TR(0x675f11);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675f14:{NFSU2_TR(0x675f14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675f16:{NFSU2_TR(0x675f16);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B675f19:{NFSU2_TR(0x675f19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B675f1b:{NFSU2_TR(0x675f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675f1e:{NFSU2_TR(0x675f1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B675f1f:{NFSU2_TR(0x675f1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675f22:{NFSU2_TR(0x675f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675f25:{NFSU2_TR(0x675f25);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675ef7u);}goto L675ef7;}}
}
B675f27:L675f27:{c.instructions+=1;NFSU2_TR(0x675f27);
TAIL_STATIC(0x6760cfu,676);
}
B675f2c:L675f2c:{c.instructions+=4;NFSU2_TR(0x675f2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B675f2e:{NFSU2_TR(0x675f2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675f31:{NFSU2_TR(0x675f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675f34:{NFSU2_TR(0x675f34);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6760cfu,676);}
}
B675f3a:L675f3a:{c.instructions+=22;NFSU2_TR(0x675f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B675f3d:{NFSU2_TR(0x675f3d);
__builtin_memmove((R+8),(R+0),4);
}
B675f3f:{NFSU2_TR(0x675f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675f42:{NFSU2_TR(0x675f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675f45:{NFSU2_TR(0x675f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675f48:{NFSU2_TR(0x675f48);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B675f4b:{NFSU2_TR(0x675f4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675f4e:{NFSU2_TR(0x675f4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675f51:{NFSU2_TR(0x675f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B675f54:{NFSU2_TR(0x675f54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B675f57:{NFSU2_TR(0x675f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675f5a:{NFSU2_TR(0x675f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B675f5c:{NFSU2_TR(0x675f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B675f5e:{NFSU2_TR(0x675f5e);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B675f61:{NFSU2_TR(0x675f61);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B675f64:{NFSU2_TR(0x675f64);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B675f67:{NFSU2_TR(0x675f67);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B675f6a:{NFSU2_TR(0x675f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675f6d:{NFSU2_TR(0x675f6d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B675f6e:{NFSU2_TR(0x675f6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675f71:{NFSU2_TR(0x675f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675f74:{NFSU2_TR(0x675f74);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675f3au);}goto L675f3a;}}
}
B675f76:L675f76:{c.instructions+=1;NFSU2_TR(0x675f76);
TAIL_STATIC(0x6760cfu,676);
}
B675f7b:L675f7b:{c.instructions+=2;NFSU2_TR(0x675f7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675f80:{NFSU2_TR(0x675f80);
if(r1(R+518)){TAIL_STATIC(0x676073u,676);}
}
B675f86:L675f86:{c.instructions+=2;NFSU2_TR(0x675f86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675f8b:{NFSU2_TR(0x675f8b);
if(r1(R+518)){TAIL_STATIC(0x676073u,676);}
}
B675f91:L675f91:{c.instructions+=2;NFSU2_TR(0x675f91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675f96:{NFSU2_TR(0x675f96);
if(r1(R+518)){TAIL_STATIC(0x67600eu,676);}
}
B675f98:L675f98:{c.instructions+=2;NFSU2_TR(0x675f98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B675f9d:{NFSU2_TR(0x675f9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6760cfu,676);}
}
B675fa3:L675fa3:{c.instructions+=9;NFSU2_TR(0x675fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675fa6:{NFSU2_TR(0x675fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675fa9:{NFSU2_TR(0x675fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675fab:{NFSU2_TR(0x675fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675fae:{NFSU2_TR(0x675fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675fb1:{NFSU2_TR(0x675fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B675fb5:{NFSU2_TR(0x675fb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675fb9:{NFSU2_TR(0x675fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675fbc:{NFSU2_TR(0x675fbc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L675ff7;}}
}
B675fbe:L675fbe:{c.instructions+=6;NFSU2_TR(0x675fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675fc1:{NFSU2_TR(0x675fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675fc4:{NFSU2_TR(0x675fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B675fc7:{NFSU2_TR(0x675fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B675fca:{NFSU2_TR(0x675fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B675fcd:{NFSU2_TR(0x675fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B675fd0:L675fd0:{c.instructions+=9;NFSU2_TR(0x675fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675fd3:{NFSU2_TR(0x675fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675fd5:{NFSU2_TR(0x675fd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B675fd8:{NFSU2_TR(0x675fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B675fda:{NFSU2_TR(0x675fda);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B675fdd:{NFSU2_TR(0x675fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B675fdf:{NFSU2_TR(0x675fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+0))));
}
B675fe1:{NFSU2_TR(0x675fe1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B675fe3:{NFSU2_TR(0x675fe3);
if(r1(R+518)){{goto L675ff7;}}
}
B675fe5:L675fe5:{c.instructions+=6;NFSU2_TR(0x675fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B675fe8:{NFSU2_TR(0x675fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675feb:{NFSU2_TR(0x675feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B675fef:{NFSU2_TR(0x675fef);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B675ff2:{NFSU2_TR(0x675ff2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B675ff5:{NFSU2_TR(0x675ff5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x675fd0u);}goto L675fd0;}}
}
B675ff7:L675ff7:{c.instructions+=3;NFSU2_TR(0x675ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B675ffa:{NFSU2_TR(0x675ffa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B675ffd:{NFSU2_TR(0x675ffd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6760cfu,676);}
TAIL_STATIC(0x676003u,676);
}
XIT:NFSU2_TR_EXIT(0x675,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
