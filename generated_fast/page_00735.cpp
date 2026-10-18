#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x735,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x735,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_735(u8* __restrict R,Cpu& c);
u32 page_735(Cpu& c){return body_735(c.regs.data(),c);}
__attribute__((noinline)) u32 body_735(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x735000:goto L735000;
case 0x735002:goto L735002;
case 0x735004:c.instructions+=1;goto B735004;
case 0x73500a:goto L73500a;
case 0x73500d:c.instructions+=2;goto B73500d;
case 0x73500f:c.instructions+=1;goto B73500f;
case 0x735011:goto L735011;
case 0x735013:c.instructions+=1;goto B735013;
case 0x735015:goto L735015;
case 0x735017:c.instructions+=2;goto B735017;
case 0x735019:c.instructions+=1;goto B735019;
case 0x73501b:goto L73501b;
case 0x73501e:c.instructions+=1;goto B73501e;
case 0x735021:goto L735021;
case 0x735023:c.instructions+=1;goto B735023;
case 0x735030:goto L735030;
case 0x735031:c.instructions+=4;goto B735031;
case 0x735033:c.instructions+=3;goto B735033;
case 0x735036:c.instructions+=2;goto B735036;
case 0x735038:c.instructions+=1;goto B735038;
case 0x73503a:goto L73503a;
case 0x73503b:c.instructions+=1;goto B73503b;
case 0x735040:goto L735040;
case 0x735043:c.instructions+=4;goto B735043;
case 0x735045:c.instructions+=3;goto B735045;
case 0x735046:c.instructions+=2;goto B735046;
case 0x735047:c.instructions+=1;goto B735047;
case 0x73504a:goto L73504a;
case 0x73504d:c.instructions+=3;goto B73504d;
case 0x73504f:c.instructions+=2;goto B73504f;
case 0x735051:c.instructions+=1;goto B735051;
case 0x735053:goto L735053;
case 0x735054:goto L735054;
case 0x735057:c.instructions+=1;goto B735057;
case 0x735059:goto L735059;
case 0x73505f:c.instructions+=4;goto B73505f;
case 0x735061:c.instructions+=3;goto B735061;
case 0x735063:c.instructions+=2;goto B735063;
case 0x735064:c.instructions+=1;goto B735064;
case 0x735067:goto L735067;
case 0x735069:c.instructions+=2;goto B735069;
case 0x73506a:c.instructions+=1;goto B73506a;
case 0x735070:goto L735070;
case 0x735073:c.instructions+=4;goto B735073;
case 0x735077:c.instructions+=3;goto B735077;
case 0x735079:c.instructions+=2;goto B735079;
case 0x73507b:c.instructions+=1;goto B73507b;
case 0x735080:goto L735080;
case 0x735081:c.instructions+=3;goto B735081;
case 0x735084:c.instructions+=2;goto B735084;
case 0x735086:c.instructions+=1;goto B735086;
case 0x735088:goto L735088;
case 0x735089:c.instructions+=2;goto B735089;
case 0x73508d:c.instructions+=1;goto B73508d;
case 0x735090:goto L735090;
case 0x735093:c.instructions+=3;goto B735093;
case 0x735094:c.instructions+=2;goto B735094;
case 0x735095:c.instructions+=1;goto B735095;
case 0x735098:goto L735098;
case 0x73509a:c.instructions+=3;goto B73509a;
case 0x73509d:c.instructions+=2;goto B73509d;
case 0x73509f:c.instructions+=1;goto B73509f;
case 0x7350a1:goto L7350a1;
case 0x7350a2:goto L7350a2;
case 0x7350a4:c.instructions+=2;goto B7350a4;
case 0x7350a5:c.instructions+=1;goto B7350a5;
case 0x7350b0:goto L7350b0;
case 0x7350b3:c.instructions+=6;goto B7350b3;
case 0x7350b7:c.instructions+=5;goto B7350b7;
case 0x7350b9:c.instructions+=4;goto B7350b9;
case 0x7350c0:c.instructions+=3;goto B7350c0;
case 0x7350c3:c.instructions+=2;goto B7350c3;
case 0x7350c5:c.instructions+=1;goto B7350c5;
case 0x7350c7:goto L7350c7;
case 0x7350ca:goto L7350ca;
case 0x7350cd:c.instructions+=3;goto B7350cd;
case 0x7350d0:c.instructions+=2;goto B7350d0;
case 0x7350d2:c.instructions+=1;goto B7350d2;
case 0x7350e0:goto L7350e0;
case 0x7350e3:c.instructions+=3;goto B7350e3;
case 0x7350e7:c.instructions+=2;goto B7350e7;
case 0x7350e9:c.instructions+=1;goto B7350e9;
case 0x7350eb:goto L7350eb;
case 0x7350ed:c.instructions+=1;goto B7350ed;
case 0x7350f0:goto L7350f0;
case 0x7350f3:c.instructions+=2;goto B7350f3;
case 0x7350f5:c.instructions+=1;goto B7350f5;
case 0x7350f7:goto L7350f7;
case 0x7350f8:c.instructions+=3;goto B7350f8;
case 0x7350fa:c.instructions+=2;goto B7350fa;
case 0x7350fc:c.instructions+=1;goto B7350fc;
case 0x7350fd:goto L7350fd;
case 0x7350ff:c.instructions+=2;goto B7350ff;
case 0x735101:c.instructions+=1;goto B735101;
case 0x735103:goto L735103;
case 0x735106:c.instructions+=1;goto B735106;
case 0x735109:goto L735109;
case 0x73510c:c.instructions+=1;goto B73510c;
case 0x73510e:goto L73510e;
case 0x735113:c.instructions+=5;goto B735113;
case 0x735115:c.instructions+=4;goto B735115;
case 0x735117:c.instructions+=3;goto B735117;
case 0x735118:c.instructions+=2;goto B735118;
case 0x73511a:c.instructions+=1;goto B73511a;
case 0x73511d:goto L73511d;
case 0x73511f:c.instructions+=1;goto B73511f;
case 0x735130:goto L735130;
case 0x735133:c.instructions+=6;goto B735133;
case 0x735137:c.instructions+=5;goto B735137;
case 0x735139:c.instructions+=4;goto B735139;
case 0x735140:c.instructions+=3;goto B735140;
case 0x735143:c.instructions+=2;goto B735143;
case 0x735145:c.instructions+=1;goto B735145;
case 0x735147:goto L735147;
case 0x73514a:goto L73514a;
case 0x73514d:c.instructions+=3;goto B73514d;
case 0x735150:c.instructions+=2;goto B735150;
case 0x735152:c.instructions+=1;goto B735152;
case 0x735160:goto L735160;
case 0x735163:c.instructions+=3;goto B735163;
case 0x735167:c.instructions+=2;goto B735167;
case 0x735169:c.instructions+=1;goto B735169;
case 0x73516b:goto L73516b;
case 0x73516d:c.instructions+=1;goto B73516d;
case 0x735170:goto L735170;
case 0x735173:c.instructions+=2;goto B735173;
case 0x735175:c.instructions+=1;goto B735175;
case 0x735177:goto L735177;
case 0x735178:c.instructions+=3;goto B735178;
case 0x73517a:c.instructions+=2;goto B73517a;
case 0x73517c:c.instructions+=1;goto B73517c;
case 0x73517d:goto L73517d;
case 0x73517f:c.instructions+=2;goto B73517f;
case 0x735181:c.instructions+=1;goto B735181;
case 0x735183:goto L735183;
case 0x735186:c.instructions+=1;goto B735186;
case 0x735189:goto L735189;
case 0x73518c:c.instructions+=1;goto B73518c;
case 0x73518e:goto L73518e;
case 0x735193:c.instructions+=5;goto B735193;
case 0x735195:c.instructions+=4;goto B735195;
case 0x735197:c.instructions+=3;goto B735197;
case 0x735198:c.instructions+=2;goto B735198;
case 0x73519a:c.instructions+=1;goto B73519a;
case 0x73519d:goto L73519d;
case 0x73519f:c.instructions+=1;goto B73519f;
case 0x7351b0:goto L7351b0;
case 0x7351b4:c.instructions+=6;goto B7351b4;
case 0x7351b7:c.instructions+=5;goto B7351b7;
case 0x7351b8:c.instructions+=4;goto B7351b8;
case 0x7351b9:c.instructions+=3;goto B7351b9;
case 0x7351ba:c.instructions+=2;goto B7351ba;
case 0x7351bb:c.instructions+=1;goto B7351bb;
case 0x7351bd:goto L7351bd;
case 0x7351c3:c.instructions+=4;goto B7351c3;
case 0x7351c5:c.instructions+=3;goto B7351c5;
case 0x7351c9:c.instructions+=2;goto B7351c9;
case 0x7351d0:c.instructions+=1;goto B7351d0;
case 0x7351d6:goto L7351d6;
case 0x7351da:c.instructions+=2;goto B7351da;
case 0x7351df:c.instructions+=1;goto B7351df;
case 0x7351e0:goto L7351e0;
case 0x7351e4:c.instructions+=8;goto B7351e4;
case 0x7351e8:c.instructions+=7;goto B7351e8;
case 0x7351ec:c.instructions+=6;goto B7351ec;
case 0x7351f1:c.instructions+=5;goto B7351f1;
case 0x7351f6:c.instructions+=4;goto B7351f6;
case 0x7351fa:c.instructions+=3;goto B7351fa;
case 0x7351fe:c.instructions+=2;goto B7351fe;
case 0x735202:c.instructions+=1;goto B735202;
case 0x735204:goto L735204;
case 0x735206:c.instructions+=1;goto B735206;
case 0x735208:goto L735208;
case 0x73520a:c.instructions+=2;goto B73520a;
case 0x73520c:c.instructions+=1;goto B73520c;
case 0x73520e:goto L73520e;
case 0x735212:c.instructions+=3;goto B735212;
case 0x735217:c.instructions+=2;goto B735217;
case 0x73521a:c.instructions+=1;goto B73521a;
case 0x735220:goto L735220;
case 0x735225:c.instructions+=2;goto B735225;
case 0x735229:c.instructions+=1;goto B735229;
case 0x73522b:goto L73522b;
case 0x73522d:c.instructions+=2;goto B73522d;
case 0x73522f:c.instructions+=1;goto B73522f;
case 0x735230:goto L735230;
case 0x735232:c.instructions+=3;goto B735232;
case 0x735234:c.instructions+=2;goto B735234;
case 0x735236:c.instructions+=1;goto B735236;
case 0x735238:goto L735238;
case 0x73523a:c.instructions+=1;goto B73523a;
case 0x73523c:goto L73523c;
case 0x73523f:c.instructions+=3;goto B73523f;
case 0x735241:c.instructions+=2;goto B735241;
case 0x735244:c.instructions+=1;goto B735244;
case 0x735246:goto L735246;
case 0x735249:c.instructions+=3;goto B735249;
case 0x73524c:c.instructions+=2;goto B73524c;
case 0x73524e:c.instructions+=1;goto B73524e;
case 0x735250:goto L735250;
case 0x735252:c.instructions+=1;goto B735252;
case 0x735254:goto L735254;
case 0x735256:c.instructions+=1;goto B735256;
case 0x735259:goto L735259;
case 0x73525b:c.instructions+=1;goto B73525b;
case 0x73525d:goto L73525d;
case 0x735261:c.instructions+=1;goto B735261;
case 0x735265:goto L735265;
case 0x735266:c.instructions+=3;goto B735266;
case 0x735269:c.instructions+=2;goto B735269;
case 0x73526b:c.instructions+=1;goto B73526b;
case 0x73526d:goto L73526d;
case 0x735271:goto L735271;
case 0x735273:c.instructions+=2;goto B735273;
case 0x735275:c.instructions+=1;goto B735275;
case 0x73527b:goto L73527b;
case 0x73527d:c.instructions+=1;goto B73527d;
case 0x73527f:goto L73527f;
case 0x735281:c.instructions+=1;goto B735281;
case 0x735286:goto L735286;
case 0x73528a:c.instructions+=13;goto B73528a;
case 0x73528e:c.instructions+=12;goto B73528e;
case 0x735291:c.instructions+=11;goto B735291;
case 0x735295:c.instructions+=10;goto B735295;
case 0x735296:c.instructions+=9;goto B735296;
case 0x735298:c.instructions+=8;goto B735298;
case 0x73529b:c.instructions+=7;goto B73529b;
case 0x73529c:c.instructions+=6;goto B73529c;
case 0x73529d:c.instructions+=5;goto B73529d;
case 0x7352a0:c.instructions+=4;goto B7352a0;
case 0x7352a2:c.instructions+=3;goto B7352a2;
case 0x7352a3:c.instructions+=2;goto B7352a3;
case 0x7352a6:c.instructions+=1;goto B7352a6;
case 0x7352a7:goto L7352a7;
case 0x7352a8:c.instructions+=6;goto B7352a8;
case 0x7352a9:c.instructions+=5;goto B7352a9;
case 0x7352aa:c.instructions+=4;goto B7352aa;
case 0x7352af:c.instructions+=3;goto B7352af;
case 0x7352b0:c.instructions+=2;goto B7352b0;
case 0x7352b3:c.instructions+=1;goto B7352b3;
case 0x7352c0:goto L7352c0;
case 0x7352c4:c.instructions+=6;goto B7352c4;
case 0x7352c7:c.instructions+=5;goto B7352c7;
case 0x7352c8:c.instructions+=4;goto B7352c8;
case 0x7352c9:c.instructions+=3;goto B7352c9;
case 0x7352ca:c.instructions+=2;goto B7352ca;
case 0x7352cb:c.instructions+=1;goto B7352cb;
case 0x7352cd:goto L7352cd;
case 0x7352d3:c.instructions+=4;goto B7352d3;
case 0x7352d5:c.instructions+=3;goto B7352d5;
case 0x7352d9:c.instructions+=2;goto B7352d9;
case 0x7352e0:c.instructions+=1;goto B7352e0;
case 0x7352e6:goto L7352e6;
case 0x7352ea:c.instructions+=2;goto B7352ea;
case 0x7352ef:c.instructions+=1;goto B7352ef;
case 0x7352f0:goto L7352f0;
case 0x7352f4:c.instructions+=8;goto B7352f4;
case 0x7352f8:c.instructions+=7;goto B7352f8;
case 0x7352fc:c.instructions+=6;goto B7352fc;
case 0x735301:c.instructions+=5;goto B735301;
case 0x735306:c.instructions+=4;goto B735306;
case 0x73530a:c.instructions+=3;goto B73530a;
case 0x73530e:c.instructions+=2;goto B73530e;
case 0x735312:c.instructions+=1;goto B735312;
case 0x735314:goto L735314;
case 0x735316:c.instructions+=1;goto B735316;
case 0x735318:goto L735318;
case 0x73531a:c.instructions+=2;goto B73531a;
case 0x73531c:c.instructions+=1;goto B73531c;
case 0x73531e:goto L73531e;
case 0x735322:c.instructions+=3;goto B735322;
case 0x735327:c.instructions+=2;goto B735327;
case 0x73532a:c.instructions+=1;goto B73532a;
case 0x735330:goto L735330;
case 0x735335:c.instructions+=2;goto B735335;
case 0x735339:c.instructions+=1;goto B735339;
case 0x73533b:goto L73533b;
case 0x73533d:c.instructions+=2;goto B73533d;
case 0x73533f:c.instructions+=1;goto B73533f;
case 0x735340:goto L735340;
case 0x735342:c.instructions+=3;goto B735342;
case 0x735344:c.instructions+=2;goto B735344;
case 0x735346:c.instructions+=1;goto B735346;
case 0x735348:goto L735348;
case 0x73534a:c.instructions+=1;goto B73534a;
case 0x73534c:goto L73534c;
case 0x73534f:c.instructions+=3;goto B73534f;
case 0x735351:c.instructions+=2;goto B735351;
case 0x735354:c.instructions+=1;goto B735354;
case 0x735356:goto L735356;
case 0x735359:c.instructions+=3;goto B735359;
case 0x73535c:c.instructions+=2;goto B73535c;
case 0x73535e:c.instructions+=1;goto B73535e;
case 0x735360:goto L735360;
case 0x735362:c.instructions+=1;goto B735362;
case 0x735364:goto L735364;
case 0x735366:c.instructions+=1;goto B735366;
case 0x735369:goto L735369;
case 0x73536b:c.instructions+=1;goto B73536b;
case 0x73536d:goto L73536d;
case 0x735371:c.instructions+=1;goto B735371;
case 0x735375:goto L735375;
case 0x735376:c.instructions+=3;goto B735376;
case 0x735379:c.instructions+=2;goto B735379;
case 0x73537b:c.instructions+=1;goto B73537b;
case 0x73537d:goto L73537d;
case 0x735381:goto L735381;
case 0x735383:c.instructions+=2;goto B735383;
case 0x735385:c.instructions+=1;goto B735385;
case 0x73538b:goto L73538b;
case 0x73538d:c.instructions+=1;goto B73538d;
case 0x73538f:goto L73538f;
case 0x735391:c.instructions+=1;goto B735391;
case 0x735396:goto L735396;
case 0x73539a:c.instructions+=13;goto B73539a;
case 0x73539d:c.instructions+=12;goto B73539d;
case 0x7353a0:c.instructions+=11;goto B7353a0;
case 0x7353a4:c.instructions+=10;goto B7353a4;
case 0x7353a5:c.instructions+=9;goto B7353a5;
case 0x7353a6:c.instructions+=8;goto B7353a6;
case 0x7353a8:c.instructions+=7;goto B7353a8;
case 0x7353ab:c.instructions+=6;goto B7353ab;
case 0x7353ac:c.instructions+=5;goto B7353ac;
case 0x7353af:c.instructions+=4;goto B7353af;
case 0x7353b1:c.instructions+=3;goto B7353b1;
case 0x7353b2:c.instructions+=2;goto B7353b2;
case 0x7353b5:c.instructions+=1;goto B7353b5;
case 0x7353b6:goto L7353b6;
case 0x7353b7:c.instructions+=6;goto B7353b7;
case 0x7353b8:c.instructions+=5;goto B7353b8;
case 0x7353b9:c.instructions+=4;goto B7353b9;
case 0x7353be:c.instructions+=3;goto B7353be;
case 0x7353bf:c.instructions+=2;goto B7353bf;
case 0x7353c2:c.instructions+=1;goto B7353c2;
case 0x7353d0:goto L7353d0;
case 0x7353d4:c.instructions+=6;goto B7353d4;
case 0x7353d6:c.instructions+=5;goto B7353d6;
case 0x7353d8:c.instructions+=4;goto B7353d8;
case 0x7353da:c.instructions+=3;goto B7353da;
case 0x7353db:c.instructions+=2;goto B7353db;
case 0x7353dc:c.instructions+=1;goto B7353dc;
case 0x7353e1:goto L7353e1;
case 0x7353e4:c.instructions+=1;goto B7353e4;
case 0x7353f0:goto L7353f0;
case 0x7353f4:c.instructions+=6;goto B7353f4;
case 0x7353f6:c.instructions+=5;goto B7353f6;
case 0x7353f8:c.instructions+=4;goto B7353f8;
case 0x7353fa:c.instructions+=3;goto B7353fa;
case 0x7353fb:c.instructions+=2;goto B7353fb;
case 0x7353fc:c.instructions+=1;goto B7353fc;
case 0x735401:goto L735401;
case 0x735404:c.instructions+=1;goto B735404;
case 0x735410:goto L735410;
case 0x735414:c.instructions+=6;goto B735414;
case 0x735416:c.instructions+=5;goto B735416;
case 0x735418:c.instructions+=4;goto B735418;
case 0x73541a:c.instructions+=3;goto B73541a;
case 0x73541b:c.instructions+=2;goto B73541b;
case 0x73541c:c.instructions+=1;goto B73541c;
case 0x735421:goto L735421;
case 0x735424:c.instructions+=1;goto B735424;
case 0x735430:goto L735430;
case 0x735434:c.instructions+=4;goto B735434;
case 0x735437:c.instructions+=3;goto B735437;
case 0x735439:c.instructions+=2;goto B735439;
case 0x73543a:c.instructions+=1;goto B73543a;
case 0x73543c:goto L73543c;
case 0x73543e:c.instructions+=2;goto B73543e;
case 0x73543f:c.instructions+=1;goto B73543f;
case 0x735440:goto L735440;
case 0x735442:c.instructions+=2;goto B735442;
case 0x735444:c.instructions+=1;goto B735444;
case 0x735446:goto L735446;
case 0x73544b:c.instructions+=2;goto B73544b;
case 0x73544c:c.instructions+=1;goto B73544c;
case 0x73544d:goto L73544d;
case 0x735450:c.instructions+=1;goto B735450;
case 0x735452:goto L735452;
case 0x735459:c.instructions+=4;goto B735459;
case 0x73545f:c.instructions+=3;goto B73545f;
case 0x735464:c.instructions+=2;goto B735464;
case 0x735465:c.instructions+=1;goto B735465;
case 0x735466:goto L735466;
case 0x735468:c.instructions+=2;goto B735468;
case 0x73546a:c.instructions+=1;goto B73546a;
case 0x73546c:goto L73546c;
case 0x735471:c.instructions+=2;goto B735471;
case 0x735472:c.instructions+=1;goto B735472;
case 0x735473:goto L735473;
case 0x735474:c.instructions+=1;goto B735474;
case 0x735478:goto L735478;
case 0x73547b:c.instructions+=3;goto B73547b;
case 0x73547c:c.instructions+=2;goto B73547c;
case 0x73547d:c.instructions+=1;goto B73547d;
case 0x735480:goto L735480;
case 0x735482:c.instructions+=3;goto B735482;
case 0x735485:c.instructions+=2;goto B735485;
case 0x735487:c.instructions+=1;goto B735487;
case 0x735489:goto L735489;
case 0x73548a:c.instructions+=3;goto B73548a;
case 0x73548c:c.instructions+=2;goto B73548c;
case 0x73548d:c.instructions+=1;goto B73548d;
case 0x735490:goto L735490;
case 0x735494:c.instructions+=9;goto B735494;
case 0x735497:c.instructions+=8;goto B735497;
case 0x735498:c.instructions+=7;goto B735498;
case 0x73549a:c.instructions+=6;goto B73549a;
case 0x73549b:c.instructions+=5;goto B73549b;
case 0x73549f:c.instructions+=4;goto B73549f;
case 0x7354a1:c.instructions+=3;goto B7354a1;
case 0x7354a4:c.instructions+=2;goto B7354a4;
case 0x7354a6:c.instructions+=1;goto B7354a6;
case 0x7354ac:goto L7354ac;
case 0x7354ae:c.instructions+=2;goto B7354ae;
case 0x7354b0:c.instructions+=1;goto B7354b0;
case 0x7354b2:goto L7354b2;
case 0x7354b3:c.instructions+=4;goto B7354b3;
case 0x7354b8:c.instructions+=3;goto B7354b8;
case 0x7354b9:c.instructions+=2;goto B7354b9;
case 0x7354bc:c.instructions+=1;goto B7354bc;
case 0x7354bd:goto L7354bd;
case 0x7354c0:c.instructions+=1;goto B7354c0;
case 0x7354c2:goto L7354c2;
case 0x7354c7:c.instructions+=6;goto B7354c7;
case 0x7354c9:c.instructions+=5;goto B7354c9;
case 0x7354cc:c.instructions+=4;goto B7354cc;
case 0x7354cd:c.instructions+=3;goto B7354cd;
case 0x7354ce:c.instructions+=2;goto B7354ce;
case 0x7354d1:c.instructions+=1;goto B7354d1;
case 0x7354d2:goto L7354d2;
case 0x7354d8:c.instructions+=9;goto B7354d8;
case 0x7354d9:c.instructions+=8;goto B7354d9;
case 0x7354dd:c.instructions+=7;goto B7354dd;
case 0x7354de:c.instructions+=6;goto B7354de;
case 0x7354e2:c.instructions+=5;goto B7354e2;
case 0x7354e6:c.instructions+=4;goto B7354e6;
case 0x7354ea:c.instructions+=3;goto B7354ea;
case 0x7354ec:c.instructions+=2;goto B7354ec;
case 0x7354ee:c.instructions+=1;goto B7354ee;
case 0x7354f0:goto L7354f0;
case 0x7354f2:c.instructions+=2;goto B7354f2;
case 0x7354f4:c.instructions+=1;goto B7354f4;
case 0x7354f6:goto L7354f6;
case 0x7354f7:c.instructions+=5;goto B7354f7;
case 0x7354f8:c.instructions+=4;goto B7354f8;
case 0x7354fb:c.instructions+=3;goto B7354fb;
case 0x7354fc:c.instructions+=2;goto B7354fc;
case 0x7354ff:c.instructions+=1;goto B7354ff;
case 0x735500:goto L735500;
case 0x735507:c.instructions+=9;goto B735507;
case 0x73550a:c.instructions+=8;goto B73550a;
case 0x73550d:c.instructions+=7;goto B73550d;
case 0x73550f:c.instructions+=6;goto B73550f;
case 0x735511:c.instructions+=5;goto B735511;
case 0x735513:c.instructions+=4;goto B735513;
case 0x735515:c.instructions+=3;goto B735515;
case 0x735516:c.instructions+=2;goto B735516;
case 0x73551a:c.instructions+=1;goto B73551a;
case 0x73551c:goto L73551c;
case 0x735520:goto L735520;
case 0x735523:c.instructions+=4;goto B735523;
case 0x735524:c.instructions+=3;goto B735524;
case 0x735525:c.instructions+=2;goto B735525;
case 0x735526:c.instructions+=1;goto B735526;
case 0x735529:goto L735529;
case 0x73552b:c.instructions+=3;goto B73552b;
case 0x73552e:c.instructions+=2;goto B73552e;
case 0x735530:c.instructions+=1;goto B735530;
case 0x735532:goto L735532;
case 0x735533:c.instructions+=2;goto B735533;
case 0x735535:c.instructions+=1;goto B735535;
case 0x73553a:goto L73553a;
case 0x73553e:c.instructions+=4;goto B73553e;
case 0x73553f:c.instructions+=3;goto B73553f;
case 0x735541:c.instructions+=2;goto B735541;
case 0x735543:c.instructions+=1;goto B735543;
case 0x735544:goto L735544;
case 0x735545:c.instructions+=3;goto B735545;
case 0x735546:c.instructions+=2;goto B735546;
case 0x735549:c.instructions+=1;goto B735549;
case 0x735550:goto L735550;
case 0x735555:c.instructions+=5;goto B735555;
case 0x735556:c.instructions+=4;goto B735556;
case 0x735558:c.instructions+=3;goto B735558;
case 0x735559:c.instructions+=2;goto B735559;
case 0x73555b:c.instructions+=1;goto B73555b;
case 0x735561:goto L735561;
case 0x735563:c.instructions+=1;goto B735563;
case 0x735568:goto L735568;
case 0x73556e:c.instructions+=3;goto B73556e;
case 0x73556f:c.instructions+=2;goto B73556f;
case 0x735571:c.instructions+=1;goto B735571;
case 0x735577:goto L735577;
case 0x735579:c.instructions+=2;goto B735579;
case 0x73557a:c.instructions+=1;goto B73557a;
case 0x735580:goto L735580;
case 0x735585:c.instructions+=5;goto B735585;
case 0x735586:c.instructions+=4;goto B735586;
case 0x735588:c.instructions+=3;goto B735588;
case 0x735589:c.instructions+=2;goto B735589;
case 0x73558b:c.instructions+=1;goto B73558b;
case 0x735591:goto L735591;
case 0x735594:c.instructions+=2;goto B735594;
case 0x735596:c.instructions+=1;goto B735596;
case 0x735598:goto L735598;
case 0x735599:c.instructions+=2;goto B735599;
case 0x73559d:c.instructions+=1;goto B73559d;
case 0x7355a0:goto L7355a0;
case 0x7355a3:c.instructions+=3;goto B7355a3;
case 0x7355a4:c.instructions+=2;goto B7355a4;
case 0x7355a5:c.instructions+=1;goto B7355a5;
case 0x7355a8:goto L7355a8;
case 0x7355aa:c.instructions+=3;goto B7355aa;
case 0x7355ad:c.instructions+=2;goto B7355ad;
case 0x7355af:c.instructions+=1;goto B7355af;
case 0x7355b1:goto L7355b1;
case 0x7355b2:goto L7355b2;
case 0x7355b8:c.instructions+=2;goto B7355b8;
case 0x7355b9:c.instructions+=1;goto B7355b9;
case 0x7355bf:goto L7355bf;
case 0x7355c1:c.instructions+=2;goto B7355c1;
case 0x7355c2:c.instructions+=1;goto B7355c2;
case 0x7355d0:goto L7355d0;
case 0x7355d4:c.instructions+=3;goto B7355d4;
case 0x7355d7:c.instructions+=2;goto B7355d7;
case 0x7355d9:c.instructions+=1;goto B7355d9;
case 0x7355db:goto L7355db;
case 0x7355dd:c.instructions+=1;goto B7355dd;
case 0x7355de:goto L7355de;
case 0x7355e0:c.instructions+=2;goto B7355e0;
case 0x7355e2:c.instructions+=1;goto B7355e2;
case 0x7355e4:goto L7355e4;
case 0x7355e9:c.instructions+=1;goto B7355e9;
case 0x7355ea:goto L7355ea;
case 0x7355ed:c.instructions+=1;goto B7355ed;
case 0x7355ef:goto L7355ef;
case 0x7355f4:c.instructions+=3;goto B7355f4;
case 0x7355f7:c.instructions+=2;goto B7355f7;
case 0x7355fd:c.instructions+=1;goto B7355fd;
case 0x7355fe:goto L7355fe;
case 0x735600:c.instructions+=6;goto B735600;
case 0x735604:c.instructions+=5;goto B735604;
case 0x735606:c.instructions+=4;goto B735606;
case 0x73560d:c.instructions+=3;goto B73560d;
case 0x73560f:c.instructions+=2;goto B73560f;
case 0x735611:c.instructions+=1;goto B735611;
case 0x735613:goto L735613;
case 0x735616:goto L735616;
case 0x735618:c.instructions+=2;goto B735618;
case 0x73561a:c.instructions+=1;goto B73561a;
case 0x735620:goto L735620;
case 0x735624:c.instructions+=3;goto B735624;
case 0x735627:c.instructions+=2;goto B735627;
case 0x735629:c.instructions+=1;goto B735629;
case 0x73562b:goto L73562b;
case 0x73562d:c.instructions+=1;goto B73562d;
case 0x73562e:goto L73562e;
case 0x735630:c.instructions+=2;goto B735630;
case 0x735632:c.instructions+=1;goto B735632;
case 0x735634:goto L735634;
case 0x735639:c.instructions+=1;goto B735639;
case 0x73563a:goto L73563a;
case 0x73563d:c.instructions+=1;goto B73563d;
case 0x73563f:goto L73563f;
case 0x735644:c.instructions+=3;goto B735644;
case 0x735647:c.instructions+=2;goto B735647;
case 0x73564d:c.instructions+=1;goto B73564d;
case 0x73564e:goto L73564e;
case 0x735650:c.instructions+=3;goto B735650;
case 0x735654:c.instructions+=2;goto B735654;
case 0x735656:c.instructions+=1;goto B735656;
case 0x735658:goto L735658;
case 0x73565a:c.instructions+=1;goto B73565a;
case 0x73565c:goto L73565c;
case 0x73565f:c.instructions+=2;goto B73565f;
case 0x735661:c.instructions+=1;goto B735661;
case 0x735663:goto L735663;
case 0x735665:c.instructions+=1;goto B735665;
case 0x735667:goto L735667;
case 0x735669:c.instructions+=2;goto B735669;
case 0x73566b:c.instructions+=1;goto B73566b;
case 0x73566d:goto L73566d;
case 0x735670:c.instructions+=1;goto B735670;
case 0x735673:goto L735673;
case 0x735675:c.instructions+=1;goto B735675;
case 0x735680:goto L735680;
case 0x735685:c.instructions+=5;goto B735685;
case 0x735686:c.instructions+=4;goto B735686;
case 0x735688:c.instructions+=3;goto B735688;
case 0x735689:c.instructions+=2;goto B735689;
case 0x73568b:c.instructions+=1;goto B73568b;
case 0x735691:goto L735691;
case 0x735694:c.instructions+=6;goto B735694;
case 0x735698:c.instructions+=5;goto B735698;
case 0x73569a:c.instructions+=4;goto B73569a;
case 0x7356a1:c.instructions+=3;goto B7356a1;
case 0x7356a4:c.instructions+=2;goto B7356a4;
case 0x7356a6:c.instructions+=1;goto B7356a6;
case 0x7356a8:goto L7356a8;
case 0x7356ab:goto L7356ab;
case 0x7356ae:c.instructions+=4;goto B7356ae;
case 0x7356b1:c.instructions+=3;goto B7356b1;
case 0x7356b7:c.instructions+=2;goto B7356b7;
case 0x7356b8:c.instructions+=1;goto B7356b8;
case 0x7356be:goto L7356be;
case 0x7356c0:c.instructions+=2;goto B7356c0;
case 0x7356c1:c.instructions+=1;goto B7356c1;
case 0x7356d0:goto L7356d0;
case 0x7356d4:c.instructions+=4;goto B7356d4;
case 0x7356d7:c.instructions+=3;goto B7356d7;
case 0x7356d9:c.instructions+=2;goto B7356d9;
case 0x7356da:c.instructions+=1;goto B7356da;
case 0x7356dc:goto L7356dc;
case 0x7356de:c.instructions+=2;goto B7356de;
case 0x7356df:c.instructions+=1;goto B7356df;
case 0x7356e0:goto L7356e0;
case 0x7356e2:c.instructions+=2;goto B7356e2;
case 0x7356e4:c.instructions+=1;goto B7356e4;
case 0x7356e6:goto L7356e6;
case 0x7356eb:c.instructions+=2;goto B7356eb;
case 0x7356ec:c.instructions+=1;goto B7356ec;
case 0x7356ed:goto L7356ed;
case 0x7356f0:c.instructions+=1;goto B7356f0;
case 0x7356f2:goto L7356f2;
case 0x7356f7:c.instructions+=4;goto B7356f7;
case 0x7356fa:c.instructions+=3;goto B7356fa;
case 0x735700:c.instructions+=2;goto B735700;
case 0x735701:c.instructions+=1;goto B735701;
case 0x735702:goto L735702;
case 0x735706:c.instructions+=6;goto B735706;
case 0x735708:c.instructions+=5;goto B735708;
case 0x73570b:c.instructions+=4;goto B73570b;
case 0x73570d:c.instructions+=3;goto B73570d;
case 0x73570e:c.instructions+=2;goto B73570e;
case 0x735711:c.instructions+=1;goto B735711;
case 0x735713:goto L735713;
case 0x735715:c.instructions+=3;goto B735715;
case 0x735717:c.instructions+=2;goto B735717;
case 0x735719:c.instructions+=1;goto B735719;
case 0x73571b:goto L73571b;
case 0x735720:goto L735720;
case 0x735723:c.instructions+=3;goto B735723;
case 0x735724:c.instructions+=2;goto B735724;
case 0x735725:c.instructions+=1;goto B735725;
case 0x735728:goto L735728;
case 0x73572a:c.instructions+=3;goto B73572a;
case 0x73572d:c.instructions+=2;goto B73572d;
case 0x73572f:c.instructions+=1;goto B73572f;
case 0x735731:goto L735731;
case 0x735732:c.instructions+=3;goto B735732;
case 0x735734:c.instructions+=2;goto B735734;
case 0x735735:c.instructions+=1;goto B735735;
case 0x735740:goto L735740;
case 0x735744:c.instructions+=3;goto B735744;
case 0x735747:c.instructions+=2;goto B735747;
case 0x735749:c.instructions+=1;goto B735749;
case 0x73574b:goto L73574b;
case 0x73574d:c.instructions+=1;goto B73574d;
case 0x73574e:goto L73574e;
case 0x735750:c.instructions+=2;goto B735750;
case 0x735752:c.instructions+=1;goto B735752;
case 0x735754:goto L735754;
case 0x735759:c.instructions+=1;goto B735759;
case 0x73575a:goto L73575a;
case 0x73575d:c.instructions+=1;goto B73575d;
case 0x73575f:goto L73575f;
case 0x735764:c.instructions+=3;goto B735764;
case 0x735767:c.instructions+=2;goto B735767;
case 0x73576d:c.instructions+=1;goto B73576d;
case 0x73576e:goto L73576e;
case 0x735770:c.instructions+=6;goto B735770;
case 0x735774:c.instructions+=5;goto B735774;
case 0x735776:c.instructions+=4;goto B735776;
case 0x73577d:c.instructions+=3;goto B73577d;
case 0x73577f:c.instructions+=2;goto B73577f;
case 0x735781:c.instructions+=1;goto B735781;
case 0x735783:goto L735783;
case 0x735786:goto L735786;
case 0x735788:c.instructions+=5;goto B735788;
case 0x73578b:c.instructions+=4;goto B73578b;
case 0x73578c:c.instructions+=3;goto B73578c;
case 0x73578f:c.instructions+=2;goto B73578f;
case 0x735790:c.instructions+=1;goto B735790;
case 0x735793:goto L735793;
case 0x735796:c.instructions+=2;goto B735796;
case 0x735798:c.instructions+=1;goto B735798;
case 0x7357a0:goto L7357a0;
case 0x7357a4:c.instructions+=3;goto B7357a4;
case 0x7357a7:c.instructions+=2;goto B7357a7;
case 0x7357a9:c.instructions+=1;goto B7357a9;
case 0x7357ab:goto L7357ab;
case 0x7357ad:c.instructions+=1;goto B7357ad;
case 0x7357ae:goto L7357ae;
case 0x7357b0:c.instructions+=2;goto B7357b0;
case 0x7357b2:c.instructions+=1;goto B7357b2;
case 0x7357b4:goto L7357b4;
case 0x7357b9:c.instructions+=1;goto B7357b9;
case 0x7357ba:goto L7357ba;
case 0x7357bd:c.instructions+=1;goto B7357bd;
case 0x7357bf:goto L7357bf;
case 0x7357c4:c.instructions+=3;goto B7357c4;
case 0x7357c7:c.instructions+=2;goto B7357c7;
case 0x7357cd:c.instructions+=1;goto B7357cd;
case 0x7357ce:goto L7357ce;
case 0x7357d0:c.instructions+=3;goto B7357d0;
case 0x7357d4:c.instructions+=2;goto B7357d4;
case 0x7357d6:c.instructions+=1;goto B7357d6;
case 0x7357d8:goto L7357d8;
case 0x7357da:c.instructions+=1;goto B7357da;
case 0x7357dc:goto L7357dc;
case 0x7357df:c.instructions+=2;goto B7357df;
case 0x7357e1:c.instructions+=1;goto B7357e1;
case 0x7357e3:goto L7357e3;
case 0x7357e5:c.instructions+=1;goto B7357e5;
case 0x7357e7:goto L7357e7;
case 0x7357e9:c.instructions+=2;goto B7357e9;
case 0x7357eb:c.instructions+=1;goto B7357eb;
case 0x7357ed:goto L7357ed;
case 0x7357f0:c.instructions+=1;goto B7357f0;
case 0x7357f3:goto L7357f3;
case 0x7357f5:c.instructions+=1;goto B7357f5;
case 0x735800:goto L735800;
case 0x735805:c.instructions+=5;goto B735805;
case 0x735806:c.instructions+=4;goto B735806;
case 0x735808:c.instructions+=3;goto B735808;
case 0x735809:c.instructions+=2;goto B735809;
case 0x73580b:c.instructions+=1;goto B73580b;
case 0x735811:goto L735811;
case 0x735815:c.instructions+=6;goto B735815;
case 0x735817:c.instructions+=5;goto B735817;
case 0x735819:c.instructions+=4;goto B735819;
case 0x73581b:c.instructions+=3;goto B73581b;
case 0x73581c:c.instructions+=2;goto B73581c;
case 0x73581d:c.instructions+=1;goto B73581d;
case 0x735822:goto L735822;
case 0x735828:c.instructions+=4;goto B735828;
case 0x73582b:c.instructions+=3;goto B73582b;
case 0x73582c:c.instructions+=2;goto B73582c;
case 0x73582e:c.instructions+=1;goto B73582e;
case 0x735834:goto L735834;
case 0x735836:c.instructions+=2;goto B735836;
case 0x735837:c.instructions+=1;goto B735837;
case 0x735840:goto L735840;
case 0x735845:c.instructions+=5;goto B735845;
case 0x735846:c.instructions+=4;goto B735846;
case 0x735848:c.instructions+=3;goto B735848;
case 0x735849:c.instructions+=2;goto B735849;
case 0x73584b:c.instructions+=1;goto B73584b;
case 0x735851:goto L735851;
case 0x735855:c.instructions+=6;goto B735855;
case 0x735857:c.instructions+=5;goto B735857;
case 0x735859:c.instructions+=4;goto B735859;
case 0x73585b:c.instructions+=3;goto B73585b;
case 0x73585c:c.instructions+=2;goto B73585c;
case 0x73585d:c.instructions+=1;goto B73585d;
case 0x735862:goto L735862;
case 0x735868:c.instructions+=4;goto B735868;
case 0x73586b:c.instructions+=3;goto B73586b;
case 0x73586c:c.instructions+=2;goto B73586c;
case 0x73586e:c.instructions+=1;goto B73586e;
case 0x735874:goto L735874;
case 0x735876:c.instructions+=2;goto B735876;
case 0x735877:c.instructions+=1;goto B735877;
case 0x735880:goto L735880;
case 0x735885:c.instructions+=4;goto B735885;
case 0x735886:c.instructions+=3;goto B735886;
case 0x735888:c.instructions+=2;goto B735888;
case 0x735889:c.instructions+=1;goto B735889;
case 0x73588f:goto L73588f;
case 0x735893:c.instructions+=4;goto B735893;
case 0x735897:c.instructions+=3;goto B735897;
case 0x735898:c.instructions+=2;goto B735898;
case 0x735899:c.instructions+=1;goto B735899;
case 0x73589e:goto L73589e;
case 0x7358a0:c.instructions+=4;goto B7358a0;
case 0x7358a5:c.instructions+=3;goto B7358a5;
case 0x7358a8:c.instructions+=2;goto B7358a8;
case 0x7358a9:c.instructions+=1;goto B7358a9;
case 0x7358af:goto L7358af;
case 0x7358b1:c.instructions+=2;goto B7358b1;
case 0x7358b2:c.instructions+=1;goto B7358b2;
case 0x7358c0:goto L7358c0;
case 0x7358c5:c.instructions+=4;goto B7358c5;
case 0x7358c6:c.instructions+=3;goto B7358c6;
case 0x7358c8:c.instructions+=2;goto B7358c8;
case 0x7358c9:c.instructions+=1;goto B7358c9;
case 0x7358cf:goto L7358cf;
case 0x7358d3:c.instructions+=6;goto B7358d3;
case 0x7358d7:c.instructions+=5;goto B7358d7;
case 0x7358db:c.instructions+=4;goto B7358db;
case 0x7358dc:c.instructions+=3;goto B7358dc;
case 0x7358dd:c.instructions+=2;goto B7358dd;
case 0x7358de:c.instructions+=1;goto B7358de;
case 0x7358e3:goto L7358e3;
case 0x7358e9:c.instructions+=4;goto B7358e9;
case 0x7358ec:c.instructions+=3;goto B7358ec;
case 0x7358ed:c.instructions+=2;goto B7358ed;
case 0x7358ef:c.instructions+=1;goto B7358ef;
case 0x7358f5:goto L7358f5;
case 0x7358f7:c.instructions+=2;goto B7358f7;
case 0x7358f8:c.instructions+=1;goto B7358f8;
case 0x735900:goto L735900;
case 0x735905:c.instructions+=4;goto B735905;
case 0x735906:c.instructions+=3;goto B735906;
case 0x735908:c.instructions+=2;goto B735908;
case 0x735909:c.instructions+=1;goto B735909;
case 0x73590f:goto L73590f;
case 0x735913:c.instructions+=4;goto B735913;
case 0x735916:c.instructions+=3;goto B735916;
case 0x735918:c.instructions+=2;goto B735918;
case 0x73591a:c.instructions+=1;goto B73591a;
case 0x73591c:goto L73591c;
case 0x73591e:c.instructions+=4;goto B73591e;
case 0x735920:c.instructions+=3;goto B735920;
case 0x735925:c.instructions+=2;goto B735925;
case 0x735926:c.instructions+=1;goto B735926;
case 0x73592c:goto L73592c;
case 0x73592e:c.instructions+=2;goto B73592e;
case 0x73592f:c.instructions+=1;goto B73592f;
case 0x735930:goto L735930;
case 0x735932:c.instructions+=2;goto B735932;
case 0x735934:c.instructions+=1;goto B735934;
case 0x735936:goto L735936;
case 0x73593b:c.instructions+=4;goto B73593b;
case 0x73593d:c.instructions+=3;goto B73593d;
case 0x735942:c.instructions+=2;goto B735942;
case 0x735943:c.instructions+=1;goto B735943;
case 0x735949:goto L735949;
case 0x73594b:c.instructions+=2;goto B73594b;
case 0x73594c:c.instructions+=1;goto B73594c;
case 0x73594d:goto L73594d;
case 0x735950:c.instructions+=1;goto B735950;
case 0x735952:goto L735952;
case 0x735957:c.instructions+=6;goto B735957;
case 0x735959:c.instructions+=5;goto B735959;
case 0x73595c:c.instructions+=4;goto B73595c;
case 0x73595e:c.instructions+=3;goto B73595e;
case 0x735963:c.instructions+=2;goto B735963;
case 0x735964:c.instructions+=1;goto B735964;
case 0x73596a:goto L73596a;
case 0x73596c:c.instructions+=2;goto B73596c;
case 0x73596d:c.instructions+=1;goto B73596d;
case 0x73596e:goto L73596e;
case 0x735970:c.instructions+=6;goto B735970;
case 0x735974:c.instructions+=5;goto B735974;
case 0x735976:c.instructions+=4;goto B735976;
case 0x735979:c.instructions+=3;goto B735979;
case 0x73597b:c.instructions+=2;goto B73597b;
case 0x73597d:c.instructions+=1;goto B73597d;
case 0x73597f:goto L73597f;
case 0x735982:goto L735982;
case 0x735984:c.instructions+=3;goto B735984;
case 0x735989:c.instructions+=2;goto B735989;
case 0x73598a:c.instructions+=1;goto B73598a;
case 0x735990:goto L735990;
case 0x735992:c.instructions+=2;goto B735992;
case 0x735993:c.instructions+=1;goto B735993;
case 0x7359a0:goto L7359a0;
case 0x7359a5:c.instructions+=4;goto B7359a5;
case 0x7359a6:c.instructions+=3;goto B7359a6;
case 0x7359a8:c.instructions+=2;goto B7359a8;
case 0x7359a9:c.instructions+=1;goto B7359a9;
case 0x7359af:goto L7359af;
case 0x7359b3:c.instructions+=4;goto B7359b3;
case 0x7359b7:c.instructions+=3;goto B7359b7;
case 0x7359b8:c.instructions+=2;goto B7359b8;
case 0x7359b9:c.instructions+=1;goto B7359b9;
case 0x7359be:goto L7359be;
case 0x7359c0:c.instructions+=4;goto B7359c0;
case 0x7359c5:c.instructions+=3;goto B7359c5;
case 0x7359c8:c.instructions+=2;goto B7359c8;
case 0x7359c9:c.instructions+=1;goto B7359c9;
case 0x7359cf:goto L7359cf;
case 0x7359d1:c.instructions+=2;goto B7359d1;
case 0x7359d2:c.instructions+=1;goto B7359d2;
case 0x7359e0:goto L7359e0;
case 0x7359e4:c.instructions+=17;goto B7359e4;
case 0x7359e6:c.instructions+=16;goto B7359e6;
case 0x7359e9:c.instructions+=15;goto B7359e9;
case 0x7359ea:c.instructions+=14;goto B7359ea;
case 0x7359eb:c.instructions+=13;goto B7359eb;
case 0x7359ef:c.instructions+=12;goto B7359ef;
case 0x7359f0:c.instructions+=11;goto B7359f0;
case 0x7359f2:c.instructions+=10;goto B7359f2;
case 0x7359f5:c.instructions+=9;goto B7359f5;
case 0x7359f8:c.instructions+=8;goto B7359f8;
case 0x7359fb:c.instructions+=7;goto B7359fb;
case 0x7359fe:c.instructions+=6;goto B7359fe;
case 0x735a01:c.instructions+=5;goto B735a01;
case 0x735a03:c.instructions+=4;goto B735a03;
case 0x735a05:c.instructions+=3;goto B735a05;
case 0x735a07:c.instructions+=2;goto B735a07;
case 0x735a0a:c.instructions+=1;goto B735a0a;
case 0x735a0c:goto L735a0c;
case 0x735a0f:c.instructions+=10;goto B735a0f;
case 0x735a10:c.instructions+=9;goto B735a10;
case 0x735a13:c.instructions+=8;goto B735a13;
case 0x735a15:c.instructions+=7;goto B735a15;
case 0x735a18:c.instructions+=6;goto B735a18;
case 0x735a19:c.instructions+=5;goto B735a19;
case 0x735a1a:c.instructions+=4;goto B735a1a;
case 0x735a1b:c.instructions+=3;goto B735a1b;
case 0x735a1d:c.instructions+=2;goto B735a1d;
case 0x735a1e:c.instructions+=1;goto B735a1e;
case 0x735a1f:goto L735a1f;
case 0x735a22:c.instructions+=4;goto B735a22;
case 0x735a23:c.instructions+=3;goto B735a23;
case 0x735a24:c.instructions+=2;goto B735a24;
case 0x735a25:c.instructions+=1;goto B735a25;
case 0x735a30:goto L735a30;
case 0x735a32:c.instructions+=5;goto B735a32;
case 0x735a37:c.instructions+=4;goto B735a37;
case 0x735a3c:c.instructions+=3;goto B735a3c;
case 0x735a41:c.instructions+=2;goto B735a41;
case 0x735a46:c.instructions+=1;goto B735a46;
case 0x735a50:goto L735a50;
case 0x735a54:c.instructions+=2;goto B735a54;
case 0x735a57:c.instructions+=1;goto B735a57;
case 0x735a60:goto L735a60;
case 0x735a64:c.instructions+=6;goto B735a64;
case 0x735a68:c.instructions+=5;goto B735a68;
case 0x735a6a:c.instructions+=4;goto B735a6a;
case 0x735a6c:c.instructions+=3;goto B735a6c;
case 0x735a72:c.instructions+=2;goto B735a72;
case 0x735a77:c.instructions+=1;goto B735a77;
case 0x735a79:goto L735a79;
case 0x735a7b:c.instructions+=2;goto B735a7b;
case 0x735a7d:c.instructions+=1;goto B735a7d;
case 0x735a7f:goto L735a7f;
case 0x735a80:goto L735a80;
case 0x735a86:c.instructions+=7;goto B735a86;
case 0x735a89:c.instructions+=6;goto B735a89;
case 0x735a8f:c.instructions+=5;goto B735a8f;
case 0x735a93:c.instructions+=4;goto B735a93;
case 0x735a99:c.instructions+=3;goto B735a99;
case 0x735a9a:c.instructions+=2;goto B735a9a;
case 0x735a9c:c.instructions+=1;goto B735a9c;
case 0x735a9e:goto L735a9e;
case 0x735aa0:goto L735aa0;
case 0x735aa3:c.instructions+=6;goto B735aa3;
case 0x735aa8:c.instructions+=5;goto B735aa8;
case 0x735aaa:c.instructions+=4;goto B735aaa;
case 0x735aad:c.instructions+=3;goto B735aad;
case 0x735ab4:c.instructions+=2;goto B735ab4;
case 0x735ab8:c.instructions+=1;goto B735ab8;
case 0x735aba:goto L735aba;
case 0x735abd:c.instructions+=2;goto B735abd;
case 0x735ac0:c.instructions+=1;goto B735ac0;
case 0x735ac1:goto L735ac1;
case 0x735ac3:c.instructions+=5;goto B735ac3;
case 0x735ac4:c.instructions+=4;goto B735ac4;
case 0x735ac5:c.instructions+=3;goto B735ac5;
case 0x735ac6:c.instructions+=2;goto B735ac6;
case 0x735ac7:c.instructions+=1;goto B735ac7;
case 0x735acd:goto L735acd;
case 0x735ad1:c.instructions+=3;goto B735ad1;
case 0x735ad4:c.instructions+=2;goto B735ad4;
case 0x735ada:c.instructions+=1;goto B735ada;
case 0x735adc:goto L735adc;
case 0x735ae0:goto L735ae0;
case 0x735ae4:c.instructions+=8;goto B735ae4;
case 0x735ae6:c.instructions+=7;goto B735ae6;
case 0x735ae7:c.instructions+=6;goto B735ae7;
case 0x735ae9:c.instructions+=5;goto B735ae9;
case 0x735aeb:c.instructions+=4;goto B735aeb;
case 0x735aef:c.instructions+=3;goto B735aef;
case 0x735af2:c.instructions+=2;goto B735af2;
case 0x735af5:c.instructions+=1;goto B735af5;
case 0x735af7:goto L735af7;
case 0x735afb:c.instructions+=2;goto B735afb;
case 0x735aff:c.instructions+=1;goto B735aff;
case 0x735b05:goto L735b05;
case 0x735b07:c.instructions+=1;goto B735b07;
case 0x735b09:goto L735b09;
case 0x735b0c:c.instructions+=3;goto B735b0c;
case 0x735b0f:c.instructions+=2;goto B735b0f;
case 0x735b12:c.instructions+=1;goto B735b12;
case 0x735b14:goto L735b14;
case 0x735b18:c.instructions+=3;goto B735b18;
case 0x735b1c:c.instructions+=2;goto B735b1c;
case 0x735b20:c.instructions+=1;goto B735b20;
case 0x735b26:goto L735b26;
case 0x735b2c:c.instructions+=1;goto B735b2c;
case 0x735b2f:goto L735b2f;
case 0x735b35:goto L735b35;
case 0x735b39:goto L735b39;
case 0x735b3c:c.instructions+=1;goto B735b3c;
case 0x735b3e:goto L735b3e;
case 0x735b42:c.instructions+=2;goto B735b42;
case 0x735b46:c.instructions+=1;goto B735b46;
case 0x735b48:goto L735b48;
case 0x735b4b:goto L735b4b;
case 0x735b4d:goto L735b4d;
case 0x735b51:c.instructions+=3;goto B735b51;
case 0x735b54:c.instructions+=2;goto B735b54;
case 0x735b57:c.instructions+=1;goto B735b57;
case 0x735b59:goto L735b59;
case 0x735b5d:c.instructions+=3;goto B735b5d;
case 0x735b61:c.instructions+=2;goto B735b61;
case 0x735b65:c.instructions+=1;goto B735b65;
case 0x735b67:goto L735b67;
case 0x735b6d:c.instructions+=1;goto B735b6d;
case 0x735b70:goto L735b70;
case 0x735b72:goto L735b72;
case 0x735b76:goto L735b76;
case 0x735b79:c.instructions+=1;goto B735b79;
case 0x735b7b:goto L735b7b;
case 0x735b7d:goto L735b7d;
case 0x735b81:c.instructions+=2;goto B735b81;
case 0x735b85:c.instructions+=1;goto B735b85;
case 0x735b87:goto L735b87;
case 0x735b88:c.instructions+=2;goto B735b88;
case 0x735b8c:c.instructions+=1;goto B735b8c;
case 0x735b8e:goto L735b8e;
case 0x735b92:c.instructions+=4;goto B735b92;
case 0x735b93:c.instructions+=3;goto B735b93;
case 0x735b95:c.instructions+=2;goto B735b95;
case 0x735b99:c.instructions+=1;goto B735b99;
case 0x735b9b:goto L735b9b;
case 0x735b9f:c.instructions+=2;goto B735b9f;
case 0x735ba3:c.instructions+=1;goto B735ba3;
case 0x735ba9:goto L735ba9;
case 0x735bad:goto L735bad;
case 0x735bae:c.instructions+=5;goto B735bae;
case 0x735baf:c.instructions+=4;goto B735baf;
case 0x735bb0:c.instructions+=3;goto B735bb0;
case 0x735bb1:c.instructions+=2;goto B735bb1;
case 0x735bb4:c.instructions+=1;goto B735bb4;
case 0x735bb5:goto L735bb5;
case 0x735bb6:c.instructions+=6;goto B735bb6;
case 0x735bb7:c.instructions+=5;goto B735bb7;
case 0x735bb8:c.instructions+=4;goto B735bb8;
case 0x735bbb:c.instructions+=3;goto B735bbb;
case 0x735bbc:c.instructions+=2;goto B735bbc;
case 0x735bbf:c.instructions+=1;goto B735bbf;
case 0x735bc0:goto L735bc0;
case 0x735bc5:c.instructions+=6;goto B735bc5;
case 0x735bc6:c.instructions+=5;goto B735bc6;
case 0x735bc7:c.instructions+=4;goto B735bc7;
case 0x735bc8:c.instructions+=3;goto B735bc8;
case 0x735bc9:c.instructions+=2;goto B735bc9;
case 0x735bcc:c.instructions+=1;goto B735bcc;
case 0x735bd0:goto L735bd0;
case 0x735bd5:c.instructions+=9;goto B735bd5;
case 0x735bd6:c.instructions+=8;goto B735bd6;
case 0x735bd7:c.instructions+=7;goto B735bd7;
case 0x735bdd:c.instructions+=6;goto B735bdd;
case 0x735bde:c.instructions+=5;goto B735bde;
case 0x735bdf:c.instructions+=4;goto B735bdf;
case 0x735be1:c.instructions+=3;goto B735be1;
case 0x735be3:c.instructions+=2;goto B735be3;
case 0x735be6:c.instructions+=1;goto B735be6;
case 0x735be8:goto L735be8;
case 0x735bea:c.instructions+=1;goto B735bea;
case 0x735bec:goto L735bec;
case 0x735bee:c.instructions+=1;goto B735bee;
case 0x735bf0:goto L735bf0;
case 0x735bf5:goto L735bf5;
case 0x735bf8:c.instructions+=7;goto B735bf8;
case 0x735bf9:c.instructions+=6;goto B735bf9;
case 0x735bfb:c.instructions+=5;goto B735bfb;
case 0x735bfd:c.instructions+=4;goto B735bfd;
case 0x735c01:c.instructions+=3;goto B735c01;
case 0x735c04:c.instructions+=2;goto B735c04;
case 0x735c07:c.instructions+=1;goto B735c07;
case 0x735c09:goto L735c09;
case 0x735c0b:goto L735c0b;
case 0x735c0e:c.instructions+=1;goto B735c0e;
case 0x735c10:goto L735c10;
case 0x735c13:goto L735c13;
case 0x735c15:c.instructions+=1;goto B735c15;
case 0x735c17:goto L735c17;
case 0x735c18:c.instructions+=5;goto B735c18;
case 0x735c19:c.instructions+=4;goto B735c19;
case 0x735c1a:c.instructions+=3;goto B735c1a;
case 0x735c1e:c.instructions+=2;goto B735c1e;
case 0x735c1f:c.instructions+=1;goto B735c1f;
case 0x735c20:goto L735c20;
case 0x735c24:c.instructions+=7;goto B735c24;
case 0x735c28:c.instructions+=6;goto B735c28;
case 0x735c29:c.instructions+=5;goto B735c29;
case 0x735c2a:c.instructions+=4;goto B735c2a;
case 0x735c2b:c.instructions+=3;goto B735c2b;
case 0x735c2d:c.instructions+=2;goto B735c2d;
case 0x735c2e:c.instructions+=1;goto B735c2e;
case 0x735c30:goto L735c30;
case 0x735c36:c.instructions+=9;goto B735c36;
case 0x735c3b:c.instructions+=8;goto B735c3b;
case 0x735c3c:c.instructions+=7;goto B735c3c;
case 0x735c3d:c.instructions+=6;goto B735c3d;
case 0x735c3e:c.instructions+=5;goto B735c3e;
case 0x735c3f:c.instructions+=4;goto B735c3f;
case 0x735c41:c.instructions+=3;goto B735c41;
case 0x735c43:c.instructions+=2;goto B735c43;
case 0x735c46:c.instructions+=1;goto B735c46;
case 0x735c48:goto L735c48;
case 0x735c4a:c.instructions+=1;goto B735c4a;
case 0x735c4c:goto L735c4c;
case 0x735c4e:c.instructions+=1;goto B735c4e;
case 0x735c50:goto L735c50;
case 0x735c55:c.instructions+=2;goto B735c55;
case 0x735c5a:c.instructions+=1;goto B735c5a;
case 0x735c60:goto L735c60;
case 0x735c66:c.instructions+=8;goto B735c66;
case 0x735c69:c.instructions+=7;goto B735c69;
case 0x735c6a:c.instructions+=6;goto B735c6a;
case 0x735c6c:c.instructions+=5;goto B735c6c;
case 0x735c6e:c.instructions+=4;goto B735c6e;
case 0x735c72:c.instructions+=3;goto B735c72;
case 0x735c75:c.instructions+=2;goto B735c75;
case 0x735c78:c.instructions+=1;goto B735c78;
case 0x735c7a:goto L735c7a;
case 0x735c7e:c.instructions+=1;goto B735c7e;
case 0x735c80:goto L735c80;
case 0x735c83:goto L735c83;
case 0x735c85:goto L735c85;
case 0x735c88:c.instructions+=1;goto B735c88;
case 0x735c8a:goto L735c8a;
case 0x735c8e:c.instructions+=1;goto B735c8e;
case 0x735c90:goto L735c90;
case 0x735c93:c.instructions+=1;goto B735c93;
case 0x735c95:goto L735c95;
case 0x735c98:goto L735c98;
case 0x735c9a:c.instructions+=1;goto B735c9a;
case 0x735c9c:goto L735c9c;
case 0x735c9d:c.instructions+=5;goto B735c9d;
case 0x735c9e:c.instructions+=4;goto B735c9e;
case 0x735c9f:c.instructions+=3;goto B735c9f;
case 0x735ca3:c.instructions+=2;goto B735ca3;
case 0x735ca4:c.instructions+=1;goto B735ca4;
case 0x735ca5:goto L735ca5;
case 0x735cab:c.instructions+=8;goto B735cab;
case 0x735cae:c.instructions+=7;goto B735cae;
case 0x735cb2:c.instructions+=6;goto B735cb2;
case 0x735cb3:c.instructions+=5;goto B735cb3;
case 0x735cb4:c.instructions+=4;goto B735cb4;
case 0x735cb5:c.instructions+=3;goto B735cb5;
case 0x735cb7:c.instructions+=2;goto B735cb7;
case 0x735cb8:c.instructions+=1;goto B735cb8;
case 0x735cc0:goto L735cc0;
case 0x735cc6:c.instructions+=3;goto B735cc6;
case 0x735cc8:c.instructions+=2;goto B735cc8;
case 0x735cca:c.instructions+=1;goto B735cca;
case 0x735ccc:goto L735ccc;
case 0x735cd0:c.instructions+=2;goto B735cd0;
case 0x735cd2:c.instructions+=1;goto B735cd2;
case 0x735cd4:goto L735cd4;
case 0x735cd8:c.instructions+=3;goto B735cd8;
case 0x735cdc:c.instructions+=2;goto B735cdc;
case 0x735ce1:c.instructions+=1;goto B735ce1;
case 0x735ce3:goto L735ce3;
case 0x735ce6:c.instructions+=2;goto B735ce6;
case 0x735cea:c.instructions+=1;goto B735cea;
case 0x735cec:goto L735cec;
case 0x735cf1:goto L735cf1;
case 0x735d00:goto L735d00;
case 0x735d01:c.instructions+=4;goto B735d01;
case 0x735d07:c.instructions+=3;goto B735d07;
case 0x735d09:c.instructions+=2;goto B735d09;
case 0x735d0b:c.instructions+=1;goto B735d0b;
case 0x735d0d:goto L735d0d;
case 0x735d11:c.instructions+=1;goto B735d11;
case 0x735d17:goto L735d17;
case 0x735d1a:c.instructions+=1;goto B735d1a;
case 0x735d1c:goto L735d1c;
case 0x735d1d:c.instructions+=2;goto B735d1d;
case 0x735d1f:c.instructions+=1;goto B735d1f;
case 0x735d21:goto L735d21;
case 0x735d24:goto L735d24;
case 0x735d25:c.instructions+=1;goto B735d25;
case 0x735d30:goto L735d30;
case 0x735d31:c.instructions+=5;goto B735d31;
case 0x735d32:c.instructions+=4;goto B735d32;
case 0x735d36:c.instructions+=3;goto B735d36;
case 0x735d39:c.instructions+=2;goto B735d39;
case 0x735d3b:c.instructions+=1;goto B735d3b;
case 0x735d3d:goto L735d3d;
case 0x735d3e:c.instructions+=1;goto B735d3e;
case 0x735d43:goto L735d43;
case 0x735d45:c.instructions+=3;goto B735d45;
case 0x735d48:c.instructions+=2;goto B735d48;
case 0x735d4a:c.instructions+=1;goto B735d4a;
case 0x735d4c:goto L735d4c;
case 0x735d50:c.instructions+=2;goto B735d50;
case 0x735d53:c.instructions+=1;goto B735d53;
case 0x735d57:goto L735d57;
case 0x735d5a:c.instructions+=3;goto B735d5a;
case 0x735d5c:c.instructions+=2;goto B735d5c;
case 0x735d5e:c.instructions+=1;goto B735d5e;
case 0x735d60:goto L735d60;
case 0x735d62:goto L735d62;
case 0x735d64:goto L735d64;
case 0x735d65:c.instructions+=2;goto B735d65;
case 0x735d66:c.instructions+=1;goto B735d66;
case 0x735d70:goto L735d70;
case 0x735d74:c.instructions+=6;goto B735d74;
case 0x735d75:c.instructions+=5;goto B735d75;
case 0x735d76:c.instructions+=4;goto B735d76;
case 0x735d7a:c.instructions+=3;goto B735d7a;
case 0x735d7c:c.instructions+=2;goto B735d7c;
case 0x735d7e:c.instructions+=1;goto B735d7e;
case 0x735d80:goto L735d80;
case 0x735d81:c.instructions+=1;goto B735d81;
case 0x735d86:goto L735d86;
case 0x735d89:c.instructions+=5;goto B735d89;
case 0x735d8c:c.instructions+=4;goto B735d8c;
case 0x735d8d:c.instructions+=3;goto B735d8d;
case 0x735d8f:c.instructions+=2;goto B735d8f;
case 0x735d91:c.instructions+=1;goto B735d91;
case 0x735d93:goto L735d93;
case 0x735d94:c.instructions+=3;goto B735d94;
case 0x735d98:c.instructions+=2;goto B735d98;
case 0x735d99:c.instructions+=1;goto B735d99;
case 0x735da0:goto L735da0;
case 0x735da1:c.instructions+=1;goto B735da1;
case 0x735da3:goto L735da3;
case 0x735da6:goto L735da6;
case 0x735daa:c.instructions+=2;goto B735daa;
case 0x735dac:c.instructions+=1;goto B735dac;
case 0x735dae:goto L735dae;
case 0x735daf:c.instructions+=2;goto B735daf;
case 0x735db1:c.instructions+=1;goto B735db1;
case 0x735db3:goto L735db3;
case 0x735db4:c.instructions+=5;goto B735db4;
case 0x735db5:c.instructions+=4;goto B735db5;
case 0x735db6:c.instructions+=3;goto B735db6;
case 0x735db8:c.instructions+=2;goto B735db8;
case 0x735db9:c.instructions+=1;goto B735db9;
case 0x735dba:goto L735dba;
case 0x735dbb:c.instructions+=5;goto B735dbb;
case 0x735dbc:c.instructions+=4;goto B735dbc;
case 0x735dbd:c.instructions+=3;goto B735dbd;
case 0x735dc0:c.instructions+=2;goto B735dc0;
case 0x735dc1:c.instructions+=1;goto B735dc1;
case 0x735dc2:goto L735dc2;
case 0x735dc3:c.instructions+=3;goto B735dc3;
case 0x735dc5:c.instructions+=2;goto B735dc5;
case 0x735dc6:c.instructions+=1;goto B735dc6;
case 0x735dd0:goto L735dd0;
case 0x735dd4:c.instructions+=15;goto B735dd4;
case 0x735dd6:c.instructions+=14;goto B735dd6;
case 0x735dd9:c.instructions+=13;goto B735dd9;
case 0x735dda:c.instructions+=12;goto B735dda;
case 0x735ddb:c.instructions+=11;goto B735ddb;
case 0x735ddf:c.instructions+=10;goto B735ddf;
case 0x735de2:c.instructions+=9;goto B735de2;
case 0x735de5:c.instructions+=8;goto B735de5;
case 0x735de8:c.instructions+=7;goto B735de8;
case 0x735deb:c.instructions+=6;goto B735deb;
case 0x735dee:c.instructions+=5;goto B735dee;
case 0x735df0:c.instructions+=4;goto B735df0;
case 0x735df4:c.instructions+=3;goto B735df4;
case 0x735df7:c.instructions+=2;goto B735df7;
case 0x735dfa:c.instructions+=1;goto B735dfa;
case 0x735dfc:goto L735dfc;
case 0x735e01:c.instructions+=9;goto B735e01;
case 0x735e03:c.instructions+=8;goto B735e03;
case 0x735e05:c.instructions+=7;goto B735e05;
case 0x735e06:c.instructions+=6;goto B735e06;
case 0x735e08:c.instructions+=5;goto B735e08;
case 0x735e0a:c.instructions+=4;goto B735e0a;
case 0x735e0b:c.instructions+=3;goto B735e0b;
case 0x735e0d:c.instructions+=2;goto B735e0d;
case 0x735e0f:c.instructions+=1;goto B735e0f;
case 0x735e11:goto L735e11;
case 0x735e13:c.instructions+=3;goto B735e13;
case 0x735e16:c.instructions+=2;goto B735e16;
case 0x735e18:c.instructions+=1;goto B735e18;
case 0x735e1a:goto L735e1a;
case 0x735e1d:c.instructions+=1;goto B735e1d;
case 0x735e20:goto L735e20;
case 0x735e21:c.instructions+=2;goto B735e21;
case 0x735e23:c.instructions+=1;goto B735e23;
case 0x735e25:goto L735e25;
case 0x735e28:c.instructions+=2;goto B735e28;
case 0x735e2a:c.instructions+=1;goto B735e2a;
case 0x735e2c:goto L735e2c;
case 0x735e2d:c.instructions+=1;goto B735e2d;
case 0x735e30:goto L735e30;
case 0x735e32:c.instructions+=6;goto B735e32;
case 0x735e34:c.instructions+=5;goto B735e34;
case 0x735e37:c.instructions+=4;goto B735e37;
case 0x735e38:c.instructions+=3;goto B735e38;
case 0x735e3b:c.instructions+=2;goto B735e3b;
case 0x735e3d:c.instructions+=1;goto B735e3d;
case 0x735e3f:goto L735e3f;
case 0x735e41:c.instructions+=1;goto B735e41;
case 0x735e43:goto L735e43;
case 0x735e45:c.instructions+=7;goto B735e45;
case 0x735e47:c.instructions+=6;goto B735e47;
case 0x735e49:c.instructions+=5;goto B735e49;
case 0x735e4b:c.instructions+=4;goto B735e4b;
case 0x735e4c:c.instructions+=3;goto B735e4c;
case 0x735e4f:c.instructions+=2;goto B735e4f;
case 0x735e51:c.instructions+=1;goto B735e51;
case 0x735e53:goto L735e53;
case 0x735e55:c.instructions+=1;goto B735e55;
case 0x735e56:goto L735e56;
case 0x735e57:c.instructions+=1;goto B735e57;
case 0x735e59:goto L735e59;
case 0x735e5a:goto L735e5a;
case 0x735e5b:c.instructions+=2;goto B735e5b;
case 0x735e5c:c.instructions+=1;goto B735e5c;
case 0x735e60:goto L735e60;
case 0x735e65:c.instructions+=4;goto B735e65;
case 0x735e66:c.instructions+=3;goto B735e66;
case 0x735e69:c.instructions+=2;goto B735e69;
case 0x735e6b:c.instructions+=1;goto B735e6b;
case 0x735e71:goto L735e71;
case 0x735e72:c.instructions+=4;goto B735e72;
case 0x735e76:c.instructions+=3;goto B735e76;
case 0x735e77:c.instructions+=2;goto B735e77;
case 0x735e78:c.instructions+=1;goto B735e78;
case 0x735e7d:goto L735e7d;
case 0x735e80:c.instructions+=4;goto B735e80;
case 0x735e85:c.instructions+=3;goto B735e85;
case 0x735e88:c.instructions+=2;goto B735e88;
case 0x735e8a:c.instructions+=1;goto B735e8a;
case 0x735e8c:goto L735e8c;
case 0x735e8e:c.instructions+=1;goto B735e8e;
case 0x735e90:goto L735e90;
case 0x735e93:c.instructions+=2;goto B735e93;
case 0x735e95:c.instructions+=1;goto B735e95;
case 0x735e97:goto L735e97;
case 0x735e98:c.instructions+=1;goto B735e98;
case 0x735e9d:goto L735e9d;
case 0x735ea0:goto L735ea0;
case 0x735ea6:c.instructions+=2;goto B735ea6;
case 0x735ea8:c.instructions+=1;goto B735ea8;
case 0x735eaa:goto L735eaa;
case 0x735eb0:goto L735eb0;
case 0x735eb5:c.instructions+=8;goto B735eb5;
case 0x735eb9:c.instructions+=7;goto B735eb9;
case 0x735ebc:c.instructions+=6;goto B735ebc;
case 0x735ebe:c.instructions+=5;goto B735ebe;
case 0x735ec1:c.instructions+=4;goto B735ec1;
case 0x735ec2:c.instructions+=3;goto B735ec2;
case 0x735ec4:c.instructions+=2;goto B735ec4;
case 0x735ec7:c.instructions+=1;goto B735ec7;
case 0x735ec9:goto L735ec9;
case 0x735ece:c.instructions+=14;goto B735ece;
case 0x735ed2:c.instructions+=13;goto B735ed2;
case 0x735ed7:c.instructions+=12;goto B735ed7;
case 0x735edd:c.instructions+=11;goto B735edd;
case 0x735ee0:c.instructions+=10;goto B735ee0;
case 0x735ee6:c.instructions+=9;goto B735ee6;
case 0x735eec:c.instructions+=8;goto B735eec;
case 0x735eed:c.instructions+=7;goto B735eed;
case 0x735eee:c.instructions+=6;goto B735eee;
case 0x735eef:c.instructions+=5;goto B735eef;
case 0x735ef0:c.instructions+=4;goto B735ef0;
case 0x735ef6:c.instructions+=3;goto B735ef6;
case 0x735efc:c.instructions+=2;goto B735efc;
case 0x735efd:c.instructions+=1;goto B735efd;
case 0x735efe:goto L735efe;
case 0x735f00:c.instructions+=2;goto B735f00;
case 0x735f01:c.instructions+=1;goto B735f01;
case 0x735f02:goto L735f02;
case 0x735f03:c.instructions+=4;goto B735f03;
case 0x735f04:c.instructions+=3;goto B735f04;
case 0x735f06:c.instructions+=2;goto B735f06;
case 0x735f07:c.instructions+=1;goto B735f07;
case 0x735f10:goto L735f10;
case 0x735f11:c.instructions+=5;goto B735f11;
case 0x735f12:c.instructions+=4;goto B735f12;
case 0x735f13:c.instructions+=3;goto B735f13;
case 0x735f17:c.instructions+=2;goto B735f17;
case 0x735f1c:c.instructions+=1;goto B735f1c;
case 0x735f20:goto L735f20;
case 0x735f22:c.instructions+=2;goto B735f22;
case 0x735f24:c.instructions+=1;goto B735f24;
case 0x735f26:goto L735f26;
case 0x735f29:c.instructions+=1;goto B735f29;
case 0x735f2b:goto L735f2b;
case 0x735f2f:c.instructions+=7;goto B735f2f;
case 0x735f32:c.instructions+=6;goto B735f32;
case 0x735f36:c.instructions+=5;goto B735f36;
case 0x735f39:c.instructions+=4;goto B735f39;
case 0x735f3d:c.instructions+=3;goto B735f3d;
case 0x735f3f:c.instructions+=2;goto B735f3f;
case 0x735f41:c.instructions+=1;goto B735f41;
case 0x735f43:goto L735f43;
case 0x735f47:c.instructions+=5;goto B735f47;
case 0x735f49:c.instructions+=4;goto B735f49;
case 0x735f4d:c.instructions+=3;goto B735f4d;
case 0x735f4e:c.instructions+=2;goto B735f4e;
case 0x735f50:c.instructions+=1;goto B735f50;
case 0x735f52:goto L735f52;
case 0x735f55:c.instructions+=2;goto B735f55;
case 0x735f5b:c.instructions+=1;goto B735f5b;
case 0x735f5d:goto L735f5d;
case 0x735f5e:c.instructions+=3;goto B735f5e;
case 0x735f5f:c.instructions+=2;goto B735f5f;
case 0x735f60:c.instructions+=1;goto B735f60;
case 0x735f70:goto L735f70;
case 0x735f72:c.instructions+=5;goto B735f72;
case 0x735f75:c.instructions+=4;goto B735f75;
case 0x735f76:c.instructions+=3;goto B735f76;
case 0x735f78:c.instructions+=2;goto B735f78;
case 0x735f7a:c.instructions+=1;goto B735f7a;
case 0x735f80:goto L735f80;
case 0x735f84:c.instructions+=1;goto B735f84;
case 0x735f8a:goto L735f8a;
case 0x735f8b:c.instructions+=6;goto B735f8b;
case 0x735f8f:c.instructions+=5;goto B735f8f;
case 0x735f90:c.instructions+=4;goto B735f90;
case 0x735f94:c.instructions+=3;goto B735f94;
case 0x735f95:c.instructions+=2;goto B735f95;
case 0x735f96:c.instructions+=1;goto B735f96;
case 0x735f9b:goto L735f9b;
case 0x735f9f:c.instructions+=5;goto B735f9f;
case 0x735fa3:c.instructions+=4;goto B735fa3;
case 0x735fa6:c.instructions+=3;goto B735fa6;
case 0x735fab:c.instructions+=2;goto B735fab;
case 0x735fac:c.instructions+=1;goto B735fac;
case 0x735fb0:goto L735fb0;
case 0x735fb2:c.instructions+=2;goto B735fb2;
case 0x735fb4:c.instructions+=1;goto B735fb4;
case 0x735fb6:goto L735fb6;
case 0x735fba:c.instructions+=2;goto B735fba;
case 0x735fbc:c.instructions+=1;goto B735fbc;
case 0x735fbe:goto L735fbe;
case 0x735fc2:c.instructions+=2;goto B735fc2;
case 0x735fc4:c.instructions+=1;goto B735fc4;
case 0x735fc6:goto L735fc6;
case 0x735fc9:c.instructions+=2;goto B735fc9;
case 0x735fcf:c.instructions+=1;goto B735fcf;
case 0x735fd1:goto L735fd1;
case 0x735fd3:goto L735fd3;
case 0x735fda:c.instructions+=2;goto B735fda;
case 0x735fdc:c.instructions+=1;goto B735fdc;
case 0x735fde:goto L735fde;
case 0x735fdf:c.instructions+=2;goto B735fdf;
case 0x735fe2:c.instructions+=1;goto B735fe2;
case 0x735fe4:goto L735fe4;
case 0x735fe6:goto L735fe6;
case 0x735fea:c.instructions+=3;goto B735fea;
case 0x735ff1:c.instructions+=2;goto B735ff1;
case 0x735ff8:c.instructions+=1;goto B735ff8;
case 0x735ffd:goto L735ffd;
default:missing_instruction(c.pc);}
B735000:L735000:{c.instructions+=1;NFSU2_TR(0x735000);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73500a;}}
}
B735002:L735002:{c.instructions+=2;NFSU2_TR(0x735002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B735004:{NFSU2_TR(0x735004);
__builtin_memmove(gp(0x8b4f48),(R+4),4);
}
B73500a:L73500a:{c.instructions+=3;NFSU2_TR(0x73500a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73500d:{NFSU2_TR(0x73500d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73500f:{NFSU2_TR(0x73500f);
if(r1(R+518)){{goto L735015;}}
}
B735011:L735011:{c.instructions+=2;NFSU2_TR(0x735011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735013:{NFSU2_TR(0x735013);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735015:L735015:{c.instructions+=3;NFSU2_TR(0x735015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B735017:{NFSU2_TR(0x735017);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735019:{NFSU2_TR(0x735019);
if(r1(R+518)){{goto L735021;}}
}
B73501b:L73501b:{c.instructions+=2;NFSU2_TR(0x73501b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73501e:{NFSU2_TR(0x73501e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735021:L735021:{c.instructions+=2;NFSU2_TR(0x735021);
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
B735023:{NFSU2_TR(0x735023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735030:L735030:{c.instructions+=5;NFSU2_TR(0x735030);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735031:{NFSU2_TR(0x735031);
__builtin_memmove((R+28),(R+4),4);
}
B735033:{NFSU2_TR(0x735033);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735036:{NFSU2_TR(0x735036);
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
B735038:{NFSU2_TR(0x735038);
if(r1(R+518)){{goto L735054;}}
}
B73503a:L73503a:{c.instructions+=2;NFSU2_TR(0x73503a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73503b:{NFSU2_TR(0x73503b);
{goto L735040;}
}
B735040:L735040:{c.instructions+=5;NFSU2_TR(0x735040);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735043:{NFSU2_TR(0x735043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B735045:{NFSU2_TR(0x735045);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735046:{NFSU2_TR(0x735046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735047:{NFSU2_TR(0x735047);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73504aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73504a:L73504a:{c.instructions+=4;NFSU2_TR(0x73504a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73504d:{NFSU2_TR(0x73504d);
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
B73504f:{NFSU2_TR(0x73504f);
__builtin_memmove((R+0),(R+24),4);
}
B735051:{NFSU2_TR(0x735051);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735040u);}goto L735040;}}
}
B735053:L735053:{c.instructions+=1;NFSU2_TR(0x735053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735054:L735054:{c.instructions+=2;NFSU2_TR(0x735054);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B735057:{NFSU2_TR(0x735057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735067;}}
}
B735059:L735059:{c.instructions+=5;NFSU2_TR(0x735059);
__builtin_memmove((R+4),gp(0x8b4f3c),4);
}
B73505f:{NFSU2_TR(0x73505f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735061:{NFSU2_TR(0x735061);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735063:{NFSU2_TR(0x735063);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735064:{NFSU2_TR(0x735064);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735067ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B735067:L735067:{c.instructions+=3;NFSU2_TR(0x735067);
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
B735069:{NFSU2_TR(0x735069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73506a:{NFSU2_TR(0x73506a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735070:L735070:{c.instructions+=5;NFSU2_TR(0x735070);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735073:{NFSU2_TR(0x735073);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735077:{NFSU2_TR(0x735077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735079:{NFSU2_TR(0x735079);
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
B73507b:{NFSU2_TR(0x73507b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735080:L735080:{c.instructions+=4;NFSU2_TR(0x735080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735081:{NFSU2_TR(0x735081);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B735084:{NFSU2_TR(0x735084);
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
B735086:{NFSU2_TR(0x735086);
if(r1(R+518)){{goto L7350a2;}}
}
B735088:L735088:{c.instructions+=3;NFSU2_TR(0x735088);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735089:{NFSU2_TR(0x735089);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73508d:{NFSU2_TR(0x73508d);
__builtin_memmove((R+4),(R+4),4);
}
B735090:L735090:{c.instructions+=4;NFSU2_TR(0x735090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735093:{NFSU2_TR(0x735093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735094:{NFSU2_TR(0x735094);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735095:{NFSU2_TR(0x735095);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735098ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B735098:L735098:{c.instructions+=4;NFSU2_TR(0x735098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73509a:{NFSU2_TR(0x73509a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73509d:{NFSU2_TR(0x73509d);
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
B73509f:{NFSU2_TR(0x73509f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735090u);}goto L735090;}}
}
B7350a1:L7350a1:{c.instructions+=1;NFSU2_TR(0x7350a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7350a2:L7350a2:{c.instructions+=3;NFSU2_TR(0x7350a2);
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
B7350a4:{NFSU2_TR(0x7350a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7350a5:{NFSU2_TR(0x7350a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7350b0:L7350b0:{c.instructions+=7;NFSU2_TR(0x7350b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7350b3:{NFSU2_TR(0x7350b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7350b7:{NFSU2_TR(0x7350b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7350b9:{NFSU2_TR(0x7350b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7350c0:{NFSU2_TR(0x7350c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7350c3:{NFSU2_TR(0x7350c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7350c5:{NFSU2_TR(0x7350c5);
if(r1(R+518)){{goto L7350ca;}}
}
B7350c7:L7350c7:{c.instructions+=1;NFSU2_TR(0x7350c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7350ca:L7350ca:{c.instructions+=4;NFSU2_TR(0x7350ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7350cd:{NFSU2_TR(0x7350cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7350d0:{NFSU2_TR(0x7350d0);
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
B7350d2:{NFSU2_TR(0x7350d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7350e0:L7350e0:{c.instructions+=4;NFSU2_TR(0x7350e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7350e3:{NFSU2_TR(0x7350e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7350e7:{NFSU2_TR(0x7350e7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7350e9:{NFSU2_TR(0x7350e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7350f0;}}
}
B7350eb:L7350eb:{c.instructions+=2;NFSU2_TR(0x7350eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7350ed:{NFSU2_TR(0x7350ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7350f0:L7350f0:{c.instructions+=3;NFSU2_TR(0x7350f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7350f3:{NFSU2_TR(0x7350f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7350f5:{NFSU2_TR(0x7350f5);
if(r1(R+518)){{goto L7350fd;}}
}
B7350f7:L7350f7:{c.instructions+=4;NFSU2_TR(0x7350f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7350f8:{NFSU2_TR(0x7350f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B7350fa:{NFSU2_TR(0x7350fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7350fc:{NFSU2_TR(0x7350fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7350fd:L7350fd:{c.instructions+=3;NFSU2_TR(0x7350fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7350ff:{NFSU2_TR(0x7350ff);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735101:{NFSU2_TR(0x735101);
if(r1(R+518)){{goto L735109;}}
}
B735103:L735103:{c.instructions+=2;NFSU2_TR(0x735103);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735106:{NFSU2_TR(0x735106);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735109:L735109:{c.instructions+=2;NFSU2_TR(0x735109);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B73510c:{NFSU2_TR(0x73510c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73511d;}}
}
B73510e:L73510e:{c.instructions+=6;NFSU2_TR(0x73510e);
__builtin_memmove((R+0),gp(0x8b4f3c),4);
}
B735113:{NFSU2_TR(0x735113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735115:{NFSU2_TR(0x735115);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735117:{NFSU2_TR(0x735117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735118:{NFSU2_TR(0x735118);
__builtin_memmove((R+4),(R+0),4);
}
B73511a:{NFSU2_TR(0x73511a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73511dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73511d:L73511d:{c.instructions+=2;NFSU2_TR(0x73511d);
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
B73511f:{NFSU2_TR(0x73511f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735130:L735130:{c.instructions+=7;NFSU2_TR(0x735130);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735133:{NFSU2_TR(0x735133);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735137:{NFSU2_TR(0x735137);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B735139:{NFSU2_TR(0x735139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B735140:{NFSU2_TR(0x735140);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735143:{NFSU2_TR(0x735143);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735145:{NFSU2_TR(0x735145);
if(r1(R+518)){{goto L73514a;}}
}
B735147:L735147:{c.instructions+=1;NFSU2_TR(0x735147);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73514a:L73514a:{c.instructions+=4;NFSU2_TR(0x73514a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73514d:{NFSU2_TR(0x73514d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B735150:{NFSU2_TR(0x735150);
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
B735152:{NFSU2_TR(0x735152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735160:L735160:{c.instructions+=4;NFSU2_TR(0x735160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735163:{NFSU2_TR(0x735163);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735167:{NFSU2_TR(0x735167);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735169:{NFSU2_TR(0x735169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735170;}}
}
B73516b:L73516b:{c.instructions+=2;NFSU2_TR(0x73516b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73516d:{NFSU2_TR(0x73516d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735170:L735170:{c.instructions+=3;NFSU2_TR(0x735170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735173:{NFSU2_TR(0x735173);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735175:{NFSU2_TR(0x735175);
if(r1(R+518)){{goto L73517d;}}
}
B735177:L735177:{c.instructions+=4;NFSU2_TR(0x735177);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735178:{NFSU2_TR(0x735178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73517a:{NFSU2_TR(0x73517a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B73517c:{NFSU2_TR(0x73517c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73517d:L73517d:{c.instructions+=3;NFSU2_TR(0x73517d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73517f:{NFSU2_TR(0x73517f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735181:{NFSU2_TR(0x735181);
if(r1(R+518)){{goto L735189;}}
}
B735183:L735183:{c.instructions+=2;NFSU2_TR(0x735183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735186:{NFSU2_TR(0x735186);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735189:L735189:{c.instructions+=2;NFSU2_TR(0x735189);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B73518c:{NFSU2_TR(0x73518c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73519d;}}
}
B73518e:L73518e:{c.instructions+=6;NFSU2_TR(0x73518e);
__builtin_memmove((R+0),gp(0x8b4f3c),4);
}
B735193:{NFSU2_TR(0x735193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735195:{NFSU2_TR(0x735195);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735197:{NFSU2_TR(0x735197);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735198:{NFSU2_TR(0x735198);
__builtin_memmove((R+4),(R+0),4);
}
B73519a:{NFSU2_TR(0x73519a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73519dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73519d:L73519d:{c.instructions+=2;NFSU2_TR(0x73519d);
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
B73519f:{NFSU2_TR(0x73519f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7351b0:L7351b0:{c.instructions+=7;NFSU2_TR(0x7351b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7351b4:{NFSU2_TR(0x7351b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7351b7:{NFSU2_TR(0x7351b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7351b8:{NFSU2_TR(0x7351b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7351b9:{NFSU2_TR(0x7351b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7351ba:{NFSU2_TR(0x7351ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7351bb:{NFSU2_TR(0x7351bb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B7351bd:L7351bd:{c.instructions+=5;NFSU2_TR(0x7351bd);
__builtin_memmove((R+8),gp(0x8b4f48),4);
}
B7351c3:{NFSU2_TR(0x7351c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7351c5:{NFSU2_TR(0x7351c5);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7351c9:{NFSU2_TR(0x7351c9);
__builtin_memmove((R+16),(R+16),4);
}
B7351d0:{NFSU2_TR(0x7351d0);
if(r1(R+518)){{goto L73527b;}}
}
B7351d6:L7351d6:{c.instructions+=3;NFSU2_TR(0x7351d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7351da:{NFSU2_TR(0x7351da);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7351df:{NFSU2_TR(0x7351df);
}
B7351e0:L7351e0:{c.instructions+=9;NFSU2_TR(0x7351e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7351e4:{NFSU2_TR(0x7351e4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7351e8:{NFSU2_TR(0x7351e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7351ec:{NFSU2_TR(0x7351ec);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B7351f1:{NFSU2_TR(0x7351f1);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B7351f6:{NFSU2_TR(0x7351f6);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+24))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7351fa:{NFSU2_TR(0x7351fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7351fe:{NFSU2_TR(0x7351fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735202:{NFSU2_TR(0x735202);
if(r1(R+518)){{goto L735208;}}
}
B735204:L735204:{c.instructions+=2;NFSU2_TR(0x735204);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B735206:{NFSU2_TR(0x735206);
if(r1(R+518)){{goto L735271;}}
}
B735208:L735208:{c.instructions+=3;NFSU2_TR(0x735208);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73520a:{NFSU2_TR(0x73520a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73520c:{NFSU2_TR(0x73520c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735271;}}
}
B73520e:L73520e:{c.instructions+=4;NFSU2_TR(0x73520e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B735212:{NFSU2_TR(0x735212);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B735217:{NFSU2_TR(0x735217);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B73521a:{NFSU2_TR(0x73521a);
__builtin_memmove((R+12),(R+12),4);
}
B735220:L735220:{c.instructions+=3;NFSU2_TR(0x735220);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B735225:{NFSU2_TR(0x735225);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+24))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B735229:{NFSU2_TR(0x735229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735265;}}
}
B73522b:L73522b:{c.instructions+=3;NFSU2_TR(0x73522b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73522d:{NFSU2_TR(0x73522d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73522f:{NFSU2_TR(0x73522f);
}
B735230:L735230:{c.instructions+=4;NFSU2_TR(0x735230);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B735232:{NFSU2_TR(0x735232);
__builtin_memmove((R+4),(R+12),1);
}
B735234:{NFSU2_TR(0x735234);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B735236:{NFSU2_TR(0x735236);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735254;}}
}
B735238:L735238:{c.instructions+=2;NFSU2_TR(0x735238);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73523a:{NFSU2_TR(0x73523a);
if(r1(R+518)){{goto L735250;}}
}
B73523c:L73523c:{c.instructions+=4;NFSU2_TR(0x73523c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B73523f:{NFSU2_TR(0x73523f);
__builtin_memmove((R+4),(R+12),1);
}
B735241:{NFSU2_TR(0x735241);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B735244:{NFSU2_TR(0x735244);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735254;}}
}
B735246:L735246:{c.instructions+=4;NFSU2_TR(0x735246);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B735249:{NFSU2_TR(0x735249);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B73524c:{NFSU2_TR(0x73524c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73524e:{NFSU2_TR(0x73524e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735230u);}goto L735230;}}
}
B735250:L735250:{c.instructions+=2;NFSU2_TR(0x735250);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735252:{NFSU2_TR(0x735252);
{goto L735259;}
}
B735254:L735254:{c.instructions+=2;NFSU2_TR(0x735254);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B735256:{NFSU2_TR(0x735256);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B735259:L735259:{c.instructions+=2;NFSU2_TR(0x735259);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73525b:{NFSU2_TR(0x73525b);
if(r1(R+518)){{goto L735286;}}
}
B73525d:L73525d:{c.instructions+=2;NFSU2_TR(0x73525d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735261:{NFSU2_TR(0x735261);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735265:L735265:{c.instructions+=4;NFSU2_TR(0x735265);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B735266:{NFSU2_TR(0x735266);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B735269:{NFSU2_TR(0x735269);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73526b:{NFSU2_TR(0x73526b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735220u);}goto L735220;}}
}
B73526d:L73526d:{c.instructions+=1;NFSU2_TR(0x73526d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B735271:L735271:{c.instructions+=3;NFSU2_TR(0x735271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735273:{NFSU2_TR(0x735273);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735275:{NFSU2_TR(0x735275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7351e0u);}goto L7351e0;}}
}
B73527b:L73527b:{c.instructions+=2;NFSU2_TR(0x73527b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73527d:{NFSU2_TR(0x73527d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7352a7;}}
}
B73527f:L73527f:{c.instructions+=2;NFSU2_TR(0x73527f);
w1(R+12,u8(0x1ull));
}
B735281:{NFSU2_TR(0x735281);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7351bdu);}goto L7351bd;}
}
B735286:L735286:{c.instructions+=14;NFSU2_TR(0x735286);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73528a:{NFSU2_TR(0x73528a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B73528e:{NFSU2_TR(0x73528e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B735291:{NFSU2_TR(0x735291);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735295:{NFSU2_TR(0x735295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735296:{NFSU2_TR(0x735296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735298:{NFSU2_TR(0x735298);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73529b:{NFSU2_TR(0x73529b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73529c:{NFSU2_TR(0x73529c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73529d:{NFSU2_TR(0x73529d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7352a0:{NFSU2_TR(0x7352a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7352a2:{NFSU2_TR(0x7352a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7352a3:{NFSU2_TR(0x7352a3);
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
B7352a6:{NFSU2_TR(0x7352a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7352a7:L7352a7:{c.instructions+=7;NFSU2_TR(0x7352a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7352a8:{NFSU2_TR(0x7352a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7352a9:{NFSU2_TR(0x7352a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7352aa:{NFSU2_TR(0x7352aa);
w4(R+0,u32(0xfffffffbull));
}
B7352af:{NFSU2_TR(0x7352af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7352b0:{NFSU2_TR(0x7352b0);
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
B7352b3:{NFSU2_TR(0x7352b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7352c0:L7352c0:{c.instructions+=7;NFSU2_TR(0x7352c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7352c4:{NFSU2_TR(0x7352c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7352c7:{NFSU2_TR(0x7352c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7352c8:{NFSU2_TR(0x7352c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7352c9:{NFSU2_TR(0x7352c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7352ca:{NFSU2_TR(0x7352ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7352cb:{NFSU2_TR(0x7352cb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B7352cd:L7352cd:{c.instructions+=5;NFSU2_TR(0x7352cd);
__builtin_memmove((R+8),gp(0x8b4f48),4);
}
B7352d3:{NFSU2_TR(0x7352d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7352d5:{NFSU2_TR(0x7352d5);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7352d9:{NFSU2_TR(0x7352d9);
__builtin_memmove((R+16),(R+16),4);
}
B7352e0:{NFSU2_TR(0x7352e0);
if(r1(R+518)){{goto L73538b;}}
}
B7352e6:L7352e6:{c.instructions+=3;NFSU2_TR(0x7352e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7352ea:{NFSU2_TR(0x7352ea);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7352ef:{NFSU2_TR(0x7352ef);
}
B7352f0:L7352f0:{c.instructions+=9;NFSU2_TR(0x7352f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7352f4:{NFSU2_TR(0x7352f4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7352f8:{NFSU2_TR(0x7352f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7352fc:{NFSU2_TR(0x7352fc);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B735301:{NFSU2_TR(0x735301);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B735306:{NFSU2_TR(0x735306);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+24))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B73530a:{NFSU2_TR(0x73530a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73530e:{NFSU2_TR(0x73530e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735312:{NFSU2_TR(0x735312);
if(r1(R+518)){{goto L735318;}}
}
B735314:L735314:{c.instructions+=2;NFSU2_TR(0x735314);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B735316:{NFSU2_TR(0x735316);
if(r1(R+518)){{goto L735381;}}
}
B735318:L735318:{c.instructions+=3;NFSU2_TR(0x735318);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73531a:{NFSU2_TR(0x73531a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73531c:{NFSU2_TR(0x73531c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735381;}}
}
B73531e:L73531e:{c.instructions+=4;NFSU2_TR(0x73531e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B735322:{NFSU2_TR(0x735322);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B735327:{NFSU2_TR(0x735327);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B73532a:{NFSU2_TR(0x73532a);
__builtin_memmove((R+12),(R+12),4);
}
B735330:L735330:{c.instructions+=3;NFSU2_TR(0x735330);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B735335:{NFSU2_TR(0x735335);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+24))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B735339:{NFSU2_TR(0x735339);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735375;}}
}
B73533b:L73533b:{c.instructions+=3;NFSU2_TR(0x73533b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73533d:{NFSU2_TR(0x73533d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73533f:{NFSU2_TR(0x73533f);
}
B735340:L735340:{c.instructions+=4;NFSU2_TR(0x735340);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B735342:{NFSU2_TR(0x735342);
__builtin_memmove((R+4),(R+12),1);
}
B735344:{NFSU2_TR(0x735344);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B735346:{NFSU2_TR(0x735346);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735364;}}
}
B735348:L735348:{c.instructions+=2;NFSU2_TR(0x735348);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73534a:{NFSU2_TR(0x73534a);
if(r1(R+518)){{goto L735360;}}
}
B73534c:L73534c:{c.instructions+=4;NFSU2_TR(0x73534c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B73534f:{NFSU2_TR(0x73534f);
__builtin_memmove((R+4),(R+12),1);
}
B735351:{NFSU2_TR(0x735351);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B735354:{NFSU2_TR(0x735354);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735364;}}
}
B735356:L735356:{c.instructions+=4;NFSU2_TR(0x735356);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B735359:{NFSU2_TR(0x735359);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B73535c:{NFSU2_TR(0x73535c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73535e:{NFSU2_TR(0x73535e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735340u);}goto L735340;}}
}
B735360:L735360:{c.instructions+=2;NFSU2_TR(0x735360);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735362:{NFSU2_TR(0x735362);
{goto L735369;}
}
B735364:L735364:{c.instructions+=2;NFSU2_TR(0x735364);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B735366:{NFSU2_TR(0x735366);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B735369:L735369:{c.instructions+=2;NFSU2_TR(0x735369);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73536b:{NFSU2_TR(0x73536b);
if(r1(R+518)){{goto L735396;}}
}
B73536d:L73536d:{c.instructions+=2;NFSU2_TR(0x73536d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735371:{NFSU2_TR(0x735371);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735375:L735375:{c.instructions+=4;NFSU2_TR(0x735375);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B735376:{NFSU2_TR(0x735376);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B735379:{NFSU2_TR(0x735379);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73537b:{NFSU2_TR(0x73537b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735330u);}goto L735330;}}
}
B73537d:L73537d:{c.instructions+=1;NFSU2_TR(0x73537d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B735381:L735381:{c.instructions+=3;NFSU2_TR(0x735381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735383:{NFSU2_TR(0x735383);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735385:{NFSU2_TR(0x735385);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7352f0u);}goto L7352f0;}}
}
B73538b:L73538b:{c.instructions+=2;NFSU2_TR(0x73538b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73538d:{NFSU2_TR(0x73538d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7353b6;}}
}
B73538f:L73538f:{c.instructions+=2;NFSU2_TR(0x73538f);
w1(R+12,u8(0x1ull));
}
B735391:{NFSU2_TR(0x735391);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7352cdu);}goto L7352cd;}
}
B735396:L735396:{c.instructions+=14;NFSU2_TR(0x735396);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73539a:{NFSU2_TR(0x73539a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B73539d:{NFSU2_TR(0x73539d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7353a0:{NFSU2_TR(0x7353a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7353a4:{NFSU2_TR(0x7353a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7353a5:{NFSU2_TR(0x7353a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7353a6:{NFSU2_TR(0x7353a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7353a8:{NFSU2_TR(0x7353a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7353ab:{NFSU2_TR(0x7353ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7353ac:{NFSU2_TR(0x7353ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7353af:{NFSU2_TR(0x7353af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7353b1:{NFSU2_TR(0x7353b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7353b2:{NFSU2_TR(0x7353b2);
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
B7353b5:{NFSU2_TR(0x7353b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7353b6:L7353b6:{c.instructions+=7;NFSU2_TR(0x7353b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7353b7:{NFSU2_TR(0x7353b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7353b8:{NFSU2_TR(0x7353b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7353b9:{NFSU2_TR(0x7353b9);
w4(R+0,u32(0xfffffffbull));
}
B7353be:{NFSU2_TR(0x7353be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7353bf:{NFSU2_TR(0x7353bf);
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
B7353c2:{NFSU2_TR(0x7353c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7353d0:L7353d0:{c.instructions+=7;NFSU2_TR(0x7353d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7353d4:{NFSU2_TR(0x7353d4);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353d6:{NFSU2_TR(0x7353d6);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353d8:{NFSU2_TR(0x7353d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353da:{NFSU2_TR(0x7353da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353db:{NFSU2_TR(0x7353db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353dc:{NFSU2_TR(0x7353dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7353e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7351b0u);}goto L7351b0;}
}
B7353e1:L7353e1:{c.instructions+=2;NFSU2_TR(0x7353e1);
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
B7353e4:{NFSU2_TR(0x7353e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7353f0:L7353f0:{c.instructions+=7;NFSU2_TR(0x7353f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7353f4:{NFSU2_TR(0x7353f4);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353f6:{NFSU2_TR(0x7353f6);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353f8:{NFSU2_TR(0x7353f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353fa:{NFSU2_TR(0x7353fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353fb:{NFSU2_TR(0x7353fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7353fc:{NFSU2_TR(0x7353fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735401ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7351b0u);}goto L7351b0;}
}
B735401:L735401:{c.instructions+=2;NFSU2_TR(0x735401);
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
B735404:{NFSU2_TR(0x735404);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735410:L735410:{c.instructions+=7;NFSU2_TR(0x735410);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735414:{NFSU2_TR(0x735414);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735416:{NFSU2_TR(0x735416);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735418:{NFSU2_TR(0x735418);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73541a:{NFSU2_TR(0x73541a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73541b:{NFSU2_TR(0x73541b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73541c:{NFSU2_TR(0x73541c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735421ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7352c0u);}goto L7352c0;}
}
B735421:L735421:{c.instructions+=2;NFSU2_TR(0x735421);
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
B735424:{NFSU2_TR(0x735424);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735430:L735430:{c.instructions+=5;NFSU2_TR(0x735430);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735434:{NFSU2_TR(0x735434);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735437:{NFSU2_TR(0x735437);
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
B735439:{NFSU2_TR(0x735439);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73543a:{NFSU2_TR(0x73543a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L735440;}}
}
B73543c:L73543c:{c.instructions+=3;NFSU2_TR(0x73543c);
__builtin_memmove((R+0),(R+8),4);
}
B73543e:{NFSU2_TR(0x73543e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73543f:{NFSU2_TR(0x73543f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735440:L735440:{c.instructions+=3;NFSU2_TR(0x735440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B735442:{NFSU2_TR(0x735442);
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
B735444:{NFSU2_TR(0x735444);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73544d;}}
}
B735446:L735446:{c.instructions+=3;NFSU2_TR(0x735446);
w4(R+0,u32(0xfffffffaull));
}
B73544b:{NFSU2_TR(0x73544b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73544c:{NFSU2_TR(0x73544c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73544d:L73544d:{c.instructions+=2;NFSU2_TR(0x73544d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B735450:{NFSU2_TR(0x735450);
if(r1(R+518)){{goto L735466;}}
}
B735452:L735452:{c.instructions+=5;NFSU2_TR(0x735452);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xfffffffdull));
s4(u32(r4(U+0)),r4(U+4));
}
B735459:{NFSU2_TR(0x735459);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B73545f:{NFSU2_TR(0x73545f);
w4(R+0,u32(0xfffffffdull));
}
B735464:{NFSU2_TR(0x735464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735465:{NFSU2_TR(0x735465);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735466:L735466:{c.instructions+=3;NFSU2_TR(0x735466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B735468:{NFSU2_TR(0x735468);
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
B73546a:{NFSU2_TR(0x73546a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735473;}}
}
B73546c:L73546c:{c.instructions+=3;NFSU2_TR(0x73546c);
w4(R+0,u32(0xfffffffcull));
}
B735471:{NFSU2_TR(0x735471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735472:{NFSU2_TR(0x735472);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735473:L735473:{c.instructions+=2;NFSU2_TR(0x735473);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735474:{NFSU2_TR(0x735474);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B735478:L735478:{c.instructions+=4;NFSU2_TR(0x735478);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73547b:{NFSU2_TR(0x73547b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73547c:{NFSU2_TR(0x73547c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73547d:{NFSU2_TR(0x73547d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735480ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B735480:L735480:{c.instructions+=4;NFSU2_TR(0x735480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B735482:{NFSU2_TR(0x735482);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B735485:{NFSU2_TR(0x735485);
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
B735487:{NFSU2_TR(0x735487);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735478u);}goto L735478;}}
}
B735489:L735489:{c.instructions+=4;NFSU2_TR(0x735489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73548a:{NFSU2_TR(0x73548a);
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
B73548c:{NFSU2_TR(0x73548c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73548d:{NFSU2_TR(0x73548d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735490:L735490:{c.instructions+=10;NFSU2_TR(0x735490);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735494:{NFSU2_TR(0x735494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B735497:{NFSU2_TR(0x735497);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735498:{NFSU2_TR(0x735498);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73549a:{NFSU2_TR(0x73549a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73549b:{NFSU2_TR(0x73549b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73549f:{NFSU2_TR(0x73549f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7354a1:{NFSU2_TR(0x7354a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7354a4:{NFSU2_TR(0x7354a4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7354a6:{NFSU2_TR(0x7354a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L735544;}}
}
B7354ac:L7354ac:{c.instructions+=3;NFSU2_TR(0x7354ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7354ae:{NFSU2_TR(0x7354ae);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7354b0:{NFSU2_TR(0x7354b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7354bd;}}
}
B7354b2:L7354b2:{c.instructions+=5;NFSU2_TR(0x7354b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7354b3:{NFSU2_TR(0x7354b3);
w4(R+0,u32(0xfffffffaull));
}
B7354b8:{NFSU2_TR(0x7354b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7354b9:{NFSU2_TR(0x7354b9);
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
B7354bc:{NFSU2_TR(0x7354bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7354bd:L7354bd:{c.instructions+=2;NFSU2_TR(0x7354bd);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B7354c0:{NFSU2_TR(0x7354c0);
if(r1(R+518)){{goto L7354d2;}}
}
B7354c2:L7354c2:{c.instructions+=7;NFSU2_TR(0x7354c2);
w4(R+0,u32(0xfffffffdull));
}
B7354c7:{NFSU2_TR(0x7354c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7354c9:{NFSU2_TR(0x7354c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7354cc:{NFSU2_TR(0x7354cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7354cd:{NFSU2_TR(0x7354cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7354ce:{NFSU2_TR(0x7354ce);
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
B7354d1:{NFSU2_TR(0x7354d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7354d2:L7354d2:{c.instructions+=10;NFSU2_TR(0x7354d2);
__builtin_memmove((R+4),gp(0x8b4f3c),4);
}
B7354d8:{NFSU2_TR(0x7354d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7354d9:{NFSU2_TR(0x7354d9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7354dd:{NFSU2_TR(0x7354dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7354de:{NFSU2_TR(0x7354de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7354e2:{NFSU2_TR(0x7354e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7354e6:{NFSU2_TR(0x7354e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7354ea:{NFSU2_TR(0x7354ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7354ec:{NFSU2_TR(0x7354ec);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7354ee:{NFSU2_TR(0x7354ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7354f0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B7354f0:L7354f0:{c.instructions+=3;NFSU2_TR(0x7354f0);
__builtin_memmove((R+28),(R+0),4);
}
B7354f2:{NFSU2_TR(0x7354f2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7354f4:{NFSU2_TR(0x7354f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735500;}}
}
B7354f6:L7354f6:{c.instructions+=6;NFSU2_TR(0x7354f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7354f7:{NFSU2_TR(0x7354f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7354f8:{NFSU2_TR(0x7354f8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7354fb:{NFSU2_TR(0x7354fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7354fc:{NFSU2_TR(0x7354fc);
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
B7354ff:{NFSU2_TR(0x7354ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735500:L735500:{c.instructions+=10;NFSU2_TR(0x735500);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B735507:{NFSU2_TR(0x735507);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73550a:{NFSU2_TR(0x73550a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73550d:{NFSU2_TR(0x73550d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73550f:{NFSU2_TR(0x73550f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B735511:{NFSU2_TR(0x735511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B735513:{NFSU2_TR(0x735513);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B735515:{NFSU2_TR(0x735515);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735516:{NFSU2_TR(0x735516);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73551a:{NFSU2_TR(0x73551a);
if(r1(R+518)){{goto L735532;}}
}
B73551c:L73551c:{c.instructions+=1;NFSU2_TR(0x73551c);
__builtin_memmove((R+16),(R+16),4);
}
B735520:L735520:{c.instructions+=5;NFSU2_TR(0x735520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735523:{NFSU2_TR(0x735523);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735524:{NFSU2_TR(0x735524);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735525:{NFSU2_TR(0x735525);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735526:{NFSU2_TR(0x735526);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735529ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B735529:L735529:{c.instructions+=4;NFSU2_TR(0x735529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73552b:{NFSU2_TR(0x73552b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73552e:{NFSU2_TR(0x73552e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B735530:{NFSU2_TR(0x735530);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735520u);}goto L735520;}}
}
B735532:L735532:{c.instructions+=3;NFSU2_TR(0x735532);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735533:{NFSU2_TR(0x735533);
__builtin_memmove((R+4),(R+28),4);
}
B735535:{NFSU2_TR(0x735535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73553aull));
TAIL_STATIC(0x734db0u,734);
}
B73553a:L73553a:{c.instructions+=5;NFSU2_TR(0x73553a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73553e:{NFSU2_TR(0x73553e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73553f:{NFSU2_TR(0x73553f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B735541:{NFSU2_TR(0x735541);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735543:{NFSU2_TR(0x735543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735544:L735544:{c.instructions+=4;NFSU2_TR(0x735544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735545:{NFSU2_TR(0x735545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735546:{NFSU2_TR(0x735546);
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
B735549:{NFSU2_TR(0x735549);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735550:L735550:{c.instructions+=6;NFSU2_TR(0x735550);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735555:{NFSU2_TR(0x735555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735556:{NFSU2_TR(0x735556);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735558:{NFSU2_TR(0x735558);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735559:{NFSU2_TR(0x735559);
__builtin_memmove((R+24),(R+4),4);
}
B73555b:{NFSU2_TR(0x73555b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735561ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735561:L735561:{c.instructions+=2;NFSU2_TR(0x735561);
__builtin_memmove((R+4),(R+24),4);
}
B735563:{NFSU2_TR(0x735563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735568ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735030u);}goto L735030;}
}
B735568:L735568:{c.instructions+=4;NFSU2_TR(0x735568);
__builtin_memmove((R+4),gp(0x8b4f38),4);
}
B73556e:{NFSU2_TR(0x73556e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73556f:{NFSU2_TR(0x73556f);
__builtin_memmove((R+24),(R+0),4);
}
B735571:{NFSU2_TR(0x735571);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735577ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735577:L735577:{c.instructions+=3;NFSU2_TR(0x735577);
__builtin_memmove((R+0),(R+24),4);
}
B735579:{NFSU2_TR(0x735579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73557a:{NFSU2_TR(0x73557a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735580:L735580:{c.instructions+=6;NFSU2_TR(0x735580);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735585:{NFSU2_TR(0x735585);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735586:{NFSU2_TR(0x735586);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735588:{NFSU2_TR(0x735588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735589:{NFSU2_TR(0x735589);
__builtin_memmove((R+24),(R+4),4);
}
B73558b:{NFSU2_TR(0x73558b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735591ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735591:L735591:{c.instructions+=3;NFSU2_TR(0x735591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B735594:{NFSU2_TR(0x735594);
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
B735596:{NFSU2_TR(0x735596);
if(r1(R+518)){{goto L7355b2;}}
}
B735598:L735598:{c.instructions+=3;NFSU2_TR(0x735598);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735599:{NFSU2_TR(0x735599);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73559d:{NFSU2_TR(0x73559d);
__builtin_memmove((R+4),(R+4),4);
}
B7355a0:L7355a0:{c.instructions+=4;NFSU2_TR(0x7355a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7355a3:{NFSU2_TR(0x7355a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7355a4:{NFSU2_TR(0x7355a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7355a5:{NFSU2_TR(0x7355a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7355a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7355a8:L7355a8:{c.instructions+=4;NFSU2_TR(0x7355a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B7355aa:{NFSU2_TR(0x7355aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7355ad:{NFSU2_TR(0x7355ad);
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
B7355af:{NFSU2_TR(0x7355af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7355a0u);}goto L7355a0;}}
}
B7355b1:L7355b1:{c.instructions+=1;NFSU2_TR(0x7355b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7355b2:L7355b2:{c.instructions+=3;NFSU2_TR(0x7355b2);
__builtin_memmove((R+8),gp(0x8b4f38),4);
}
B7355b8:{NFSU2_TR(0x7355b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7355b9:{NFSU2_TR(0x7355b9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7355bfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7355bf:L7355bf:{c.instructions+=3;NFSU2_TR(0x7355bf);
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
B7355c1:{NFSU2_TR(0x7355c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7355c2:{NFSU2_TR(0x7355c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7355d0:L7355d0:{c.instructions+=4;NFSU2_TR(0x7355d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7355d4:{NFSU2_TR(0x7355d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7355d7:{NFSU2_TR(0x7355d7);
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
B7355d9:{NFSU2_TR(0x7355d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7355de;}}
}
B7355db:L7355db:{c.instructions+=2;NFSU2_TR(0x7355db);
__builtin_memmove((R+0),(R+8),4);
}
B7355dd:{NFSU2_TR(0x7355dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7355de:L7355de:{c.instructions+=3;NFSU2_TR(0x7355de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7355e0:{NFSU2_TR(0x7355e0);
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
B7355e2:{NFSU2_TR(0x7355e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7355ea;}}
}
B7355e4:L7355e4:{c.instructions+=2;NFSU2_TR(0x7355e4);
w4(R+0,u32(0xfffffffaull));
}
B7355e9:{NFSU2_TR(0x7355e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7355ea:L7355ea:{c.instructions+=2;NFSU2_TR(0x7355ea);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7355ed:{NFSU2_TR(0x7355ed);
if(r1(R+518)){{goto L7355fe;}}
}
B7355ef:L7355ef:{c.instructions+=4;NFSU2_TR(0x7355ef);
w4(R+0,u32(0xfffffffdull));
}
B7355f4:{NFSU2_TR(0x7355f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7355f7:{NFSU2_TR(0x7355f7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B7355fd:{NFSU2_TR(0x7355fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7355fe:L7355fe:{c.instructions+=7;NFSU2_TR(0x7355fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735600:{NFSU2_TR(0x735600);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735604:{NFSU2_TR(0x735604);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735606:{NFSU2_TR(0x735606);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73560d:{NFSU2_TR(0x73560d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73560f:{NFSU2_TR(0x73560f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735611:{NFSU2_TR(0x735611);
if(r1(R+518)){{goto L735616;}}
}
B735613:L735613:{c.instructions+=1;NFSU2_TR(0x735613);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735616:L735616:{c.instructions+=3;NFSU2_TR(0x735616);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B735618:{NFSU2_TR(0x735618);
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
B73561a:{NFSU2_TR(0x73561a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735620:L735620:{c.instructions+=4;NFSU2_TR(0x735620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735624:{NFSU2_TR(0x735624);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735627:{NFSU2_TR(0x735627);
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
B735629:{NFSU2_TR(0x735629);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73562e;}}
}
B73562b:L73562b:{c.instructions+=2;NFSU2_TR(0x73562b);
__builtin_memmove((R+0),(R+8),4);
}
B73562d:{NFSU2_TR(0x73562d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73562e:L73562e:{c.instructions+=3;NFSU2_TR(0x73562e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B735630:{NFSU2_TR(0x735630);
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
B735632:{NFSU2_TR(0x735632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73563a;}}
}
B735634:L735634:{c.instructions+=2;NFSU2_TR(0x735634);
w4(R+0,u32(0xfffffffaull));
}
B735639:{NFSU2_TR(0x735639);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73563a:L73563a:{c.instructions+=2;NFSU2_TR(0x73563a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73563d:{NFSU2_TR(0x73563d);
if(r1(R+518)){{goto L73564e;}}
}
B73563f:L73563f:{c.instructions+=4;NFSU2_TR(0x73563f);
w4(R+0,u32(0xfffffffdull));
}
B735644:{NFSU2_TR(0x735644);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735647:{NFSU2_TR(0x735647);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B73564d:{NFSU2_TR(0x73564d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73564e:L73564e:{c.instructions+=4;NFSU2_TR(0x73564e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735650:{NFSU2_TR(0x735650);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735654:{NFSU2_TR(0x735654);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735656:{NFSU2_TR(0x735656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73565c;}}
}
B735658:L735658:{c.instructions+=2;NFSU2_TR(0x735658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73565a:{NFSU2_TR(0x73565a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B73565c:L73565c:{c.instructions+=3;NFSU2_TR(0x73565c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73565f:{NFSU2_TR(0x73565f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735661:{NFSU2_TR(0x735661);
if(r1(R+518)){{goto L735667;}}
}
B735663:L735663:{c.instructions+=2;NFSU2_TR(0x735663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735665:{NFSU2_TR(0x735665);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B735667:L735667:{c.instructions+=3;NFSU2_TR(0x735667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B735669:{NFSU2_TR(0x735669);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73566b:{NFSU2_TR(0x73566b);
if(r1(R+518)){{goto L735673;}}
}
B73566d:L73566d:{c.instructions+=2;NFSU2_TR(0x73566d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735670:{NFSU2_TR(0x735670);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735673:L735673:{c.instructions+=2;NFSU2_TR(0x735673);
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
B735675:{NFSU2_TR(0x735675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735680:L735680:{c.instructions+=6;NFSU2_TR(0x735680);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735685:{NFSU2_TR(0x735685);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735686:{NFSU2_TR(0x735686);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735688:{NFSU2_TR(0x735688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735689:{NFSU2_TR(0x735689);
__builtin_memmove((R+24),(R+4),4);
}
B73568b:{NFSU2_TR(0x73568b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735691ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735691:L735691:{c.instructions+=7;NFSU2_TR(0x735691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735694:{NFSU2_TR(0x735694);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735698:{NFSU2_TR(0x735698);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B73569a:{NFSU2_TR(0x73569a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7356a1:{NFSU2_TR(0x7356a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7356a4:{NFSU2_TR(0x7356a4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7356a6:{NFSU2_TR(0x7356a6);
if(r1(R+518)){{goto L7356ab;}}
}
B7356a8:L7356a8:{c.instructions+=1;NFSU2_TR(0x7356a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7356ab:L7356ab:{c.instructions+=5;NFSU2_TR(0x7356ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7356ae:{NFSU2_TR(0x7356ae);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B7356b1:{NFSU2_TR(0x7356b1);
__builtin_memmove((R+8),gp(0x8b4f38),4);
}
B7356b7:{NFSU2_TR(0x7356b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7356b8:{NFSU2_TR(0x7356b8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7356beull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7356be:L7356be:{c.instructions+=3;NFSU2_TR(0x7356be);
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
B7356c0:{NFSU2_TR(0x7356c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7356c1:{NFSU2_TR(0x7356c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7356d0:L7356d0:{c.instructions+=5;NFSU2_TR(0x7356d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7356d4:{NFSU2_TR(0x7356d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7356d7:{NFSU2_TR(0x7356d7);
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
B7356d9:{NFSU2_TR(0x7356d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7356da:{NFSU2_TR(0x7356da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7356e0;}}
}
B7356dc:L7356dc:{c.instructions+=3;NFSU2_TR(0x7356dc);
__builtin_memmove((R+0),(R+8),4);
}
B7356de:{NFSU2_TR(0x7356de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7356df:{NFSU2_TR(0x7356df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7356e0:L7356e0:{c.instructions+=3;NFSU2_TR(0x7356e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7356e2:{NFSU2_TR(0x7356e2);
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
B7356e4:{NFSU2_TR(0x7356e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7356ed;}}
}
B7356e6:L7356e6:{c.instructions+=3;NFSU2_TR(0x7356e6);
w4(R+0,u32(0xfffffffaull));
}
B7356eb:{NFSU2_TR(0x7356eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7356ec:{NFSU2_TR(0x7356ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7356ed:L7356ed:{c.instructions+=2;NFSU2_TR(0x7356ed);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7356f0:{NFSU2_TR(0x7356f0);
if(r1(R+518)){{goto L735702;}}
}
B7356f2:L7356f2:{c.instructions+=5;NFSU2_TR(0x7356f2);
w4(R+0,u32(0xfffffffdull));
}
B7356f7:{NFSU2_TR(0x7356f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7356fa:{NFSU2_TR(0x7356fa);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B735700:{NFSU2_TR(0x735700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735701:{NFSU2_TR(0x735701);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735702:L735702:{c.instructions+=7;NFSU2_TR(0x735702);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735706:{NFSU2_TR(0x735706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B735708:{NFSU2_TR(0x735708);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73570b:{NFSU2_TR(0x73570b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73570d:{NFSU2_TR(0x73570d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73570e:{NFSU2_TR(0x73570e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735711:{NFSU2_TR(0x735711);
if(r1(R+518)){{goto L735731;}}
}
B735713:L735713:{c.instructions+=4;NFSU2_TR(0x735713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B735715:{NFSU2_TR(0x735715);
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
B735717:{NFSU2_TR(0x735717);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B735719:{NFSU2_TR(0x735719);
if(r1(R+518)){{goto L735731;}}
}
B73571b:L73571b:{c.instructions+=1;NFSU2_TR(0x73571b);
{goto L735720;}
}
B735720:L735720:{c.instructions+=4;NFSU2_TR(0x735720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735723:{NFSU2_TR(0x735723);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735724:{NFSU2_TR(0x735724);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735725:{NFSU2_TR(0x735725);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735728ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B735728:L735728:{c.instructions+=4;NFSU2_TR(0x735728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73572a:{NFSU2_TR(0x73572a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73572d:{NFSU2_TR(0x73572d);
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
B73572f:{NFSU2_TR(0x73572f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735720u);}goto L735720;}}
}
B735731:L735731:{c.instructions+=4;NFSU2_TR(0x735731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735732:{NFSU2_TR(0x735732);
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
B735734:{NFSU2_TR(0x735734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735735:{NFSU2_TR(0x735735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735740:L735740:{c.instructions+=4;NFSU2_TR(0x735740);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735744:{NFSU2_TR(0x735744);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735747:{NFSU2_TR(0x735747);
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
B735749:{NFSU2_TR(0x735749);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73574e;}}
}
B73574b:L73574b:{c.instructions+=2;NFSU2_TR(0x73574b);
__builtin_memmove((R+0),(R+8),4);
}
B73574d:{NFSU2_TR(0x73574d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73574e:L73574e:{c.instructions+=3;NFSU2_TR(0x73574e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B735750:{NFSU2_TR(0x735750);
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
B735752:{NFSU2_TR(0x735752);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73575a;}}
}
B735754:L735754:{c.instructions+=2;NFSU2_TR(0x735754);
w4(R+0,u32(0xfffffffaull));
}
B735759:{NFSU2_TR(0x735759);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73575a:L73575a:{c.instructions+=2;NFSU2_TR(0x73575a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73575d:{NFSU2_TR(0x73575d);
if(r1(R+518)){{goto L73576e;}}
}
B73575f:L73575f:{c.instructions+=4;NFSU2_TR(0x73575f);
w4(R+0,u32(0xfffffffdull));
}
B735764:{NFSU2_TR(0x735764);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735767:{NFSU2_TR(0x735767);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B73576d:{NFSU2_TR(0x73576d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73576e:L73576e:{c.instructions+=7;NFSU2_TR(0x73576e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735770:{NFSU2_TR(0x735770);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735774:{NFSU2_TR(0x735774);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735776:{NFSU2_TR(0x735776);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73577d:{NFSU2_TR(0x73577d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73577f:{NFSU2_TR(0x73577f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735781:{NFSU2_TR(0x735781);
if(r1(R+518)){{goto L735786;}}
}
B735783:L735783:{c.instructions+=1;NFSU2_TR(0x735783);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735786:L735786:{c.instructions+=6;NFSU2_TR(0x735786);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B735788:{NFSU2_TR(0x735788);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73578b:{NFSU2_TR(0x73578b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73578c:{NFSU2_TR(0x73578c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73578f:{NFSU2_TR(0x73578f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735790:{NFSU2_TR(0x735790);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735793ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B735793:L735793:{c.instructions+=3;NFSU2_TR(0x735793);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B735796:{NFSU2_TR(0x735796);
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
B735798:{NFSU2_TR(0x735798);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7357a0:L7357a0:{c.instructions+=4;NFSU2_TR(0x7357a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7357a4:{NFSU2_TR(0x7357a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7357a7:{NFSU2_TR(0x7357a7);
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
B7357a9:{NFSU2_TR(0x7357a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7357ae;}}
}
B7357ab:L7357ab:{c.instructions+=2;NFSU2_TR(0x7357ab);
__builtin_memmove((R+0),(R+8),4);
}
B7357ad:{NFSU2_TR(0x7357ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7357ae:L7357ae:{c.instructions+=3;NFSU2_TR(0x7357ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7357b0:{NFSU2_TR(0x7357b0);
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
B7357b2:{NFSU2_TR(0x7357b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7357ba;}}
}
B7357b4:L7357b4:{c.instructions+=2;NFSU2_TR(0x7357b4);
w4(R+0,u32(0xfffffffaull));
}
B7357b9:{NFSU2_TR(0x7357b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7357ba:L7357ba:{c.instructions+=2;NFSU2_TR(0x7357ba);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7357bd:{NFSU2_TR(0x7357bd);
if(r1(R+518)){{goto L7357ce;}}
}
B7357bf:L7357bf:{c.instructions+=4;NFSU2_TR(0x7357bf);
w4(R+0,u32(0xfffffffdull));
}
B7357c4:{NFSU2_TR(0x7357c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7357c7:{NFSU2_TR(0x7357c7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B7357cd:{NFSU2_TR(0x7357cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7357ce:L7357ce:{c.instructions+=4;NFSU2_TR(0x7357ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7357d0:{NFSU2_TR(0x7357d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7357d4:{NFSU2_TR(0x7357d4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7357d6:{NFSU2_TR(0x7357d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7357dc;}}
}
B7357d8:L7357d8:{c.instructions+=2;NFSU2_TR(0x7357d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7357da:{NFSU2_TR(0x7357da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7357dc:L7357dc:{c.instructions+=3;NFSU2_TR(0x7357dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7357df:{NFSU2_TR(0x7357df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7357e1:{NFSU2_TR(0x7357e1);
if(r1(R+518)){{goto L7357e7;}}
}
B7357e3:L7357e3:{c.instructions+=2;NFSU2_TR(0x7357e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7357e5:{NFSU2_TR(0x7357e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7357e7:L7357e7:{c.instructions+=3;NFSU2_TR(0x7357e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7357e9:{NFSU2_TR(0x7357e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7357eb:{NFSU2_TR(0x7357eb);
if(r1(R+518)){{goto L7357f3;}}
}
B7357ed:L7357ed:{c.instructions+=2;NFSU2_TR(0x7357ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7357f0:{NFSU2_TR(0x7357f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7357f3:L7357f3:{c.instructions+=2;NFSU2_TR(0x7357f3);
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
B7357f5:{NFSU2_TR(0x7357f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735800:L735800:{c.instructions+=6;NFSU2_TR(0x735800);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735805:{NFSU2_TR(0x735805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735806:{NFSU2_TR(0x735806);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735808:{NFSU2_TR(0x735808);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735809:{NFSU2_TR(0x735809);
__builtin_memmove((R+24),(R+4),4);
}
B73580b:{NFSU2_TR(0x73580b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735811ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735811:L735811:{c.instructions+=7;NFSU2_TR(0x735811);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735815:{NFSU2_TR(0x735815);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735817:{NFSU2_TR(0x735817);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735819:{NFSU2_TR(0x735819);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73581b:{NFSU2_TR(0x73581b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73581c:{NFSU2_TR(0x73581c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73581d:{NFSU2_TR(0x73581d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735822ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7351b0u);}goto L7351b0;}
}
B735822:L735822:{c.instructions+=5;NFSU2_TR(0x735822);
__builtin_memmove((R+8),gp(0x8b4f38),4);
}
B735828:{NFSU2_TR(0x735828);
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
B73582b:{NFSU2_TR(0x73582b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73582c:{NFSU2_TR(0x73582c);
__builtin_memmove((R+24),(R+0),4);
}
B73582e:{NFSU2_TR(0x73582e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735834ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735834:L735834:{c.instructions+=3;NFSU2_TR(0x735834);
__builtin_memmove((R+0),(R+24),4);
}
B735836:{NFSU2_TR(0x735836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735837:{NFSU2_TR(0x735837);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735840:L735840:{c.instructions+=6;NFSU2_TR(0x735840);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735845:{NFSU2_TR(0x735845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735846:{NFSU2_TR(0x735846);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735848:{NFSU2_TR(0x735848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735849:{NFSU2_TR(0x735849);
__builtin_memmove((R+24),(R+4),4);
}
B73584b:{NFSU2_TR(0x73584b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735851ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735851:L735851:{c.instructions+=7;NFSU2_TR(0x735851);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735855:{NFSU2_TR(0x735855);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735857:{NFSU2_TR(0x735857);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735859:{NFSU2_TR(0x735859);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73585b:{NFSU2_TR(0x73585b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73585c:{NFSU2_TR(0x73585c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73585d:{NFSU2_TR(0x73585d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735862ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7351b0u);}goto L7351b0;}
}
B735862:L735862:{c.instructions+=5;NFSU2_TR(0x735862);
__builtin_memmove((R+8),gp(0x8b4f38),4);
}
B735868:{NFSU2_TR(0x735868);
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
B73586b:{NFSU2_TR(0x73586b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73586c:{NFSU2_TR(0x73586c);
__builtin_memmove((R+24),(R+0),4);
}
B73586e:{NFSU2_TR(0x73586e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735874ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735874:L735874:{c.instructions+=3;NFSU2_TR(0x735874);
__builtin_memmove((R+0),(R+24),4);
}
B735876:{NFSU2_TR(0x735876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735877:{NFSU2_TR(0x735877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735880:L735880:{c.instructions+=5;NFSU2_TR(0x735880);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735885:{NFSU2_TR(0x735885);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735886:{NFSU2_TR(0x735886);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735888:{NFSU2_TR(0x735888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735889:{NFSU2_TR(0x735889);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73588full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73588f:L73588f:{c.instructions+=5;NFSU2_TR(0x73588f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735893:{NFSU2_TR(0x735893);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735897:{NFSU2_TR(0x735897);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735898:{NFSU2_TR(0x735898);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735899:{NFSU2_TR(0x735899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73589eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735430u);}goto L735430;}
}
B73589e:L73589e:{c.instructions+=5;NFSU2_TR(0x73589e);
__builtin_memmove((R+24),(R+0),4);
}
B7358a0:{NFSU2_TR(0x7358a0);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B7358a5:{NFSU2_TR(0x7358a5);
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
B7358a8:{NFSU2_TR(0x7358a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358a9:{NFSU2_TR(0x7358a9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7358afull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7358af:L7358af:{c.instructions+=3;NFSU2_TR(0x7358af);
__builtin_memmove((R+0),(R+24),4);
}
B7358b1:{NFSU2_TR(0x7358b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7358b2:{NFSU2_TR(0x7358b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7358c0:L7358c0:{c.instructions+=5;NFSU2_TR(0x7358c0);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B7358c5:{NFSU2_TR(0x7358c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358c6:{NFSU2_TR(0x7358c6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358c8:{NFSU2_TR(0x7358c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358c9:{NFSU2_TR(0x7358c9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7358cfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7358cf:L7358cf:{c.instructions+=7;NFSU2_TR(0x7358cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7358d3:{NFSU2_TR(0x7358d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7358d7:{NFSU2_TR(0x7358d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7358db:{NFSU2_TR(0x7358db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358dc:{NFSU2_TR(0x7358dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358dd:{NFSU2_TR(0x7358dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358de:{NFSU2_TR(0x7358de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7358e3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735490u);}goto L735490;}
}
B7358e3:L7358e3:{c.instructions+=5;NFSU2_TR(0x7358e3);
__builtin_memmove((R+4),gp(0x8b4f38),4);
}
B7358e9:{NFSU2_TR(0x7358e9);
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
B7358ec:{NFSU2_TR(0x7358ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7358ed:{NFSU2_TR(0x7358ed);
__builtin_memmove((R+24),(R+0),4);
}
B7358ef:{NFSU2_TR(0x7358ef);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7358f5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7358f5:L7358f5:{c.instructions+=3;NFSU2_TR(0x7358f5);
__builtin_memmove((R+0),(R+24),4);
}
B7358f7:{NFSU2_TR(0x7358f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7358f8:{NFSU2_TR(0x7358f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735900:L735900:{c.instructions+=5;NFSU2_TR(0x735900);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735905:{NFSU2_TR(0x735905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735906:{NFSU2_TR(0x735906);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735908:{NFSU2_TR(0x735908);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735909:{NFSU2_TR(0x735909);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73590full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73590f:L73590f:{c.instructions+=5;NFSU2_TR(0x73590f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735913:{NFSU2_TR(0x735913);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735916:{NFSU2_TR(0x735916);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B735918:{NFSU2_TR(0x735918);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B73591a:{NFSU2_TR(0x73591a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L735930;}}
}
B73591c:L73591c:{c.instructions+=5;NFSU2_TR(0x73591c);
__builtin_memmove((R+0),(R+8),4);
}
B73591e:{NFSU2_TR(0x73591e);
__builtin_memmove((R+24),(R+0),4);
}
B735920:{NFSU2_TR(0x735920);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735925:{NFSU2_TR(0x735925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735926:{NFSU2_TR(0x735926);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73592cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73592c:L73592c:{c.instructions+=3;NFSU2_TR(0x73592c);
__builtin_memmove((R+0),(R+24),4);
}
B73592e:{NFSU2_TR(0x73592e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73592f:{NFSU2_TR(0x73592f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735930:L735930:{c.instructions+=3;NFSU2_TR(0x735930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B735932:{NFSU2_TR(0x735932);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B735934:{NFSU2_TR(0x735934);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73594d;}}
}
B735936:L735936:{c.instructions+=5;NFSU2_TR(0x735936);
w4(R+0,u32(0xfffffffaull));
}
B73593b:{NFSU2_TR(0x73593b);
__builtin_memmove((R+24),(R+0),4);
}
B73593d:{NFSU2_TR(0x73593d);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735942:{NFSU2_TR(0x735942);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735943:{NFSU2_TR(0x735943);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735949ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735949:L735949:{c.instructions+=3;NFSU2_TR(0x735949);
__builtin_memmove((R+0),(R+24),4);
}
B73594b:{NFSU2_TR(0x73594b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73594c:{NFSU2_TR(0x73594c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73594d:L73594d:{c.instructions+=2;NFSU2_TR(0x73594d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B735950:{NFSU2_TR(0x735950);
if(r1(R+518)){{goto L73596e;}}
}
B735952:L735952:{c.instructions+=7;NFSU2_TR(0x735952);
w4(R+0,u32(0xfffffffdull));
}
B735957:{NFSU2_TR(0x735957);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735959:{NFSU2_TR(0x735959);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73595c:{NFSU2_TR(0x73595c);
__builtin_memmove((R+24),(R+0),4);
}
B73595e:{NFSU2_TR(0x73595e);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735963:{NFSU2_TR(0x735963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735964:{NFSU2_TR(0x735964);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73596aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73596a:L73596a:{c.instructions+=3;NFSU2_TR(0x73596a);
__builtin_memmove((R+0),(R+24),4);
}
B73596c:{NFSU2_TR(0x73596c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73596d:{NFSU2_TR(0x73596d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73596e:L73596e:{c.instructions+=7;NFSU2_TR(0x73596e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B735970:{NFSU2_TR(0x735970);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735974:{NFSU2_TR(0x735974);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735976:{NFSU2_TR(0x735976);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735979:{NFSU2_TR(0x735979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73597b:{NFSU2_TR(0x73597b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B73597d:{NFSU2_TR(0x73597d);
if(r1(R+518)){{goto L735982;}}
}
B73597f:L73597f:{c.instructions+=1;NFSU2_TR(0x73597f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735982:L735982:{c.instructions+=4;NFSU2_TR(0x735982);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B735984:{NFSU2_TR(0x735984);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B735989:{NFSU2_TR(0x735989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73598a:{NFSU2_TR(0x73598a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735990ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B735990:L735990:{c.instructions+=3;NFSU2_TR(0x735990);
__builtin_memmove((R+0),(R+24),4);
}
B735992:{NFSU2_TR(0x735992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735993:{NFSU2_TR(0x735993);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7359a0:L7359a0:{c.instructions+=5;NFSU2_TR(0x7359a0);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B7359a5:{NFSU2_TR(0x7359a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359a6:{NFSU2_TR(0x7359a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359a8:{NFSU2_TR(0x7359a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359a9:{NFSU2_TR(0x7359a9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7359afull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7359af:L7359af:{c.instructions+=5;NFSU2_TR(0x7359af);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7359b3:{NFSU2_TR(0x7359b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7359b7:{NFSU2_TR(0x7359b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359b8:{NFSU2_TR(0x7359b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359b9:{NFSU2_TR(0x7359b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7359beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735620u);}goto L735620;}
}
B7359be:L7359be:{c.instructions+=5;NFSU2_TR(0x7359be);
__builtin_memmove((R+24),(R+0),4);
}
B7359c0:{NFSU2_TR(0x7359c0);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B7359c5:{NFSU2_TR(0x7359c5);
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
B7359c8:{NFSU2_TR(0x7359c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359c9:{NFSU2_TR(0x7359c9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7359cfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7359cf:L7359cf:{c.instructions+=3;NFSU2_TR(0x7359cf);
__builtin_memmove((R+0),(R+24),4);
}
B7359d1:{NFSU2_TR(0x7359d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7359d2:{NFSU2_TR(0x7359d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7359e0:L7359e0:{c.instructions+=18;NFSU2_TR(0x7359e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7359e4:{NFSU2_TR(0x7359e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7359e6:{NFSU2_TR(0x7359e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7359e9:{NFSU2_TR(0x7359e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359ea:{NFSU2_TR(0x7359ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359eb:{NFSU2_TR(0x7359eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7359ef:{NFSU2_TR(0x7359ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7359f0:{NFSU2_TR(0x7359f0);
__builtin_memmove((R+0),(R+8),4);
}
B7359f2:{NFSU2_TR(0x7359f2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B7359f5:{NFSU2_TR(0x7359f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7359f8:{NFSU2_TR(0x7359f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7359fb:{NFSU2_TR(0x7359fb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfull))));
}
B7359fe:{NFSU2_TR(0x7359fe);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffcull))));
}
B735a01:{NFSU2_TR(0x735a01);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B735a03:{NFSU2_TR(0x735a03);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B735a05:{NFSU2_TR(0x735a05);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B735a07:{NFSU2_TR(0x735a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B735a0a:{NFSU2_TR(0x735a0a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L735a1f;}}
}
B735a0c:L735a0c:{c.instructions+=11;NFSU2_TR(0x735a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B735a0f:{NFSU2_TR(0x735a0f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B735a10:{NFSU2_TR(0x735a10);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B735a13:{NFSU2_TR(0x735a13);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B735a15:{NFSU2_TR(0x735a15);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B735a18:{NFSU2_TR(0x735a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735a19:{NFSU2_TR(0x735a19);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735a1a:{NFSU2_TR(0x735a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735a1b:{NFSU2_TR(0x735a1b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B735a1d:{NFSU2_TR(0x735a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735a1e:{NFSU2_TR(0x735a1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735a1f:L735a1f:{c.instructions+=5;NFSU2_TR(0x735a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B735a22:{NFSU2_TR(0x735a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735a23:{NFSU2_TR(0x735a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735a24:{NFSU2_TR(0x735a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735a25:{NFSU2_TR(0x735a25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735a30:L735a30:{c.instructions+=6;NFSU2_TR(0x735a30);
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
B735a32:{NFSU2_TR(0x735a32);
__builtin_memmove(gp(0x8b5174),(R+0),4);
}
B735a37:{NFSU2_TR(0x735a37);
__builtin_memmove(gp(0x8b517c),(R+0),4);
}
B735a3c:{NFSU2_TR(0x735a3c);
__builtin_memmove(gp(0x8b5180),(R+0),4);
}
B735a41:{NFSU2_TR(0x735a41);
__builtin_memmove(gp(0x8b5178),(R+0),4);
}
B735a46:{NFSU2_TR(0x735a46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735a50:L735a50:{c.instructions+=3;NFSU2_TR(0x735a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735a54:{NFSU2_TR(0x735a54);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
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
B735a57:{NFSU2_TR(0x735a57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735a60:L735a60:{c.instructions+=7;NFSU2_TR(0x735a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735a64:{NFSU2_TR(0x735a64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735a68:{NFSU2_TR(0x735a68);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B735a6a:{NFSU2_TR(0x735a6a);
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
B735a6c:{NFSU2_TR(0x735a6c);
__builtin_memmove(gp(0x8b517c),(R+4),4);
}
B735a72:{NFSU2_TR(0x735a72);
__builtin_memmove(gp(0x8b5174),(R+0),4);
}
B735a77:{NFSU2_TR(0x735a77);
if(r1(R+518)){{goto L735a9e;}}
}
B735a79:L735a79:{c.instructions+=3;NFSU2_TR(0x735a79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735a7b:{NFSU2_TR(0x735a7b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B735a7d:{NFSU2_TR(0x735a7d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735a9e;}}
}
B735a7f:L735a7f:{c.instructions+=1;NFSU2_TR(0x735a7f);
}
B735a80:L735a80:{c.instructions+=8;NFSU2_TR(0x735a80);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B735a86:{NFSU2_TR(0x735a86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B735a89:{NFSU2_TR(0x735a89);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B735a8f:{NFSU2_TR(0x735a8f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B735a93:{NFSU2_TR(0x735a93);
__builtin_memmove((R+4),gp(0x8b517c),4);
}
B735a99:{NFSU2_TR(0x735a99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735a9a:{NFSU2_TR(0x735a9a);
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
B735a9c:{NFSU2_TR(0x735a9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735a80u);}goto L735a80;}}
}
B735a9e:L735a9e:{c.instructions+=1;NFSU2_TR(0x735a9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735aa0:L735aa0:{c.instructions+=7;NFSU2_TR(0x735aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B735aa3:{NFSU2_TR(0x735aa3);
__builtin_memmove((R+0),gp(0x8b5180),4);
}
B735aa8:{NFSU2_TR(0x735aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735aaa:{NFSU2_TR(0x735aaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B735aad:{NFSU2_TR(0x735aad);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B735ab4:{NFSU2_TR(0x735ab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735ab8:{NFSU2_TR(0x735ab8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735ac1;}}
}
B735aba:L735aba:{c.instructions+=3;NFSU2_TR(0x735aba);
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
}
B735abd:{NFSU2_TR(0x735abd);
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
B735ac0:{NFSU2_TR(0x735ac0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735ac1:L735ac1:{c.instructions+=6;NFSU2_TR(0x735ac1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B735ac3:{NFSU2_TR(0x735ac3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735ac4:{NFSU2_TR(0x735ac4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735ac5:{NFSU2_TR(0x735ac5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735ac6:{NFSU2_TR(0x735ac6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735ac7:{NFSU2_TR(0x735ac7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L735ba9;}}
}
B735acd:L735acd:{c.instructions+=4;NFSU2_TR(0x735acd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B735ad1:{NFSU2_TR(0x735ad1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+4),(U+0),2);
}
B735ad4:{NFSU2_TR(0x735ad4);
__builtin_memmove((R+20),gp(0x8b5174),4);
}
B735ada:{NFSU2_TR(0x735ada);
{goto L735ae0;}
}
B735adc:L735adc:{c.instructions+=1;NFSU2_TR(0x735adc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735ae0:L735ae0:{c.instructions+=9;NFSU2_TR(0x735ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735ae4:{NFSU2_TR(0x735ae4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B735ae6:{NFSU2_TR(0x735ae6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B735ae7:{NFSU2_TR(0x735ae7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B735ae9:{NFSU2_TR(0x735ae9);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B735aeb:{NFSU2_TR(0x735aeb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B735aef:{NFSU2_TR(0x735aef);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+28),(U+0),2);
}
B735af2:{NFSU2_TR(0x735af2);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735af5:{NFSU2_TR(0x735af5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735b05;}}
}
B735af7:L735af7:{c.instructions+=3;NFSU2_TR(0x735af7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B735afb:{NFSU2_TR(0x735afb);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+8))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B735aff:{NFSU2_TR(0x735aff);
if(r1(R+518)){{goto L735ba9;}}
}
B735b05:L735b05:{c.instructions+=2;NFSU2_TR(0x735b05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735b07:{NFSU2_TR(0x735b07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735b39;}}
}
B735b09:L735b09:{c.instructions+=4;NFSU2_TR(0x735b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735b0c:{NFSU2_TR(0x735b0c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+24),(U+0),2);
}
B735b0f:{NFSU2_TR(0x735b0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735b12:{NFSU2_TR(0x735b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735b2f;}}
}
B735b14:L735b14:{c.instructions+=4;NFSU2_TR(0x735b14);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B735b18:{NFSU2_TR(0x735b18);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+20),(U+4),2);
}
B735b1c:{NFSU2_TR(0x735b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+20))<(r2(U+6))));
}
B735b20:{NFSU2_TR(0x735b20);
if(r1(R+512)){{goto L735bb5;}}
}
B735b26:L735b26:{c.instructions+=2;NFSU2_TR(0x735b26);
__builtin_memmove((R+20),gp(0x8b5174),4);
}
B735b2c:{NFSU2_TR(0x735b2c);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B735b2f:L735b2f:{c.instructions+=1;NFSU2_TR(0x735b2f);
if(r1(R+512)){{goto L735bb5;}}
}
B735b35:L735b35:{c.instructions+=1;NFSU2_TR(0x735b35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B735b39:L735b39:{c.instructions+=2;NFSU2_TR(0x735b39);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735b3c:{NFSU2_TR(0x735b3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735b4b;}}
}
B735b3e:L735b3e:{c.instructions+=3;NFSU2_TR(0x735b3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B735b42:{NFSU2_TR(0x735b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+8))<(r2(U+6))));
}
B735b46:{NFSU2_TR(0x735b46);
if(r1(R+512)){{goto L735b4d;}}
}
B735b48:L735b48:{c.instructions+=1;NFSU2_TR(0x735b48);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B735b4b:L735b4b:{c.instructions+=1;NFSU2_TR(0x735b4b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L735b76;}}
}
B735b4d:L735b4d:{c.instructions+=4;NFSU2_TR(0x735b4d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B735b51:{NFSU2_TR(0x735b51);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+24),(U+0),2);
}
B735b54:{NFSU2_TR(0x735b54);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735b57:{NFSU2_TR(0x735b57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735b70;}}
}
B735b59:L735b59:{c.instructions+=4;NFSU2_TR(0x735b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B735b5d:{NFSU2_TR(0x735b5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+20),(U+4),2);
}
B735b61:{NFSU2_TR(0x735b61);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+20))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+20))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B735b65:{NFSU2_TR(0x735b65);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L735bad;}}
}
B735b67:L735b67:{c.instructions+=2;NFSU2_TR(0x735b67);
__builtin_memmove((R+20),gp(0x8b5174),4);
}
B735b6d:{NFSU2_TR(0x735b6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735b70:L735b70:{c.instructions+=1;NFSU2_TR(0x735b70);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L735bad;}}
}
B735b72:L735b72:{c.instructions+=1;NFSU2_TR(0x735b72);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B735b76:L735b76:{c.instructions+=2;NFSU2_TR(0x735b76);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735b79:{NFSU2_TR(0x735b79);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L735b8e;}}
}
B735b7b:L735b7b:{c.instructions+=1;NFSU2_TR(0x735b7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735b87;}}
}
B735b7d:L735b7d:{c.instructions+=3;NFSU2_TR(0x735b7d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B735b81:{NFSU2_TR(0x735b81);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+8))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+8))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B735b85:{NFSU2_TR(0x735b85);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L735b8e;}}
}
B735b87:L735b87:{c.instructions+=3;NFSU2_TR(0x735b87);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B735b88:{NFSU2_TR(0x735b88);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735b8c:{NFSU2_TR(0x735b8c);
{goto L735b9b;}
}
B735b8e:L735b8e:{c.instructions+=5;NFSU2_TR(0x735b8e);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B735b92:{NFSU2_TR(0x735b92);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735b93:{NFSU2_TR(0x735b93);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735b95:{NFSU2_TR(0x735b95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735b99:{NFSU2_TR(0x735b99);
if(r1(R+518)){{goto L735bc0;}}
}
B735b9b:L735b9b:{c.instructions+=3;NFSU2_TR(0x735b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735b9f:{NFSU2_TR(0x735b9f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B735ba3:{NFSU2_TR(0x735ba3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735adcu);}goto L735adc;}}
}
B735ba9:L735ba9:{c.instructions+=1;NFSU2_TR(0x735ba9);
w2(R+0,u16(u32(r2(R+0))|u32(u16(0xffffull))));
}
B735bad:L735bad:{c.instructions+=6;NFSU2_TR(0x735bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735bae:{NFSU2_TR(0x735bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735baf:{NFSU2_TR(0x735baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735bb0:{NFSU2_TR(0x735bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735bb1:{NFSU2_TR(0x735bb1);
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
B735bb4:{NFSU2_TR(0x735bb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735bb5:L735bb5:{c.instructions+=7;NFSU2_TR(0x735bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735bb6:{NFSU2_TR(0x735bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735bb7:{NFSU2_TR(0x735bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735bb8:{NFSU2_TR(0x735bb8);
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
}
B735bbb:{NFSU2_TR(0x735bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735bbc:{NFSU2_TR(0x735bbc);
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
B735bbf:{NFSU2_TR(0x735bbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735bc0:L735bc0:{c.instructions+=7;NFSU2_TR(0x735bc0);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B735bc5:{NFSU2_TR(0x735bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735bc6:{NFSU2_TR(0x735bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735bc7:{NFSU2_TR(0x735bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735bc8:{NFSU2_TR(0x735bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735bc9:{NFSU2_TR(0x735bc9);
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
B735bcc:{NFSU2_TR(0x735bcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735bd0:L735bd0:{c.instructions+=10;NFSU2_TR(0x735bd0);
__builtin_memmove((R+0),gp(0x8b5180),4);
}
B735bd5:{NFSU2_TR(0x735bd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735bd6:{NFSU2_TR(0x735bd6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735bd7:{NFSU2_TR(0x735bd7);
__builtin_memmove((R+20),gp(0x8b5174),4);
}
B735bdd:{NFSU2_TR(0x735bdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735bde:{NFSU2_TR(0x735bde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735bdf:{NFSU2_TR(0x735bdf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B735be1:{NFSU2_TR(0x735be1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735be3:{NFSU2_TR(0x735be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B735be6:{NFSU2_TR(0x735be6);
if(r1(R+518)){{goto L735c17;}}
}
B735be8:L735be8:{c.instructions+=2;NFSU2_TR(0x735be8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735bea:{NFSU2_TR(0x735bea);
if(r1(R+518)){{goto L735c17;}}
}
B735bec:L735bec:{c.instructions+=2;NFSU2_TR(0x735bec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B735bee:{NFSU2_TR(0x735bee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L735c17;}}
}
B735bf0:L735bf0:{c.instructions+=1;NFSU2_TR(0x735bf0);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B735bf5:L735bf5:{c.instructions+=8;NFSU2_TR(0x735bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B735bf8:{NFSU2_TR(0x735bf8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B735bf9:{NFSU2_TR(0x735bf9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B735bfb:{NFSU2_TR(0x735bfb);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B735bfd:{NFSU2_TR(0x735bfd);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B735c01:{NFSU2_TR(0x735c01);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B735c04:{NFSU2_TR(0x735c04);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(R+12))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+12),r2(U+4)));
w2(U+6,u16(u32(r2(R+12))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B735c07:{NFSU2_TR(0x735c07);
if(r1(R+518)){{goto L735c20;}}
}
B735c09:L735c09:{c.instructions+=1;NFSU2_TR(0x735c09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L735c10;}}
}
B735c0b:L735c0b:{c.instructions+=2;NFSU2_TR(0x735c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735c0e:{NFSU2_TR(0x735c0e);
{goto L735c13;}
}
B735c10:L735c10:{c.instructions+=1;NFSU2_TR(0x735c10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B735c13:L735c13:{c.instructions+=2;NFSU2_TR(0x735c13);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735c15:{NFSU2_TR(0x735c15);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735bf5u);}goto L735bf5;}}
}
B735c17:L735c17:{c.instructions+=6;NFSU2_TR(0x735c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735c18:{NFSU2_TR(0x735c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735c19:{NFSU2_TR(0x735c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735c1a:{NFSU2_TR(0x735c1a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))|u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B735c1e:{NFSU2_TR(0x735c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735c1f:{NFSU2_TR(0x735c1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735c20:L735c20:{c.instructions+=8;NFSU2_TR(0x735c20);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B735c24:{NFSU2_TR(0x735c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735c28:{NFSU2_TR(0x735c28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735c29:{NFSU2_TR(0x735c29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735c2a:{NFSU2_TR(0x735c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735c2b:{NFSU2_TR(0x735c2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B735c2d:{NFSU2_TR(0x735c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735c2e:{NFSU2_TR(0x735c2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735c30:L735c30:{c.instructions+=10;NFSU2_TR(0x735c30);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B735c36:{NFSU2_TR(0x735c36);
__builtin_memmove((R+0),gp(0x8b5180),4);
}
B735c3b:{NFSU2_TR(0x735c3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735c3c:{NFSU2_TR(0x735c3c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735c3d:{NFSU2_TR(0x735c3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735c3e:{NFSU2_TR(0x735c3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735c3f:{NFSU2_TR(0x735c3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B735c41:{NFSU2_TR(0x735c41);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735c43:{NFSU2_TR(0x735c43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B735c46:{NFSU2_TR(0x735c46);
if(r1(R+518)){{goto L735c9c;}}
}
B735c48:L735c48:{c.instructions+=2;NFSU2_TR(0x735c48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735c4a:{NFSU2_TR(0x735c4a);
if(r1(R+518)){{goto L735c9c;}}
}
B735c4c:L735c4c:{c.instructions+=2;NFSU2_TR(0x735c4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B735c4e:{NFSU2_TR(0x735c4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L735c9c;}}
}
B735c50:L735c50:{c.instructions+=3;NFSU2_TR(0x735c50);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+20),(U+4),2);
}
B735c55:{NFSU2_TR(0x735c55);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B735c5a:{NFSU2_TR(0x735c5a);
__builtin_memmove((R+12),(R+12),4);
}
B735c60:L735c60:{c.instructions+=9;NFSU2_TR(0x735c60);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B735c66:{NFSU2_TR(0x735c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B735c69:{NFSU2_TR(0x735c69);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B735c6a:{NFSU2_TR(0x735c6a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B735c6c:{NFSU2_TR(0x735c6c);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B735c6e:{NFSU2_TR(0x735c6e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B735c72:{NFSU2_TR(0x735c72);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+4),(U+0),2);
}
B735c75:{NFSU2_TR(0x735c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+12))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735c78:{NFSU2_TR(0x735c78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735c83;}}
}
B735c7a:L735c7a:{c.instructions+=2;NFSU2_TR(0x735c7a);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+20))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+20),r2(U+10)));
w2(U+12,u16(u32(r2(R+20))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B735c7e:{NFSU2_TR(0x735c7e);
if(r1(R+518)){{goto L735ca5;}}
}
B735c80:L735c80:{c.instructions+=1;NFSU2_TR(0x735c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+12))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735c83:L735c83:{c.instructions+=1;NFSU2_TR(0x735c83);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L735c95;}}
}
B735c85:L735c85:{c.instructions+=2;NFSU2_TR(0x735c85);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B735c88:{NFSU2_TR(0x735c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735c90;}}
}
B735c8a:L735c8a:{c.instructions+=2;NFSU2_TR(0x735c8a);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+20))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+20))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B735c8e:{NFSU2_TR(0x735c8e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L735c95;}}
}
B735c90:L735c90:{c.instructions+=2;NFSU2_TR(0x735c90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B735c93:{NFSU2_TR(0x735c93);
{goto L735c98;}
}
B735c95:L735c95:{c.instructions+=1;NFSU2_TR(0x735c95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735c98:L735c98:{c.instructions+=2;NFSU2_TR(0x735c98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735c9a:{NFSU2_TR(0x735c9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735c60u);}goto L735c60;}}
}
B735c9c:L735c9c:{c.instructions+=6;NFSU2_TR(0x735c9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735c9d:{NFSU2_TR(0x735c9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735c9e:{NFSU2_TR(0x735c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735c9f:{NFSU2_TR(0x735c9f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))|u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B735ca3:{NFSU2_TR(0x735ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735ca4:{NFSU2_TR(0x735ca4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735ca5:L735ca5:{c.instructions+=9;NFSU2_TR(0x735ca5);
__builtin_memmove((R+8),gp(0x8b5174),4);
}
B735cab:{NFSU2_TR(0x735cab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B735cae:{NFSU2_TR(0x735cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735cb2:{NFSU2_TR(0x735cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735cb3:{NFSU2_TR(0x735cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735cb4:{NFSU2_TR(0x735cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735cb5:{NFSU2_TR(0x735cb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B735cb7:{NFSU2_TR(0x735cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735cb8:{NFSU2_TR(0x735cb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735cc0:L735cc0:{c.instructions+=4;NFSU2_TR(0x735cc0);
__builtin_memmove((R+8),gp(0x8b5174),4);
}
B735cc6:{NFSU2_TR(0x735cc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735cc8:{NFSU2_TR(0x735cc8);
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
B735cca:{NFSU2_TR(0x735cca);
if(r1(R+518)){{goto L735cf1;}}
}
B735ccc:L735ccc:{c.instructions+=3;NFSU2_TR(0x735ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735cd0:{NFSU2_TR(0x735cd0);
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
B735cd2:{NFSU2_TR(0x735cd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L735cf1;}}
}
B735cd4:L735cd4:{c.instructions+=4;NFSU2_TR(0x735cd4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B735cd8:{NFSU2_TR(0x735cd8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B735cdc:{NFSU2_TR(0x735cdc);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B735ce1:{NFSU2_TR(0x735ce1);
if(r1(R+518)){{goto L735cf1;}}
}
B735ce3:L735ce3:{c.instructions+=3;NFSU2_TR(0x735ce3);
w4(R+8,u32(r2(R+4)));
}
B735ce6:{NFSU2_TR(0x735ce6);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B735cea:{NFSU2_TR(0x735cea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L735cf1;}}
}
B735cec:L735cec:{c.instructions+=1;NFSU2_TR(0x735cec);
w4(R+0,u32(0x1ull));
}
B735cf1:L735cf1:{c.instructions+=1;NFSU2_TR(0x735cf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735d00:L735d00:{c.instructions+=5;NFSU2_TR(0x735d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d01:{NFSU2_TR(0x735d01);
__builtin_memmove((R+24),gp(0x8b5180),4);
}
B735d07:{NFSU2_TR(0x735d07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735d09:{NFSU2_TR(0x735d09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735d0b:{NFSU2_TR(0x735d0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735d21;}}
}
B735d0d:L735d0d:{c.instructions+=2;NFSU2_TR(0x735d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735d11:{NFSU2_TR(0x735d11);
__builtin_memmove((R+8),gp(0x8b5174),4);
}
B735d17:L735d17:{c.instructions+=2;NFSU2_TR(0x735d17);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B735d1a:{NFSU2_TR(0x735d1a);
if(r1(R+518)){{goto L735d24;}}
}
B735d1c:L735d1c:{c.instructions+=3;NFSU2_TR(0x735d1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735d1d:{NFSU2_TR(0x735d1d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B735d1f:{NFSU2_TR(0x735d1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735d17u);}goto L735d17;}}
}
B735d21:L735d21:{c.instructions+=1;NFSU2_TR(0x735d21);
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
B735d24:L735d24:{c.instructions+=2;NFSU2_TR(0x735d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735d25:{NFSU2_TR(0x735d25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735d30:L735d30:{c.instructions+=6;NFSU2_TR(0x735d30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d31:{NFSU2_TR(0x735d31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d32:{NFSU2_TR(0x735d32);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B735d36:{NFSU2_TR(0x735d36);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B735d39:{NFSU2_TR(0x735d39);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B735d3b:{NFSU2_TR(0x735d3b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L735d64;}}
}
B735d3d:L735d3d:{c.instructions+=2;NFSU2_TR(0x735d3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d3e:{NFSU2_TR(0x735d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735d43ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7359e0u);}goto L7359e0;}
}
B735d43:L735d43:{c.instructions+=4;NFSU2_TR(0x735d43);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B735d45:{NFSU2_TR(0x735d45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B735d48:{NFSU2_TR(0x735d48);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+0))));
}
B735d4a:{NFSU2_TR(0x735d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L735d57;}}
}
B735d4c:L735d4c:{c.instructions+=3;NFSU2_TR(0x735d4c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B735d50:{NFSU2_TR(0x735d50);
w4(R+8,u32(r1(R+4)));
}
B735d53:{NFSU2_TR(0x735d53);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B735d57:L735d57:{c.instructions+=4;NFSU2_TR(0x735d57);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B735d5a:{NFSU2_TR(0x735d5a);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B735d5c:{NFSU2_TR(0x735d5c);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
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
B735d5e:{NFSU2_TR(0x735d5e);
if(r1(R+512)){{goto L735d62;}}
}
B735d60:L735d60:{c.instructions+=1;NFSU2_TR(0x735d60);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B735d62:L735d62:{c.instructions+=1;NFSU2_TR(0x735d62);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B735d64:L735d64:{c.instructions+=3;NFSU2_TR(0x735d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735d65:{NFSU2_TR(0x735d65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735d66:{NFSU2_TR(0x735d66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735d70:L735d70:{c.instructions+=7;NFSU2_TR(0x735d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B735d74:{NFSU2_TR(0x735d74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d75:{NFSU2_TR(0x735d75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d76:{NFSU2_TR(0x735d76);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B735d7a:{NFSU2_TR(0x735d7a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B735d7c:{NFSU2_TR(0x735d7c);
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
B735d7e:{NFSU2_TR(0x735d7e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735dc2;}}
}
B735d80:L735d80:{c.instructions+=2;NFSU2_TR(0x735d80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d81:{NFSU2_TR(0x735d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735d86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7359e0u);}goto L7359e0;}
}
B735d86:L735d86:{c.instructions+=6;NFSU2_TR(0x735d86);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B735d89:{NFSU2_TR(0x735d89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B735d8c:{NFSU2_TR(0x735d8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735d8d:{NFSU2_TR(0x735d8d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B735d8f:{NFSU2_TR(0x735d8f);
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
B735d91:{NFSU2_TR(0x735d91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735dc2;}}
}
B735d93:L735d93:{c.instructions+=4;NFSU2_TR(0x735d93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d94:{NFSU2_TR(0x735d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B735d98:{NFSU2_TR(0x735d98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735d99:{NFSU2_TR(0x735d99);
__builtin_memmove((R+16),(R+16),4);
}
B735da0:L735da0:{c.instructions+=2;NFSU2_TR(0x735da0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B735da1:{NFSU2_TR(0x735da1);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L735da6;}}
}
B735da3:L735da3:{c.instructions+=1;NFSU2_TR(0x735da3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B735da6:L735da6:{c.instructions+=3;NFSU2_TR(0x735da6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B735daa:{NFSU2_TR(0x735daa);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B735dac:{NFSU2_TR(0x735dac);
if(r1(R+518)){{goto L735dba;}}
}
B735dae:L735dae:{c.instructions+=3;NFSU2_TR(0x735dae);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B735daf:{NFSU2_TR(0x735daf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B735db1:{NFSU2_TR(0x735db1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735da0u);}goto L735da0;}}
}
B735db3:L735db3:{c.instructions+=6;NFSU2_TR(0x735db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735db4:{NFSU2_TR(0x735db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735db5:{NFSU2_TR(0x735db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735db6:{NFSU2_TR(0x735db6);
__builtin_memmove((R+0),(R+12),4);
}
B735db8:{NFSU2_TR(0x735db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735db9:{NFSU2_TR(0x735db9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735dba:L735dba:{c.instructions+=6;NFSU2_TR(0x735dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B735dbb:{NFSU2_TR(0x735dbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735dbc:{NFSU2_TR(0x735dbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735dbd:{NFSU2_TR(0x735dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B735dc0:{NFSU2_TR(0x735dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735dc1:{NFSU2_TR(0x735dc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735dc2:L735dc2:{c.instructions+=4;NFSU2_TR(0x735dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735dc3:{NFSU2_TR(0x735dc3);
__builtin_memmove((R+0),(R+12),4);
}
B735dc5:{NFSU2_TR(0x735dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735dc6:{NFSU2_TR(0x735dc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735dd0:L735dd0:{c.instructions+=16;NFSU2_TR(0x735dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735dd4:{NFSU2_TR(0x735dd4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735dd6:{NFSU2_TR(0x735dd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B735dd9:{NFSU2_TR(0x735dd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735dda:{NFSU2_TR(0x735dda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735ddb:{NFSU2_TR(0x735ddb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B735ddf:{NFSU2_TR(0x735ddf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B735de2:{NFSU2_TR(0x735de2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B735de5:{NFSU2_TR(0x735de5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B735de8:{NFSU2_TR(0x735de8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfull))));
}
B735deb:{NFSU2_TR(0x735deb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B735dee:{NFSU2_TR(0x735dee);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B735df0:{NFSU2_TR(0x735df0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B735df4:{NFSU2_TR(0x735df4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B735df7:{NFSU2_TR(0x735df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B735dfa:{NFSU2_TR(0x735dfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L735e5a;}}
}
B735dfc:L735dfc:{c.instructions+=10;NFSU2_TR(0x735dfc);
__builtin_memmove((R+0),gp(0x8b515c),4);
}
B735e01:{NFSU2_TR(0x735e01);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B735e03:{NFSU2_TR(0x735e03);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x735e03);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x735e03);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B735e05:{NFSU2_TR(0x735e05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735e06:{NFSU2_TR(0x735e06);
__builtin_memmove((R+0),(R+28),4);
}
B735e08:{NFSU2_TR(0x735e08);
__builtin_memmove((R+24),(R+8),4);
}
B735e0a:{NFSU2_TR(0x735e0a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B735e0b:{NFSU2_TR(0x735e0b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x735e0b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x735e0b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B735e0d:{NFSU2_TR(0x735e0d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735e0f:{NFSU2_TR(0x735e0f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L735e1a;}}
}
B735e11:L735e11:{c.instructions+=4;NFSU2_TR(0x735e11);
__builtin_memmove((R+4),(R+0),4);
}
B735e13:{NFSU2_TR(0x735e13);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B735e16:{NFSU2_TR(0x735e16);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B735e18:{NFSU2_TR(0x735e18);
{goto L735e20;}
}
B735e1a:L735e1a:{c.instructions+=2;NFSU2_TR(0x735e1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B735e1d:{NFSU2_TR(0x735e1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B735e20:L735e20:{c.instructions+=3;NFSU2_TR(0x735e20);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B735e21:{NFSU2_TR(0x735e21);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735e23:{NFSU2_TR(0x735e23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L735e2c;}}
}
B735e25:L735e25:{c.instructions+=3;NFSU2_TR(0x735e25);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B735e28:{NFSU2_TR(0x735e28);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B735e2a:{NFSU2_TR(0x735e2a);
{goto L735e30;}
}
B735e2c:L735e2c:{c.instructions+=2;NFSU2_TR(0x735e2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735e2d:{NFSU2_TR(0x735e2d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B735e30:L735e30:{c.instructions+=7;NFSU2_TR(0x735e30);
__builtin_memmove((R+8),(R+4),4);
}
B735e32:{NFSU2_TR(0x735e32);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B735e34:{NFSU2_TR(0x735e34);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B735e37:{NFSU2_TR(0x735e37);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B735e38:{NFSU2_TR(0x735e38);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B735e3b:{NFSU2_TR(0x735e3b);
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
B735e3d:{NFSU2_TR(0x735e3d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735e59;}}
}
B735e3f:L735e3f:{c.instructions+=2;NFSU2_TR(0x735e3f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B735e41:{NFSU2_TR(0x735e41);
__builtin_memmove((R+24),(R+0),4);
}
B735e43:L735e43:{c.instructions+=8;NFSU2_TR(0x735e43);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B735e45:{NFSU2_TR(0x735e45);
w1(R+0,u8(0x1ull));
}
B735e47:{NFSU2_TR(0x735e47);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r1(U+0))));
}
B735e49:{NFSU2_TR(0x735e49);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B735e4b:{NFSU2_TR(0x735e4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B735e4c:{NFSU2_TR(0x735e4c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735e4f:{NFSU2_TR(0x735e4f);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B735e51:{NFSU2_TR(0x735e51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735e56;}}
}
B735e53:L735e53:{c.instructions+=2;NFSU2_TR(0x735e53);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B735e55:{NFSU2_TR(0x735e55);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B735e56:L735e56:{c.instructions+=2;NFSU2_TR(0x735e56);
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
B735e57:{NFSU2_TR(0x735e57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735e43u);}goto L735e43;}}
}
B735e59:L735e59:{c.instructions+=1;NFSU2_TR(0x735e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735e5a:L735e5a:{c.instructions+=3;NFSU2_TR(0x735e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735e5b:{NFSU2_TR(0x735e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735e5c:{NFSU2_TR(0x735e5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735e60:L735e60:{c.instructions+=5;NFSU2_TR(0x735e60);
__builtin_memmove((R+0),gp(0x8b5174),4);
}
B735e65:{NFSU2_TR(0x735e65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735e66:{NFSU2_TR(0x735e66);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B735e69:{NFSU2_TR(0x735e69);
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
B735e6b:{NFSU2_TR(0x735e6b);
if(r1(R+518)){{goto L735efe;}}
}
B735e71:L735e71:{c.instructions+=5;NFSU2_TR(0x735e71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735e72:{NFSU2_TR(0x735e72);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B735e76:{NFSU2_TR(0x735e76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735e77:{NFSU2_TR(0x735e77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735e78:{NFSU2_TR(0x735e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735e7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735aa0u);}goto L735aa0;}
}
B735e7d:L735e7d:{c.instructions+=5;NFSU2_TR(0x735e7d);
w4(R+24,u32(s32(s16(r2(R+0)))));
}
B735e80:{NFSU2_TR(0x735e80);
__builtin_memmove((R+0),gp(0x8b517c),4);
}
B735e85:{NFSU2_TR(0x735e85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B735e88:{NFSU2_TR(0x735e88);
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
B735e8a:{NFSU2_TR(0x735e8a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L735f02;}}
}
B735e8c:L735e8c:{c.instructions+=2;NFSU2_TR(0x735e8c);
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
B735e8e:{NFSU2_TR(0x735e8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L735f02;}}
}
B735e90:L735e90:{c.instructions+=3;NFSU2_TR(0x735e90);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B735e93:{NFSU2_TR(0x735e93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B735e95:{NFSU2_TR(0x735e95);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L735ea0;}}
}
B735e97:L735e97:{c.instructions+=2;NFSU2_TR(0x735e97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735e98:{NFSU2_TR(0x735e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735e9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735dd0u);}goto L735dd0;}
}
B735e9d:L735e9d:{c.instructions+=1;NFSU2_TR(0x735e9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B735ea0:L735ea0:{c.instructions+=3;NFSU2_TR(0x735ea0);
__builtin_memmove((R+4),gp(0x8b5180),4);
}
B735ea6:{NFSU2_TR(0x735ea6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735ea8:{NFSU2_TR(0x735ea8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L735ec9;}}
}
B735eaa:L735eaa:{c.instructions+=1;NFSU2_TR(0x735eaa);
__builtin_memmove((R+12),(R+12),4);
}
B735eb0:L735eb0:{c.instructions+=9;NFSU2_TR(0x735eb0);
__builtin_memmove((R+0),gp(0x8b5174),4);
}
B735eb5:{NFSU2_TR(0x735eb5);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B735eb9:{NFSU2_TR(0x735eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B735ebc:{NFSU2_TR(0x735ebc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B735ebe:{NFSU2_TR(0x735ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735ec1:{NFSU2_TR(0x735ec1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B735ec2:{NFSU2_TR(0x735ec2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735ec4:{NFSU2_TR(0x735ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B735ec7:{NFSU2_TR(0x735ec7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735eb0u);}goto L735eb0;}}
}
B735ec9:L735ec9:{c.instructions+=15;NFSU2_TR(0x735ec9);
__builtin_memmove((R+0),gp(0x8b5174),4);
}
B735ece:{NFSU2_TR(0x735ece);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B735ed2:{NFSU2_TR(0x735ed2);
__builtin_memmove((R+0),gp(0x8b5178),4);
}
B735ed7:{NFSU2_TR(0x735ed7);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B735edd:{NFSU2_TR(0x735edd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B735ee0:{NFSU2_TR(0x735ee0);
__builtin_memmove((R+8),gp(0x8b5178),4);
}
B735ee6:{NFSU2_TR(0x735ee6);
__builtin_memmove((R+4),gp(0x8b5180),4);
}
B735eec:{NFSU2_TR(0x735eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735eed:{NFSU2_TR(0x735eed);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B735eee:{NFSU2_TR(0x735eee);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B735eef:{NFSU2_TR(0x735eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735ef0:{NFSU2_TR(0x735ef0);
__builtin_memmove(gp(0x8b5178),(R+8),4);
}
B735ef6:{NFSU2_TR(0x735ef6);
__builtin_memmove(gp(0x8b5180),(R+4),4);
}
B735efc:{NFSU2_TR(0x735efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735efd:{NFSU2_TR(0x735efd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735efe:L735efe:{c.instructions+=3;NFSU2_TR(0x735efe);
__builtin_memmove((R+0),(R+28),4);
}
B735f00:{NFSU2_TR(0x735f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735f01:{NFSU2_TR(0x735f01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735f02:L735f02:{c.instructions+=5;NFSU2_TR(0x735f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735f03:{NFSU2_TR(0x735f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735f04:{NFSU2_TR(0x735f04);
__builtin_memmove((R+0),(R+28),4);
}
B735f06:{NFSU2_TR(0x735f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735f07:{NFSU2_TR(0x735f07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735f10:L735f10:{c.instructions+=6;NFSU2_TR(0x735f10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f11:{NFSU2_TR(0x735f11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f12:{NFSU2_TR(0x735f12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f13:{NFSU2_TR(0x735f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B735f17:{NFSU2_TR(0x735f17);
w4(R+8,u32(0x8b4fc8ull));
}
B735f1c:{NFSU2_TR(0x735f1c);
__builtin_memmove((R+16),(R+16),4);
}
B735f20:L735f20:{c.instructions+=3;NFSU2_TR(0x735f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B735f22:{NFSU2_TR(0x735f22);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735f24:{NFSU2_TR(0x735f24);
if(r1(R+518)){{goto L735f52;}}
}
B735f26:L735f26:{c.instructions+=2;NFSU2_TR(0x735f26);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B735f29:{NFSU2_TR(0x735f29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735f52;}}
}
B735f2b:L735f2b:{c.instructions+=8;NFSU2_TR(0x735f2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B735f2f:{NFSU2_TR(0x735f2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B735f32:{NFSU2_TR(0x735f32);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B735f36:{NFSU2_TR(0x735f36);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B735f39:{NFSU2_TR(0x735f39);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B735f3d:{NFSU2_TR(0x735f3d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735f3f:{NFSU2_TR(0x735f3f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B735f41:{NFSU2_TR(0x735f41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L735f52;}}
}
B735f43:L735f43:{c.instructions+=6;NFSU2_TR(0x735f43);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0xffull));
s1(u32(r4(U+4)),r1(U+8));
}
B735f47:{NFSU2_TR(0x735f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B735f49:{NFSU2_TR(0x735f49);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B735f4d:{NFSU2_TR(0x735f4d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735f4e:{NFSU2_TR(0x735f4e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B735f50:{NFSU2_TR(0x735f50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735f43u);}goto L735f43;}}
}
B735f52:L735f52:{c.instructions+=3;NFSU2_TR(0x735f52);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B735f55:{NFSU2_TR(0x735f55);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b5008ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b5008ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b5008ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B735f5b:{NFSU2_TR(0x735f5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735f20u);}goto L735f20;}}
}
B735f5d:L735f5d:{c.instructions+=4;NFSU2_TR(0x735f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B735f5e:{NFSU2_TR(0x735f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B735f5f:{NFSU2_TR(0x735f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B735f60:{NFSU2_TR(0x735f60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B735f70:L735f70:{c.instructions+=6;NFSU2_TR(0x735f70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B735f72:{NFSU2_TR(0x735f72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B735f75:{NFSU2_TR(0x735f75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f76:{NFSU2_TR(0x735f76);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B735f78:{NFSU2_TR(0x735f78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B735f7a:{NFSU2_TR(0x735f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73600cu,736);}
}
B735f80:L735f80:{c.instructions+=2;NFSU2_TR(0x735f80);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x11ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x11ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x11ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B735f84:{NFSU2_TR(0x735f84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73600cu,736);}
}
B735f8a:L735f8a:{c.instructions+=7;NFSU2_TR(0x735f8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f8b:{NFSU2_TR(0x735f8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B735f8f:{NFSU2_TR(0x735f8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f90:{NFSU2_TR(0x735f90);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B735f94:{NFSU2_TR(0x735f94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f95:{NFSU2_TR(0x735f95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735f96:{NFSU2_TR(0x735f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x735f9bull));
TAIL_STATIC(0x736eb0u,736);
}
B735f9b:L735f9b:{c.instructions+=6;NFSU2_TR(0x735f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B735f9f:{NFSU2_TR(0x735f9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B735fa3:{NFSU2_TR(0x735fa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B735fa6:{NFSU2_TR(0x735fa6);
w4(R+4,u32(0x8b4fc8ull));
}
B735fab:{NFSU2_TR(0x735fab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B735fac:{NFSU2_TR(0x735fac);
__builtin_memmove((R+16),(R+16),4);
}
B735fb0:L735fb0:{c.instructions+=3;NFSU2_TR(0x735fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B735fb2:{NFSU2_TR(0x735fb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735fb4:{NFSU2_TR(0x735fb4);
if(r1(R+518)){{goto L735fc6;}}
}
B735fb6:L735fb6:{c.instructions+=3;NFSU2_TR(0x735fb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B735fba:{NFSU2_TR(0x735fba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735fbc:{NFSU2_TR(0x735fbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L735fc6;}}
}
B735fbe:L735fbe:{c.instructions+=3;NFSU2_TR(0x735fbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B735fc2:{NFSU2_TR(0x735fc2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B735fc4:{NFSU2_TR(0x735fc4);
if(r1(R+518)){TAIL_STATIC(0x73600au,736);}
}
B735fc6:L735fc6:{c.instructions+=3;NFSU2_TR(0x735fc6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B735fc9:{NFSU2_TR(0x735fc9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b5008ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b5008ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B735fcf:{NFSU2_TR(0x735fcf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735fb0u);}goto L735fb0;}}
}
B735fd1:L735fd1:{c.instructions+=1;NFSU2_TR(0x735fd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B735fd3:L735fd3:{c.instructions+=3;NFSU2_TR(0x735fd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4fc8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B735fda:{NFSU2_TR(0x735fda);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B735fdc:{NFSU2_TR(0x735fdc);
if(r1(R+518)){{goto L735fe6;}}
}
B735fde:L735fde:{c.instructions+=3;NFSU2_TR(0x735fde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B735fdf:{NFSU2_TR(0x735fdf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B735fe2:{NFSU2_TR(0x735fe2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x735fd3u);}goto L735fd3;}}
}
B735fe4:L735fe4:{c.instructions+=1;NFSU2_TR(0x735fe4);
{goto L735ffd;}
}
B735fe6:L735fe6:{c.instructions+=4;NFSU2_TR(0x735fe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B735fea:{NFSU2_TR(0x735fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4fc8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B735ff1:{NFSU2_TR(0x735ff1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4fccull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B735ff8:{NFSU2_TR(0x735ff8);
w4(R+28,u32(0x1ull));
}
B735ffd:L735ffd:{c.instructions+=1;NFSU2_TR(0x735ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x736001u,736);
}
XIT:NFSU2_TR_EXIT(0x735,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
