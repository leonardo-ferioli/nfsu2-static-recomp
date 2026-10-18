#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65f(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_662(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x663,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x663,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_663(u8* __restrict R,Cpu& c);
u32 page_663(Cpu& c){return body_663(c.regs.data(),c);}
__attribute__((noinline)) u32 body_663(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x663002:goto L663002;
case 0x663005:c.instructions+=6;goto B663005;
case 0x663009:c.instructions+=5;goto B663009;
case 0x66300d:c.instructions+=4;goto B66300d;
case 0x66300f:c.instructions+=3;goto B66300f;
case 0x663012:c.instructions+=2;goto B663012;
case 0x663015:c.instructions+=1;goto B663015;
case 0x663017:goto L663017;
case 0x663019:c.instructions+=2;goto B663019;
case 0x66301b:c.instructions+=1;goto B66301b;
case 0x66301d:goto L66301d;
case 0x663020:c.instructions+=1;goto B663020;
case 0x663022:goto L663022;
case 0x663025:goto L663025;
case 0x663027:c.instructions+=1;goto B663027;
case 0x663029:goto L663029;
case 0x66302b:c.instructions+=2;goto B66302b;
case 0x66302e:c.instructions+=1;goto B66302e;
case 0x663030:goto L663030;
case 0x663032:goto L663032;
case 0x663034:c.instructions+=5;goto B663034;
case 0x663037:c.instructions+=4;goto B663037;
case 0x66303a:c.instructions+=3;goto B66303a;
case 0x66303b:c.instructions+=2;goto B66303b;
case 0x66303e:c.instructions+=1;goto B66303e;
case 0x663040:goto L663040;
case 0x663043:c.instructions+=5;goto B663043;
case 0x663044:c.instructions+=4;goto B663044;
case 0x663045:c.instructions+=3;goto B663045;
case 0x663048:c.instructions+=2;goto B663048;
case 0x66304b:c.instructions+=1;goto B66304b;
case 0x66304d:goto L66304d;
case 0x663051:c.instructions+=4;goto B663051;
case 0x663054:c.instructions+=3;goto B663054;
case 0x663057:c.instructions+=2;goto B663057;
case 0x66305a:c.instructions+=1;goto B66305a;
case 0x66305c:goto L66305c;
case 0x66305e:c.instructions+=1;goto B66305e;
case 0x663063:goto L663063;
case 0x663067:c.instructions+=3;goto B663067;
case 0x66306b:c.instructions+=2;goto B66306b;
case 0x66306e:c.instructions+=1;goto B66306e;
case 0x663074:goto L663074;
case 0x663076:c.instructions+=2;goto B663076;
case 0x663078:c.instructions+=1;goto B663078;
case 0x66307e:goto L66307e;
case 0x663081:c.instructions+=1;goto B663081;
case 0x663083:goto L663083;
case 0x663085:c.instructions+=2;goto B663085;
case 0x663087:c.instructions+=1;goto B663087;
case 0x663089:goto L663089;
case 0x66308c:c.instructions+=1;goto B66308c;
case 0x66308e:goto L66308e;
case 0x663090:c.instructions+=1;goto B663090;
case 0x663093:goto L663093;
case 0x663096:c.instructions+=6;goto B663096;
case 0x663099:c.instructions+=5;goto B663099;
case 0x66309c:c.instructions+=4;goto B66309c;
case 0x66309f:c.instructions+=3;goto B66309f;
case 0x6630a0:c.instructions+=2;goto B6630a0;
case 0x6630a3:c.instructions+=1;goto B6630a3;
case 0x6630a5:goto L6630a5;
case 0x6630a8:c.instructions+=4;goto B6630a8;
case 0x6630a9:c.instructions+=3;goto B6630a9;
case 0x6630aa:c.instructions+=2;goto B6630aa;
case 0x6630ad:c.instructions+=1;goto B6630ad;
case 0x6630af:goto L6630af;
case 0x6630b2:c.instructions+=3;goto B6630b2;
case 0x6630b5:c.instructions+=2;goto B6630b5;
case 0x6630b8:c.instructions+=1;goto B6630b8;
case 0x6630ba:goto L6630ba;
case 0x6630bf:goto L6630bf;
case 0x6630c3:c.instructions+=3;goto B6630c3;
case 0x6630c7:c.instructions+=2;goto B6630c7;
case 0x6630ca:c.instructions+=1;goto B6630ca;
case 0x6630d0:goto L6630d0;
case 0x6630d2:c.instructions+=2;goto B6630d2;
case 0x6630d4:c.instructions+=1;goto B6630d4;
case 0x6630da:goto L6630da;
case 0x6630dd:c.instructions+=1;goto B6630dd;
case 0x6630df:goto L6630df;
case 0x6630e1:c.instructions+=2;goto B6630e1;
case 0x6630e3:c.instructions+=1;goto B6630e3;
case 0x6630e5:goto L6630e5;
case 0x6630e8:c.instructions+=1;goto B6630e8;
case 0x6630ea:goto L6630ea;
case 0x6630ec:c.instructions+=1;goto B6630ec;
case 0x6630ef:goto L6630ef;
case 0x6630f2:c.instructions+=6;goto B6630f2;
case 0x6630f5:c.instructions+=5;goto B6630f5;
case 0x6630f8:c.instructions+=4;goto B6630f8;
case 0x6630fb:c.instructions+=3;goto B6630fb;
case 0x6630fc:c.instructions+=2;goto B6630fc;
case 0x6630ff:c.instructions+=1;goto B6630ff;
case 0x663101:goto L663101;
case 0x663104:c.instructions+=4;goto B663104;
case 0x663105:c.instructions+=3;goto B663105;
case 0x663106:c.instructions+=2;goto B663106;
case 0x663109:c.instructions+=1;goto B663109;
case 0x66310b:goto L66310b;
case 0x66310e:c.instructions+=3;goto B66310e;
case 0x663111:c.instructions+=2;goto B663111;
case 0x663114:c.instructions+=1;goto B663114;
case 0x663116:goto L663116;
case 0x66311b:goto L66311b;
case 0x66311e:c.instructions+=8;goto B66311e;
case 0x663121:c.instructions+=7;goto B663121;
case 0x663123:c.instructions+=6;goto B663123;
case 0x663125:c.instructions+=5;goto B663125;
case 0x663128:c.instructions+=4;goto B663128;
case 0x66312b:c.instructions+=3;goto B66312b;
case 0x66312e:c.instructions+=2;goto B66312e;
case 0x663131:c.instructions+=1;goto B663131;
case 0x663133:goto L663133;
case 0x663135:c.instructions+=4;goto B663135;
case 0x663136:c.instructions+=3;goto B663136;
case 0x663138:c.instructions+=2;goto B663138;
case 0x66313b:c.instructions+=1;goto B66313b;
case 0x66313e:goto L66313e;
case 0x66313f:c.instructions+=1;goto B66313f;
case 0x663145:goto L663145;
case 0x663146:c.instructions+=1;goto B663146;
case 0x663148:goto L663148;
case 0x663149:c.instructions+=1;goto B663149;
case 0x66314f:goto L66314f;
case 0x663152:c.instructions+=4;goto B663152;
case 0x663155:c.instructions+=3;goto B663155;
case 0x663157:c.instructions+=2;goto B663157;
case 0x66315a:c.instructions+=1;goto B66315a;
case 0x663160:goto L663160;
case 0x663162:c.instructions+=1;goto B663162;
case 0x663168:goto L663168;
case 0x66316a:c.instructions+=2;goto B66316a;
case 0x66316c:c.instructions+=1;goto B66316c;
case 0x66316e:goto L66316e;
case 0x663170:c.instructions+=1;goto B663170;
case 0x663172:goto L663172;
case 0x663174:c.instructions+=13;goto B663174;
case 0x663177:c.instructions+=12;goto B663177;
case 0x663179:c.instructions+=11;goto B663179;
case 0x66317c:c.instructions+=10;goto B66317c;
case 0x66317f:c.instructions+=9;goto B66317f;
case 0x663180:c.instructions+=8;goto B663180;
case 0x663183:c.instructions+=7;goto B663183;
case 0x663184:c.instructions+=6;goto B663184;
case 0x663186:c.instructions+=5;goto B663186;
case 0x663189:c.instructions+=4;goto B663189;
case 0x66318c:c.instructions+=3;goto B66318c;
case 0x66318f:c.instructions+=2;goto B66318f;
case 0x663192:c.instructions+=1;goto B663192;
case 0x663194:goto L663194;
case 0x663197:c.instructions+=4;goto B663197;
case 0x663198:c.instructions+=3;goto B663198;
case 0x66319b:c.instructions+=2;goto B66319b;
case 0x66319e:c.instructions+=1;goto B66319e;
case 0x6631a0:goto L6631a0;
case 0x6631a5:goto L6631a5;
case 0x6631a8:c.instructions+=5;goto B6631a8;
case 0x6631ab:c.instructions+=4;goto B6631ab;
case 0x6631ae:c.instructions+=3;goto B6631ae;
case 0x6631b0:c.instructions+=2;goto B6631b0;
case 0x6631b3:c.instructions+=1;goto B6631b3;
case 0x6631b9:goto L6631b9;
case 0x6631bb:c.instructions+=1;goto B6631bb;
case 0x6631c1:goto L6631c1;
case 0x6631c3:c.instructions+=2;goto B6631c3;
case 0x6631c5:c.instructions+=1;goto B6631c5;
case 0x6631c7:goto L6631c7;
case 0x6631c9:c.instructions+=1;goto B6631c9;
case 0x6631cb:goto L6631cb;
case 0x6631cd:c.instructions+=2;goto B6631cd;
case 0x6631d0:c.instructions+=1;goto B6631d0;
case 0x6631d2:goto L6631d2;
case 0x6631d5:c.instructions+=4;goto B6631d5;
case 0x6631d8:c.instructions+=3;goto B6631d8;
case 0x6631d9:c.instructions+=2;goto B6631d9;
case 0x6631dc:c.instructions+=1;goto B6631dc;
case 0x6631de:goto L6631de;
case 0x6631e1:c.instructions+=6;goto B6631e1;
case 0x6631e4:c.instructions+=5;goto B6631e4;
case 0x6631e7:c.instructions+=4;goto B6631e7;
case 0x6631e8:c.instructions+=3;goto B6631e8;
case 0x6631e9:c.instructions+=2;goto B6631e9;
case 0x6631eb:c.instructions+=1;goto B6631eb;
case 0x6631ed:goto L6631ed;
case 0x6631f0:c.instructions+=5;goto B6631f0;
case 0x6631f3:c.instructions+=4;goto B6631f3;
case 0x6631f6:c.instructions+=3;goto B6631f6;
case 0x6631f9:c.instructions+=2;goto B6631f9;
case 0x6631fc:c.instructions+=1;goto B6631fc;
case 0x6631fe:goto L6631fe;
case 0x663200:goto L663200;
case 0x663203:c.instructions+=5;goto B663203;
case 0x663206:c.instructions+=4;goto B663206;
case 0x663209:c.instructions+=3;goto B663209;
case 0x66320b:c.instructions+=2;goto B66320b;
case 0x66320e:c.instructions+=1;goto B66320e;
case 0x663210:goto L663210;
case 0x663212:c.instructions+=1;goto B663212;
case 0x663214:goto L663214;
case 0x663216:c.instructions+=2;goto B663216;
case 0x663218:c.instructions+=1;goto B663218;
case 0x66321a:goto L66321a;
case 0x66321c:c.instructions+=1;goto B66321c;
case 0x66321e:goto L66321e;
case 0x663220:c.instructions+=2;goto B663220;
case 0x663223:c.instructions+=1;goto B663223;
case 0x663225:goto L663225;
case 0x663228:c.instructions+=4;goto B663228;
case 0x66322b:c.instructions+=3;goto B66322b;
case 0x66322c:c.instructions+=2;goto B66322c;
case 0x66322f:c.instructions+=1;goto B66322f;
case 0x663231:goto L663231;
case 0x663234:c.instructions+=6;goto B663234;
case 0x663237:c.instructions+=5;goto B663237;
case 0x66323a:c.instructions+=4;goto B66323a;
case 0x66323b:c.instructions+=3;goto B66323b;
case 0x66323c:c.instructions+=2;goto B66323c;
case 0x66323e:c.instructions+=1;goto B66323e;
case 0x663240:goto L663240;
case 0x663243:c.instructions+=5;goto B663243;
case 0x663246:c.instructions+=4;goto B663246;
case 0x663249:c.instructions+=3;goto B663249;
case 0x66324c:c.instructions+=2;goto B66324c;
case 0x66324f:c.instructions+=1;goto B66324f;
case 0x663251:goto L663251;
case 0x663253:goto L663253;
case 0x663256:c.instructions+=8;goto B663256;
case 0x663259:c.instructions+=7;goto B663259;
case 0x66325a:c.instructions+=6;goto B66325a;
case 0x66325d:c.instructions+=5;goto B66325d;
case 0x66325e:c.instructions+=4;goto B66325e;
case 0x663260:c.instructions+=3;goto B663260;
case 0x663261:c.instructions+=2;goto B663261;
case 0x663262:c.instructions+=1;goto B663262;
case 0x663265:goto L663265;
case 0x663267:c.instructions+=16;goto B663267;
case 0x663268:c.instructions+=15;goto B663268;
case 0x66326a:c.instructions+=14;goto B66326a;
case 0x66326d:c.instructions+=13;goto B66326d;
case 0x663270:c.instructions+=12;goto B663270;
case 0x663273:c.instructions+=11;goto B663273;
case 0x663275:c.instructions+=10;goto B663275;
case 0x663276:c.instructions+=9;goto B663276;
case 0x663279:c.instructions+=8;goto B663279;
case 0x66327b:c.instructions+=7;goto B66327b;
case 0x66327e:c.instructions+=6;goto B66327e;
case 0x663281:c.instructions+=5;goto B663281;
case 0x663282:c.instructions+=4;goto B663282;
case 0x663283:c.instructions+=3;goto B663283;
case 0x663286:c.instructions+=2;goto B663286;
case 0x663289:c.instructions+=1;goto B663289;
case 0x66328b:goto L66328b;
case 0x66328e:c.instructions+=2;goto B66328e;
case 0x663291:c.instructions+=1;goto B663291;
case 0x663293:goto L663293;
case 0x663295:goto L663295;
case 0x663297:c.instructions+=1;goto B663297;
case 0x663299:goto L663299;
case 0x66329c:c.instructions+=2;goto B66329c;
case 0x66329f:c.instructions+=1;goto B66329f;
case 0x6632a1:goto L6632a1;
case 0x6632a4:c.instructions+=1;goto B6632a4;
case 0x6632a7:goto L6632a7;
case 0x6632aa:c.instructions+=2;goto B6632aa;
case 0x6632ad:c.instructions+=1;goto B6632ad;
case 0x6632af:goto L6632af;
case 0x6632b2:c.instructions+=1;goto B6632b2;
case 0x6632b4:goto L6632b4;
case 0x6632b7:c.instructions+=3;goto B6632b7;
case 0x6632b9:c.instructions+=2;goto B6632b9;
case 0x6632bc:c.instructions+=1;goto B6632bc;
case 0x6632be:goto L6632be;
case 0x6632c5:goto L6632c5;
case 0x6632c7:c.instructions+=1;goto B6632c7;
case 0x6632cd:goto L6632cd;
case 0x6632d0:c.instructions+=1;goto B6632d0;
case 0x6632d6:goto L6632d6;
case 0x6632d9:c.instructions+=1;goto B6632d9;
case 0x6632df:goto L6632df;
case 0x6632e2:c.instructions+=1;goto B6632e2;
case 0x6632e8:goto L6632e8;
case 0x6632eb:c.instructions+=1;goto B6632eb;
case 0x6632f1:goto L6632f1;
case 0x6632f3:c.instructions+=3;goto B6632f3;
case 0x6632f5:c.instructions+=2;goto B6632f5;
case 0x6632f8:c.instructions+=1;goto B6632f8;
case 0x6632fa:goto L6632fa;
case 0x6632fd:c.instructions+=2;goto B6632fd;
case 0x6632ff:c.instructions+=1;goto B6632ff;
case 0x663302:goto L663302;
case 0x663305:c.instructions+=5;goto B663305;
case 0x663308:c.instructions+=4;goto B663308;
case 0x66330b:c.instructions+=3;goto B66330b;
case 0x66330e:c.instructions+=2;goto B66330e;
case 0x663311:c.instructions+=1;goto B663311;
case 0x663317:goto L663317;
case 0x66331b:c.instructions+=1;goto B66331b;
case 0x663321:goto L663321;
case 0x663324:c.instructions+=4;goto B663324;
case 0x663326:c.instructions+=3;goto B663326;
case 0x663328:c.instructions+=2;goto B663328;
case 0x66332b:c.instructions+=1;goto B66332b;
case 0x66332d:goto L66332d;
case 0x663330:c.instructions+=1;goto B663330;
case 0x663333:goto L663333;
case 0x663337:c.instructions+=1;goto B663337;
case 0x663339:goto L663339;
case 0x66333d:c.instructions+=1;goto B66333d;
case 0x66333f:goto L66333f;
case 0x663341:c.instructions+=1;goto B663341;
case 0x663344:goto L663344;
case 0x663346:c.instructions+=11;goto B663346;
case 0x663349:c.instructions+=10;goto B663349;
case 0x66334a:c.instructions+=9;goto B66334a;
case 0x66334d:c.instructions+=8;goto B66334d;
case 0x663350:c.instructions+=7;goto B663350;
case 0x663353:c.instructions+=6;goto B663353;
case 0x663354:c.instructions+=5;goto B663354;
case 0x663357:c.instructions+=4;goto B663357;
case 0x663358:c.instructions+=3;goto B663358;
case 0x66335b:c.instructions+=2;goto B66335b;
case 0x66335c:c.instructions+=1;goto B66335c;
case 0x663361:goto L663361;
case 0x663364:c.instructions+=4;goto B663364;
case 0x663365:c.instructions+=3;goto B663365;
case 0x663368:c.instructions+=2;goto B663368;
case 0x66336a:c.instructions+=1;goto B66336a;
case 0x66336c:goto L66336c;
case 0x66336f:c.instructions+=3;goto B66336f;
case 0x663372:c.instructions+=2;goto B663372;
case 0x663375:c.instructions+=1;goto B663375;
case 0x663377:goto L663377;
case 0x66337c:goto L66337c;
case 0x66337f:c.instructions+=3;goto B66337f;
case 0x663381:c.instructions+=2;goto B663381;
case 0x663382:c.instructions+=1;goto B663382;
case 0x663388:goto L663388;
case 0x663389:c.instructions+=1;goto B663389;
case 0x66338b:goto L66338b;
case 0x66338c:c.instructions+=1;goto B66338c;
case 0x663392:goto L663392;
case 0x663395:c.instructions+=5;goto B663395;
case 0x663397:c.instructions+=4;goto B663397;
case 0x66339a:c.instructions+=3;goto B66339a;
case 0x66339c:c.instructions+=2;goto B66339c;
case 0x66339f:c.instructions+=1;goto B66339f;
case 0x6633a5:goto L6633a5;
case 0x6633a7:c.instructions+=1;goto B6633a7;
case 0x6633ad:goto L6633ad;
case 0x6633af:c.instructions+=2;goto B6633af;
case 0x6633b1:c.instructions+=1;goto B6633b1;
case 0x6633b3:goto L6633b3;
case 0x6633b5:c.instructions+=1;goto B6633b5;
case 0x6633b7:goto L6633b7;
case 0x6633ba:c.instructions+=6;goto B6633ba;
case 0x6633bc:c.instructions+=5;goto B6633bc;
case 0x6633bf:c.instructions+=4;goto B6633bf;
case 0x6633c0:c.instructions+=3;goto B6633c0;
case 0x6633c1:c.instructions+=2;goto B6633c1;
case 0x6633c3:c.instructions+=1;goto B6633c3;
case 0x6633c5:goto L6633c5;
case 0x6633c8:c.instructions+=3;goto B6633c8;
case 0x6633c9:c.instructions+=2;goto B6633c9;
case 0x6633cc:c.instructions+=1;goto B6633cc;
case 0x6633ce:goto L6633ce;
case 0x6633d3:goto L6633d3;
case 0x6633d6:c.instructions+=3;goto B6633d6;
case 0x6633d8:c.instructions+=2;goto B6633d8;
case 0x6633db:c.instructions+=1;goto B6633db;
case 0x6633e1:goto L6633e1;
case 0x6633e3:c.instructions+=1;goto B6633e3;
case 0x6633e9:goto L6633e9;
case 0x6633eb:c.instructions+=2;goto B6633eb;
case 0x6633ed:c.instructions+=1;goto B6633ed;
case 0x6633ef:goto L6633ef;
case 0x6633f1:c.instructions+=1;goto B6633f1;
case 0x6633f3:goto L6633f3;
case 0x6633f6:c.instructions+=7;goto B6633f6;
case 0x6633f9:c.instructions+=6;goto B6633f9;
case 0x6633fb:c.instructions+=5;goto B6633fb;
case 0x6633fe:c.instructions+=4;goto B6633fe;
case 0x6633ff:c.instructions+=3;goto B6633ff;
case 0x663400:c.instructions+=2;goto B663400;
case 0x663402:c.instructions+=1;goto B663402;
case 0x663404:goto L663404;
case 0x663405:c.instructions+=2;goto B663405;
case 0x663408:c.instructions+=1;goto B663408;
case 0x66340a:goto L66340a;
case 0x66340f:goto L66340f;
case 0x663412:c.instructions+=3;goto B663412;
case 0x663414:c.instructions+=2;goto B663414;
case 0x663417:c.instructions+=1;goto B663417;
case 0x66341d:goto L66341d;
case 0x66341f:c.instructions+=1;goto B66341f;
case 0x663425:goto L663425;
case 0x663427:c.instructions+=2;goto B663427;
case 0x663429:c.instructions+=1;goto B663429;
case 0x66342b:goto L66342b;
case 0x66342d:c.instructions+=1;goto B66342d;
case 0x66342f:goto L66342f;
case 0x663432:c.instructions+=7;goto B663432;
case 0x663435:c.instructions+=6;goto B663435;
case 0x663437:c.instructions+=5;goto B663437;
case 0x66343a:c.instructions+=4;goto B66343a;
case 0x66343b:c.instructions+=3;goto B66343b;
case 0x66343c:c.instructions+=2;goto B66343c;
case 0x66343e:c.instructions+=1;goto B66343e;
case 0x663440:goto L663440;
case 0x663441:c.instructions+=2;goto B663441;
case 0x663444:c.instructions+=1;goto B663444;
case 0x663446:goto L663446;
case 0x66344b:goto L66344b;
case 0x66344e:c.instructions+=6;goto B66344e;
case 0x663450:c.instructions+=5;goto B663450;
case 0x663452:c.instructions+=4;goto B663452;
case 0x663455:c.instructions+=3;goto B663455;
case 0x663458:c.instructions+=2;goto B663458;
case 0x66345b:c.instructions+=1;goto B66345b;
case 0x66345d:goto L66345d;
case 0x66345f:c.instructions+=4;goto B66345f;
case 0x663460:c.instructions+=3;goto B663460;
case 0x663462:c.instructions+=2;goto B663462;
case 0x663465:c.instructions+=1;goto B663465;
case 0x663468:goto L663468;
case 0x663469:c.instructions+=1;goto B663469;
case 0x66346f:goto L66346f;
case 0x663470:c.instructions+=1;goto B663470;
case 0x663472:goto L663472;
case 0x663473:c.instructions+=1;goto B663473;
case 0x663479:goto L663479;
case 0x66347c:c.instructions+=4;goto B66347c;
case 0x66347f:c.instructions+=3;goto B66347f;
case 0x663481:c.instructions+=2;goto B663481;
case 0x663484:c.instructions+=1;goto B663484;
case 0x66348a:goto L66348a;
case 0x66348c:c.instructions+=1;goto B66348c;
case 0x663492:goto L663492;
case 0x663494:c.instructions+=2;goto B663494;
case 0x663497:c.instructions+=1;goto B663497;
case 0x663499:goto L663499;
case 0x66349b:c.instructions+=1;goto B66349b;
case 0x66349d:goto L66349d;
case 0x66349f:c.instructions+=14;goto B66349f;
case 0x6634a2:c.instructions+=13;goto B6634a2;
case 0x6634a4:c.instructions+=12;goto B6634a4;
case 0x6634a7:c.instructions+=11;goto B6634a7;
case 0x6634aa:c.instructions+=10;goto B6634aa;
case 0x6634ab:c.instructions+=9;goto B6634ab;
case 0x6634ad:c.instructions+=8;goto B6634ad;
case 0x6634ae:c.instructions+=7;goto B6634ae;
case 0x6634b1:c.instructions+=6;goto B6634b1;
case 0x6634b4:c.instructions+=5;goto B6634b4;
case 0x6634b7:c.instructions+=4;goto B6634b7;
case 0x6634ba:c.instructions+=3;goto B6634ba;
case 0x6634bd:c.instructions+=2;goto B6634bd;
case 0x6634bf:c.instructions+=1;goto B6634bf;
case 0x6634c1:goto L6634c1;
case 0x6634c4:c.instructions+=4;goto B6634c4;
case 0x6634c5:c.instructions+=3;goto B6634c5;
case 0x6634c8:c.instructions+=2;goto B6634c8;
case 0x6634cb:c.instructions+=1;goto B6634cb;
case 0x6634cd:goto L6634cd;
case 0x6634d2:goto L6634d2;
case 0x6634d6:c.instructions+=5;goto B6634d6;
case 0x6634da:c.instructions+=4;goto B6634da;
case 0x6634dd:c.instructions+=3;goto B6634dd;
case 0x6634df:c.instructions+=2;goto B6634df;
case 0x6634e2:c.instructions+=1;goto B6634e2;
case 0x6634e4:goto L6634e4;
case 0x6634e6:goto L6634e6;
case 0x6634e9:goto L6634e9;
case 0x6634eb:c.instructions+=1;goto B6634eb;
case 0x6634ed:goto L6634ed;
case 0x6634ef:c.instructions+=2;goto B6634ef;
case 0x6634f1:c.instructions+=1;goto B6634f1;
case 0x6634f3:goto L6634f3;
case 0x6634f5:c.instructions+=1;goto B6634f5;
case 0x6634f7:goto L6634f7;
case 0x6634f9:c.instructions+=7;goto B6634f9;
case 0x6634fc:c.instructions+=6;goto B6634fc;
case 0x6634fe:c.instructions+=5;goto B6634fe;
case 0x663501:c.instructions+=4;goto B663501;
case 0x663502:c.instructions+=3;goto B663502;
case 0x663503:c.instructions+=2;goto B663503;
case 0x663505:c.instructions+=1;goto B663505;
case 0x663507:goto L663507;
case 0x66350a:c.instructions+=4;goto B66350a;
case 0x66350d:c.instructions+=3;goto B66350d;
case 0x663510:c.instructions+=2;goto B663510;
case 0x663513:c.instructions+=1;goto B663513;
case 0x663515:goto L663515;
case 0x663517:goto L663517;
case 0x66351b:c.instructions+=5;goto B66351b;
case 0x66351f:c.instructions+=4;goto B66351f;
case 0x663522:c.instructions+=3;goto B663522;
case 0x663524:c.instructions+=2;goto B663524;
case 0x663527:c.instructions+=1;goto B663527;
case 0x663529:goto L663529;
case 0x66352b:goto L66352b;
case 0x66352e:goto L66352e;
case 0x663530:c.instructions+=1;goto B663530;
case 0x663532:goto L663532;
case 0x663534:c.instructions+=2;goto B663534;
case 0x663536:c.instructions+=1;goto B663536;
case 0x663538:goto L663538;
case 0x66353a:c.instructions+=1;goto B66353a;
case 0x66353c:goto L66353c;
case 0x66353e:c.instructions+=7;goto B66353e;
case 0x663541:c.instructions+=6;goto B663541;
case 0x663543:c.instructions+=5;goto B663543;
case 0x663546:c.instructions+=4;goto B663546;
case 0x663547:c.instructions+=3;goto B663547;
case 0x663548:c.instructions+=2;goto B663548;
case 0x66354a:c.instructions+=1;goto B66354a;
case 0x66354c:goto L66354c;
case 0x66354f:c.instructions+=4;goto B66354f;
case 0x663552:c.instructions+=3;goto B663552;
case 0x663555:c.instructions+=2;goto B663555;
case 0x663558:c.instructions+=1;goto B663558;
case 0x66355a:goto L66355a;
case 0x66355c:goto L66355c;
case 0x66355f:c.instructions+=8;goto B66355f;
case 0x663562:c.instructions+=7;goto B663562;
case 0x663563:c.instructions+=6;goto B663563;
case 0x663566:c.instructions+=5;goto B663566;
case 0x663567:c.instructions+=4;goto B663567;
case 0x663569:c.instructions+=3;goto B663569;
case 0x66356a:c.instructions+=2;goto B66356a;
case 0x66356b:c.instructions+=1;goto B66356b;
case 0x66356e:goto L66356e;
case 0x663570:c.instructions+=17;goto B663570;
case 0x663571:c.instructions+=16;goto B663571;
case 0x663573:c.instructions+=15;goto B663573;
case 0x663576:c.instructions+=14;goto B663576;
case 0x663577:c.instructions+=13;goto B663577;
case 0x663578:c.instructions+=12;goto B663578;
case 0x66357a:c.instructions+=11;goto B66357a;
case 0x66357e:c.instructions+=10;goto B66357e;
case 0x663584:c.instructions+=9;goto B663584;
case 0x66358a:c.instructions+=8;goto B66358a;
case 0x66358c:c.instructions+=7;goto B66358c;
case 0x663593:c.instructions+=6;goto B663593;
case 0x66359a:c.instructions+=5;goto B66359a;
case 0x66359b:c.instructions+=4;goto B66359b;
case 0x66359e:c.instructions+=3;goto B66359e;
case 0x6635a1:c.instructions+=2;goto B6635a1;
case 0x6635a4:c.instructions+=1;goto B6635a4;
case 0x6635a6:goto L6635a6;
case 0x6635a9:c.instructions+=2;goto B6635a9;
case 0x6635ac:c.instructions+=1;goto B6635ac;
case 0x6635af:goto L6635af;
case 0x6635b2:c.instructions+=3;goto B6635b2;
case 0x6635b4:c.instructions+=2;goto B6635b4;
case 0x6635b5:c.instructions+=1;goto B6635b5;
case 0x6635bb:goto L6635bb;
case 0x6635bd:c.instructions+=2;goto B6635bd;
case 0x6635bf:c.instructions+=1;goto B6635bf;
case 0x6635c5:goto L6635c5;
case 0x6635c7:c.instructions+=1;goto B6635c7;
case 0x6635cc:goto L6635cc;
case 0x6635cf:c.instructions+=3;goto B6635cf;
case 0x6635d1:c.instructions+=2;goto B6635d1;
case 0x6635d4:c.instructions+=1;goto B6635d4;
case 0x6635d9:goto L6635d9;
case 0x6635da:c.instructions+=2;goto B6635da;
case 0x6635dc:c.instructions+=1;goto B6635dc;
case 0x6635e1:goto L6635e1;
case 0x6635e3:c.instructions+=1;goto B6635e3;
case 0x6635e5:goto L6635e5;
case 0x6635e8:c.instructions+=4;goto B6635e8;
case 0x6635eb:c.instructions+=3;goto B6635eb;
case 0x6635ed:c.instructions+=2;goto B6635ed;
case 0x6635ee:c.instructions+=1;goto B6635ee;
case 0x6635f4:goto L6635f4;
case 0x6635f6:c.instructions+=2;goto B6635f6;
case 0x6635f8:c.instructions+=1;goto B6635f8;
case 0x6635fa:goto L6635fa;
case 0x6635fd:c.instructions+=3;goto B6635fd;
case 0x663601:c.instructions+=2;goto B663601;
case 0x663605:c.instructions+=1;goto B663605;
case 0x663607:goto L663607;
case 0x66360a:c.instructions+=3;goto B66360a;
case 0x66360c:c.instructions+=2;goto B66360c;
case 0x66360d:c.instructions+=1;goto B66360d;
case 0x663610:goto L663610;
case 0x663612:c.instructions+=2;goto B663612;
case 0x663614:c.instructions+=1;goto B663614;
case 0x663616:goto L663616;
case 0x663619:c.instructions+=3;goto B663619;
case 0x66361b:c.instructions+=2;goto B66361b;
case 0x66361d:c.instructions+=1;goto B66361d;
case 0x66361f:goto L66361f;
case 0x663621:c.instructions+=2;goto B663621;
case 0x663622:c.instructions+=1;goto B663622;
case 0x663625:goto L663625;
case 0x663627:c.instructions+=1;goto B663627;
case 0x663629:goto L663629;
case 0x66362c:c.instructions+=6;goto B66362c;
case 0x66362f:c.instructions+=5;goto B66362f;
case 0x663631:c.instructions+=4;goto B663631;
case 0x663635:c.instructions+=3;goto B663635;
case 0x663636:c.instructions+=2;goto B663636;
case 0x663637:c.instructions+=1;goto B663637;
case 0x66363d:goto L66363d;
case 0x66363f:goto L66363f;
case 0x663641:goto L663641;
case 0x663643:c.instructions+=1;goto B663643;
case 0x663645:goto L663645;
case 0x663648:c.instructions+=3;goto B663648;
case 0x66364a:c.instructions+=2;goto B66364a;
case 0x66364b:c.instructions+=1;goto B66364b;
case 0x66364e:goto L66364e;
case 0x663650:c.instructions+=2;goto B663650;
case 0x663652:c.instructions+=1;goto B663652;
case 0x663654:goto L663654;
case 0x663657:c.instructions+=3;goto B663657;
case 0x663659:c.instructions+=2;goto B663659;
case 0x66365a:c.instructions+=1;goto B66365a;
case 0x66365d:goto L66365d;
case 0x66365f:c.instructions+=2;goto B66365f;
case 0x663661:c.instructions+=1;goto B663661;
case 0x663663:goto L663663;
case 0x663665:c.instructions+=2;goto B663665;
case 0x663667:c.instructions+=1;goto B663667;
case 0x663669:goto L663669;
case 0x66366b:c.instructions+=2;goto B66366b;
case 0x66366c:c.instructions+=1;goto B66366c;
case 0x66366f:goto L66366f;
case 0x663671:goto L663671;
case 0x663674:c.instructions+=2;goto B663674;
case 0x663676:c.instructions+=1;goto B663676;
case 0x663679:goto L663679;
case 0x66367c:c.instructions+=2;goto B66367c;
case 0x66367e:c.instructions+=1;goto B66367e;
case 0x663680:goto L663680;
case 0x663682:c.instructions+=2;goto B663682;
case 0x663683:c.instructions+=1;goto B663683;
case 0x663686:goto L663686;
case 0x663689:goto L663689;
case 0x66368c:c.instructions+=2;goto B66368c;
case 0x66368e:c.instructions+=1;goto B66368e;
case 0x663690:goto L663690;
case 0x663692:c.instructions+=2;goto B663692;
case 0x663693:c.instructions+=1;goto B663693;
case 0x663696:goto L663696;
case 0x663698:c.instructions+=5;goto B663698;
case 0x663699:c.instructions+=4;goto B663699;
case 0x66369a:c.instructions+=3;goto B66369a;
case 0x66369b:c.instructions+=2;goto B66369b;
case 0x66369c:c.instructions+=1;goto B66369c;
case 0x66369f:goto L66369f;
case 0x6636a1:c.instructions+=17;goto B6636a1;
case 0x6636a2:c.instructions+=16;goto B6636a2;
case 0x6636a4:c.instructions+=15;goto B6636a4;
case 0x6636a7:c.instructions+=14;goto B6636a7;
case 0x6636a8:c.instructions+=13;goto B6636a8;
case 0x6636a9:c.instructions+=12;goto B6636a9;
case 0x6636ab:c.instructions+=11;goto B6636ab;
case 0x6636af:c.instructions+=10;goto B6636af;
case 0x6636b5:c.instructions+=9;goto B6636b5;
case 0x6636bb:c.instructions+=8;goto B6636bb;
case 0x6636bd:c.instructions+=7;goto B6636bd;
case 0x6636c4:c.instructions+=6;goto B6636c4;
case 0x6636cb:c.instructions+=5;goto B6636cb;
case 0x6636cc:c.instructions+=4;goto B6636cc;
case 0x6636cf:c.instructions+=3;goto B6636cf;
case 0x6636d2:c.instructions+=2;goto B6636d2;
case 0x6636d5:c.instructions+=1;goto B6636d5;
case 0x6636d7:goto L6636d7;
case 0x6636da:c.instructions+=2;goto B6636da;
case 0x6636dd:c.instructions+=1;goto B6636dd;
case 0x6636e0:goto L6636e0;
case 0x6636e3:c.instructions+=3;goto B6636e3;
case 0x6636e5:c.instructions+=2;goto B6636e5;
case 0x6636e6:c.instructions+=1;goto B6636e6;
case 0x6636ec:goto L6636ec;
case 0x6636ee:c.instructions+=2;goto B6636ee;
case 0x6636f0:c.instructions+=1;goto B6636f0;
case 0x6636f6:goto L6636f6;
case 0x6636f8:c.instructions+=1;goto B6636f8;
case 0x6636fd:goto L6636fd;
case 0x663700:c.instructions+=3;goto B663700;
case 0x663702:c.instructions+=2;goto B663702;
case 0x663705:c.instructions+=1;goto B663705;
case 0x66370a:goto L66370a;
case 0x66370b:c.instructions+=2;goto B66370b;
case 0x66370d:c.instructions+=1;goto B66370d;
case 0x663712:goto L663712;
case 0x663714:c.instructions+=1;goto B663714;
case 0x663716:goto L663716;
case 0x663719:c.instructions+=4;goto B663719;
case 0x66371c:c.instructions+=3;goto B66371c;
case 0x66371e:c.instructions+=2;goto B66371e;
case 0x66371f:c.instructions+=1;goto B66371f;
case 0x663725:goto L663725;
case 0x663727:c.instructions+=2;goto B663727;
case 0x663729:c.instructions+=1;goto B663729;
case 0x66372b:goto L66372b;
case 0x66372e:c.instructions+=3;goto B66372e;
case 0x663732:c.instructions+=2;goto B663732;
case 0x663736:c.instructions+=1;goto B663736;
case 0x663738:goto L663738;
case 0x66373b:c.instructions+=3;goto B66373b;
case 0x66373d:c.instructions+=2;goto B66373d;
case 0x66373e:c.instructions+=1;goto B66373e;
case 0x663741:goto L663741;
case 0x663743:c.instructions+=2;goto B663743;
case 0x663745:c.instructions+=1;goto B663745;
case 0x663747:goto L663747;
case 0x66374a:c.instructions+=3;goto B66374a;
case 0x66374c:c.instructions+=2;goto B66374c;
case 0x66374e:c.instructions+=1;goto B66374e;
case 0x663750:goto L663750;
case 0x663752:c.instructions+=2;goto B663752;
case 0x663753:c.instructions+=1;goto B663753;
case 0x663756:goto L663756;
case 0x663758:c.instructions+=1;goto B663758;
case 0x66375a:goto L66375a;
case 0x66375d:c.instructions+=6;goto B66375d;
case 0x663760:c.instructions+=5;goto B663760;
case 0x663762:c.instructions+=4;goto B663762;
case 0x663766:c.instructions+=3;goto B663766;
case 0x663767:c.instructions+=2;goto B663767;
case 0x663768:c.instructions+=1;goto B663768;
case 0x66376e:goto L66376e;
case 0x663770:goto L663770;
case 0x663772:goto L663772;
case 0x663774:c.instructions+=1;goto B663774;
case 0x663776:goto L663776;
case 0x663779:c.instructions+=3;goto B663779;
case 0x66377b:c.instructions+=2;goto B66377b;
case 0x66377c:c.instructions+=1;goto B66377c;
case 0x66377f:goto L66377f;
case 0x663781:c.instructions+=2;goto B663781;
case 0x663783:c.instructions+=1;goto B663783;
case 0x663785:goto L663785;
case 0x663788:c.instructions+=3;goto B663788;
case 0x66378a:c.instructions+=2;goto B66378a;
case 0x66378b:c.instructions+=1;goto B66378b;
case 0x66378e:goto L66378e;
case 0x663790:c.instructions+=2;goto B663790;
case 0x663792:c.instructions+=1;goto B663792;
case 0x663794:goto L663794;
case 0x663796:c.instructions+=2;goto B663796;
case 0x663798:c.instructions+=1;goto B663798;
case 0x66379a:goto L66379a;
case 0x66379c:c.instructions+=2;goto B66379c;
case 0x66379d:c.instructions+=1;goto B66379d;
case 0x6637a0:goto L6637a0;
case 0x6637a2:goto L6637a2;
case 0x6637a5:c.instructions+=2;goto B6637a5;
case 0x6637a7:c.instructions+=1;goto B6637a7;
case 0x6637aa:goto L6637aa;
case 0x6637ad:c.instructions+=2;goto B6637ad;
case 0x6637af:c.instructions+=1;goto B6637af;
case 0x6637b1:goto L6637b1;
case 0x6637b3:c.instructions+=2;goto B6637b3;
case 0x6637b4:c.instructions+=1;goto B6637b4;
case 0x6637b7:goto L6637b7;
case 0x6637ba:goto L6637ba;
case 0x6637bd:c.instructions+=2;goto B6637bd;
case 0x6637bf:c.instructions+=1;goto B6637bf;
case 0x6637c1:goto L6637c1;
case 0x6637c3:c.instructions+=2;goto B6637c3;
case 0x6637c4:c.instructions+=1;goto B6637c4;
case 0x6637c7:goto L6637c7;
case 0x6637c9:c.instructions+=5;goto B6637c9;
case 0x6637ca:c.instructions+=4;goto B6637ca;
case 0x6637cb:c.instructions+=3;goto B6637cb;
case 0x6637cc:c.instructions+=2;goto B6637cc;
case 0x6637cd:c.instructions+=1;goto B6637cd;
case 0x6637d0:goto L6637d0;
case 0x6637d2:c.instructions+=17;goto B6637d2;
case 0x6637d3:c.instructions+=16;goto B6637d3;
case 0x6637d5:c.instructions+=15;goto B6637d5;
case 0x6637d8:c.instructions+=14;goto B6637d8;
case 0x6637d9:c.instructions+=13;goto B6637d9;
case 0x6637da:c.instructions+=12;goto B6637da;
case 0x6637dc:c.instructions+=11;goto B6637dc;
case 0x6637e0:c.instructions+=10;goto B6637e0;
case 0x6637e6:c.instructions+=9;goto B6637e6;
case 0x6637ec:c.instructions+=8;goto B6637ec;
case 0x6637ee:c.instructions+=7;goto B6637ee;
case 0x6637f5:c.instructions+=6;goto B6637f5;
case 0x6637fc:c.instructions+=5;goto B6637fc;
case 0x6637fd:c.instructions+=4;goto B6637fd;
case 0x663800:c.instructions+=3;goto B663800;
case 0x663803:c.instructions+=2;goto B663803;
case 0x663806:c.instructions+=1;goto B663806;
case 0x663808:goto L663808;
case 0x66380b:c.instructions+=2;goto B66380b;
case 0x66380e:c.instructions+=1;goto B66380e;
case 0x663811:goto L663811;
case 0x663814:c.instructions+=3;goto B663814;
case 0x663816:c.instructions+=2;goto B663816;
case 0x663817:c.instructions+=1;goto B663817;
case 0x66381d:goto L66381d;
case 0x66381f:c.instructions+=2;goto B66381f;
case 0x663821:c.instructions+=1;goto B663821;
case 0x663827:goto L663827;
case 0x663829:c.instructions+=1;goto B663829;
case 0x66382e:goto L66382e;
case 0x663831:c.instructions+=3;goto B663831;
case 0x663833:c.instructions+=2;goto B663833;
case 0x663836:c.instructions+=1;goto B663836;
case 0x66383b:goto L66383b;
case 0x66383c:c.instructions+=2;goto B66383c;
case 0x66383e:c.instructions+=1;goto B66383e;
case 0x663843:goto L663843;
case 0x663845:c.instructions+=1;goto B663845;
case 0x663847:goto L663847;
case 0x66384a:c.instructions+=4;goto B66384a;
case 0x66384d:c.instructions+=3;goto B66384d;
case 0x66384f:c.instructions+=2;goto B66384f;
case 0x663850:c.instructions+=1;goto B663850;
case 0x663856:goto L663856;
case 0x663858:c.instructions+=2;goto B663858;
case 0x66385a:c.instructions+=1;goto B66385a;
case 0x66385c:goto L66385c;
case 0x66385f:c.instructions+=3;goto B66385f;
case 0x663863:c.instructions+=2;goto B663863;
case 0x663867:c.instructions+=1;goto B663867;
case 0x663869:goto L663869;
case 0x66386c:c.instructions+=3;goto B66386c;
case 0x66386e:c.instructions+=2;goto B66386e;
case 0x66386f:c.instructions+=1;goto B66386f;
case 0x663872:goto L663872;
case 0x663874:c.instructions+=2;goto B663874;
case 0x663876:c.instructions+=1;goto B663876;
case 0x663878:goto L663878;
case 0x66387b:c.instructions+=3;goto B66387b;
case 0x66387d:c.instructions+=2;goto B66387d;
case 0x66387f:c.instructions+=1;goto B66387f;
case 0x663881:goto L663881;
case 0x663883:c.instructions+=2;goto B663883;
case 0x663884:c.instructions+=1;goto B663884;
case 0x663887:goto L663887;
case 0x663889:c.instructions+=1;goto B663889;
case 0x66388b:goto L66388b;
case 0x66388e:c.instructions+=6;goto B66388e;
case 0x663891:c.instructions+=5;goto B663891;
case 0x663893:c.instructions+=4;goto B663893;
case 0x663897:c.instructions+=3;goto B663897;
case 0x663898:c.instructions+=2;goto B663898;
case 0x663899:c.instructions+=1;goto B663899;
case 0x66389f:goto L66389f;
case 0x6638a1:goto L6638a1;
case 0x6638a3:goto L6638a3;
case 0x6638a5:c.instructions+=1;goto B6638a5;
case 0x6638a7:goto L6638a7;
case 0x6638aa:c.instructions+=3;goto B6638aa;
case 0x6638ac:c.instructions+=2;goto B6638ac;
case 0x6638ad:c.instructions+=1;goto B6638ad;
case 0x6638b0:goto L6638b0;
case 0x6638b2:c.instructions+=2;goto B6638b2;
case 0x6638b4:c.instructions+=1;goto B6638b4;
case 0x6638b6:goto L6638b6;
case 0x6638b9:c.instructions+=3;goto B6638b9;
case 0x6638bb:c.instructions+=2;goto B6638bb;
case 0x6638bc:c.instructions+=1;goto B6638bc;
case 0x6638bf:goto L6638bf;
case 0x6638c1:c.instructions+=2;goto B6638c1;
case 0x6638c3:c.instructions+=1;goto B6638c3;
case 0x6638c5:goto L6638c5;
case 0x6638c7:c.instructions+=2;goto B6638c7;
case 0x6638c9:c.instructions+=1;goto B6638c9;
case 0x6638cb:goto L6638cb;
case 0x6638cd:c.instructions+=2;goto B6638cd;
case 0x6638ce:c.instructions+=1;goto B6638ce;
case 0x6638d1:goto L6638d1;
case 0x6638d3:goto L6638d3;
case 0x6638d6:c.instructions+=2;goto B6638d6;
case 0x6638d8:c.instructions+=1;goto B6638d8;
case 0x6638db:goto L6638db;
case 0x6638de:c.instructions+=2;goto B6638de;
case 0x6638e0:c.instructions+=1;goto B6638e0;
case 0x6638e2:goto L6638e2;
case 0x6638e4:c.instructions+=2;goto B6638e4;
case 0x6638e5:c.instructions+=1;goto B6638e5;
case 0x6638e8:goto L6638e8;
case 0x6638eb:goto L6638eb;
case 0x6638ee:c.instructions+=2;goto B6638ee;
case 0x6638f0:c.instructions+=1;goto B6638f0;
case 0x6638f2:goto L6638f2;
case 0x6638f4:c.instructions+=2;goto B6638f4;
case 0x6638f5:c.instructions+=1;goto B6638f5;
case 0x6638f8:goto L6638f8;
case 0x6638fa:c.instructions+=5;goto B6638fa;
case 0x6638fb:c.instructions+=4;goto B6638fb;
case 0x6638fc:c.instructions+=3;goto B6638fc;
case 0x6638fd:c.instructions+=2;goto B6638fd;
case 0x6638fe:c.instructions+=1;goto B6638fe;
case 0x663901:goto L663901;
case 0x663903:c.instructions+=17;goto B663903;
case 0x663904:c.instructions+=16;goto B663904;
case 0x663906:c.instructions+=15;goto B663906;
case 0x663909:c.instructions+=14;goto B663909;
case 0x66390a:c.instructions+=13;goto B66390a;
case 0x66390b:c.instructions+=12;goto B66390b;
case 0x66390d:c.instructions+=11;goto B66390d;
case 0x663911:c.instructions+=10;goto B663911;
case 0x663917:c.instructions+=9;goto B663917;
case 0x66391d:c.instructions+=8;goto B66391d;
case 0x66391f:c.instructions+=7;goto B66391f;
case 0x663926:c.instructions+=6;goto B663926;
case 0x66392d:c.instructions+=5;goto B66392d;
case 0x66392e:c.instructions+=4;goto B66392e;
case 0x663931:c.instructions+=3;goto B663931;
case 0x663934:c.instructions+=2;goto B663934;
case 0x663937:c.instructions+=1;goto B663937;
case 0x663939:goto L663939;
case 0x66393c:c.instructions+=2;goto B66393c;
case 0x66393f:c.instructions+=1;goto B66393f;
case 0x663942:goto L663942;
case 0x663945:c.instructions+=3;goto B663945;
case 0x663947:c.instructions+=2;goto B663947;
case 0x663948:c.instructions+=1;goto B663948;
case 0x66394e:goto L66394e;
case 0x663950:c.instructions+=2;goto B663950;
case 0x663952:c.instructions+=1;goto B663952;
case 0x663958:goto L663958;
case 0x66395a:c.instructions+=1;goto B66395a;
case 0x66395f:goto L66395f;
case 0x663962:c.instructions+=3;goto B663962;
case 0x663964:c.instructions+=2;goto B663964;
case 0x663967:c.instructions+=1;goto B663967;
case 0x66396c:goto L66396c;
case 0x66396d:c.instructions+=2;goto B66396d;
case 0x66396f:c.instructions+=1;goto B66396f;
case 0x663974:goto L663974;
case 0x663976:c.instructions+=1;goto B663976;
case 0x663978:goto L663978;
case 0x66397b:c.instructions+=4;goto B66397b;
case 0x66397e:c.instructions+=3;goto B66397e;
case 0x663980:c.instructions+=2;goto B663980;
case 0x663981:c.instructions+=1;goto B663981;
case 0x663987:goto L663987;
case 0x663989:c.instructions+=2;goto B663989;
case 0x66398b:c.instructions+=1;goto B66398b;
case 0x66398d:goto L66398d;
case 0x663990:c.instructions+=3;goto B663990;
case 0x663994:c.instructions+=2;goto B663994;
case 0x663998:c.instructions+=1;goto B663998;
case 0x66399a:goto L66399a;
case 0x66399d:c.instructions+=3;goto B66399d;
case 0x66399f:c.instructions+=2;goto B66399f;
case 0x6639a0:c.instructions+=1;goto B6639a0;
case 0x6639a3:goto L6639a3;
case 0x6639a5:c.instructions+=2;goto B6639a5;
case 0x6639a7:c.instructions+=1;goto B6639a7;
case 0x6639a9:goto L6639a9;
case 0x6639ac:c.instructions+=3;goto B6639ac;
case 0x6639ae:c.instructions+=2;goto B6639ae;
case 0x6639b0:c.instructions+=1;goto B6639b0;
case 0x6639b2:goto L6639b2;
case 0x6639b4:c.instructions+=2;goto B6639b4;
case 0x6639b5:c.instructions+=1;goto B6639b5;
case 0x6639b8:goto L6639b8;
case 0x6639ba:c.instructions+=1;goto B6639ba;
case 0x6639bc:goto L6639bc;
case 0x6639bf:c.instructions+=6;goto B6639bf;
case 0x6639c2:c.instructions+=5;goto B6639c2;
case 0x6639c4:c.instructions+=4;goto B6639c4;
case 0x6639c8:c.instructions+=3;goto B6639c8;
case 0x6639c9:c.instructions+=2;goto B6639c9;
case 0x6639ca:c.instructions+=1;goto B6639ca;
case 0x6639d0:goto L6639d0;
case 0x6639d2:goto L6639d2;
case 0x6639d4:goto L6639d4;
case 0x6639d6:c.instructions+=1;goto B6639d6;
case 0x6639d8:goto L6639d8;
case 0x6639db:c.instructions+=3;goto B6639db;
case 0x6639dd:c.instructions+=2;goto B6639dd;
case 0x6639de:c.instructions+=1;goto B6639de;
case 0x6639e1:goto L6639e1;
case 0x6639e3:c.instructions+=2;goto B6639e3;
case 0x6639e5:c.instructions+=1;goto B6639e5;
case 0x6639e7:goto L6639e7;
case 0x6639ea:c.instructions+=3;goto B6639ea;
case 0x6639ec:c.instructions+=2;goto B6639ec;
case 0x6639ed:c.instructions+=1;goto B6639ed;
case 0x6639f0:goto L6639f0;
case 0x6639f2:c.instructions+=2;goto B6639f2;
case 0x6639f4:c.instructions+=1;goto B6639f4;
case 0x6639f6:goto L6639f6;
case 0x6639f8:c.instructions+=2;goto B6639f8;
case 0x6639fa:c.instructions+=1;goto B6639fa;
case 0x6639fc:goto L6639fc;
case 0x6639fe:c.instructions+=2;goto B6639fe;
case 0x6639ff:c.instructions+=1;goto B6639ff;
case 0x663a02:goto L663a02;
case 0x663a04:goto L663a04;
case 0x663a07:c.instructions+=2;goto B663a07;
case 0x663a09:c.instructions+=1;goto B663a09;
case 0x663a0c:goto L663a0c;
case 0x663a0f:c.instructions+=2;goto B663a0f;
case 0x663a11:c.instructions+=1;goto B663a11;
case 0x663a13:goto L663a13;
case 0x663a15:c.instructions+=2;goto B663a15;
case 0x663a16:c.instructions+=1;goto B663a16;
case 0x663a19:goto L663a19;
case 0x663a1c:goto L663a1c;
case 0x663a1f:c.instructions+=2;goto B663a1f;
case 0x663a21:c.instructions+=1;goto B663a21;
case 0x663a23:goto L663a23;
case 0x663a25:c.instructions+=2;goto B663a25;
case 0x663a26:c.instructions+=1;goto B663a26;
case 0x663a29:goto L663a29;
case 0x663a2b:c.instructions+=5;goto B663a2b;
case 0x663a2c:c.instructions+=4;goto B663a2c;
case 0x663a2d:c.instructions+=3;goto B663a2d;
case 0x663a2e:c.instructions+=2;goto B663a2e;
case 0x663a2f:c.instructions+=1;goto B663a2f;
case 0x663a32:goto L663a32;
case 0x663a34:c.instructions+=17;goto B663a34;
case 0x663a35:c.instructions+=16;goto B663a35;
case 0x663a37:c.instructions+=15;goto B663a37;
case 0x663a3a:c.instructions+=14;goto B663a3a;
case 0x663a3b:c.instructions+=13;goto B663a3b;
case 0x663a3c:c.instructions+=12;goto B663a3c;
case 0x663a3f:c.instructions+=11;goto B663a3f;
case 0x663a40:c.instructions+=10;goto B663a40;
case 0x663a43:c.instructions+=9;goto B663a43;
case 0x663a46:c.instructions+=8;goto B663a46;
case 0x663a49:c.instructions+=7;goto B663a49;
case 0x663a4c:c.instructions+=6;goto B663a4c;
case 0x663a4f:c.instructions+=5;goto B663a4f;
case 0x663a52:c.instructions+=4;goto B663a52;
case 0x663a55:c.instructions+=3;goto B663a55;
case 0x663a57:c.instructions+=2;goto B663a57;
case 0x663a58:c.instructions+=1;goto B663a58;
case 0x663a5b:goto L663a5b;
case 0x663a5d:c.instructions+=11;goto B663a5d;
case 0x663a60:c.instructions+=10;goto B663a60;
case 0x663a62:c.instructions+=9;goto B663a62;
case 0x663a64:c.instructions+=8;goto B663a64;
case 0x663a67:c.instructions+=7;goto B663a67;
case 0x663a6a:c.instructions+=6;goto B663a6a;
case 0x663a6d:c.instructions+=5;goto B663a6d;
case 0x663a70:c.instructions+=4;goto B663a70;
case 0x663a77:c.instructions+=3;goto B663a77;
case 0x663a7a:c.instructions+=2;goto B663a7a;
case 0x663a7d:c.instructions+=1;goto B663a7d;
case 0x663a7f:goto L663a7f;
case 0x663a80:c.instructions+=2;goto B663a80;
case 0x663a81:c.instructions+=1;goto B663a81;
case 0x663a86:goto L663a86;
case 0x663a89:c.instructions+=4;goto B663a89;
case 0x663a8e:c.instructions+=3;goto B663a8e;
case 0x663a90:c.instructions+=2;goto B663a90;
case 0x663a96:c.instructions+=1;goto B663a96;
case 0x663a9b:goto L663a9b;
case 0x663a9e:c.instructions+=2;goto B663a9e;
case 0x663aa1:c.instructions+=1;goto B663aa1;
case 0x663aa8:goto L663aa8;
case 0x663aaa:c.instructions+=2;goto B663aaa;
case 0x663aad:c.instructions+=1;goto B663aad;
case 0x663ab3:goto L663ab3;
case 0x663ab5:c.instructions+=12;goto B663ab5;
case 0x663ab8:c.instructions+=11;goto B663ab8;
case 0x663aba:c.instructions+=10;goto B663aba;
case 0x663abd:c.instructions+=9;goto B663abd;
case 0x663ac0:c.instructions+=8;goto B663ac0;
case 0x663ac2:c.instructions+=7;goto B663ac2;
case 0x663ac5:c.instructions+=6;goto B663ac5;
case 0x663ac8:c.instructions+=5;goto B663ac8;
case 0x663aca:c.instructions+=4;goto B663aca;
case 0x663ace:c.instructions+=3;goto B663ace;
case 0x663ad1:c.instructions+=2;goto B663ad1;
case 0x663ad4:c.instructions+=1;goto B663ad4;
case 0x663ada:goto L663ada;
case 0x663ade:c.instructions+=4;goto B663ade;
case 0x663ae1:c.instructions+=3;goto B663ae1;
case 0x663ae4:c.instructions+=2;goto B663ae4;
case 0x663ae6:c.instructions+=1;goto B663ae6;
case 0x663ae8:goto L663ae8;
case 0x663aeb:c.instructions+=5;goto B663aeb;
case 0x663aed:c.instructions+=4;goto B663aed;
case 0x663af0:c.instructions+=3;goto B663af0;
case 0x663af4:c.instructions+=2;goto B663af4;
case 0x663af7:c.instructions+=1;goto B663af7;
case 0x663af9:goto L663af9;
case 0x663afa:c.instructions+=1;goto B663afa;
case 0x663afc:goto L663afc;
case 0x663afd:c.instructions+=1;goto B663afd;
case 0x663aff:goto L663aff;
case 0x663b01:c.instructions+=8;goto B663b01;
case 0x663b04:c.instructions+=7;goto B663b04;
case 0x663b05:c.instructions+=6;goto B663b05;
case 0x663b09:c.instructions+=5;goto B663b09;
case 0x663b0a:c.instructions+=4;goto B663b0a;
case 0x663b0e:c.instructions+=3;goto B663b0e;
case 0x663b11:c.instructions+=2;goto B663b11;
case 0x663b14:c.instructions+=1;goto B663b14;
case 0x663b16:goto L663b16;
case 0x663b18:c.instructions+=7;goto B663b18;
case 0x663b1b:c.instructions+=6;goto B663b1b;
case 0x663b1c:c.instructions+=5;goto B663b1c;
case 0x663b20:c.instructions+=4;goto B663b20;
case 0x663b21:c.instructions+=3;goto B663b21;
case 0x663b25:c.instructions+=2;goto B663b25;
case 0x663b28:c.instructions+=1;goto B663b28;
case 0x663b2b:goto L663b2b;
case 0x663b2e:c.instructions+=5;goto B663b2e;
case 0x663b2f:c.instructions+=4;goto B663b2f;
case 0x663b30:c.instructions+=3;goto B663b30;
case 0x663b33:c.instructions+=2;goto B663b33;
case 0x663b36:c.instructions+=1;goto B663b36;
case 0x663b3b:goto L663b3b;
case 0x663b3d:goto L663b3d;
case 0x663b3f:c.instructions+=13;goto B663b3f;
case 0x663b42:c.instructions+=12;goto B663b42;
case 0x663b43:c.instructions+=11;goto B663b43;
case 0x663b47:c.instructions+=10;goto B663b47;
case 0x663b48:c.instructions+=9;goto B663b48;
case 0x663b4b:c.instructions+=8;goto B663b4b;
case 0x663b4f:c.instructions+=7;goto B663b4f;
case 0x663b50:c.instructions+=6;goto B663b50;
case 0x663b53:c.instructions+=5;goto B663b53;
case 0x663b56:c.instructions+=4;goto B663b56;
case 0x663b57:c.instructions+=3;goto B663b57;
case 0x663b5a:c.instructions+=2;goto B663b5a;
case 0x663b5d:c.instructions+=1;goto B663b5d;
case 0x663b62:goto L663b62;
case 0x663b65:c.instructions+=4;goto B663b65;
case 0x663b69:c.instructions+=3;goto B663b69;
case 0x663b6b:c.instructions+=2;goto B663b6b;
case 0x663b6f:c.instructions+=1;goto B663b6f;
case 0x663b75:goto L663b75;
case 0x663b77:c.instructions+=4;goto B663b77;
case 0x663b7a:c.instructions+=3;goto B663b7a;
case 0x663b7d:c.instructions+=2;goto B663b7d;
case 0x663b80:c.instructions+=1;goto B663b80;
case 0x663b83:goto L663b83;
case 0x663b86:c.instructions+=14;goto B663b86;
case 0x663b89:c.instructions+=13;goto B663b89;
case 0x663b8c:c.instructions+=12;goto B663b8c;
case 0x663b8d:c.instructions+=11;goto B663b8d;
case 0x663b90:c.instructions+=10;goto B663b90;
case 0x663b91:c.instructions+=9;goto B663b91;
case 0x663b94:c.instructions+=8;goto B663b94;
case 0x663b97:c.instructions+=7;goto B663b97;
case 0x663b9a:c.instructions+=6;goto B663b9a;
case 0x663b9b:c.instructions+=5;goto B663b9b;
case 0x663b9e:c.instructions+=4;goto B663b9e;
case 0x663b9f:c.instructions+=3;goto B663b9f;
case 0x663ba2:c.instructions+=2;goto B663ba2;
case 0x663ba5:c.instructions+=1;goto B663ba5;
case 0x663baa:goto L663baa;
case 0x663bab:c.instructions+=4;goto B663bab;
case 0x663bac:c.instructions+=3;goto B663bac;
case 0x663bad:c.instructions+=2;goto B663bad;
case 0x663bae:c.instructions+=1;goto B663bae;
case 0x663bb1:goto L663bb1;
case 0x663bb3:c.instructions+=17;goto B663bb3;
case 0x663bb4:c.instructions+=16;goto B663bb4;
case 0x663bb6:c.instructions+=15;goto B663bb6;
case 0x663bb9:c.instructions+=14;goto B663bb9;
case 0x663bba:c.instructions+=13;goto B663bba;
case 0x663bbd:c.instructions+=12;goto B663bbd;
case 0x663bbe:c.instructions+=11;goto B663bbe;
case 0x663bc1:c.instructions+=10;goto B663bc1;
case 0x663bc4:c.instructions+=9;goto B663bc4;
case 0x663bc5:c.instructions+=8;goto B663bc5;
case 0x663bc8:c.instructions+=7;goto B663bc8;
case 0x663bcb:c.instructions+=6;goto B663bcb;
case 0x663bce:c.instructions+=5;goto B663bce;
case 0x663bd1:c.instructions+=4;goto B663bd1;
case 0x663bd4:c.instructions+=3;goto B663bd4;
case 0x663bd6:c.instructions+=2;goto B663bd6;
case 0x663bd7:c.instructions+=1;goto B663bd7;
case 0x663bda:goto L663bda;
case 0x663bdc:c.instructions+=22;goto B663bdc;
case 0x663bde:c.instructions+=21;goto B663bde;
case 0x663be1:c.instructions+=20;goto B663be1;
case 0x663be3:c.instructions+=19;goto B663be3;
case 0x663be6:c.instructions+=18;goto B663be6;
case 0x663be9:c.instructions+=17;goto B663be9;
case 0x663beb:c.instructions+=16;goto B663beb;
case 0x663bee:c.instructions+=15;goto B663bee;
case 0x663bf1:c.instructions+=14;goto B663bf1;
case 0x663bf3:c.instructions+=13;goto B663bf3;
case 0x663bf6:c.instructions+=12;goto B663bf6;
case 0x663bf9:c.instructions+=11;goto B663bf9;
case 0x663bfc:c.instructions+=10;goto B663bfc;
case 0x663bff:c.instructions+=9;goto B663bff;
case 0x663c02:c.instructions+=8;goto B663c02;
case 0x663c04:c.instructions+=7;goto B663c04;
case 0x663c07:c.instructions+=6;goto B663c07;
case 0x663c0a:c.instructions+=5;goto B663c0a;
case 0x663c11:c.instructions+=4;goto B663c11;
case 0x663c14:c.instructions+=3;goto B663c14;
case 0x663c17:c.instructions+=2;goto B663c17;
case 0x663c1a:c.instructions+=1;goto B663c1a;
case 0x663c1c:goto L663c1c;
case 0x663c1d:c.instructions+=2;goto B663c1d;
case 0x663c1e:c.instructions+=1;goto B663c1e;
case 0x663c23:goto L663c23;
case 0x663c26:c.instructions+=4;goto B663c26;
case 0x663c2b:c.instructions+=3;goto B663c2b;
case 0x663c2d:c.instructions+=2;goto B663c2d;
case 0x663c33:c.instructions+=1;goto B663c33;
case 0x663c38:goto L663c38;
case 0x663c3b:c.instructions+=2;goto B663c3b;
case 0x663c3e:c.instructions+=1;goto B663c3e;
case 0x663c45:goto L663c45;
case 0x663c47:c.instructions+=2;goto B663c47;
case 0x663c4a:c.instructions+=1;goto B663c4a;
case 0x663c50:goto L663c50;
case 0x663c52:c.instructions+=12;goto B663c52;
case 0x663c55:c.instructions+=11;goto B663c55;
case 0x663c57:c.instructions+=10;goto B663c57;
case 0x663c5a:c.instructions+=9;goto B663c5a;
case 0x663c5d:c.instructions+=8;goto B663c5d;
case 0x663c5f:c.instructions+=7;goto B663c5f;
case 0x663c62:c.instructions+=6;goto B663c62;
case 0x663c65:c.instructions+=5;goto B663c65;
case 0x663c67:c.instructions+=4;goto B663c67;
case 0x663c6b:c.instructions+=3;goto B663c6b;
case 0x663c6e:c.instructions+=2;goto B663c6e;
case 0x663c71:c.instructions+=1;goto B663c71;
case 0x663c77:goto L663c77;
case 0x663c7b:c.instructions+=4;goto B663c7b;
case 0x663c7e:c.instructions+=3;goto B663c7e;
case 0x663c81:c.instructions+=2;goto B663c81;
case 0x663c83:c.instructions+=1;goto B663c83;
case 0x663c85:goto L663c85;
case 0x663c88:c.instructions+=5;goto B663c88;
case 0x663c8a:c.instructions+=4;goto B663c8a;
case 0x663c8d:c.instructions+=3;goto B663c8d;
case 0x663c91:c.instructions+=2;goto B663c91;
case 0x663c94:c.instructions+=1;goto B663c94;
case 0x663c96:goto L663c96;
case 0x663c97:c.instructions+=1;goto B663c97;
case 0x663c99:goto L663c99;
case 0x663c9a:c.instructions+=1;goto B663c9a;
case 0x663c9c:goto L663c9c;
case 0x663c9e:c.instructions+=8;goto B663c9e;
case 0x663ca1:c.instructions+=7;goto B663ca1;
case 0x663ca2:c.instructions+=6;goto B663ca2;
case 0x663ca6:c.instructions+=5;goto B663ca6;
case 0x663ca7:c.instructions+=4;goto B663ca7;
case 0x663cab:c.instructions+=3;goto B663cab;
case 0x663cae:c.instructions+=2;goto B663cae;
case 0x663cb1:c.instructions+=1;goto B663cb1;
case 0x663cb3:goto L663cb3;
case 0x663cb5:c.instructions+=7;goto B663cb5;
case 0x663cb8:c.instructions+=6;goto B663cb8;
case 0x663cb9:c.instructions+=5;goto B663cb9;
case 0x663cbd:c.instructions+=4;goto B663cbd;
case 0x663cbe:c.instructions+=3;goto B663cbe;
case 0x663cc2:c.instructions+=2;goto B663cc2;
case 0x663cc5:c.instructions+=1;goto B663cc5;
case 0x663cc8:goto L663cc8;
case 0x663ccb:c.instructions+=5;goto B663ccb;
case 0x663ccc:c.instructions+=4;goto B663ccc;
case 0x663ccd:c.instructions+=3;goto B663ccd;
case 0x663cd0:c.instructions+=2;goto B663cd0;
case 0x663cd3:c.instructions+=1;goto B663cd3;
case 0x663cd8:goto L663cd8;
case 0x663cda:goto L663cda;
case 0x663cdc:c.instructions+=13;goto B663cdc;
case 0x663cdf:c.instructions+=12;goto B663cdf;
case 0x663ce0:c.instructions+=11;goto B663ce0;
case 0x663ce4:c.instructions+=10;goto B663ce4;
case 0x663ce5:c.instructions+=9;goto B663ce5;
case 0x663ce8:c.instructions+=8;goto B663ce8;
case 0x663cec:c.instructions+=7;goto B663cec;
case 0x663ced:c.instructions+=6;goto B663ced;
case 0x663cf0:c.instructions+=5;goto B663cf0;
case 0x663cf3:c.instructions+=4;goto B663cf3;
case 0x663cf4:c.instructions+=3;goto B663cf4;
case 0x663cf7:c.instructions+=2;goto B663cf7;
case 0x663cfa:c.instructions+=1;goto B663cfa;
case 0x663cff:goto L663cff;
case 0x663d02:c.instructions+=4;goto B663d02;
case 0x663d06:c.instructions+=3;goto B663d06;
case 0x663d08:c.instructions+=2;goto B663d08;
case 0x663d0c:c.instructions+=1;goto B663d0c;
case 0x663d12:goto L663d12;
case 0x663d14:c.instructions+=4;goto B663d14;
case 0x663d17:c.instructions+=3;goto B663d17;
case 0x663d1a:c.instructions+=2;goto B663d1a;
case 0x663d1d:c.instructions+=1;goto B663d1d;
case 0x663d20:goto L663d20;
case 0x663d23:c.instructions+=14;goto B663d23;
case 0x663d26:c.instructions+=13;goto B663d26;
case 0x663d29:c.instructions+=12;goto B663d29;
case 0x663d2a:c.instructions+=11;goto B663d2a;
case 0x663d2d:c.instructions+=10;goto B663d2d;
case 0x663d2e:c.instructions+=9;goto B663d2e;
case 0x663d31:c.instructions+=8;goto B663d31;
case 0x663d34:c.instructions+=7;goto B663d34;
case 0x663d37:c.instructions+=6;goto B663d37;
case 0x663d38:c.instructions+=5;goto B663d38;
case 0x663d3b:c.instructions+=4;goto B663d3b;
case 0x663d3c:c.instructions+=3;goto B663d3c;
case 0x663d3f:c.instructions+=2;goto B663d3f;
case 0x663d42:c.instructions+=1;goto B663d42;
case 0x663d47:goto L663d47;
case 0x663d49:c.instructions+=2;goto B663d49;
case 0x663d4c:c.instructions+=1;goto B663d4c;
case 0x663d52:goto L663d52;
case 0x663d56:c.instructions+=1;goto B663d56;
case 0x663d58:goto L663d58;
case 0x663d5b:c.instructions+=8;goto B663d5b;
case 0x663d5e:c.instructions+=7;goto B663d5e;
case 0x663d60:c.instructions+=6;goto B663d60;
case 0x663d62:c.instructions+=5;goto B663d62;
case 0x663d64:c.instructions+=4;goto B663d64;
case 0x663d67:c.instructions+=3;goto B663d67;
case 0x663d69:c.instructions+=2;goto B663d69;
case 0x663d6c:c.instructions+=1;goto B663d6c;
case 0x663d6e:goto L663d6e;
case 0x663d71:c.instructions+=1;goto B663d71;
case 0x663d73:goto L663d73;
case 0x663d76:goto L663d76;
case 0x663d78:c.instructions+=9;goto B663d78;
case 0x663d7a:c.instructions+=8;goto B663d7a;
case 0x663d7d:c.instructions+=7;goto B663d7d;
case 0x663d7f:c.instructions+=6;goto B663d7f;
case 0x663d82:c.instructions+=5;goto B663d82;
case 0x663d85:c.instructions+=4;goto B663d85;
case 0x663d88:c.instructions+=3;goto B663d88;
case 0x663d8b:c.instructions+=2;goto B663d8b;
case 0x663d8d:c.instructions+=1;goto B663d8d;
case 0x663d8f:goto L663d8f;
case 0x663d91:c.instructions+=15;goto B663d91;
case 0x663d94:c.instructions+=14;goto B663d94;
case 0x663d96:c.instructions+=13;goto B663d96;
case 0x663d99:c.instructions+=12;goto B663d99;
case 0x663d9b:c.instructions+=11;goto B663d9b;
case 0x663d9e:c.instructions+=10;goto B663d9e;
case 0x663da0:c.instructions+=9;goto B663da0;
case 0x663da3:c.instructions+=8;goto B663da3;
case 0x663da5:c.instructions+=7;goto B663da5;
case 0x663da8:c.instructions+=6;goto B663da8;
case 0x663daa:c.instructions+=5;goto B663daa;
case 0x663dad:c.instructions+=4;goto B663dad;
case 0x663daf:c.instructions+=3;goto B663daf;
case 0x663db1:c.instructions+=2;goto B663db1;
case 0x663db4:c.instructions+=1;goto B663db4;
case 0x663db7:goto L663db7;
case 0x663db9:c.instructions+=1;goto B663db9;
case 0x663dbb:goto L663dbb;
case 0x663dbe:c.instructions+=2;goto B663dbe;
case 0x663dc1:c.instructions+=1;goto B663dc1;
case 0x663dc3:goto L663dc3;
case 0x663dc7:c.instructions+=1;goto B663dc7;
case 0x663dc9:goto L663dc9;
case 0x663dcc:c.instructions+=8;goto B663dcc;
case 0x663dcf:c.instructions+=7;goto B663dcf;
case 0x663dd1:c.instructions+=6;goto B663dd1;
case 0x663dd3:c.instructions+=5;goto B663dd3;
case 0x663dd5:c.instructions+=4;goto B663dd5;
case 0x663dd8:c.instructions+=3;goto B663dd8;
case 0x663dda:c.instructions+=2;goto B663dda;
case 0x663ddd:c.instructions+=1;goto B663ddd;
case 0x663ddf:goto L663ddf;
case 0x663de2:goto L663de2;
case 0x663de4:c.instructions+=13;goto B663de4;
case 0x663de6:c.instructions+=12;goto B663de6;
case 0x663de9:c.instructions+=11;goto B663de9;
case 0x663dec:c.instructions+=10;goto B663dec;
case 0x663def:c.instructions+=9;goto B663def;
case 0x663df2:c.instructions+=8;goto B663df2;
case 0x663df5:c.instructions+=7;goto B663df5;
case 0x663df7:c.instructions+=6;goto B663df7;
case 0x663dfa:c.instructions+=5;goto B663dfa;
case 0x663dfc:c.instructions+=4;goto B663dfc;
case 0x663dfe:c.instructions+=3;goto B663dfe;
case 0x663e01:c.instructions+=2;goto B663e01;
case 0x663e04:c.instructions+=1;goto B663e04;
case 0x663e06:goto L663e06;
case 0x663e09:c.instructions+=2;goto B663e09;
case 0x663e0b:c.instructions+=1;goto B663e0b;
case 0x663e10:goto L663e10;
case 0x663e13:c.instructions+=6;goto B663e13;
case 0x663e17:c.instructions+=5;goto B663e17;
case 0x663e19:c.instructions+=4;goto B663e19;
case 0x663e1c:c.instructions+=3;goto B663e1c;
case 0x663e1f:c.instructions+=2;goto B663e1f;
case 0x663e22:c.instructions+=1;goto B663e22;
case 0x663e24:goto L663e24;
case 0x663e27:goto L663e27;
case 0x663e2a:c.instructions+=2;goto B663e2a;
case 0x663e2d:c.instructions+=1;goto B663e2d;
case 0x663e2f:goto L663e2f;
case 0x663e33:c.instructions+=1;goto B663e33;
case 0x663e35:goto L663e35;
case 0x663e38:c.instructions+=7;goto B663e38;
case 0x663e3a:c.instructions+=6;goto B663e3a;
case 0x663e3d:c.instructions+=5;goto B663e3d;
case 0x663e3f:c.instructions+=4;goto B663e3f;
case 0x663e41:c.instructions+=3;goto B663e41;
case 0x663e44:c.instructions+=2;goto B663e44;
case 0x663e46:c.instructions+=1;goto B663e46;
case 0x663e48:goto L663e48;
case 0x663e4b:goto L663e4b;
case 0x663e4d:c.instructions+=9;goto B663e4d;
case 0x663e50:c.instructions+=8;goto B663e50;
case 0x663e53:c.instructions+=7;goto B663e53;
case 0x663e56:c.instructions+=6;goto B663e56;
case 0x663e59:c.instructions+=5;goto B663e59;
case 0x663e5c:c.instructions+=4;goto B663e5c;
case 0x663e5f:c.instructions+=3;goto B663e5f;
case 0x663e61:c.instructions+=2;goto B663e61;
case 0x663e64:c.instructions+=1;goto B663e64;
case 0x663e66:goto L663e66;
case 0x663e69:c.instructions+=2;goto B663e69;
case 0x663e6b:c.instructions+=1;goto B663e6b;
case 0x663e70:goto L663e70;
case 0x663e74:c.instructions+=4;goto B663e74;
case 0x663e76:c.instructions+=3;goto B663e76;
case 0x663e79:c.instructions+=2;goto B663e79;
case 0x663e7c:c.instructions+=1;goto B663e7c;
case 0x663e7e:goto L663e7e;
case 0x663e81:c.instructions+=2;goto B663e81;
case 0x663e84:c.instructions+=1;goto B663e84;
case 0x663e86:goto L663e86;
case 0x663e89:c.instructions+=5;goto B663e89;
case 0x663e8a:c.instructions+=4;goto B663e8a;
case 0x663e8b:c.instructions+=3;goto B663e8b;
case 0x663e8c:c.instructions+=2;goto B663e8c;
case 0x663e8d:c.instructions+=1;goto B663e8d;
case 0x663e90:goto L663e90;
case 0x663e92:c.instructions+=5;goto B663e92;
case 0x663e93:c.instructions+=4;goto B663e93;
case 0x663e95:c.instructions+=3;goto B663e95;
case 0x663e98:c.instructions+=2;goto B663e98;
case 0x663e9a:c.instructions+=1;goto B663e9a;
case 0x663e9c:goto L663e9c;
case 0x663e9e:c.instructions+=1;goto B663e9e;
case 0x663ea3:goto L663ea3;
case 0x663ea7:c.instructions+=1;goto B663ea7;
case 0x663ea9:goto L663ea9;
case 0x663eac:c.instructions+=5;goto B663eac;
case 0x663eaf:c.instructions+=4;goto B663eaf;
case 0x663eb2:c.instructions+=3;goto B663eb2;
case 0x663eb6:c.instructions+=2;goto B663eb6;
case 0x663eb8:c.instructions+=1;goto B663eb8;
case 0x663ebd:goto L663ebd;
case 0x663ec1:c.instructions+=1;goto B663ec1;
case 0x663ec3:goto L663ec3;
case 0x663ec4:c.instructions+=1;goto B663ec4;
case 0x663ec5:goto L663ec5;
case 0x663ec7:c.instructions+=24;goto B663ec7;
case 0x663ecb:c.instructions+=23;goto B663ecb;
case 0x663ecd:c.instructions+=22;goto B663ecd;
case 0x663ed0:c.instructions+=21;goto B663ed0;
case 0x663ed3:c.instructions+=20;goto B663ed3;
case 0x663ed6:c.instructions+=19;goto B663ed6;
case 0x663ed9:c.instructions+=18;goto B663ed9;
case 0x663edc:c.instructions+=17;goto B663edc;
case 0x663edf:c.instructions+=16;goto B663edf;
case 0x663ee2:c.instructions+=15;goto B663ee2;
case 0x663ee9:c.instructions+=14;goto B663ee9;
case 0x663eec:c.instructions+=13;goto B663eec;
case 0x663eef:c.instructions+=12;goto B663eef;
case 0x663ef2:c.instructions+=11;goto B663ef2;
case 0x663ef4:c.instructions+=10;goto B663ef4;
case 0x663ef7:c.instructions+=9;goto B663ef7;
case 0x663efa:c.instructions+=8;goto B663efa;
case 0x663efd:c.instructions+=7;goto B663efd;
case 0x663f03:c.instructions+=6;goto B663f03;
case 0x663f07:c.instructions+=5;goto B663f07;
case 0x663f0b:c.instructions+=4;goto B663f0b;
case 0x663f0e:c.instructions+=3;goto B663f0e;
case 0x663f11:c.instructions+=2;goto B663f11;
case 0x663f14:c.instructions+=1;goto B663f14;
case 0x663f15:goto L663f15;
case 0x663f17:c.instructions+=7;goto B663f17;
case 0x663f18:c.instructions+=6;goto B663f18;
case 0x663f1a:c.instructions+=5;goto B663f1a;
case 0x663f1d:c.instructions+=4;goto B663f1d;
case 0x663f21:c.instructions+=3;goto B663f21;
case 0x663f25:c.instructions+=2;goto B663f25;
case 0x663f27:c.instructions+=1;goto B663f27;
case 0x663f29:goto L663f29;
case 0x663f2b:c.instructions+=2;goto B663f2b;
case 0x663f2c:c.instructions+=1;goto B663f2c;
case 0x663f2f:goto L663f2f;
case 0x663f33:goto L663f33;
case 0x663f36:c.instructions+=2;goto B663f36;
case 0x663f38:c.instructions+=1;goto B663f38;
case 0x663f3a:goto L663f3a;
case 0x663f3c:c.instructions+=1;goto B663f3c;
case 0x663f41:goto L663f41;
case 0x663f45:goto L663f45;
case 0x663f48:c.instructions+=2;goto B663f48;
case 0x663f49:c.instructions+=1;goto B663f49;
case 0x663f4e:goto L663f4e;
case 0x663f50:c.instructions+=9;goto B663f50;
case 0x663f54:c.instructions+=8;goto B663f54;
case 0x663f56:c.instructions+=7;goto B663f56;
case 0x663f59:c.instructions+=6;goto B663f59;
case 0x663f5c:c.instructions+=5;goto B663f5c;
case 0x663f5e:c.instructions+=4;goto B663f5e;
case 0x663f61:c.instructions+=3;goto B663f61;
case 0x663f68:c.instructions+=2;goto B663f68;
case 0x663f6b:c.instructions+=1;goto B663f6b;
case 0x663f6c:goto L663f6c;
case 0x663f6e:c.instructions+=20;goto B663f6e;
case 0x663f6f:c.instructions+=19;goto B663f6f;
case 0x663f71:c.instructions+=18;goto B663f71;
case 0x663f72:c.instructions+=17;goto B663f72;
case 0x663f76:c.instructions+=16;goto B663f76;
case 0x663f77:c.instructions+=15;goto B663f77;
case 0x663f78:c.instructions+=14;goto B663f78;
case 0x663f7a:c.instructions+=13;goto B663f7a;
case 0x663f7b:c.instructions+=12;goto B663f7b;
case 0x663f7e:c.instructions+=11;goto B663f7e;
case 0x663f81:c.instructions+=10;goto B663f81;
case 0x663f83:c.instructions+=9;goto B663f83;
case 0x663f86:c.instructions+=8;goto B663f86;
case 0x663f89:c.instructions+=7;goto B663f89;
case 0x663f8c:c.instructions+=6;goto B663f8c;
case 0x663f8f:c.instructions+=5;goto B663f8f;
case 0x663f92:c.instructions+=4;goto B663f92;
case 0x663f98:c.instructions+=3;goto B663f98;
case 0x663f9e:c.instructions+=2;goto B663f9e;
case 0x663fa4:c.instructions+=1;goto B663fa4;
case 0x663fab:goto L663fab;
case 0x663fb2:c.instructions+=10;goto B663fb2;
case 0x663fb4:c.instructions+=9;goto B663fb4;
case 0x663fb6:c.instructions+=8;goto B663fb6;
case 0x663fb7:c.instructions+=7;goto B663fb7;
case 0x663fb8:c.instructions+=6;goto B663fb8;
case 0x663fba:c.instructions+=5;goto B663fba;
case 0x663fbd:c.instructions+=4;goto B663fbd;
case 0x663fc0:c.instructions+=3;goto B663fc0;
case 0x663fc3:c.instructions+=2;goto B663fc3;
case 0x663fc6:c.instructions+=1;goto B663fc6;
case 0x663fc8:goto L663fc8;
case 0x663fc9:c.instructions+=5;goto B663fc9;
case 0x663fca:c.instructions+=4;goto B663fca;
case 0x663fcc:c.instructions+=3;goto B663fcc;
case 0x663fcd:c.instructions+=2;goto B663fcd;
case 0x663fce:c.instructions+=1;goto B663fce;
case 0x663fcf:goto L663fcf;
case 0x663fd1:c.instructions+=7;goto B663fd1;
case 0x663fd2:c.instructions+=6;goto B663fd2;
case 0x663fd3:c.instructions+=5;goto B663fd3;
case 0x663fd5:c.instructions+=4;goto B663fd5;
case 0x663fd8:c.instructions+=3;goto B663fd8;
case 0x663fda:c.instructions+=2;goto B663fda;
case 0x663fdc:c.instructions+=1;goto B663fdc;
case 0x663fde:goto L663fde;
case 0x663fe0:c.instructions+=1;goto B663fe0;
case 0x663fe5:goto L663fe5;
case 0x663fe8:goto L663fe8;
case 0x663fea:c.instructions+=2;goto B663fea;
case 0x663fec:c.instructions+=1;goto B663fec;
case 0x663fee:goto L663fee;
case 0x663ff1:c.instructions+=1;goto B663ff1;
case 0x663ff3:goto L663ff3;
case 0x663ff6:c.instructions+=1;goto B663ff6;
case 0x663ff8:goto L663ff8;
case 0x663ffb:c.instructions+=1;goto B663ffb;
case 0x663ffd:goto L663ffd;
default:missing_instruction(c.pc);}
B663002:L663002:{c.instructions+=7;NFSU2_TR(0x663002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663005:{NFSU2_TR(0x663005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663009:{NFSU2_TR(0x663009);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66300d:{NFSU2_TR(0x66300d);
__builtin_memmove((R+24),(R+8),4);
}
B66300f:{NFSU2_TR(0x66300f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B663012:{NFSU2_TR(0x663012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663015:{NFSU2_TR(0x663015);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66305c;}}
}
B663017:L663017:{c.instructions+=3;NFSU2_TR(0x663017);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B663019:{NFSU2_TR(0x663019);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66301b:{NFSU2_TR(0x66301b);
if(r1(R+518)){{goto L66305c;}}
}
B66301d:L66301d:{c.instructions+=2;NFSU2_TR(0x66301d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663020:{NFSU2_TR(0x663020);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66304d;}}
}
B663022:L663022:{c.instructions+=1;NFSU2_TR(0x663022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B663025:L663025:{c.instructions+=2;NFSU2_TR(0x663025);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663027:{NFSU2_TR(0x663027);
if(r1(R+518)){{goto L66304d;}}
}
B663029:L663029:{c.instructions+=3;NFSU2_TR(0x663029);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66302b:{NFSU2_TR(0x66302b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66302e:{NFSU2_TR(0x66302e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663040;}}
}
B663030:L663030:{c.instructions+=1;NFSU2_TR(0x663030);
__builtin_memmove((R+4),(R+12),4);
}
B663032:L663032:{c.instructions+=6;NFSU2_TR(0x663032);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B663034:{NFSU2_TR(0x663034);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B663037:{NFSU2_TR(0x663037);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B66303a:{NFSU2_TR(0x66303a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66303b:{NFSU2_TR(0x66303b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66303e:{NFSU2_TR(0x66303e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663032u);}goto L663032;}}
}
B663040:L663040:{c.instructions+=6;NFSU2_TR(0x663040);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B663043:{NFSU2_TR(0x663043);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B663044:{NFSU2_TR(0x663044);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B663045:{NFSU2_TR(0x663045);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B663048:{NFSU2_TR(0x663048);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66304b:{NFSU2_TR(0x66304b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663025u);}goto L663025;}}
}
B66304d:L66304d:{c.instructions+=5;NFSU2_TR(0x66304d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663051:{NFSU2_TR(0x663051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663054:{NFSU2_TR(0x663054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663057:{NFSU2_TR(0x663057);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66305a:{NFSU2_TR(0x66305a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663017u);}goto L663017;}}
}
B66305c:L66305c:{c.instructions+=2;NFSU2_TR(0x66305c);
__builtin_memmove((R+8),(R+24),4);
}
B66305e:{NFSU2_TR(0x66305e);
{goto L663253;}
}
B663063:L663063:{c.instructions+=4;NFSU2_TR(0x663063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663067:{NFSU2_TR(0x663067);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66306b:{NFSU2_TR(0x66306b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66306e:{NFSU2_TR(0x66306e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663253;}}
}
B663074:L663074:{c.instructions+=3;NFSU2_TR(0x663074);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B663076:{NFSU2_TR(0x663076);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663078:{NFSU2_TR(0x663078);
if(r1(R+518)){{goto L663253;}}
}
B66307e:L66307e:{c.instructions+=2;NFSU2_TR(0x66307e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663081:{NFSU2_TR(0x663081);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6630af;}}
}
B663083:L663083:{c.instructions+=3;NFSU2_TR(0x663083);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B663085:{NFSU2_TR(0x663085);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663087:{NFSU2_TR(0x663087);
if(r1(R+518)){{goto L6630af;}}
}
B663089:L663089:{c.instructions+=2;NFSU2_TR(0x663089);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66308c:{NFSU2_TR(0x66308c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6630a5;}}
}
B66308e:L66308e:{c.instructions+=2;NFSU2_TR(0x66308e);
__builtin_memmove((R+4),(R+28),4);
}
B663090:{NFSU2_TR(0x663090);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B663093:L663093:{c.instructions+=7;NFSU2_TR(0x663093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B663096:{NFSU2_TR(0x663096);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B663099:{NFSU2_TR(0x663099);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B66309c:{NFSU2_TR(0x66309c);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B66309f:{NFSU2_TR(0x66309f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6630a0:{NFSU2_TR(0x6630a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6630a3:{NFSU2_TR(0x6630a3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663093u);}goto L663093;}}
}
B6630a5:L6630a5:{c.instructions+=5;NFSU2_TR(0x6630a5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6630a8:{NFSU2_TR(0x6630a8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6630a9:{NFSU2_TR(0x6630a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6630aa:{NFSU2_TR(0x6630aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6630ad:{NFSU2_TR(0x6630ad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663083u);}goto L663083;}}
}
B6630af:L6630af:{c.instructions+=4;NFSU2_TR(0x6630af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6630b2:{NFSU2_TR(0x6630b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6630b5:{NFSU2_TR(0x6630b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6630b8:{NFSU2_TR(0x6630b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663074u);}goto L663074;}}
}
B6630ba:L6630ba:{c.instructions+=1;NFSU2_TR(0x6630ba);
{goto L663253;}
}
B6630bf:L6630bf:{c.instructions+=4;NFSU2_TR(0x6630bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6630c3:{NFSU2_TR(0x6630c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6630c7:{NFSU2_TR(0x6630c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6630ca:{NFSU2_TR(0x6630ca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663253;}}
}
B6630d0:L6630d0:{c.instructions+=3;NFSU2_TR(0x6630d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6630d2:{NFSU2_TR(0x6630d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6630d4:{NFSU2_TR(0x6630d4);
if(r1(R+518)){{goto L663253;}}
}
B6630da:L6630da:{c.instructions+=2;NFSU2_TR(0x6630da);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6630dd:{NFSU2_TR(0x6630dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66310b;}}
}
B6630df:L6630df:{c.instructions+=3;NFSU2_TR(0x6630df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6630e1:{NFSU2_TR(0x6630e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6630e3:{NFSU2_TR(0x6630e3);
if(r1(R+518)){{goto L66310b;}}
}
B6630e5:L6630e5:{c.instructions+=2;NFSU2_TR(0x6630e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6630e8:{NFSU2_TR(0x6630e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663101;}}
}
B6630ea:L6630ea:{c.instructions+=2;NFSU2_TR(0x6630ea);
__builtin_memmove((R+4),(R+28),4);
}
B6630ec:{NFSU2_TR(0x6630ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6630ef:L6630ef:{c.instructions+=7;NFSU2_TR(0x6630ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6630f2:{NFSU2_TR(0x6630f2);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6630f5:{NFSU2_TR(0x6630f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6630f8:{NFSU2_TR(0x6630f8);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6630fb:{NFSU2_TR(0x6630fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6630fc:{NFSU2_TR(0x6630fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6630ff:{NFSU2_TR(0x6630ff);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6630efu);}goto L6630ef;}}
}
B663101:L663101:{c.instructions+=5;NFSU2_TR(0x663101);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B663104:{NFSU2_TR(0x663104);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B663105:{NFSU2_TR(0x663105);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B663106:{NFSU2_TR(0x663106);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B663109:{NFSU2_TR(0x663109);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6630dfu);}goto L6630df;}}
}
B66310b:L66310b:{c.instructions+=4;NFSU2_TR(0x66310b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66310e:{NFSU2_TR(0x66310e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663111:{NFSU2_TR(0x663111);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B663114:{NFSU2_TR(0x663114);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6630d0u);}goto L6630d0;}}
}
B663116:L663116:{c.instructions+=1;NFSU2_TR(0x663116);
{goto L663253;}
}
B66311b:L66311b:{c.instructions+=9;NFSU2_TR(0x66311b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66311e:{NFSU2_TR(0x66311e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B663121:{NFSU2_TR(0x663121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B663123:{NFSU2_TR(0x663123);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B663125:{NFSU2_TR(0x663125);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663128:{NFSU2_TR(0x663128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66312b:{NFSU2_TR(0x66312b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66312e:{NFSU2_TR(0x66312e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663131:{NFSU2_TR(0x663131);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66313e;}}
}
B663133:L663133:{c.instructions+=5;NFSU2_TR(0x663133);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663135:{NFSU2_TR(0x663135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B663136:{NFSU2_TR(0x663136);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B663138:{NFSU2_TR(0x663138);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66313b:{NFSU2_TR(0x66313b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66313e:L66313e:{c.instructions+=2;NFSU2_TR(0x66313e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66313f:{NFSU2_TR(0x66313f);
if(r1(R+518)){{goto L663200;}}
}
B663145:L663145:{c.instructions+=2;NFSU2_TR(0x663145);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B663146:{NFSU2_TR(0x663146);
if(r1(R+518)){{goto L6631a5;}}
}
B663148:L663148:{c.instructions+=2;NFSU2_TR(0x663148);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B663149:{NFSU2_TR(0x663149);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663253;}}
}
B66314f:L66314f:{c.instructions+=5;NFSU2_TR(0x66314f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663152:{NFSU2_TR(0x663152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663155:{NFSU2_TR(0x663155);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B663157:{NFSU2_TR(0x663157);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66315a:{NFSU2_TR(0x66315a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663253;}}
}
B663160:L663160:{c.instructions+=2;NFSU2_TR(0x663160);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663162:{NFSU2_TR(0x663162);
if(r1(R+518)){{goto L663253;}}
}
B663168:L663168:{c.instructions+=3;NFSU2_TR(0x663168);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66316a:{NFSU2_TR(0x66316a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66316c:{NFSU2_TR(0x66316c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663194;}}
}
B66316e:L66316e:{c.instructions+=2;NFSU2_TR(0x66316e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663170:{NFSU2_TR(0x663170);
if(r1(R+518)){{goto L663194;}}
}
B663172:L663172:{c.instructions+=14;NFSU2_TR(0x663172);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B663174:{NFSU2_TR(0x663174);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B663177:{NFSU2_TR(0x663177);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B663179:{NFSU2_TR(0x663179);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B66317c:{NFSU2_TR(0x66317c);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66317f:{NFSU2_TR(0x66317f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B663180:{NFSU2_TR(0x663180);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B663183:{NFSU2_TR(0x663183);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B663184:{NFSU2_TR(0x663184);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B663186:{NFSU2_TR(0x663186);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B663189:{NFSU2_TR(0x663189);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B66318c:{NFSU2_TR(0x66318c);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66318f:{NFSU2_TR(0x66318f);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B663192:{NFSU2_TR(0x663192);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66316eu);}goto L66316e;}}
}
B663194:L663194:{c.instructions+=5;NFSU2_TR(0x663194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663197:{NFSU2_TR(0x663197);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B663198:{NFSU2_TR(0x663198);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66319b:{NFSU2_TR(0x66319b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66319e:{NFSU2_TR(0x66319e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663160u);}goto L663160;}}
}
B6631a0:L6631a0:{c.instructions+=1;NFSU2_TR(0x6631a0);
{goto L663253;}
}
B6631a5:L6631a5:{c.instructions+=6;NFSU2_TR(0x6631a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6631a8:{NFSU2_TR(0x6631a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6631ab:{NFSU2_TR(0x6631ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6631ae:{NFSU2_TR(0x6631ae);
__builtin_memmove((R+28),(R+8),4);
}
B6631b0:{NFSU2_TR(0x6631b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6631b3:{NFSU2_TR(0x6631b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663251;}}
}
B6631b9:L6631b9:{c.instructions+=2;NFSU2_TR(0x6631b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6631bb:{NFSU2_TR(0x6631bb);
if(r1(R+518)){{goto L663251;}}
}
B6631c1:L6631c1:{c.instructions+=3;NFSU2_TR(0x6631c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6631c3:{NFSU2_TR(0x6631c3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6631c5:{NFSU2_TR(0x6631c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6631ed;}}
}
B6631c7:L6631c7:{c.instructions+=2;NFSU2_TR(0x6631c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6631c9:{NFSU2_TR(0x6631c9);
if(r1(R+518)){{goto L6631ed;}}
}
B6631cb:L6631cb:{c.instructions+=3;NFSU2_TR(0x6631cb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6631cd:{NFSU2_TR(0x6631cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6631d0:{NFSU2_TR(0x6631d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6631de;}}
}
B6631d2:L6631d2:{c.instructions+=5;NFSU2_TR(0x6631d2);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6631d5:{NFSU2_TR(0x6631d5);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6631d8:{NFSU2_TR(0x6631d8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6631d9:{NFSU2_TR(0x6631d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6631dc:{NFSU2_TR(0x6631dc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6631d2u);}goto L6631d2;}}
}
B6631de:L6631de:{c.instructions+=7;NFSU2_TR(0x6631de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6631e1:{NFSU2_TR(0x6631e1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B6631e4:{NFSU2_TR(0x6631e4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6631e7:{NFSU2_TR(0x6631e7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6631e8:{NFSU2_TR(0x6631e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6631e9:{NFSU2_TR(0x6631e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6631eb:{NFSU2_TR(0x6631eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6631c7u);}goto L6631c7;}}
}
B6631ed:L6631ed:{c.instructions+=6;NFSU2_TR(0x6631ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6631f0:{NFSU2_TR(0x6631f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6631f3:{NFSU2_TR(0x6631f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6631f6:{NFSU2_TR(0x6631f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6631f9:{NFSU2_TR(0x6631f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6631fc:{NFSU2_TR(0x6631fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6631b9u);}goto L6631b9;}}
}
B6631fe:L6631fe:{c.instructions+=1;NFSU2_TR(0x6631fe);
{goto L663251;}
}
B663200:L663200:{c.instructions+=6;NFSU2_TR(0x663200);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663203:{NFSU2_TR(0x663203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663206:{NFSU2_TR(0x663206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663209:{NFSU2_TR(0x663209);
__builtin_memmove((R+28),(R+8),4);
}
B66320b:{NFSU2_TR(0x66320b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66320e:{NFSU2_TR(0x66320e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663251;}}
}
B663210:L663210:{c.instructions+=2;NFSU2_TR(0x663210);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663212:{NFSU2_TR(0x663212);
if(r1(R+518)){{goto L663251;}}
}
B663214:L663214:{c.instructions+=3;NFSU2_TR(0x663214);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B663216:{NFSU2_TR(0x663216);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663218:{NFSU2_TR(0x663218);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663240;}}
}
B66321a:L66321a:{c.instructions+=2;NFSU2_TR(0x66321a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66321c:{NFSU2_TR(0x66321c);
if(r1(R+518)){{goto L663240;}}
}
B66321e:L66321e:{c.instructions+=3;NFSU2_TR(0x66321e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B663220:{NFSU2_TR(0x663220);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663223:{NFSU2_TR(0x663223);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663231;}}
}
B663225:L663225:{c.instructions+=5;NFSU2_TR(0x663225);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B663228:{NFSU2_TR(0x663228);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B66322b:{NFSU2_TR(0x66322b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B66322c:{NFSU2_TR(0x66322c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B66322f:{NFSU2_TR(0x66322f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663225u);}goto L663225;}}
}
B663231:L663231:{c.instructions+=7;NFSU2_TR(0x663231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B663234:{NFSU2_TR(0x663234);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B663237:{NFSU2_TR(0x663237);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B66323a:{NFSU2_TR(0x66323a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B66323b:{NFSU2_TR(0x66323b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66323c:{NFSU2_TR(0x66323c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66323e:{NFSU2_TR(0x66323e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66321au);}goto L66321a;}}
}
B663240:L663240:{c.instructions+=6;NFSU2_TR(0x663240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663243:{NFSU2_TR(0x663243);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663246:{NFSU2_TR(0x663246);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B663249:{NFSU2_TR(0x663249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66324c:{NFSU2_TR(0x66324c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66324f:{NFSU2_TR(0x66324f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663210u);}goto L663210;}}
}
B663251:L663251:{c.instructions+=1;NFSU2_TR(0x663251);
__builtin_memmove((R+8),(R+28),4);
}
B663253:L663253:{c.instructions+=9;NFSU2_TR(0x663253);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+8))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B663256:{NFSU2_TR(0x663256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663259:{NFSU2_TR(0x663259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66325a:{NFSU2_TR(0x66325a);
u8 U[48];
w4(U+40,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B66325d:{NFSU2_TR(0x66325d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66325e:{NFSU2_TR(0x66325e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B663260:{NFSU2_TR(0x663260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B663261:{NFSU2_TR(0x663261);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B663262:{NFSU2_TR(0x663262);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663265:L663265:{c.instructions+=17;NFSU2_TR(0x663265);
__builtin_memmove((R+28),(R+28),4);
}
B663267:{NFSU2_TR(0x663267);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663268:{NFSU2_TR(0x663268);
__builtin_memmove((R+20),(R+16),4);
}
B66326a:{NFSU2_TR(0x66326a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66326d:{NFSU2_TR(0x66326d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663270:{NFSU2_TR(0x663270);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663273:{NFSU2_TR(0x663273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663275:{NFSU2_TR(0x663275);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663276:{NFSU2_TR(0x663276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B663279:{NFSU2_TR(0x663279);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66327b:{NFSU2_TR(0x66327b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66327e:{NFSU2_TR(0x66327e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663281:{NFSU2_TR(0x663281);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663282:{NFSU2_TR(0x663282);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663283:{NFSU2_TR(0x663283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663286:{NFSU2_TR(0x663286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663289:{NFSU2_TR(0x663289);
if(r1(R+518)){{goto L663293;}}
}
B66328b:L66328b:{c.instructions+=3;NFSU2_TR(0x66328b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66328e:{NFSU2_TR(0x66328e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B663291:{NFSU2_TR(0x663291);
{goto L663295;}
}
B663293:L663293:{c.instructions+=1;NFSU2_TR(0x663293);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B663295:L663295:{c.instructions+=2;NFSU2_TR(0x663295);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663297:{NFSU2_TR(0x663297);
if(r1(R+518)){{goto L6632a1;}}
}
B663299:L663299:{c.instructions+=3;NFSU2_TR(0x663299);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66329c:{NFSU2_TR(0x66329c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B66329f:{NFSU2_TR(0x66329f);
{goto L6632a7;}
}
B6632a1:L6632a1:{c.instructions+=2;NFSU2_TR(0x6632a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6632a4:{NFSU2_TR(0x6632a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6632a7:L6632a7:{c.instructions+=3;NFSU2_TR(0x6632a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6632aa:{NFSU2_TR(0x6632aa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6632ad:{NFSU2_TR(0x6632ad);
if(r1(R+518)){{goto L6632b4;}}
}
B6632af:L6632af:{c.instructions+=2;NFSU2_TR(0x6632af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6632b2:{NFSU2_TR(0x6632b2);
{goto L6632c5;}
}
B6632b4:L6632b4:{c.instructions+=4;NFSU2_TR(0x6632b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6632b7:{NFSU2_TR(0x6632b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6632b9:{NFSU2_TR(0x6632b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6632bc:{NFSU2_TR(0x6632bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6632c5;}}
}
B6632be:L6632be:{c.instructions+=1;NFSU2_TR(0x6632be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6632c5:L6632c5:{c.instructions+=2;NFSU2_TR(0x6632c5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6632c7:{NFSU2_TR(0x6632c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66355c;}}
}
B6632cd:L6632cd:{c.instructions+=2;NFSU2_TR(0x6632cd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6632d0:{NFSU2_TR(0x6632d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66344b;}}
}
B6632d6:L6632d6:{c.instructions+=2;NFSU2_TR(0x6632d6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6632d9:{NFSU2_TR(0x6632d9);
if(r1(R+518)){{goto L66337c;}}
}
B6632df:L6632df:{c.instructions+=2;NFSU2_TR(0x6632df);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6632e2:{NFSU2_TR(0x6632e2);
if(r1(R+518)){{goto L66344b;}}
}
B6632e8:L6632e8:{c.instructions+=2;NFSU2_TR(0x6632e8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6632eb:{NFSU2_TR(0x6632eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66355c;}}
}
B6632f1:L6632f1:{c.instructions+=4;NFSU2_TR(0x6632f1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6632f3:{NFSU2_TR(0x6632f3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6632f5:{NFSU2_TR(0x6632f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6632f8:{NFSU2_TR(0x6632f8);
if(r1(R+518)){{goto L663302;}}
}
B6632fa:L6632fa:{c.instructions+=3;NFSU2_TR(0x6632fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6632fd:{NFSU2_TR(0x6632fd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6632ff:{NFSU2_TR(0x6632ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663302:L663302:{c.instructions+=6;NFSU2_TR(0x663302);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663305:{NFSU2_TR(0x663305);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B663308:{NFSU2_TR(0x663308);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66330b:{NFSU2_TR(0x66330b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66330e:{NFSU2_TR(0x66330e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663311:{NFSU2_TR(0x663311);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66355c;}}
}
B663317:L663317:{c.instructions+=2;NFSU2_TR(0x663317);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66331b:{NFSU2_TR(0x66331b);
if(r1(R+518)){{goto L66355c;}}
}
B663321:L663321:{c.instructions+=5;NFSU2_TR(0x663321);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663324:{NFSU2_TR(0x663324);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B663326:{NFSU2_TR(0x663326);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663328:{NFSU2_TR(0x663328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66332b:{NFSU2_TR(0x66332b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66336c;}}
}
B66332d:L66332d:{c.instructions+=2;NFSU2_TR(0x66332d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663330:{NFSU2_TR(0x663330);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B663333:L663333:{c.instructions+=2;NFSU2_TR(0x663333);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663337:{NFSU2_TR(0x663337);
if(r1(R+518)){{goto L66336c;}}
}
B663339:L663339:{c.instructions+=2;NFSU2_TR(0x663339);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66333d:{NFSU2_TR(0x66333d);
if(r1(R+518)){{goto L663344;}}
}
B66333f:L66333f:{c.instructions+=2;NFSU2_TR(0x66333f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663341:{NFSU2_TR(0x663341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663344:L663344:{c.instructions+=12;NFSU2_TR(0x663344);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663346:{NFSU2_TR(0x663346);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B663349:{NFSU2_TR(0x663349);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66334a:{NFSU2_TR(0x66334a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66334d:{NFSU2_TR(0x66334d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B663350:{NFSU2_TR(0x663350);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663353:{NFSU2_TR(0x663353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663354:{NFSU2_TR(0x663354);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B663357:{NFSU2_TR(0x663357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663358:{NFSU2_TR(0x663358);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66335b:{NFSU2_TR(0x66335b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66335c:{NFSU2_TR(0x66335c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663361ull));
TAIL_STATIC(0x65febfu,65f);
}
B663361:L663361:{c.instructions+=5;NFSU2_TR(0x663361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663364:{NFSU2_TR(0x663364);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B663365:{NFSU2_TR(0x663365);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B663368:{NFSU2_TR(0x663368);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B66336a:{NFSU2_TR(0x66336a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663333u);}goto L663333;}}
}
B66336c:L66336c:{c.instructions+=4;NFSU2_TR(0x66336c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66336f:{NFSU2_TR(0x66336f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663372:{NFSU2_TR(0x663372);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B663375:{NFSU2_TR(0x663375);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663317u);}goto L663317;}}
}
B663377:L663377:{c.instructions+=1;NFSU2_TR(0x663377);
{goto L66355c;}
}
B66337c:L66337c:{c.instructions+=4;NFSU2_TR(0x66337c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66337f:{NFSU2_TR(0x66337f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663381:{NFSU2_TR(0x663381);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B663382:{NFSU2_TR(0x663382);
if(r1(R+518)){{goto L66340f;}}
}
B663388:L663388:{c.instructions+=2;NFSU2_TR(0x663388);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B663389:{NFSU2_TR(0x663389);
if(r1(R+518)){{goto L6633d3;}}
}
B66338b:L66338b:{c.instructions+=2;NFSU2_TR(0x66338b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66338c:{NFSU2_TR(0x66338c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66355c;}}
}
B663392:L663392:{c.instructions+=6;NFSU2_TR(0x663392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663395:{NFSU2_TR(0x663395);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B663397:{NFSU2_TR(0x663397);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66339a:{NFSU2_TR(0x66339a);
__builtin_memmove((R+8),(R+4),4);
}
B66339c:{NFSU2_TR(0x66339c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66339f:{NFSU2_TR(0x66339f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66355a;}}
}
B6633a5:L6633a5:{c.instructions+=2;NFSU2_TR(0x6633a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6633a7:{NFSU2_TR(0x6633a7);
if(r1(R+518)){{goto L66355a;}}
}
B6633ad:L6633ad:{c.instructions+=3;NFSU2_TR(0x6633ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6633af:{NFSU2_TR(0x6633af);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6633b1:{NFSU2_TR(0x6633b1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6633c5;}}
}
B6633b3:L6633b3:{c.instructions+=2;NFSU2_TR(0x6633b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6633b5:{NFSU2_TR(0x6633b5);
if(r1(R+518)){{goto L6633c5;}}
}
B6633b7:L6633b7:{c.instructions+=7;NFSU2_TR(0x6633b7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6633ba:{NFSU2_TR(0x6633ba);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6633bc:{NFSU2_TR(0x6633bc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6633bf:{NFSU2_TR(0x6633bf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6633c0:{NFSU2_TR(0x6633c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6633c1:{NFSU2_TR(0x6633c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6633c3:{NFSU2_TR(0x6633c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6633b3u);}goto L6633b3;}}
}
B6633c5:L6633c5:{c.instructions+=4;NFSU2_TR(0x6633c5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6633c8:{NFSU2_TR(0x6633c8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6633c9:{NFSU2_TR(0x6633c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6633cc:{NFSU2_TR(0x6633cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6633a5u);}goto L6633a5;}}
}
B6633ce:L6633ce:{c.instructions+=1;NFSU2_TR(0x6633ce);
{goto L66355a;}
}
B6633d3:L6633d3:{c.instructions+=4;NFSU2_TR(0x6633d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6633d6:{NFSU2_TR(0x6633d6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6633d8:{NFSU2_TR(0x6633d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6633db:{NFSU2_TR(0x6633db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66355c;}}
}
B6633e1:L6633e1:{c.instructions+=2;NFSU2_TR(0x6633e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6633e3:{NFSU2_TR(0x6633e3);
if(r1(R+518)){{goto L66355c;}}
}
B6633e9:L6633e9:{c.instructions+=3;NFSU2_TR(0x6633e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6633eb:{NFSU2_TR(0x6633eb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6633ed:{NFSU2_TR(0x6633ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663404;}}
}
B6633ef:L6633ef:{c.instructions+=2;NFSU2_TR(0x6633ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6633f1:{NFSU2_TR(0x6633f1);
if(r1(R+518)){{goto L663404;}}
}
B6633f3:L6633f3:{c.instructions+=8;NFSU2_TR(0x6633f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6633f6:{NFSU2_TR(0x6633f6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6633f9:{NFSU2_TR(0x6633f9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6633fb:{NFSU2_TR(0x6633fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6633fe:{NFSU2_TR(0x6633fe);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6633ff:{NFSU2_TR(0x6633ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B663400:{NFSU2_TR(0x663400);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B663402:{NFSU2_TR(0x663402);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6633efu);}goto L6633ef;}}
}
B663404:L663404:{c.instructions+=3;NFSU2_TR(0x663404);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B663405:{NFSU2_TR(0x663405);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B663408:{NFSU2_TR(0x663408);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6633e1u);}goto L6633e1;}}
}
B66340a:L66340a:{c.instructions+=1;NFSU2_TR(0x66340a);
{goto L66355c;}
}
B66340f:L66340f:{c.instructions+=4;NFSU2_TR(0x66340f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B663412:{NFSU2_TR(0x663412);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B663414:{NFSU2_TR(0x663414);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663417:{NFSU2_TR(0x663417);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66355c;}}
}
B66341d:L66341d:{c.instructions+=2;NFSU2_TR(0x66341d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66341f:{NFSU2_TR(0x66341f);
if(r1(R+518)){{goto L66355c;}}
}
B663425:L663425:{c.instructions+=3;NFSU2_TR(0x663425);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B663427:{NFSU2_TR(0x663427);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663429:{NFSU2_TR(0x663429);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663440;}}
}
B66342b:L66342b:{c.instructions+=2;NFSU2_TR(0x66342b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66342d:{NFSU2_TR(0x66342d);
if(r1(R+518)){{goto L663440;}}
}
B66342f:L66342f:{c.instructions+=8;NFSU2_TR(0x66342f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663432:{NFSU2_TR(0x663432);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B663435:{NFSU2_TR(0x663435);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B663437:{NFSU2_TR(0x663437);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B66343a:{NFSU2_TR(0x66343a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B66343b:{NFSU2_TR(0x66343b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66343c:{NFSU2_TR(0x66343c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66343e:{NFSU2_TR(0x66343e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66342bu);}goto L66342b;}}
}
B663440:L663440:{c.instructions+=3;NFSU2_TR(0x663440);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B663441:{NFSU2_TR(0x663441);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B663444:{NFSU2_TR(0x663444);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66341du);}goto L66341d;}}
}
B663446:L663446:{c.instructions+=1;NFSU2_TR(0x663446);
{goto L66355c;}
}
B66344b:L66344b:{c.instructions+=7;NFSU2_TR(0x66344b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66344e:{NFSU2_TR(0x66344e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B663450:{NFSU2_TR(0x663450);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B663452:{NFSU2_TR(0x663452);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663455:{NFSU2_TR(0x663455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663458:{NFSU2_TR(0x663458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66345b:{NFSU2_TR(0x66345b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663468;}}
}
B66345d:L66345d:{c.instructions+=5;NFSU2_TR(0x66345d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66345f:{NFSU2_TR(0x66345f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B663460:{NFSU2_TR(0x663460);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B663462:{NFSU2_TR(0x663462);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B663465:{NFSU2_TR(0x663465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663468:L663468:{c.instructions+=2;NFSU2_TR(0x663468);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B663469:{NFSU2_TR(0x663469);
if(r1(R+518)){{goto L663517;}}
}
B66346f:L66346f:{c.instructions+=2;NFSU2_TR(0x66346f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B663470:{NFSU2_TR(0x663470);
if(r1(R+518)){{goto L6634d2;}}
}
B663472:L663472:{c.instructions+=2;NFSU2_TR(0x663472);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B663473:{NFSU2_TR(0x663473);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66355c;}}
}
B663479:L663479:{c.instructions+=5;NFSU2_TR(0x663479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66347c:{NFSU2_TR(0x66347c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66347f:{NFSU2_TR(0x66347f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B663481:{NFSU2_TR(0x663481);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663484:{NFSU2_TR(0x663484);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66355c;}}
}
B66348a:L66348a:{c.instructions+=2;NFSU2_TR(0x66348a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66348c:{NFSU2_TR(0x66348c);
if(r1(R+518)){{goto L66355c;}}
}
B663492:L663492:{c.instructions+=3;NFSU2_TR(0x663492);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B663494:{NFSU2_TR(0x663494);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663497:{NFSU2_TR(0x663497);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6634c1;}}
}
B663499:L663499:{c.instructions+=2;NFSU2_TR(0x663499);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66349b:{NFSU2_TR(0x66349b);
if(r1(R+518)){{goto L6634c1;}}
}
B66349d:L66349d:{c.instructions+=15;NFSU2_TR(0x66349d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66349f:{NFSU2_TR(0x66349f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6634a2:{NFSU2_TR(0x6634a2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6634a4:{NFSU2_TR(0x6634a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6634a7:{NFSU2_TR(0x6634a7);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6634aa:{NFSU2_TR(0x6634aa);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6634ab:{NFSU2_TR(0x6634ab);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6634ad:{NFSU2_TR(0x6634ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6634ae:{NFSU2_TR(0x6634ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6634b1:{NFSU2_TR(0x6634b1);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6634b4:{NFSU2_TR(0x6634b4);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6634b7:{NFSU2_TR(0x6634b7);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6634ba:{NFSU2_TR(0x6634ba);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6634bd:{NFSU2_TR(0x6634bd);
__builtin_memmove((R+4),(R+8),4);
}
B6634bf:{NFSU2_TR(0x6634bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663499u);}goto L663499;}}
}
B6634c1:L6634c1:{c.instructions+=5;NFSU2_TR(0x6634c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6634c4:{NFSU2_TR(0x6634c4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6634c5:{NFSU2_TR(0x6634c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6634c8:{NFSU2_TR(0x6634c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6634cb:{NFSU2_TR(0x6634cb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66348au);}goto L66348a;}}
}
B6634cd:L6634cd:{c.instructions+=1;NFSU2_TR(0x6634cd);
{goto L66355c;}
}
B6634d2:L6634d2:{c.instructions+=6;NFSU2_TR(0x6634d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6634d6:{NFSU2_TR(0x6634d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6634da:{NFSU2_TR(0x6634da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6634dd:{NFSU2_TR(0x6634dd);
__builtin_memmove((R+8),(R+4),4);
}
B6634df:{NFSU2_TR(0x6634df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6634e2:{NFSU2_TR(0x6634e2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66355a;}}
}
B6634e4:L6634e4:{c.instructions+=1;NFSU2_TR(0x6634e4);
{goto L6634e9;}
}
B6634e6:L6634e6:{c.instructions+=1;NFSU2_TR(0x6634e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6634e9:L6634e9:{c.instructions+=2;NFSU2_TR(0x6634e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6634eb:{NFSU2_TR(0x6634eb);
if(r1(R+518)){{goto L66355a;}}
}
B6634ed:L6634ed:{c.instructions+=3;NFSU2_TR(0x6634ed);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6634ef:{NFSU2_TR(0x6634ef);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6634f1:{NFSU2_TR(0x6634f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663507;}}
}
B6634f3:L6634f3:{c.instructions+=2;NFSU2_TR(0x6634f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6634f5:{NFSU2_TR(0x6634f5);
if(r1(R+518)){{goto L663507;}}
}
B6634f7:L6634f7:{c.instructions+=8;NFSU2_TR(0x6634f7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6634f9:{NFSU2_TR(0x6634f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6634fc:{NFSU2_TR(0x6634fc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6634fe:{NFSU2_TR(0x6634fe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B663501:{NFSU2_TR(0x663501);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B663502:{NFSU2_TR(0x663502);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B663503:{NFSU2_TR(0x663503);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B663505:{NFSU2_TR(0x663505);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6634f3u);}goto L6634f3;}}
}
B663507:L663507:{c.instructions+=5;NFSU2_TR(0x663507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66350a:{NFSU2_TR(0x66350a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66350d:{NFSU2_TR(0x66350d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B663510:{NFSU2_TR(0x663510);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B663513:{NFSU2_TR(0x663513);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6634e6u);}goto L6634e6;}}
}
B663515:L663515:{c.instructions+=1;NFSU2_TR(0x663515);
{goto L66355a;}
}
B663517:L663517:{c.instructions+=6;NFSU2_TR(0x663517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66351b:{NFSU2_TR(0x66351b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66351f:{NFSU2_TR(0x66351f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663522:{NFSU2_TR(0x663522);
__builtin_memmove((R+8),(R+4),4);
}
B663524:{NFSU2_TR(0x663524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663527:{NFSU2_TR(0x663527);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66355a;}}
}
B663529:L663529:{c.instructions+=1;NFSU2_TR(0x663529);
{goto L66352e;}
}
B66352b:L66352b:{c.instructions+=1;NFSU2_TR(0x66352b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66352e:L66352e:{c.instructions+=2;NFSU2_TR(0x66352e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663530:{NFSU2_TR(0x663530);
if(r1(R+518)){{goto L66355a;}}
}
B663532:L663532:{c.instructions+=3;NFSU2_TR(0x663532);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B663534:{NFSU2_TR(0x663534);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663536:{NFSU2_TR(0x663536);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66354c;}}
}
B663538:L663538:{c.instructions+=2;NFSU2_TR(0x663538);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66353a:{NFSU2_TR(0x66353a);
if(r1(R+518)){{goto L66354c;}}
}
B66353c:L66353c:{c.instructions+=8;NFSU2_TR(0x66353c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66353e:{NFSU2_TR(0x66353e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B663541:{NFSU2_TR(0x663541);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B663543:{NFSU2_TR(0x663543);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B663546:{NFSU2_TR(0x663546);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B663547:{NFSU2_TR(0x663547);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B663548:{NFSU2_TR(0x663548);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B66354a:{NFSU2_TR(0x66354a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663538u);}goto L663538;}}
}
B66354c:L66354c:{c.instructions+=5;NFSU2_TR(0x66354c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66354f:{NFSU2_TR(0x66354f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663552:{NFSU2_TR(0x663552);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B663555:{NFSU2_TR(0x663555);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B663558:{NFSU2_TR(0x663558);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66352bu);}goto L66352b;}}
}
B66355a:L66355a:{c.instructions+=1;NFSU2_TR(0x66355a);
__builtin_memmove((R+4),(R+8),4);
}
B66355c:L66355c:{c.instructions+=9;NFSU2_TR(0x66355c);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66355f:{NFSU2_TR(0x66355f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663562:{NFSU2_TR(0x663562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B663563:{NFSU2_TR(0x663563);
u8 U[48];
w4(U+40,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B663566:{NFSU2_TR(0x663566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B663567:{NFSU2_TR(0x663567);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B663569:{NFSU2_TR(0x663569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66356a:{NFSU2_TR(0x66356a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66356b:{NFSU2_TR(0x66356b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66356e:L66356e:{c.instructions+=18;NFSU2_TR(0x66356e);
__builtin_memmove((R+28),(R+28),4);
}
B663570:{NFSU2_TR(0x663570);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663571:{NFSU2_TR(0x663571);
__builtin_memmove((R+20),(R+16),4);
}
B663573:{NFSU2_TR(0x663573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B663576:{NFSU2_TR(0x663576);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663577:{NFSU2_TR(0x663577);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663578:{NFSU2_TR(0x663578);
__builtin_memmove((R+24),(R+4),4);
}
B66357a:{NFSU2_TR(0x66357a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66357e:{NFSU2_TR(0x66357e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663584:{NFSU2_TR(0x663584);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66358a:{NFSU2_TR(0x66358a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66358c:{NFSU2_TR(0x66358c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B663593:{NFSU2_TR(0x663593);
u8 U[12];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66359a:{NFSU2_TR(0x66359a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66359b:{NFSU2_TR(0x66359b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66359e:{NFSU2_TR(0x66359e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6635a1:{NFSU2_TR(0x6635a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6635a4:{NFSU2_TR(0x6635a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663607;}}
}
B6635a6:L6635a6:{c.instructions+=3;NFSU2_TR(0x6635a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6635a9:{NFSU2_TR(0x6635a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6635ac:{NFSU2_TR(0x6635ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6635af:L6635af:{c.instructions+=4;NFSU2_TR(0x6635af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6635b2:{NFSU2_TR(0x6635b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6635b4:{NFSU2_TR(0x6635b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6635b5:{NFSU2_TR(0x6635b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6635bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6635bb:L6635bb:{c.instructions+=3;NFSU2_TR(0x6635bb);
__builtin_memmove((R+28),(R+0),4);
}
B6635bd:{NFSU2_TR(0x6635bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6635bf:{NFSU2_TR(0x6635bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663679;}}
}
B6635c5:L6635c5:{c.instructions+=2;NFSU2_TR(0x6635c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6635c7:{NFSU2_TR(0x6635c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6635ccull));
TAIL_STATIC(0x671aedu,671);
}
B6635cc:L6635cc:{c.instructions+=4;NFSU2_TR(0x6635cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6635cf:{NFSU2_TR(0x6635cf);
__builtin_memmove((R+4),(R+24),4);
}
B6635d1:{NFSU2_TR(0x6635d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6635d4:{NFSU2_TR(0x6635d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6635d9ull));
TAIL_STATIC(0x660205u,660);
}
B6635d9:L6635d9:{c.instructions+=3;NFSU2_TR(0x6635d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6635da:{NFSU2_TR(0x6635da);
__builtin_memmove((R+28),(R+0),4);
}
B6635dc:{NFSU2_TR(0x6635dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6635e1ull));
TAIL_STATIC(0x671aedu,671);
}
B6635e1:L6635e1:{c.instructions+=2;NFSU2_TR(0x6635e1);
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
B6635e3:{NFSU2_TR(0x6635e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663629;}}
}
B6635e5:L6635e5:{c.instructions+=5;NFSU2_TR(0x6635e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6635e8:{NFSU2_TR(0x6635e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6635eb:{NFSU2_TR(0x6635eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6635ed:{NFSU2_TR(0x6635ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6635ee:{NFSU2_TR(0x6635ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6635f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6635f4:L6635f4:{c.instructions+=3;NFSU2_TR(0x6635f4);
__builtin_memmove((R+28),(R+0),4);
}
B6635f6:{NFSU2_TR(0x6635f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6635f8:{NFSU2_TR(0x6635f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663679;}}
}
B6635fa:L6635fa:{c.instructions+=4;NFSU2_TR(0x6635fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6635fd:{NFSU2_TR(0x6635fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663601:{NFSU2_TR(0x663601);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B663605:{NFSU2_TR(0x663605);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6635afu);}goto L6635af;}}
}
B663607:L663607:{c.instructions+=4;NFSU2_TR(0x663607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66360a:{NFSU2_TR(0x66360a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66360c:{NFSU2_TR(0x66360c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66360d:{NFSU2_TR(0x66360d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663610ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663610:L663610:{c.instructions+=3;NFSU2_TR(0x663610);
__builtin_memmove((R+28),(R+0),4);
}
B663612:{NFSU2_TR(0x663612);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663614:{NFSU2_TR(0x663614);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663679;}}
}
B663616:L663616:{c.instructions+=4;NFSU2_TR(0x663616);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663619:{NFSU2_TR(0x663619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66361b:{NFSU2_TR(0x66361b);
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
B66361d:{NFSU2_TR(0x66361d);
if(r1(R+518)){{goto L66363f;}}
}
B66361f:L66361f:{c.instructions+=3;NFSU2_TR(0x66361f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663621:{NFSU2_TR(0x663621);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663622:{NFSU2_TR(0x663622);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663625ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663625:L663625:{c.instructions+=2;NFSU2_TR(0x663625);
__builtin_memmove((R+28),(R+0),4);
}
B663627:{NFSU2_TR(0x663627);
{goto L663641;}
}
B663629:L663629:{c.instructions+=7;NFSU2_TR(0x663629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66362c:{NFSU2_TR(0x66362c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66362f:{NFSU2_TR(0x66362f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663631:{NFSU2_TR(0x663631);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B663635:{NFSU2_TR(0x663635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663636:{NFSU2_TR(0x663636);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663637:{NFSU2_TR(0x663637);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66363dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66363d:L66363d:{c.instructions+=1;NFSU2_TR(0x66363d);
{goto L663679;}
}
B66363f:L66363f:{c.instructions+=1;NFSU2_TR(0x66363f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B663641:L663641:{c.instructions+=2;NFSU2_TR(0x663641);
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
B663643:{NFSU2_TR(0x663643);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663679;}}
}
B663645:L663645:{c.instructions+=4;NFSU2_TR(0x663645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663648:{NFSU2_TR(0x663648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66364a:{NFSU2_TR(0x66364a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66364b:{NFSU2_TR(0x66364b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66364eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66364e:L66364e:{c.instructions+=3;NFSU2_TR(0x66364e);
__builtin_memmove((R+28),(R+0),4);
}
B663650:{NFSU2_TR(0x663650);
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
B663652:{NFSU2_TR(0x663652);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663679;}}
}
B663654:L663654:{c.instructions+=4;NFSU2_TR(0x663654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663657:{NFSU2_TR(0x663657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663659:{NFSU2_TR(0x663659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66365a:{NFSU2_TR(0x66365a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66365dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66365d:L66365d:{c.instructions+=3;NFSU2_TR(0x66365d);
__builtin_memmove((R+28),(R+0),4);
}
B66365f:{NFSU2_TR(0x66365f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663661:{NFSU2_TR(0x663661);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663679;}}
}
B663663:L663663:{c.instructions+=3;NFSU2_TR(0x663663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663665:{NFSU2_TR(0x663665);
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
B663667:{NFSU2_TR(0x663667);
if(r1(R+518)){{goto L663671;}}
}
B663669:L663669:{c.instructions+=3;NFSU2_TR(0x663669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66366b:{NFSU2_TR(0x66366b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66366c:{NFSU2_TR(0x66366c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66366full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66366f:L66366f:{c.instructions+=1;NFSU2_TR(0x66366f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B663671:L663671:{c.instructions+=3;NFSU2_TR(0x663671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663674:{NFSU2_TR(0x663674);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B663676:{NFSU2_TR(0x663676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663679:L663679:{c.instructions+=3;NFSU2_TR(0x663679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66367c:{NFSU2_TR(0x66367c);
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
B66367e:{NFSU2_TR(0x66367e);
if(r1(R+518)){{goto L663689;}}
}
B663680:L663680:{c.instructions+=3;NFSU2_TR(0x663680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663682:{NFSU2_TR(0x663682);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663683:{NFSU2_TR(0x663683);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663686ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663686:L663686:{c.instructions+=1;NFSU2_TR(0x663686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663689:L663689:{c.instructions+=3;NFSU2_TR(0x663689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66368c:{NFSU2_TR(0x66368c);
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
B66368e:{NFSU2_TR(0x66368e);
if(r1(R+518)){{goto L663696;}}
}
B663690:L663690:{c.instructions+=3;NFSU2_TR(0x663690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663692:{NFSU2_TR(0x663692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663693:{NFSU2_TR(0x663693);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663696ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663696:L663696:{c.instructions+=6;NFSU2_TR(0x663696);
__builtin_memmove((R+0),(R+28),4);
}
B663698:{NFSU2_TR(0x663698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B663699:{NFSU2_TR(0x663699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66369a:{NFSU2_TR(0x66369a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66369b:{NFSU2_TR(0x66369b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66369c:{NFSU2_TR(0x66369c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66369f:L66369f:{c.instructions+=18;NFSU2_TR(0x66369f);
__builtin_memmove((R+28),(R+28),4);
}
B6636a1:{NFSU2_TR(0x6636a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6636a2:{NFSU2_TR(0x6636a2);
__builtin_memmove((R+20),(R+16),4);
}
B6636a4:{NFSU2_TR(0x6636a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6636a7:{NFSU2_TR(0x6636a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6636a8:{NFSU2_TR(0x6636a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6636a9:{NFSU2_TR(0x6636a9);
__builtin_memmove((R+24),(R+4),4);
}
B6636ab:{NFSU2_TR(0x6636ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6636af:{NFSU2_TR(0x6636af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6636b5:{NFSU2_TR(0x6636b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6636bb:{NFSU2_TR(0x6636bb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6636bd:{NFSU2_TR(0x6636bd);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6636c4:{NFSU2_TR(0x6636c4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6636cb:{NFSU2_TR(0x6636cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6636cc:{NFSU2_TR(0x6636cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6636cf:{NFSU2_TR(0x6636cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6636d2:{NFSU2_TR(0x6636d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6636d5:{NFSU2_TR(0x6636d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663738;}}
}
B6636d7:L6636d7:{c.instructions+=3;NFSU2_TR(0x6636d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6636da:{NFSU2_TR(0x6636da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6636dd:{NFSU2_TR(0x6636dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6636e0:L6636e0:{c.instructions+=4;NFSU2_TR(0x6636e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6636e3:{NFSU2_TR(0x6636e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6636e5:{NFSU2_TR(0x6636e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6636e6:{NFSU2_TR(0x6636e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6636ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6636ec:L6636ec:{c.instructions+=3;NFSU2_TR(0x6636ec);
__builtin_memmove((R+28),(R+0),4);
}
B6636ee:{NFSU2_TR(0x6636ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6636f0:{NFSU2_TR(0x6636f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6637aa;}}
}
B6636f6:L6636f6:{c.instructions+=2;NFSU2_TR(0x6636f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6636f8:{NFSU2_TR(0x6636f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6636fdull));
TAIL_STATIC(0x671aedu,671);
}
B6636fd:L6636fd:{c.instructions+=4;NFSU2_TR(0x6636fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663700:{NFSU2_TR(0x663700);
__builtin_memmove((R+4),(R+24),4);
}
B663702:{NFSU2_TR(0x663702);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663705:{NFSU2_TR(0x663705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66370aull));
TAIL_STATIC(0x660326u,660);
}
B66370a:L66370a:{c.instructions+=3;NFSU2_TR(0x66370a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66370b:{NFSU2_TR(0x66370b);
__builtin_memmove((R+28),(R+0),4);
}
B66370d:{NFSU2_TR(0x66370d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663712ull));
TAIL_STATIC(0x671aedu,671);
}
B663712:L663712:{c.instructions+=2;NFSU2_TR(0x663712);
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
B663714:{NFSU2_TR(0x663714);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66375a;}}
}
B663716:L663716:{c.instructions+=5;NFSU2_TR(0x663716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663719:{NFSU2_TR(0x663719);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66371c:{NFSU2_TR(0x66371c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66371e:{NFSU2_TR(0x66371e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66371f:{NFSU2_TR(0x66371f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663725ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663725:L663725:{c.instructions+=3;NFSU2_TR(0x663725);
__builtin_memmove((R+28),(R+0),4);
}
B663727:{NFSU2_TR(0x663727);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663729:{NFSU2_TR(0x663729);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6637aa;}}
}
B66372b:L66372b:{c.instructions+=4;NFSU2_TR(0x66372b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66372e:{NFSU2_TR(0x66372e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663732:{NFSU2_TR(0x663732);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B663736:{NFSU2_TR(0x663736);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6636e0u);}goto L6636e0;}}
}
B663738:L663738:{c.instructions+=4;NFSU2_TR(0x663738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66373b:{NFSU2_TR(0x66373b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66373d:{NFSU2_TR(0x66373d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66373e:{NFSU2_TR(0x66373e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663741ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663741:L663741:{c.instructions+=3;NFSU2_TR(0x663741);
__builtin_memmove((R+28),(R+0),4);
}
B663743:{NFSU2_TR(0x663743);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663745:{NFSU2_TR(0x663745);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6637aa;}}
}
B663747:L663747:{c.instructions+=4;NFSU2_TR(0x663747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66374a:{NFSU2_TR(0x66374a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66374c:{NFSU2_TR(0x66374c);
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
B66374e:{NFSU2_TR(0x66374e);
if(r1(R+518)){{goto L663770;}}
}
B663750:L663750:{c.instructions+=3;NFSU2_TR(0x663750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663752:{NFSU2_TR(0x663752);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663753:{NFSU2_TR(0x663753);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663756ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663756:L663756:{c.instructions+=2;NFSU2_TR(0x663756);
__builtin_memmove((R+28),(R+0),4);
}
B663758:{NFSU2_TR(0x663758);
{goto L663772;}
}
B66375a:L66375a:{c.instructions+=7;NFSU2_TR(0x66375a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66375d:{NFSU2_TR(0x66375d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663760:{NFSU2_TR(0x663760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663762:{NFSU2_TR(0x663762);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B663766:{NFSU2_TR(0x663766);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663767:{NFSU2_TR(0x663767);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663768:{NFSU2_TR(0x663768);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66376eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66376e:L66376e:{c.instructions+=1;NFSU2_TR(0x66376e);
{goto L6637aa;}
}
B663770:L663770:{c.instructions+=1;NFSU2_TR(0x663770);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B663772:L663772:{c.instructions+=2;NFSU2_TR(0x663772);
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
B663774:{NFSU2_TR(0x663774);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6637aa;}}
}
B663776:L663776:{c.instructions+=4;NFSU2_TR(0x663776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663779:{NFSU2_TR(0x663779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66377b:{NFSU2_TR(0x66377b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66377c:{NFSU2_TR(0x66377c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66377full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66377f:L66377f:{c.instructions+=3;NFSU2_TR(0x66377f);
__builtin_memmove((R+28),(R+0),4);
}
B663781:{NFSU2_TR(0x663781);
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
B663783:{NFSU2_TR(0x663783);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6637aa;}}
}
B663785:L663785:{c.instructions+=4;NFSU2_TR(0x663785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663788:{NFSU2_TR(0x663788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66378a:{NFSU2_TR(0x66378a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66378b:{NFSU2_TR(0x66378b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66378eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66378e:L66378e:{c.instructions+=3;NFSU2_TR(0x66378e);
__builtin_memmove((R+28),(R+0),4);
}
B663790:{NFSU2_TR(0x663790);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663792:{NFSU2_TR(0x663792);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6637aa;}}
}
B663794:L663794:{c.instructions+=3;NFSU2_TR(0x663794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663796:{NFSU2_TR(0x663796);
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
B663798:{NFSU2_TR(0x663798);
if(r1(R+518)){{goto L6637a2;}}
}
B66379a:L66379a:{c.instructions+=3;NFSU2_TR(0x66379a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66379c:{NFSU2_TR(0x66379c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66379d:{NFSU2_TR(0x66379d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6637a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6637a0:L6637a0:{c.instructions+=1;NFSU2_TR(0x6637a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6637a2:L6637a2:{c.instructions+=3;NFSU2_TR(0x6637a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6637a5:{NFSU2_TR(0x6637a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6637a7:{NFSU2_TR(0x6637a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6637aa:L6637aa:{c.instructions+=3;NFSU2_TR(0x6637aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6637ad:{NFSU2_TR(0x6637ad);
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
B6637af:{NFSU2_TR(0x6637af);
if(r1(R+518)){{goto L6637ba;}}
}
B6637b1:L6637b1:{c.instructions+=3;NFSU2_TR(0x6637b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6637b3:{NFSU2_TR(0x6637b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6637b4:{NFSU2_TR(0x6637b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6637b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6637b7:L6637b7:{c.instructions+=1;NFSU2_TR(0x6637b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6637ba:L6637ba:{c.instructions+=3;NFSU2_TR(0x6637ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6637bd:{NFSU2_TR(0x6637bd);
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
B6637bf:{NFSU2_TR(0x6637bf);
if(r1(R+518)){{goto L6637c7;}}
}
B6637c1:L6637c1:{c.instructions+=3;NFSU2_TR(0x6637c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6637c3:{NFSU2_TR(0x6637c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6637c4:{NFSU2_TR(0x6637c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6637c7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6637c7:L6637c7:{c.instructions+=6;NFSU2_TR(0x6637c7);
__builtin_memmove((R+0),(R+28),4);
}
B6637c9:{NFSU2_TR(0x6637c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6637ca:{NFSU2_TR(0x6637ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6637cb:{NFSU2_TR(0x6637cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6637cc:{NFSU2_TR(0x6637cc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6637cd:{NFSU2_TR(0x6637cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6637d0:L6637d0:{c.instructions+=18;NFSU2_TR(0x6637d0);
__builtin_memmove((R+28),(R+28),4);
}
B6637d2:{NFSU2_TR(0x6637d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6637d3:{NFSU2_TR(0x6637d3);
__builtin_memmove((R+20),(R+16),4);
}
B6637d5:{NFSU2_TR(0x6637d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6637d8:{NFSU2_TR(0x6637d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6637d9:{NFSU2_TR(0x6637d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6637da:{NFSU2_TR(0x6637da);
__builtin_memmove((R+24),(R+4),4);
}
B6637dc:{NFSU2_TR(0x6637dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6637e0:{NFSU2_TR(0x6637e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6637e6:{NFSU2_TR(0x6637e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6637ec:{NFSU2_TR(0x6637ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6637ee:{NFSU2_TR(0x6637ee);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6637f5:{NFSU2_TR(0x6637f5);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6637fc:{NFSU2_TR(0x6637fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6637fd:{NFSU2_TR(0x6637fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663800:{NFSU2_TR(0x663800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663803:{NFSU2_TR(0x663803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663806:{NFSU2_TR(0x663806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663869;}}
}
B663808:L663808:{c.instructions+=3;NFSU2_TR(0x663808);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B66380b:{NFSU2_TR(0x66380b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66380e:{NFSU2_TR(0x66380e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663811:L663811:{c.instructions+=4;NFSU2_TR(0x663811);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663814:{NFSU2_TR(0x663814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663816:{NFSU2_TR(0x663816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663817:{NFSU2_TR(0x663817);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66381dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66381d:L66381d:{c.instructions+=3;NFSU2_TR(0x66381d);
__builtin_memmove((R+28),(R+0),4);
}
B66381f:{NFSU2_TR(0x66381f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663821:{NFSU2_TR(0x663821);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6638db;}}
}
B663827:L663827:{c.instructions+=2;NFSU2_TR(0x663827);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663829:{NFSU2_TR(0x663829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66382eull));
TAIL_STATIC(0x671aedu,671);
}
B66382e:L66382e:{c.instructions+=4;NFSU2_TR(0x66382e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663831:{NFSU2_TR(0x663831);
__builtin_memmove((R+4),(R+24),4);
}
B663833:{NFSU2_TR(0x663833);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663836:{NFSU2_TR(0x663836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66383bull));
TAIL_STATIC(0x6603b4u,660);
}
B66383b:L66383b:{c.instructions+=3;NFSU2_TR(0x66383b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66383c:{NFSU2_TR(0x66383c);
__builtin_memmove((R+28),(R+0),4);
}
B66383e:{NFSU2_TR(0x66383e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663843ull));
TAIL_STATIC(0x671aedu,671);
}
B663843:L663843:{c.instructions+=2;NFSU2_TR(0x663843);
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
B663845:{NFSU2_TR(0x663845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66388b;}}
}
B663847:L663847:{c.instructions+=5;NFSU2_TR(0x663847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66384a:{NFSU2_TR(0x66384a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66384d:{NFSU2_TR(0x66384d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66384f:{NFSU2_TR(0x66384f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663850:{NFSU2_TR(0x663850);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663856ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663856:L663856:{c.instructions+=3;NFSU2_TR(0x663856);
__builtin_memmove((R+28),(R+0),4);
}
B663858:{NFSU2_TR(0x663858);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B66385a:{NFSU2_TR(0x66385a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6638db;}}
}
B66385c:L66385c:{c.instructions+=4;NFSU2_TR(0x66385c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66385f:{NFSU2_TR(0x66385f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663863:{NFSU2_TR(0x663863);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B663867:{NFSU2_TR(0x663867);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663811u);}goto L663811;}}
}
B663869:L663869:{c.instructions+=4;NFSU2_TR(0x663869);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66386c:{NFSU2_TR(0x66386c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66386e:{NFSU2_TR(0x66386e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66386f:{NFSU2_TR(0x66386f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663872ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663872:L663872:{c.instructions+=3;NFSU2_TR(0x663872);
__builtin_memmove((R+28),(R+0),4);
}
B663874:{NFSU2_TR(0x663874);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663876:{NFSU2_TR(0x663876);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6638db;}}
}
B663878:L663878:{c.instructions+=4;NFSU2_TR(0x663878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66387b:{NFSU2_TR(0x66387b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66387d:{NFSU2_TR(0x66387d);
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
B66387f:{NFSU2_TR(0x66387f);
if(r1(R+518)){{goto L6638a1;}}
}
B663881:L663881:{c.instructions+=3;NFSU2_TR(0x663881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663883:{NFSU2_TR(0x663883);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663884:{NFSU2_TR(0x663884);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663887ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663887:L663887:{c.instructions+=2;NFSU2_TR(0x663887);
__builtin_memmove((R+28),(R+0),4);
}
B663889:{NFSU2_TR(0x663889);
{goto L6638a3;}
}
B66388b:L66388b:{c.instructions+=7;NFSU2_TR(0x66388b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66388e:{NFSU2_TR(0x66388e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663891:{NFSU2_TR(0x663891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663893:{NFSU2_TR(0x663893);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B663897:{NFSU2_TR(0x663897);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663898:{NFSU2_TR(0x663898);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663899:{NFSU2_TR(0x663899);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66389full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66389f:L66389f:{c.instructions+=1;NFSU2_TR(0x66389f);
{goto L6638db;}
}
B6638a1:L6638a1:{c.instructions+=1;NFSU2_TR(0x6638a1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6638a3:L6638a3:{c.instructions+=2;NFSU2_TR(0x6638a3);
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
B6638a5:{NFSU2_TR(0x6638a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6638db;}}
}
B6638a7:L6638a7:{c.instructions+=4;NFSU2_TR(0x6638a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6638aa:{NFSU2_TR(0x6638aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6638ac:{NFSU2_TR(0x6638ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6638ad:{NFSU2_TR(0x6638ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6638b0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6638b0:L6638b0:{c.instructions+=3;NFSU2_TR(0x6638b0);
__builtin_memmove((R+28),(R+0),4);
}
B6638b2:{NFSU2_TR(0x6638b2);
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
B6638b4:{NFSU2_TR(0x6638b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6638db;}}
}
B6638b6:L6638b6:{c.instructions+=4;NFSU2_TR(0x6638b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6638b9:{NFSU2_TR(0x6638b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6638bb:{NFSU2_TR(0x6638bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6638bc:{NFSU2_TR(0x6638bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6638bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6638bf:L6638bf:{c.instructions+=3;NFSU2_TR(0x6638bf);
__builtin_memmove((R+28),(R+0),4);
}
B6638c1:{NFSU2_TR(0x6638c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6638c3:{NFSU2_TR(0x6638c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6638db;}}
}
B6638c5:L6638c5:{c.instructions+=3;NFSU2_TR(0x6638c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6638c7:{NFSU2_TR(0x6638c7);
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
B6638c9:{NFSU2_TR(0x6638c9);
if(r1(R+518)){{goto L6638d3;}}
}
B6638cb:L6638cb:{c.instructions+=3;NFSU2_TR(0x6638cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6638cd:{NFSU2_TR(0x6638cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6638ce:{NFSU2_TR(0x6638ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6638d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6638d1:L6638d1:{c.instructions+=1;NFSU2_TR(0x6638d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6638d3:L6638d3:{c.instructions+=3;NFSU2_TR(0x6638d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6638d6:{NFSU2_TR(0x6638d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6638d8:{NFSU2_TR(0x6638d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6638db:L6638db:{c.instructions+=3;NFSU2_TR(0x6638db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6638de:{NFSU2_TR(0x6638de);
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
B6638e0:{NFSU2_TR(0x6638e0);
if(r1(R+518)){{goto L6638eb;}}
}
B6638e2:L6638e2:{c.instructions+=3;NFSU2_TR(0x6638e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6638e4:{NFSU2_TR(0x6638e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6638e5:{NFSU2_TR(0x6638e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6638e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6638e8:L6638e8:{c.instructions+=1;NFSU2_TR(0x6638e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6638eb:L6638eb:{c.instructions+=3;NFSU2_TR(0x6638eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6638ee:{NFSU2_TR(0x6638ee);
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
B6638f0:{NFSU2_TR(0x6638f0);
if(r1(R+518)){{goto L6638f8;}}
}
B6638f2:L6638f2:{c.instructions+=3;NFSU2_TR(0x6638f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6638f4:{NFSU2_TR(0x6638f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6638f5:{NFSU2_TR(0x6638f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6638f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6638f8:L6638f8:{c.instructions+=6;NFSU2_TR(0x6638f8);
__builtin_memmove((R+0),(R+28),4);
}
B6638fa:{NFSU2_TR(0x6638fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6638fb:{NFSU2_TR(0x6638fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6638fc:{NFSU2_TR(0x6638fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6638fd:{NFSU2_TR(0x6638fd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6638fe:{NFSU2_TR(0x6638fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663901:L663901:{c.instructions+=18;NFSU2_TR(0x663901);
__builtin_memmove((R+28),(R+28),4);
}
B663903:{NFSU2_TR(0x663903);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663904:{NFSU2_TR(0x663904);
__builtin_memmove((R+20),(R+16),4);
}
B663906:{NFSU2_TR(0x663906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B663909:{NFSU2_TR(0x663909);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66390a:{NFSU2_TR(0x66390a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66390b:{NFSU2_TR(0x66390b);
__builtin_memmove((R+24),(R+4),4);
}
B66390d:{NFSU2_TR(0x66390d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B663911:{NFSU2_TR(0x663911);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663917:{NFSU2_TR(0x663917);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66391d:{NFSU2_TR(0x66391d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66391f:{NFSU2_TR(0x66391f);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B663926:{NFSU2_TR(0x663926);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66392d:{NFSU2_TR(0x66392d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66392e:{NFSU2_TR(0x66392e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663931:{NFSU2_TR(0x663931);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663934:{NFSU2_TR(0x663934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663937:{NFSU2_TR(0x663937);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66399a;}}
}
B663939:L663939:{c.instructions+=3;NFSU2_TR(0x663939);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B66393c:{NFSU2_TR(0x66393c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66393f:{NFSU2_TR(0x66393f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663942:L663942:{c.instructions+=4;NFSU2_TR(0x663942);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663945:{NFSU2_TR(0x663945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663947:{NFSU2_TR(0x663947);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663948:{NFSU2_TR(0x663948);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66394eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66394e:L66394e:{c.instructions+=3;NFSU2_TR(0x66394e);
__builtin_memmove((R+28),(R+0),4);
}
B663950:{NFSU2_TR(0x663950);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B663952:{NFSU2_TR(0x663952);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663a0c;}}
}
B663958:L663958:{c.instructions+=2;NFSU2_TR(0x663958);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66395a:{NFSU2_TR(0x66395a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66395full));
TAIL_STATIC(0x671aedu,671);
}
B66395f:L66395f:{c.instructions+=4;NFSU2_TR(0x66395f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663962:{NFSU2_TR(0x663962);
__builtin_memmove((R+4),(R+24),4);
}
B663964:{NFSU2_TR(0x663964);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663967:{NFSU2_TR(0x663967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66396cull));
TAIL_STATIC(0x6604d9u,660);
}
B66396c:L66396c:{c.instructions+=3;NFSU2_TR(0x66396c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66396d:{NFSU2_TR(0x66396d);
__builtin_memmove((R+28),(R+0),4);
}
B66396f:{NFSU2_TR(0x66396f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663974ull));
TAIL_STATIC(0x671aedu,671);
}
B663974:L663974:{c.instructions+=2;NFSU2_TR(0x663974);
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
B663976:{NFSU2_TR(0x663976);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6639bc;}}
}
B663978:L663978:{c.instructions+=5;NFSU2_TR(0x663978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66397b:{NFSU2_TR(0x66397b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66397e:{NFSU2_TR(0x66397e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663980:{NFSU2_TR(0x663980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663981:{NFSU2_TR(0x663981);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663987ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663987:L663987:{c.instructions+=3;NFSU2_TR(0x663987);
__builtin_memmove((R+28),(R+0),4);
}
B663989:{NFSU2_TR(0x663989);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B66398b:{NFSU2_TR(0x66398b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663a0c;}}
}
B66398d:L66398d:{c.instructions+=4;NFSU2_TR(0x66398d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663990:{NFSU2_TR(0x663990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663994:{NFSU2_TR(0x663994);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B663998:{NFSU2_TR(0x663998);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663942u);}goto L663942;}}
}
B66399a:L66399a:{c.instructions+=4;NFSU2_TR(0x66399a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66399d:{NFSU2_TR(0x66399d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66399f:{NFSU2_TR(0x66399f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6639a0:{NFSU2_TR(0x6639a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6639a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6639a3:L6639a3:{c.instructions+=3;NFSU2_TR(0x6639a3);
__builtin_memmove((R+28),(R+0),4);
}
B6639a5:{NFSU2_TR(0x6639a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6639a7:{NFSU2_TR(0x6639a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663a0c;}}
}
B6639a9:L6639a9:{c.instructions+=4;NFSU2_TR(0x6639a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6639ac:{NFSU2_TR(0x6639ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6639ae:{NFSU2_TR(0x6639ae);
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
B6639b0:{NFSU2_TR(0x6639b0);
if(r1(R+518)){{goto L6639d2;}}
}
B6639b2:L6639b2:{c.instructions+=3;NFSU2_TR(0x6639b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6639b4:{NFSU2_TR(0x6639b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6639b5:{NFSU2_TR(0x6639b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6639b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6639b8:L6639b8:{c.instructions+=2;NFSU2_TR(0x6639b8);
__builtin_memmove((R+28),(R+0),4);
}
B6639ba:{NFSU2_TR(0x6639ba);
{goto L6639d4;}
}
B6639bc:L6639bc:{c.instructions+=7;NFSU2_TR(0x6639bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6639bf:{NFSU2_TR(0x6639bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6639c2:{NFSU2_TR(0x6639c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6639c4:{NFSU2_TR(0x6639c4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6639c8:{NFSU2_TR(0x6639c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6639c9:{NFSU2_TR(0x6639c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6639ca:{NFSU2_TR(0x6639ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6639d0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6639d0:L6639d0:{c.instructions+=1;NFSU2_TR(0x6639d0);
{goto L663a0c;}
}
B6639d2:L6639d2:{c.instructions+=1;NFSU2_TR(0x6639d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6639d4:L6639d4:{c.instructions+=2;NFSU2_TR(0x6639d4);
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
B6639d6:{NFSU2_TR(0x6639d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663a0c;}}
}
B6639d8:L6639d8:{c.instructions+=4;NFSU2_TR(0x6639d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6639db:{NFSU2_TR(0x6639db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6639dd:{NFSU2_TR(0x6639dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6639de:{NFSU2_TR(0x6639de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6639e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6639e1:L6639e1:{c.instructions+=3;NFSU2_TR(0x6639e1);
__builtin_memmove((R+28),(R+0),4);
}
B6639e3:{NFSU2_TR(0x6639e3);
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
B6639e5:{NFSU2_TR(0x6639e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663a0c;}}
}
B6639e7:L6639e7:{c.instructions+=4;NFSU2_TR(0x6639e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6639ea:{NFSU2_TR(0x6639ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6639ec:{NFSU2_TR(0x6639ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6639ed:{NFSU2_TR(0x6639ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6639f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6639f0:L6639f0:{c.instructions+=3;NFSU2_TR(0x6639f0);
__builtin_memmove((R+28),(R+0),4);
}
B6639f2:{NFSU2_TR(0x6639f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6639f4:{NFSU2_TR(0x6639f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663a0c;}}
}
B6639f6:L6639f6:{c.instructions+=3;NFSU2_TR(0x6639f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6639f8:{NFSU2_TR(0x6639f8);
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
B6639fa:{NFSU2_TR(0x6639fa);
if(r1(R+518)){{goto L663a04;}}
}
B6639fc:L6639fc:{c.instructions+=3;NFSU2_TR(0x6639fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6639fe:{NFSU2_TR(0x6639fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6639ff:{NFSU2_TR(0x6639ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663a02ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663a02:L663a02:{c.instructions+=1;NFSU2_TR(0x663a02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B663a04:L663a04:{c.instructions+=3;NFSU2_TR(0x663a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a07:{NFSU2_TR(0x663a07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B663a09:{NFSU2_TR(0x663a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a0c:L663a0c:{c.instructions+=3;NFSU2_TR(0x663a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a0f:{NFSU2_TR(0x663a0f);
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
B663a11:{NFSU2_TR(0x663a11);
if(r1(R+518)){{goto L663a1c;}}
}
B663a13:L663a13:{c.instructions+=3;NFSU2_TR(0x663a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663a15:{NFSU2_TR(0x663a15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a16:{NFSU2_TR(0x663a16);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663a19ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663a19:L663a19:{c.instructions+=1;NFSU2_TR(0x663a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a1c:L663a1c:{c.instructions+=3;NFSU2_TR(0x663a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a1f:{NFSU2_TR(0x663a1f);
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
B663a21:{NFSU2_TR(0x663a21);
if(r1(R+518)){{goto L663a29;}}
}
B663a23:L663a23:{c.instructions+=3;NFSU2_TR(0x663a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663a25:{NFSU2_TR(0x663a25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a26:{NFSU2_TR(0x663a26);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663a29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663a29:L663a29:{c.instructions+=6;NFSU2_TR(0x663a29);
__builtin_memmove((R+0),(R+28),4);
}
B663a2b:{NFSU2_TR(0x663a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B663a2c:{NFSU2_TR(0x663a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B663a2d:{NFSU2_TR(0x663a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B663a2e:{NFSU2_TR(0x663a2e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B663a2f:{NFSU2_TR(0x663a2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663a32:L663a32:{c.instructions+=18;NFSU2_TR(0x663a32);
__builtin_memmove((R+28),(R+28),4);
}
B663a34:{NFSU2_TR(0x663a34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a35:{NFSU2_TR(0x663a35);
__builtin_memmove((R+20),(R+16),4);
}
B663a37:{NFSU2_TR(0x663a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B663a3a:{NFSU2_TR(0x663a3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a3b:{NFSU2_TR(0x663a3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a3c:{NFSU2_TR(0x663a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B663a3f:{NFSU2_TR(0x663a3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a40:{NFSU2_TR(0x663a40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B663a43:{NFSU2_TR(0x663a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663a46:{NFSU2_TR(0x663a46);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B663a49:{NFSU2_TR(0x663a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B663a4c:{NFSU2_TR(0x663a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a4f:{NFSU2_TR(0x663a4f);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B663a52:{NFSU2_TR(0x663a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a55:{NFSU2_TR(0x663a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663a57:{NFSU2_TR(0x663a57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a58:{NFSU2_TR(0x663a58);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663a5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663a5b:L663a5b:{c.instructions+=12;NFSU2_TR(0x663a5b);
__builtin_memmove((R+12),(R+0),4);
}
B663a5d:{NFSU2_TR(0x663a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a60:{NFSU2_TR(0x663a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B663a62:{NFSU2_TR(0x663a62);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B663a64:{NFSU2_TR(0x663a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a67:{NFSU2_TR(0x663a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a6a:{NFSU2_TR(0x663a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a6d:{NFSU2_TR(0x663a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a70:{NFSU2_TR(0x663a70);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B663a77:{NFSU2_TR(0x663a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a7a:{NFSU2_TR(0x663a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a7d:{NFSU2_TR(0x663a7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663aa8;}}
}
B663a7f:L663a7f:{c.instructions+=3;NFSU2_TR(0x663a7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a80:{NFSU2_TR(0x663a80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a81:{NFSU2_TR(0x663a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663a86ull));
TAIL_STATIC(0x75db6au,75d);
}
B663a86:L663a86:{c.instructions+=5;NFSU2_TR(0x663a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663a89:{NFSU2_TR(0x663a89);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a8e:{NFSU2_TR(0x663a8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663a90:{NFSU2_TR(0x663a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663a96:{NFSU2_TR(0x663a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663a9bull));
TAIL_STATIC(0x75db6au,75d);
}
B663a9b:L663a9b:{c.instructions+=3;NFSU2_TR(0x663a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663a9e:{NFSU2_TR(0x663a9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B663aa1:{NFSU2_TR(0x663aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663aa8:L663aa8:{c.instructions+=3;NFSU2_TR(0x663aa8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B663aaa:{NFSU2_TR(0x663aaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663aad:{NFSU2_TR(0x663aad);
if(r1(R+518)){{goto L663b83;}}
}
B663ab3:L663ab3:{c.instructions+=13;NFSU2_TR(0x663ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663ab5:{NFSU2_TR(0x663ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663ab8:{NFSU2_TR(0x663ab8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B663aba:{NFSU2_TR(0x663aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663abd:{NFSU2_TR(0x663abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663ac0:{NFSU2_TR(0x663ac0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B663ac2:{NFSU2_TR(0x663ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ac5:{NFSU2_TR(0x663ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663ac8:{NFSU2_TR(0x663ac8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B663aca:{NFSU2_TR(0x663aca);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B663ace:{NFSU2_TR(0x663ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ad1:{NFSU2_TR(0x663ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ad4:{NFSU2_TR(0x663ad4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663b75;}}
}
B663ada:L663ada:{c.instructions+=5;NFSU2_TR(0x663ada);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B663ade:{NFSU2_TR(0x663ade);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B663ae1:{NFSU2_TR(0x663ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B663ae4:{NFSU2_TR(0x663ae4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B663ae6:{NFSU2_TR(0x663ae6);
if(r1(R+518)){{goto L663b62;}}
}
B663ae8:L663ae8:{c.instructions+=6;NFSU2_TR(0x663ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663aeb:{NFSU2_TR(0x663aeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B663aed:{NFSU2_TR(0x663aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663af0:{NFSU2_TR(0x663af0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663af4:{NFSU2_TR(0x663af4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B663af7:{NFSU2_TR(0x663af7);
if(r1(R+518)){{goto L663b3d;}}
}
B663af9:L663af9:{c.instructions+=2;NFSU2_TR(0x663af9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B663afa:{NFSU2_TR(0x663afa);
if(r1(R+518)){{goto L663b16;}}
}
B663afc:L663afc:{c.instructions+=2;NFSU2_TR(0x663afc);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B663afd:{NFSU2_TR(0x663afd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663b62;}}
}
B663aff:L663aff:{c.instructions+=9;NFSU2_TR(0x663aff);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b01:{NFSU2_TR(0x663b01);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B663b04:{NFSU2_TR(0x663b04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b05:{NFSU2_TR(0x663b05);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663b09:{NFSU2_TR(0x663b09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b0a:{NFSU2_TR(0x663b0a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B663b0e:{NFSU2_TR(0x663b0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663b11:{NFSU2_TR(0x663b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B663b14:{NFSU2_TR(0x663b14);
{goto L663b2b;}
}
B663b16:L663b16:{c.instructions+=8;NFSU2_TR(0x663b16);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b18:{NFSU2_TR(0x663b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B663b1b:{NFSU2_TR(0x663b1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b1c:{NFSU2_TR(0x663b1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663b20:{NFSU2_TR(0x663b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b21:{NFSU2_TR(0x663b21);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B663b25:{NFSU2_TR(0x663b25);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663b28:{NFSU2_TR(0x663b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B663b2b:L663b2b:{c.instructions+=6;NFSU2_TR(0x663b2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b2e:{NFSU2_TR(0x663b2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b2f:{NFSU2_TR(0x663b2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b30:{NFSU2_TR(0x663b30);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b33:{NFSU2_TR(0x663b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663b36:{NFSU2_TR(0x663b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663b3bull));
TAIL_STATIC(0x662eccu,662);
}
B663b3b:L663b3b:{c.instructions+=1;NFSU2_TR(0x663b3b);
{goto L663b62;}
}
B663b3d:L663b3d:{c.instructions+=14;NFSU2_TR(0x663b3d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b3f:{NFSU2_TR(0x663b3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B663b42:{NFSU2_TR(0x663b42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b43:{NFSU2_TR(0x663b43);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663b47:{NFSU2_TR(0x663b47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b48:{NFSU2_TR(0x663b48);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b4b:{NFSU2_TR(0x663b4b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B663b4f:{NFSU2_TR(0x663b4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b50:{NFSU2_TR(0x663b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B663b53:{NFSU2_TR(0x663b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B663b56:{NFSU2_TR(0x663b56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b57:{NFSU2_TR(0x663b57);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b5a:{NFSU2_TR(0x663b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663b5d:{NFSU2_TR(0x663b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663b62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663265u);}goto L663265;}
}
B663b62:L663b62:{c.instructions+=5;NFSU2_TR(0x663b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663b65:{NFSU2_TR(0x663b65);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B663b69:{NFSU2_TR(0x663b69);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B663b6b:{NFSU2_TR(0x663b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B663b6f:{NFSU2_TR(0x663b6f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663adau);}goto L663ada;}}
}
B663b75:L663b75:{c.instructions+=5;NFSU2_TR(0x663b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B663b77:{NFSU2_TR(0x663b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B663b7a:{NFSU2_TR(0x663b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663b7d:{NFSU2_TR(0x663b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663b80:{NFSU2_TR(0x663b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663b83:L663b83:{c.instructions+=15;NFSU2_TR(0x663b83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b86:{NFSU2_TR(0x663b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b89:{NFSU2_TR(0x663b89);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b8c:{NFSU2_TR(0x663b8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b8d:{NFSU2_TR(0x663b8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b90:{NFSU2_TR(0x663b90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b91:{NFSU2_TR(0x663b91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b94:{NFSU2_TR(0x663b94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b97:{NFSU2_TR(0x663b97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b9a:{NFSU2_TR(0x663b9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b9b:{NFSU2_TR(0x663b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663b9e:{NFSU2_TR(0x663b9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663b9f:{NFSU2_TR(0x663b9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663ba2:{NFSU2_TR(0x663ba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663ba5:{NFSU2_TR(0x663ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663baaull));
TAIL_STATIC(0x688e79u,688);
}
B663baa:L663baa:{c.instructions+=5;NFSU2_TR(0x663baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B663bab:{NFSU2_TR(0x663bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B663bac:{NFSU2_TR(0x663bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B663bad:{NFSU2_TR(0x663bad);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B663bae:{NFSU2_TR(0x663bae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663bb1:L663bb1:{c.instructions+=18;NFSU2_TR(0x663bb1);
__builtin_memmove((R+28),(R+28),4);
}
B663bb3:{NFSU2_TR(0x663bb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663bb4:{NFSU2_TR(0x663bb4);
__builtin_memmove((R+20),(R+16),4);
}
B663bb6:{NFSU2_TR(0x663bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B663bb9:{NFSU2_TR(0x663bb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663bba:{NFSU2_TR(0x663bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B663bbd:{NFSU2_TR(0x663bbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663bbe:{NFSU2_TR(0x663bbe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B663bc1:{NFSU2_TR(0x663bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B663bc4:{NFSU2_TR(0x663bc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663bc5:{NFSU2_TR(0x663bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663bc8:{NFSU2_TR(0x663bc8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B663bcb:{NFSU2_TR(0x663bcb);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B663bce:{NFSU2_TR(0x663bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663bd1:{NFSU2_TR(0x663bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663bd4:{NFSU2_TR(0x663bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663bd6:{NFSU2_TR(0x663bd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663bd7:{NFSU2_TR(0x663bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663bdaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663bda:L663bda:{c.instructions+=23;NFSU2_TR(0x663bda);
__builtin_memmove((R+24),(R+0),4);
}
B663bdc:{NFSU2_TR(0x663bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663bde:{NFSU2_TR(0x663bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663be1:{NFSU2_TR(0x663be1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B663be3:{NFSU2_TR(0x663be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663be6:{NFSU2_TR(0x663be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663be9:{NFSU2_TR(0x663be9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B663beb:{NFSU2_TR(0x663beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663bee:{NFSU2_TR(0x663bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663bf1:{NFSU2_TR(0x663bf1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B663bf3:{NFSU2_TR(0x663bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663bf6:{NFSU2_TR(0x663bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663bf9:{NFSU2_TR(0x663bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663bfc:{NFSU2_TR(0x663bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663bff:{NFSU2_TR(0x663bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c02:{NFSU2_TR(0x663c02);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B663c04:{NFSU2_TR(0x663c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c07:{NFSU2_TR(0x663c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c0a:{NFSU2_TR(0x663c0a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B663c11:{NFSU2_TR(0x663c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c14:{NFSU2_TR(0x663c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c17:{NFSU2_TR(0x663c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c1a:{NFSU2_TR(0x663c1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663c45;}}
}
B663c1c:L663c1c:{c.instructions+=3;NFSU2_TR(0x663c1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663c1d:{NFSU2_TR(0x663c1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663c1e:{NFSU2_TR(0x663c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663c23ull));
TAIL_STATIC(0x75db6au,75d);
}
B663c23:L663c23:{c.instructions+=5;NFSU2_TR(0x663c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663c26:{NFSU2_TR(0x663c26);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663c2b:{NFSU2_TR(0x663c2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663c2d:{NFSU2_TR(0x663c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c33:{NFSU2_TR(0x663c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663c38ull));
TAIL_STATIC(0x75db6au,75d);
}
B663c38:L663c38:{c.instructions+=3;NFSU2_TR(0x663c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c3b:{NFSU2_TR(0x663c3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B663c3e:{NFSU2_TR(0x663c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663c45:L663c45:{c.instructions+=3;NFSU2_TR(0x663c45);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B663c47:{NFSU2_TR(0x663c47);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663c4a:{NFSU2_TR(0x663c4a);
if(r1(R+518)){{goto L663d20;}}
}
B663c50:L663c50:{c.instructions+=13;NFSU2_TR(0x663c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663c52:{NFSU2_TR(0x663c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c55:{NFSU2_TR(0x663c55);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B663c57:{NFSU2_TR(0x663c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c5a:{NFSU2_TR(0x663c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c5d:{NFSU2_TR(0x663c5d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B663c5f:{NFSU2_TR(0x663c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c62:{NFSU2_TR(0x663c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c65:{NFSU2_TR(0x663c65);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B663c67:{NFSU2_TR(0x663c67);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B663c6b:{NFSU2_TR(0x663c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c6e:{NFSU2_TR(0x663c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663c71:{NFSU2_TR(0x663c71);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663d12;}}
}
B663c77:L663c77:{c.instructions+=5;NFSU2_TR(0x663c77);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B663c7b:{NFSU2_TR(0x663c7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B663c7e:{NFSU2_TR(0x663c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B663c81:{NFSU2_TR(0x663c81);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B663c83:{NFSU2_TR(0x663c83);
if(r1(R+518)){{goto L663cff;}}
}
B663c85:L663c85:{c.instructions+=6;NFSU2_TR(0x663c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c88:{NFSU2_TR(0x663c88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B663c8a:{NFSU2_TR(0x663c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663c8d:{NFSU2_TR(0x663c8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663c91:{NFSU2_TR(0x663c91);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B663c94:{NFSU2_TR(0x663c94);
if(r1(R+518)){{goto L663cda;}}
}
B663c96:L663c96:{c.instructions+=2;NFSU2_TR(0x663c96);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B663c97:{NFSU2_TR(0x663c97);
if(r1(R+518)){{goto L663cb3;}}
}
B663c99:L663c99:{c.instructions+=2;NFSU2_TR(0x663c99);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B663c9a:{NFSU2_TR(0x663c9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L663cff;}}
}
B663c9c:L663c9c:{c.instructions+=9;NFSU2_TR(0x663c9c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663c9e:{NFSU2_TR(0x663c9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B663ca1:{NFSU2_TR(0x663ca1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663ca2:{NFSU2_TR(0x663ca2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663ca6:{NFSU2_TR(0x663ca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663ca7:{NFSU2_TR(0x663ca7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B663cab:{NFSU2_TR(0x663cab);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663cae:{NFSU2_TR(0x663cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B663cb1:{NFSU2_TR(0x663cb1);
{goto L663cc8;}
}
B663cb3:L663cb3:{c.instructions+=8;NFSU2_TR(0x663cb3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663cb5:{NFSU2_TR(0x663cb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B663cb8:{NFSU2_TR(0x663cb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663cb9:{NFSU2_TR(0x663cb9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663cbd:{NFSU2_TR(0x663cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663cbe:{NFSU2_TR(0x663cbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B663cc2:{NFSU2_TR(0x663cc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663cc5:{NFSU2_TR(0x663cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B663cc8:L663cc8:{c.instructions+=6;NFSU2_TR(0x663cc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663ccb:{NFSU2_TR(0x663ccb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663ccc:{NFSU2_TR(0x663ccc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663ccd:{NFSU2_TR(0x663ccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663cd0:{NFSU2_TR(0x663cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663cd3:{NFSU2_TR(0x663cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663cd8ull));
TAIL_STATIC(0x662eccu,662);
}
B663cd8:L663cd8:{c.instructions+=1;NFSU2_TR(0x663cd8);
{goto L663cff;}
}
B663cda:L663cda:{c.instructions+=14;NFSU2_TR(0x663cda);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663cdc:{NFSU2_TR(0x663cdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B663cdf:{NFSU2_TR(0x663cdf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663ce0:{NFSU2_TR(0x663ce0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B663ce4:{NFSU2_TR(0x663ce4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663ce5:{NFSU2_TR(0x663ce5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663ce8:{NFSU2_TR(0x663ce8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B663cec:{NFSU2_TR(0x663cec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663ced:{NFSU2_TR(0x663ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B663cf0:{NFSU2_TR(0x663cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B663cf3:{NFSU2_TR(0x663cf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663cf4:{NFSU2_TR(0x663cf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663cf7:{NFSU2_TR(0x663cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663cfa:{NFSU2_TR(0x663cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663cffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663265u);}goto L663265;}
}
B663cff:L663cff:{c.instructions+=5;NFSU2_TR(0x663cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663d02:{NFSU2_TR(0x663d02);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B663d06:{NFSU2_TR(0x663d06);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B663d08:{NFSU2_TR(0x663d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B663d0c:{NFSU2_TR(0x663d0c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663c77u);}goto L663c77;}}
}
B663d12:L663d12:{c.instructions+=5;NFSU2_TR(0x663d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663d14:{NFSU2_TR(0x663d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B663d17:{NFSU2_TR(0x663d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663d1a:{NFSU2_TR(0x663d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663d1d:{NFSU2_TR(0x663d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663d20:L663d20:{c.instructions+=15;NFSU2_TR(0x663d20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d23:{NFSU2_TR(0x663d23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d26:{NFSU2_TR(0x663d26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d29:{NFSU2_TR(0x663d29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663d2a:{NFSU2_TR(0x663d2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d2d:{NFSU2_TR(0x663d2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663d2e:{NFSU2_TR(0x663d2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d31:{NFSU2_TR(0x663d31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d34:{NFSU2_TR(0x663d34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d37:{NFSU2_TR(0x663d37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663d38:{NFSU2_TR(0x663d38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d3b:{NFSU2_TR(0x663d3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663d3c:{NFSU2_TR(0x663d3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d3f:{NFSU2_TR(0x663d3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B663d42:{NFSU2_TR(0x663d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663d47ull));
TAIL_STATIC(0x688e79u,688);
}
B663d47:L663d47:{c.instructions+=3;NFSU2_TR(0x663d47);
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
B663d49:{NFSU2_TR(0x663d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663d4c:{NFSU2_TR(0x663d4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L663e86;}}
}
B663d52:L663d52:{c.instructions+=2;NFSU2_TR(0x663d52);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663d56:{NFSU2_TR(0x663d56);
if(r1(R+518)){{goto L663dc3;}}
}
B663d58:L663d58:{c.instructions+=9;NFSU2_TR(0x663d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663d5b:{NFSU2_TR(0x663d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663d5e:{NFSU2_TR(0x663d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+0))));
}
B663d60:{NFSU2_TR(0x663d60);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B663d62:{NFSU2_TR(0x663d62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663d64:{NFSU2_TR(0x663d64);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B663d67:{NFSU2_TR(0x663d67);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663d69:{NFSU2_TR(0x663d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663d6c:{NFSU2_TR(0x663d6c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663dc3;}}
}
B663d6e:L663d6e:{c.instructions+=2;NFSU2_TR(0x663d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663d71:{NFSU2_TR(0x663d71);
{goto L663d76;}
}
B663d73:L663d73:{c.instructions+=1;NFSU2_TR(0x663d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663d76:L663d76:{c.instructions+=10;NFSU2_TR(0x663d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B663d78:{NFSU2_TR(0x663d78);
__builtin_memmove((R+0),(R+8),4);
}
B663d7a:{NFSU2_TR(0x663d7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663d7d:{NFSU2_TR(0x663d7d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B663d7f:{NFSU2_TR(0x663d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663d82:{NFSU2_TR(0x663d82);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B663d85:{NFSU2_TR(0x663d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B663d88:{NFSU2_TR(0x663d88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B663d8b:{NFSU2_TR(0x663d8b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B663d8d:{NFSU2_TR(0x663d8d);
{goto L663db7;}
}
B663d8f:L663d8f:{c.instructions+=16;NFSU2_TR(0x663d8f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B663d91:{NFSU2_TR(0x663d91);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B663d94:{NFSU2_TR(0x663d94);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B663d96:{NFSU2_TR(0x663d96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B663d99:{NFSU2_TR(0x663d99);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B663d9b:{NFSU2_TR(0x663d9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B663d9e:{NFSU2_TR(0x663d9e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B663da0:{NFSU2_TR(0x663da0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B663da3:{NFSU2_TR(0x663da3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B663da5:{NFSU2_TR(0x663da5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B663da8:{NFSU2_TR(0x663da8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B663daa:{NFSU2_TR(0x663daa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B663dad:{NFSU2_TR(0x663dad);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B663daf:{NFSU2_TR(0x663daf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B663db1:{NFSU2_TR(0x663db1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B663db4:{NFSU2_TR(0x663db4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B663db7:L663db7:{c.instructions+=2;NFSU2_TR(0x663db7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B663db9:{NFSU2_TR(0x663db9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663d8fu);}goto L663d8f;}}
}
B663dbb:L663dbb:{c.instructions+=3;NFSU2_TR(0x663dbb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B663dbe:{NFSU2_TR(0x663dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663dc1:{NFSU2_TR(0x663dc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663d73u);}goto L663d73;}}
}
B663dc3:L663dc3:{c.instructions+=2;NFSU2_TR(0x663dc3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B663dc7:{NFSU2_TR(0x663dc7);
if(r1(R+518)){{goto L663e2f;}}
}
B663dc9:L663dc9:{c.instructions+=9;NFSU2_TR(0x663dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663dcc:{NFSU2_TR(0x663dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663dcf:{NFSU2_TR(0x663dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B663dd1:{NFSU2_TR(0x663dd1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B663dd3:{NFSU2_TR(0x663dd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663dd5:{NFSU2_TR(0x663dd5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B663dd8:{NFSU2_TR(0x663dd8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663dda:{NFSU2_TR(0x663dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ddd:{NFSU2_TR(0x663ddd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663e2f;}}
}
B663ddf:L663ddf:{c.instructions+=1;NFSU2_TR(0x663ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663de2:L663de2:{c.instructions+=14;NFSU2_TR(0x663de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663de4:{NFSU2_TR(0x663de4);
__builtin_memmove((R+8),(R+0),4);
}
B663de6:{NFSU2_TR(0x663de6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663de9:{NFSU2_TR(0x663de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B663dec:{NFSU2_TR(0x663dec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B663def:{NFSU2_TR(0x663def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663df2:{NFSU2_TR(0x663df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663df5:{NFSU2_TR(0x663df5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B663df7:{NFSU2_TR(0x663df7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663dfa:{NFSU2_TR(0x663dfa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B663dfc:{NFSU2_TR(0x663dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B663dfe:{NFSU2_TR(0x663dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663e01:{NFSU2_TR(0x663e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663e04:{NFSU2_TR(0x663e04);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L663e27;}}
}
B663e06:L663e06:{c.instructions+=3;NFSU2_TR(0x663e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663e09:{NFSU2_TR(0x663e09);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B663e0b:{NFSU2_TR(0x663e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663e10ull));
TAIL_STATIC(0x75dd28u,75d);
}
B663e10:L663e10:{c.instructions+=7;NFSU2_TR(0x663e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663e13:{NFSU2_TR(0x663e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663e17:{NFSU2_TR(0x663e17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B663e19:{NFSU2_TR(0x663e19);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B663e1c:{NFSU2_TR(0x663e1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B663e1f:{NFSU2_TR(0x663e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663e22:{NFSU2_TR(0x663e22);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663e06u);}goto L663e06;}}
}
B663e24:L663e24:{c.instructions+=1;NFSU2_TR(0x663e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663e27:L663e27:{c.instructions+=3;NFSU2_TR(0x663e27);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B663e2a:{NFSU2_TR(0x663e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663e2d:{NFSU2_TR(0x663e2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663de2u);}goto L663de2;}}
}
B663e2f:L663e2f:{c.instructions+=2;NFSU2_TR(0x663e2f);
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
B663e33:{NFSU2_TR(0x663e33);
if(r1(R+518)){{goto L663e86;}}
}
B663e35:L663e35:{c.instructions+=8;NFSU2_TR(0x663e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B663e38:{NFSU2_TR(0x663e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+0))));
}
B663e3a:{NFSU2_TR(0x663e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B663e3d:{NFSU2_TR(0x663e3d);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B663e3f:{NFSU2_TR(0x663e3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663e41:{NFSU2_TR(0x663e41);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B663e44:{NFSU2_TR(0x663e44);
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
B663e46:{NFSU2_TR(0x663e46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L663e86;}}
}
B663e48:L663e48:{c.instructions+=1;NFSU2_TR(0x663e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663e4b:L663e4b:{c.instructions+=10;NFSU2_TR(0x663e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663e4d:{NFSU2_TR(0x663e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B663e50:{NFSU2_TR(0x663e50);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B663e53:{NFSU2_TR(0x663e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B663e56:{NFSU2_TR(0x663e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663e59:{NFSU2_TR(0x663e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663e5c:{NFSU2_TR(0x663e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B663e5f:{NFSU2_TR(0x663e5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B663e61:{NFSU2_TR(0x663e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663e64:{NFSU2_TR(0x663e64);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L663e7e;}}
}
B663e66:L663e66:{c.instructions+=3;NFSU2_TR(0x663e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663e69:{NFSU2_TR(0x663e69);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B663e6b:{NFSU2_TR(0x663e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663e70ull));
TAIL_STATIC(0x75dd28u,75d);
}
B663e70:L663e70:{c.instructions+=5;NFSU2_TR(0x663e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663e74:{NFSU2_TR(0x663e74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B663e76:{NFSU2_TR(0x663e76);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B663e79:{NFSU2_TR(0x663e79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B663e7c:{NFSU2_TR(0x663e7c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663e66u);}goto L663e66;}}
}
B663e7e:L663e7e:{c.instructions+=3;NFSU2_TR(0x663e7e);
w1(R+512,carry<u32>(r4(R+12),u32(0x8ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B663e81:{NFSU2_TR(0x663e81);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B663e84:{NFSU2_TR(0x663e84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663e4bu);}goto L663e4b;}}
}
B663e86:L663e86:{c.instructions+=6;NFSU2_TR(0x663e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663e89:{NFSU2_TR(0x663e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B663e8a:{NFSU2_TR(0x663e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B663e8b:{NFSU2_TR(0x663e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B663e8c:{NFSU2_TR(0x663e8c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B663e8d:{NFSU2_TR(0x663e8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663e90:L663e90:{c.instructions+=6;NFSU2_TR(0x663e90);
__builtin_memmove((R+28),(R+28),4);
}
B663e92:{NFSU2_TR(0x663e92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663e93:{NFSU2_TR(0x663e93);
__builtin_memmove((R+24),(R+4),4);
}
B663e95:{NFSU2_TR(0x663e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663e98:{NFSU2_TR(0x663e98);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663e9a:{NFSU2_TR(0x663e9a);
if(r1(R+518)){{goto L663ebd;}}
}
B663e9c:L663e9c:{c.instructions+=2;NFSU2_TR(0x663e9c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663e9e:{NFSU2_TR(0x663e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663ea3ull));
TAIL_STATIC(0x661405u,661);
}
B663ea3:L663ea3:{c.instructions+=2;NFSU2_TR(0x663ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663ea7:{NFSU2_TR(0x663ea7);
{goto L663ebd;}
}
B663ea9:L663ea9:{c.instructions+=6;NFSU2_TR(0x663ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663eac:{NFSU2_TR(0x663eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663eaf:{NFSU2_TR(0x663eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663eb2:{NFSU2_TR(0x663eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663eb6:{NFSU2_TR(0x663eb6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663eb8:{NFSU2_TR(0x663eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663ebdull));
TAIL_STATIC(0x65b6a8u,65b);
}
B663ebd:L663ebd:{c.instructions+=2;NFSU2_TR(0x663ebd);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
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
B663ec1:{NFSU2_TR(0x663ec1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663ea9u);}goto L663ea9;}}
}
B663ec3:L663ec3:{c.instructions+=2;NFSU2_TR(0x663ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B663ec4:{NFSU2_TR(0x663ec4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663ec5:L663ec5:{c.instructions+=25;NFSU2_TR(0x663ec5);
__builtin_memmove((R+0),(R+4),4);
}
B663ec7:{NFSU2_TR(0x663ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663ecb:{NFSU2_TR(0x663ecb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B663ecd:{NFSU2_TR(0x663ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ed0:{NFSU2_TR(0x663ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ed3:{NFSU2_TR(0x663ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ed6:{NFSU2_TR(0x663ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ed9:{NFSU2_TR(0x663ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B663edc:{NFSU2_TR(0x663edc);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffe1ull))));
}
B663edf:{NFSU2_TR(0x663edf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B663ee2:{NFSU2_TR(0x663ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B663ee9:{NFSU2_TR(0x663ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663eec:{NFSU2_TR(0x663eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663eef:{NFSU2_TR(0x663eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ef2:{NFSU2_TR(0x663ef2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B663ef4:{NFSU2_TR(0x663ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663ef7:{NFSU2_TR(0x663ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663efa:{NFSU2_TR(0x663efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663efd:{NFSU2_TR(0x663efd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B663f03:{NFSU2_TR(0x663f03);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B663f07:{NFSU2_TR(0x663f07);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B663f0b:{NFSU2_TR(0x663f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f0e:{NFSU2_TR(0x663f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f11:{NFSU2_TR(0x663f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f14:{NFSU2_TR(0x663f14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663f15:L663f15:{c.instructions+=8;NFSU2_TR(0x663f15);
__builtin_memmove((R+28),(R+28),4);
}
B663f17:{NFSU2_TR(0x663f17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f18:{NFSU2_TR(0x663f18);
__builtin_memmove((R+24),(R+4),4);
}
B663f1a:{NFSU2_TR(0x663f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B663f1d:{NFSU2_TR(0x663f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663f21:{NFSU2_TR(0x663f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663f25:{NFSU2_TR(0x663f25);
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
B663f27:{NFSU2_TR(0x663f27);
if(r1(R+518)){{goto L663f33;}}
}
B663f29:L663f29:{c.instructions+=3;NFSU2_TR(0x663f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B663f2b:{NFSU2_TR(0x663f2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f2c:{NFSU2_TR(0x663f2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663f2full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B663f2f:L663f2f:{c.instructions+=1;NFSU2_TR(0x663f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663f33:L663f33:{c.instructions+=3;NFSU2_TR(0x663f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663f36:{NFSU2_TR(0x663f36);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B663f38:{NFSU2_TR(0x663f38);
if(r1(R+518)){{goto L663f45;}}
}
B663f3a:L663f3a:{c.instructions+=2;NFSU2_TR(0x663f3a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f3c:{NFSU2_TR(0x663f3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663f41ull));
TAIL_STATIC(0x660f55u,660);
}
B663f41:L663f41:{c.instructions+=1;NFSU2_TR(0x663f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663f45:L663f45:{c.instructions+=3;NFSU2_TR(0x663f45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B663f48:{NFSU2_TR(0x663f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B663f49:{NFSU2_TR(0x663f49);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663e90u);}goto L663e90;}
}
B663f4e:L663f4e:{c.instructions+=10;NFSU2_TR(0x663f4e);
__builtin_memmove((R+0),(R+4),4);
}
B663f50:{NFSU2_TR(0x663f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663f54:{NFSU2_TR(0x663f54);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B663f56:{NFSU2_TR(0x663f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f59:{NFSU2_TR(0x663f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f5c:{NFSU2_TR(0x663f5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B663f5e:{NFSU2_TR(0x663f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f61:{NFSU2_TR(0x663f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B663f68:{NFSU2_TR(0x663f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f6b:{NFSU2_TR(0x663f6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663f6c:L663f6c:{c.instructions+=21;NFSU2_TR(0x663f6c);
__builtin_memmove((R+28),(R+28),4);
}
B663f6e:{NFSU2_TR(0x663f6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f6f:{NFSU2_TR(0x663f6f);
__builtin_memmove((R+20),(R+16),4);
}
B663f71:{NFSU2_TR(0x663f71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f72:{NFSU2_TR(0x663f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B663f76:{NFSU2_TR(0x663f76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f77:{NFSU2_TR(0x663f77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f78:{NFSU2_TR(0x663f78);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B663f7a:{NFSU2_TR(0x663f7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663f7b:{NFSU2_TR(0x663f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f7e:{NFSU2_TR(0x663f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f81:{NFSU2_TR(0x663f81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B663f83:{NFSU2_TR(0x663f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f86:{NFSU2_TR(0x663f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f89:{NFSU2_TR(0x663f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f8c:{NFSU2_TR(0x663f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f8f:{NFSU2_TR(0x663f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f92:{NFSU2_TR(0x663f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663f98:{NFSU2_TR(0x663f98);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B663f9e:{NFSU2_TR(0x663f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B663fa4:{NFSU2_TR(0x663fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B663fab:L663fab:{c.instructions+=11;NFSU2_TR(0x663fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0xffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B663fb2:{NFSU2_TR(0x663fb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B663fb4:{NFSU2_TR(0x663fb4);
__builtin_memmove((R+28),(R+12),4);
}
B663fb6:{NFSU2_TR(0x663fb6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B663fb7:{NFSU2_TR(0x663fb7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B663fb8:{NFSU2_TR(0x663fb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B663fba:{NFSU2_TR(0x663fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663fbd:{NFSU2_TR(0x663fbd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B663fc0:{NFSU2_TR(0x663fc0);
w1(R+512,carry<u32>(r4(R+12),u32(0x8ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B663fc3:{NFSU2_TR(0x663fc3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B663fc6:{NFSU2_TR(0x663fc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x663fabu);}goto L663fab;}}
}
B663fc8:L663fc8:{c.instructions+=6;NFSU2_TR(0x663fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B663fc9:{NFSU2_TR(0x663fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B663fca:{NFSU2_TR(0x663fca);
__builtin_memmove((R+0),(R+4),4);
}
B663fcc:{NFSU2_TR(0x663fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B663fcd:{NFSU2_TR(0x663fcd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B663fce:{NFSU2_TR(0x663fce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B663fcf:L663fcf:{c.instructions+=8;NFSU2_TR(0x663fcf);
__builtin_memmove((R+28),(R+28),4);
}
B663fd1:{NFSU2_TR(0x663fd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663fd2:{NFSU2_TR(0x663fd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663fd3:{NFSU2_TR(0x663fd3);
__builtin_memmove((R+24),(R+4),4);
}
B663fd5:{NFSU2_TR(0x663fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B663fd8:{NFSU2_TR(0x663fd8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B663fda:{NFSU2_TR(0x663fda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663fdc:{NFSU2_TR(0x663fdc);
if(r1(R+518)){{goto L663fe8;}}
}
B663fde:L663fde:{c.instructions+=2;NFSU2_TR(0x663fde);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B663fe0:{NFSU2_TR(0x663fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x663fe5ull));
TAIL_STATIC(0x66238cu,662);
}
B663fe5:L663fe5:{c.instructions+=1;NFSU2_TR(0x663fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B663fe8:L663fe8:{c.instructions+=3;NFSU2_TR(0x663fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B663fea:{NFSU2_TR(0x663fea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663fec:{NFSU2_TR(0x663fec);
if(r1(R+518)){TAIL_STATIC(0x664002u,664);}
}
B663fee:L663fee:{c.instructions+=2;NFSU2_TR(0x663fee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663ff1:{NFSU2_TR(0x663ff1);
if(r1(R+518)){TAIL_STATIC(0x664002u,664);}
}
B663ff3:L663ff3:{c.instructions+=2;NFSU2_TR(0x663ff3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663ff6:{NFSU2_TR(0x663ff6);
if(r1(R+518)){TAIL_STATIC(0x664002u,664);}
}
B663ff8:L663ff8:{c.instructions+=2;NFSU2_TR(0x663ff8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B663ffb:{NFSU2_TR(0x663ffb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x664013u,664);}
}
B663ffd:L663ffd:{c.instructions+=1;NFSU2_TR(0x663ffd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x664000u,664);
}
XIT:NFSU2_TR_EXIT(0x663,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
