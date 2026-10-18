#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_697(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x696,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x696,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_696(u8* __restrict R,Cpu& c);
u32 page_696(Cpu& c){return body_696(c.regs.data(),c);}
__attribute__((noinline)) u32 body_696(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x696002:goto L696002;
case 0x696006:c.instructions+=5;goto B696006;
case 0x696009:c.instructions+=4;goto B696009;
case 0x69600c:c.instructions+=3;goto B69600c;
case 0x69600e:c.instructions+=2;goto B69600e;
case 0x696011:c.instructions+=1;goto B696011;
case 0x696017:goto L696017;
case 0x69601a:c.instructions+=12;goto B69601a;
case 0x696021:c.instructions+=11;goto B696021;
case 0x696024:c.instructions+=10;goto B696024;
case 0x696026:c.instructions+=9;goto B696026;
case 0x696029:c.instructions+=8;goto B696029;
case 0x69602c:c.instructions+=7;goto B69602c;
case 0x69602f:c.instructions+=6;goto B69602f;
case 0x696031:c.instructions+=5;goto B696031;
case 0x696033:c.instructions+=4;goto B696033;
case 0x696036:c.instructions+=3;goto B696036;
case 0x696039:c.instructions+=2;goto B696039;
case 0x69603c:c.instructions+=1;goto B69603c;
case 0x69603f:goto L69603f;
case 0x696041:c.instructions+=9;goto B696041;
case 0x696044:c.instructions+=8;goto B696044;
case 0x696047:c.instructions+=7;goto B696047;
case 0x696049:c.instructions+=6;goto B696049;
case 0x69604c:c.instructions+=5;goto B69604c;
case 0x69604e:c.instructions+=4;goto B69604e;
case 0x696050:c.instructions+=3;goto B696050;
case 0x696052:c.instructions+=2;goto B696052;
case 0x696055:c.instructions+=1;goto B696055;
case 0x696057:goto L696057;
case 0x69605a:goto L69605a;
case 0x69605d:c.instructions+=10;goto B69605d;
case 0x696060:c.instructions+=9;goto B696060;
case 0x696063:c.instructions+=8;goto B696063;
case 0x696066:c.instructions+=7;goto B696066;
case 0x696069:c.instructions+=6;goto B696069;
case 0x69606c:c.instructions+=5;goto B69606c;
case 0x69606f:c.instructions+=4;goto B69606f;
case 0x696072:c.instructions+=3;goto B696072;
case 0x696075:c.instructions+=2;goto B696075;
case 0x696077:c.instructions+=1;goto B696077;
case 0x696079:goto L696079;
case 0x69607b:c.instructions+=1;goto B69607b;
case 0x69607d:goto L69607d;
case 0x69607f:c.instructions+=2;goto B69607f;
case 0x696082:c.instructions+=1;goto B696082;
case 0x696085:goto L696085;
case 0x696089:c.instructions+=6;goto B696089;
case 0x69608c:c.instructions+=5;goto B69608c;
case 0x69608e:c.instructions+=4;goto B69608e;
case 0x696091:c.instructions+=3;goto B696091;
case 0x696094:c.instructions+=2;goto B696094;
case 0x696096:c.instructions+=1;goto B696096;
case 0x696098:goto L696098;
case 0x69609b:c.instructions+=1;goto B69609b;
case 0x69609d:goto L69609d;
case 0x6960a0:goto L6960a0;
case 0x6960a3:c.instructions+=6;goto B6960a3;
case 0x6960a6:c.instructions+=5;goto B6960a6;
case 0x6960a9:c.instructions+=4;goto B6960a9;
case 0x6960ad:c.instructions+=3;goto B6960ad;
case 0x6960b1:c.instructions+=2;goto B6960b1;
case 0x6960b3:c.instructions+=1;goto B6960b3;
case 0x6960b5:goto L6960b5;
case 0x6960b7:goto L6960b7;
case 0x6960b8:c.instructions+=7;goto B6960b8;
case 0x6960bb:c.instructions+=6;goto B6960bb;
case 0x6960bf:c.instructions+=5;goto B6960bf;
case 0x6960c2:c.instructions+=4;goto B6960c2;
case 0x6960c5:c.instructions+=3;goto B6960c5;
case 0x6960c6:c.instructions+=2;goto B6960c6;
case 0x6960c9:c.instructions+=1;goto B6960c9;
case 0x6960cc:goto L6960cc;
case 0x6960ce:c.instructions+=1;goto B6960ce;
case 0x6960d0:goto L6960d0;
case 0x6960d2:goto L6960d2;
case 0x6960d3:c.instructions+=4;goto B6960d3;
case 0x6960d4:c.instructions+=3;goto B6960d4;
case 0x6960d5:c.instructions+=2;goto B6960d5;
case 0x6960d6:c.instructions+=1;goto B6960d6;
case 0x6960d9:goto L6960d9;
case 0x6960db:c.instructions+=15;goto B6960db;
case 0x6960dc:c.instructions+=14;goto B6960dc;
case 0x6960de:c.instructions+=13;goto B6960de;
case 0x6960e1:c.instructions+=12;goto B6960e1;
case 0x6960e4:c.instructions+=11;goto B6960e4;
case 0x6960e5:c.instructions+=10;goto B6960e5;
case 0x6960e6:c.instructions+=9;goto B6960e6;
case 0x6960e7:c.instructions+=8;goto B6960e7;
case 0x6960ea:c.instructions+=7;goto B6960ea;
case 0x6960ed:c.instructions+=6;goto B6960ed;
case 0x6960f0:c.instructions+=5;goto B6960f0;
case 0x6960f3:c.instructions+=4;goto B6960f3;
case 0x6960f6:c.instructions+=3;goto B6960f6;
case 0x6960f9:c.instructions+=2;goto B6960f9;
case 0x6960fc:c.instructions+=1;goto B6960fc;
case 0x696102:goto L696102;
case 0x696103:c.instructions+=1;goto B696103;
case 0x696109:goto L696109;
case 0x69610a:c.instructions+=1;goto B69610a;
case 0x696110:goto L696110;
case 0x696111:c.instructions+=1;goto B696111;
case 0x696117:goto L696117;
case 0x696118:c.instructions+=2;goto B696118;
case 0x696119:c.instructions+=1;goto B696119;
case 0x69611b:goto L69611b;
case 0x696120:c.instructions+=1;goto B696120;
case 0x696125:goto L696125;
case 0x696128:c.instructions+=6;goto B696128;
case 0x69612a:c.instructions+=5;goto B69612a;
case 0x69612d:c.instructions+=4;goto B69612d;
case 0x696130:c.instructions+=3;goto B696130;
case 0x696134:c.instructions+=2;goto B696134;
case 0x696137:c.instructions+=1;goto B696137;
case 0x696139:goto L696139;
case 0x69613c:goto L69613c;
case 0x696140:c.instructions+=2;goto B696140;
case 0x696144:c.instructions+=1;goto B696144;
case 0x69614a:goto L69614a;
case 0x69614e:c.instructions+=2;goto B69614e;
case 0x696153:c.instructions+=1;goto B696153;
case 0x696155:goto L696155;
case 0x696158:c.instructions+=8;goto B696158;
case 0x69615b:c.instructions+=7;goto B69615b;
case 0x69615e:c.instructions+=6;goto B69615e;
case 0x696161:c.instructions+=5;goto B696161;
case 0x696164:c.instructions+=4;goto B696164;
case 0x696167:c.instructions+=3;goto B696167;
case 0x69616a:c.instructions+=2;goto B69616a;
case 0x69616b:c.instructions+=1;goto B69616b;
case 0x696170:goto L696170;
case 0x696172:c.instructions+=1;goto B696172;
case 0x696178:goto L696178;
case 0x69617b:c.instructions+=9;goto B69617b;
case 0x69617e:c.instructions+=8;goto B69617e;
case 0x696181:c.instructions+=7;goto B696181;
case 0x696184:c.instructions+=6;goto B696184;
case 0x696187:c.instructions+=5;goto B696187;
case 0x69618a:c.instructions+=4;goto B69618a;
case 0x69618e:c.instructions+=3;goto B69618e;
case 0x696191:c.instructions+=2;goto B696191;
case 0x696194:c.instructions+=1;goto B696194;
case 0x696196:goto L696196;
case 0x696199:c.instructions+=3;goto B696199;
case 0x69619c:c.instructions+=2;goto B69619c;
case 0x69619f:c.instructions+=1;goto B69619f;
case 0x6961a1:goto L6961a1;
case 0x6961a6:goto L6961a6;
case 0x6961aa:c.instructions+=10;goto B6961aa;
case 0x6961ae:c.instructions+=9;goto B6961ae;
case 0x6961b0:c.instructions+=8;goto B6961b0;
case 0x6961b3:c.instructions+=7;goto B6961b3;
case 0x6961b6:c.instructions+=6;goto B6961b6;
case 0x6961b8:c.instructions+=5;goto B6961b8;
case 0x6961ba:c.instructions+=4;goto B6961ba;
case 0x6961bd:c.instructions+=3;goto B6961bd;
case 0x6961c1:c.instructions+=2;goto B6961c1;
case 0x6961c4:c.instructions+=1;goto B6961c4;
case 0x6961c6:goto L6961c6;
case 0x6961c9:goto L6961c9;
case 0x6961cd:c.instructions+=3;goto B6961cd;
case 0x6961d1:c.instructions+=2;goto B6961d1;
case 0x6961d4:c.instructions+=1;goto B6961d4;
case 0x6961d6:goto L6961d6;
case 0x6961da:c.instructions+=3;goto B6961da;
case 0x6961de:c.instructions+=2;goto B6961de;
case 0x6961e0:c.instructions+=1;goto B6961e0;
case 0x6961e2:goto L6961e2;
case 0x6961e4:c.instructions+=2;goto B6961e4;
case 0x6961e6:c.instructions+=1;goto B6961e6;
case 0x6961e8:goto L6961e8;
case 0x6961ec:c.instructions+=12;goto B6961ec;
case 0x6961f0:c.instructions+=11;goto B6961f0;
case 0x6961f2:c.instructions+=10;goto B6961f2;
case 0x6961f5:c.instructions+=9;goto B6961f5;
case 0x6961f8:c.instructions+=8;goto B6961f8;
case 0x6961fb:c.instructions+=7;goto B6961fb;
case 0x6961fe:c.instructions+=6;goto B6961fe;
case 0x696200:c.instructions+=5;goto B696200;
case 0x696204:c.instructions+=4;goto B696204;
case 0x696207:c.instructions+=3;goto B696207;
case 0x696208:c.instructions+=2;goto B696208;
case 0x69620a:c.instructions+=1;goto B69620a;
case 0x69620c:goto L69620c;
case 0x696210:c.instructions+=3;goto B696210;
case 0x696213:c.instructions+=2;goto B696213;
case 0x696216:c.instructions+=1;goto B696216;
case 0x696218:goto L696218;
case 0x69621b:c.instructions+=3;goto B69621b;
case 0x69621e:c.instructions+=2;goto B69621e;
case 0x696221:c.instructions+=1;goto B696221;
case 0x696223:goto L696223;
case 0x696226:c.instructions+=2;goto B696226;
case 0x696229:c.instructions+=1;goto B696229;
case 0x69622b:goto L69622b;
case 0x69622f:c.instructions+=3;goto B69622f;
case 0x696233:c.instructions+=2;goto B696233;
case 0x696236:c.instructions+=1;goto B696236;
case 0x696238:goto L696238;
case 0x69623c:goto L69623c;
case 0x69623f:c.instructions+=6;goto B69623f;
case 0x696241:c.instructions+=5;goto B696241;
case 0x696243:c.instructions+=4;goto B696243;
case 0x696246:c.instructions+=3;goto B696246;
case 0x69624a:c.instructions+=2;goto B69624a;
case 0x69624d:c.instructions+=1;goto B69624d;
case 0x69624f:goto L69624f;
case 0x696253:c.instructions+=3;goto B696253;
case 0x696256:c.instructions+=2;goto B696256;
case 0x696259:c.instructions+=1;goto B696259;
case 0x69625b:goto L69625b;
case 0x69625d:goto L69625d;
case 0x696260:goto L696260;
case 0x696264:c.instructions+=2;goto B696264;
case 0x696268:c.instructions+=1;goto B696268;
case 0x69626a:goto L69626a;
case 0x69626d:c.instructions+=4;goto B69626d;
case 0x696271:c.instructions+=3;goto B696271;
case 0x696274:c.instructions+=2;goto B696274;
case 0x696275:c.instructions+=1;goto B696275;
case 0x696277:goto L696277;
case 0x696278:c.instructions+=1;goto B696278;
case 0x69627a:goto L69627a;
case 0x69627b:c.instructions+=1;goto B69627b;
case 0x69627d:goto L69627d;
case 0x69627f:c.instructions+=1;goto B69627f;
case 0x696281:goto L696281;
case 0x696284:c.instructions+=2;goto B696284;
case 0x696286:c.instructions+=1;goto B696286;
case 0x696288:goto L696288;
case 0x69628b:c.instructions+=4;goto B69628b;
case 0x69628d:c.instructions+=3;goto B69628d;
case 0x696290:c.instructions+=2;goto B696290;
case 0x696291:c.instructions+=1;goto B696291;
case 0x696293:goto L696293;
case 0x696295:goto L696295;
case 0x696297:c.instructions+=1;goto B696297;
case 0x696299:goto L696299;
case 0x69629c:c.instructions+=2;goto B69629c;
case 0x69629e:c.instructions+=1;goto B69629e;
case 0x6962a0:goto L6962a0;
case 0x6962a2:c.instructions+=6;goto B6962a2;
case 0x6962a5:c.instructions+=5;goto B6962a5;
case 0x6962a8:c.instructions+=4;goto B6962a8;
case 0x6962aa:c.instructions+=3;goto B6962aa;
case 0x6962ad:c.instructions+=2;goto B6962ad;
case 0x6962ae:c.instructions+=1;goto B6962ae;
case 0x6962b0:goto L6962b0;
case 0x6962b3:c.instructions+=1;goto B6962b3;
case 0x6962b6:goto L6962b6;
case 0x6962ba:c.instructions+=2;goto B6962ba;
case 0x6962bd:c.instructions+=1;goto B6962bd;
case 0x6962c3:goto L6962c3;
case 0x6962c7:c.instructions+=1;goto B6962c7;
case 0x6962c9:goto L6962c9;
case 0x6962cd:c.instructions+=2;goto B6962cd;
case 0x6962d1:c.instructions+=1;goto B6962d1;
case 0x6962d3:goto L6962d3;
case 0x6962d7:c.instructions+=1;goto B6962d7;
case 0x6962db:goto L6962db;
case 0x6962de:c.instructions+=1;goto B6962de;
case 0x6962e4:goto L6962e4;
case 0x6962e8:c.instructions+=2;goto B6962e8;
case 0x6962ef:c.instructions+=1;goto B6962ef;
case 0x6962f1:goto L6962f1;
case 0x6962f8:goto L6962f8;
case 0x6962fc:c.instructions+=5;goto B6962fc;
case 0x6962ff:c.instructions+=4;goto B6962ff;
case 0x696302:c.instructions+=3;goto B696302;
case 0x696304:c.instructions+=2;goto B696304;
case 0x696307:c.instructions+=1;goto B696307;
case 0x69630d:goto L69630d;
case 0x696310:c.instructions+=12;goto B696310;
case 0x696317:c.instructions+=11;goto B696317;
case 0x69631a:c.instructions+=10;goto B69631a;
case 0x69631c:c.instructions+=9;goto B69631c;
case 0x69631f:c.instructions+=8;goto B69631f;
case 0x696322:c.instructions+=7;goto B696322;
case 0x696325:c.instructions+=6;goto B696325;
case 0x696327:c.instructions+=5;goto B696327;
case 0x696329:c.instructions+=4;goto B696329;
case 0x69632c:c.instructions+=3;goto B69632c;
case 0x69632f:c.instructions+=2;goto B69632f;
case 0x696332:c.instructions+=1;goto B696332;
case 0x696335:goto L696335;
case 0x696337:c.instructions+=9;goto B696337;
case 0x69633a:c.instructions+=8;goto B69633a;
case 0x69633d:c.instructions+=7;goto B69633d;
case 0x69633f:c.instructions+=6;goto B69633f;
case 0x696342:c.instructions+=5;goto B696342;
case 0x696344:c.instructions+=4;goto B696344;
case 0x696346:c.instructions+=3;goto B696346;
case 0x696348:c.instructions+=2;goto B696348;
case 0x69634b:c.instructions+=1;goto B69634b;
case 0x69634d:goto L69634d;
case 0x696350:goto L696350;
case 0x696353:c.instructions+=10;goto B696353;
case 0x696356:c.instructions+=9;goto B696356;
case 0x696359:c.instructions+=8;goto B696359;
case 0x69635c:c.instructions+=7;goto B69635c;
case 0x69635f:c.instructions+=6;goto B69635f;
case 0x696362:c.instructions+=5;goto B696362;
case 0x696365:c.instructions+=4;goto B696365;
case 0x696368:c.instructions+=3;goto B696368;
case 0x69636b:c.instructions+=2;goto B69636b;
case 0x69636d:c.instructions+=1;goto B69636d;
case 0x69636f:goto L69636f;
case 0x696371:c.instructions+=1;goto B696371;
case 0x696373:goto L696373;
case 0x696375:c.instructions+=2;goto B696375;
case 0x696378:c.instructions+=1;goto B696378;
case 0x69637b:goto L69637b;
case 0x69637f:c.instructions+=6;goto B69637f;
case 0x696382:c.instructions+=5;goto B696382;
case 0x696384:c.instructions+=4;goto B696384;
case 0x696387:c.instructions+=3;goto B696387;
case 0x69638a:c.instructions+=2;goto B69638a;
case 0x69638c:c.instructions+=1;goto B69638c;
case 0x69638e:goto L69638e;
case 0x696391:c.instructions+=1;goto B696391;
case 0x696393:goto L696393;
case 0x696396:goto L696396;
case 0x696399:c.instructions+=1;goto B696399;
case 0x69639c:goto L69639c;
case 0x69639f:c.instructions+=4;goto B69639f;
case 0x6963a3:c.instructions+=3;goto B6963a3;
case 0x6963a7:c.instructions+=2;goto B6963a7;
case 0x6963a9:c.instructions+=1;goto B6963a9;
case 0x6963ab:goto L6963ab;
case 0x6963ad:goto L6963ad;
case 0x6963ae:c.instructions+=7;goto B6963ae;
case 0x6963b1:c.instructions+=6;goto B6963b1;
case 0x6963b5:c.instructions+=5;goto B6963b5;
case 0x6963b8:c.instructions+=4;goto B6963b8;
case 0x6963bb:c.instructions+=3;goto B6963bb;
case 0x6963bc:c.instructions+=2;goto B6963bc;
case 0x6963bf:c.instructions+=1;goto B6963bf;
case 0x6963c2:goto L6963c2;
case 0x6963c4:c.instructions+=1;goto B6963c4;
case 0x6963c6:goto L6963c6;
case 0x6963c8:goto L6963c8;
case 0x6963c9:c.instructions+=4;goto B6963c9;
case 0x6963ca:c.instructions+=3;goto B6963ca;
case 0x6963cb:c.instructions+=2;goto B6963cb;
case 0x6963cc:c.instructions+=1;goto B6963cc;
case 0x6963cf:goto L6963cf;
case 0x6963d1:c.instructions+=16;goto B6963d1;
case 0x6963d2:c.instructions+=15;goto B6963d2;
case 0x6963d4:c.instructions+=14;goto B6963d4;
case 0x6963d7:c.instructions+=13;goto B6963d7;
case 0x6963d8:c.instructions+=12;goto B6963d8;
case 0x6963db:c.instructions+=11;goto B6963db;
case 0x6963de:c.instructions+=10;goto B6963de;
case 0x6963e1:c.instructions+=9;goto B6963e1;
case 0x6963e4:c.instructions+=8;goto B6963e4;
case 0x6963e5:c.instructions+=7;goto B6963e5;
case 0x6963e8:c.instructions+=6;goto B6963e8;
case 0x6963eb:c.instructions+=5;goto B6963eb;
case 0x6963ee:c.instructions+=4;goto B6963ee;
case 0x6963f0:c.instructions+=3;goto B6963f0;
case 0x6963f2:c.instructions+=2;goto B6963f2;
case 0x6963f3:c.instructions+=1;goto B6963f3;
case 0x6963f9:goto L6963f9;
case 0x6963fa:c.instructions+=1;goto B6963fa;
case 0x696400:goto L696400;
case 0x696401:c.instructions+=1;goto B696401;
case 0x696407:goto L696407;
case 0x696408:c.instructions+=1;goto B696408;
case 0x69640e:goto L69640e;
case 0x69640f:c.instructions+=2;goto B69640f;
case 0x696410:c.instructions+=1;goto B696410;
case 0x696412:goto L696412;
case 0x696417:c.instructions+=1;goto B696417;
case 0x69641c:goto L69641c;
case 0x69641f:c.instructions+=6;goto B69641f;
case 0x696421:c.instructions+=5;goto B696421;
case 0x696424:c.instructions+=4;goto B696424;
case 0x696427:c.instructions+=3;goto B696427;
case 0x69642b:c.instructions+=2;goto B69642b;
case 0x69642e:c.instructions+=1;goto B69642e;
case 0x696430:goto L696430;
case 0x696433:goto L696433;
case 0x696436:c.instructions+=2;goto B696436;
case 0x696439:c.instructions+=1;goto B696439;
case 0x69643f:goto L69643f;
case 0x696441:goto L696441;
case 0x696443:goto L696443;
case 0x696447:c.instructions+=2;goto B696447;
case 0x69644a:c.instructions+=1;goto B69644a;
case 0x69644c:goto L69644c;
case 0x69644f:c.instructions+=8;goto B69644f;
case 0x696452:c.instructions+=7;goto B696452;
case 0x696455:c.instructions+=6;goto B696455;
case 0x696458:c.instructions+=5;goto B696458;
case 0x69645b:c.instructions+=4;goto B69645b;
case 0x69645e:c.instructions+=3;goto B69645e;
case 0x696461:c.instructions+=2;goto B696461;
case 0x696462:c.instructions+=1;goto B696462;
case 0x696467:goto L696467;
case 0x696469:c.instructions+=1;goto B696469;
case 0x69646f:goto L69646f;
case 0x696472:c.instructions+=9;goto B696472;
case 0x696475:c.instructions+=8;goto B696475;
case 0x696478:c.instructions+=7;goto B696478;
case 0x69647b:c.instructions+=6;goto B69647b;
case 0x69647e:c.instructions+=5;goto B69647e;
case 0x696481:c.instructions+=4;goto B696481;
case 0x696485:c.instructions+=3;goto B696485;
case 0x696488:c.instructions+=2;goto B696488;
case 0x69648b:c.instructions+=1;goto B69648b;
case 0x69648d:goto L69648d;
case 0x696490:c.instructions+=3;goto B696490;
case 0x696493:c.instructions+=2;goto B696493;
case 0x696496:c.instructions+=1;goto B696496;
case 0x696498:goto L696498;
case 0x69649d:goto L69649d;
case 0x6964a1:c.instructions+=10;goto B6964a1;
case 0x6964a5:c.instructions+=9;goto B6964a5;
case 0x6964a7:c.instructions+=8;goto B6964a7;
case 0x6964aa:c.instructions+=7;goto B6964aa;
case 0x6964ad:c.instructions+=6;goto B6964ad;
case 0x6964af:c.instructions+=5;goto B6964af;
case 0x6964b1:c.instructions+=4;goto B6964b1;
case 0x6964b4:c.instructions+=3;goto B6964b4;
case 0x6964b8:c.instructions+=2;goto B6964b8;
case 0x6964bb:c.instructions+=1;goto B6964bb;
case 0x6964bd:goto L6964bd;
case 0x6964c0:goto L6964c0;
case 0x6964c4:c.instructions+=3;goto B6964c4;
case 0x6964c8:c.instructions+=2;goto B6964c8;
case 0x6964cb:c.instructions+=1;goto B6964cb;
case 0x6964cd:goto L6964cd;
case 0x6964d1:c.instructions+=3;goto B6964d1;
case 0x6964d5:c.instructions+=2;goto B6964d5;
case 0x6964d7:c.instructions+=1;goto B6964d7;
case 0x6964d9:goto L6964d9;
case 0x6964db:c.instructions+=2;goto B6964db;
case 0x6964dd:c.instructions+=1;goto B6964dd;
case 0x6964df:goto L6964df;
case 0x6964e3:c.instructions+=12;goto B6964e3;
case 0x6964e7:c.instructions+=11;goto B6964e7;
case 0x6964e9:c.instructions+=10;goto B6964e9;
case 0x6964ec:c.instructions+=9;goto B6964ec;
case 0x6964ef:c.instructions+=8;goto B6964ef;
case 0x6964f2:c.instructions+=7;goto B6964f2;
case 0x6964f5:c.instructions+=6;goto B6964f5;
case 0x6964f7:c.instructions+=5;goto B6964f7;
case 0x6964fb:c.instructions+=4;goto B6964fb;
case 0x6964fe:c.instructions+=3;goto B6964fe;
case 0x6964ff:c.instructions+=2;goto B6964ff;
case 0x696501:c.instructions+=1;goto B696501;
case 0x696503:goto L696503;
case 0x696507:c.instructions+=3;goto B696507;
case 0x69650a:c.instructions+=2;goto B69650a;
case 0x69650d:c.instructions+=1;goto B69650d;
case 0x69650f:goto L69650f;
case 0x696512:c.instructions+=3;goto B696512;
case 0x696515:c.instructions+=2;goto B696515;
case 0x696518:c.instructions+=1;goto B696518;
case 0x69651a:goto L69651a;
case 0x69651d:c.instructions+=2;goto B69651d;
case 0x696520:c.instructions+=1;goto B696520;
case 0x696522:goto L696522;
case 0x696526:c.instructions+=3;goto B696526;
case 0x69652a:c.instructions+=2;goto B69652a;
case 0x69652d:c.instructions+=1;goto B69652d;
case 0x69652f:goto L69652f;
case 0x696533:goto L696533;
case 0x696536:c.instructions+=6;goto B696536;
case 0x696538:c.instructions+=5;goto B696538;
case 0x69653a:c.instructions+=4;goto B69653a;
case 0x69653d:c.instructions+=3;goto B69653d;
case 0x696541:c.instructions+=2;goto B696541;
case 0x696544:c.instructions+=1;goto B696544;
case 0x696546:goto L696546;
case 0x69654a:c.instructions+=3;goto B69654a;
case 0x69654d:c.instructions+=2;goto B69654d;
case 0x696550:c.instructions+=1;goto B696550;
case 0x696552:goto L696552;
case 0x696554:goto L696554;
case 0x696557:goto L696557;
case 0x69655b:c.instructions+=2;goto B69655b;
case 0x69655f:c.instructions+=1;goto B69655f;
case 0x696565:goto L696565;
case 0x696568:c.instructions+=4;goto B696568;
case 0x69656c:c.instructions+=3;goto B69656c;
case 0x69656f:c.instructions+=2;goto B69656f;
case 0x696570:c.instructions+=1;goto B696570;
case 0x696572:goto L696572;
case 0x696573:c.instructions+=1;goto B696573;
case 0x696575:goto L696575;
case 0x696578:c.instructions+=8;goto B696578;
case 0x69657b:c.instructions+=7;goto B69657b;
case 0x696580:c.instructions+=6;goto B696580;
case 0x696583:c.instructions+=5;goto B696583;
case 0x696586:c.instructions+=4;goto B696586;
case 0x696588:c.instructions+=3;goto B696588;
case 0x69658b:c.instructions+=2;goto B69658b;
case 0x69658e:c.instructions+=1;goto B69658e;
case 0x696590:goto L696590;
case 0x696593:c.instructions+=2;goto B696593;
case 0x696596:c.instructions+=1;goto B696596;
case 0x696598:goto L696598;
case 0x69659b:c.instructions+=8;goto B69659b;
case 0x69659e:c.instructions+=7;goto B69659e;
case 0x6965a1:c.instructions+=6;goto B6965a1;
case 0x6965a4:c.instructions+=5;goto B6965a4;
case 0x6965a7:c.instructions+=4;goto B6965a7;
case 0x6965a9:c.instructions+=3;goto B6965a9;
case 0x6965ac:c.instructions+=2;goto B6965ac;
case 0x6965ad:c.instructions+=1;goto B6965ad;
case 0x6965af:goto L6965af;
case 0x6965b2:c.instructions+=1;goto B6965b2;
case 0x6965b4:goto L6965b4;
case 0x6965b6:c.instructions+=1;goto B6965b6;
case 0x6965b8:goto L6965b8;
case 0x6965bb:c.instructions+=2;goto B6965bb;
case 0x6965be:c.instructions+=1;goto B6965be;
case 0x6965c0:goto L6965c0;
case 0x6965c6:c.instructions+=5;goto B6965c6;
case 0x6965c9:c.instructions+=4;goto B6965c9;
case 0x6965cb:c.instructions+=3;goto B6965cb;
case 0x6965cd:c.instructions+=2;goto B6965cd;
case 0x6965d0:c.instructions+=1;goto B6965d0;
case 0x6965d2:goto L6965d2;
case 0x6965d4:c.instructions+=2;goto B6965d4;
case 0x6965d5:c.instructions+=1;goto B6965d5;
case 0x6965d7:goto L6965d7;
case 0x6965d9:goto L6965d9;
case 0x6965db:c.instructions+=3;goto B6965db;
case 0x6965de:c.instructions+=2;goto B6965de;
case 0x6965df:c.instructions+=1;goto B6965df;
case 0x6965e1:goto L6965e1;
case 0x6965e4:c.instructions+=1;goto B6965e4;
case 0x6965e7:goto L6965e7;
case 0x6965eb:c.instructions+=2;goto B6965eb;
case 0x6965ee:c.instructions+=1;goto B6965ee;
case 0x6965f4:goto L6965f4;
case 0x6965f8:c.instructions+=1;goto B6965f8;
case 0x6965fa:goto L6965fa;
case 0x6965fe:c.instructions+=2;goto B6965fe;
case 0x696602:c.instructions+=1;goto B696602;
case 0x696604:goto L696604;
case 0x696608:c.instructions+=1;goto B696608;
case 0x69660c:goto L69660c;
case 0x69660f:c.instructions+=1;goto B69660f;
case 0x696615:goto L696615;
case 0x696619:c.instructions+=2;goto B696619;
case 0x696620:c.instructions+=1;goto B696620;
case 0x696622:goto L696622;
case 0x696629:goto L696629;
case 0x69662d:c.instructions+=5;goto B69662d;
case 0x696630:c.instructions+=4;goto B696630;
case 0x696633:c.instructions+=3;goto B696633;
case 0x696635:c.instructions+=2;goto B696635;
case 0x696638:c.instructions+=1;goto B696638;
case 0x69663e:goto L69663e;
case 0x696641:c.instructions+=12;goto B696641;
case 0x696648:c.instructions+=11;goto B696648;
case 0x69664b:c.instructions+=10;goto B69664b;
case 0x69664d:c.instructions+=9;goto B69664d;
case 0x696650:c.instructions+=8;goto B696650;
case 0x696653:c.instructions+=7;goto B696653;
case 0x696656:c.instructions+=6;goto B696656;
case 0x696658:c.instructions+=5;goto B696658;
case 0x69665a:c.instructions+=4;goto B69665a;
case 0x69665d:c.instructions+=3;goto B69665d;
case 0x696660:c.instructions+=2;goto B696660;
case 0x696663:c.instructions+=1;goto B696663;
case 0x696666:goto L696666;
case 0x696668:c.instructions+=9;goto B696668;
case 0x69666b:c.instructions+=8;goto B69666b;
case 0x69666e:c.instructions+=7;goto B69666e;
case 0x696670:c.instructions+=6;goto B696670;
case 0x696673:c.instructions+=5;goto B696673;
case 0x696675:c.instructions+=4;goto B696675;
case 0x696677:c.instructions+=3;goto B696677;
case 0x696679:c.instructions+=2;goto B696679;
case 0x69667c:c.instructions+=1;goto B69667c;
case 0x69667e:goto L69667e;
case 0x696681:goto L696681;
case 0x696684:c.instructions+=10;goto B696684;
case 0x696687:c.instructions+=9;goto B696687;
case 0x69668a:c.instructions+=8;goto B69668a;
case 0x69668d:c.instructions+=7;goto B69668d;
case 0x696690:c.instructions+=6;goto B696690;
case 0x696693:c.instructions+=5;goto B696693;
case 0x696696:c.instructions+=4;goto B696696;
case 0x696699:c.instructions+=3;goto B696699;
case 0x69669c:c.instructions+=2;goto B69669c;
case 0x69669e:c.instructions+=1;goto B69669e;
case 0x6966a0:goto L6966a0;
case 0x6966a2:c.instructions+=1;goto B6966a2;
case 0x6966a4:goto L6966a4;
case 0x6966a6:c.instructions+=2;goto B6966a6;
case 0x6966a9:c.instructions+=1;goto B6966a9;
case 0x6966ac:goto L6966ac;
case 0x6966b0:c.instructions+=6;goto B6966b0;
case 0x6966b3:c.instructions+=5;goto B6966b3;
case 0x6966b5:c.instructions+=4;goto B6966b5;
case 0x6966b8:c.instructions+=3;goto B6966b8;
case 0x6966bb:c.instructions+=2;goto B6966bb;
case 0x6966bd:c.instructions+=1;goto B6966bd;
case 0x6966bf:goto L6966bf;
case 0x6966c2:c.instructions+=1;goto B6966c2;
case 0x6966c4:goto L6966c4;
case 0x6966c7:goto L6966c7;
case 0x6966ca:c.instructions+=1;goto B6966ca;
case 0x6966cd:goto L6966cd;
case 0x6966d0:c.instructions+=4;goto B6966d0;
case 0x6966d4:c.instructions+=3;goto B6966d4;
case 0x6966d8:c.instructions+=2;goto B6966d8;
case 0x6966da:c.instructions+=1;goto B6966da;
case 0x6966dc:goto L6966dc;
case 0x6966de:goto L6966de;
case 0x6966df:c.instructions+=7;goto B6966df;
case 0x6966e2:c.instructions+=6;goto B6966e2;
case 0x6966e6:c.instructions+=5;goto B6966e6;
case 0x6966e9:c.instructions+=4;goto B6966e9;
case 0x6966ec:c.instructions+=3;goto B6966ec;
case 0x6966ed:c.instructions+=2;goto B6966ed;
case 0x6966f0:c.instructions+=1;goto B6966f0;
case 0x6966f3:goto L6966f3;
case 0x6966f5:c.instructions+=1;goto B6966f5;
case 0x6966f7:goto L6966f7;
case 0x6966f9:goto L6966f9;
case 0x6966fa:c.instructions+=4;goto B6966fa;
case 0x6966fb:c.instructions+=3;goto B6966fb;
case 0x6966fc:c.instructions+=2;goto B6966fc;
case 0x6966fd:c.instructions+=1;goto B6966fd;
case 0x696700:goto L696700;
case 0x696702:c.instructions+=16;goto B696702;
case 0x696703:c.instructions+=15;goto B696703;
case 0x696705:c.instructions+=14;goto B696705;
case 0x696708:c.instructions+=13;goto B696708;
case 0x69670b:c.instructions+=12;goto B69670b;
case 0x69670e:c.instructions+=11;goto B69670e;
case 0x69670f:c.instructions+=10;goto B69670f;
case 0x696712:c.instructions+=9;goto B696712;
case 0x696713:c.instructions+=8;goto B696713;
case 0x696716:c.instructions+=7;goto B696716;
case 0x696719:c.instructions+=6;goto B696719;
case 0x69671c:c.instructions+=5;goto B69671c;
case 0x69671d:c.instructions+=4;goto B69671d;
case 0x69671f:c.instructions+=3;goto B69671f;
case 0x696721:c.instructions+=2;goto B696721;
case 0x696724:c.instructions+=1;goto B696724;
case 0x69672a:goto L69672a;
case 0x69672b:c.instructions+=1;goto B69672b;
case 0x696731:goto L696731;
case 0x696732:c.instructions+=1;goto B696732;
case 0x696738:goto L696738;
case 0x696739:c.instructions+=1;goto B696739;
case 0x69673f:goto L69673f;
case 0x696740:c.instructions+=2;goto B696740;
case 0x696741:c.instructions+=1;goto B696741;
case 0x696743:goto L696743;
case 0x696748:c.instructions+=1;goto B696748;
case 0x69674d:goto L69674d;
case 0x696750:c.instructions+=7;goto B696750;
case 0x696753:c.instructions+=6;goto B696753;
case 0x696755:c.instructions+=5;goto B696755;
case 0x696758:c.instructions+=4;goto B696758;
case 0x69675b:c.instructions+=3;goto B69675b;
case 0x69675f:c.instructions+=2;goto B69675f;
case 0x696762:c.instructions+=1;goto B696762;
case 0x696764:goto L696764;
case 0x696767:goto L696767;
case 0x69676a:c.instructions+=2;goto B69676a;
case 0x69676d:c.instructions+=1;goto B69676d;
case 0x696773:goto L696773;
case 0x696775:c.instructions+=2;goto B696775;
case 0x696779:c.instructions+=1;goto B696779;
case 0x69677b:goto L69677b;
case 0x69677e:c.instructions+=8;goto B69677e;
case 0x696781:c.instructions+=7;goto B696781;
case 0x696784:c.instructions+=6;goto B696784;
case 0x696787:c.instructions+=5;goto B696787;
case 0x69678a:c.instructions+=4;goto B69678a;
case 0x69678d:c.instructions+=3;goto B69678d;
case 0x696790:c.instructions+=2;goto B696790;
case 0x696791:c.instructions+=1;goto B696791;
case 0x696796:goto L696796;
case 0x696798:c.instructions+=1;goto B696798;
case 0x69679e:goto L69679e;
case 0x6967a1:c.instructions+=9;goto B6967a1;
case 0x6967a4:c.instructions+=8;goto B6967a4;
case 0x6967a7:c.instructions+=7;goto B6967a7;
case 0x6967aa:c.instructions+=6;goto B6967aa;
case 0x6967ad:c.instructions+=5;goto B6967ad;
case 0x6967b0:c.instructions+=4;goto B6967b0;
case 0x6967b4:c.instructions+=3;goto B6967b4;
case 0x6967b5:c.instructions+=2;goto B6967b5;
case 0x6967b7:c.instructions+=1;goto B6967b7;
case 0x6967b9:goto L6967b9;
case 0x6967bc:c.instructions+=3;goto B6967bc;
case 0x6967bf:c.instructions+=2;goto B6967bf;
case 0x6967c2:c.instructions+=1;goto B6967c2;
case 0x6967c4:goto L6967c4;
case 0x6967c9:goto L6967c9;
case 0x6967cd:c.instructions+=7;goto B6967cd;
case 0x6967d0:c.instructions+=6;goto B6967d0;
case 0x6967d2:c.instructions+=5;goto B6967d2;
case 0x6967d4:c.instructions+=4;goto B6967d4;
case 0x6967d7:c.instructions+=3;goto B6967d7;
case 0x6967db:c.instructions+=2;goto B6967db;
case 0x6967de:c.instructions+=1;goto B6967de;
case 0x6967e0:goto L6967e0;
case 0x6967e3:goto L6967e3;
case 0x6967e7:c.instructions+=3;goto B6967e7;
case 0x6967eb:c.instructions+=2;goto B6967eb;
case 0x6967ed:c.instructions+=1;goto B6967ed;
case 0x6967ef:goto L6967ef;
case 0x6967f1:c.instructions+=2;goto B6967f1;
case 0x6967f3:c.instructions+=1;goto B6967f3;
case 0x6967f5:goto L6967f5;
case 0x6967f9:goto L6967f9;
case 0x6967fb:c.instructions+=2;goto B6967fb;
case 0x6967fd:c.instructions+=1;goto B6967fd;
case 0x6967ff:goto L6967ff;
case 0x696802:c.instructions+=1;goto B696802;
case 0x696804:goto L696804;
case 0x696806:c.instructions+=1;goto B696806;
case 0x696808:goto L696808;
case 0x69680c:c.instructions+=5;goto B69680c;
case 0x69680f:c.instructions+=4;goto B69680f;
case 0x696811:c.instructions+=3;goto B696811;
case 0x696814:c.instructions+=2;goto B696814;
case 0x696817:c.instructions+=1;goto B696817;
case 0x69681a:goto L69681a;
case 0x69681c:c.instructions+=5;goto B69681c;
case 0x696820:c.instructions+=4;goto B696820;
case 0x696823:c.instructions+=3;goto B696823;
case 0x696824:c.instructions+=2;goto B696824;
case 0x696826:c.instructions+=1;goto B696826;
case 0x696828:goto L696828;
case 0x69682c:c.instructions+=3;goto B69682c;
case 0x69682d:c.instructions+=2;goto B69682d;
case 0x69682f:c.instructions+=1;goto B69682f;
case 0x696831:goto L696831;
case 0x696834:c.instructions+=3;goto B696834;
case 0x696837:c.instructions+=2;goto B696837;
case 0x69683a:c.instructions+=1;goto B69683a;
case 0x69683c:goto L69683c;
case 0x69683f:c.instructions+=1;goto B69683f;
case 0x696844:goto L696844;
case 0x696848:c.instructions+=7;goto B696848;
case 0x69684b:c.instructions+=6;goto B69684b;
case 0x69684d:c.instructions+=5;goto B69684d;
case 0x69684f:c.instructions+=4;goto B69684f;
case 0x696852:c.instructions+=3;goto B696852;
case 0x696856:c.instructions+=2;goto B696856;
case 0x696859:c.instructions+=1;goto B696859;
case 0x69685b:goto L69685b;
case 0x69685e:goto L69685e;
case 0x696862:c.instructions+=2;goto B696862;
case 0x696866:c.instructions+=1;goto B696866;
case 0x69686c:goto L69686c;
case 0x696870:c.instructions+=3;goto B696870;
case 0x696874:c.instructions+=2;goto B696874;
case 0x696876:c.instructions+=1;goto B696876;
case 0x696878:goto L696878;
case 0x69687a:c.instructions+=2;goto B69687a;
case 0x69687c:c.instructions+=1;goto B69687c;
case 0x69687e:goto L69687e;
case 0x696881:goto L696881;
case 0x696883:c.instructions+=2;goto B696883;
case 0x696885:c.instructions+=1;goto B696885;
case 0x696887:goto L696887;
case 0x69688a:c.instructions+=1;goto B69688a;
case 0x69688c:goto L69688c;
case 0x69688e:c.instructions+=1;goto B69688e;
case 0x696890:goto L696890;
case 0x696894:c.instructions+=5;goto B696894;
case 0x696898:c.instructions+=4;goto B696898;
case 0x69689b:c.instructions+=3;goto B69689b;
case 0x69689d:c.instructions+=2;goto B69689d;
case 0x6968a0:c.instructions+=1;goto B6968a0;
case 0x6968a3:goto L6968a3;
case 0x6968a5:c.instructions+=6;goto B6968a5;
case 0x6968a9:c.instructions+=5;goto B6968a9;
case 0x6968ac:c.instructions+=4;goto B6968ac;
case 0x6968af:c.instructions+=3;goto B6968af;
case 0x6968b0:c.instructions+=2;goto B6968b0;
case 0x6968b2:c.instructions+=1;goto B6968b2;
case 0x6968b4:goto L6968b4;
case 0x6968b8:c.instructions+=3;goto B6968b8;
case 0x6968b9:c.instructions+=2;goto B6968b9;
case 0x6968bb:c.instructions+=1;goto B6968bb;
case 0x6968bd:goto L6968bd;
case 0x6968c0:c.instructions+=3;goto B6968c0;
case 0x6968c3:c.instructions+=2;goto B6968c3;
case 0x6968c6:c.instructions+=1;goto B6968c6;
case 0x6968c8:goto L6968c8;
case 0x6968cb:c.instructions+=1;goto B6968cb;
case 0x6968d0:goto L6968d0;
case 0x6968d4:c.instructions+=4;goto B6968d4;
case 0x6968d7:c.instructions+=3;goto B6968d7;
case 0x6968d9:c.instructions+=2;goto B6968d9;
case 0x6968dc:c.instructions+=1;goto B6968dc;
case 0x6968de:goto L6968de;
case 0x6968e1:goto L6968e1;
case 0x6968e5:c.instructions+=2;goto B6968e5;
case 0x6968e9:c.instructions+=1;goto B6968e9;
case 0x6968eb:goto L6968eb;
case 0x6968ed:c.instructions+=3;goto B6968ed;
case 0x6968f0:c.instructions+=2;goto B6968f0;
case 0x6968f2:c.instructions+=1;goto B6968f2;
case 0x6968f8:goto L6968f8;
case 0x6968fb:goto L6968fb;
case 0x6968fd:c.instructions+=2;goto B6968fd;
case 0x6968ff:c.instructions+=1;goto B6968ff;
case 0x696901:goto L696901;
case 0x696904:c.instructions+=1;goto B696904;
case 0x696906:goto L696906;
case 0x696908:c.instructions+=1;goto B696908;
case 0x69690a:goto L69690a;
case 0x69690d:c.instructions+=3;goto B69690d;
case 0x696910:c.instructions+=2;goto B696910;
case 0x696913:c.instructions+=1;goto B696913;
case 0x696916:goto L696916;
case 0x696918:c.instructions+=5;goto B696918;
case 0x69691c:c.instructions+=4;goto B69691c;
case 0x69691f:c.instructions+=3;goto B69691f;
case 0x696920:c.instructions+=2;goto B696920;
case 0x696922:c.instructions+=1;goto B696922;
case 0x696924:goto L696924;
case 0x696925:c.instructions+=2;goto B696925;
case 0x696928:c.instructions+=1;goto B696928;
case 0x69692a:goto L69692a;
case 0x69692f:goto L69692f;
case 0x696932:c.instructions+=5;goto B696932;
case 0x696936:c.instructions+=4;goto B696936;
case 0x696939:c.instructions+=3;goto B696939;
case 0x69693b:c.instructions+=2;goto B69693b;
case 0x69693e:c.instructions+=1;goto B69693e;
case 0x696940:goto L696940;
case 0x696943:goto L696943;
case 0x696947:c.instructions+=2;goto B696947;
case 0x69694b:c.instructions+=1;goto B69694b;
case 0x696951:goto L696951;
case 0x696954:c.instructions+=5;goto B696954;
case 0x696957:c.instructions+=4;goto B696957;
case 0x69695b:c.instructions+=3;goto B69695b;
case 0x69695e:c.instructions+=2;goto B69695e;
case 0x69695f:c.instructions+=1;goto B69695f;
case 0x696961:goto L696961;
case 0x696962:c.instructions+=1;goto B696962;
case 0x696964:goto L696964;
case 0x696967:c.instructions+=8;goto B696967;
case 0x69696a:c.instructions+=7;goto B69696a;
case 0x69696f:c.instructions+=6;goto B69696f;
case 0x696972:c.instructions+=5;goto B696972;
case 0x696975:c.instructions+=4;goto B696975;
case 0x696977:c.instructions+=3;goto B696977;
case 0x69697a:c.instructions+=2;goto B69697a;
case 0x69697d:c.instructions+=1;goto B69697d;
case 0x69697f:goto L69697f;
case 0x696982:c.instructions+=2;goto B696982;
case 0x696984:c.instructions+=1;goto B696984;
case 0x696986:goto L696986;
case 0x696989:c.instructions+=8;goto B696989;
case 0x69698c:c.instructions+=7;goto B69698c;
case 0x69698f:c.instructions+=6;goto B69698f;
case 0x696992:c.instructions+=5;goto B696992;
case 0x696995:c.instructions+=4;goto B696995;
case 0x696997:c.instructions+=3;goto B696997;
case 0x69699a:c.instructions+=2;goto B69699a;
case 0x69699b:c.instructions+=1;goto B69699b;
case 0x69699d:goto L69699d;
case 0x6969a0:c.instructions+=1;goto B6969a0;
case 0x6969a2:goto L6969a2;
case 0x6969a4:c.instructions+=1;goto B6969a4;
case 0x6969a6:goto L6969a6;
case 0x6969a9:c.instructions+=2;goto B6969a9;
case 0x6969ab:c.instructions+=1;goto B6969ab;
case 0x6969ad:goto L6969ad;
case 0x6969b3:c.instructions+=5;goto B6969b3;
case 0x6969b6:c.instructions+=4;goto B6969b6;
case 0x6969b8:c.instructions+=3;goto B6969b8;
case 0x6969ba:c.instructions+=2;goto B6969ba;
case 0x6969bd:c.instructions+=1;goto B6969bd;
case 0x6969bf:goto L6969bf;
case 0x6969c1:c.instructions+=2;goto B6969c1;
case 0x6969c2:c.instructions+=1;goto B6969c2;
case 0x6969c4:goto L6969c4;
case 0x6969c6:goto L6969c6;
case 0x6969c8:c.instructions+=3;goto B6969c8;
case 0x6969cb:c.instructions+=2;goto B6969cb;
case 0x6969cc:c.instructions+=1;goto B6969cc;
case 0x6969ce:goto L6969ce;
case 0x6969d1:goto L6969d1;
case 0x6969d4:c.instructions+=3;goto B6969d4;
case 0x6969d8:c.instructions+=2;goto B6969d8;
case 0x6969db:c.instructions+=1;goto B6969db;
case 0x6969e1:goto L6969e1;
case 0x6969e5:c.instructions+=1;goto B6969e5;
case 0x6969e7:goto L6969e7;
case 0x6969eb:c.instructions+=2;goto B6969eb;
case 0x6969ef:c.instructions+=1;goto B6969ef;
case 0x6969f1:goto L6969f1;
case 0x6969f5:c.instructions+=1;goto B6969f5;
case 0x6969f9:goto L6969f9;
case 0x6969fc:c.instructions+=1;goto B6969fc;
case 0x696a02:goto L696a02;
case 0x696a06:c.instructions+=2;goto B696a06;
case 0x696a0d:c.instructions+=1;goto B696a0d;
case 0x696a0f:goto L696a0f;
case 0x696a16:goto L696a16;
case 0x696a1a:c.instructions+=4;goto B696a1a;
case 0x696a1d:c.instructions+=3;goto B696a1d;
case 0x696a20:c.instructions+=2;goto B696a20;
case 0x696a22:c.instructions+=1;goto B696a22;
case 0x696a28:goto L696a28;
case 0x696a2f:c.instructions+=13;goto B696a2f;
case 0x696a31:c.instructions+=12;goto B696a31;
case 0x696a34:c.instructions+=11;goto B696a34;
case 0x696a37:c.instructions+=10;goto B696a37;
case 0x696a39:c.instructions+=9;goto B696a39;
case 0x696a3c:c.instructions+=8;goto B696a3c;
case 0x696a3e:c.instructions+=7;goto B696a3e;
case 0x696a41:c.instructions+=6;goto B696a41;
case 0x696a44:c.instructions+=5;goto B696a44;
case 0x696a46:c.instructions+=4;goto B696a46;
case 0x696a4d:c.instructions+=3;goto B696a4d;
case 0x696a50:c.instructions+=2;goto B696a50;
case 0x696a53:c.instructions+=1;goto B696a53;
case 0x696a56:goto L696a56;
case 0x696a58:c.instructions+=9;goto B696a58;
case 0x696a5b:c.instructions+=8;goto B696a5b;
case 0x696a5e:c.instructions+=7;goto B696a5e;
case 0x696a60:c.instructions+=6;goto B696a60;
case 0x696a62:c.instructions+=5;goto B696a62;
case 0x696a65:c.instructions+=4;goto B696a65;
case 0x696a67:c.instructions+=3;goto B696a67;
case 0x696a69:c.instructions+=2;goto B696a69;
case 0x696a6c:c.instructions+=1;goto B696a6c;
case 0x696a6e:goto L696a6e;
case 0x696a71:goto L696a71;
case 0x696a74:c.instructions+=9;goto B696a74;
case 0x696a77:c.instructions+=8;goto B696a77;
case 0x696a7a:c.instructions+=7;goto B696a7a;
case 0x696a7e:c.instructions+=6;goto B696a7e;
case 0x696a81:c.instructions+=5;goto B696a81;
case 0x696a84:c.instructions+=4;goto B696a84;
case 0x696a87:c.instructions+=3;goto B696a87;
case 0x696a8a:c.instructions+=2;goto B696a8a;
case 0x696a8c:c.instructions+=1;goto B696a8c;
case 0x696a8e:goto L696a8e;
case 0x696a90:c.instructions+=1;goto B696a90;
case 0x696a92:goto L696a92;
case 0x696a95:c.instructions+=2;goto B696a95;
case 0x696a98:c.instructions+=1;goto B696a98;
case 0x696a9b:goto L696a9b;
case 0x696a9f:c.instructions+=6;goto B696a9f;
case 0x696aa2:c.instructions+=5;goto B696aa2;
case 0x696aa4:c.instructions+=4;goto B696aa4;
case 0x696aa7:c.instructions+=3;goto B696aa7;
case 0x696aaa:c.instructions+=2;goto B696aaa;
case 0x696aac:c.instructions+=1;goto B696aac;
case 0x696aae:goto L696aae;
case 0x696ab1:c.instructions+=1;goto B696ab1;
case 0x696ab3:goto L696ab3;
case 0x696ab6:goto L696ab6;
case 0x696ab9:goto L696ab9;
case 0x696abc:c.instructions+=5;goto B696abc;
case 0x696abf:c.instructions+=4;goto B696abf;
case 0x696ac3:c.instructions+=3;goto B696ac3;
case 0x696ac7:c.instructions+=2;goto B696ac7;
case 0x696ac9:c.instructions+=1;goto B696ac9;
case 0x696acb:goto L696acb;
case 0x696acd:goto L696acd;
case 0x696ace:c.instructions+=7;goto B696ace;
case 0x696ad2:c.instructions+=6;goto B696ad2;
case 0x696ad5:c.instructions+=5;goto B696ad5;
case 0x696ad6:c.instructions+=4;goto B696ad6;
case 0x696ad9:c.instructions+=3;goto B696ad9;
case 0x696ada:c.instructions+=2;goto B696ada;
case 0x696add:c.instructions+=1;goto B696add;
case 0x696ae0:goto L696ae0;
case 0x696ae2:c.instructions+=1;goto B696ae2;
case 0x696ae4:goto L696ae4;
case 0x696ae6:goto L696ae6;
case 0x696ae7:c.instructions+=4;goto B696ae7;
case 0x696ae8:c.instructions+=3;goto B696ae8;
case 0x696ae9:c.instructions+=2;goto B696ae9;
case 0x696aea:c.instructions+=1;goto B696aea;
case 0x696aed:goto L696aed;
case 0x696aef:c.instructions+=15;goto B696aef;
case 0x696af0:c.instructions+=14;goto B696af0;
case 0x696af2:c.instructions+=13;goto B696af2;
case 0x696af5:c.instructions+=12;goto B696af5;
case 0x696af8:c.instructions+=11;goto B696af8;
case 0x696af9:c.instructions+=10;goto B696af9;
case 0x696afc:c.instructions+=9;goto B696afc;
case 0x696afd:c.instructions+=8;goto B696afd;
case 0x696b00:c.instructions+=7;goto B696b00;
case 0x696b03:c.instructions+=6;goto B696b03;
case 0x696b06:c.instructions+=5;goto B696b06;
case 0x696b07:c.instructions+=4;goto B696b07;
case 0x696b0a:c.instructions+=3;goto B696b0a;
case 0x696b0d:c.instructions+=2;goto B696b0d;
case 0x696b10:c.instructions+=1;goto B696b10;
case 0x696b16:goto L696b16;
case 0x696b17:c.instructions+=1;goto B696b17;
case 0x696b1d:goto L696b1d;
case 0x696b1e:c.instructions+=1;goto B696b1e;
case 0x696b24:goto L696b24;
case 0x696b25:c.instructions+=1;goto B696b25;
case 0x696b2b:goto L696b2b;
case 0x696b2c:c.instructions+=2;goto B696b2c;
case 0x696b2d:c.instructions+=1;goto B696b2d;
case 0x696b2f:goto L696b2f;
case 0x696b34:c.instructions+=1;goto B696b34;
case 0x696b39:goto L696b39;
case 0x696b3c:c.instructions+=7;goto B696b3c;
case 0x696b3f:c.instructions+=6;goto B696b3f;
case 0x696b41:c.instructions+=5;goto B696b41;
case 0x696b44:c.instructions+=4;goto B696b44;
case 0x696b47:c.instructions+=3;goto B696b47;
case 0x696b4b:c.instructions+=2;goto B696b4b;
case 0x696b4e:c.instructions+=1;goto B696b4e;
case 0x696b50:goto L696b50;
case 0x696b53:goto L696b53;
case 0x696b57:c.instructions+=2;goto B696b57;
case 0x696b5b:c.instructions+=1;goto B696b5b;
case 0x696b61:goto L696b61;
case 0x696b63:c.instructions+=2;goto B696b63;
case 0x696b67:c.instructions+=1;goto B696b67;
case 0x696b69:goto L696b69;
case 0x696b6c:c.instructions+=8;goto B696b6c;
case 0x696b6f:c.instructions+=7;goto B696b6f;
case 0x696b72:c.instructions+=6;goto B696b72;
case 0x696b75:c.instructions+=5;goto B696b75;
case 0x696b78:c.instructions+=4;goto B696b78;
case 0x696b7b:c.instructions+=3;goto B696b7b;
case 0x696b7e:c.instructions+=2;goto B696b7e;
case 0x696b7f:c.instructions+=1;goto B696b7f;
case 0x696b84:goto L696b84;
case 0x696b86:c.instructions+=1;goto B696b86;
case 0x696b8c:goto L696b8c;
case 0x696b8f:c.instructions+=9;goto B696b8f;
case 0x696b92:c.instructions+=8;goto B696b92;
case 0x696b95:c.instructions+=7;goto B696b95;
case 0x696b98:c.instructions+=6;goto B696b98;
case 0x696b9b:c.instructions+=5;goto B696b9b;
case 0x696b9e:c.instructions+=4;goto B696b9e;
case 0x696ba2:c.instructions+=3;goto B696ba2;
case 0x696ba3:c.instructions+=2;goto B696ba3;
case 0x696ba5:c.instructions+=1;goto B696ba5;
case 0x696ba7:goto L696ba7;
case 0x696baa:c.instructions+=3;goto B696baa;
case 0x696bad:c.instructions+=2;goto B696bad;
case 0x696bb0:c.instructions+=1;goto B696bb0;
case 0x696bb2:goto L696bb2;
case 0x696bb7:goto L696bb7;
case 0x696bbb:c.instructions+=4;goto B696bbb;
case 0x696bbe:c.instructions+=3;goto B696bbe;
case 0x696bc0:c.instructions+=2;goto B696bc0;
case 0x696bc3:c.instructions+=1;goto B696bc3;
case 0x696bc5:goto L696bc5;
case 0x696bc8:goto L696bc8;
case 0x696bcc:c.instructions+=2;goto B696bcc;
case 0x696bd0:c.instructions+=1;goto B696bd0;
case 0x696bd6:goto L696bd6;
case 0x696bda:c.instructions+=1;goto B696bda;
case 0x696be0:goto L696be0;
case 0x696be4:c.instructions+=1;goto B696be4;
case 0x696be6:goto L696be6;
case 0x696be9:c.instructions+=5;goto B696be9;
case 0x696bec:c.instructions+=4;goto B696bec;
case 0x696bef:c.instructions+=3;goto B696bef;
case 0x696bf2:c.instructions+=2;goto B696bf2;
case 0x696bf4:c.instructions+=1;goto B696bf4;
case 0x696bf7:goto L696bf7;
case 0x696bfa:c.instructions+=35;goto B696bfa;
case 0x696bfd:c.instructions+=34;goto B696bfd;
case 0x696c00:c.instructions+=33;goto B696c00;
case 0x696c03:c.instructions+=32;goto B696c03;
case 0x696c05:c.instructions+=31;goto B696c05;
case 0x696c07:c.instructions+=30;goto B696c07;
case 0x696c0a:c.instructions+=29;goto B696c0a;
case 0x696c0d:c.instructions+=28;goto B696c0d;
case 0x696c10:c.instructions+=27;goto B696c10;
case 0x696c13:c.instructions+=26;goto B696c13;
case 0x696c16:c.instructions+=25;goto B696c16;
case 0x696c19:c.instructions+=24;goto B696c19;
case 0x696c1c:c.instructions+=23;goto B696c1c;
case 0x696c1f:c.instructions+=22;goto B696c1f;
case 0x696c22:c.instructions+=21;goto B696c22;
case 0x696c25:c.instructions+=20;goto B696c25;
case 0x696c28:c.instructions+=19;goto B696c28;
case 0x696c2b:c.instructions+=18;goto B696c2b;
case 0x696c2e:c.instructions+=17;goto B696c2e;
case 0x696c31:c.instructions+=16;goto B696c31;
case 0x696c34:c.instructions+=15;goto B696c34;
case 0x696c37:c.instructions+=14;goto B696c37;
case 0x696c3a:c.instructions+=13;goto B696c3a;
case 0x696c3d:c.instructions+=12;goto B696c3d;
case 0x696c40:c.instructions+=11;goto B696c40;
case 0x696c43:c.instructions+=10;goto B696c43;
case 0x696c46:c.instructions+=9;goto B696c46;
case 0x696c49:c.instructions+=8;goto B696c49;
case 0x696c4c:c.instructions+=7;goto B696c4c;
case 0x696c4f:c.instructions+=6;goto B696c4f;
case 0x696c52:c.instructions+=5;goto B696c52;
case 0x696c55:c.instructions+=4;goto B696c55;
case 0x696c58:c.instructions+=3;goto B696c58;
case 0x696c5b:c.instructions+=2;goto B696c5b;
case 0x696c5c:c.instructions+=1;goto B696c5c;
case 0x696c5e:goto L696c5e;
case 0x696c61:c.instructions+=2;goto B696c61;
case 0x696c64:c.instructions+=1;goto B696c64;
case 0x696c69:goto L696c69;
case 0x696c6b:c.instructions+=2;goto B696c6b;
case 0x696c6e:c.instructions+=1;goto B696c6e;
case 0x696c70:goto L696c70;
case 0x696c74:c.instructions+=2;goto B696c74;
case 0x696c79:c.instructions+=1;goto B696c79;
case 0x696c7b:goto L696c7b;
case 0x696c7e:goto L696c7e;
case 0x696c80:c.instructions+=2;goto B696c80;
case 0x696c82:c.instructions+=1;goto B696c82;
case 0x696c84:goto L696c84;
case 0x696c87:c.instructions+=1;goto B696c87;
case 0x696c89:goto L696c89;
case 0x696c8c:c.instructions+=2;goto B696c8c;
case 0x696c8f:c.instructions+=1;goto B696c8f;
case 0x696c91:goto L696c91;
case 0x696c94:c.instructions+=4;goto B696c94;
case 0x696c97:c.instructions+=3;goto B696c97;
case 0x696c9a:c.instructions+=2;goto B696c9a;
case 0x696c9d:c.instructions+=1;goto B696c9d;
case 0x696c9f:goto L696c9f;
case 0x696ca1:goto L696ca1;
case 0x696ca3:c.instructions+=6;goto B696ca3;
case 0x696ca7:c.instructions+=5;goto B696ca7;
case 0x696caa:c.instructions+=4;goto B696caa;
case 0x696cad:c.instructions+=3;goto B696cad;
case 0x696cae:c.instructions+=2;goto B696cae;
case 0x696cb0:c.instructions+=1;goto B696cb0;
case 0x696cb2:goto L696cb2;
case 0x696cb6:c.instructions+=3;goto B696cb6;
case 0x696cb9:c.instructions+=2;goto B696cb9;
case 0x696cbc:c.instructions+=1;goto B696cbc;
case 0x696cbe:goto L696cbe;
case 0x696cbf:c.instructions+=2;goto B696cbf;
case 0x696cc2:c.instructions+=1;goto B696cc2;
case 0x696cc4:goto L696cc4;
case 0x696cc6:goto L696cc6;
case 0x696cca:c.instructions+=4;goto B696cca;
case 0x696ccd:c.instructions+=3;goto B696ccd;
case 0x696ccf:c.instructions+=2;goto B696ccf;
case 0x696cd2:c.instructions+=1;goto B696cd2;
case 0x696cd4:goto L696cd4;
case 0x696cd7:goto L696cd7;
case 0x696cdb:c.instructions+=2;goto B696cdb;
case 0x696cdf:c.instructions+=1;goto B696cdf;
case 0x696ce1:goto L696ce1;
case 0x696ce5:c.instructions+=1;goto B696ce5;
case 0x696ceb:goto L696ceb;
case 0x696cef:c.instructions+=3;goto B696cef;
case 0x696cf3:c.instructions+=2;goto B696cf3;
case 0x696cf6:c.instructions+=1;goto B696cf6;
case 0x696cfc:goto L696cfc;
case 0x696cfe:c.instructions+=2;goto B696cfe;
case 0x696d01:c.instructions+=1;goto B696d01;
case 0x696d03:goto L696d03;
case 0x696d07:goto L696d07;
case 0x696d09:c.instructions+=2;goto B696d09;
case 0x696d0b:c.instructions+=1;goto B696d0b;
case 0x696d0d:goto L696d0d;
case 0x696d10:c.instructions+=1;goto B696d10;
case 0x696d12:goto L696d12;
case 0x696d15:c.instructions+=1;goto B696d15;
case 0x696d17:goto L696d17;
case 0x696d1a:c.instructions+=5;goto B696d1a;
case 0x696d1d:c.instructions+=4;goto B696d1d;
case 0x696d20:c.instructions+=3;goto B696d20;
case 0x696d23:c.instructions+=2;goto B696d23;
case 0x696d26:c.instructions+=1;goto B696d26;
case 0x696d28:goto L696d28;
case 0x696d2a:goto L696d2a;
case 0x696d2c:c.instructions+=5;goto B696d2c;
case 0x696d30:c.instructions+=4;goto B696d30;
case 0x696d33:c.instructions+=3;goto B696d33;
case 0x696d34:c.instructions+=2;goto B696d34;
case 0x696d36:c.instructions+=1;goto B696d36;
case 0x696d38:goto L696d38;
case 0x696d3c:c.instructions+=4;goto B696d3c;
case 0x696d3f:c.instructions+=3;goto B696d3f;
case 0x696d40:c.instructions+=2;goto B696d40;
case 0x696d42:c.instructions+=1;goto B696d42;
case 0x696d44:goto L696d44;
case 0x696d47:c.instructions+=3;goto B696d47;
case 0x696d4a:c.instructions+=2;goto B696d4a;
case 0x696d4d:c.instructions+=1;goto B696d4d;
case 0x696d4f:goto L696d4f;
case 0x696d54:goto L696d54;
case 0x696d57:c.instructions+=5;goto B696d57;
case 0x696d5b:c.instructions+=4;goto B696d5b;
case 0x696d5e:c.instructions+=3;goto B696d5e;
case 0x696d60:c.instructions+=2;goto B696d60;
case 0x696d63:c.instructions+=1;goto B696d63;
case 0x696d65:goto L696d65;
case 0x696d68:goto L696d68;
case 0x696d6c:c.instructions+=2;goto B696d6c;
case 0x696d70:c.instructions+=1;goto B696d70;
case 0x696d72:goto L696d72;
case 0x696d74:c.instructions+=3;goto B696d74;
case 0x696d76:c.instructions+=2;goto B696d76;
case 0x696d79:c.instructions+=1;goto B696d79;
case 0x696d7f:goto L696d7f;
case 0x696d82:goto L696d82;
case 0x696d84:c.instructions+=2;goto B696d84;
case 0x696d86:c.instructions+=1;goto B696d86;
case 0x696d88:goto L696d88;
case 0x696d8b:c.instructions+=1;goto B696d8b;
case 0x696d8d:goto L696d8d;
case 0x696d8f:c.instructions+=1;goto B696d8f;
case 0x696d91:goto L696d91;
case 0x696d93:c.instructions+=7;goto B696d93;
case 0x696d96:c.instructions+=6;goto B696d96;
case 0x696d98:c.instructions+=5;goto B696d98;
case 0x696d9b:c.instructions+=4;goto B696d9b;
case 0x696d9e:c.instructions+=3;goto B696d9e;
case 0x696da1:c.instructions+=2;goto B696da1;
case 0x696da4:c.instructions+=1;goto B696da4;
case 0x696da7:goto L696da7;
case 0x696da9:c.instructions+=5;goto B696da9;
case 0x696dad:c.instructions+=4;goto B696dad;
case 0x696db0:c.instructions+=3;goto B696db0;
case 0x696db1:c.instructions+=2;goto B696db1;
case 0x696db3:c.instructions+=1;goto B696db3;
case 0x696db5:goto L696db5;
case 0x696db6:c.instructions+=2;goto B696db6;
case 0x696db9:c.instructions+=1;goto B696db9;
case 0x696dbb:goto L696dbb;
case 0x696dc0:goto L696dc0;
case 0x696dc3:c.instructions+=5;goto B696dc3;
case 0x696dc7:c.instructions+=4;goto B696dc7;
case 0x696dca:c.instructions+=3;goto B696dca;
case 0x696dcc:c.instructions+=2;goto B696dcc;
case 0x696dcf:c.instructions+=1;goto B696dcf;
case 0x696dd1:goto L696dd1;
case 0x696dd4:goto L696dd4;
case 0x696dd8:c.instructions+=2;goto B696dd8;
case 0x696ddc:c.instructions+=1;goto B696ddc;
case 0x696de2:goto L696de2;
case 0x696de5:c.instructions+=5;goto B696de5;
case 0x696de8:c.instructions+=4;goto B696de8;
case 0x696dec:c.instructions+=3;goto B696dec;
case 0x696def:c.instructions+=2;goto B696def;
case 0x696df0:c.instructions+=1;goto B696df0;
case 0x696df2:goto L696df2;
case 0x696df3:c.instructions+=1;goto B696df3;
case 0x696df5:goto L696df5;
case 0x696df8:c.instructions+=8;goto B696df8;
case 0x696dfb:c.instructions+=7;goto B696dfb;
case 0x696e00:c.instructions+=6;goto B696e00;
case 0x696e03:c.instructions+=5;goto B696e03;
case 0x696e06:c.instructions+=4;goto B696e06;
case 0x696e08:c.instructions+=3;goto B696e08;
case 0x696e0b:c.instructions+=2;goto B696e0b;
case 0x696e0e:c.instructions+=1;goto B696e0e;
case 0x696e10:goto L696e10;
case 0x696e13:c.instructions+=2;goto B696e13;
case 0x696e15:c.instructions+=1;goto B696e15;
case 0x696e17:goto L696e17;
case 0x696e1a:c.instructions+=8;goto B696e1a;
case 0x696e1d:c.instructions+=7;goto B696e1d;
case 0x696e20:c.instructions+=6;goto B696e20;
case 0x696e23:c.instructions+=5;goto B696e23;
case 0x696e26:c.instructions+=4;goto B696e26;
case 0x696e28:c.instructions+=3;goto B696e28;
case 0x696e2b:c.instructions+=2;goto B696e2b;
case 0x696e2c:c.instructions+=1;goto B696e2c;
case 0x696e2e:goto L696e2e;
case 0x696e31:c.instructions+=1;goto B696e31;
case 0x696e33:goto L696e33;
case 0x696e35:c.instructions+=1;goto B696e35;
case 0x696e37:goto L696e37;
case 0x696e3a:c.instructions+=2;goto B696e3a;
case 0x696e3c:c.instructions+=1;goto B696e3c;
case 0x696e3e:goto L696e3e;
case 0x696e44:c.instructions+=5;goto B696e44;
case 0x696e47:c.instructions+=4;goto B696e47;
case 0x696e49:c.instructions+=3;goto B696e49;
case 0x696e4b:c.instructions+=2;goto B696e4b;
case 0x696e4e:c.instructions+=1;goto B696e4e;
case 0x696e50:goto L696e50;
case 0x696e52:c.instructions+=2;goto B696e52;
case 0x696e53:c.instructions+=1;goto B696e53;
case 0x696e55:goto L696e55;
case 0x696e57:goto L696e57;
case 0x696e59:c.instructions+=3;goto B696e59;
case 0x696e5c:c.instructions+=2;goto B696e5c;
case 0x696e5d:c.instructions+=1;goto B696e5d;
case 0x696e5f:goto L696e5f;
case 0x696e62:c.instructions+=1;goto B696e62;
case 0x696e65:goto L696e65;
case 0x696e68:c.instructions+=3;goto B696e68;
case 0x696e6c:c.instructions+=2;goto B696e6c;
case 0x696e6f:c.instructions+=1;goto B696e6f;
case 0x696e75:goto L696e75;
case 0x696e79:c.instructions+=1;goto B696e79;
case 0x696e7b:goto L696e7b;
case 0x696e7f:c.instructions+=2;goto B696e7f;
case 0x696e83:c.instructions+=1;goto B696e83;
case 0x696e85:goto L696e85;
case 0x696e89:c.instructions+=1;goto B696e89;
case 0x696e8d:goto L696e8d;
case 0x696e90:c.instructions+=1;goto B696e90;
case 0x696e96:goto L696e96;
case 0x696e9a:c.instructions+=2;goto B696e9a;
case 0x696ea1:c.instructions+=1;goto B696ea1;
case 0x696ea3:goto L696ea3;
case 0x696eaa:goto L696eaa;
case 0x696eae:c.instructions+=5;goto B696eae;
case 0x696eb1:c.instructions+=4;goto B696eb1;
case 0x696eb4:c.instructions+=3;goto B696eb4;
case 0x696eb6:c.instructions+=2;goto B696eb6;
case 0x696eb9:c.instructions+=1;goto B696eb9;
case 0x696ebf:goto L696ebf;
case 0x696ec2:c.instructions+=12;goto B696ec2;
case 0x696ec9:c.instructions+=11;goto B696ec9;
case 0x696ecc:c.instructions+=10;goto B696ecc;
case 0x696ece:c.instructions+=9;goto B696ece;
case 0x696ed1:c.instructions+=8;goto B696ed1;
case 0x696ed4:c.instructions+=7;goto B696ed4;
case 0x696ed7:c.instructions+=6;goto B696ed7;
case 0x696ed9:c.instructions+=5;goto B696ed9;
case 0x696edc:c.instructions+=4;goto B696edc;
case 0x696edf:c.instructions+=3;goto B696edf;
case 0x696ee2:c.instructions+=2;goto B696ee2;
case 0x696ee5:c.instructions+=1;goto B696ee5;
case 0x696ee8:goto L696ee8;
case 0x696eea:c.instructions+=9;goto B696eea;
case 0x696eed:c.instructions+=8;goto B696eed;
case 0x696ef0:c.instructions+=7;goto B696ef0;
case 0x696ef2:c.instructions+=6;goto B696ef2;
case 0x696ef5:c.instructions+=5;goto B696ef5;
case 0x696ef7:c.instructions+=4;goto B696ef7;
case 0x696ef9:c.instructions+=3;goto B696ef9;
case 0x696efb:c.instructions+=2;goto B696efb;
case 0x696efe:c.instructions+=1;goto B696efe;
case 0x696f00:goto L696f00;
case 0x696f03:goto L696f03;
case 0x696f06:c.instructions+=10;goto B696f06;
case 0x696f09:c.instructions+=9;goto B696f09;
case 0x696f0c:c.instructions+=8;goto B696f0c;
case 0x696f0f:c.instructions+=7;goto B696f0f;
case 0x696f12:c.instructions+=6;goto B696f12;
case 0x696f15:c.instructions+=5;goto B696f15;
case 0x696f18:c.instructions+=4;goto B696f18;
case 0x696f1b:c.instructions+=3;goto B696f1b;
case 0x696f1e:c.instructions+=2;goto B696f1e;
case 0x696f20:c.instructions+=1;goto B696f20;
case 0x696f22:goto L696f22;
case 0x696f24:c.instructions+=1;goto B696f24;
case 0x696f26:goto L696f26;
case 0x696f28:c.instructions+=2;goto B696f28;
case 0x696f2b:c.instructions+=1;goto B696f2b;
case 0x696f2e:goto L696f2e;
case 0x696f32:c.instructions+=6;goto B696f32;
case 0x696f35:c.instructions+=5;goto B696f35;
case 0x696f37:c.instructions+=4;goto B696f37;
case 0x696f3a:c.instructions+=3;goto B696f3a;
case 0x696f3d:c.instructions+=2;goto B696f3d;
case 0x696f3f:c.instructions+=1;goto B696f3f;
case 0x696f41:goto L696f41;
case 0x696f44:c.instructions+=1;goto B696f44;
case 0x696f46:goto L696f46;
case 0x696f49:c.instructions+=1;goto B696f49;
case 0x696f4c:goto L696f4c;
case 0x696f4f:c.instructions+=5;goto B696f4f;
case 0x696f52:c.instructions+=4;goto B696f52;
case 0x696f56:c.instructions+=3;goto B696f56;
case 0x696f5a:c.instructions+=2;goto B696f5a;
case 0x696f5c:c.instructions+=1;goto B696f5c;
case 0x696f5e:goto L696f5e;
case 0x696f60:goto L696f60;
case 0x696f61:c.instructions+=7;goto B696f61;
case 0x696f64:c.instructions+=6;goto B696f64;
case 0x696f68:c.instructions+=5;goto B696f68;
case 0x696f6b:c.instructions+=4;goto B696f6b;
case 0x696f6e:c.instructions+=3;goto B696f6e;
case 0x696f6f:c.instructions+=2;goto B696f6f;
case 0x696f72:c.instructions+=1;goto B696f72;
case 0x696f75:goto L696f75;
case 0x696f77:c.instructions+=1;goto B696f77;
case 0x696f79:goto L696f79;
case 0x696f7b:goto L696f7b;
case 0x696f7c:c.instructions+=4;goto B696f7c;
case 0x696f7d:c.instructions+=3;goto B696f7d;
case 0x696f7e:c.instructions+=2;goto B696f7e;
case 0x696f7f:c.instructions+=1;goto B696f7f;
case 0x696f82:goto L696f82;
case 0x696f84:c.instructions+=14;goto B696f84;
case 0x696f85:c.instructions+=13;goto B696f85;
case 0x696f87:c.instructions+=12;goto B696f87;
case 0x696f8a:c.instructions+=11;goto B696f8a;
case 0x696f8d:c.instructions+=10;goto B696f8d;
case 0x696f8e:c.instructions+=9;goto B696f8e;
case 0x696f91:c.instructions+=8;goto B696f91;
case 0x696f92:c.instructions+=7;goto B696f92;
case 0x696f95:c.instructions+=6;goto B696f95;
case 0x696f98:c.instructions+=5;goto B696f98;
case 0x696f9a:c.instructions+=4;goto B696f9a;
case 0x696f9c:c.instructions+=3;goto B696f9c;
case 0x696f9d:c.instructions+=2;goto B696f9d;
case 0x696fa0:c.instructions+=1;goto B696fa0;
case 0x696fa6:goto L696fa6;
case 0x696fa7:c.instructions+=1;goto B696fa7;
case 0x696fad:goto L696fad;
case 0x696fae:c.instructions+=1;goto B696fae;
case 0x696fb4:goto L696fb4;
case 0x696fb5:c.instructions+=1;goto B696fb5;
case 0x696fbb:goto L696fbb;
case 0x696fbc:c.instructions+=2;goto B696fbc;
case 0x696fbd:c.instructions+=1;goto B696fbd;
case 0x696fbf:goto L696fbf;
case 0x696fc4:c.instructions+=1;goto B696fc4;
case 0x696fc9:goto L696fc9;
case 0x696fcc:c.instructions+=8;goto B696fcc;
case 0x696fcf:c.instructions+=7;goto B696fcf;
case 0x696fd2:c.instructions+=6;goto B696fd2;
case 0x696fd4:c.instructions+=5;goto B696fd4;
case 0x696fd6:c.instructions+=4;goto B696fd6;
case 0x696fd9:c.instructions+=3;goto B696fd9;
case 0x696fdd:c.instructions+=2;goto B696fdd;
case 0x696fe0:c.instructions+=1;goto B696fe0;
case 0x696fe2:goto L696fe2;
case 0x696fe5:goto L696fe5;
case 0x696fe9:c.instructions+=5;goto B696fe9;
case 0x696feb:c.instructions+=4;goto B696feb;
case 0x696fed:c.instructions+=3;goto B696fed;
case 0x696ff0:c.instructions+=2;goto B696ff0;
case 0x696ff2:c.instructions+=1;goto B696ff2;
case 0x696ff4:goto L696ff4;
case 0x696ff6:c.instructions+=4;goto B696ff6;
case 0x696ff9:c.instructions+=3;goto B696ff9;
case 0x696ffb:c.instructions+=2;goto B696ffb;
case 0x696ffd:c.instructions+=1;goto B696ffd;
default:missing_instruction(c.pc);}
B696002:L696002:{c.instructions+=6;NFSU2_TR(0x696002);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B696006:{NFSU2_TR(0x696006);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B696009:{NFSU2_TR(0x696009);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B69600c:{NFSU2_TR(0x69600c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69600e:{NFSU2_TR(0x69600e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696011:{NFSU2_TR(0x696011);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6960a0;}}
}
B696017:L696017:{c.instructions+=13;NFSU2_TR(0x696017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69601a:{NFSU2_TR(0x69601a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B696021:{NFSU2_TR(0x696021);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B696024:{NFSU2_TR(0x696024);
__builtin_memmove((R+4),(R+8),4);
}
B696026:{NFSU2_TR(0x696026);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B696029:{NFSU2_TR(0x696029);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B69602c:{NFSU2_TR(0x69602c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B69602f:{NFSU2_TR(0x69602f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B696031:{NFSU2_TR(0x696031);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B696033:{NFSU2_TR(0x696033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696036:{NFSU2_TR(0x696036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696039:{NFSU2_TR(0x696039);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69603c:{NFSU2_TR(0x69603c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69603f:L69603f:{c.instructions+=10;NFSU2_TR(0x69603f);
__builtin_memmove((R+28),(R+24),4);
}
B696041:{NFSU2_TR(0x696041);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B696044:{NFSU2_TR(0x696044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B696047:{NFSU2_TR(0x696047);
__builtin_memmove((R+8),(R+12),4);
}
B696049:{NFSU2_TR(0x696049);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69604c:{NFSU2_TR(0x69604c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B69604e:{NFSU2_TR(0x69604e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B696050:{NFSU2_TR(0x696050);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696052:{NFSU2_TR(0x696052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696055:{NFSU2_TR(0x696055);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696079;}}
}
B696057:L696057:{c.instructions+=1;NFSU2_TR(0x696057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69605a:L69605a:{c.instructions+=11;NFSU2_TR(0x69605a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69605d:{NFSU2_TR(0x69605d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696060:{NFSU2_TR(0x696060);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B696063:{NFSU2_TR(0x696063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696066:{NFSU2_TR(0x696066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696069:{NFSU2_TR(0x696069);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B69606c:{NFSU2_TR(0x69606c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69606f:{NFSU2_TR(0x69606f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B696072:{NFSU2_TR(0x696072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696075:{NFSU2_TR(0x696075);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B696077:{NFSU2_TR(0x696077);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69605au);}goto L69605a;}}
}
B696079:L696079:{c.instructions+=2;NFSU2_TR(0x696079);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69607b:{NFSU2_TR(0x69607b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696098;}}
}
B69607d:L69607d:{c.instructions+=3;NFSU2_TR(0x69607d);
__builtin_memmove((R+8),(R+0),4);
}
B69607f:{NFSU2_TR(0x69607f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696082:{NFSU2_TR(0x696082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696085:L696085:{c.instructions+=7;NFSU2_TR(0x696085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696089:{NFSU2_TR(0x696089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69608c:{NFSU2_TR(0x69608c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69608e:{NFSU2_TR(0x69608e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B696091:{NFSU2_TR(0x696091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696094:{NFSU2_TR(0x696094);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B696096:{NFSU2_TR(0x696096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696085u);}goto L696085;}}
}
B696098:L696098:{c.instructions+=2;NFSU2_TR(0x696098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69609b:{NFSU2_TR(0x69609b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69603fu);}goto L69603f;}}
}
B69609d:L69609d:{c.instructions+=1;NFSU2_TR(0x69609d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6960a0:L6960a0:{c.instructions+=7;NFSU2_TR(0x6960a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6960a3:{NFSU2_TR(0x6960a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6960a6:{NFSU2_TR(0x6960a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6960a9:{NFSU2_TR(0x6960a9);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6960ad:{NFSU2_TR(0x6960ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6960b1:{NFSU2_TR(0x6960b1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6960b3:{NFSU2_TR(0x6960b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6960b7;}}
}
B6960b5:L6960b5:{c.instructions+=1;NFSU2_TR(0x6960b5);
__builtin_memmove((R+0),(R+4),4);
}
B6960b7:L6960b7:{c.instructions+=8;NFSU2_TR(0x6960b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6960b8:{NFSU2_TR(0x6960b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6960bb:{NFSU2_TR(0x6960bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6960bf:{NFSU2_TR(0x6960bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6960c2:{NFSU2_TR(0x6960c2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6960c5:{NFSU2_TR(0x6960c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6960c6:{NFSU2_TR(0x6960c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6960c9:{NFSU2_TR(0x6960c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6960ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6960cc:L6960cc:{c.instructions+=2;NFSU2_TR(0x6960cc);
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
B6960ce:{NFSU2_TR(0x6960ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6960d2;}}
}
B6960d0:L6960d0:{c.instructions+=1;NFSU2_TR(0x6960d0);
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
B6960d2:L6960d2:{c.instructions+=5;NFSU2_TR(0x6960d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6960d3:{NFSU2_TR(0x6960d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6960d4:{NFSU2_TR(0x6960d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6960d5:{NFSU2_TR(0x6960d5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6960d6:{NFSU2_TR(0x6960d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6960d9:L6960d9:{c.instructions+=16;NFSU2_TR(0x6960d9);
__builtin_memmove((R+28),(R+28),4);
}
B6960db:{NFSU2_TR(0x6960db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6960dc:{NFSU2_TR(0x6960dc);
__builtin_memmove((R+20),(R+16),4);
}
B6960de:{NFSU2_TR(0x6960de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6960e1:{NFSU2_TR(0x6960e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6960e4:{NFSU2_TR(0x6960e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6960e5:{NFSU2_TR(0x6960e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6960e6:{NFSU2_TR(0x6960e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6960e7:{NFSU2_TR(0x6960e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6960ea:{NFSU2_TR(0x6960ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6960ed:{NFSU2_TR(0x6960ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6960f0:{NFSU2_TR(0x6960f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6960f3:{NFSU2_TR(0x6960f3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6960f6:{NFSU2_TR(0x6960f6);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6960f9:{NFSU2_TR(0x6960f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6960fc:{NFSU2_TR(0x6960fc);
if(r1(R+518)){{goto L69624f;}}
}
B696102:L696102:{c.instructions+=2;NFSU2_TR(0x696102);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696103:{NFSU2_TR(0x696103);
if(r1(R+518)){{goto L696238;}}
}
B696109:L696109:{c.instructions+=2;NFSU2_TR(0x696109);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69610a:{NFSU2_TR(0x69610a);
if(r1(R+518)){{goto L69622b;}}
}
B696110:L696110:{c.instructions+=2;NFSU2_TR(0x696110);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696111:{NFSU2_TR(0x696111);
if(r1(R+518)){{goto L6961a6;}}
}
B696117:L696117:{c.instructions+=3;NFSU2_TR(0x696117);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B696118:{NFSU2_TR(0x696118);
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
B696119:{NFSU2_TR(0x696119);
if(r1(R+518)){{goto L696125;}}
}
B69611b:L69611b:{c.instructions+=2;NFSU2_TR(0x69611b);
w4(R+0,u32(0x80004001ull));
}
B696120:{NFSU2_TR(0x696120);
{goto L6963c8;}
}
B696125:L696125:{c.instructions+=7;NFSU2_TR(0x696125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696128:{NFSU2_TR(0x696128);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69612a:{NFSU2_TR(0x69612a);
u8 U[64];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69612a);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69612a);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B69612d:{NFSU2_TR(0x69612d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696130:{NFSU2_TR(0x696130);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696134:{NFSU2_TR(0x696134);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696137:{NFSU2_TR(0x696137);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69613c;}}
}
B696139:L696139:{c.instructions+=1;NFSU2_TR(0x696139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69613c:L69613c:{c.instructions+=3;NFSU2_TR(0x69613c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696140:{NFSU2_TR(0x696140);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696144:{NFSU2_TR(0x696144);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6963c6;}}
}
B69614a:L69614a:{c.instructions+=3;NFSU2_TR(0x69614a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69614e:{NFSU2_TR(0x69614e);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B696153:{NFSU2_TR(0x696153);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696196;}}
}
B696155:L696155:{c.instructions+=9;NFSU2_TR(0x696155);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696158:{NFSU2_TR(0x696158);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69615b:{NFSU2_TR(0x69615b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69615e:{NFSU2_TR(0x69615e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B696161:{NFSU2_TR(0x696161);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696164:{NFSU2_TR(0x696164);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696167:{NFSU2_TR(0x696167);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69616a:{NFSU2_TR(0x69616a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69616b:{NFSU2_TR(0x69616b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x696170ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6960d9u);}goto L6960d9;}
}
B696170:L696170:{c.instructions+=2;NFSU2_TR(0x696170);
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
B696172:{NFSU2_TR(0x696172);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6963c8;}}
}
B696178:L696178:{c.instructions+=10;NFSU2_TR(0x696178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69617b:{NFSU2_TR(0x69617b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69617e:{NFSU2_TR(0x69617e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696181:{NFSU2_TR(0x696181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696184:{NFSU2_TR(0x696184);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696187:{NFSU2_TR(0x696187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69618a:{NFSU2_TR(0x69618a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69618e:{NFSU2_TR(0x69618e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696191:{NFSU2_TR(0x696191);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B696194:{NFSU2_TR(0x696194);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696155u);}goto L696155;}}
}
B696196:L696196:{c.instructions+=4;NFSU2_TR(0x696196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696199:{NFSU2_TR(0x696199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69619c:{NFSU2_TR(0x69619c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69619f:{NFSU2_TR(0x69619f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69614au);}goto L69614a;}}
}
B6961a1:L6961a1:{c.instructions+=1;NFSU2_TR(0x6961a1);
{goto L6963c6;}
}
B6961a6:L6961a6:{c.instructions+=11;NFSU2_TR(0x6961a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6961aa:{NFSU2_TR(0x6961aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6961ae:{NFSU2_TR(0x6961ae);
__builtin_memmove((R+12),(R+4),4);
}
B6961b0:{NFSU2_TR(0x6961b0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6961b3:{NFSU2_TR(0x6961b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6961b6:{NFSU2_TR(0x6961b6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6961b8:{NFSU2_TR(0x6961b8);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6961b8);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6961b8);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6961ba:{NFSU2_TR(0x6961ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6961bd:{NFSU2_TR(0x6961bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6961c1:{NFSU2_TR(0x6961c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6961c4:{NFSU2_TR(0x6961c4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6961c9;}}
}
B6961c6:L6961c6:{c.instructions+=1;NFSU2_TR(0x6961c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6961c9:L6961c9:{c.instructions+=4;NFSU2_TR(0x6961c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6961cd:{NFSU2_TR(0x6961cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6961d1:{NFSU2_TR(0x6961d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6961d4:{NFSU2_TR(0x6961d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696223;}}
}
B6961d6:L6961d6:{c.instructions+=4;NFSU2_TR(0x6961d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6961da:{NFSU2_TR(0x6961da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6961de:{NFSU2_TR(0x6961de);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6961e0:{NFSU2_TR(0x6961e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696218;}}
}
B6961e2:L6961e2:{c.instructions+=3;NFSU2_TR(0x6961e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6961e4:{NFSU2_TR(0x6961e4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6961e6:{NFSU2_TR(0x6961e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69620c;}}
}
B6961e8:L6961e8:{c.instructions+=13;NFSU2_TR(0x6961e8);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6961ec:{NFSU2_TR(0x6961ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6961f0:{NFSU2_TR(0x6961f0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6961f2:{NFSU2_TR(0x6961f2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6961f5:{NFSU2_TR(0x6961f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6961f8:{NFSU2_TR(0x6961f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6961fb:{NFSU2_TR(0x6961fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6961fe:{NFSU2_TR(0x6961fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B696200:{NFSU2_TR(0x696200);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B696204:{NFSU2_TR(0x696204);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B696207:{NFSU2_TR(0x696207);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B696208:{NFSU2_TR(0x696208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69620a:{NFSU2_TR(0x69620a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6961e8u);}goto L6961e8;}}
}
B69620c:L69620c:{c.instructions+=4;NFSU2_TR(0x69620c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696210:{NFSU2_TR(0x696210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696213:{NFSU2_TR(0x696213);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B696216:{NFSU2_TR(0x696216);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6961e2u);}goto L6961e2;}}
}
B696218:L696218:{c.instructions+=4;NFSU2_TR(0x696218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69621b:{NFSU2_TR(0x69621b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69621e:{NFSU2_TR(0x69621e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B696221:{NFSU2_TR(0x696221);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6961d6u);}goto L6961d6;}}
}
B696223:L696223:{c.instructions+=3;NFSU2_TR(0x696223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696226:{NFSU2_TR(0x696226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696229:{NFSU2_TR(0x696229);
{goto L696260;}
}
B69622b:L69622b:{c.instructions+=4;NFSU2_TR(0x69622b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B69622f:{NFSU2_TR(0x69622f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696233:{NFSU2_TR(0x696233);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B696236:{NFSU2_TR(0x696236);
{goto L69623c;}
}
B696238:L696238:{c.instructions+=1;NFSU2_TR(0x696238);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B69623c:L69623c:{c.instructions+=7;NFSU2_TR(0x69623c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69623f:{NFSU2_TR(0x69623f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696241:{NFSU2_TR(0x696241);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696241);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696241);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B696243:{NFSU2_TR(0x696243);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696246:{NFSU2_TR(0x696246);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69624a:{NFSU2_TR(0x69624a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69624d:{NFSU2_TR(0x69624d);
{goto L69625b;}
}
B69624f:L69624f:{c.instructions+=4;NFSU2_TR(0x69624f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696253:{NFSU2_TR(0x696253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696256:{NFSU2_TR(0x696256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696259:{NFSU2_TR(0x696259);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69625b:L69625b:{c.instructions+=1;NFSU2_TR(0x69625b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696260;}}
}
B69625d:L69625d:{c.instructions+=1;NFSU2_TR(0x69625d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696260:L696260:{c.instructions+=3;NFSU2_TR(0x696260);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B696264:{NFSU2_TR(0x696264);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x2ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B696268:{NFSU2_TR(0x696268);
if(r1(R+518)){{goto L6962b6;}}
}
B69626a:L69626a:{c.instructions+=5;NFSU2_TR(0x69626a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69626d:{NFSU2_TR(0x69626d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B696271:{NFSU2_TR(0x696271);
w4(R+4,u32(r2(R+4)));
}
B696274:{NFSU2_TR(0x696274);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B696275:{NFSU2_TR(0x696275);
if(r1(R+518)){{goto L696295;}}
}
B696277:L696277:{c.instructions+=2;NFSU2_TR(0x696277);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B696278:{NFSU2_TR(0x696278);
if(r1(R+518)){{goto L6962b0;}}
}
B69627a:L69627a:{c.instructions+=2;NFSU2_TR(0x69627a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B69627b:{NFSU2_TR(0x69627b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6962b0;}}
}
B69627d:L69627d:{c.instructions+=2;NFSU2_TR(0x69627d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69627f:{NFSU2_TR(0x69627f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6962b0;}}
}
B696281:L696281:{c.instructions+=3;NFSU2_TR(0x696281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696284:{NFSU2_TR(0x696284);
__builtin_memmove((R+4),(R+12),4);
}
B696286:{NFSU2_TR(0x696286);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B696288:L696288:{c.instructions+=5;NFSU2_TR(0x696288);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B69628b:{NFSU2_TR(0x69628b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69628d:{NFSU2_TR(0x69628d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B696290:{NFSU2_TR(0x696290);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696291:{NFSU2_TR(0x696291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696288u);}goto L696288;}}
}
B696293:L696293:{c.instructions+=1;NFSU2_TR(0x696293);
{goto L6962b0;}
}
B696295:L696295:{c.instructions+=2;NFSU2_TR(0x696295);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696297:{NFSU2_TR(0x696297);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6962b0;}}
}
B696299:L696299:{c.instructions+=3;NFSU2_TR(0x696299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69629c:{NFSU2_TR(0x69629c);
__builtin_memmove((R+4),(R+12),4);
}
B69629e:{NFSU2_TR(0x69629e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B6962a0:L6962a0:{c.instructions+=7;NFSU2_TR(0x6962a0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6962a2:{NFSU2_TR(0x6962a2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6962a5:{NFSU2_TR(0x6962a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B6962a8:{NFSU2_TR(0x6962a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6962aa:{NFSU2_TR(0x6962aa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6962ad:{NFSU2_TR(0x6962ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6962ae:{NFSU2_TR(0x6962ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6962a0u);}goto L6962a0;}}
}
B6962b0:L6962b0:{c.instructions+=2;NFSU2_TR(0x6962b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6962b3:{NFSU2_TR(0x6962b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6962b6:L6962b6:{c.instructions+=3;NFSU2_TR(0x6962b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6962ba:{NFSU2_TR(0x6962ba);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6962bd:{NFSU2_TR(0x6962bd);
if(r1(R+518)){{goto L69639c;}}
}
B6962c3:L6962c3:{c.instructions+=2;NFSU2_TR(0x6962c3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6962c7:{NFSU2_TR(0x6962c7);
if(r1(R+518)){{goto L6962d3;}}
}
B6962c9:L6962c9:{c.instructions+=3;NFSU2_TR(0x6962c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6962cd:{NFSU2_TR(0x6962cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6962d1:{NFSU2_TR(0x6962d1);
{goto L6962db;}
}
B6962d3:L6962d3:{c.instructions+=2;NFSU2_TR(0x6962d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6962d7:{NFSU2_TR(0x6962d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6962db:L6962db:{c.instructions+=2;NFSU2_TR(0x6962db);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6962de:{NFSU2_TR(0x6962de);
if(r1(R+518)){{goto L69639c;}}
}
B6962e4:L6962e4:{c.instructions+=3;NFSU2_TR(0x6962e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6962e8:{NFSU2_TR(0x6962e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6962ef:{NFSU2_TR(0x6962ef);
if(r1(R+518)){{goto L6962f8;}}
}
B6962f1:L6962f1:{c.instructions+=1;NFSU2_TR(0x6962f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6962f8:L6962f8:{c.instructions+=6;NFSU2_TR(0x6962f8);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6962fc:{NFSU2_TR(0x6962fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6962ff:{NFSU2_TR(0x6962ff);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B696302:{NFSU2_TR(0x696302);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696304:{NFSU2_TR(0x696304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696307:{NFSU2_TR(0x696307);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696396;}}
}
B69630d:L69630d:{c.instructions+=13;NFSU2_TR(0x69630d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696310:{NFSU2_TR(0x696310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B696317:{NFSU2_TR(0x696317);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B69631a:{NFSU2_TR(0x69631a);
__builtin_memmove((R+4),(R+8),4);
}
B69631c:{NFSU2_TR(0x69631c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B69631f:{NFSU2_TR(0x69631f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B696322:{NFSU2_TR(0x696322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B696325:{NFSU2_TR(0x696325);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B696327:{NFSU2_TR(0x696327);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B696329:{NFSU2_TR(0x696329);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69632c:{NFSU2_TR(0x69632c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69632f:{NFSU2_TR(0x69632f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696332:{NFSU2_TR(0x696332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696335:L696335:{c.instructions+=10;NFSU2_TR(0x696335);
__builtin_memmove((R+28),(R+24),4);
}
B696337:{NFSU2_TR(0x696337);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69633a:{NFSU2_TR(0x69633a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B69633d:{NFSU2_TR(0x69633d);
__builtin_memmove((R+8),(R+12),4);
}
B69633f:{NFSU2_TR(0x69633f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B696342:{NFSU2_TR(0x696342);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B696344:{NFSU2_TR(0x696344);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B696346:{NFSU2_TR(0x696346);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696348:{NFSU2_TR(0x696348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69634b:{NFSU2_TR(0x69634b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69636f;}}
}
B69634d:L69634d:{c.instructions+=1;NFSU2_TR(0x69634d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696350:L696350:{c.instructions+=11;NFSU2_TR(0x696350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696353:{NFSU2_TR(0x696353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696356:{NFSU2_TR(0x696356);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B696359:{NFSU2_TR(0x696359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69635c:{NFSU2_TR(0x69635c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69635f:{NFSU2_TR(0x69635f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B696362:{NFSU2_TR(0x696362);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696365:{NFSU2_TR(0x696365);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B696368:{NFSU2_TR(0x696368);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69636b:{NFSU2_TR(0x69636b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69636d:{NFSU2_TR(0x69636d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696350u);}goto L696350;}}
}
B69636f:L69636f:{c.instructions+=2;NFSU2_TR(0x69636f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696371:{NFSU2_TR(0x696371);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69638e;}}
}
B696373:L696373:{c.instructions+=3;NFSU2_TR(0x696373);
__builtin_memmove((R+8),(R+0),4);
}
B696375:{NFSU2_TR(0x696375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696378:{NFSU2_TR(0x696378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69637b:L69637b:{c.instructions+=7;NFSU2_TR(0x69637b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69637f:{NFSU2_TR(0x69637f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696382:{NFSU2_TR(0x696382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B696384:{NFSU2_TR(0x696384);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B696387:{NFSU2_TR(0x696387);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69638a:{NFSU2_TR(0x69638a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69638c:{NFSU2_TR(0x69638c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69637bu);}goto L69637b;}}
}
B69638e:L69638e:{c.instructions+=2;NFSU2_TR(0x69638e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696391:{NFSU2_TR(0x696391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696335u);}goto L696335;}}
}
B696393:L696393:{c.instructions+=1;NFSU2_TR(0x696393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696396:L696396:{c.instructions+=2;NFSU2_TR(0x696396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696399:{NFSU2_TR(0x696399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69639c:L69639c:{c.instructions+=5;NFSU2_TR(0x69639c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69639f:{NFSU2_TR(0x69639f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6963a3:{NFSU2_TR(0x6963a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6963a7:{NFSU2_TR(0x6963a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6963a9:{NFSU2_TR(0x6963a9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6963ad;}}
}
B6963ab:L6963ab:{c.instructions+=1;NFSU2_TR(0x6963ab);
__builtin_memmove((R+0),(R+4),4);
}
B6963ad:L6963ad:{c.instructions+=8;NFSU2_TR(0x6963ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6963ae:{NFSU2_TR(0x6963ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6963b1:{NFSU2_TR(0x6963b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6963b5:{NFSU2_TR(0x6963b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6963b8:{NFSU2_TR(0x6963b8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6963bb:{NFSU2_TR(0x6963bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6963bc:{NFSU2_TR(0x6963bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6963bf:{NFSU2_TR(0x6963bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6963c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6963c2:L6963c2:{c.instructions+=2;NFSU2_TR(0x6963c2);
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
B6963c4:{NFSU2_TR(0x6963c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6963c8;}}
}
B6963c6:L6963c6:{c.instructions+=1;NFSU2_TR(0x6963c6);
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
B6963c8:L6963c8:{c.instructions+=5;NFSU2_TR(0x6963c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6963c9:{NFSU2_TR(0x6963c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6963ca:{NFSU2_TR(0x6963ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6963cb:{NFSU2_TR(0x6963cb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6963cc:{NFSU2_TR(0x6963cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6963cf:L6963cf:{c.instructions+=17;NFSU2_TR(0x6963cf);
__builtin_memmove((R+28),(R+28),4);
}
B6963d1:{NFSU2_TR(0x6963d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6963d2:{NFSU2_TR(0x6963d2);
__builtin_memmove((R+20),(R+16),4);
}
B6963d4:{NFSU2_TR(0x6963d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6963d7:{NFSU2_TR(0x6963d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6963d8:{NFSU2_TR(0x6963d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6963db:{NFSU2_TR(0x6963db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6963de:{NFSU2_TR(0x6963de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6963e1:{NFSU2_TR(0x6963e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6963e4:{NFSU2_TR(0x6963e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6963e5:{NFSU2_TR(0x6963e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6963e8:{NFSU2_TR(0x6963e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6963eb:{NFSU2_TR(0x6963eb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6963ee:{NFSU2_TR(0x6963ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6963f0:{NFSU2_TR(0x6963f0);
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6963f2:{NFSU2_TR(0x6963f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6963f3:{NFSU2_TR(0x6963f3);
if(r1(R+518)){{goto L696546;}}
}
B6963f9:L6963f9:{c.instructions+=2;NFSU2_TR(0x6963f9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6963fa:{NFSU2_TR(0x6963fa);
if(r1(R+518)){{goto L69652f;}}
}
B696400:L696400:{c.instructions+=2;NFSU2_TR(0x696400);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696401:{NFSU2_TR(0x696401);
if(r1(R+518)){{goto L696522;}}
}
B696407:L696407:{c.instructions+=2;NFSU2_TR(0x696407);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696408:{NFSU2_TR(0x696408);
if(r1(R+518)){{goto L69649d;}}
}
B69640e:L69640e:{c.instructions+=3;NFSU2_TR(0x69640e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B69640f:{NFSU2_TR(0x69640f);
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
B696410:{NFSU2_TR(0x696410);
if(r1(R+518)){{goto L69641c;}}
}
B696412:L696412:{c.instructions+=2;NFSU2_TR(0x696412);
w4(R+0,u32(0x80004001ull));
}
B696417:{NFSU2_TR(0x696417);
{goto L6966f9;}
}
B69641c:L69641c:{c.instructions+=7;NFSU2_TR(0x69641c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69641f:{NFSU2_TR(0x69641f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696421:{NFSU2_TR(0x696421);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696421);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696421);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B696424:{NFSU2_TR(0x696424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696427:{NFSU2_TR(0x696427);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69642b:{NFSU2_TR(0x69642b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69642e:{NFSU2_TR(0x69642e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696433;}}
}
B696430:L696430:{c.instructions+=1;NFSU2_TR(0x696430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696433:L696433:{c.instructions+=3;NFSU2_TR(0x696433);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696436:{NFSU2_TR(0x696436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696439:{NFSU2_TR(0x696439);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6966f7;}}
}
B69643f:L69643f:{c.instructions+=1;NFSU2_TR(0x69643f);
{goto L696443;}
}
B696441:L696441:{c.instructions+=1;NFSU2_TR(0x696441);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B696443:L696443:{c.instructions+=3;NFSU2_TR(0x696443);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B696447:{NFSU2_TR(0x696447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69644a:{NFSU2_TR(0x69644a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69648d;}}
}
B69644c:L69644c:{c.instructions+=9;NFSU2_TR(0x69644c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69644f:{NFSU2_TR(0x69644f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696452:{NFSU2_TR(0x696452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696455:{NFSU2_TR(0x696455);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B696458:{NFSU2_TR(0x696458);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69645b:{NFSU2_TR(0x69645b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69645e:{NFSU2_TR(0x69645e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696461:{NFSU2_TR(0x696461);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696462:{NFSU2_TR(0x696462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x696467ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6963cfu);}goto L6963cf;}
}
B696467:L696467:{c.instructions+=2;NFSU2_TR(0x696467);
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
B696469:{NFSU2_TR(0x696469);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6966f9;}}
}
B69646f:L69646f:{c.instructions+=10;NFSU2_TR(0x69646f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696472:{NFSU2_TR(0x696472);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696475:{NFSU2_TR(0x696475);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696478:{NFSU2_TR(0x696478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69647b:{NFSU2_TR(0x69647b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69647e:{NFSU2_TR(0x69647e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B696481:{NFSU2_TR(0x696481);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696485:{NFSU2_TR(0x696485);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696488:{NFSU2_TR(0x696488);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69648b:{NFSU2_TR(0x69648b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69644cu);}goto L69644c;}}
}
B69648d:L69648d:{c.instructions+=4;NFSU2_TR(0x69648d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696490:{NFSU2_TR(0x696490);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696493:{NFSU2_TR(0x696493);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B696496:{NFSU2_TR(0x696496);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696441u);}goto L696441;}}
}
B696498:L696498:{c.instructions+=1;NFSU2_TR(0x696498);
{goto L6966f7;}
}
B69649d:L69649d:{c.instructions+=11;NFSU2_TR(0x69649d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6964a1:{NFSU2_TR(0x6964a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6964a5:{NFSU2_TR(0x6964a5);
__builtin_memmove((R+28),(R+4),4);
}
B6964a7:{NFSU2_TR(0x6964a7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6964aa:{NFSU2_TR(0x6964aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6964ad:{NFSU2_TR(0x6964ad);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6964af:{NFSU2_TR(0x6964af);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6964af);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6964af);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6964b1:{NFSU2_TR(0x6964b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6964b4:{NFSU2_TR(0x6964b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6964b8:{NFSU2_TR(0x6964b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6964bb:{NFSU2_TR(0x6964bb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6964c0;}}
}
B6964bd:L6964bd:{c.instructions+=1;NFSU2_TR(0x6964bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6964c0:L6964c0:{c.instructions+=4;NFSU2_TR(0x6964c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6964c4:{NFSU2_TR(0x6964c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6964c8:{NFSU2_TR(0x6964c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6964cb:{NFSU2_TR(0x6964cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69651a;}}
}
B6964cd:L6964cd:{c.instructions+=4;NFSU2_TR(0x6964cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6964d1:{NFSU2_TR(0x6964d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6964d5:{NFSU2_TR(0x6964d5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6964d7:{NFSU2_TR(0x6964d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69650f;}}
}
B6964d9:L6964d9:{c.instructions+=3;NFSU2_TR(0x6964d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6964db:{NFSU2_TR(0x6964db);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6964dd:{NFSU2_TR(0x6964dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696503;}}
}
B6964df:L6964df:{c.instructions+=13;NFSU2_TR(0x6964df);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6964e3:{NFSU2_TR(0x6964e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6964e7:{NFSU2_TR(0x6964e7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6964e9:{NFSU2_TR(0x6964e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6964ec:{NFSU2_TR(0x6964ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6964ef:{NFSU2_TR(0x6964ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6964f2:{NFSU2_TR(0x6964f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6964f5:{NFSU2_TR(0x6964f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6964f7:{NFSU2_TR(0x6964f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6964fb:{NFSU2_TR(0x6964fb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6964fe:{NFSU2_TR(0x6964fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6964ff:{NFSU2_TR(0x6964ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B696501:{NFSU2_TR(0x696501);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6964dfu);}goto L6964df;}}
}
B696503:L696503:{c.instructions+=4;NFSU2_TR(0x696503);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696507:{NFSU2_TR(0x696507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69650a:{NFSU2_TR(0x69650a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69650d:{NFSU2_TR(0x69650d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6964d9u);}goto L6964d9;}}
}
B69650f:L69650f:{c.instructions+=4;NFSU2_TR(0x69650f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696512:{NFSU2_TR(0x696512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696515:{NFSU2_TR(0x696515);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B696518:{NFSU2_TR(0x696518);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6964cdu);}goto L6964cd;}}
}
B69651a:L69651a:{c.instructions+=3;NFSU2_TR(0x69651a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69651d:{NFSU2_TR(0x69651d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696520:{NFSU2_TR(0x696520);
{goto L696557;}
}
B696522:L696522:{c.instructions+=4;NFSU2_TR(0x696522);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B696526:{NFSU2_TR(0x696526);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69652a:{NFSU2_TR(0x69652a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B69652d:{NFSU2_TR(0x69652d);
{goto L696533;}
}
B69652f:L69652f:{c.instructions+=1;NFSU2_TR(0x69652f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B696533:L696533:{c.instructions+=7;NFSU2_TR(0x696533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696536:{NFSU2_TR(0x696536);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696538:{NFSU2_TR(0x696538);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696538);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696538);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69653a:{NFSU2_TR(0x69653a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69653d:{NFSU2_TR(0x69653d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696541:{NFSU2_TR(0x696541);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696544:{NFSU2_TR(0x696544);
{goto L696552;}
}
B696546:L696546:{c.instructions+=4;NFSU2_TR(0x696546);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69654a:{NFSU2_TR(0x69654a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69654d:{NFSU2_TR(0x69654d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696550:{NFSU2_TR(0x696550);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696552:L696552:{c.instructions+=1;NFSU2_TR(0x696552);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696557;}}
}
B696554:L696554:{c.instructions+=1;NFSU2_TR(0x696554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696557:L696557:{c.instructions+=3;NFSU2_TR(0x696557);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B69655b:{NFSU2_TR(0x69655b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B69655f:{NFSU2_TR(0x69655f);
if(r1(R+518)){{goto L6965e7;}}
}
B696565:L696565:{c.instructions+=5;NFSU2_TR(0x696565);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696568:{NFSU2_TR(0x696568);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B69656c:{NFSU2_TR(0x69656c);
w4(R+0,u32(r2(R+0)));
}
B69656f:{NFSU2_TR(0x69656f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696570:{NFSU2_TR(0x696570);
if(r1(R+518)){{goto L6965b4;}}
}
B696572:L696572:{c.instructions+=2;NFSU2_TR(0x696572);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696573:{NFSU2_TR(0x696573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6965e1;}}
}
B696575:L696575:{c.instructions+=9;NFSU2_TR(0x696575);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B696578:{NFSU2_TR(0x696578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69657b:{NFSU2_TR(0x69657b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B696580:{NFSU2_TR(0x696580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696583:{NFSU2_TR(0x696583);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B696586:{NFSU2_TR(0x696586);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696588:{NFSU2_TR(0x696588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69658b:{NFSU2_TR(0x69658b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69658e:{NFSU2_TR(0x69658e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6965af;}}
}
B696590:L696590:{c.instructions+=3;NFSU2_TR(0x696590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696593:{NFSU2_TR(0x696593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696596:{NFSU2_TR(0x696596);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B696598:L696598:{c.instructions+=9;NFSU2_TR(0x696598);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B69659b:{NFSU2_TR(0x69659b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69659e:{NFSU2_TR(0x69659e);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6965a1:{NFSU2_TR(0x6965a1);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6965a4:{NFSU2_TR(0x6965a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6965a7:{NFSU2_TR(0x6965a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6965a9:{NFSU2_TR(0x6965a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6965ac:{NFSU2_TR(0x6965ac);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6965ad:{NFSU2_TR(0x6965ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696598u);}goto L696598;}}
}
B6965af:L6965af:{c.instructions+=2;NFSU2_TR(0x6965af);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B6965b2:{NFSU2_TR(0x6965b2);
{goto L6965e1;}
}
B6965b4:L6965b4:{c.instructions+=2;NFSU2_TR(0x6965b4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6965b6:{NFSU2_TR(0x6965b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6965e1;}}
}
B6965b8:L6965b8:{c.instructions+=3;NFSU2_TR(0x6965b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6965bb:{NFSU2_TR(0x6965bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6965be:{NFSU2_TR(0x6965be);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B6965c0:L6965c0:{c.instructions+=6;NFSU2_TR(0x6965c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6965c6:{NFSU2_TR(0x6965c6);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6965c9:{NFSU2_TR(0x6965c9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6965cb:{NFSU2_TR(0x6965cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6965cd:{NFSU2_TR(0x6965cd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6965d0:{NFSU2_TR(0x6965d0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6965d7;}}
}
B6965d2:L6965d2:{c.instructions+=3;NFSU2_TR(0x6965d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6965d4:{NFSU2_TR(0x6965d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6965d5:{NFSU2_TR(0x6965d5);
{goto L6965d9;}
}
B6965d7:L6965d7:{c.instructions+=1;NFSU2_TR(0x6965d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6965d9:L6965d9:{c.instructions+=4;NFSU2_TR(0x6965d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6965db:{NFSU2_TR(0x6965db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6965de:{NFSU2_TR(0x6965de);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6965df:{NFSU2_TR(0x6965df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6965c0u);}goto L6965c0;}}
}
B6965e1:L6965e1:{c.instructions+=2;NFSU2_TR(0x6965e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6965e4:{NFSU2_TR(0x6965e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6965e7:L6965e7:{c.instructions+=3;NFSU2_TR(0x6965e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6965eb:{NFSU2_TR(0x6965eb);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6965ee:{NFSU2_TR(0x6965ee);
if(r1(R+518)){{goto L6966cd;}}
}
B6965f4:L6965f4:{c.instructions+=2;NFSU2_TR(0x6965f4);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6965f8:{NFSU2_TR(0x6965f8);
if(r1(R+518)){{goto L696604;}}
}
B6965fa:L6965fa:{c.instructions+=3;NFSU2_TR(0x6965fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6965fe:{NFSU2_TR(0x6965fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B696602:{NFSU2_TR(0x696602);
{goto L69660c;}
}
B696604:L696604:{c.instructions+=2;NFSU2_TR(0x696604);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B696608:{NFSU2_TR(0x696608);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B69660c:L69660c:{c.instructions+=2;NFSU2_TR(0x69660c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69660f:{NFSU2_TR(0x69660f);
if(r1(R+518)){{goto L6966cd;}}
}
B696615:L696615:{c.instructions+=3;NFSU2_TR(0x696615);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B696619:{NFSU2_TR(0x696619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B696620:{NFSU2_TR(0x696620);
if(r1(R+518)){{goto L696629;}}
}
B696622:L696622:{c.instructions+=1;NFSU2_TR(0x696622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B696629:L696629:{c.instructions+=6;NFSU2_TR(0x696629);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B69662d:{NFSU2_TR(0x69662d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B696630:{NFSU2_TR(0x696630);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B696633:{NFSU2_TR(0x696633);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696635:{NFSU2_TR(0x696635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696638:{NFSU2_TR(0x696638);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6966c7;}}
}
B69663e:L69663e:{c.instructions+=13;NFSU2_TR(0x69663e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696641:{NFSU2_TR(0x696641);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B696648:{NFSU2_TR(0x696648);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B69664b:{NFSU2_TR(0x69664b);
__builtin_memmove((R+0),(R+4),4);
}
B69664d:{NFSU2_TR(0x69664d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B696650:{NFSU2_TR(0x696650);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B696653:{NFSU2_TR(0x696653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B696656:{NFSU2_TR(0x696656);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B696658:{NFSU2_TR(0x696658);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B69665a:{NFSU2_TR(0x69665a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69665d:{NFSU2_TR(0x69665d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696660:{NFSU2_TR(0x696660);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B696663:{NFSU2_TR(0x696663);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696666:L696666:{c.instructions+=10;NFSU2_TR(0x696666);
__builtin_memmove((R+12),(R+24),4);
}
B696668:{NFSU2_TR(0x696668);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B69666b:{NFSU2_TR(0x69666b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B69666e:{NFSU2_TR(0x69666e);
__builtin_memmove((R+4),(R+8),4);
}
B696670:{NFSU2_TR(0x696670);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B696673:{NFSU2_TR(0x696673);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B696675:{NFSU2_TR(0x696675);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B696677:{NFSU2_TR(0x696677);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696679:{NFSU2_TR(0x696679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69667c:{NFSU2_TR(0x69667c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6966a0;}}
}
B69667e:L69667e:{c.instructions+=1;NFSU2_TR(0x69667e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696681:L696681:{c.instructions+=11;NFSU2_TR(0x696681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696684:{NFSU2_TR(0x696684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696687:{NFSU2_TR(0x696687);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B69668a:{NFSU2_TR(0x69668a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69668d:{NFSU2_TR(0x69668d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696690:{NFSU2_TR(0x696690);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B696693:{NFSU2_TR(0x696693);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696696:{NFSU2_TR(0x696696);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B696699:{NFSU2_TR(0x696699);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69669c:{NFSU2_TR(0x69669c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69669e:{NFSU2_TR(0x69669e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696681u);}goto L696681;}}
}
B6966a0:L6966a0:{c.instructions+=2;NFSU2_TR(0x6966a0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6966a2:{NFSU2_TR(0x6966a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6966bf;}}
}
B6966a4:L6966a4:{c.instructions+=3;NFSU2_TR(0x6966a4);
__builtin_memmove((R+4),(R+28),4);
}
B6966a6:{NFSU2_TR(0x6966a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6966a9:{NFSU2_TR(0x6966a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6966ac:L6966ac:{c.instructions+=7;NFSU2_TR(0x6966ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6966b0:{NFSU2_TR(0x6966b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6966b3:{NFSU2_TR(0x6966b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6966b5:{NFSU2_TR(0x6966b5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6966b8:{NFSU2_TR(0x6966b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6966bb:{NFSU2_TR(0x6966bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6966bd:{NFSU2_TR(0x6966bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6966acu);}goto L6966ac;}}
}
B6966bf:L6966bf:{c.instructions+=2;NFSU2_TR(0x6966bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6966c2:{NFSU2_TR(0x6966c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696666u);}goto L696666;}}
}
B6966c4:L6966c4:{c.instructions+=1;NFSU2_TR(0x6966c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6966c7:L6966c7:{c.instructions+=2;NFSU2_TR(0x6966c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6966ca:{NFSU2_TR(0x6966ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6966cd:L6966cd:{c.instructions+=5;NFSU2_TR(0x6966cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6966d0:{NFSU2_TR(0x6966d0);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6966d4:{NFSU2_TR(0x6966d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6966d8:{NFSU2_TR(0x6966d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6966da:{NFSU2_TR(0x6966da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6966de;}}
}
B6966dc:L6966dc:{c.instructions+=1;NFSU2_TR(0x6966dc);
__builtin_memmove((R+0),(R+4),4);
}
B6966de:L6966de:{c.instructions+=8;NFSU2_TR(0x6966de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6966df:{NFSU2_TR(0x6966df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6966e2:{NFSU2_TR(0x6966e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6966e6:{NFSU2_TR(0x6966e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6966e9:{NFSU2_TR(0x6966e9);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6966ec:{NFSU2_TR(0x6966ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6966ed:{NFSU2_TR(0x6966ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6966f0:{NFSU2_TR(0x6966f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6966f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6966f3:L6966f3:{c.instructions+=2;NFSU2_TR(0x6966f3);
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
B6966f5:{NFSU2_TR(0x6966f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6966f9;}}
}
B6966f7:L6966f7:{c.instructions+=1;NFSU2_TR(0x6966f7);
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
B6966f9:L6966f9:{c.instructions+=5;NFSU2_TR(0x6966f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6966fa:{NFSU2_TR(0x6966fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6966fb:{NFSU2_TR(0x6966fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6966fc:{NFSU2_TR(0x6966fc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6966fd:{NFSU2_TR(0x6966fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B696700:L696700:{c.instructions+=17;NFSU2_TR(0x696700);
__builtin_memmove((R+28),(R+28),4);
}
B696702:{NFSU2_TR(0x696702);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696703:{NFSU2_TR(0x696703);
__builtin_memmove((R+20),(R+16),4);
}
B696705:{NFSU2_TR(0x696705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B696708:{NFSU2_TR(0x696708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69670b:{NFSU2_TR(0x69670b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69670e:{NFSU2_TR(0x69670e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69670f:{NFSU2_TR(0x69670f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696712:{NFSU2_TR(0x696712);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696713:{NFSU2_TR(0x696713);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B696716:{NFSU2_TR(0x696716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696719:{NFSU2_TR(0x696719);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B69671c:{NFSU2_TR(0x69671c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69671d:{NFSU2_TR(0x69671d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69671f:{NFSU2_TR(0x69671f);
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696721:{NFSU2_TR(0x696721);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696724:{NFSU2_TR(0x696724);
if(r1(R+518)){{goto L69692f;}}
}
B69672a:L69672a:{c.instructions+=2;NFSU2_TR(0x69672a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69672b:{NFSU2_TR(0x69672b);
if(r1(R+518)){{goto L6968d0;}}
}
B696731:L696731:{c.instructions+=2;NFSU2_TR(0x696731);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696732:{NFSU2_TR(0x696732);
if(r1(R+518)){{goto L696844;}}
}
B696738:L696738:{c.instructions+=2;NFSU2_TR(0x696738);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696739:{NFSU2_TR(0x696739);
if(r1(R+518)){{goto L6967c9;}}
}
B69673f:L69673f:{c.instructions+=3;NFSU2_TR(0x69673f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B696740:{NFSU2_TR(0x696740);
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
B696741:{NFSU2_TR(0x696741);
if(r1(R+518)){{goto L69674d;}}
}
B696743:L696743:{c.instructions+=2;NFSU2_TR(0x696743);
w4(R+0,u32(0x80004001ull));
}
B696748:{NFSU2_TR(0x696748);
{goto L696ae6;}
}
B69674d:L69674d:{c.instructions+=8;NFSU2_TR(0x69674d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696750:{NFSU2_TR(0x696750);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B696753:{NFSU2_TR(0x696753);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696755:{NFSU2_TR(0x696755);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696755);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696755);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B696758:{NFSU2_TR(0x696758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69675b:{NFSU2_TR(0x69675b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69675f:{NFSU2_TR(0x69675f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696762:{NFSU2_TR(0x696762);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696767;}}
}
B696764:L696764:{c.instructions+=1;NFSU2_TR(0x696764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696767:L696767:{c.instructions+=3;NFSU2_TR(0x696767);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69676a:{NFSU2_TR(0x69676a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69676d:{NFSU2_TR(0x69676d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696ae4;}}
}
B696773:L696773:{c.instructions+=3;NFSU2_TR(0x696773);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B696775:{NFSU2_TR(0x696775);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B696779:{NFSU2_TR(0x696779);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6967b9;}}
}
B69677b:L69677b:{c.instructions+=9;NFSU2_TR(0x69677b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69677e:{NFSU2_TR(0x69677e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696781:{NFSU2_TR(0x696781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696784:{NFSU2_TR(0x696784);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B696787:{NFSU2_TR(0x696787);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69678a:{NFSU2_TR(0x69678a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69678d:{NFSU2_TR(0x69678d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696790:{NFSU2_TR(0x696790);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696791:{NFSU2_TR(0x696791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x696796ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6963cfu);}goto L6963cf;}
}
B696796:L696796:{c.instructions+=2;NFSU2_TR(0x696796);
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
B696798:{NFSU2_TR(0x696798);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L696ae6;}}
}
B69679e:L69679e:{c.instructions+=10;NFSU2_TR(0x69679e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6967a1:{NFSU2_TR(0x6967a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6967a4:{NFSU2_TR(0x6967a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6967a7:{NFSU2_TR(0x6967a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6967aa:{NFSU2_TR(0x6967aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6967ad:{NFSU2_TR(0x6967ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6967b0:{NFSU2_TR(0x6967b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6967b4:{NFSU2_TR(0x6967b4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6967b5:{NFSU2_TR(0x6967b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6967b7:{NFSU2_TR(0x6967b7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69677bu);}goto L69677b;}}
}
B6967b9:L6967b9:{c.instructions+=4;NFSU2_TR(0x6967b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6967bc:{NFSU2_TR(0x6967bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6967bf:{NFSU2_TR(0x6967bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6967c2:{NFSU2_TR(0x6967c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696773u);}goto L696773;}}
}
B6967c4:L6967c4:{c.instructions+=1;NFSU2_TR(0x6967c4);
{goto L696ae4;}
}
B6967c9:L6967c9:{c.instructions+=8;NFSU2_TR(0x6967c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6967cd:{NFSU2_TR(0x6967cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6967d0:{NFSU2_TR(0x6967d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6967d2:{NFSU2_TR(0x6967d2);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6967d2);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6967d2);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6967d4:{NFSU2_TR(0x6967d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6967d7:{NFSU2_TR(0x6967d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6967db:{NFSU2_TR(0x6967db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6967de:{NFSU2_TR(0x6967de);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6967e3;}}
}
B6967e0:L6967e0:{c.instructions+=1;NFSU2_TR(0x6967e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6967e3:L6967e3:{c.instructions+=4;NFSU2_TR(0x6967e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6967e7:{NFSU2_TR(0x6967e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6967eb:{NFSU2_TR(0x6967eb);
__builtin_memmove((R+28),(R+12),4);
}
B6967ed:{NFSU2_TR(0x6967ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69683c;}}
}
B6967ef:L6967ef:{c.instructions+=3;NFSU2_TR(0x6967ef);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6967f1:{NFSU2_TR(0x6967f1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6967f3:{NFSU2_TR(0x6967f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696831;}}
}
B6967f5:L6967f5:{c.instructions+=1;NFSU2_TR(0x6967f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6967f9:L6967f9:{c.instructions+=3;NFSU2_TR(0x6967f9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6967fb:{NFSU2_TR(0x6967fb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6967fd:{NFSU2_TR(0x6967fd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696828;}}
}
B6967ff:L6967ff:{c.instructions+=2;NFSU2_TR(0x6967ff);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696802:{NFSU2_TR(0x696802);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696808;}}
}
B696804:L696804:{c.instructions+=2;NFSU2_TR(0x696804);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B696806:{NFSU2_TR(0x696806);
{goto L69681a;}
}
B696808:L696808:{c.instructions+=6;NFSU2_TR(0x696808);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69680c:{NFSU2_TR(0x69680c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69680f:{NFSU2_TR(0x69680f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B696811:{NFSU2_TR(0x696811);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696814:{NFSU2_TR(0x696814);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B696817:{NFSU2_TR(0x696817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69681a:L69681a:{c.instructions+=6;NFSU2_TR(0x69681a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B69681c:{NFSU2_TR(0x69681c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696820:{NFSU2_TR(0x696820);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B696823:{NFSU2_TR(0x696823);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B696824:{NFSU2_TR(0x696824);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B696826:{NFSU2_TR(0x696826);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6967ffu);}goto L6967ff;}}
}
B696828:L696828:{c.instructions+=4;NFSU2_TR(0x696828);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B69682c:{NFSU2_TR(0x69682c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69682d:{NFSU2_TR(0x69682d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B69682f:{NFSU2_TR(0x69682f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6967f9u);}goto L6967f9;}}
}
B696831:L696831:{c.instructions+=4;NFSU2_TR(0x696831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696834:{NFSU2_TR(0x696834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696837:{NFSU2_TR(0x696837);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69683a:{NFSU2_TR(0x69683a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6967efu);}goto L6967ef;}}
}
B69683c:L69683c:{c.instructions+=2;NFSU2_TR(0x69683c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69683f:{NFSU2_TR(0x69683f);
{goto L696943;}
}
B696844:L696844:{c.instructions+=8;NFSU2_TR(0x696844);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B696848:{NFSU2_TR(0x696848);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69684b:{NFSU2_TR(0x69684b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69684d:{NFSU2_TR(0x69684d);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69684d);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69684d);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69684f:{NFSU2_TR(0x69684f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696852:{NFSU2_TR(0x696852);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696856:{NFSU2_TR(0x696856);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696859:{NFSU2_TR(0x696859);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69685e;}}
}
B69685b:L69685b:{c.instructions+=1;NFSU2_TR(0x69685b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69685e:L69685e:{c.instructions+=3;NFSU2_TR(0x69685e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B696862:{NFSU2_TR(0x696862);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B696866:{NFSU2_TR(0x696866);
if(r1(R+518)){{goto L696943;}}
}
B69686c:L69686c:{c.instructions+=4;NFSU2_TR(0x69686c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696870:{NFSU2_TR(0x696870);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696874:{NFSU2_TR(0x696874);
__builtin_memmove((R+28),(R+12),4);
}
B696876:{NFSU2_TR(0x696876);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69683cu);}goto L69683c;}}
}
B696878:L696878:{c.instructions+=3;NFSU2_TR(0x696878);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69687a:{NFSU2_TR(0x69687a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69687c:{NFSU2_TR(0x69687c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6968bd;}}
}
B69687e:L69687e:{c.instructions+=1;NFSU2_TR(0x69687e);
w4(R+0,u32(r2(R+8)));
}
B696881:L696881:{c.instructions+=3;NFSU2_TR(0x696881);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B696883:{NFSU2_TR(0x696883);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696885:{NFSU2_TR(0x696885);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6968b4;}}
}
B696887:L696887:{c.instructions+=2;NFSU2_TR(0x696887);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69688a:{NFSU2_TR(0x69688a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696890;}}
}
B69688c:L69688c:{c.instructions+=2;NFSU2_TR(0x69688c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69688e:{NFSU2_TR(0x69688e);
{goto L6968a3;}
}
B696890:L696890:{c.instructions+=6;NFSU2_TR(0x696890);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696894:{NFSU2_TR(0x696894);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B696898:{NFSU2_TR(0x696898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69689b:{NFSU2_TR(0x69689b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B69689d:{NFSU2_TR(0x69689d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6968a0:{NFSU2_TR(0x6968a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6968a3:L6968a3:{c.instructions+=7;NFSU2_TR(0x6968a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6968a5:{NFSU2_TR(0x6968a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6968a9:{NFSU2_TR(0x6968a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6968ac:{NFSU2_TR(0x6968ac);
w4(R+0,u32(r2(R+8)));
}
B6968af:{NFSU2_TR(0x6968af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6968b0:{NFSU2_TR(0x6968b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6968b2:{NFSU2_TR(0x6968b2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696887u);}goto L696887;}}
}
B6968b4:L6968b4:{c.instructions+=4;NFSU2_TR(0x6968b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6968b8:{NFSU2_TR(0x6968b8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6968b9:{NFSU2_TR(0x6968b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6968bb:{NFSU2_TR(0x6968bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696881u);}goto L696881;}}
}
B6968bd:L6968bd:{c.instructions+=4;NFSU2_TR(0x6968bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6968c0:{NFSU2_TR(0x6968c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6968c3:{NFSU2_TR(0x6968c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6968c6:{NFSU2_TR(0x6968c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696878u);}goto L696878;}}
}
B6968c8:L6968c8:{c.instructions+=2;NFSU2_TR(0x6968c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6968cb:{NFSU2_TR(0x6968cb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69683cu);}goto L69683c;}
}
B6968d0:L6968d0:{c.instructions+=5;NFSU2_TR(0x6968d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6968d4:{NFSU2_TR(0x6968d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6968d7:{NFSU2_TR(0x6968d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6968d9:{NFSU2_TR(0x6968d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6968dc:{NFSU2_TR(0x6968dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6968e1;}}
}
B6968de:L6968de:{c.instructions+=1;NFSU2_TR(0x6968de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6968e1:L6968e1:{c.instructions+=3;NFSU2_TR(0x6968e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6968e5:{NFSU2_TR(0x6968e5);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6968e9:{NFSU2_TR(0x6968e9);
if(r1(R+518)){{goto L696943;}}
}
B6968eb:L6968eb:{c.instructions+=4;NFSU2_TR(0x6968eb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6968ed:{NFSU2_TR(0x6968ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6968f0:{NFSU2_TR(0x6968f0);
__builtin_memmove((R+8),(R+12),4);
}
B6968f2:{NFSU2_TR(0x6968f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69683cu);}goto L69683c;}}
}
B6968f8:L6968f8:{c.instructions+=1;NFSU2_TR(0x6968f8);
w4(R+0,u32(r2(R+0)));
}
B6968fb:L6968fb:{c.instructions+=3;NFSU2_TR(0x6968fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6968fd:{NFSU2_TR(0x6968fd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6968ff:{NFSU2_TR(0x6968ff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696924;}}
}
B696901:L696901:{c.instructions+=2;NFSU2_TR(0x696901);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696904:{NFSU2_TR(0x696904);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69690a;}}
}
B696906:L696906:{c.instructions+=2;NFSU2_TR(0x696906);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B696908:{NFSU2_TR(0x696908);
{goto L696916;}
}
B69690a:L69690a:{c.instructions+=4;NFSU2_TR(0x69690a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69690d:{NFSU2_TR(0x69690d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696910:{NFSU2_TR(0x696910);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B696913:{NFSU2_TR(0x696913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696916:L696916:{c.instructions+=6;NFSU2_TR(0x696916);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B696918:{NFSU2_TR(0x696918);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69691c:{NFSU2_TR(0x69691c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69691f:{NFSU2_TR(0x69691f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B696920:{NFSU2_TR(0x696920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B696922:{NFSU2_TR(0x696922);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696901u);}goto L696901;}}
}
B696924:L696924:{c.instructions+=3;NFSU2_TR(0x696924);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B696925:{NFSU2_TR(0x696925);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B696928:{NFSU2_TR(0x696928);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6968fbu);}goto L6968fb;}}
}
B69692a:L69692a:{c.instructions+=1;NFSU2_TR(0x69692a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69683cu);}goto L69683c;}
}
B69692f:L69692f:{c.instructions+=6;NFSU2_TR(0x69692f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696932:{NFSU2_TR(0x696932);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696936:{NFSU2_TR(0x696936);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B696939:{NFSU2_TR(0x696939);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69693b:{NFSU2_TR(0x69693b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69693e:{NFSU2_TR(0x69693e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696943;}}
}
B696940:L696940:{c.instructions+=1;NFSU2_TR(0x696940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696943:L696943:{c.instructions+=3;NFSU2_TR(0x696943);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B696947:{NFSU2_TR(0x696947);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B69694b:{NFSU2_TR(0x69694b);
if(r1(R+518)){{goto L6969d1;}}
}
B696951:L696951:{c.instructions+=6;NFSU2_TR(0x696951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696954:{NFSU2_TR(0x696954);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696957:{NFSU2_TR(0x696957);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B69695b:{NFSU2_TR(0x69695b);
w4(R+0,u32(r2(R+0)));
}
B69695e:{NFSU2_TR(0x69695e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69695f:{NFSU2_TR(0x69695f);
if(r1(R+518)){{goto L6969a2;}}
}
B696961:L696961:{c.instructions+=2;NFSU2_TR(0x696961);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696962:{NFSU2_TR(0x696962);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6969ce;}}
}
B696964:L696964:{c.instructions+=9;NFSU2_TR(0x696964);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B696967:{NFSU2_TR(0x696967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69696a:{NFSU2_TR(0x69696a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B69696f:{NFSU2_TR(0x69696f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696972:{NFSU2_TR(0x696972);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B696975:{NFSU2_TR(0x696975);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696977:{NFSU2_TR(0x696977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69697a:{NFSU2_TR(0x69697a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69697d:{NFSU2_TR(0x69697d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69699d;}}
}
B69697f:L69697f:{c.instructions+=3;NFSU2_TR(0x69697f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696982:{NFSU2_TR(0x696982);
__builtin_memmove((R+0),(R+12),4);
}
B696984:{NFSU2_TR(0x696984);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B696986:L696986:{c.instructions+=9;NFSU2_TR(0x696986);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B696989:{NFSU2_TR(0x696989);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69698c:{NFSU2_TR(0x69698c);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B69698f:{NFSU2_TR(0x69698f);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B696992:{NFSU2_TR(0x696992);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696995:{NFSU2_TR(0x696995);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B696997:{NFSU2_TR(0x696997);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69699a:{NFSU2_TR(0x69699a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B69699b:{NFSU2_TR(0x69699b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696986u);}goto L696986;}}
}
B69699d:L69699d:{c.instructions+=2;NFSU2_TR(0x69699d);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B6969a0:{NFSU2_TR(0x6969a0);
{goto L6969ce;}
}
B6969a2:L6969a2:{c.instructions+=2;NFSU2_TR(0x6969a2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6969a4:{NFSU2_TR(0x6969a4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6969ce;}}
}
B6969a6:L6969a6:{c.instructions+=3;NFSU2_TR(0x6969a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6969a9:{NFSU2_TR(0x6969a9);
__builtin_memmove((R+8),(R+12),4);
}
B6969ab:{NFSU2_TR(0x6969ab);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B6969ad:L6969ad:{c.instructions+=6;NFSU2_TR(0x6969ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6969b3:{NFSU2_TR(0x6969b3);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6969b6:{NFSU2_TR(0x6969b6);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6969b8:{NFSU2_TR(0x6969b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6969ba:{NFSU2_TR(0x6969ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6969bd:{NFSU2_TR(0x6969bd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6969c4;}}
}
B6969bf:L6969bf:{c.instructions+=3;NFSU2_TR(0x6969bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6969c1:{NFSU2_TR(0x6969c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6969c2:{NFSU2_TR(0x6969c2);
{goto L6969c6;}
}
B6969c4:L6969c4:{c.instructions+=1;NFSU2_TR(0x6969c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6969c6:L6969c6:{c.instructions+=4;NFSU2_TR(0x6969c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6969c8:{NFSU2_TR(0x6969c8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6969cb:{NFSU2_TR(0x6969cb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6969cc:{NFSU2_TR(0x6969cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6969adu);}goto L6969ad;}}
}
B6969ce:L6969ce:{c.instructions+=1;NFSU2_TR(0x6969ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6969d1:L6969d1:{c.instructions+=4;NFSU2_TR(0x6969d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6969d4:{NFSU2_TR(0x6969d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6969d8:{NFSU2_TR(0x6969d8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6969db:{NFSU2_TR(0x6969db);
if(r1(R+518)){{goto L696ab9;}}
}
B6969e1:L6969e1:{c.instructions+=2;NFSU2_TR(0x6969e1);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6969e5:{NFSU2_TR(0x6969e5);
if(r1(R+518)){{goto L6969f1;}}
}
B6969e7:L6969e7:{c.instructions+=3;NFSU2_TR(0x6969e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6969eb:{NFSU2_TR(0x6969eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6969ef:{NFSU2_TR(0x6969ef);
{goto L6969f9;}
}
B6969f1:L6969f1:{c.instructions+=2;NFSU2_TR(0x6969f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6969f5:{NFSU2_TR(0x6969f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6969f9:L6969f9:{c.instructions+=2;NFSU2_TR(0x6969f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6969fc:{NFSU2_TR(0x6969fc);
if(r1(R+518)){{goto L696ab9;}}
}
B696a02:L696a02:{c.instructions+=3;NFSU2_TR(0x696a02);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B696a06:{NFSU2_TR(0x696a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B696a0d:{NFSU2_TR(0x696a0d);
if(r1(R+518)){{goto L696a16;}}
}
B696a0f:L696a0f:{c.instructions+=1;NFSU2_TR(0x696a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B696a16:L696a16:{c.instructions+=5;NFSU2_TR(0x696a16);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B696a1a:{NFSU2_TR(0x696a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B696a1d:{NFSU2_TR(0x696a1d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B696a20:{NFSU2_TR(0x696a20);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696a22:{NFSU2_TR(0x696a22);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696ab6;}}
}
B696a28:L696a28:{c.instructions+=14;NFSU2_TR(0x696a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B696a2f:{NFSU2_TR(0x696a2f);
__builtin_memmove((R+0),(R+8),4);
}
B696a31:{NFSU2_TR(0x696a31);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B696a34:{NFSU2_TR(0x696a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B696a37:{NFSU2_TR(0x696a37);
__builtin_memmove((R+4),(R+28),4);
}
B696a39:{NFSU2_TR(0x696a39);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B696a3c:{NFSU2_TR(0x696a3c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B696a3e:{NFSU2_TR(0x696a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B696a41:{NFSU2_TR(0x696a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696a44:{NFSU2_TR(0x696a44);
__builtin_memmove((R+4),(R+24),4);
}
B696a46:{NFSU2_TR(0x696a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B696a4d:{NFSU2_TR(0x696a4d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B696a50:{NFSU2_TR(0x696a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B696a53:{NFSU2_TR(0x696a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696a56:L696a56:{c.instructions+=10;NFSU2_TR(0x696a56);
__builtin_memmove((R+28),(R+24),4);
}
B696a58:{NFSU2_TR(0x696a58);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B696a5b:{NFSU2_TR(0x696a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B696a5e:{NFSU2_TR(0x696a5e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B696a60:{NFSU2_TR(0x696a60);
__builtin_memmove((R+28),(R+8),4);
}
B696a62:{NFSU2_TR(0x696a62);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B696a65:{NFSU2_TR(0x696a65);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B696a67:{NFSU2_TR(0x696a67);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696a69:{NFSU2_TR(0x696a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696a6c:{NFSU2_TR(0x696a6c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696a8e;}}
}
B696a6e:L696a6e:{c.instructions+=1;NFSU2_TR(0x696a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696a71:L696a71:{c.instructions+=10;NFSU2_TR(0x696a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696a74:{NFSU2_TR(0x696a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696a77:{NFSU2_TR(0x696a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696a7a:{NFSU2_TR(0x696a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696a7e:{NFSU2_TR(0x696a7e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x3ull))));
}
B696a81:{NFSU2_TR(0x696a81);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696a84:{NFSU2_TR(0x696a84);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B696a87:{NFSU2_TR(0x696a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696a8a:{NFSU2_TR(0x696a8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B696a8c:{NFSU2_TR(0x696a8c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696a71u);}goto L696a71;}}
}
B696a8e:L696a8e:{c.instructions+=2;NFSU2_TR(0x696a8e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696a90:{NFSU2_TR(0x696a90);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696aae;}}
}
B696a92:L696a92:{c.instructions+=3;NFSU2_TR(0x696a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696a95:{NFSU2_TR(0x696a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696a98:{NFSU2_TR(0x696a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696a9b:L696a9b:{c.instructions+=7;NFSU2_TR(0x696a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696a9f:{NFSU2_TR(0x696a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696aa2:{NFSU2_TR(0x696aa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B696aa4:{NFSU2_TR(0x696aa4);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B696aa7:{NFSU2_TR(0x696aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696aaa:{NFSU2_TR(0x696aaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B696aac:{NFSU2_TR(0x696aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696a9bu);}goto L696a9b;}}
}
B696aae:L696aae:{c.instructions+=2;NFSU2_TR(0x696aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696ab1:{NFSU2_TR(0x696ab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696a56u);}goto L696a56;}}
}
B696ab3:L696ab3:{c.instructions+=1;NFSU2_TR(0x696ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696ab6:L696ab6:{c.instructions+=1;NFSU2_TR(0x696ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696ab9:L696ab9:{c.instructions+=6;NFSU2_TR(0x696ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696abc:{NFSU2_TR(0x696abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696abf:{NFSU2_TR(0x696abf);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B696ac3:{NFSU2_TR(0x696ac3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B696ac7:{NFSU2_TR(0x696ac7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696ac9:{NFSU2_TR(0x696ac9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696acd;}}
}
B696acb:L696acb:{c.instructions+=1;NFSU2_TR(0x696acb);
__builtin_memmove((R+0),(R+8),4);
}
B696acd:L696acd:{c.instructions+=8;NFSU2_TR(0x696acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696ace:{NFSU2_TR(0x696ace);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696ad2:{NFSU2_TR(0x696ad2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B696ad5:{NFSU2_TR(0x696ad5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696ad6:{NFSU2_TR(0x696ad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696ad9:{NFSU2_TR(0x696ad9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696ada:{NFSU2_TR(0x696ada);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696add:{NFSU2_TR(0x696add);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x696ae0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B696ae0:L696ae0:{c.instructions+=2;NFSU2_TR(0x696ae0);
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
B696ae2:{NFSU2_TR(0x696ae2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L696ae6;}}
}
B696ae4:L696ae4:{c.instructions+=1;NFSU2_TR(0x696ae4);
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
B696ae6:L696ae6:{c.instructions+=5;NFSU2_TR(0x696ae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B696ae7:{NFSU2_TR(0x696ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B696ae8:{NFSU2_TR(0x696ae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B696ae9:{NFSU2_TR(0x696ae9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B696aea:{NFSU2_TR(0x696aea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B696aed:L696aed:{c.instructions+=16;NFSU2_TR(0x696aed);
__builtin_memmove((R+28),(R+28),4);
}
B696aef:{NFSU2_TR(0x696aef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696af0:{NFSU2_TR(0x696af0);
__builtin_memmove((R+20),(R+16),4);
}
B696af2:{NFSU2_TR(0x696af2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B696af5:{NFSU2_TR(0x696af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696af8:{NFSU2_TR(0x696af8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696af9:{NFSU2_TR(0x696af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696afc:{NFSU2_TR(0x696afc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696afd:{NFSU2_TR(0x696afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B696b00:{NFSU2_TR(0x696b00);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B696b03:{NFSU2_TR(0x696b03);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696b06:{NFSU2_TR(0x696b06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696b07:{NFSU2_TR(0x696b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696b0a:{NFSU2_TR(0x696b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696b0d:{NFSU2_TR(0x696b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696b10:{NFSU2_TR(0x696b10);
if(r1(R+518)){{goto L696dc0;}}
}
B696b16:L696b16:{c.instructions+=2;NFSU2_TR(0x696b16);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696b17:{NFSU2_TR(0x696b17);
if(r1(R+518)){{goto L696d54;}}
}
B696b1d:L696b1d:{c.instructions+=2;NFSU2_TR(0x696b1d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696b1e:{NFSU2_TR(0x696b1e);
if(r1(R+518)){{goto L696cc6;}}
}
B696b24:L696b24:{c.instructions+=2;NFSU2_TR(0x696b24);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696b25:{NFSU2_TR(0x696b25);
if(r1(R+518)){{goto L696bb7;}}
}
B696b2b:L696b2b:{c.instructions+=3;NFSU2_TR(0x696b2b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B696b2c:{NFSU2_TR(0x696b2c);
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
B696b2d:{NFSU2_TR(0x696b2d);
if(r1(R+518)){{goto L696b39;}}
}
B696b2f:L696b2f:{c.instructions+=2;NFSU2_TR(0x696b2f);
w4(R+0,u32(0x80004001ull));
}
B696b34:{NFSU2_TR(0x696b34);
{goto L696f7b;}
}
B696b39:L696b39:{c.instructions+=8;NFSU2_TR(0x696b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696b3c:{NFSU2_TR(0x696b3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B696b3f:{NFSU2_TR(0x696b3f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696b41:{NFSU2_TR(0x696b41);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696b41);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696b41);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B696b44:{NFSU2_TR(0x696b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696b47:{NFSU2_TR(0x696b47);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696b4b:{NFSU2_TR(0x696b4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696b4e:{NFSU2_TR(0x696b4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696b53;}}
}
B696b50:L696b50:{c.instructions+=1;NFSU2_TR(0x696b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696b53:L696b53:{c.instructions+=3;NFSU2_TR(0x696b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696b57:{NFSU2_TR(0x696b57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696b5b:{NFSU2_TR(0x696b5b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696f79;}}
}
B696b61:L696b61:{c.instructions+=3;NFSU2_TR(0x696b61);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B696b63:{NFSU2_TR(0x696b63);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B696b67:{NFSU2_TR(0x696b67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696ba7;}}
}
B696b69:L696b69:{c.instructions+=9;NFSU2_TR(0x696b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696b6c:{NFSU2_TR(0x696b6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696b6f:{NFSU2_TR(0x696b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696b72:{NFSU2_TR(0x696b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B696b75:{NFSU2_TR(0x696b75);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696b78:{NFSU2_TR(0x696b78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696b7b:{NFSU2_TR(0x696b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696b7e:{NFSU2_TR(0x696b7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696b7f:{NFSU2_TR(0x696b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x696b84ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6963cfu);}goto L6963cf;}
}
B696b84:L696b84:{c.instructions+=2;NFSU2_TR(0x696b84);
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
B696b86:{NFSU2_TR(0x696b86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L696f7b;}}
}
B696b8c:L696b8c:{c.instructions+=10;NFSU2_TR(0x696b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696b8f:{NFSU2_TR(0x696b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696b92:{NFSU2_TR(0x696b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696b95:{NFSU2_TR(0x696b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696b98:{NFSU2_TR(0x696b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696b9b:{NFSU2_TR(0x696b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B696b9e:{NFSU2_TR(0x696b9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696ba2:{NFSU2_TR(0x696ba2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B696ba3:{NFSU2_TR(0x696ba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B696ba5:{NFSU2_TR(0x696ba5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696b69u);}goto L696b69;}}
}
B696ba7:L696ba7:{c.instructions+=4;NFSU2_TR(0x696ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696baa:{NFSU2_TR(0x696baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696bad:{NFSU2_TR(0x696bad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B696bb0:{NFSU2_TR(0x696bb0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696b61u);}goto L696b61;}}
}
B696bb2:L696bb2:{c.instructions+=1;NFSU2_TR(0x696bb2);
{goto L696f79;}
}
B696bb7:L696bb7:{c.instructions+=5;NFSU2_TR(0x696bb7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696bbb:{NFSU2_TR(0x696bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696bbe:{NFSU2_TR(0x696bbe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696bc0:{NFSU2_TR(0x696bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696bc3:{NFSU2_TR(0x696bc3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696bc8;}}
}
B696bc5:L696bc5:{c.instructions+=1;NFSU2_TR(0x696bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696bc8:L696bc8:{c.instructions+=3;NFSU2_TR(0x696bc8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B696bcc:{NFSU2_TR(0x696bcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B696bd0:{NFSU2_TR(0x696bd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L696c69;}}
}
B696bd6:L696bd6:{c.instructions+=2;NFSU2_TR(0x696bd6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B696bda:{NFSU2_TR(0x696bda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L696c69;}}
}
B696be0:L696be0:{c.instructions+=2;NFSU2_TR(0x696be0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696be4:{NFSU2_TR(0x696be4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696c5e;}}
}
B696be6:L696be6:{c.instructions+=6;NFSU2_TR(0x696be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696be9:{NFSU2_TR(0x696be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696bec:{NFSU2_TR(0x696bec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B696bef:{NFSU2_TR(0x696bef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B696bf2:{NFSU2_TR(0x696bf2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B696bf4:{NFSU2_TR(0x696bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696bf7:L696bf7:{c.instructions+=36;NFSU2_TR(0x696bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696bfa:{NFSU2_TR(0x696bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696bfd:{NFSU2_TR(0x696bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c00:{NFSU2_TR(0x696c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c03:{NFSU2_TR(0x696c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B696c05:{NFSU2_TR(0x696c05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B696c07:{NFSU2_TR(0x696c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c0a:{NFSU2_TR(0x696c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c0d:{NFSU2_TR(0x696c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c10:{NFSU2_TR(0x696c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c13:{NFSU2_TR(0x696c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c16:{NFSU2_TR(0x696c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c19:{NFSU2_TR(0x696c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c1c:{NFSU2_TR(0x696c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c1f:{NFSU2_TR(0x696c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c22:{NFSU2_TR(0x696c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c25:{NFSU2_TR(0x696c25);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B696c28:{NFSU2_TR(0x696c28);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B696c2b:{NFSU2_TR(0x696c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c2e:{NFSU2_TR(0x696c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c31:{NFSU2_TR(0x696c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c34:{NFSU2_TR(0x696c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c37:{NFSU2_TR(0x696c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c3a:{NFSU2_TR(0x696c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c3d:{NFSU2_TR(0x696c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c40:{NFSU2_TR(0x696c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c43:{NFSU2_TR(0x696c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c46:{NFSU2_TR(0x696c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c49:{NFSU2_TR(0x696c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c4c:{NFSU2_TR(0x696c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c4f:{NFSU2_TR(0x696c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c52:{NFSU2_TR(0x696c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c55:{NFSU2_TR(0x696c55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B696c58:{NFSU2_TR(0x696c58);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B696c5b:{NFSU2_TR(0x696c5b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B696c5c:{NFSU2_TR(0x696c5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696bf7u);}goto L696bf7;}}
}
B696c5e:L696c5e:{c.instructions+=3;NFSU2_TR(0x696c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696c61:{NFSU2_TR(0x696c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696c64:{NFSU2_TR(0x696c64);
{goto L696dd4;}
}
B696c69:L696c69:{c.instructions+=3;NFSU2_TR(0x696c69);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B696c6b:{NFSU2_TR(0x696c6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696c6e:{NFSU2_TR(0x696c6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c5eu);}goto L696c5e;}}
}
B696c70:L696c70:{c.instructions+=3;NFSU2_TR(0x696c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696c74:{NFSU2_TR(0x696c74);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B696c79:{NFSU2_TR(0x696c79);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696cbe;}}
}
B696c7b:L696c7b:{c.instructions+=1;NFSU2_TR(0x696c7b);
w4(R+0,u32(r2(R+8)));
}
B696c7e:L696c7e:{c.instructions+=3;NFSU2_TR(0x696c7e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B696c80:{NFSU2_TR(0x696c80);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696c82:{NFSU2_TR(0x696c82);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696cb2;}}
}
B696c84:L696c84:{c.instructions+=2;NFSU2_TR(0x696c84);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696c87:{NFSU2_TR(0x696c87);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L696c9f;}}
}
B696c89:L696c89:{c.instructions+=3;NFSU2_TR(0x696c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696c8c:{NFSU2_TR(0x696c8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696c8f:{NFSU2_TR(0x696c8f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L696c9f;}}
}
B696c91:L696c91:{c.instructions+=5;NFSU2_TR(0x696c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B696c94:{NFSU2_TR(0x696c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696c97:{NFSU2_TR(0x696c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696c9a:{NFSU2_TR(0x696c9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B696c9d:{NFSU2_TR(0x696c9d);
{goto L696ca1;}
}
B696c9f:L696c9f:{c.instructions+=1;NFSU2_TR(0x696c9f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B696ca1:L696ca1:{c.instructions+=7;NFSU2_TR(0x696ca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B696ca3:{NFSU2_TR(0x696ca3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B696ca7:{NFSU2_TR(0x696ca7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B696caa:{NFSU2_TR(0x696caa);
w4(R+0,u32(r2(R+8)));
}
B696cad:{NFSU2_TR(0x696cad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B696cae:{NFSU2_TR(0x696cae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B696cb0:{NFSU2_TR(0x696cb0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c84u);}goto L696c84;}}
}
B696cb2:L696cb2:{c.instructions+=4;NFSU2_TR(0x696cb2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B696cb6:{NFSU2_TR(0x696cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696cb9:{NFSU2_TR(0x696cb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B696cbc:{NFSU2_TR(0x696cbc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c7eu);}goto L696c7e;}}
}
B696cbe:L696cbe:{c.instructions+=3;NFSU2_TR(0x696cbe);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B696cbf:{NFSU2_TR(0x696cbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B696cc2:{NFSU2_TR(0x696cc2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c70u);}goto L696c70;}}
}
B696cc4:L696cc4:{c.instructions+=1;NFSU2_TR(0x696cc4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c5eu);}goto L696c5e;}
}
B696cc6:L696cc6:{c.instructions+=5;NFSU2_TR(0x696cc6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696cca:{NFSU2_TR(0x696cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696ccd:{NFSU2_TR(0x696ccd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696ccf:{NFSU2_TR(0x696ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696cd2:{NFSU2_TR(0x696cd2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696cd7;}}
}
B696cd4:L696cd4:{c.instructions+=1;NFSU2_TR(0x696cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696cd7:L696cd7:{c.instructions+=3;NFSU2_TR(0x696cd7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B696cdb:{NFSU2_TR(0x696cdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B696cdf:{NFSU2_TR(0x696cdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L696ceb;}}
}
B696ce1:L696ce1:{c.instructions+=2;NFSU2_TR(0x696ce1);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B696ce5:{NFSU2_TR(0x696ce5);
if(r1(R+518)){{goto L696dd4;}}
}
B696ceb:L696ceb:{c.instructions+=4;NFSU2_TR(0x696ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696cef:{NFSU2_TR(0x696cef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696cf3:{NFSU2_TR(0x696cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696cf6:{NFSU2_TR(0x696cf6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c5eu);}goto L696c5e;}}
}
B696cfc:L696cfc:{c.instructions+=3;NFSU2_TR(0x696cfc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696cfe:{NFSU2_TR(0x696cfe);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B696d01:{NFSU2_TR(0x696d01);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696d44;}}
}
B696d03:L696d03:{c.instructions+=1;NFSU2_TR(0x696d03);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696d07:L696d07:{c.instructions+=3;NFSU2_TR(0x696d07);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B696d09:{NFSU2_TR(0x696d09);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696d0b:{NFSU2_TR(0x696d0b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696d38;}}
}
B696d0d:L696d0d:{c.instructions+=2;NFSU2_TR(0x696d0d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696d10:{NFSU2_TR(0x696d10);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L696d28;}}
}
B696d12:L696d12:{c.instructions+=2;NFSU2_TR(0x696d12);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696d15:{NFSU2_TR(0x696d15);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L696d28;}}
}
B696d17:L696d17:{c.instructions+=6;NFSU2_TR(0x696d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696d1a:{NFSU2_TR(0x696d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696d1d:{NFSU2_TR(0x696d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696d20:{NFSU2_TR(0x696d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696d23:{NFSU2_TR(0x696d23);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B696d26:{NFSU2_TR(0x696d26);
{goto L696d2a;}
}
B696d28:L696d28:{c.instructions+=1;NFSU2_TR(0x696d28);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B696d2a:L696d2a:{c.instructions+=6;NFSU2_TR(0x696d2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B696d2c:{NFSU2_TR(0x696d2c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696d30:{NFSU2_TR(0x696d30);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B696d33:{NFSU2_TR(0x696d33);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B696d34:{NFSU2_TR(0x696d34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B696d36:{NFSU2_TR(0x696d36);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696d0du);}goto L696d0d;}}
}
B696d38:L696d38:{c.instructions+=5;NFSU2_TR(0x696d38);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B696d3c:{NFSU2_TR(0x696d3c);
w4(R+12,u32(r2(R+4)));
}
B696d3f:{NFSU2_TR(0x696d3f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B696d40:{NFSU2_TR(0x696d40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B696d42:{NFSU2_TR(0x696d42);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696d07u);}goto L696d07;}}
}
B696d44:L696d44:{c.instructions+=4;NFSU2_TR(0x696d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696d47:{NFSU2_TR(0x696d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696d4a:{NFSU2_TR(0x696d4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B696d4d:{NFSU2_TR(0x696d4d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696cfcu);}goto L696cfc;}}
}
B696d4f:L696d4f:{c.instructions+=1;NFSU2_TR(0x696d4f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c5eu);}goto L696c5e;}
}
B696d54:L696d54:{c.instructions+=6;NFSU2_TR(0x696d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696d57:{NFSU2_TR(0x696d57);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696d5b:{NFSU2_TR(0x696d5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B696d5e:{NFSU2_TR(0x696d5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696d60:{NFSU2_TR(0x696d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696d63:{NFSU2_TR(0x696d63);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696d68;}}
}
B696d65:L696d65:{c.instructions+=1;NFSU2_TR(0x696d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696d68:L696d68:{c.instructions+=3;NFSU2_TR(0x696d68);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B696d6c:{NFSU2_TR(0x696d6c);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B696d70:{NFSU2_TR(0x696d70);
if(r1(R+518)){{goto L696dd4;}}
}
B696d72:L696d72:{c.instructions+=4;NFSU2_TR(0x696d72);
__builtin_memmove((R+8),(R+28),4);
}
B696d74:{NFSU2_TR(0x696d74);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B696d76:{NFSU2_TR(0x696d76);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696d79:{NFSU2_TR(0x696d79);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c5eu);}goto L696c5e;}}
}
B696d7f:L696d7f:{c.instructions+=1;NFSU2_TR(0x696d7f);
w4(R+0,u32(r2(R+0)));
}
B696d82:L696d82:{c.instructions+=3;NFSU2_TR(0x696d82);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B696d84:{NFSU2_TR(0x696d84);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696d86:{NFSU2_TR(0x696d86);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696db5;}}
}
B696d88:L696d88:{c.instructions+=2;NFSU2_TR(0x696d88);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696d8b:{NFSU2_TR(0x696d8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696d91;}}
}
B696d8d:L696d8d:{c.instructions+=2;NFSU2_TR(0x696d8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B696d8f:{NFSU2_TR(0x696d8f);
{goto L696da7;}
}
B696d91:L696d91:{c.instructions+=8;NFSU2_TR(0x696d91);
__builtin_memmove((R+0),(R+28),4);
}
B696d93:{NFSU2_TR(0x696d93);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B696d96:{NFSU2_TR(0x696d96);
__builtin_memmove((R+12),(R+28),4);
}
B696d98:{NFSU2_TR(0x696d98);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B696d9b:{NFSU2_TR(0x696d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696d9e:{NFSU2_TR(0x696d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696da1:{NFSU2_TR(0x696da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B696da4:{NFSU2_TR(0x696da4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B696da7:L696da7:{c.instructions+=6;NFSU2_TR(0x696da7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B696da9:{NFSU2_TR(0x696da9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696dad:{NFSU2_TR(0x696dad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B696db0:{NFSU2_TR(0x696db0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B696db1:{NFSU2_TR(0x696db1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B696db3:{NFSU2_TR(0x696db3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696d88u);}goto L696d88;}}
}
B696db5:L696db5:{c.instructions+=3;NFSU2_TR(0x696db5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B696db6:{NFSU2_TR(0x696db6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B696db9:{NFSU2_TR(0x696db9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696d82u);}goto L696d82;}}
}
B696dbb:L696dbb:{c.instructions+=1;NFSU2_TR(0x696dbb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696c5eu);}goto L696c5e;}
}
B696dc0:L696dc0:{c.instructions+=6;NFSU2_TR(0x696dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696dc3:{NFSU2_TR(0x696dc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696dc7:{NFSU2_TR(0x696dc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B696dca:{NFSU2_TR(0x696dca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696dcc:{NFSU2_TR(0x696dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696dcf:{NFSU2_TR(0x696dcf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696dd4;}}
}
B696dd1:L696dd1:{c.instructions+=1;NFSU2_TR(0x696dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696dd4:L696dd4:{c.instructions+=3;NFSU2_TR(0x696dd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B696dd8:{NFSU2_TR(0x696dd8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B696ddc:{NFSU2_TR(0x696ddc);
if(r1(R+518)){{goto L696e65;}}
}
B696de2:L696de2:{c.instructions+=6;NFSU2_TR(0x696de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696de5:{NFSU2_TR(0x696de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696de8:{NFSU2_TR(0x696de8);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B696dec:{NFSU2_TR(0x696dec);
w4(R+0,u32(r2(R+0)));
}
B696def:{NFSU2_TR(0x696def);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696df0:{NFSU2_TR(0x696df0);
if(r1(R+518)){{goto L696e33;}}
}
B696df2:L696df2:{c.instructions+=2;NFSU2_TR(0x696df2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696df3:{NFSU2_TR(0x696df3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L696e5f;}}
}
B696df5:L696df5:{c.instructions+=9;NFSU2_TR(0x696df5);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B696df8:{NFSU2_TR(0x696df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696dfb:{NFSU2_TR(0x696dfb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B696e00:{NFSU2_TR(0x696e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696e03:{NFSU2_TR(0x696e03);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B696e06:{NFSU2_TR(0x696e06);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696e08:{NFSU2_TR(0x696e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696e0b:{NFSU2_TR(0x696e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696e0e:{NFSU2_TR(0x696e0e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696e2e;}}
}
B696e10:L696e10:{c.instructions+=3;NFSU2_TR(0x696e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696e13:{NFSU2_TR(0x696e13);
__builtin_memmove((R+8),(R+12),4);
}
B696e15:{NFSU2_TR(0x696e15);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B696e17:L696e17:{c.instructions+=9;NFSU2_TR(0x696e17);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B696e1a:{NFSU2_TR(0x696e1a);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B696e1d:{NFSU2_TR(0x696e1d);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B696e20:{NFSU2_TR(0x696e20);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B696e23:{NFSU2_TR(0x696e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696e26:{NFSU2_TR(0x696e26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B696e28:{NFSU2_TR(0x696e28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B696e2b:{NFSU2_TR(0x696e2b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B696e2c:{NFSU2_TR(0x696e2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696e17u);}goto L696e17;}}
}
B696e2e:L696e2e:{c.instructions+=2;NFSU2_TR(0x696e2e);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B696e31:{NFSU2_TR(0x696e31);
{goto L696e5f;}
}
B696e33:L696e33:{c.instructions+=2;NFSU2_TR(0x696e33);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696e35:{NFSU2_TR(0x696e35);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696e5f;}}
}
B696e37:L696e37:{c.instructions+=3;NFSU2_TR(0x696e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B696e3a:{NFSU2_TR(0x696e3a);
__builtin_memmove((R+28),(R+12),4);
}
B696e3c:{NFSU2_TR(0x696e3c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B696e3e:L696e3e:{c.instructions+=6;NFSU2_TR(0x696e3e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B696e44:{NFSU2_TR(0x696e44);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B696e47:{NFSU2_TR(0x696e47);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B696e49:{NFSU2_TR(0x696e49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B696e4b:{NFSU2_TR(0x696e4b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B696e4e:{NFSU2_TR(0x696e4e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L696e55;}}
}
B696e50:L696e50:{c.instructions+=3;NFSU2_TR(0x696e50);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B696e52:{NFSU2_TR(0x696e52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B696e53:{NFSU2_TR(0x696e53);
{goto L696e57;}
}
B696e55:L696e55:{c.instructions+=1;NFSU2_TR(0x696e55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B696e57:L696e57:{c.instructions+=4;NFSU2_TR(0x696e57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B696e59:{NFSU2_TR(0x696e59);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B696e5c:{NFSU2_TR(0x696e5c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B696e5d:{NFSU2_TR(0x696e5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696e3eu);}goto L696e3e;}}
}
B696e5f:L696e5f:{c.instructions+=2;NFSU2_TR(0x696e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696e62:{NFSU2_TR(0x696e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696e65:L696e65:{c.instructions+=4;NFSU2_TR(0x696e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696e68:{NFSU2_TR(0x696e68);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B696e6c:{NFSU2_TR(0x696e6c);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B696e6f:{NFSU2_TR(0x696e6f);
if(r1(R+518)){{goto L696f4c;}}
}
B696e75:L696e75:{c.instructions+=2;NFSU2_TR(0x696e75);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B696e79:{NFSU2_TR(0x696e79);
if(r1(R+518)){{goto L696e85;}}
}
B696e7b:L696e7b:{c.instructions+=3;NFSU2_TR(0x696e7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B696e7f:{NFSU2_TR(0x696e7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B696e83:{NFSU2_TR(0x696e83);
{goto L696e8d;}
}
B696e85:L696e85:{c.instructions+=2;NFSU2_TR(0x696e85);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B696e89:{NFSU2_TR(0x696e89);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B696e8d:L696e8d:{c.instructions+=2;NFSU2_TR(0x696e8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B696e90:{NFSU2_TR(0x696e90);
if(r1(R+518)){{goto L696f4c;}}
}
B696e96:L696e96:{c.instructions+=3;NFSU2_TR(0x696e96);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B696e9a:{NFSU2_TR(0x696e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B696ea1:{NFSU2_TR(0x696ea1);
if(r1(R+518)){{goto L696eaa;}}
}
B696ea3:L696ea3:{c.instructions+=1;NFSU2_TR(0x696ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B696eaa:L696eaa:{c.instructions+=6;NFSU2_TR(0x696eaa);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B696eae:{NFSU2_TR(0x696eae);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B696eb1:{NFSU2_TR(0x696eb1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B696eb4:{NFSU2_TR(0x696eb4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696eb6:{NFSU2_TR(0x696eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696eb9:{NFSU2_TR(0x696eb9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696f46;}}
}
B696ebf:L696ebf:{c.instructions+=13;NFSU2_TR(0x696ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696ec2:{NFSU2_TR(0x696ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B696ec9:{NFSU2_TR(0x696ec9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B696ecc:{NFSU2_TR(0x696ecc);
__builtin_memmove((R+0),(R+4),4);
}
B696ece:{NFSU2_TR(0x696ece);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B696ed1:{NFSU2_TR(0x696ed1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B696ed4:{NFSU2_TR(0x696ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B696ed7:{NFSU2_TR(0x696ed7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B696ed9:{NFSU2_TR(0x696ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B696edc:{NFSU2_TR(0x696edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B696edf:{NFSU2_TR(0x696edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696ee2:{NFSU2_TR(0x696ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696ee5:{NFSU2_TR(0x696ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696ee8:L696ee8:{c.instructions+=10;NFSU2_TR(0x696ee8);
__builtin_memmove((R+28),(R+24),4);
}
B696eea:{NFSU2_TR(0x696eea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B696eed:{NFSU2_TR(0x696eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B696ef0:{NFSU2_TR(0x696ef0);
__builtin_memmove((R+4),(R+8),4);
}
B696ef2:{NFSU2_TR(0x696ef2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B696ef5:{NFSU2_TR(0x696ef5);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B696ef7:{NFSU2_TR(0x696ef7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B696ef9:{NFSU2_TR(0x696ef9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696efb:{NFSU2_TR(0x696efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696efe:{NFSU2_TR(0x696efe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696f22;}}
}
B696f00:L696f00:{c.instructions+=1;NFSU2_TR(0x696f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696f03:L696f03:{c.instructions+=11;NFSU2_TR(0x696f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696f06:{NFSU2_TR(0x696f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696f09:{NFSU2_TR(0x696f09);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B696f0c:{NFSU2_TR(0x696f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696f0f:{NFSU2_TR(0x696f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696f12:{NFSU2_TR(0x696f12);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B696f15:{NFSU2_TR(0x696f15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696f18:{NFSU2_TR(0x696f18);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B696f1b:{NFSU2_TR(0x696f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696f1e:{NFSU2_TR(0x696f1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B696f20:{NFSU2_TR(0x696f20);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696f03u);}goto L696f03;}}
}
B696f22:L696f22:{c.instructions+=2;NFSU2_TR(0x696f22);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696f24:{NFSU2_TR(0x696f24);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696f41;}}
}
B696f26:L696f26:{c.instructions+=3;NFSU2_TR(0x696f26);
__builtin_memmove((R+4),(R+12),4);
}
B696f28:{NFSU2_TR(0x696f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696f2b:{NFSU2_TR(0x696f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696f2e:L696f2e:{c.instructions+=7;NFSU2_TR(0x696f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B696f32:{NFSU2_TR(0x696f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B696f35:{NFSU2_TR(0x696f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B696f37:{NFSU2_TR(0x696f37);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B696f3a:{NFSU2_TR(0x696f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696f3d:{NFSU2_TR(0x696f3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B696f3f:{NFSU2_TR(0x696f3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696f2eu);}goto L696f2e;}}
}
B696f41:L696f41:{c.instructions+=2;NFSU2_TR(0x696f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696f44:{NFSU2_TR(0x696f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x696ee8u);}goto L696ee8;}}
}
B696f46:L696f46:{c.instructions+=2;NFSU2_TR(0x696f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696f49:{NFSU2_TR(0x696f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696f4c:L696f4c:{c.instructions+=6;NFSU2_TR(0x696f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696f4f:{NFSU2_TR(0x696f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696f52:{NFSU2_TR(0x696f52);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B696f56:{NFSU2_TR(0x696f56);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B696f5a:{NFSU2_TR(0x696f5a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B696f5c:{NFSU2_TR(0x696f5c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696f60;}}
}
B696f5e:L696f5e:{c.instructions+=1;NFSU2_TR(0x696f5e);
__builtin_memmove((R+0),(R+8),4);
}
B696f60:L696f60:{c.instructions+=8;NFSU2_TR(0x696f60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696f61:{NFSU2_TR(0x696f61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696f64:{NFSU2_TR(0x696f64);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696f68:{NFSU2_TR(0x696f68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696f6b:{NFSU2_TR(0x696f6b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B696f6e:{NFSU2_TR(0x696f6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696f6f:{NFSU2_TR(0x696f6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B696f72:{NFSU2_TR(0x696f72);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x696f75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B696f75:L696f75:{c.instructions+=2;NFSU2_TR(0x696f75);
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
B696f77:{NFSU2_TR(0x696f77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L696f7b;}}
}
B696f79:L696f79:{c.instructions+=1;NFSU2_TR(0x696f79);
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
B696f7b:L696f7b:{c.instructions+=5;NFSU2_TR(0x696f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B696f7c:{NFSU2_TR(0x696f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B696f7d:{NFSU2_TR(0x696f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B696f7e:{NFSU2_TR(0x696f7e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B696f7f:{NFSU2_TR(0x696f7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B696f82:L696f82:{c.instructions+=15;NFSU2_TR(0x696f82);
__builtin_memmove((R+28),(R+28),4);
}
B696f84:{NFSU2_TR(0x696f84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696f85:{NFSU2_TR(0x696f85);
__builtin_memmove((R+20),(R+16),4);
}
B696f87:{NFSU2_TR(0x696f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B696f8a:{NFSU2_TR(0x696f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696f8d:{NFSU2_TR(0x696f8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696f8e:{NFSU2_TR(0x696f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B696f91:{NFSU2_TR(0x696f91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696f92:{NFSU2_TR(0x696f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B696f95:{NFSU2_TR(0x696f95);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B696f98:{NFSU2_TR(0x696f98);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696f9a:{NFSU2_TR(0x696f9a);
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696f9c:{NFSU2_TR(0x696f9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B696f9d:{NFSU2_TR(0x696f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696fa0:{NFSU2_TR(0x696fa0);
if(r1(R+518)){TAIL_STATIC(0x6971dcu,697);}
}
B696fa6:L696fa6:{c.instructions+=2;NFSU2_TR(0x696fa6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696fa7:{NFSU2_TR(0x696fa7);
if(r1(R+518)){TAIL_STATIC(0x697172u,697);}
}
B696fad:L696fad:{c.instructions+=2;NFSU2_TR(0x696fad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696fae:{NFSU2_TR(0x696fae);
if(r1(R+518)){TAIL_STATIC(0x697101u,697);}
}
B696fb4:L696fb4:{c.instructions+=2;NFSU2_TR(0x696fb4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B696fb5:{NFSU2_TR(0x696fb5);
if(r1(R+518)){TAIL_STATIC(0x697087u,697);}
}
B696fbb:L696fbb:{c.instructions+=3;NFSU2_TR(0x696fbb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B696fbc:{NFSU2_TR(0x696fbc);
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
B696fbd:{NFSU2_TR(0x696fbd);
if(r1(R+518)){{goto L696fc9;}}
}
B696fbf:L696fbf:{c.instructions+=2;NFSU2_TR(0x696fbf);
w4(R+0,u32(0x80004001ull));
}
B696fc4:{NFSU2_TR(0x696fc4);
TAIL_STATIC(0x6973b5u,697);
}
B696fc9:L696fc9:{c.instructions+=9;NFSU2_TR(0x696fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B696fcc:{NFSU2_TR(0x696fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B696fcf:{NFSU2_TR(0x696fcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B696fd2:{NFSU2_TR(0x696fd2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B696fd4:{NFSU2_TR(0x696fd4);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696fd4);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x696fd4);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B696fd6:{NFSU2_TR(0x696fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696fd9:{NFSU2_TR(0x696fd9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B696fdd:{NFSU2_TR(0x696fdd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B696fe0:{NFSU2_TR(0x696fe0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L696fe5;}}
}
B696fe2:L696fe2:{c.instructions+=1;NFSU2_TR(0x696fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696fe5:L696fe5:{c.instructions+=6;NFSU2_TR(0x696fe5);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B696fe9:{NFSU2_TR(0x696fe9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B696feb:{NFSU2_TR(0x696feb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B696fed:{NFSU2_TR(0x696fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B696ff0:{NFSU2_TR(0x696ff0);
__builtin_memmove((R+8),(R+12),4);
}
B696ff2:{NFSU2_TR(0x696ff2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69701du,697);}
}
B696ff4:L696ff4:{c.instructions+=5;NFSU2_TR(0x696ff4);
__builtin_memmove((R+0),(R+28),4);
}
B696ff6:{NFSU2_TR(0x696ff6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B696ff9:{NFSU2_TR(0x696ff9);
__builtin_memmove((R+4),(R+0),4);
}
B696ffb:{NFSU2_TR(0x696ffb);
__builtin_memmove((R+12),(R+28),4);
}
B696ffd:{NFSU2_TR(0x696ffd);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
TAIL_STATIC(0x697000u,697);
}
XIT:NFSU2_TR_EXIT(0x696,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
