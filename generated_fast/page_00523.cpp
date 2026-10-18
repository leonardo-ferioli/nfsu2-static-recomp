#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x523,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x523,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_523(u8* __restrict R,Cpu& c);
u32 page_523(Cpu& c){return body_523(c.regs.data(),c);}
__attribute__((noinline)) u32 body_523(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x523000:goto L523000;
case 0x523006:c.instructions+=3;goto B523006;
case 0x523008:c.instructions+=2;goto B523008;
case 0x52300b:c.instructions+=1;goto B52300b;
case 0x52300d:goto L52300d;
case 0x52300f:c.instructions+=3;goto B52300f;
case 0x523011:c.instructions+=2;goto B523011;
case 0x523013:c.instructions+=1;goto B523013;
case 0x523016:goto L523016;
case 0x523017:c.instructions+=3;goto B523017;
case 0x523018:c.instructions+=2;goto B523018;
case 0x52301b:c.instructions+=1;goto B52301b;
case 0x52301c:goto L52301c;
case 0x52301e:c.instructions+=3;goto B52301e;
case 0x523020:c.instructions+=2;goto B523020;
case 0x523023:c.instructions+=1;goto B523023;
case 0x523025:goto L523025;
case 0x523027:c.instructions+=2;goto B523027;
case 0x523029:c.instructions+=1;goto B523029;
case 0x52302b:goto L52302b;
case 0x52302d:goto L52302d;
case 0x523031:c.instructions+=4;goto B523031;
case 0x523037:c.instructions+=3;goto B523037;
case 0x523039:c.instructions+=2;goto B523039;
case 0x52303c:c.instructions+=1;goto B52303c;
case 0x52303e:goto L52303e;
case 0x523040:c.instructions+=3;goto B523040;
case 0x523042:c.instructions+=2;goto B523042;
case 0x523044:c.instructions+=1;goto B523044;
case 0x523047:goto L523047;
case 0x523048:c.instructions+=3;goto B523048;
case 0x523049:c.instructions+=2;goto B523049;
case 0x52304c:c.instructions+=1;goto B52304c;
case 0x523050:goto L523050;
case 0x523052:c.instructions+=46;goto B523052;
case 0x523058:c.instructions+=45;goto B523058;
case 0x52305a:c.instructions+=44;goto B52305a;
case 0x52305d:c.instructions+=43;goto B52305d;
case 0x523064:c.instructions+=42;goto B523064;
case 0x52306b:c.instructions+=41;goto B52306b;
case 0x52306e:c.instructions+=40;goto B52306e;
case 0x523071:c.instructions+=39;goto B523071;
case 0x523074:c.instructions+=38;goto B523074;
case 0x52307a:c.instructions+=37;goto B52307a;
case 0x52307d:c.instructions+=36;goto B52307d;
case 0x523083:c.instructions+=35;goto B523083;
case 0x523089:c.instructions+=34;goto B523089;
case 0x52308c:c.instructions+=33;goto B52308c;
case 0x52308f:c.instructions+=32;goto B52308f;
case 0x523092:c.instructions+=31;goto B523092;
case 0x523095:c.instructions+=30;goto B523095;
case 0x523098:c.instructions+=29;goto B523098;
case 0x52309b:c.instructions+=28;goto B52309b;
case 0x52309e:c.instructions+=27;goto B52309e;
case 0x5230a1:c.instructions+=26;goto B5230a1;
case 0x5230a4:c.instructions+=25;goto B5230a4;
case 0x5230a7:c.instructions+=24;goto B5230a7;
case 0x5230aa:c.instructions+=23;goto B5230aa;
case 0x5230ad:c.instructions+=22;goto B5230ad;
case 0x5230b0:c.instructions+=21;goto B5230b0;
case 0x5230b3:c.instructions+=20;goto B5230b3;
case 0x5230b6:c.instructions+=19;goto B5230b6;
case 0x5230bd:c.instructions+=18;goto B5230bd;
case 0x5230c4:c.instructions+=17;goto B5230c4;
case 0x5230cb:c.instructions+=16;goto B5230cb;
case 0x5230ce:c.instructions+=15;goto B5230ce;
case 0x5230d1:c.instructions+=14;goto B5230d1;
case 0x5230d4:c.instructions+=13;goto B5230d4;
case 0x5230d7:c.instructions+=12;goto B5230d7;
case 0x5230dd:c.instructions+=11;goto B5230dd;
case 0x5230e3:c.instructions+=10;goto B5230e3;
case 0x5230e9:c.instructions+=9;goto B5230e9;
case 0x5230ef:c.instructions+=8;goto B5230ef;
case 0x5230f5:c.instructions+=7;goto B5230f5;
case 0x5230fb:c.instructions+=6;goto B5230fb;
case 0x523101:c.instructions+=5;goto B523101;
case 0x523107:c.instructions+=4;goto B523107;
case 0x52310d:c.instructions+=3;goto B52310d;
case 0x523110:c.instructions+=2;goto B523110;
case 0x523113:c.instructions+=1;goto B523113;
case 0x523120:goto L523120;
case 0x523121:c.instructions+=2;goto B523121;
case 0x523123:c.instructions+=1;goto B523123;
case 0x523128:goto L523128;
case 0x52312d:c.instructions+=1;goto B52312d;
case 0x52312f:goto L52312f;
case 0x523130:c.instructions+=1;goto B523130;
case 0x523135:goto L523135;
case 0x523138:goto L523138;
case 0x52313a:c.instructions+=2;goto B52313a;
case 0x52313b:c.instructions+=1;goto B52313b;
case 0x523140:goto L523140;
case 0x523147:c.instructions+=2;goto B523147;
case 0x52314d:c.instructions+=1;goto B52314d;
case 0x523150:goto L523150;
case 0x523151:c.instructions+=4;goto B523151;
case 0x523153:c.instructions+=3;goto B523153;
case 0x523159:c.instructions+=2;goto B523159;
case 0x52315b:c.instructions+=1;goto B52315b;
case 0x523160:goto L523160;
case 0x523162:c.instructions+=1;goto B523162;
case 0x523164:goto L523164;
case 0x52316a:c.instructions+=4;goto B52316a;
case 0x52316c:c.instructions+=3;goto B52316c;
case 0x52316e:c.instructions+=2;goto B52316e;
case 0x523170:c.instructions+=1;goto B523170;
case 0x523175:goto L523175;
case 0x523177:goto L523177;
case 0x52317d:goto L52317d;
case 0x52317e:c.instructions+=5;goto B52317e;
case 0x523181:c.instructions+=4;goto B523181;
case 0x523184:c.instructions+=3;goto B523184;
case 0x52318a:c.instructions+=2;goto B52318a;
case 0x52318b:c.instructions+=1;goto B52318b;
case 0x523190:goto L523190;
case 0x523192:c.instructions+=1;goto B523192;
case 0x523194:goto L523194;
case 0x52319a:c.instructions+=4;goto B52319a;
case 0x52319c:c.instructions+=3;goto B52319c;
case 0x52319e:c.instructions+=2;goto B52319e;
case 0x52319f:c.instructions+=1;goto B52319f;
case 0x5231a4:goto L5231a4;
case 0x5231a6:goto L5231a6;
case 0x5231ac:goto L5231ac;
case 0x5231af:c.instructions+=3;goto B5231af;
case 0x5231b5:c.instructions+=2;goto B5231b5;
case 0x5231b7:c.instructions+=1;goto B5231b7;
case 0x5231bc:goto L5231bc;
case 0x5231be:c.instructions+=2;goto B5231be;
case 0x5231bf:c.instructions+=1;goto B5231bf;
case 0x5231c1:goto L5231c1;
case 0x5231c7:c.instructions+=4;goto B5231c7;
case 0x5231c9:c.instructions+=3;goto B5231c9;
case 0x5231cb:c.instructions+=2;goto B5231cb;
case 0x5231cd:c.instructions+=1;goto B5231cd;
case 0x5231d2:goto L5231d2;
case 0x5231d4:goto L5231d4;
case 0x5231da:goto L5231da;
case 0x5231dd:c.instructions+=8;goto B5231dd;
case 0x5231e0:c.instructions+=7;goto B5231e0;
case 0x5231e3:c.instructions+=6;goto B5231e3;
case 0x5231e6:c.instructions+=5;goto B5231e6;
case 0x5231e9:c.instructions+=4;goto B5231e9;
case 0x5231ea:c.instructions+=3;goto B5231ea;
case 0x5231ec:c.instructions+=2;goto B5231ec;
case 0x5231ef:c.instructions+=1;goto B5231ef;
case 0x5231f1:goto L5231f1;
case 0x5231f4:c.instructions+=1;goto B5231f4;
case 0x5231f7:goto L5231f7;
case 0x5231fa:c.instructions+=4;goto B5231fa;
case 0x5231fd:c.instructions+=3;goto B5231fd;
case 0x5231ff:c.instructions+=2;goto B5231ff;
case 0x523202:c.instructions+=1;goto B523202;
case 0x523204:goto L523204;
case 0x523207:c.instructions+=1;goto B523207;
case 0x52320a:goto L52320a;
case 0x52320c:c.instructions+=1;goto B52320c;
case 0x523210:goto L523210;
case 0x523211:c.instructions+=9;goto B523211;
case 0x523213:c.instructions+=8;goto B523213;
case 0x523214:c.instructions+=7;goto B523214;
case 0x523215:c.instructions+=6;goto B523215;
case 0x523217:c.instructions+=5;goto B523217;
case 0x52321a:c.instructions+=4;goto B52321a;
case 0x52321d:c.instructions+=3;goto B52321d;
case 0x523220:c.instructions+=2;goto B523220;
case 0x523223:c.instructions+=1;goto B523223;
case 0x523225:goto L523225;
case 0x523228:c.instructions+=3;goto B523228;
case 0x52322b:c.instructions+=2;goto B52322b;
case 0x523230:c.instructions+=1;goto B523230;
case 0x523233:goto L523233;
case 0x523235:goto L523235;
case 0x523238:c.instructions+=1;goto B523238;
case 0x52323a:goto L52323a;
case 0x52323d:c.instructions+=3;goto B52323d;
case 0x523240:c.instructions+=2;goto B523240;
case 0x523245:c.instructions+=1;goto B523245;
case 0x523248:goto L523248;
case 0x52324b:c.instructions+=4;goto B52324b;
case 0x52324e:c.instructions+=3;goto B52324e;
case 0x523250:c.instructions+=2;goto B523250;
case 0x523253:c.instructions+=1;goto B523253;
case 0x523259:goto L523259;
case 0x52325c:c.instructions+=4;goto B52325c;
case 0x52325f:c.instructions+=3;goto B52325f;
case 0x523265:c.instructions+=2;goto B523265;
case 0x523267:c.instructions+=1;goto B523267;
case 0x52326c:goto L52326c;
case 0x52326e:c.instructions+=1;goto B52326e;
case 0x523270:goto L523270;
case 0x523273:c.instructions+=6;goto B523273;
case 0x523279:c.instructions+=5;goto B523279;
case 0x52327b:c.instructions+=4;goto B52327b;
case 0x52327d:c.instructions+=3;goto B52327d;
case 0x52327f:c.instructions+=2;goto B52327f;
case 0x523280:c.instructions+=1;goto B523280;
case 0x523285:goto L523285;
case 0x52328b:c.instructions+=2;goto B52328b;
case 0x52328d:c.instructions+=1;goto B52328d;
case 0x523292:goto L523292;
case 0x523294:c.instructions+=1;goto B523294;
case 0x523296:goto L523296;
case 0x52329c:c.instructions+=4;goto B52329c;
case 0x52329e:c.instructions+=3;goto B52329e;
case 0x5232a0:c.instructions+=2;goto B5232a0;
case 0x5232a2:c.instructions+=1;goto B5232a2;
case 0x5232a7:goto L5232a7;
case 0x5232a9:goto L5232a9;
case 0x5232af:goto L5232af;
case 0x5232b2:c.instructions+=3;goto B5232b2;
case 0x5232b8:c.instructions+=2;goto B5232b8;
case 0x5232ba:c.instructions+=1;goto B5232ba;
case 0x5232bf:goto L5232bf;
case 0x5232c1:c.instructions+=1;goto B5232c1;
case 0x5232c3:goto L5232c3;
case 0x5232c9:c.instructions+=4;goto B5232c9;
case 0x5232cb:c.instructions+=3;goto B5232cb;
case 0x5232cd:c.instructions+=2;goto B5232cd;
case 0x5232cf:c.instructions+=1;goto B5232cf;
case 0x5232d4:goto L5232d4;
case 0x5232d7:c.instructions+=3;goto B5232d7;
case 0x5232d9:c.instructions+=2;goto B5232d9;
case 0x5232db:c.instructions+=1;goto B5232db;
case 0x5232de:goto L5232de;
case 0x5232e0:c.instructions+=4;goto B5232e0;
case 0x5232e1:c.instructions+=3;goto B5232e1;
case 0x5232e3:c.instructions+=2;goto B5232e3;
case 0x5232e4:c.instructions+=1;goto B5232e4;
case 0x5232e7:goto L5232e7;
case 0x5232ed:c.instructions+=4;goto B5232ed;
case 0x5232ef:c.instructions+=3;goto B5232ef;
case 0x5232f1:c.instructions+=2;goto B5232f1;
case 0x5232f4:c.instructions+=1;goto B5232f4;
case 0x5232f7:goto L5232f7;
case 0x5232f9:c.instructions+=4;goto B5232f9;
case 0x5232fa:c.instructions+=3;goto B5232fa;
case 0x5232fc:c.instructions+=2;goto B5232fc;
case 0x5232fd:c.instructions+=1;goto B5232fd;
case 0x523300:goto L523300;
case 0x523302:c.instructions+=4;goto B523302;
case 0x523303:c.instructions+=3;goto B523303;
case 0x523305:c.instructions+=2;goto B523305;
case 0x523306:c.instructions+=1;goto B523306;
case 0x523310:goto L523310;
case 0x523311:c.instructions+=2;goto B523311;
case 0x523313:c.instructions+=1;goto B523313;
case 0x523318:goto L523318;
case 0x52331d:c.instructions+=1;goto B52331d;
case 0x52331f:goto L52331f;
case 0x523320:c.instructions+=1;goto B523320;
case 0x523325:goto L523325;
case 0x523328:goto L523328;
case 0x52332a:c.instructions+=2;goto B52332a;
case 0x52332b:c.instructions+=1;goto B52332b;
case 0x523330:goto L523330;
case 0x523331:c.instructions+=5;goto B523331;
case 0x523333:c.instructions+=4;goto B523333;
case 0x523336:c.instructions+=3;goto B523336;
case 0x523337:c.instructions+=2;goto B523337;
case 0x52333a:c.instructions+=1;goto B52333a;
case 0x52333f:goto L52333f;
case 0x523342:c.instructions+=6;goto B523342;
case 0x523349:c.instructions+=5;goto B523349;
case 0x523350:c.instructions+=4;goto B523350;
case 0x523357:c.instructions+=3;goto B523357;
case 0x52335e:c.instructions+=2;goto B52335e;
case 0x523365:c.instructions+=1;goto B523365;
case 0x52336a:goto L52336a;
case 0x52336c:c.instructions+=2;goto B52336c;
case 0x523371:c.instructions+=1;goto B523371;
case 0x523374:goto L523374;
case 0x523376:goto L523376;
case 0x523379:c.instructions+=2;goto B523379;
case 0x52337b:c.instructions+=1;goto B52337b;
case 0x523381:goto L523381;
case 0x523382:c.instructions+=6;goto B523382;
case 0x523383:c.instructions+=5;goto B523383;
case 0x523386:c.instructions+=4;goto B523386;
case 0x52338c:c.instructions+=3;goto B52338c;
case 0x52338d:c.instructions+=2;goto B52338d;
case 0x523390:c.instructions+=1;goto B523390;
case 0x523395:goto L523395;
case 0x523397:c.instructions+=5;goto B523397;
case 0x52339a:c.instructions+=4;goto B52339a;
case 0x52339d:c.instructions+=3;goto B52339d;
case 0x52339f:c.instructions+=2;goto B52339f;
case 0x5233a1:c.instructions+=1;goto B5233a1;
case 0x5233a6:goto L5233a6;
case 0x5233a8:c.instructions+=2;goto B5233a8;
case 0x5233aa:c.instructions+=1;goto B5233aa;
case 0x5233af:goto L5233af;
case 0x5233b2:c.instructions+=4;goto B5233b2;
case 0x5233b5:c.instructions+=3;goto B5233b5;
case 0x5233bb:c.instructions+=2;goto B5233bb;
case 0x5233c1:c.instructions+=1;goto B5233c1;
case 0x5233c6:goto L5233c6;
case 0x5233c9:c.instructions+=4;goto B5233c9;
case 0x5233cc:c.instructions+=3;goto B5233cc;
case 0x5233d2:c.instructions+=2;goto B5233d2;
case 0x5233d8:c.instructions+=1;goto B5233d8;
case 0x5233dd:goto L5233dd;
case 0x5233df:c.instructions+=5;goto B5233df;
case 0x5233e2:c.instructions+=4;goto B5233e2;
case 0x5233e3:c.instructions+=3;goto B5233e3;
case 0x5233e5:c.instructions+=2;goto B5233e5;
case 0x5233e8:c.instructions+=1;goto B5233e8;
case 0x5233ed:goto L5233ed;
case 0x5233f0:c.instructions+=5;goto B5233f0;
case 0x5233f2:c.instructions+=4;goto B5233f2;
case 0x5233f5:c.instructions+=3;goto B5233f5;
case 0x5233f6:c.instructions+=2;goto B5233f6;
case 0x5233f8:c.instructions+=1;goto B5233f8;
case 0x5233fd:goto L5233fd;
case 0x523400:c.instructions+=22;goto B523400;
case 0x523406:c.instructions+=21;goto B523406;
case 0x523409:c.instructions+=20;goto B523409;
case 0x52340f:c.instructions+=19;goto B52340f;
case 0x523412:c.instructions+=18;goto B523412;
case 0x523418:c.instructions+=17;goto B523418;
case 0x52341b:c.instructions+=16;goto B52341b;
case 0x523421:c.instructions+=15;goto B523421;
case 0x523424:c.instructions+=14;goto B523424;
case 0x52342a:c.instructions+=13;goto B52342a;
case 0x52342d:c.instructions+=12;goto B52342d;
case 0x523433:c.instructions+=11;goto B523433;
case 0x523436:c.instructions+=10;goto B523436;
case 0x52343c:c.instructions+=9;goto B52343c;
case 0x52343f:c.instructions+=8;goto B52343f;
case 0x523445:c.instructions+=7;goto B523445;
case 0x523448:c.instructions+=6;goto B523448;
case 0x52344e:c.instructions+=5;goto B52344e;
case 0x523451:c.instructions+=4;goto B523451;
case 0x523457:c.instructions+=3;goto B523457;
case 0x523458:c.instructions+=2;goto B523458;
case 0x52345b:c.instructions+=1;goto B52345b;
case 0x52345c:goto L52345c;
case 0x523461:c.instructions+=3;goto B523461;
case 0x523463:c.instructions+=2;goto B523463;
case 0x523464:c.instructions+=1;goto B523464;
case 0x523466:goto L523466;
case 0x523469:c.instructions+=3;goto B523469;
case 0x52346a:c.instructions+=2;goto B52346a;
case 0x52346f:c.instructions+=1;goto B52346f;
case 0x523471:goto L523471;
case 0x523477:c.instructions+=4;goto B523477;
case 0x52347d:c.instructions+=3;goto B52347d;
case 0x52347f:c.instructions+=2;goto B52347f;
case 0x523482:c.instructions+=1;goto B523482;
case 0x523484:goto L523484;
case 0x523489:c.instructions+=1;goto B523489;
case 0x52348e:goto L52348e;
case 0x523493:goto L523493;
case 0x523496:c.instructions+=3;goto B523496;
case 0x523497:c.instructions+=2;goto B523497;
case 0x52349c:c.instructions+=1;goto B52349c;
case 0x5234a1:goto L5234a1;
case 0x5234a4:c.instructions+=2;goto B5234a4;
case 0x5234a6:c.instructions+=1;goto B5234a6;
case 0x5234a8:goto L5234a8;
case 0x5234ae:goto L5234ae;
case 0x5234b0:c.instructions+=2;goto B5234b0;
case 0x5234b1:c.instructions+=1;goto B5234b1;
case 0x5234c0:goto L5234c0;
case 0x5234c1:c.instructions+=7;goto B5234c1;
case 0x5234c3:c.instructions+=6;goto B5234c3;
case 0x5234c6:c.instructions+=5;goto B5234c6;
case 0x5234cc:c.instructions+=4;goto B5234cc;
case 0x5234d2:c.instructions+=3;goto B5234d2;
case 0x5234d4:c.instructions+=2;goto B5234d4;
case 0x5234d7:c.instructions+=1;goto B5234d7;
case 0x5234d9:goto L5234d9;
case 0x5234df:c.instructions+=3;goto B5234df;
case 0x5234e1:c.instructions+=2;goto B5234e1;
case 0x5234e2:c.instructions+=1;goto B5234e2;
case 0x5234e5:goto L5234e5;
case 0x5234e6:c.instructions+=6;goto B5234e6;
case 0x5234e9:c.instructions+=5;goto B5234e9;
case 0x5234ea:c.instructions+=4;goto B5234ea;
case 0x5234eb:c.instructions+=3;goto B5234eb;
case 0x5234ed:c.instructions+=2;goto B5234ed;
case 0x5234ef:c.instructions+=1;goto B5234ef;
case 0x5234f4:goto L5234f4;
case 0x5234f6:c.instructions+=1;goto B5234f6;
case 0x5234f8:goto L5234f8;
case 0x5234fc:c.instructions+=2;goto B5234fc;
case 0x523500:c.instructions+=1;goto B523500;
case 0x523502:goto L523502;
case 0x523506:goto L523506;
case 0x523508:c.instructions+=2;goto B523508;
case 0x52350a:c.instructions+=1;goto B52350a;
case 0x523510:goto L523510;
case 0x523513:c.instructions+=1;goto B523513;
case 0x523515:goto L523515;
case 0x523518:c.instructions+=1;goto B523518;
case 0x52351a:goto L52351a;
case 0x52351d:c.instructions+=2;goto B52351d;
case 0x52351f:c.instructions+=1;goto B52351f;
case 0x523521:goto L523521;
case 0x523524:c.instructions+=1;goto B523524;
case 0x523526:goto L523526;
case 0x523529:c.instructions+=1;goto B523529;
case 0x52352b:goto L52352b;
case 0x52352e:c.instructions+=1;goto B52352e;
case 0x523530:goto L523530;
case 0x523533:c.instructions+=1;goto B523533;
case 0x523535:goto L523535;
case 0x523536:c.instructions+=2;goto B523536;
case 0x523538:c.instructions+=1;goto B523538;
case 0x52353d:goto L52353d;
case 0x52353f:c.instructions+=1;goto B52353f;
case 0x523541:goto L523541;
case 0x523542:c.instructions+=5;goto B523542;
case 0x523544:c.instructions+=4;goto B523544;
case 0x523545:c.instructions+=3;goto B523545;
case 0x523546:c.instructions+=2;goto B523546;
case 0x52354b:c.instructions+=1;goto B52354b;
case 0x523550:goto L523550;
case 0x523552:goto L523552;
case 0x523553:c.instructions+=2;goto B523553;
case 0x523559:c.instructions+=1;goto B523559;
case 0x52355b:goto L52355b;
case 0x523560:c.instructions+=3;goto B523560;
case 0x523566:c.instructions+=2;goto B523566;
case 0x523568:c.instructions+=1;goto B523568;
case 0x52356a:goto L52356a;
case 0x52356f:c.instructions+=1;goto B52356f;
case 0x523570:goto L523570;
case 0x523577:c.instructions+=1;goto B523577;
case 0x523579:goto L523579;
case 0x523580:c.instructions+=1;goto B523580;
case 0x523582:goto L523582;
case 0x523583:c.instructions+=2;goto B523583;
case 0x523586:c.instructions+=1;goto B523586;
case 0x523588:goto L523588;
case 0x523589:c.instructions+=5;goto B523589;
case 0x52358a:c.instructions+=4;goto B52358a;
case 0x52358b:c.instructions+=3;goto B52358b;
case 0x52358d:c.instructions+=2;goto B52358d;
case 0x52358e:c.instructions+=1;goto B52358e;
case 0x523591:goto L523591;
case 0x523598:c.instructions+=10;goto B523598;
case 0x52359a:c.instructions+=9;goto B52359a;
case 0x5235a1:c.instructions+=8;goto B5235a1;
case 0x5235a7:c.instructions+=7;goto B5235a7;
case 0x5235ae:c.instructions+=6;goto B5235ae;
case 0x5235b5:c.instructions+=5;goto B5235b5;
case 0x5235b7:c.instructions+=4;goto B5235b7;
case 0x5235b9:c.instructions+=3;goto B5235b9;
case 0x5235bc:c.instructions+=2;goto B5235bc;
case 0x5235bf:c.instructions+=1;goto B5235bf;
case 0x5235c1:goto L5235c1;
case 0x5235c3:c.instructions+=5;goto B5235c3;
case 0x5235c5:c.instructions+=4;goto B5235c5;
case 0x5235c8:c.instructions+=3;goto B5235c8;
case 0x5235cb:c.instructions+=2;goto B5235cb;
case 0x5235ce:c.instructions+=1;goto B5235ce;
case 0x5235d0:goto L5235d0;
case 0x5235d2:c.instructions+=10;goto B5235d2;
case 0x5235d5:c.instructions+=9;goto B5235d5;
case 0x5235d8:c.instructions+=8;goto B5235d8;
case 0x5235d9:c.instructions+=7;goto B5235d9;
case 0x5235da:c.instructions+=6;goto B5235da;
case 0x5235db:c.instructions+=5;goto B5235db;
case 0x5235dd:c.instructions+=4;goto B5235dd;
case 0x5235e0:c.instructions+=3;goto B5235e0;
case 0x5235e2:c.instructions+=2;goto B5235e2;
case 0x5235e3:c.instructions+=1;goto B5235e3;
case 0x5235e6:goto L5235e6;
case 0x5235e7:c.instructions+=7;goto B5235e7;
case 0x5235e9:c.instructions+=6;goto B5235e9;
case 0x5235ef:c.instructions+=5;goto B5235ef;
case 0x5235f0:c.instructions+=4;goto B5235f0;
case 0x5235f1:c.instructions+=3;goto B5235f1;
case 0x5235f3:c.instructions+=2;goto B5235f3;
case 0x5235f4:c.instructions+=1;goto B5235f4;
case 0x523600:goto L523600;
case 0x523601:c.instructions+=7;goto B523601;
case 0x523602:c.instructions+=6;goto B523602;
case 0x523606:c.instructions+=5;goto B523606;
case 0x523608:c.instructions+=4;goto B523608;
case 0x52360b:c.instructions+=3;goto B52360b;
case 0x52360c:c.instructions+=2;goto B52360c;
case 0x52360d:c.instructions+=1;goto B52360d;
case 0x523612:goto L523612;
case 0x523615:c.instructions+=3;goto B523615;
case 0x523616:c.instructions+=2;goto B523616;
case 0x523617:c.instructions+=1;goto B523617;
case 0x52361c:goto L52361c;
case 0x52361f:c.instructions+=3;goto B52361f;
case 0x523620:c.instructions+=2;goto B523620;
case 0x523621:c.instructions+=1;goto B523621;
case 0x523626:goto L523626;
case 0x52362c:c.instructions+=3;goto B52362c;
case 0x52362d:c.instructions+=2;goto B52362d;
case 0x52362e:c.instructions+=1;goto B52362e;
case 0x523633:goto L523633;
case 0x523639:c.instructions+=3;goto B523639;
case 0x52363a:c.instructions+=2;goto B52363a;
case 0x52363b:c.instructions+=1;goto B52363b;
case 0x523640:goto L523640;
case 0x523643:c.instructions+=3;goto B523643;
case 0x523644:c.instructions+=2;goto B523644;
case 0x523645:c.instructions+=1;goto B523645;
case 0x523650:goto L523650;
case 0x523653:c.instructions+=13;goto B523653;
case 0x523654:c.instructions+=12;goto B523654;
case 0x523656:c.instructions+=11;goto B523656;
case 0x523659:c.instructions+=10;goto B523659;
case 0x52365c:c.instructions+=9;goto B52365c;
case 0x523660:c.instructions+=8;goto B523660;
case 0x523664:c.instructions+=7;goto B523664;
case 0x52366c:c.instructions+=6;goto B52366c;
case 0x523672:c.instructions+=5;goto B523672;
case 0x523677:c.instructions+=4;goto B523677;
case 0x52367b:c.instructions+=3;goto B52367b;
case 0x52367d:c.instructions+=2;goto B52367d;
case 0x523680:c.instructions+=1;goto B523680;
case 0x523686:goto L523686;
case 0x52368a:c.instructions+=4;goto B52368a;
case 0x523690:c.instructions+=3;goto B523690;
case 0x523692:c.instructions+=2;goto B523692;
case 0x523695:c.instructions+=1;goto B523695;
case 0x52369b:goto L52369b;
case 0x52369f:c.instructions+=4;goto B52369f;
case 0x5236a3:c.instructions+=3;goto B5236a3;
case 0x5236a7:c.instructions+=2;goto B5236a7;
case 0x5236ab:c.instructions+=1;goto B5236ab;
case 0x5236b0:goto L5236b0;
case 0x5236b4:c.instructions+=5;goto B5236b4;
case 0x5236b8:c.instructions+=4;goto B5236b8;
case 0x5236bc:c.instructions+=3;goto B5236bc;
case 0x5236be:c.instructions+=2;goto B5236be;
case 0x5236c1:c.instructions+=1;goto B5236c1;
case 0x5236c3:goto L5236c3;
case 0x5236c9:goto L5236c9;
case 0x5236cd:c.instructions+=6;goto B5236cd;
case 0x5236ce:c.instructions+=5;goto B5236ce;
case 0x5236d0:c.instructions+=4;goto B5236d0;
case 0x5236d3:c.instructions+=3;goto B5236d3;
case 0x5236d8:c.instructions+=2;goto B5236d8;
case 0x5236dc:c.instructions+=1;goto B5236dc;
case 0x5236e0:goto L5236e0;
case 0x5236e3:c.instructions+=2;goto B5236e3;
case 0x5236e4:c.instructions+=1;goto B5236e4;
case 0x5236e9:goto L5236e9;
case 0x5236eb:c.instructions+=2;goto B5236eb;
case 0x5236ec:c.instructions+=1;goto B5236ec;
case 0x5236f1:goto L5236f1;
case 0x5236f4:c.instructions+=2;goto B5236f4;
case 0x5236f5:c.instructions+=1;goto B5236f5;
case 0x5236fa:goto L5236fa;
case 0x5236fd:c.instructions+=3;goto B5236fd;
case 0x523700:c.instructions+=2;goto B523700;
case 0x523701:c.instructions+=1;goto B523701;
case 0x523703:goto L523703;
case 0x523704:c.instructions+=2;goto B523704;
case 0x523705:c.instructions+=1;goto B523705;
case 0x52370a:goto L52370a;
case 0x52370c:c.instructions+=1;goto B52370c;
case 0x523712:goto L523712;
case 0x523714:c.instructions+=3;goto B523714;
case 0x523717:c.instructions+=2;goto B523717;
case 0x52371b:c.instructions+=1;goto B52371b;
case 0x523720:goto L523720;
case 0x523722:c.instructions+=2;goto B523722;
case 0x523724:c.instructions+=1;goto B523724;
case 0x523726:goto L523726;
case 0x52372c:c.instructions+=2;goto B52372c;
case 0x52372e:c.instructions+=1;goto B52372e;
case 0x523730:goto L523730;
case 0x523734:c.instructions+=1;goto B523734;
case 0x523736:goto L523736;
case 0x523739:c.instructions+=3;goto B523739;
case 0x52373c:c.instructions+=2;goto B52373c;
case 0x523742:c.instructions+=1;goto B523742;
case 0x523745:goto L523745;
case 0x523749:c.instructions+=1;goto B523749;
case 0x52374b:goto L52374b;
case 0x52374e:c.instructions+=3;goto B52374e;
case 0x523751:c.instructions+=2;goto B523751;
case 0x523753:c.instructions+=1;goto B523753;
case 0x523755:goto L523755;
case 0x523757:goto L523757;
case 0x523758:c.instructions+=1;goto B523758;
case 0x52375d:goto L52375d;
case 0x523760:c.instructions+=3;goto B523760;
case 0x523763:c.instructions+=2;goto B523763;
case 0x523764:c.instructions+=1;goto B523764;
case 0x523766:goto L523766;
case 0x52376c:c.instructions+=4;goto B52376c;
case 0x52376e:c.instructions+=3;goto B52376e;
case 0x52376f:c.instructions+=2;goto B52376f;
case 0x523770:c.instructions+=1;goto B523770;
case 0x523775:goto L523775;
case 0x523778:c.instructions+=3;goto B523778;
case 0x52377b:c.instructions+=2;goto B52377b;
case 0x52377d:c.instructions+=1;goto B52377d;
case 0x52377f:goto L52377f;
case 0x523785:c.instructions+=2;goto B523785;
case 0x523787:c.instructions+=1;goto B523787;
case 0x523789:goto L523789;
case 0x52378d:c.instructions+=1;goto B52378d;
case 0x52378f:goto L52378f;
case 0x523796:goto L523796;
case 0x52379a:c.instructions+=1;goto B52379a;
case 0x52379c:goto L52379c;
case 0x52379f:c.instructions+=3;goto B52379f;
case 0x5237a2:c.instructions+=2;goto B5237a2;
case 0x5237a4:c.instructions+=1;goto B5237a4;
case 0x5237a6:goto L5237a6;
case 0x5237a8:goto L5237a8;
case 0x5237a9:c.instructions+=1;goto B5237a9;
case 0x5237ae:goto L5237ae;
case 0x5237b1:c.instructions+=3;goto B5237b1;
case 0x5237b4:c.instructions+=2;goto B5237b4;
case 0x5237b5:c.instructions+=1;goto B5237b5;
case 0x5237b7:goto L5237b7;
case 0x5237ba:c.instructions+=2;goto B5237ba;
case 0x5237bc:c.instructions+=1;goto B5237bc;
case 0x5237be:goto L5237be;
case 0x5237c4:c.instructions+=2;goto B5237c4;
case 0x5237c6:c.instructions+=1;goto B5237c6;
case 0x5237c8:goto L5237c8;
case 0x5237cc:c.instructions+=1;goto B5237cc;
case 0x5237ce:goto L5237ce;
case 0x5237d5:goto L5237d5;
case 0x5237d9:c.instructions+=1;goto B5237d9;
case 0x5237db:goto L5237db;
case 0x5237de:c.instructions+=3;goto B5237de;
case 0x5237e1:c.instructions+=2;goto B5237e1;
case 0x5237e3:c.instructions+=1;goto B5237e3;
case 0x5237e5:goto L5237e5;
case 0x5237e7:goto L5237e7;
case 0x5237e8:c.instructions+=1;goto B5237e8;
case 0x5237ed:goto L5237ed;
case 0x5237f0:c.instructions+=3;goto B5237f0;
case 0x5237f3:c.instructions+=2;goto B5237f3;
case 0x5237f4:c.instructions+=1;goto B5237f4;
case 0x5237f6:goto L5237f6;
case 0x5237f9:c.instructions+=2;goto B5237f9;
case 0x5237fa:c.instructions+=1;goto B5237fa;
case 0x523800:goto L523800;
case 0x523804:c.instructions+=4;goto B523804;
case 0x52380a:c.instructions+=3;goto B52380a;
case 0x52380c:c.instructions+=2;goto B52380c;
case 0x52380f:c.instructions+=1;goto B52380f;
case 0x523815:goto L523815;
case 0x523819:c.instructions+=5;goto B523819;
case 0x52381c:c.instructions+=4;goto B52381c;
case 0x523820:c.instructions+=3;goto B523820;
case 0x523823:c.instructions+=2;goto B523823;
case 0x523824:c.instructions+=1;goto B523824;
case 0x523829:goto L523829;
case 0x52382f:c.instructions+=4;goto B52382f;
case 0x523832:c.instructions+=3;goto B523832;
case 0x523833:c.instructions+=2;goto B523833;
case 0x523834:c.instructions+=1;goto B523834;
case 0x523839:goto L523839;
case 0x52383c:c.instructions+=3;goto B52383c;
case 0x52383f:c.instructions+=2;goto B52383f;
case 0x523841:c.instructions+=1;goto B523841;
case 0x523843:goto L523843;
case 0x523849:c.instructions+=2;goto B523849;
case 0x52384b:c.instructions+=1;goto B52384b;
case 0x52384d:goto L52384d;
case 0x523851:c.instructions+=1;goto B523851;
case 0x523853:goto L523853;
case 0x52385a:goto L52385a;
case 0x52385e:c.instructions+=1;goto B52385e;
case 0x523860:goto L523860;
case 0x523863:c.instructions+=3;goto B523863;
case 0x523866:c.instructions+=2;goto B523866;
case 0x523868:c.instructions+=1;goto B523868;
case 0x52386a:goto L52386a;
case 0x52386c:c.instructions+=1;goto B52386c;
case 0x523870:goto L523870;
case 0x523871:c.instructions+=1;goto B523871;
case 0x523876:goto L523876;
case 0x523879:c.instructions+=3;goto B523879;
case 0x52387c:c.instructions+=2;goto B52387c;
case 0x52387d:c.instructions+=1;goto B52387d;
case 0x52387f:goto L52387f;
case 0x523883:c.instructions+=3;goto B523883;
case 0x523886:c.instructions+=2;goto B523886;
case 0x523888:c.instructions+=1;goto B523888;
case 0x52388a:goto L52388a;
case 0x523890:c.instructions+=2;goto B523890;
case 0x523892:c.instructions+=1;goto B523892;
case 0x523894:goto L523894;
case 0x523898:c.instructions+=1;goto B523898;
case 0x52389a:goto L52389a;
case 0x5238a1:goto L5238a1;
case 0x5238a5:c.instructions+=1;goto B5238a5;
case 0x5238a7:goto L5238a7;
case 0x5238aa:c.instructions+=3;goto B5238aa;
case 0x5238ad:c.instructions+=2;goto B5238ad;
case 0x5238af:c.instructions+=1;goto B5238af;
case 0x5238b1:goto L5238b1;
case 0x5238b3:goto L5238b3;
case 0x5238b4:c.instructions+=1;goto B5238b4;
case 0x5238b9:goto L5238b9;
case 0x5238bc:c.instructions+=3;goto B5238bc;
case 0x5238bf:c.instructions+=2;goto B5238bf;
case 0x5238c0:c.instructions+=1;goto B5238c0;
case 0x5238c2:goto L5238c2;
case 0x5238c4:c.instructions+=1;goto B5238c4;
case 0x5238c6:goto L5238c6;
case 0x5238ca:goto L5238ca;
case 0x5238ce:c.instructions+=7;goto B5238ce;
case 0x5238d2:c.instructions+=6;goto B5238d2;
case 0x5238d8:c.instructions+=5;goto B5238d8;
case 0x5238de:c.instructions+=4;goto B5238de;
case 0x5238e2:c.instructions+=3;goto B5238e2;
case 0x5238e4:c.instructions+=2;goto B5238e4;
case 0x5238e7:c.instructions+=1;goto B5238e7;
case 0x5238ed:goto L5238ed;
case 0x5238f0:c.instructions+=2;goto B5238f0;
case 0x5238f2:c.instructions+=1;goto B5238f2;
case 0x5238f8:goto L5238f8;
case 0x5238fc:c.instructions+=4;goto B5238fc;
case 0x523902:c.instructions+=3;goto B523902;
case 0x523904:c.instructions+=2;goto B523904;
case 0x523907:c.instructions+=1;goto B523907;
case 0x52390d:goto L52390d;
case 0x52390f:c.instructions+=2;goto B52390f;
case 0x523913:c.instructions+=1;goto B523913;
case 0x523915:goto L523915;
case 0x523919:c.instructions+=6;goto B523919;
case 0x52391b:c.instructions+=5;goto B52391b;
case 0x52391f:c.instructions+=4;goto B52391f;
case 0x523922:c.instructions+=3;goto B523922;
case 0x523925:c.instructions+=2;goto B523925;
case 0x523926:c.instructions+=1;goto B523926;
case 0x52392b:goto L52392b;
case 0x523931:c.instructions+=4;goto B523931;
case 0x523933:c.instructions+=3;goto B523933;
case 0x523934:c.instructions+=2;goto B523934;
case 0x523935:c.instructions+=1;goto B523935;
case 0x52393a:goto L52393a;
case 0x52393e:c.instructions+=4;goto B52393e;
case 0x523944:c.instructions+=3;goto B523944;
case 0x523947:c.instructions+=2;goto B523947;
case 0x523948:c.instructions+=1;goto B523948;
case 0x52394c:goto L52394c;
case 0x523952:c.instructions+=3;goto B523952;
case 0x523954:c.instructions+=2;goto B523954;
case 0x523957:c.instructions+=1;goto B523957;
case 0x523959:goto L523959;
case 0x52395d:c.instructions+=2;goto B52395d;
case 0x523961:c.instructions+=1;goto B523961;
case 0x523966:goto L523966;
case 0x523968:c.instructions+=1;goto B523968;
case 0x52396d:goto L52396d;
case 0x523971:c.instructions+=5;goto B523971;
case 0x523975:c.instructions+=4;goto B523975;
case 0x523977:c.instructions+=3;goto B523977;
case 0x523979:c.instructions+=2;goto B523979;
case 0x52397c:c.instructions+=1;goto B52397c;
case 0x52397e:goto L52397e;
case 0x523984:goto L523984;
case 0x523986:c.instructions+=3;goto B523986;
case 0x523988:c.instructions+=2;goto B523988;
case 0x52398c:c.instructions+=1;goto B52398c;
case 0x523991:goto L523991;
case 0x523993:c.instructions+=1;goto B523993;
case 0x523999:goto L523999;
case 0x52399d:c.instructions+=6;goto B52399d;
case 0x5239a0:c.instructions+=5;goto B5239a0;
case 0x5239a2:c.instructions+=4;goto B5239a2;
case 0x5239a6:c.instructions+=3;goto B5239a6;
case 0x5239a8:c.instructions+=2;goto B5239a8;
case 0x5239ac:c.instructions+=1;goto B5239ac;
case 0x5239b0:goto L5239b0;
case 0x5239b2:c.instructions+=2;goto B5239b2;
case 0x5239b3:c.instructions+=1;goto B5239b3;
case 0x5239b8:goto L5239b8;
case 0x5239be:c.instructions+=4;goto B5239be;
case 0x5239c0:c.instructions+=3;goto B5239c0;
case 0x5239c1:c.instructions+=2;goto B5239c1;
case 0x5239c2:c.instructions+=1;goto B5239c2;
case 0x5239c7:goto L5239c7;
case 0x5239ca:c.instructions+=3;goto B5239ca;
case 0x5239cd:c.instructions+=2;goto B5239cd;
case 0x5239cf:c.instructions+=1;goto B5239cf;
case 0x5239d1:goto L5239d1;
case 0x5239d7:c.instructions+=2;goto B5239d7;
case 0x5239d9:c.instructions+=1;goto B5239d9;
case 0x5239db:goto L5239db;
case 0x5239df:c.instructions+=1;goto B5239df;
case 0x5239e1:goto L5239e1;
case 0x5239e8:goto L5239e8;
case 0x5239ec:c.instructions+=1;goto B5239ec;
case 0x5239ee:goto L5239ee;
case 0x5239f1:c.instructions+=3;goto B5239f1;
case 0x5239f4:c.instructions+=2;goto B5239f4;
case 0x5239f6:c.instructions+=1;goto B5239f6;
case 0x5239f8:goto L5239f8;
case 0x5239fa:c.instructions+=1;goto B5239fa;
case 0x523a00:goto L523a00;
case 0x523a01:c.instructions+=1;goto B523a01;
case 0x523a06:goto L523a06;
case 0x523a09:c.instructions+=3;goto B523a09;
case 0x523a0c:c.instructions+=2;goto B523a0c;
case 0x523a0d:c.instructions+=1;goto B523a0d;
case 0x523a0f:goto L523a0f;
case 0x523a12:c.instructions+=2;goto B523a12;
case 0x523a14:c.instructions+=1;goto B523a14;
case 0x523a16:goto L523a16;
case 0x523a1c:c.instructions+=2;goto B523a1c;
case 0x523a1e:c.instructions+=1;goto B523a1e;
case 0x523a20:goto L523a20;
case 0x523a24:c.instructions+=1;goto B523a24;
case 0x523a26:goto L523a26;
case 0x523a2d:goto L523a2d;
case 0x523a31:c.instructions+=1;goto B523a31;
case 0x523a33:goto L523a33;
case 0x523a36:c.instructions+=3;goto B523a36;
case 0x523a39:c.instructions+=2;goto B523a39;
case 0x523a3b:c.instructions+=1;goto B523a3b;
case 0x523a3d:goto L523a3d;
case 0x523a3f:c.instructions+=1;goto B523a3f;
case 0x523a40:goto L523a40;
case 0x523a41:c.instructions+=1;goto B523a41;
case 0x523a46:goto L523a46;
case 0x523a49:c.instructions+=3;goto B523a49;
case 0x523a4c:c.instructions+=2;goto B523a4c;
case 0x523a4d:c.instructions+=1;goto B523a4d;
case 0x523a4f:goto L523a4f;
case 0x523a52:c.instructions+=2;goto B523a52;
case 0x523a53:c.instructions+=1;goto B523a53;
case 0x523a59:goto L523a59;
case 0x523a5d:c.instructions+=4;goto B523a5d;
case 0x523a63:c.instructions+=3;goto B523a63;
case 0x523a65:c.instructions+=2;goto B523a65;
case 0x523a68:c.instructions+=1;goto B523a68;
case 0x523a6a:goto L523a6a;
case 0x523a6e:c.instructions+=5;goto B523a6e;
case 0x523a71:c.instructions+=4;goto B523a71;
case 0x523a75:c.instructions+=3;goto B523a75;
case 0x523a78:c.instructions+=2;goto B523a78;
case 0x523a79:c.instructions+=1;goto B523a79;
case 0x523a7e:goto L523a7e;
case 0x523a84:c.instructions+=4;goto B523a84;
case 0x523a87:c.instructions+=3;goto B523a87;
case 0x523a88:c.instructions+=2;goto B523a88;
case 0x523a89:c.instructions+=1;goto B523a89;
case 0x523a8e:goto L523a8e;
case 0x523a91:c.instructions+=2;goto B523a91;
case 0x523a92:c.instructions+=1;goto B523a92;
case 0x523a97:goto L523a97;
case 0x523a9b:c.instructions+=3;goto B523a9b;
case 0x523a9e:c.instructions+=2;goto B523a9e;
case 0x523a9f:c.instructions+=1;goto B523a9f;
case 0x523aa4:goto L523aa4;
case 0x523aa7:goto L523aa7;
case 0x523aab:c.instructions+=1;goto B523aab;
case 0x523aaf:goto L523aaf;
case 0x523ab5:goto L523ab5;
case 0x523ab8:c.instructions+=3;goto B523ab8;
case 0x523ab9:c.instructions+=2;goto B523ab9;
case 0x523aba:c.instructions+=1;goto B523aba;
case 0x523abf:goto L523abf;
case 0x523ac2:c.instructions+=3;goto B523ac2;
case 0x523ac3:c.instructions+=2;goto B523ac3;
case 0x523ac4:c.instructions+=1;goto B523ac4;
case 0x523ac9:goto L523ac9;
case 0x523acc:c.instructions+=3;goto B523acc;
case 0x523acd:c.instructions+=2;goto B523acd;
case 0x523ace:c.instructions+=1;goto B523ace;
case 0x523ad3:goto L523ad3;
case 0x523ad7:c.instructions+=12;goto B523ad7;
case 0x523ada:c.instructions+=11;goto B523ada;
case 0x523ade:c.instructions+=10;goto B523ade;
case 0x523ae1:c.instructions+=9;goto B523ae1;
case 0x523ae4:c.instructions+=8;goto B523ae4;
case 0x523ae7:c.instructions+=7;goto B523ae7;
case 0x523aea:c.instructions+=6;goto B523aea;
case 0x523aec:c.instructions+=5;goto B523aec;
case 0x523aed:c.instructions+=4;goto B523aed;
case 0x523af0:c.instructions+=3;goto B523af0;
case 0x523af3:c.instructions+=2;goto B523af3;
case 0x523af4:c.instructions+=1;goto B523af4;
case 0x523af6:goto L523af6;
case 0x523af9:c.instructions+=1;goto B523af9;
case 0x523afc:goto L523afc;
case 0x523aff:c.instructions+=4;goto B523aff;
case 0x523b02:c.instructions+=3;goto B523b02;
case 0x523b04:c.instructions+=2;goto B523b04;
case 0x523b07:c.instructions+=1;goto B523b07;
case 0x523b09:goto L523b09;
case 0x523b0c:c.instructions+=1;goto B523b0c;
case 0x523b0f:goto L523b0f;
case 0x523b13:c.instructions+=4;goto B523b13;
case 0x523b15:c.instructions+=3;goto B523b15;
case 0x523b16:c.instructions+=2;goto B523b16;
case 0x523b18:c.instructions+=1;goto B523b18;
case 0x523b1b:goto L523b1b;
case 0x523b1d:c.instructions+=2;goto B523b1d;
case 0x523b1f:c.instructions+=1;goto B523b1f;
case 0x523b22:goto L523b22;
case 0x523b23:goto L523b23;
case 0x523b24:c.instructions+=2;goto B523b24;
case 0x523b27:c.instructions+=1;goto B523b27;
case 0x523b30:goto L523b30;
case 0x523b34:c.instructions+=1;goto B523b34;
case 0x523b40:goto L523b40;
case 0x523b41:c.instructions+=2;goto B523b41;
case 0x523b43:c.instructions+=1;goto B523b43;
case 0x523b48:goto L523b48;
case 0x523b4a:c.instructions+=3;goto B523b4a;
case 0x523b51:c.instructions+=2;goto B523b51;
case 0x523b52:c.instructions+=1;goto B523b52;
case 0x523b57:goto L523b57;
case 0x523b59:c.instructions+=3;goto B523b59;
case 0x523b60:c.instructions+=2;goto B523b60;
case 0x523b61:c.instructions+=1;goto B523b61;
case 0x523b66:goto L523b66;
case 0x523b69:c.instructions+=2;goto B523b69;
case 0x523b6b:c.instructions+=1;goto B523b6b;
case 0x523b6d:goto L523b6d;
case 0x523b6f:c.instructions+=5;goto B523b6f;
case 0x523b76:c.instructions+=4;goto B523b76;
case 0x523b78:c.instructions+=3;goto B523b78;
case 0x523b7a:c.instructions+=2;goto B523b7a;
case 0x523b7b:c.instructions+=1;goto B523b7b;
case 0x523b80:goto L523b80;
case 0x523b83:c.instructions+=1;goto B523b83;
case 0x523b88:goto L523b88;
case 0x523b8a:c.instructions+=1;goto B523b8a;
case 0x523b8c:goto L523b8c;
case 0x523b90:goto L523b90;
case 0x523b95:goto L523b95;
case 0x523b9a:goto L523b9a;
case 0x523b9c:c.instructions+=1;goto B523b9c;
case 0x523b9e:goto L523b9e;
case 0x523ba1:c.instructions+=2;goto B523ba1;
case 0x523ba3:c.instructions+=1;goto B523ba3;
case 0x523ba5:goto L523ba5;
case 0x523ba8:c.instructions+=2;goto B523ba8;
case 0x523baa:c.instructions+=1;goto B523baa;
case 0x523bac:goto L523bac;
case 0x523bad:c.instructions+=2;goto B523bad;
case 0x523bb2:c.instructions+=1;goto B523bb2;
case 0x523bb7:goto L523bb7;
case 0x523bbe:goto L523bbe;
case 0x523bbf:c.instructions+=1;goto B523bbf;
case 0x523bc0:goto L523bc0;
case 0x523bc4:c.instructions+=8;goto B523bc4;
case 0x523bc6:c.instructions+=7;goto B523bc6;
case 0x523bc7:c.instructions+=6;goto B523bc7;
case 0x523bcb:c.instructions+=5;goto B523bcb;
case 0x523bcc:c.instructions+=4;goto B523bcc;
case 0x523bd0:c.instructions+=3;goto B523bd0;
case 0x523bd1:c.instructions+=2;goto B523bd1;
case 0x523bd3:c.instructions+=1;goto B523bd3;
case 0x523bd5:goto L523bd5;
case 0x523bd7:c.instructions+=1;goto B523bd7;
case 0x523bd9:goto L523bd9;
case 0x523bdb:c.instructions+=1;goto B523bdb;
case 0x523bdd:goto L523bdd;
case 0x523be1:c.instructions+=2;goto B523be1;
case 0x523be3:c.instructions+=1;goto B523be3;
case 0x523be5:goto L523be5;
case 0x523bec:c.instructions+=4;goto B523bec;
case 0x523bed:c.instructions+=3;goto B523bed;
case 0x523bee:c.instructions+=2;goto B523bee;
case 0x523bef:c.instructions+=1;goto B523bef;
case 0x523bf2:goto L523bf2;
case 0x523bf6:c.instructions+=9;goto B523bf6;
case 0x523bf9:c.instructions+=8;goto B523bf9;
case 0x523bfc:c.instructions+=7;goto B523bfc;
case 0x523bfd:c.instructions+=6;goto B523bfd;
case 0x523bff:c.instructions+=5;goto B523bff;
case 0x523c01:c.instructions+=4;goto B523c01;
case 0x523c04:c.instructions+=3;goto B523c04;
case 0x523c07:c.instructions+=2;goto B523c07;
case 0x523c0a:c.instructions+=1;goto B523c0a;
case 0x523c0c:goto L523c0c;
case 0x523c11:goto L523c11;
case 0x523c13:c.instructions+=1;goto B523c13;
case 0x523c15:goto L523c15;
case 0x523c16:c.instructions+=4;goto B523c16;
case 0x523c17:c.instructions+=3;goto B523c17;
case 0x523c1c:c.instructions+=2;goto B523c1c;
case 0x523c1d:c.instructions+=1;goto B523c1d;
case 0x523c22:goto L523c22;
case 0x523c25:goto L523c25;
case 0x523c27:c.instructions+=1;goto B523c27;
case 0x523c29:goto L523c29;
case 0x523c2a:c.instructions+=4;goto B523c2a;
case 0x523c2b:c.instructions+=3;goto B523c2b;
case 0x523c30:c.instructions+=2;goto B523c30;
case 0x523c31:c.instructions+=1;goto B523c31;
case 0x523c36:goto L523c36;
case 0x523c39:goto L523c39;
case 0x523c3b:c.instructions+=1;goto B523c3b;
case 0x523c3d:goto L523c3d;
case 0x523c3e:c.instructions+=4;goto B523c3e;
case 0x523c3f:c.instructions+=3;goto B523c3f;
case 0x523c44:c.instructions+=2;goto B523c44;
case 0x523c45:c.instructions+=1;goto B523c45;
case 0x523c4a:goto L523c4a;
case 0x523c4d:goto L523c4d;
case 0x523c51:c.instructions+=2;goto B523c51;
case 0x523c53:c.instructions+=1;goto B523c53;
case 0x523c55:goto L523c55;
case 0x523c56:c.instructions+=4;goto B523c56;
case 0x523c57:c.instructions+=3;goto B523c57;
case 0x523c5c:c.instructions+=2;goto B523c5c;
case 0x523c5d:c.instructions+=1;goto B523c5d;
case 0x523c62:goto L523c62;
case 0x523c65:goto L523c65;
case 0x523c66:c.instructions+=4;goto B523c66;
case 0x523c67:c.instructions+=3;goto B523c67;
case 0x523c68:c.instructions+=2;goto B523c68;
case 0x523c69:c.instructions+=1;goto B523c69;
case 0x523c70:goto L523c70;
case 0x523c76:c.instructions+=4;goto B523c76;
case 0x523c77:c.instructions+=3;goto B523c77;
case 0x523c79:c.instructions+=2;goto B523c79;
case 0x523c7b:c.instructions+=1;goto B523c7b;
case 0x523c7d:goto L523c7d;
case 0x523c83:c.instructions+=3;goto B523c83;
case 0x523c89:c.instructions+=2;goto B523c89;
case 0x523c8c:c.instructions+=1;goto B523c8c;
case 0x523c90:goto L523c90;
case 0x523c92:c.instructions+=1;goto B523c92;
case 0x523c94:goto L523c94;
case 0x523c95:c.instructions+=3;goto B523c95;
case 0x523c98:c.instructions+=2;goto B523c98;
case 0x523c9a:c.instructions+=1;goto B523c9a;
case 0x523c9c:goto L523c9c;
case 0x523c9f:goto L523c9f;
case 0x523ca0:c.instructions+=1;goto B523ca0;
case 0x523ca5:goto L523ca5;
case 0x523ca8:c.instructions+=2;goto B523ca8;
case 0x523ca9:c.instructions+=1;goto B523ca9;
case 0x523cb0:goto L523cb0;
case 0x523cb1:c.instructions+=3;goto B523cb1;
case 0x523cb5:c.instructions+=2;goto B523cb5;
case 0x523cb6:c.instructions+=1;goto B523cb6;
case 0x523cbb:goto L523cbb;
case 0x523cbf:c.instructions+=4;goto B523cbf;
case 0x523cc2:c.instructions+=3;goto B523cc2;
case 0x523cc5:c.instructions+=2;goto B523cc5;
case 0x523cc6:c.instructions+=1;goto B523cc6;
case 0x523cc8:goto L523cc8;
case 0x523ccb:c.instructions+=1;goto B523ccb;
case 0x523ccd:goto L523ccd;
case 0x523cd0:c.instructions+=2;goto B523cd0;
case 0x523cd4:c.instructions+=1;goto B523cd4;
case 0x523cd9:goto L523cd9;
case 0x523cdc:c.instructions+=1;goto B523cdc;
case 0x523cde:goto L523cde;
case 0x523ce1:c.instructions+=1;goto B523ce1;
case 0x523ce3:goto L523ce3;
case 0x523ce6:c.instructions+=2;goto B523ce6;
case 0x523cea:c.instructions+=1;goto B523cea;
case 0x523cef:goto L523cef;
case 0x523cf1:c.instructions+=2;goto B523cf1;
case 0x523cf5:c.instructions+=1;goto B523cf5;
case 0x523d00:goto L523d00;
case 0x523d01:c.instructions+=7;goto B523d01;
case 0x523d02:c.instructions+=6;goto B523d02;
case 0x523d03:c.instructions+=5;goto B523d03;
case 0x523d04:c.instructions+=4;goto B523d04;
case 0x523d06:c.instructions+=3;goto B523d06;
case 0x523d09:c.instructions+=2;goto B523d09;
case 0x523d0b:c.instructions+=1;goto B523d0b;
case 0x523d0d:goto L523d0d;
case 0x523d12:c.instructions+=1;goto B523d12;
case 0x523d17:goto L523d17;
case 0x523d1c:c.instructions+=3;goto B523d1c;
case 0x523d22:c.instructions+=2;goto B523d22;
case 0x523d23:c.instructions+=1;goto B523d23;
case 0x523d28:goto L523d28;
case 0x523d2a:c.instructions+=2;goto B523d2a;
case 0x523d2d:c.instructions+=1;goto B523d2d;
case 0x523d2f:goto L523d2f;
case 0x523d35:c.instructions+=2;goto B523d35;
case 0x523d3b:c.instructions+=1;goto B523d3b;
case 0x523d3e:goto L523d3e;
case 0x523d41:c.instructions+=3;goto B523d41;
case 0x523d44:c.instructions+=2;goto B523d44;
case 0x523d45:c.instructions+=1;goto B523d45;
case 0x523d4a:goto L523d4a;
case 0x523d50:c.instructions+=4;goto B523d50;
case 0x523d52:c.instructions+=3;goto B523d52;
case 0x523d54:c.instructions+=2;goto B523d54;
case 0x523d56:c.instructions+=1;goto B523d56;
case 0x523d5c:goto L523d5c;
case 0x523d5f:c.instructions+=1;goto B523d5f;
case 0x523d62:goto L523d62;
case 0x523d64:c.instructions+=1;goto B523d64;
case 0x523d66:goto L523d66;
case 0x523d67:c.instructions+=3;goto B523d67;
case 0x523d6a:c.instructions+=2;goto B523d6a;
case 0x523d6c:c.instructions+=1;goto B523d6c;
case 0x523d6e:goto L523d6e;
case 0x523d73:goto L523d73;
case 0x523d76:c.instructions+=3;goto B523d76;
case 0x523d7a:c.instructions+=2;goto B523d7a;
case 0x523d7c:c.instructions+=1;goto B523d7c;
case 0x523d82:goto L523d82;
case 0x523d85:c.instructions+=25;goto B523d85;
case 0x523d88:c.instructions+=24;goto B523d88;
case 0x523d8b:c.instructions+=23;goto B523d8b;
case 0x523d8c:c.instructions+=22;goto B523d8c;
case 0x523d8f:c.instructions+=21;goto B523d8f;
case 0x523d90:c.instructions+=20;goto B523d90;
case 0x523d93:c.instructions+=19;goto B523d93;
case 0x523d94:c.instructions+=18;goto B523d94;
case 0x523d97:c.instructions+=17;goto B523d97;
case 0x523d98:c.instructions+=16;goto B523d98;
case 0x523d9b:c.instructions+=15;goto B523d9b;
case 0x523d9c:c.instructions+=14;goto B523d9c;
case 0x523d9f:c.instructions+=13;goto B523d9f;
case 0x523da0:c.instructions+=12;goto B523da0;
case 0x523da3:c.instructions+=11;goto B523da3;
case 0x523da4:c.instructions+=10;goto B523da4;
case 0x523da7:c.instructions+=9;goto B523da7;
case 0x523da8:c.instructions+=8;goto B523da8;
case 0x523dab:c.instructions+=7;goto B523dab;
case 0x523dac:c.instructions+=6;goto B523dac;
case 0x523daf:c.instructions+=5;goto B523daf;
case 0x523db0:c.instructions+=4;goto B523db0;
case 0x523db1:c.instructions+=3;goto B523db1;
case 0x523db2:c.instructions+=2;goto B523db2;
case 0x523db4:c.instructions+=1;goto B523db4;
case 0x523db9:goto L523db9;
case 0x523dbc:c.instructions+=4;goto B523dbc;
case 0x523dbf:c.instructions+=3;goto B523dbf;
case 0x523dc1:c.instructions+=2;goto B523dc1;
case 0x523dc6:c.instructions+=1;goto B523dc6;
case 0x523dc8:goto L523dc8;
case 0x523dca:c.instructions+=1;goto B523dca;
case 0x523dcc:goto L523dcc;
case 0x523dce:goto L523dce;
case 0x523dd0:c.instructions+=1;goto B523dd0;
case 0x523dd5:goto L523dd5;
case 0x523dd8:c.instructions+=4;goto B523dd8;
case 0x523ddb:c.instructions+=3;goto B523ddb;
case 0x523ddd:c.instructions+=2;goto B523ddd;
case 0x523de2:c.instructions+=1;goto B523de2;
case 0x523de4:goto L523de4;
case 0x523de6:c.instructions+=1;goto B523de6;
case 0x523de8:goto L523de8;
case 0x523dea:goto L523dea;
case 0x523dec:c.instructions+=1;goto B523dec;
case 0x523df1:goto L523df1;
case 0x523df4:c.instructions+=4;goto B523df4;
case 0x523df7:c.instructions+=3;goto B523df7;
case 0x523df9:c.instructions+=2;goto B523df9;
case 0x523dfe:c.instructions+=1;goto B523dfe;
case 0x523e00:goto L523e00;
case 0x523e02:c.instructions+=1;goto B523e02;
case 0x523e04:goto L523e04;
case 0x523e06:goto L523e06;
case 0x523e08:c.instructions+=1;goto B523e08;
case 0x523e0d:goto L523e0d;
case 0x523e10:c.instructions+=4;goto B523e10;
case 0x523e13:c.instructions+=3;goto B523e13;
case 0x523e15:c.instructions+=2;goto B523e15;
case 0x523e1a:c.instructions+=1;goto B523e1a;
case 0x523e1c:goto L523e1c;
case 0x523e1e:c.instructions+=1;goto B523e1e;
case 0x523e20:goto L523e20;
case 0x523e22:goto L523e22;
case 0x523e24:c.instructions+=1;goto B523e24;
case 0x523e29:goto L523e29;
case 0x523e2f:c.instructions+=1;goto B523e2f;
case 0x523e32:goto L523e32;
case 0x523e35:c.instructions+=2;goto B523e35;
case 0x523e36:c.instructions+=1;goto B523e36;
case 0x523e3b:goto L523e3b;
case 0x523e3d:c.instructions+=2;goto B523e3d;
case 0x523e3f:c.instructions+=1;goto B523e3f;
case 0x523e45:goto L523e45;
case 0x523e48:c.instructions+=3;goto B523e48;
case 0x523e49:c.instructions+=2;goto B523e49;
case 0x523e4b:c.instructions+=1;goto B523e4b;
case 0x523e50:goto L523e50;
case 0x523e53:c.instructions+=1;goto B523e53;
case 0x523e58:goto L523e58;
case 0x523e5e:c.instructions+=2;goto B523e5e;
case 0x523e60:c.instructions+=1;goto B523e60;
case 0x523e62:goto L523e62;
case 0x523e68:c.instructions+=2;goto B523e68;
case 0x523e69:c.instructions+=1;goto B523e69;
case 0x523e6e:goto L523e6e;
case 0x523e6f:c.instructions+=1;goto B523e6f;
case 0x523e74:goto L523e74;
case 0x523e77:c.instructions+=1;goto B523e77;
case 0x523e7e:goto L523e7e;
case 0x523e81:c.instructions+=5;goto B523e81;
case 0x523e82:c.instructions+=4;goto B523e82;
case 0x523e88:c.instructions+=3;goto B523e88;
case 0x523e8d:c.instructions+=2;goto B523e8d;
case 0x523e8e:c.instructions+=1;goto B523e8e;
case 0x523e93:goto L523e93;
case 0x523e95:c.instructions+=7;goto B523e95;
case 0x523e97:c.instructions+=6;goto B523e97;
case 0x523e99:c.instructions+=5;goto B523e99;
case 0x523e9b:c.instructions+=4;goto B523e9b;
case 0x523e9d:c.instructions+=3;goto B523e9d;
case 0x523e9f:c.instructions+=2;goto B523e9f;
case 0x523ea0:c.instructions+=1;goto B523ea0;
case 0x523ea5:goto L523ea5;
case 0x523ea8:c.instructions+=1;goto B523ea8;
case 0x523ead:goto L523ead;
case 0x523eaf:c.instructions+=1;goto B523eaf;
case 0x523eb1:goto L523eb1;
case 0x523eb6:goto L523eb6;
case 0x523ebb:goto L523ebb;
case 0x523ebd:c.instructions+=1;goto B523ebd;
case 0x523ebf:goto L523ebf;
case 0x523ec6:c.instructions+=1;goto B523ec6;
case 0x523ecb:goto L523ecb;
case 0x523ece:c.instructions+=9;goto B523ece;
case 0x523ed1:c.instructions+=8;goto B523ed1;
case 0x523ed4:c.instructions+=7;goto B523ed4;
case 0x523ed5:c.instructions+=6;goto B523ed5;
case 0x523ed7:c.instructions+=5;goto B523ed7;
case 0x523ed8:c.instructions+=4;goto B523ed8;
case 0x523ed9:c.instructions+=3;goto B523ed9;
case 0x523eda:c.instructions+=2;goto B523eda;
case 0x523edf:c.instructions+=1;goto B523edf;
case 0x523ee4:goto L523ee4;
case 0x523ee5:c.instructions+=4;goto B523ee5;
case 0x523ee6:c.instructions+=3;goto B523ee6;
case 0x523ee7:c.instructions+=2;goto B523ee7;
case 0x523ee8:c.instructions+=1;goto B523ee8;
case 0x523ef0:goto L523ef0;
case 0x523ef1:c.instructions+=4;goto B523ef1;
case 0x523ef3:c.instructions+=3;goto B523ef3;
case 0x523ef6:c.instructions+=2;goto B523ef6;
case 0x523ef8:c.instructions+=1;goto B523ef8;
case 0x523efa:goto L523efa;
case 0x523eff:c.instructions+=1;goto B523eff;
case 0x523f04:goto L523f04;
case 0x523f06:c.instructions+=1;goto B523f06;
case 0x523f08:goto L523f08;
case 0x523f09:c.instructions+=5;goto B523f09;
case 0x523f0f:c.instructions+=4;goto B523f0f;
case 0x523f11:c.instructions+=3;goto B523f11;
case 0x523f16:c.instructions+=2;goto B523f16;
case 0x523f1d:c.instructions+=1;goto B523f1d;
case 0x523f22:goto L523f22;
case 0x523f23:c.instructions+=2;goto B523f23;
case 0x523f24:c.instructions+=1;goto B523f24;
case 0x523f29:goto L523f29;
case 0x523f2a:c.instructions+=2;goto B523f2a;
case 0x523f2c:c.instructions+=1;goto B523f2c;
case 0x523f31:goto L523f31;
case 0x523f34:c.instructions+=8;goto B523f34;
case 0x523f39:c.instructions+=7;goto B523f39;
case 0x523f3e:c.instructions+=6;goto B523f3e;
case 0x523f40:c.instructions+=5;goto B523f40;
case 0x523f42:c.instructions+=4;goto B523f42;
case 0x523f47:c.instructions+=3;goto B523f47;
case 0x523f48:c.instructions+=2;goto B523f48;
case 0x523f49:c.instructions+=1;goto B523f49;
case 0x523f4e:goto L523f4e;
case 0x523f51:c.instructions+=2;goto B523f51;
case 0x523f55:c.instructions+=1;goto B523f55;
case 0x523f56:goto L523f56;
case 0x523f57:c.instructions+=1;goto B523f57;
case 0x523f60:goto L523f60;
case 0x523f62:c.instructions+=21;goto B523f62;
case 0x523f67:c.instructions+=20;goto B523f67;
case 0x523f6d:c.instructions+=19;goto B523f6d;
case 0x523f6e:c.instructions+=18;goto B523f6e;
case 0x523f75:c.instructions+=17;goto B523f75;
case 0x523f78:c.instructions+=16;goto B523f78;
case 0x523f7d:c.instructions+=15;goto B523f7d;
case 0x523f7e:c.instructions+=14;goto B523f7e;
case 0x523f80:c.instructions+=13;goto B523f80;
case 0x523f82:c.instructions+=12;goto B523f82;
case 0x523f87:c.instructions+=11;goto B523f87;
case 0x523f8c:c.instructions+=10;goto B523f8c;
case 0x523f8d:c.instructions+=9;goto B523f8d;
case 0x523f91:c.instructions+=8;goto B523f91;
case 0x523f96:c.instructions+=7;goto B523f96;
case 0x523f97:c.instructions+=6;goto B523f97;
case 0x523f99:c.instructions+=5;goto B523f99;
case 0x523f9b:c.instructions+=4;goto B523f9b;
case 0x523f9d:c.instructions+=3;goto B523f9d;
case 0x523fa1:c.instructions+=2;goto B523fa1;
case 0x523fa5:c.instructions+=1;goto B523fa5;
case 0x523fab:goto L523fab;
case 0x523fac:c.instructions+=3;goto B523fac;
case 0x523fae:c.instructions+=2;goto B523fae;
case 0x523fb2:c.instructions+=1;goto B523fb2;
case 0x523fb4:goto L523fb4;
case 0x523fb8:goto L523fb8;
case 0x523fba:c.instructions+=1;goto B523fba;
case 0x523fbc:goto L523fbc;
case 0x523fc2:c.instructions+=1;goto B523fc2;
case 0x523fc4:goto L523fc4;
case 0x523fc9:c.instructions+=2;goto B523fc9;
case 0x523fcb:c.instructions+=1;goto B523fcb;
case 0x523fcd:goto L523fcd;
case 0x523fcf:goto L523fcf;
case 0x523fd5:c.instructions+=3;goto B523fd5;
case 0x523fda:c.instructions+=2;goto B523fda;
case 0x523fdc:c.instructions+=1;goto B523fdc;
case 0x523fde:goto L523fde;
case 0x523fe3:c.instructions+=1;goto B523fe3;
case 0x523fe5:goto L523fe5;
case 0x523fea:c.instructions+=1;goto B523fea;
case 0x523fef:goto L523fef;
case 0x523ff3:c.instructions+=2;goto B523ff3;
case 0x523ff5:c.instructions+=1;goto B523ff5;
case 0x523ff7:goto L523ff7;
case 0x523ff9:c.instructions+=1;goto B523ff9;
case 0x523fff:goto L523fff;
default:missing_instruction(c.pc);}
B523000:L523000:{c.instructions+=4;NFSU2_TR(0x523000);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523006:{NFSU2_TR(0x523006);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523008:{NFSU2_TR(0x523008);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52300b:{NFSU2_TR(0x52300b);
if(r1(R+514)){{goto L52302d;}}
}
B52300d:L52300d:{c.instructions+=4;NFSU2_TR(0x52300d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52300f:{NFSU2_TR(0x52300f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523011:{NFSU2_TR(0x523011);
__builtin_memmove((R+4),(R+28),4);
}
B523013:{NFSU2_TR(0x523013);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523016ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B523016:L523016:{c.instructions+=4;NFSU2_TR(0x523016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523017:{NFSU2_TR(0x523017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523018:{NFSU2_TR(0x523018);
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
B52301b:{NFSU2_TR(0x52301b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52301c:L52301c:{c.instructions+=4;NFSU2_TR(0x52301c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52301e:{NFSU2_TR(0x52301e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B523020:{NFSU2_TR(0x523020);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B523023:{NFSU2_TR(0x523023);
if(r1(R+518)){TAIL_STATIC(0x522ffcu,522);}
}
B523025:L523025:{c.instructions+=3;NFSU2_TR(0x523025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B523027:{NFSU2_TR(0x523027);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523029:{NFSU2_TR(0x523029);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x522fc0u,522);}
}
B52302b:L52302b:{c.instructions+=1;NFSU2_TR(0x52302b);
TAIL_STATIC(0x522ffcu,522);
}
B52302d:L52302d:{c.instructions+=5;NFSU2_TR(0x52302d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523031:{NFSU2_TR(0x523031);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523037:{NFSU2_TR(0x523037);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523039:{NFSU2_TR(0x523039);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52303c:{NFSU2_TR(0x52303c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523047;}}
}
B52303e:L52303e:{c.instructions+=4;NFSU2_TR(0x52303e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B523040:{NFSU2_TR(0x523040);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523042:{NFSU2_TR(0x523042);
__builtin_memmove((R+4),(R+28),4);
}
B523044:{NFSU2_TR(0x523044);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523047ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B523047:L523047:{c.instructions+=4;NFSU2_TR(0x523047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523048:{NFSU2_TR(0x523048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523049:{NFSU2_TR(0x523049);
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
B52304c:{NFSU2_TR(0x52304c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523050:L523050:{c.instructions+=47;NFSU2_TR(0x523050);
__builtin_memmove((R+0),(R+4),4);
}
B523052:{NFSU2_TR(0x523052);
__builtin_memmove((R+8),gp(0x799388),4);
}
B523058:{NFSU2_TR(0x523058);
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
B52305a:{NFSU2_TR(0x52305a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52305d:{NFSU2_TR(0x52305d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523064:{NFSU2_TR(0x523064);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52306b:{NFSU2_TR(0x52306b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52306e:{NFSU2_TR(0x52306e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523071:{NFSU2_TR(0x523071);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523074:{NFSU2_TR(0x523074);
__builtin_memmove((R+8),gp(0x79938c),4);
}
B52307a:{NFSU2_TR(0x52307a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52307d:{NFSU2_TR(0x52307d);
__builtin_memmove((R+8),gp(0x7993a8),4);
}
B523083:{NFSU2_TR(0x523083);
u8 U[4];
w4(U+0,u32(0x79b7f4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B523089:{NFSU2_TR(0x523089);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52308c:{NFSU2_TR(0x52308c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52308f:{NFSU2_TR(0x52308f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523092:{NFSU2_TR(0x523092);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523095:{NFSU2_TR(0x523095);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523098:{NFSU2_TR(0x523098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52309b:{NFSU2_TR(0x52309b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52309e:{NFSU2_TR(0x52309e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230a1:{NFSU2_TR(0x5230a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230a4:{NFSU2_TR(0x5230a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230a7:{NFSU2_TR(0x5230a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230aa:{NFSU2_TR(0x5230aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230ad:{NFSU2_TR(0x5230ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230b0:{NFSU2_TR(0x5230b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5230b3:{NFSU2_TR(0x5230b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230b6:{NFSU2_TR(0x5230b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5230bd:{NFSU2_TR(0x5230bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5230c4:{NFSU2_TR(0x5230c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0x79ae54ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5230cb:{NFSU2_TR(0x5230cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230ce:{NFSU2_TR(0x5230ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230d1:{NFSU2_TR(0x5230d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230d4:{NFSU2_TR(0x5230d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230d7:{NFSU2_TR(0x5230d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230dd:{NFSU2_TR(0x5230dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230e3:{NFSU2_TR(0x5230e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230e9:{NFSU2_TR(0x5230e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230ef:{NFSU2_TR(0x5230ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230f5:{NFSU2_TR(0x5230f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5230fb:{NFSU2_TR(0x5230fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523101:{NFSU2_TR(0x523101);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523107:{NFSU2_TR(0x523107);
__builtin_memmove((R+4),gp(0x7993a4),4);
}
B52310d:{NFSU2_TR(0x52310d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523110:{NFSU2_TR(0x523110);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523113:{NFSU2_TR(0x523113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523120:L523120:{c.instructions+=3;NFSU2_TR(0x523120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523121:{NFSU2_TR(0x523121);
__builtin_memmove((R+24),(R+4),4);
}
B523123:{NFSU2_TR(0x523123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523128ull));
{goto L523140;}
}
B523128:L523128:{c.instructions+=2;NFSU2_TR(0x523128);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B52312d:{NFSU2_TR(0x52312d);
if(r1(R+518)){{goto L523138;}}
}
B52312f:L52312f:{c.instructions+=2;NFSU2_TR(0x52312f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523130:{NFSU2_TR(0x523130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523135ull));
TAIL_STATIC(0x575630u,575);
}
B523135:L523135:{c.instructions+=1;NFSU2_TR(0x523135);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B523138:L523138:{c.instructions+=3;NFSU2_TR(0x523138);
__builtin_memmove((R+0),(R+24),4);
}
B52313a:{NFSU2_TR(0x52313a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52313b:{NFSU2_TR(0x52313b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523140:L523140:{c.instructions+=3;NFSU2_TR(0x523140);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523147:{NFSU2_TR(0x523147);
u8 U[4];
w4(U+0,u32(0x79ac38ull));
s4(u32(r4(R+4)),r4(U+0));
}
B52314d:{NFSU2_TR(0x52314d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523150:L523150:{c.instructions+=5;NFSU2_TR(0x523150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523151:{NFSU2_TR(0x523151);
__builtin_memmove((R+24),(R+4),4);
}
B523153:{NFSU2_TR(0x523153);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B523159:{NFSU2_TR(0x523159);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52315b:{NFSU2_TR(0x52315b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523160ull));
TAIL_STATIC(0x59b080u,59b);
}
B523160:L523160:{c.instructions+=2;NFSU2_TR(0x523160);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523162:{NFSU2_TR(0x523162);
if(r1(R+518)){{goto L523177;}}
}
B523164:L523164:{c.instructions+=5;NFSU2_TR(0x523164);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B52316a:{NFSU2_TR(0x52316a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52316c:{NFSU2_TR(0x52316c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52316e:{NFSU2_TR(0x52316e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523170:{NFSU2_TR(0x523170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523175ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B523175:L523175:{c.instructions+=1;NFSU2_TR(0x523175);
{goto L52317d;}
}
B523177:L523177:{c.instructions+=1;NFSU2_TR(0x523177);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52317d:L52317d:{c.instructions+=6;NFSU2_TR(0x52317d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52317e:{NFSU2_TR(0x52317e);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B523181:{NFSU2_TR(0x523181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B523184:{NFSU2_TR(0x523184);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B52318a:{NFSU2_TR(0x52318a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52318b:{NFSU2_TR(0x52318b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523190ull));
TAIL_STATIC(0x59b080u,59b);
}
B523190:L523190:{c.instructions+=2;NFSU2_TR(0x523190);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523192:{NFSU2_TR(0x523192);
if(r1(R+518)){{goto L5231a6;}}
}
B523194:L523194:{c.instructions+=5;NFSU2_TR(0x523194);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B52319a:{NFSU2_TR(0x52319a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52319c:{NFSU2_TR(0x52319c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52319e:{NFSU2_TR(0x52319e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52319f:{NFSU2_TR(0x52319f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5231a4ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B5231a4:L5231a4:{c.instructions+=1;NFSU2_TR(0x5231a4);
{goto L5231ac;}
}
B5231a6:L5231a6:{c.instructions+=1;NFSU2_TR(0x5231a6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5231ac:L5231ac:{c.instructions+=4;NFSU2_TR(0x5231ac);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5231af:{NFSU2_TR(0x5231af);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5231b5:{NFSU2_TR(0x5231b5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5231b7:{NFSU2_TR(0x5231b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5231bcull));
TAIL_STATIC(0x59b080u,59b);
}
B5231bc:L5231bc:{c.instructions+=3;NFSU2_TR(0x5231bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5231be:{NFSU2_TR(0x5231be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5231bf:{NFSU2_TR(0x5231bf);
if(r1(R+518)){{goto L5231d4;}}
}
B5231c1:L5231c1:{c.instructions+=5;NFSU2_TR(0x5231c1);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5231c7:{NFSU2_TR(0x5231c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5231c9:{NFSU2_TR(0x5231c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5231cb:{NFSU2_TR(0x5231cb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5231cd:{NFSU2_TR(0x5231cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5231d2ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B5231d2:L5231d2:{c.instructions+=1;NFSU2_TR(0x5231d2);
{goto L5231da;}
}
B5231d4:L5231d4:{c.instructions+=1;NFSU2_TR(0x5231d4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5231da:L5231da:{c.instructions+=9;NFSU2_TR(0x5231da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5231dd:{NFSU2_TR(0x5231dd);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5231e0:{NFSU2_TR(0x5231e0);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5231e3:{NFSU2_TR(0x5231e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5231e6:{NFSU2_TR(0x5231e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5231e9:{NFSU2_TR(0x5231e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5231ea:{NFSU2_TR(0x5231ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5231ec:{NFSU2_TR(0x5231ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5231ef:{NFSU2_TR(0x5231ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5231f7;}}
}
B5231f1:L5231f1:{c.instructions+=2;NFSU2_TR(0x5231f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5231f4:{NFSU2_TR(0x5231f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5231f7:L5231f7:{c.instructions+=5;NFSU2_TR(0x5231f7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5231fa:{NFSU2_TR(0x5231fa);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5231fd:{NFSU2_TR(0x5231fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5231ff:{NFSU2_TR(0x5231ff);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B523202:{NFSU2_TR(0x523202);
if(r1(R+514)){{goto L52320a;}}
}
B523204:L523204:{c.instructions+=2;NFSU2_TR(0x523204);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523207:{NFSU2_TR(0x523207);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52320a:L52320a:{c.instructions+=2;NFSU2_TR(0x52320a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52320c:{NFSU2_TR(0x52320c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B523210:L523210:{c.instructions+=10;NFSU2_TR(0x523210);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523211:{NFSU2_TR(0x523211);
__builtin_memmove((R+20),(R+16),4);
}
B523213:{NFSU2_TR(0x523213);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523214:{NFSU2_TR(0x523214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523215:{NFSU2_TR(0x523215);
__builtin_memmove((R+24),(R+4),4);
}
B523217:{NFSU2_TR(0x523217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52321a:{NFSU2_TR(0x52321a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52321d:{NFSU2_TR(0x52321d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523220:{NFSU2_TR(0x523220);
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
B523223:{NFSU2_TR(0x523223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523235;}}
}
B523225:L523225:{c.instructions+=4;NFSU2_TR(0x523225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523228:{NFSU2_TR(0x523228);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52322b:{NFSU2_TR(0x52322b);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523230:{NFSU2_TR(0x523230);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523233ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B523233:L523233:{c.instructions+=1;NFSU2_TR(0x523233);
{goto L523248;}
}
B523235:L523235:{c.instructions+=2;NFSU2_TR(0x523235);
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
B523238:{NFSU2_TR(0x523238);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523248;}}
}
B52323a:L52323a:{c.instructions+=4;NFSU2_TR(0x52323a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52323d:{NFSU2_TR(0x52323d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B523240:{NFSU2_TR(0x523240);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523245:{NFSU2_TR(0x523245);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523248ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B523248:L523248:{c.instructions+=5;NFSU2_TR(0x523248);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52324b:{NFSU2_TR(0x52324b);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52324e:{NFSU2_TR(0x52324e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523250:{NFSU2_TR(0x523250);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B523253:{NFSU2_TR(0x523253);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L523300;}}
}
B523259:L523259:{c.instructions+=5;NFSU2_TR(0x523259);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52325c:{NFSU2_TR(0x52325c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52325f:{NFSU2_TR(0x52325f);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B523265:{NFSU2_TR(0x523265);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523267:{NFSU2_TR(0x523267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52326cull));
TAIL_STATIC(0x59b080u,59b);
}
B52326c:L52326c:{c.instructions+=2;NFSU2_TR(0x52326c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52326e:{NFSU2_TR(0x52326e);
if(r1(R+518)){{goto L523285;}}
}
B523270:L523270:{c.instructions+=7;NFSU2_TR(0x523270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523273:{NFSU2_TR(0x523273);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B523279:{NFSU2_TR(0x523279);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52327b:{NFSU2_TR(0x52327b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52327d:{NFSU2_TR(0x52327d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52327f:{NFSU2_TR(0x52327f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523280:{NFSU2_TR(0x523280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523285ull));
TAIL_STATIC(0x5b4670u,5b4);
}
B523285:L523285:{c.instructions+=3;NFSU2_TR(0x523285);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B52328b:{NFSU2_TR(0x52328b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52328d:{NFSU2_TR(0x52328d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523292ull));
TAIL_STATIC(0x59b080u,59b);
}
B523292:L523292:{c.instructions+=2;NFSU2_TR(0x523292);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523294:{NFSU2_TR(0x523294);
if(r1(R+518)){{goto L5232a9;}}
}
B523296:L523296:{c.instructions+=5;NFSU2_TR(0x523296);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B52329c:{NFSU2_TR(0x52329c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52329e:{NFSU2_TR(0x52329e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5232a0:{NFSU2_TR(0x5232a0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5232a2:{NFSU2_TR(0x5232a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5232a7ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B5232a7:L5232a7:{c.instructions+=1;NFSU2_TR(0x5232a7);
{goto L5232af;}
}
B5232a9:L5232a9:{c.instructions+=1;NFSU2_TR(0x5232a9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5232af:L5232af:{c.instructions+=4;NFSU2_TR(0x5232af);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5232b2:{NFSU2_TR(0x5232b2);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5232b8:{NFSU2_TR(0x5232b8);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5232ba:{NFSU2_TR(0x5232ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5232bfull));
TAIL_STATIC(0x59b080u,59b);
}
B5232bf:L5232bf:{c.instructions+=2;NFSU2_TR(0x5232bf);
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
B5232c1:{NFSU2_TR(0x5232c1);
if(r1(R+518)){{goto L5232e7;}}
}
B5232c3:L5232c3:{c.instructions+=5;NFSU2_TR(0x5232c3);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5232c9:{NFSU2_TR(0x5232c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5232cb:{NFSU2_TR(0x5232cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5232cd:{NFSU2_TR(0x5232cd);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5232cf:{NFSU2_TR(0x5232cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5232d4ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B5232d4:L5232d4:{c.instructions+=4;NFSU2_TR(0x5232d4);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5232d7:{NFSU2_TR(0x5232d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5232d9:{NFSU2_TR(0x5232d9);
__builtin_memmove((R+4),(R+24),4);
}
B5232db:{NFSU2_TR(0x5232db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5232deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5232de:L5232de:{c.instructions+=5;NFSU2_TR(0x5232de);
w1(R+0,u8(0x1ull));
}
B5232e0:{NFSU2_TR(0x5232e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5232e1:{NFSU2_TR(0x5232e1);
__builtin_memmove((R+16),(R+20),4);
}
B5232e3:{NFSU2_TR(0x5232e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5232e4:{NFSU2_TR(0x5232e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5232e7:L5232e7:{c.instructions+=5;NFSU2_TR(0x5232e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5232ed:{NFSU2_TR(0x5232ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5232ef:{NFSU2_TR(0x5232ef);
__builtin_memmove((R+4),(R+24),4);
}
B5232f1:{NFSU2_TR(0x5232f1);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5232f4:{NFSU2_TR(0x5232f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5232f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5232f7:L5232f7:{c.instructions+=5;NFSU2_TR(0x5232f7);
w1(R+0,u8(0x1ull));
}
B5232f9:{NFSU2_TR(0x5232f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5232fa:{NFSU2_TR(0x5232fa);
__builtin_memmove((R+16),(R+20),4);
}
B5232fc:{NFSU2_TR(0x5232fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5232fd:{NFSU2_TR(0x5232fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523300:L523300:{c.instructions+=5;NFSU2_TR(0x523300);
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
B523302:{NFSU2_TR(0x523302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523303:{NFSU2_TR(0x523303);
__builtin_memmove((R+16),(R+20),4);
}
B523305:{NFSU2_TR(0x523305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B523306:{NFSU2_TR(0x523306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523310:L523310:{c.instructions+=3;NFSU2_TR(0x523310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523311:{NFSU2_TR(0x523311);
__builtin_memmove((R+24),(R+4),4);
}
B523313:{NFSU2_TR(0x523313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523318ull));
TAIL_STATIC(0x510350u,510);
}
B523318:L523318:{c.instructions+=2;NFSU2_TR(0x523318);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B52331d:{NFSU2_TR(0x52331d);
if(r1(R+518)){{goto L523328;}}
}
B52331f:L52331f:{c.instructions+=2;NFSU2_TR(0x52331f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523320:{NFSU2_TR(0x523320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523325ull));
TAIL_STATIC(0x575630u,575);
}
B523325:L523325:{c.instructions+=1;NFSU2_TR(0x523325);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B523328:L523328:{c.instructions+=3;NFSU2_TR(0x523328);
__builtin_memmove((R+0),(R+24),4);
}
B52332a:{NFSU2_TR(0x52332a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52332b:{NFSU2_TR(0x52332b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523330:L523330:{c.instructions+=6;NFSU2_TR(0x523330);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523331:{NFSU2_TR(0x523331);
__builtin_memmove((R+20),(R+16),4);
}
B523333:{NFSU2_TR(0x523333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B523336:{NFSU2_TR(0x523336);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523337:{NFSU2_TR(0x523337);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52333a:{NFSU2_TR(0x52333a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52333full));
TAIL_STATIC(0x5f73d0u,5f7);
}
B52333f:L52333f:{c.instructions+=7;NFSU2_TR(0x52333f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B523342:{NFSU2_TR(0x523342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523349:{NFSU2_TR(0x523349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523350:{NFSU2_TR(0x523350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523357:{NFSU2_TR(0x523357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52335e:{NFSU2_TR(0x52335e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523365:{NFSU2_TR(0x523365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52336aull));
TAIL_STATIC(0x5ede10u,5ed);
}
B52336a:L52336a:{c.instructions+=3;NFSU2_TR(0x52336a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52336c:{NFSU2_TR(0x52336c);
w4(R+4,u32(0x9ull));
}
B523371:{NFSU2_TR(0x523371);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523374:L523374:{c.instructions+=1;NFSU2_TR(0x523374);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L523376;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523374u);}goto L523374;}
}
B523376:L523376:{c.instructions+=3;NFSU2_TR(0x523376);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523379:{NFSU2_TR(0x523379);
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
B52337b:{NFSU2_TR(0x52337b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52345c;}}
}
B523381:L523381:{c.instructions+=7;NFSU2_TR(0x523381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523382:{NFSU2_TR(0x523382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523383:{NFSU2_TR(0x523383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B523386:{NFSU2_TR(0x523386);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52338c:{NFSU2_TR(0x52338c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52338d:{NFSU2_TR(0x52338d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B523390:{NFSU2_TR(0x523390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523395ull));
TAIL_STATIC(0x4fe200u,4fe);
}
B523395:L523395:{c.instructions+=6;NFSU2_TR(0x523395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B523397:{NFSU2_TR(0x523397);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52339a:{NFSU2_TR(0x52339a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52339d:{NFSU2_TR(0x52339d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52339f:{NFSU2_TR(0x52339f);
__builtin_memmove((R+4),(R+28),4);
}
B5233a1:{NFSU2_TR(0x5233a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5233a6ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5233a6:L5233a6:{c.instructions+=3;NFSU2_TR(0x5233a6);
__builtin_memmove((R+4),(R+28),4);
}
B5233a8:{NFSU2_TR(0x5233a8);
__builtin_memmove((R+24),(R+0),4);
}
B5233aa:{NFSU2_TR(0x5233aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5233afull));
TAIL_STATIC(0x5b5930u,5b5);
}
B5233af:L5233af:{c.instructions+=5;NFSU2_TR(0x5233af);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5233b2:{NFSU2_TR(0x5233b2);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5233b5:{NFSU2_TR(0x5233b5);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5233bb:{NFSU2_TR(0x5233bb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5233c1:{NFSU2_TR(0x5233c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5233c6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5233c6:L5233c6:{c.instructions+=5;NFSU2_TR(0x5233c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5233c9:{NFSU2_TR(0x5233c9);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5233cc:{NFSU2_TR(0x5233cc);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5233d2:{NFSU2_TR(0x5233d2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5233d8:{NFSU2_TR(0x5233d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5233ddull));
TAIL_STATIC(0x75bed4u,75b);
}
B5233dd:L5233dd:{c.instructions+=6;NFSU2_TR(0x5233dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5233df:{NFSU2_TR(0x5233df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5233e2:{NFSU2_TR(0x5233e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5233e3:{NFSU2_TR(0x5233e3);
__builtin_memmove((R+4),(R+28),4);
}
B5233e5:{NFSU2_TR(0x5233e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5233e8:{NFSU2_TR(0x5233e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5233edull));
TAIL_STATIC(0x5b56e0u,5b5);
}
B5233ed:L5233ed:{c.instructions+=6;NFSU2_TR(0x5233ed);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5233f0:{NFSU2_TR(0x5233f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5233f2:{NFSU2_TR(0x5233f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5233f5:{NFSU2_TR(0x5233f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5233f6:{NFSU2_TR(0x5233f6);
__builtin_memmove((R+4),(R+28),4);
}
B5233f8:{NFSU2_TR(0x5233f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5233fdull));
TAIL_STATIC(0x5b5810u,5b5);
}
B5233fd:L5233fd:{c.instructions+=23;NFSU2_TR(0x5233fd);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B523400:{NFSU2_TR(0x523400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523406:{NFSU2_TR(0x523406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523409:{NFSU2_TR(0x523409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52340f:{NFSU2_TR(0x52340f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523412:{NFSU2_TR(0x523412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523418:{NFSU2_TR(0x523418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52341b:{NFSU2_TR(0x52341b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523421:{NFSU2_TR(0x523421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523424:{NFSU2_TR(0x523424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52342a:{NFSU2_TR(0x52342a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52342d:{NFSU2_TR(0x52342d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523433:{NFSU2_TR(0x523433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523436:{NFSU2_TR(0x523436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52343c:{NFSU2_TR(0x52343c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52343f:{NFSU2_TR(0x52343f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523445:{NFSU2_TR(0x523445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523448:{NFSU2_TR(0x523448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52344e:{NFSU2_TR(0x52344e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523451:{NFSU2_TR(0x523451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523457:{NFSU2_TR(0x523457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523458:{NFSU2_TR(0x523458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52345b:{NFSU2_TR(0x52345b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52345c:L52345c:{c.instructions+=4;NFSU2_TR(0x52345c);
__builtin_memmove((R+0),gp(0x83a658),4);
}
B523461:{NFSU2_TR(0x523461);
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
B523463:{NFSU2_TR(0x523463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523464:{NFSU2_TR(0x523464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523471;}}
}
B523466:L523466:{c.instructions+=4;NFSU2_TR(0x523466);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B523469:{NFSU2_TR(0x523469);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52346a:{NFSU2_TR(0x52346a);
w4(R+4,u32(0x83a734ull));
}
B52346f:{NFSU2_TR(0x52346f);
{goto L52348e;}
}
B523471:L523471:{c.instructions+=5;NFSU2_TR(0x523471);
{u32 ea_=u32(u32(8627896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523477:{NFSU2_TR(0x523477);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52347d:{NFSU2_TR(0x52347d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52347f:{NFSU2_TR(0x52347f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B523482:{NFSU2_TR(0x523482);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523493;}}
}
B523484:L523484:{c.instructions+=2;NFSU2_TR(0x523484);
u8 U[4];
w4(U+0,u32(0x83a65cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523489:{NFSU2_TR(0x523489);
w4(R+4,u32(0x83a6c8ull));
}
B52348e:L52348e:{c.instructions+=1;NFSU2_TR(0x52348e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523493ull));
TAIL_STATIC(0x50fa30u,50f);
}
B523493:L523493:{c.instructions+=4;NFSU2_TR(0x523493);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B523496:{NFSU2_TR(0x523496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523497:{NFSU2_TR(0x523497);
w4(R+4,u32(0x83a65cull));
}
B52349c:{NFSU2_TR(0x52349c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5234a1ull));
TAIL_STATIC(0x50fa30u,50f);
}
B5234a1:L5234a1:{c.instructions+=3;NFSU2_TR(0x5234a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5234a4:{NFSU2_TR(0x5234a4);
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
B5234a6:{NFSU2_TR(0x5234a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5234ae;}}
}
B5234a8:L5234a8:{c.instructions+=1;NFSU2_TR(0x5234a8);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x83a658),u32(0x1ull)));
s4(0x83a658,u32(u32(m4(0x83a658))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x83a658))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x83a658))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x83a658))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5234ae:L5234ae:{c.instructions+=3;NFSU2_TR(0x5234ae);
__builtin_memmove((R+16),(R+20),4);
}
B5234b0:{NFSU2_TR(0x5234b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5234b1:{NFSU2_TR(0x5234b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5234c0:L5234c0:{c.instructions+=8;NFSU2_TR(0x5234c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5234c1:{NFSU2_TR(0x5234c1);
__builtin_memmove((R+20),(R+16),4);
}
B5234c3:{NFSU2_TR(0x5234c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5234c6:{NFSU2_TR(0x5234c6);
{u32 ea_=u32(u32(8364688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5234cc:{NFSU2_TR(0x5234cc);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5234d2:{NFSU2_TR(0x5234d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5234d4:{NFSU2_TR(0x5234d4);
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
B5234d7:{NFSU2_TR(0x5234d7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5234e5;}}
}
B5234d9:L5234d9:{c.instructions+=4;NFSU2_TR(0x5234d9);
{u32 ea_=u32(u32(8364688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5234df:{NFSU2_TR(0x5234df);
__builtin_memmove((R+16),(R+20),4);
}
B5234e1:{NFSU2_TR(0x5234e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5234e2:{NFSU2_TR(0x5234e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5234e5:L5234e5:{c.instructions+=7;NFSU2_TR(0x5234e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5234e6:{NFSU2_TR(0x5234e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5234e9:{NFSU2_TR(0x5234e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5234ea:{NFSU2_TR(0x5234ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5234eb:{NFSU2_TR(0x5234eb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5234ed:{NFSU2_TR(0x5234ed);
__builtin_memmove((R+4),(R+12),4);
}
B5234ef:{NFSU2_TR(0x5234ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5234f4ull));
TAIL_STATIC(0x6102f0u,610);
}
B5234f4:L5234f4:{c.instructions+=2;NFSU2_TR(0x5234f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5234f6:{NFSU2_TR(0x5234f6);
if(r1(R+518)){{goto L523502;}}
}
B5234f8:L5234f8:{c.instructions+=3;NFSU2_TR(0x5234f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5234fc:{NFSU2_TR(0x5234fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B523500:{NFSU2_TR(0x523500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523506;}}
}
B523502:L523502:{c.instructions+=1;NFSU2_TR(0x523502);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B523506:L523506:{c.instructions+=3;NFSU2_TR(0x523506);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B523508:{NFSU2_TR(0x523508);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52350a:{NFSU2_TR(0x52350a);
__builtin_memmove((R+12),(R+12),4);
}
B523510:L523510:{c.instructions+=2;NFSU2_TR(0x523510);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523513:{NFSU2_TR(0x523513);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52351a;}}
}
B523515:L523515:{c.instructions+=2;NFSU2_TR(0x523515);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523518:{NFSU2_TR(0x523518);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L523552;}}
}
B52351a:L52351a:{c.instructions+=3;NFSU2_TR(0x52351a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52351d:{NFSU2_TR(0x52351d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52351f:{NFSU2_TR(0x52351f);
if(r1(R+518)){{goto L523530;}}
}
B523521:L523521:{c.instructions+=2;NFSU2_TR(0x523521);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523524:{NFSU2_TR(0x523524);
if(r1(R+518)){{goto L523552;}}
}
B523526:L523526:{c.instructions+=2;NFSU2_TR(0x523526);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523529:{NFSU2_TR(0x523529);
if(r1(R+518)){{goto L523552;}}
}
B52352b:L52352b:{c.instructions+=2;NFSU2_TR(0x52352b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52352e:{NFSU2_TR(0x52352e);
if(r1(R+518)){{goto L523552;}}
}
B523530:L523530:{c.instructions+=2;NFSU2_TR(0x523530);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B523533:{NFSU2_TR(0x523533);
if(r1(R+518)){{goto L523552;}}
}
B523535:L523535:{c.instructions+=3;NFSU2_TR(0x523535);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523536:{NFSU2_TR(0x523536);
__builtin_memmove((R+4),(R+12),4);
}
B523538:{NFSU2_TR(0x523538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52353dull));
TAIL_STATIC(0x6102f0u,610);
}
B52353d:L52353d:{c.instructions+=2;NFSU2_TR(0x52353d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52353f:{NFSU2_TR(0x52353f);
if(r1(R+518)){{goto L523552;}}
}
B523541:L523541:{c.instructions+=6;NFSU2_TR(0x523541);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523542:{NFSU2_TR(0x523542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B523544:{NFSU2_TR(0x523544);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523545:{NFSU2_TR(0x523545);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523546:{NFSU2_TR(0x523546);
w4(R+4,u32(0x85ad40ull));
}
B52354b:{NFSU2_TR(0x52354b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523550ull));
TAIL_STATIC(0x5142e0u,514);
}
B523550:L523550:{c.instructions+=1;NFSU2_TR(0x523550);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B523552:L523552:{c.instructions+=3;NFSU2_TR(0x523552);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B523553:{NFSU2_TR(0x523553);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B523559:{NFSU2_TR(0x523559);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523510u);}goto L523510;}}
}
B52355b:L52355b:{c.instructions+=4;NFSU2_TR(0x52355b);
__builtin_memmove((R+0),gp(0x7fa28c),4);
}
B523560:{NFSU2_TR(0x523560);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523566:{NFSU2_TR(0x523566);
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
B523568:{NFSU2_TR(0x523568);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5235e6;}}
}
B52356a:L52356a:{c.instructions+=2;NFSU2_TR(0x52356a);
w4(R+0,u32(0x1ull));
}
B52356f:{NFSU2_TR(0x52356f);
}
B523570:L523570:{c.instructions+=2;NFSU2_TR(0x523570);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa234ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+28)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B523577:{NFSU2_TR(0x523577);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L523582;}}
}
B523579:L523579:{c.instructions+=2;NFSU2_TR(0x523579);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa23cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+28)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
}
B523580:{NFSU2_TR(0x523580);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L523591;}}
}
B523582:L523582:{c.instructions+=3;NFSU2_TR(0x523582);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B523583:{NFSU2_TR(0x523583);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B523586:{NFSU2_TR(0x523586);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523570u);}goto L523570;}}
}
B523588:L523588:{c.instructions+=6;NFSU2_TR(0x523588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523589:{NFSU2_TR(0x523589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52358a:{NFSU2_TR(0x52358a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52358b:{NFSU2_TR(0x52358b);
__builtin_memmove((R+16),(R+20),4);
}
B52358d:{NFSU2_TR(0x52358d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52358e:{NFSU2_TR(0x52358e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523591:L523591:{c.instructions+=11;NFSU2_TR(0x523591);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa230ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B523598:{NFSU2_TR(0x523598);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52359a:{NFSU2_TR(0x52359a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa238ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5235a1:{NFSU2_TR(0x5235a1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5235a7:{NFSU2_TR(0x5235a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa234ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5235ae:{NFSU2_TR(0x5235ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa23cull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5235b5:{NFSU2_TR(0x5235b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5235b7:{NFSU2_TR(0x5235b7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5235b9:{NFSU2_TR(0x5235b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5235bc:{NFSU2_TR(0x5235bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5235bf:{NFSU2_TR(0x5235bf);
if(r1(R+518)){{goto L5235d0;}}
}
B5235c1:L5235c1:{c.instructions+=6;NFSU2_TR(0x5235c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5235c3:{NFSU2_TR(0x5235c3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B5235c5:{NFSU2_TR(0x5235c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5235c8:{NFSU2_TR(0x5235c8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5235cb:{NFSU2_TR(0x5235cb);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5235ce:{NFSU2_TR(0x5235ce);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5235d0:L5235d0:{c.instructions+=11;NFSU2_TR(0x5235d0);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5235d2:{NFSU2_TR(0x5235d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5235d5:{NFSU2_TR(0x5235d5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5235d8:{NFSU2_TR(0x5235d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5235d9:{NFSU2_TR(0x5235d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5235da:{NFSU2_TR(0x5235da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5235db:{NFSU2_TR(0x5235db);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5235dd:{NFSU2_TR(0x5235dd);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B5235e0:{NFSU2_TR(0x5235e0);
__builtin_memmove((R+16),(R+20),4);
}
B5235e2:{NFSU2_TR(0x5235e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5235e3:{NFSU2_TR(0x5235e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5235e6:L5235e6:{c.instructions+=8;NFSU2_TR(0x5235e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5235e7:{NFSU2_TR(0x5235e7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5235e9:{NFSU2_TR(0x5235e9);
{u32 ea_=u32(u32(8364680u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5235ef:{NFSU2_TR(0x5235ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5235f0:{NFSU2_TR(0x5235f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5235f1:{NFSU2_TR(0x5235f1);
__builtin_memmove((R+16),(R+20),4);
}
B5235f3:{NFSU2_TR(0x5235f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5235f4:{NFSU2_TR(0x5235f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523600:L523600:{c.instructions+=8;NFSU2_TR(0x523600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523601:{NFSU2_TR(0x523601);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523602:{NFSU2_TR(0x523602);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B523606:{NFSU2_TR(0x523606);
__builtin_memmove((R+24),(R+4),4);
}
B523608:{NFSU2_TR(0x523608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52360b:{NFSU2_TR(0x52360b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52360c:{NFSU2_TR(0x52360c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52360d:{NFSU2_TR(0x52360d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523612ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523612:L523612:{c.instructions+=4;NFSU2_TR(0x523612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523615:{NFSU2_TR(0x523615);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523616:{NFSU2_TR(0x523616);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523617:{NFSU2_TR(0x523617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52361cull));
TAIL_STATIC(0x51d7f0u,51d);
}
B52361c:L52361c:{c.instructions+=4;NFSU2_TR(0x52361c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52361f:{NFSU2_TR(0x52361f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523620:{NFSU2_TR(0x523620);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523621:{NFSU2_TR(0x523621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523626ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523626:L523626:{c.instructions+=4;NFSU2_TR(0x523626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52362c:{NFSU2_TR(0x52362c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52362d:{NFSU2_TR(0x52362d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52362e:{NFSU2_TR(0x52362e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523633ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523633:L523633:{c.instructions+=4;NFSU2_TR(0x523633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523639:{NFSU2_TR(0x523639);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52363a:{NFSU2_TR(0x52363a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52363b:{NFSU2_TR(0x52363b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523640ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523640:L523640:{c.instructions+=4;NFSU2_TR(0x523640);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B523643:{NFSU2_TR(0x523643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523644:{NFSU2_TR(0x523644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523645:{NFSU2_TR(0x523645);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523650:L523650:{c.instructions+=14;NFSU2_TR(0x523650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B523653:{NFSU2_TR(0x523653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523654:{NFSU2_TR(0x523654);
__builtin_memmove((R+12),(R+4),4);
}
B523656:{NFSU2_TR(0x523656);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523659:{NFSU2_TR(0x523659);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52365c:{NFSU2_TR(0x52365c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523660:{NFSU2_TR(0x523660);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523664:{NFSU2_TR(0x523664);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52366c:{NFSU2_TR(0x52366c);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523672:{NFSU2_TR(0x523672);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B523677:{NFSU2_TR(0x523677);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52367b:{NFSU2_TR(0x52367b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52367d:{NFSU2_TR(0x52367d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523680:{NFSU2_TR(0x523680);
if(r1(R+518)){{goto L523b23;}}
}
B523686:L523686:{c.instructions+=5;NFSU2_TR(0x523686);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52368a:{NFSU2_TR(0x52368a);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523690:{NFSU2_TR(0x523690);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523692:{NFSU2_TR(0x523692);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523695:{NFSU2_TR(0x523695);
if(r1(R+518)){{goto L523b23;}}
}
B52369b:L52369b:{c.instructions+=5;NFSU2_TR(0x52369b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52369f:{NFSU2_TR(0x52369f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5236a3:{NFSU2_TR(0x5236a3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5236a7:{NFSU2_TR(0x5236a7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5236ab:{NFSU2_TR(0x5236ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5236b0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5236b0:L5236b0:{c.instructions+=6;NFSU2_TR(0x5236b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5236b4:{NFSU2_TR(0x5236b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5236b8:{NFSU2_TR(0x5236b8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5236bc:{NFSU2_TR(0x5236bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5236be:{NFSU2_TR(0x5236be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5236c1:{NFSU2_TR(0x5236c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5236c9;}}
}
B5236c3:L5236c3:{c.instructions+=1;NFSU2_TR(0x5236c3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5236c9:L5236c9:{c.instructions+=7;NFSU2_TR(0x5236c9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5236cd:{NFSU2_TR(0x5236cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5236ce:{NFSU2_TR(0x5236ce);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5236d0:{NFSU2_TR(0x5236d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5236d3:{NFSU2_TR(0x5236d3);
w4(R+24,u32(0xaull));
}
B5236d8:{NFSU2_TR(0x5236d8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5236dc:{NFSU2_TR(0x5236dc);
__builtin_memmove((R+16),(R+16),4);
}
B5236e0:L5236e0:{c.instructions+=3;NFSU2_TR(0x5236e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5236e3:{NFSU2_TR(0x5236e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5236e4:{NFSU2_TR(0x5236e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5236e9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5236e9:L5236e9:{c.instructions+=3;NFSU2_TR(0x5236e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5236eb:{NFSU2_TR(0x5236eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5236ec:{NFSU2_TR(0x5236ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5236f1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5236f1:L5236f1:{c.instructions+=3;NFSU2_TR(0x5236f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5236f4:{NFSU2_TR(0x5236f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5236f5:{NFSU2_TR(0x5236f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5236faull));
TAIL_STATIC(0x50ca00u,50c);
}
B5236fa:L5236fa:{c.instructions+=4;NFSU2_TR(0x5236fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5236fd:{NFSU2_TR(0x5236fd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B523700:{NFSU2_TR(0x523700);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B523701:{NFSU2_TR(0x523701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5236e0u);}goto L5236e0;}}
}
B523703:L523703:{c.instructions+=3;NFSU2_TR(0x523703);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523704:{NFSU2_TR(0x523704);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523705:{NFSU2_TR(0x523705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52370aull));
TAIL_STATIC(0x75bed4u,75b);
}
B52370a:L52370a:{c.instructions+=2;NFSU2_TR(0x52370a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52370c:{NFSU2_TR(0x52370c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L523800;}}
}
B523712:L523712:{c.instructions+=4;NFSU2_TR(0x523712);
__builtin_memmove((R+20),(R+0),4);
}
B523714:{NFSU2_TR(0x523714);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523717:{NFSU2_TR(0x523717);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52371b:{NFSU2_TR(0x52371b);
{goto L523720;}
}
B523720:L523720:{c.instructions+=3;NFSU2_TR(0x523720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B523722:{NFSU2_TR(0x523722);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523724:{NFSU2_TR(0x523724);
if(r1(R+518)){{goto L523766;}}
}
B523726:L523726:{c.instructions+=3;NFSU2_TR(0x523726);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B52372c:{NFSU2_TR(0x52372c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52372e:{NFSU2_TR(0x52372e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523736;}}
}
B523730:L523730:{c.instructions+=2;NFSU2_TR(0x523730);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B523734:{NFSU2_TR(0x523734);
if(r1(R+518)){{goto L523745;}}
}
B523736:L523736:{c.instructions+=4;NFSU2_TR(0x523736);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523739:{NFSU2_TR(0x523739);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B52373c:{NFSU2_TR(0x52373c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B523742:{NFSU2_TR(0x523742);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523745:L523745:{c.instructions+=2;NFSU2_TR(0x523745);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B523749:{NFSU2_TR(0x523749);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523766;}}
}
B52374b:L52374b:{c.instructions+=4;NFSU2_TR(0x52374b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52374e:{NFSU2_TR(0x52374e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523751:{NFSU2_TR(0x523751);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523753:{NFSU2_TR(0x523753);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L523766;}}
}
B523755:L523755:{c.instructions+=1;NFSU2_TR(0x523755);
__builtin_memmove((R+24),(R+0),4);
}
B523757:L523757:{c.instructions+=2;NFSU2_TR(0x523757);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523758:{NFSU2_TR(0x523758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52375dull));
TAIL_STATIC(0x50ca50u,50c);
}
B52375d:L52375d:{c.instructions+=4;NFSU2_TR(0x52375d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523760:{NFSU2_TR(0x523760);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B523763:{NFSU2_TR(0x523763);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B523764:{NFSU2_TR(0x523764);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523757u);}goto L523757;}}
}
B523766:L523766:{c.instructions+=5;NFSU2_TR(0x523766);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52376c:{NFSU2_TR(0x52376c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52376e:{NFSU2_TR(0x52376e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52376f:{NFSU2_TR(0x52376f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523770:{NFSU2_TR(0x523770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523775ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523775:L523775:{c.instructions+=4;NFSU2_TR(0x523775);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523778:{NFSU2_TR(0x523778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52377b:{NFSU2_TR(0x52377b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52377d:{NFSU2_TR(0x52377d);
if(r1(R+518)){{goto L5237b7;}}
}
B52377f:L52377f:{c.instructions+=3;NFSU2_TR(0x52377f);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B523785:{NFSU2_TR(0x523785);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523787:{NFSU2_TR(0x523787);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52378f;}}
}
B523789:L523789:{c.instructions+=2;NFSU2_TR(0x523789);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B52378d:{NFSU2_TR(0x52378d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523796;}}
}
B52378f:L52378f:{c.instructions+=1;NFSU2_TR(0x52378f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B523796:L523796:{c.instructions+=2;NFSU2_TR(0x523796);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52379a:{NFSU2_TR(0x52379a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5237b7;}}
}
B52379c:L52379c:{c.instructions+=4;NFSU2_TR(0x52379c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52379f:{NFSU2_TR(0x52379f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5237a2:{NFSU2_TR(0x5237a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5237a4:{NFSU2_TR(0x5237a4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5237b7;}}
}
B5237a6:L5237a6:{c.instructions+=1;NFSU2_TR(0x5237a6);
__builtin_memmove((R+24),(R+0),4);
}
B5237a8:L5237a8:{c.instructions+=2;NFSU2_TR(0x5237a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5237a9:{NFSU2_TR(0x5237a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5237aeull));
TAIL_STATIC(0x50ca00u,50c);
}
B5237ae:L5237ae:{c.instructions+=4;NFSU2_TR(0x5237ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5237b1:{NFSU2_TR(0x5237b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5237b4:{NFSU2_TR(0x5237b4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5237b5:{NFSU2_TR(0x5237b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5237a8u);}goto L5237a8;}}
}
B5237b7:L5237b7:{c.instructions+=3;NFSU2_TR(0x5237b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5237ba:{NFSU2_TR(0x5237ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5237bc:{NFSU2_TR(0x5237bc);
if(r1(R+518)){{goto L5237f6;}}
}
B5237be:L5237be:{c.instructions+=3;NFSU2_TR(0x5237be);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B5237c4:{NFSU2_TR(0x5237c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5237c6:{NFSU2_TR(0x5237c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5237ce;}}
}
B5237c8:L5237c8:{c.instructions+=2;NFSU2_TR(0x5237c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5237cc:{NFSU2_TR(0x5237cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5237d5;}}
}
B5237ce:L5237ce:{c.instructions+=1;NFSU2_TR(0x5237ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5237d5:L5237d5:{c.instructions+=2;NFSU2_TR(0x5237d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5237d9:{NFSU2_TR(0x5237d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5237f6;}}
}
B5237db:L5237db:{c.instructions+=4;NFSU2_TR(0x5237db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5237de:{NFSU2_TR(0x5237de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5237e1:{NFSU2_TR(0x5237e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5237e3:{NFSU2_TR(0x5237e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5237f6;}}
}
B5237e5:L5237e5:{c.instructions+=1;NFSU2_TR(0x5237e5);
__builtin_memmove((R+24),(R+0),4);
}
B5237e7:L5237e7:{c.instructions+=2;NFSU2_TR(0x5237e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5237e8:{NFSU2_TR(0x5237e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5237edull));
TAIL_STATIC(0x50ca00u,50c);
}
B5237ed:L5237ed:{c.instructions+=4;NFSU2_TR(0x5237ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5237f0:{NFSU2_TR(0x5237f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5237f3:{NFSU2_TR(0x5237f3);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5237f4:{NFSU2_TR(0x5237f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5237e7u);}goto L5237e7;}}
}
B5237f6:L5237f6:{c.instructions+=3;NFSU2_TR(0x5237f6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B5237f9:{NFSU2_TR(0x5237f9);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5237fa:{NFSU2_TR(0x5237fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523720u);}goto L523720;}}
}
B523800:L523800:{c.instructions+=5;NFSU2_TR(0x523800);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523804:{NFSU2_TR(0x523804);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52380a:{NFSU2_TR(0x52380a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52380c:{NFSU2_TR(0x52380c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52380f:{NFSU2_TR(0x52380f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5238c6;}}
}
B523815:L523815:{c.instructions+=6;NFSU2_TR(0x523815);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B523819:{NFSU2_TR(0x523819);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52381c:{NFSU2_TR(0x52381c);
u8 U[16];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B523820:{NFSU2_TR(0x523820);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B523823:{NFSU2_TR(0x523823);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523824:{NFSU2_TR(0x523824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523829ull));
TAIL_STATIC(0x50ca50u,50c);
}
B523829:L523829:{c.instructions+=5;NFSU2_TR(0x523829);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52382f:{NFSU2_TR(0x52382f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523832:{NFSU2_TR(0x523832);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523833:{NFSU2_TR(0x523833);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523834:{NFSU2_TR(0x523834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523839ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523839:L523839:{c.instructions+=4;NFSU2_TR(0x523839);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52383c:{NFSU2_TR(0x52383c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52383f:{NFSU2_TR(0x52383f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523841:{NFSU2_TR(0x523841);
if(r1(R+518)){{goto L52387f;}}
}
B523843:L523843:{c.instructions+=3;NFSU2_TR(0x523843);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B523849:{NFSU2_TR(0x523849);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52384b:{NFSU2_TR(0x52384b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523853;}}
}
B52384d:L52384d:{c.instructions+=2;NFSU2_TR(0x52384d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B523851:{NFSU2_TR(0x523851);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52385a;}}
}
B523853:L523853:{c.instructions+=1;NFSU2_TR(0x523853);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52385a:L52385a:{c.instructions+=2;NFSU2_TR(0x52385a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52385e:{NFSU2_TR(0x52385e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52387f;}}
}
B523860:L523860:{c.instructions+=4;NFSU2_TR(0x523860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523863:{NFSU2_TR(0x523863);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523866:{NFSU2_TR(0x523866);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523868:{NFSU2_TR(0x523868);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52387f;}}
}
B52386a:L52386a:{c.instructions+=2;NFSU2_TR(0x52386a);
__builtin_memmove((R+24),(R+0),4);
}
B52386c:{NFSU2_TR(0x52386c);
__builtin_memmove((R+16),(R+16),4);
}
B523870:L523870:{c.instructions+=2;NFSU2_TR(0x523870);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523871:{NFSU2_TR(0x523871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523876ull));
TAIL_STATIC(0x50ca00u,50c);
}
B523876:L523876:{c.instructions+=4;NFSU2_TR(0x523876);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523879:{NFSU2_TR(0x523879);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52387c:{NFSU2_TR(0x52387c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B52387d:{NFSU2_TR(0x52387d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523870u);}goto L523870;}}
}
B52387f:L52387f:{c.instructions+=4;NFSU2_TR(0x52387f);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B523883:{NFSU2_TR(0x523883);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B523886:{NFSU2_TR(0x523886);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523888:{NFSU2_TR(0x523888);
if(r1(R+518)){{goto L5238c2;}}
}
B52388a:L52388a:{c.instructions+=3;NFSU2_TR(0x52388a);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B523890:{NFSU2_TR(0x523890);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523892:{NFSU2_TR(0x523892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52389a;}}
}
B523894:L523894:{c.instructions+=2;NFSU2_TR(0x523894);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B523898:{NFSU2_TR(0x523898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5238a1;}}
}
B52389a:L52389a:{c.instructions+=1;NFSU2_TR(0x52389a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5238a1:L5238a1:{c.instructions+=2;NFSU2_TR(0x5238a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5238a5:{NFSU2_TR(0x5238a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5238c2;}}
}
B5238a7:L5238a7:{c.instructions+=4;NFSU2_TR(0x5238a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5238aa:{NFSU2_TR(0x5238aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5238ad:{NFSU2_TR(0x5238ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5238af:{NFSU2_TR(0x5238af);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5238c2;}}
}
B5238b1:L5238b1:{c.instructions+=1;NFSU2_TR(0x5238b1);
__builtin_memmove((R+24),(R+0),4);
}
B5238b3:L5238b3:{c.instructions+=2;NFSU2_TR(0x5238b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5238b4:{NFSU2_TR(0x5238b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5238b9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5238b9:L5238b9:{c.instructions+=4;NFSU2_TR(0x5238b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5238bc:{NFSU2_TR(0x5238bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5238bf:{NFSU2_TR(0x5238bf);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5238c0:{NFSU2_TR(0x5238c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5238b3u);}goto L5238b3;}}
}
B5238c2:L5238c2:{c.instructions+=2;NFSU2_TR(0x5238c2);
w1(R+4,u8(0x1ull));
}
B5238c4:{NFSU2_TR(0x5238c4);
{goto L5238ca;}
}
B5238c6:L5238c6:{c.instructions+=1;NFSU2_TR(0x5238c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5238ca:L5238ca:{c.instructions+=8;NFSU2_TR(0x5238ca);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5238ce:{NFSU2_TR(0x5238ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5238d2:{NFSU2_TR(0x5238d2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5238d8:{NFSU2_TR(0x5238d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5238de:{NFSU2_TR(0x5238de);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5238e2:{NFSU2_TR(0x5238e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5238e4:{NFSU2_TR(0x5238e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5238e7:{NFSU2_TR(0x5238e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523ab5;}}
}
B5238ed:L5238ed:{c.instructions+=3;NFSU2_TR(0x5238ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5238f0:{NFSU2_TR(0x5238f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5238f2:{NFSU2_TR(0x5238f2);
if(r1(R+518)){{goto L523ab5;}}
}
B5238f8:L5238f8:{c.instructions+=5;NFSU2_TR(0x5238f8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5238fc:{NFSU2_TR(0x5238fc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523902:{NFSU2_TR(0x523902);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523904:{NFSU2_TR(0x523904);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523907:{NFSU2_TR(0x523907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523aaf;}}
}
B52390d:L52390d:{c.instructions+=3;NFSU2_TR(0x52390d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52390f:{NFSU2_TR(0x52390f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523913:{NFSU2_TR(0x523913);
if(r1(R+518)){{goto L52394c;}}
}
B523915:L523915:{c.instructions+=7;NFSU2_TR(0x523915);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B523919:{NFSU2_TR(0x523919);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52391b:{NFSU2_TR(0x52391b);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B52391f:{NFSU2_TR(0x52391f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B523922:{NFSU2_TR(0x523922);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B523925:{NFSU2_TR(0x523925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523926:{NFSU2_TR(0x523926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52392bull));
TAIL_STATIC(0x50ca50u,50c);
}
B52392b:L52392b:{c.instructions+=5;NFSU2_TR(0x52392b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523931:{NFSU2_TR(0x523931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B523933:{NFSU2_TR(0x523933);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523934:{NFSU2_TR(0x523934);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523935:{NFSU2_TR(0x523935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52393aull));
TAIL_STATIC(0x51d7f0u,51d);
}
B52393a:L52393a:{c.instructions+=5;NFSU2_TR(0x52393a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52393e:{NFSU2_TR(0x52393e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B523944:{NFSU2_TR(0x523944);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B523947:{NFSU2_TR(0x523947);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B523948:{NFSU2_TR(0x523948);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52394c:L52394c:{c.instructions+=4;NFSU2_TR(0x52394c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B523952:{NFSU2_TR(0x523952);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523954:{NFSU2_TR(0x523954);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B523957:{NFSU2_TR(0x523957);
if(r1(R+514)){{goto L523966;}}
}
B523959:L523959:{c.instructions+=3;NFSU2_TR(0x523959);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52395d:{NFSU2_TR(0x52395d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B523961:{NFSU2_TR(0x523961);
{goto L523aaf;}
}
B523966:L523966:{c.instructions+=2;NFSU2_TR(0x523966);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B523968:{NFSU2_TR(0x523968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52396dull));
TAIL_STATIC(0x75bed4u,75b);
}
B52396d:L52396d:{c.instructions+=6;NFSU2_TR(0x52396d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523971:{NFSU2_TR(0x523971);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B523975:{NFSU2_TR(0x523975);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B523977:{NFSU2_TR(0x523977);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523979:{NFSU2_TR(0x523979);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52397c:{NFSU2_TR(0x52397c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523984;}}
}
B52397e:L52397e:{c.instructions+=1;NFSU2_TR(0x52397e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B523984:L523984:{c.instructions+=4;NFSU2_TR(0x523984);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B523986:{NFSU2_TR(0x523986);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B523988:{NFSU2_TR(0x523988);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52398c:{NFSU2_TR(0x52398c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523991ull));
TAIL_STATIC(0x75bed4u,75b);
}
B523991:L523991:{c.instructions+=2;NFSU2_TR(0x523991);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523993:{NFSU2_TR(0x523993);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L523a59;}}
}
B523999:L523999:{c.instructions+=7;NFSU2_TR(0x523999);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52399d:{NFSU2_TR(0x52399d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5239a0:{NFSU2_TR(0x5239a0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5239a2:{NFSU2_TR(0x5239a2);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5239a6:{NFSU2_TR(0x5239a6);
__builtin_memmove((R+20),(R+0),4);
}
B5239a8:{NFSU2_TR(0x5239a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5239ac:{NFSU2_TR(0x5239ac);
__builtin_memmove((R+16),(R+16),4);
}
B5239b0:L5239b0:{c.instructions+=3;NFSU2_TR(0x5239b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5239b2:{NFSU2_TR(0x5239b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5239b3:{NFSU2_TR(0x5239b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5239b8ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5239b8:L5239b8:{c.instructions+=5;NFSU2_TR(0x5239b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5239be:{NFSU2_TR(0x5239be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5239c0:{NFSU2_TR(0x5239c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5239c1:{NFSU2_TR(0x5239c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5239c2:{NFSU2_TR(0x5239c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5239c7ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B5239c7:L5239c7:{c.instructions+=4;NFSU2_TR(0x5239c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5239ca:{NFSU2_TR(0x5239ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5239cd:{NFSU2_TR(0x5239cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5239cf:{NFSU2_TR(0x5239cf);
if(r1(R+518)){{goto L523a0f;}}
}
B5239d1:L5239d1:{c.instructions+=3;NFSU2_TR(0x5239d1);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B5239d7:{NFSU2_TR(0x5239d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5239d9:{NFSU2_TR(0x5239d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5239e1;}}
}
B5239db:L5239db:{c.instructions+=2;NFSU2_TR(0x5239db);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5239df:{NFSU2_TR(0x5239df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5239e8;}}
}
B5239e1:L5239e1:{c.instructions+=1;NFSU2_TR(0x5239e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5239e8:L5239e8:{c.instructions+=2;NFSU2_TR(0x5239e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5239ec:{NFSU2_TR(0x5239ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523a0f;}}
}
B5239ee:L5239ee:{c.instructions+=4;NFSU2_TR(0x5239ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5239f1:{NFSU2_TR(0x5239f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5239f4:{NFSU2_TR(0x5239f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5239f6:{NFSU2_TR(0x5239f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L523a0f;}}
}
B5239f8:L5239f8:{c.instructions+=2;NFSU2_TR(0x5239f8);
__builtin_memmove((R+24),(R+0),4);
}
B5239fa:{NFSU2_TR(0x5239fa);
__builtin_memmove((R+12),(R+12),4);
}
B523a00:L523a00:{c.instructions+=2;NFSU2_TR(0x523a00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523a01:{NFSU2_TR(0x523a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523a06ull));
TAIL_STATIC(0x50ca00u,50c);
}
B523a06:L523a06:{c.instructions+=4;NFSU2_TR(0x523a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523a09:{NFSU2_TR(0x523a09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B523a0c:{NFSU2_TR(0x523a0c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B523a0d:{NFSU2_TR(0x523a0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523a00u);}goto L523a00;}}
}
B523a0f:L523a0f:{c.instructions+=3;NFSU2_TR(0x523a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523a12:{NFSU2_TR(0x523a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523a14:{NFSU2_TR(0x523a14);
if(r1(R+518)){{goto L523a4f;}}
}
B523a16:L523a16:{c.instructions+=3;NFSU2_TR(0x523a16);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B523a1c:{NFSU2_TR(0x523a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523a1e:{NFSU2_TR(0x523a1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523a26;}}
}
B523a20:L523a20:{c.instructions+=2;NFSU2_TR(0x523a20);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B523a24:{NFSU2_TR(0x523a24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523a2d;}}
}
B523a26:L523a26:{c.instructions+=1;NFSU2_TR(0x523a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B523a2d:L523a2d:{c.instructions+=2;NFSU2_TR(0x523a2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B523a31:{NFSU2_TR(0x523a31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523a4f;}}
}
B523a33:L523a33:{c.instructions+=4;NFSU2_TR(0x523a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523a36:{NFSU2_TR(0x523a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523a39:{NFSU2_TR(0x523a39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523a3b:{NFSU2_TR(0x523a3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L523a4f;}}
}
B523a3d:L523a3d:{c.instructions+=2;NFSU2_TR(0x523a3d);
__builtin_memmove((R+24),(R+0),4);
}
B523a3f:{NFSU2_TR(0x523a3f);
}
B523a40:L523a40:{c.instructions+=2;NFSU2_TR(0x523a40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523a41:{NFSU2_TR(0x523a41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523a46ull));
TAIL_STATIC(0x50ca00u,50c);
}
B523a46:L523a46:{c.instructions+=4;NFSU2_TR(0x523a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523a49:{NFSU2_TR(0x523a49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B523a4c:{NFSU2_TR(0x523a4c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B523a4d:{NFSU2_TR(0x523a4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523a40u);}goto L523a40;}}
}
B523a4f:L523a4f:{c.instructions+=3;NFSU2_TR(0x523a4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B523a52:{NFSU2_TR(0x523a52);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B523a53:{NFSU2_TR(0x523a53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5239b0u);}goto L5239b0;}}
}
B523a59:L523a59:{c.instructions+=5;NFSU2_TR(0x523a59);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523a5d:{NFSU2_TR(0x523a5d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523a63:{NFSU2_TR(0x523a63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523a65:{NFSU2_TR(0x523a65);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523a68:{NFSU2_TR(0x523a68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523aa7;}}
}
B523a6a:L523a6a:{c.instructions+=6;NFSU2_TR(0x523a6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B523a6e:{NFSU2_TR(0x523a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B523a71:{NFSU2_TR(0x523a71);
u8 U[16];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B523a75:{NFSU2_TR(0x523a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B523a78:{NFSU2_TR(0x523a78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523a79:{NFSU2_TR(0x523a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523a7eull));
TAIL_STATIC(0x50ca50u,50c);
}
B523a7e:L523a7e:{c.instructions+=5;NFSU2_TR(0x523a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523a84:{NFSU2_TR(0x523a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523a87:{NFSU2_TR(0x523a87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523a88:{NFSU2_TR(0x523a88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523a89:{NFSU2_TR(0x523a89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523a8eull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523a8e:L523a8e:{c.instructions+=3;NFSU2_TR(0x523a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523a91:{NFSU2_TR(0x523a91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523a92:{NFSU2_TR(0x523a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523a97ull));
TAIL_STATIC(0x50ca00u,50c);
}
B523a97:L523a97:{c.instructions+=4;NFSU2_TR(0x523a97);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B523a9b:{NFSU2_TR(0x523a9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B523a9e:{NFSU2_TR(0x523a9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523a9f:{NFSU2_TR(0x523a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523aa4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B523aa4:L523aa4:{c.instructions+=1;NFSU2_TR(0x523aa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B523aa7:L523aa7:{c.instructions+=2;NFSU2_TR(0x523aa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523aab:{NFSU2_TR(0x523aab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523aaf:L523aaf:{c.instructions+=1;NFSU2_TR(0x523aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B523ab5:L523ab5:{c.instructions+=4;NFSU2_TR(0x523ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523ab8:{NFSU2_TR(0x523ab8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ab9:{NFSU2_TR(0x523ab9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523aba:{NFSU2_TR(0x523aba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523abfull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523abf:L523abf:{c.instructions+=4;NFSU2_TR(0x523abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523ac2:{NFSU2_TR(0x523ac2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ac3:{NFSU2_TR(0x523ac3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ac4:{NFSU2_TR(0x523ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523ac9ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523ac9:L523ac9:{c.instructions+=4;NFSU2_TR(0x523ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523acc:{NFSU2_TR(0x523acc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523acd:{NFSU2_TR(0x523acd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ace:{NFSU2_TR(0x523ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523ad3ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B523ad3:L523ad3:{c.instructions+=13;NFSU2_TR(0x523ad3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523ad7:{NFSU2_TR(0x523ad7);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523ada:{NFSU2_TR(0x523ada);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523ade:{NFSU2_TR(0x523ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523ae1:{NFSU2_TR(0x523ae1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523ae4:{NFSU2_TR(0x523ae4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B523ae7:{NFSU2_TR(0x523ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523aea:{NFSU2_TR(0x523aea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523aec:{NFSU2_TR(0x523aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523aed:{NFSU2_TR(0x523aed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523af0:{NFSU2_TR(0x523af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523af3:{NFSU2_TR(0x523af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B523af4:{NFSU2_TR(0x523af4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523afc;}}
}
B523af6:L523af6:{c.instructions+=2;NFSU2_TR(0x523af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523af9:{NFSU2_TR(0x523af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523afc:L523afc:{c.instructions+=5;NFSU2_TR(0x523afc);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B523aff:{NFSU2_TR(0x523aff);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B523b02:{NFSU2_TR(0x523b02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B523b04:{NFSU2_TR(0x523b04);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B523b07:{NFSU2_TR(0x523b07);
if(r1(R+514)){{goto L523b0f;}}
}
B523b09:L523b09:{c.instructions+=2;NFSU2_TR(0x523b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523b0c:{NFSU2_TR(0x523b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523b0f:L523b0f:{c.instructions+=5;NFSU2_TR(0x523b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523b13:{NFSU2_TR(0x523b13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B523b15:{NFSU2_TR(0x523b15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523b16:{NFSU2_TR(0x523b16);
__builtin_memmove((R+4),(R+24),4);
}
B523b18:{NFSU2_TR(0x523b18);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b1bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B523b1b:L523b1b:{c.instructions+=3;NFSU2_TR(0x523b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B523b1d:{NFSU2_TR(0x523b1d);
__builtin_memmove((R+4),(R+24),4);
}
B523b1f:{NFSU2_TR(0x523b1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B523b22:L523b22:{c.instructions+=1;NFSU2_TR(0x523b22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523b23:L523b23:{c.instructions+=3;NFSU2_TR(0x523b23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B523b24:{NFSU2_TR(0x523b24);
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
B523b27:{NFSU2_TR(0x523b27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523b30:L523b30:{c.instructions+=2;NFSU2_TR(0x523b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523b34:{NFSU2_TR(0x523b34);
TAIL_STATIC(0x5109d0u,510);
}
B523b40:L523b40:{c.instructions+=3;NFSU2_TR(0x523b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523b41:{NFSU2_TR(0x523b41);
__builtin_memmove((R+24),(R+4),4);
}
B523b43:{NFSU2_TR(0x523b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b48ull));
TAIL_STATIC(0x510a70u,510);
}
B523b48:L523b48:{c.instructions+=4;NFSU2_TR(0x523b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B523b4a:{NFSU2_TR(0x523b4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa294ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B523b51:{NFSU2_TR(0x523b51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523b52:{NFSU2_TR(0x523b52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b57ull));
TAIL_STATIC(0x490170u,490);
}
B523b57:L523b57:{c.instructions+=4;NFSU2_TR(0x523b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B523b59:{NFSU2_TR(0x523b59);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa294ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B523b60:{NFSU2_TR(0x523b60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523b61:{NFSU2_TR(0x523b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b66ull));
TAIL_STATIC(0x4901b0u,490);
}
B523b66:L523b66:{c.instructions+=3;NFSU2_TR(0x523b66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B523b69:{NFSU2_TR(0x523b69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523b6b:{NFSU2_TR(0x523b6b);
if(r1(R+518)){{goto L523b9e;}}
}
B523b6d:L523b6d:{c.instructions+=6;NFSU2_TR(0x523b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B523b6f:{NFSU2_TR(0x523b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa294ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B523b76:{NFSU2_TR(0x523b76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523b78:{NFSU2_TR(0x523b78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523b7a:{NFSU2_TR(0x523b7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523b7b:{NFSU2_TR(0x523b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b80ull));
TAIL_STATIC(0x494550u,494);
}
B523b80:L523b80:{c.instructions+=2;NFSU2_TR(0x523b80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B523b83:{NFSU2_TR(0x523b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b88ull));
TAIL_STATIC(0x571060u,571);
}
B523b88:L523b88:{c.instructions+=2;NFSU2_TR(0x523b88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523b8a:{NFSU2_TR(0x523b8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523b9e;}}
}
B523b8c:L523b8c:{c.instructions+=1;NFSU2_TR(0x523b8c);
__builtin_memmove((R+16),(R+16),4);
}
B523b90:L523b90:{c.instructions+=1;NFSU2_TR(0x523b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b95ull));
TAIL_STATIC(0x57ef60u,57e);
}
B523b95:L523b95:{c.instructions+=1;NFSU2_TR(0x523b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523b9aull));
TAIL_STATIC(0x571060u,571);
}
B523b9a:L523b9a:{c.instructions+=2;NFSU2_TR(0x523b9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523b9c:{NFSU2_TR(0x523b9c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523b90u);}goto L523b90;}}
}
B523b9e:L523b9e:{c.instructions+=3;NFSU2_TR(0x523b9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523ba1:{NFSU2_TR(0x523ba1);
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
B523ba3:{NFSU2_TR(0x523ba3);
if(r1(R+518)){{goto L523bbe;}}
}
B523ba5:L523ba5:{c.instructions+=3;NFSU2_TR(0x523ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523ba8:{NFSU2_TR(0x523ba8);
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
B523baa:{NFSU2_TR(0x523baa);
if(r1(R+518)){{goto L523bbe;}}
}
B523bac:L523bac:{c.instructions+=3;NFSU2_TR(0x523bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523bad:{NFSU2_TR(0x523bad);
w4(R+4,u32(0x88eb00ull));
}
B523bb2:{NFSU2_TR(0x523bb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523bb7ull));
TAIL_STATIC(0x5d6130u,5d6);
}
B523bb7:L523bb7:{c.instructions+=1;NFSU2_TR(0x523bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523bbe:L523bbe:{c.instructions+=2;NFSU2_TR(0x523bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523bbf:{NFSU2_TR(0x523bbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523bc0:L523bc0:{c.instructions+=9;NFSU2_TR(0x523bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523bc4:{NFSU2_TR(0x523bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523bc6:{NFSU2_TR(0x523bc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523bc7:{NFSU2_TR(0x523bc7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B523bcb:{NFSU2_TR(0x523bcb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523bcc:{NFSU2_TR(0x523bcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B523bd0:{NFSU2_TR(0x523bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523bd1:{NFSU2_TR(0x523bd1);
__builtin_memmove((R+24),(R+4),4);
}
B523bd3:{NFSU2_TR(0x523bd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523bf2;}}
}
B523bd5:L523bd5:{c.instructions+=2;NFSU2_TR(0x523bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523bd7:{NFSU2_TR(0x523bd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523bf2;}}
}
B523bd9:L523bd9:{c.instructions+=2;NFSU2_TR(0x523bd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523bdb:{NFSU2_TR(0x523bdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523bf2;}}
}
B523bdd:L523bdd:{c.instructions+=3;NFSU2_TR(0x523bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523be1:{NFSU2_TR(0x523be1);
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
B523be3:{NFSU2_TR(0x523be3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523bf2;}}
}
B523be5:L523be5:{c.instructions+=5;NFSU2_TR(0x523be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B523bec:{NFSU2_TR(0x523bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523bed:{NFSU2_TR(0x523bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B523bee:{NFSU2_TR(0x523bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B523bef:{NFSU2_TR(0x523bef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523bf2:L523bf2:{c.instructions+=10;NFSU2_TR(0x523bf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523bf6:{NFSU2_TR(0x523bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523bf9:{NFSU2_TR(0x523bf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B523bfc:{NFSU2_TR(0x523bfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523bfd:{NFSU2_TR(0x523bfd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B523bff:{NFSU2_TR(0x523bff);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523c01:{NFSU2_TR(0x523c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523c04:{NFSU2_TR(0x523c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523c07:{NFSU2_TR(0x523c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523c0a:{NFSU2_TR(0x523c0a);
if(r1(R+518)){{goto L523c11;}}
}
B523c0c:L523c0c:{c.instructions+=1;NFSU2_TR(0x523c0c);
w4(R+28,u32(0x1ull));
}
B523c11:L523c11:{c.instructions+=2;NFSU2_TR(0x523c11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523c13:{NFSU2_TR(0x523c13);
if(r1(R+518)){{goto L523c25;}}
}
B523c15:L523c15:{c.instructions+=5;NFSU2_TR(0x523c15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c16:{NFSU2_TR(0x523c16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c17:{NFSU2_TR(0x523c17);
u8 U[4];
w4(U+0,u32(0x523b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c1c:{NFSU2_TR(0x523c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c1d:{NFSU2_TR(0x523c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523c22ull));
TAIL_STATIC(0x494d30u,494);
}
B523c22:L523c22:{c.instructions+=1;NFSU2_TR(0x523c22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B523c25:L523c25:{c.instructions+=2;NFSU2_TR(0x523c25);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523c27:{NFSU2_TR(0x523c27);
if(r1(R+518)){{goto L523c39;}}
}
B523c29:L523c29:{c.instructions+=5;NFSU2_TR(0x523c29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c2a:{NFSU2_TR(0x523c2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c2b:{NFSU2_TR(0x523c2b);
u8 U[4];
w4(U+0,u32(0x523b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c30:{NFSU2_TR(0x523c30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c31:{NFSU2_TR(0x523c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523c36ull));
TAIL_STATIC(0x494d30u,494);
}
B523c36:L523c36:{c.instructions+=1;NFSU2_TR(0x523c36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B523c39:L523c39:{c.instructions+=2;NFSU2_TR(0x523c39);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523c3b:{NFSU2_TR(0x523c3b);
if(r1(R+518)){{goto L523c4d;}}
}
B523c3d:L523c3d:{c.instructions+=5;NFSU2_TR(0x523c3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c3e:{NFSU2_TR(0x523c3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c3f:{NFSU2_TR(0x523c3f);
u8 U[4];
w4(U+0,u32(0x523b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c44:{NFSU2_TR(0x523c44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c45:{NFSU2_TR(0x523c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523c4aull));
TAIL_STATIC(0x494d30u,494);
}
B523c4a:L523c4a:{c.instructions+=1;NFSU2_TR(0x523c4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B523c4d:L523c4d:{c.instructions+=3;NFSU2_TR(0x523c4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523c51:{NFSU2_TR(0x523c51);
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
B523c53:{NFSU2_TR(0x523c53);
if(r1(R+518)){{goto L523c65;}}
}
B523c55:L523c55:{c.instructions+=5;NFSU2_TR(0x523c55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c56:{NFSU2_TR(0x523c56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c57:{NFSU2_TR(0x523c57);
u8 U[4];
w4(U+0,u32(0x523b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c5c:{NFSU2_TR(0x523c5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c5d:{NFSU2_TR(0x523c5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523c62ull));
TAIL_STATIC(0x494d30u,494);
}
B523c62:L523c62:{c.instructions+=1;NFSU2_TR(0x523c62);
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
B523c65:L523c65:{c.instructions+=5;NFSU2_TR(0x523c65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523c66:{NFSU2_TR(0x523c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523c67:{NFSU2_TR(0x523c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B523c68:{NFSU2_TR(0x523c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B523c69:{NFSU2_TR(0x523c69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523c70:L523c70:{c.instructions+=5;NFSU2_TR(0x523c70);
__builtin_memmove((R+8),gp(0x838408),4);
}
B523c76:{NFSU2_TR(0x523c76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523c77:{NFSU2_TR(0x523c77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B523c79:{NFSU2_TR(0x523c79);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523c7b:{NFSU2_TR(0x523c7b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L523c9c;}}
}
B523c7d:L523c7d:{c.instructions+=4;NFSU2_TR(0x523c7d);
__builtin_memmove((R+4),gp(0x83840c),4);
}
B523c83:{NFSU2_TR(0x523c83);
__builtin_memmove((R+24),gp(0x837fd8),4);
}
B523c89:{NFSU2_TR(0x523c89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B523c8c:{NFSU2_TR(0x523c8c);
__builtin_memmove((R+16),(R+16),4);
}
B523c90:L523c90:{c.instructions+=2;NFSU2_TR(0x523c90);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B523c92:{NFSU2_TR(0x523c92);
if(r1(R+518)){{goto L523c9f;}}
}
B523c94:L523c94:{c.instructions+=4;NFSU2_TR(0x523c94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B523c95:{NFSU2_TR(0x523c95);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B523c98:{NFSU2_TR(0x523c98);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B523c9a:{NFSU2_TR(0x523c9a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523c90u);}goto L523c90;}}
}
B523c9c:L523c9c:{c.instructions+=1;NFSU2_TR(0x523c9c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B523c9f:L523c9f:{c.instructions+=2;NFSU2_TR(0x523c9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ca0:{NFSU2_TR(0x523ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523ca5ull));
TAIL_STATIC(0x510af0u,510);
}
B523ca5:L523ca5:{c.instructions+=3;NFSU2_TR(0x523ca5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B523ca8:{NFSU2_TR(0x523ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523ca9:{NFSU2_TR(0x523ca9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523cb0:L523cb0:{c.instructions+=4;NFSU2_TR(0x523cb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523cb1:{NFSU2_TR(0x523cb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B523cb5:{NFSU2_TR(0x523cb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523cb6:{NFSU2_TR(0x523cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523cbbull));
TAIL_STATIC(0x43dbb0u,43d);
}
B523cbb:L523cbb:{c.instructions+=5;NFSU2_TR(0x523cbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B523cbf:{NFSU2_TR(0x523cbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B523cc2:{NFSU2_TR(0x523cc2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B523cc5:{NFSU2_TR(0x523cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523cc6:{NFSU2_TR(0x523cc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L523cd9;}}
}
B523cc8:L523cc8:{c.instructions+=2;NFSU2_TR(0x523cc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x39ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523ccb:{NFSU2_TR(0x523ccb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L523cd9;}}
}
B523ccd:L523ccd:{c.instructions+=3;NFSU2_TR(0x523ccd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
}
B523cd0:{NFSU2_TR(0x523cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523cd4:{NFSU2_TR(0x523cd4);
TAIL_STATIC(0x510b80u,510);
}
B523cd9:L523cd9:{c.instructions+=2;NFSU2_TR(0x523cd9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x41ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B523cdc:{NFSU2_TR(0x523cdc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L523cef;}}
}
B523cde:L523cde:{c.instructions+=2;NFSU2_TR(0x523cde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5aull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5aull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523ce1:{NFSU2_TR(0x523ce1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L523cef;}}
}
B523ce3:L523ce3:{c.instructions+=3;NFSU2_TR(0x523ce3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffc9ull))));
}
B523ce6:{NFSU2_TR(0x523ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523cea:{NFSU2_TR(0x523cea);
TAIL_STATIC(0x510b80u,510);
}
B523cef:L523cef:{c.instructions+=3;NFSU2_TR(0x523cef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B523cf1:{NFSU2_TR(0x523cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523cf5:{NFSU2_TR(0x523cf5);
TAIL_STATIC(0x510b80u,510);
}
B523d00:L523d00:{c.instructions+=8;NFSU2_TR(0x523d00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d01:{NFSU2_TR(0x523d01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d02:{NFSU2_TR(0x523d02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d03:{NFSU2_TR(0x523d03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d04:{NFSU2_TR(0x523d04);
__builtin_memmove((R+28),(R+4),4);
}
B523d06:{NFSU2_TR(0x523d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523d09:{NFSU2_TR(0x523d09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523d0b:{NFSU2_TR(0x523d0b);
if(r1(R+518)){{goto L523d17;}}
}
B523d0d:L523d0d:{c.instructions+=2;NFSU2_TR(0x523d0d);
w4(R+4,u32(0x863780ull));
}
B523d12:{NFSU2_TR(0x523d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523d17ull));
TAIL_STATIC(0x510a70u,510);
}
B523d17:L523d17:{c.instructions+=4;NFSU2_TR(0x523d17);
__builtin_memmove((R+0),gp(0x837fd8),4);
}
B523d1c:{NFSU2_TR(0x523d1c);
__builtin_memmove((R+4),gp(0x838570),4);
}
B523d22:{NFSU2_TR(0x523d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d23:{NFSU2_TR(0x523d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523d28ull));
TAIL_STATIC(0x510790u,510);
}
B523d28:L523d28:{c.instructions+=3;NFSU2_TR(0x523d28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523d2a:{NFSU2_TR(0x523d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523d2d:{NFSU2_TR(0x523d2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523d3e;}}
}
B523d2f:L523d2f:{c.instructions+=3;NFSU2_TR(0x523d2f);
__builtin_memmove((R+4),gp(0x838570),4);
}
B523d35:{NFSU2_TR(0x523d35);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110cull))));
}
B523d3b:{NFSU2_TR(0x523d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523d3e:L523d3e:{c.instructions+=4;NFSU2_TR(0x523d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523d41:{NFSU2_TR(0x523d41);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+12),(U+0),4);
}
B523d44:{NFSU2_TR(0x523d44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d45:{NFSU2_TR(0x523d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523d4aull));
TAIL_STATIC(0x5105c0u,510);
}
B523d4a:L523d4a:{c.instructions+=5;NFSU2_TR(0x523d4a);
__builtin_memmove((R+4),gp(0x838570),4);
}
B523d50:{NFSU2_TR(0x523d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B523d52:{NFSU2_TR(0x523d52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B523d54:{NFSU2_TR(0x523d54);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523d56:{NFSU2_TR(0x523d56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L523e32;}}
}
B523d5c:L523d5c:{c.instructions+=2;NFSU2_TR(0x523d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B523d5f:{NFSU2_TR(0x523d5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B523d62:L523d62:{c.instructions+=2;NFSU2_TR(0x523d62);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B523d64:{NFSU2_TR(0x523d64);
if(r1(R+518)){{goto L523d73;}}
}
B523d66:L523d66:{c.instructions+=4;NFSU2_TR(0x523d66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B523d67:{NFSU2_TR(0x523d67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B523d6a:{NFSU2_TR(0x523d6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B523d6c:{NFSU2_TR(0x523d6c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523d62u);}goto L523d62;}}
}
B523d6e:L523d6e:{c.instructions+=1;NFSU2_TR(0x523d6e);
{goto L523e32;}
}
B523d73:L523d73:{c.instructions+=4;NFSU2_TR(0x523d73);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B523d76:{NFSU2_TR(0x523d76);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B523d7a:{NFSU2_TR(0x523d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523d7c:{NFSU2_TR(0x523d7c);
if(r1(R+518)){{goto L523e32;}}
}
B523d82:L523d82:{c.instructions+=26;NFSU2_TR(0x523d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523d85:{NFSU2_TR(0x523d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523d88:{NFSU2_TR(0x523d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523d8b:{NFSU2_TR(0x523d8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d8c:{NFSU2_TR(0x523d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523d8f:{NFSU2_TR(0x523d8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d90:{NFSU2_TR(0x523d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523d93:{NFSU2_TR(0x523d93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d94:{NFSU2_TR(0x523d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523d97:{NFSU2_TR(0x523d97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d98:{NFSU2_TR(0x523d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523d9b:{NFSU2_TR(0x523d9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523d9c:{NFSU2_TR(0x523d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523d9f:{NFSU2_TR(0x523d9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523da0:{NFSU2_TR(0x523da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523da3:{NFSU2_TR(0x523da3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523da4:{NFSU2_TR(0x523da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523da7:{NFSU2_TR(0x523da7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523da8:{NFSU2_TR(0x523da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523dab:{NFSU2_TR(0x523dab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dac:{NFSU2_TR(0x523dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523daf:{NFSU2_TR(0x523daf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523db0:{NFSU2_TR(0x523db0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523db1:{NFSU2_TR(0x523db1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523db2:{NFSU2_TR(0x523db2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523db4:{NFSU2_TR(0x523db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523db9ull));
TAIL_STATIC(0x4c2070u,4c2);
}
B523db9:L523db9:{c.instructions+=5;NFSU2_TR(0x523db9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523dbc:{NFSU2_TR(0x523dbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B523dbf:{NFSU2_TR(0x523dbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523dc1:{NFSU2_TR(0x523dc1);
u8 U[4];
w4(U+0,u32(0x41a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dc6:{NFSU2_TR(0x523dc6);
if(r1(R+518)){{goto L523dcc;}}
}
B523dc8:L523dc8:{c.instructions+=2;NFSU2_TR(0x523dc8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dca:{NFSU2_TR(0x523dca);
{goto L523dce;}
}
B523dcc:L523dcc:{c.instructions+=1;NFSU2_TR(0x523dcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dce:L523dce:{c.instructions+=2;NFSU2_TR(0x523dce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dd0:{NFSU2_TR(0x523dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523dd5ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B523dd5:L523dd5:{c.instructions+=5;NFSU2_TR(0x523dd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523dd8:{NFSU2_TR(0x523dd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B523ddb:{NFSU2_TR(0x523ddb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523ddd:{NFSU2_TR(0x523ddd);
u8 U[4];
w4(U+0,u32(0x41a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523de2:{NFSU2_TR(0x523de2);
if(r1(R+518)){{goto L523de8;}}
}
B523de4:L523de4:{c.instructions+=2;NFSU2_TR(0x523de4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523de6:{NFSU2_TR(0x523de6);
{goto L523dea;}
}
B523de8:L523de8:{c.instructions+=1;NFSU2_TR(0x523de8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dea:L523dea:{c.instructions+=2;NFSU2_TR(0x523dea);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dec:{NFSU2_TR(0x523dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523df1ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B523df1:L523df1:{c.instructions+=5;NFSU2_TR(0x523df1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523df4:{NFSU2_TR(0x523df4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B523df7:{NFSU2_TR(0x523df7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523df9:{NFSU2_TR(0x523df9);
u8 U[4];
w4(U+0,u32(0x41a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523dfe:{NFSU2_TR(0x523dfe);
if(r1(R+518)){{goto L523e04;}}
}
B523e00:L523e00:{c.instructions+=2;NFSU2_TR(0x523e00);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e02:{NFSU2_TR(0x523e02);
{goto L523e06;}
}
B523e04:L523e04:{c.instructions+=1;NFSU2_TR(0x523e04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e06:L523e06:{c.instructions+=2;NFSU2_TR(0x523e06);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e08:{NFSU2_TR(0x523e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e0dull));
TAIL_STATIC(0x4c1860u,4c1);
}
B523e0d:L523e0d:{c.instructions+=5;NFSU2_TR(0x523e0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523e10:{NFSU2_TR(0x523e10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B523e13:{NFSU2_TR(0x523e13);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B523e15:{NFSU2_TR(0x523e15);
u8 U[4];
w4(U+0,u32(0x41a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e1a:{NFSU2_TR(0x523e1a);
if(r1(R+518)){{goto L523e20;}}
}
B523e1c:L523e1c:{c.instructions+=2;NFSU2_TR(0x523e1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e1e:{NFSU2_TR(0x523e1e);
{goto L523e22;}
}
B523e20:L523e20:{c.instructions+=1;NFSU2_TR(0x523e20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e22:L523e22:{c.instructions+=2;NFSU2_TR(0x523e22);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e24:{NFSU2_TR(0x523e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e29ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B523e29:L523e29:{c.instructions+=2;NFSU2_TR(0x523e29);
__builtin_memmove((R+4),gp(0x838570),4);
}
B523e2f:{NFSU2_TR(0x523e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B523e32:L523e32:{c.instructions+=3;NFSU2_TR(0x523e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523e35:{NFSU2_TR(0x523e35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e36:{NFSU2_TR(0x523e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e3bull));
TAIL_STATIC(0x510750u,510);
}
B523e3b:L523e3b:{c.instructions+=3;NFSU2_TR(0x523e3b);
__builtin_memmove((R+20),(R+0),4);
}
B523e3d:{NFSU2_TR(0x523e3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523e3f:{NFSU2_TR(0x523e3f);
if(r1(R+518)){{goto L523ecb;}}
}
B523e45:L523e45:{c.instructions+=4;NFSU2_TR(0x523e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523e48:{NFSU2_TR(0x523e48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e49:{NFSU2_TR(0x523e49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e4b:{NFSU2_TR(0x523e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e50ull));
TAIL_STATIC(0x4a7990u,4a7);
}
B523e50:L523e50:{c.instructions+=2;NFSU2_TR(0x523e50);
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
B523e53:{NFSU2_TR(0x523e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e58ull));
TAIL_STATIC(0x4022c0u,402);
}
B523e58:L523e58:{c.instructions+=3;NFSU2_TR(0x523e58);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523e5e:{NFSU2_TR(0x523e5e);
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
B523e60:{NFSU2_TR(0x523e60);
if(r1(R+518)){{goto L523e7e;}}
}
B523e62:L523e62:{c.instructions+=3;NFSU2_TR(0x523e62);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x81ull))));
__builtin_memmove((R+4),(U+0),4);
}
B523e68:{NFSU2_TR(0x523e68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e69:{NFSU2_TR(0x523e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e6eull));
TAIL_STATIC(0x577eb0u,577);
}
B523e6e:L523e6e:{c.instructions+=2;NFSU2_TR(0x523e6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e6f:{NFSU2_TR(0x523e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e74ull));
TAIL_STATIC(0x580e90u,580);
}
B523e74:L523e74:{c.instructions+=2;NFSU2_TR(0x523e74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B523e77:{NFSU2_TR(0x523e77);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B523e7e:L523e7e:{c.instructions+=6;NFSU2_TR(0x523e7e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B523e81:{NFSU2_TR(0x523e81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e82:{NFSU2_TR(0x523e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x81ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523e88:{NFSU2_TR(0x523e88);
u8 U[4];
w4(U+0,u32(0x79b828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e8d:{NFSU2_TR(0x523e8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e8e:{NFSU2_TR(0x523e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523e93ull));
TAIL_STATIC(0x4400d0u,440);
}
B523e93:L523e93:{c.instructions+=8;NFSU2_TR(0x523e93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e95:{NFSU2_TR(0x523e95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e97:{NFSU2_TR(0x523e97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e99:{NFSU2_TR(0x523e99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e9b:{NFSU2_TR(0x523e9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e9d:{NFSU2_TR(0x523e9d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523e9f:{NFSU2_TR(0x523e9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ea0:{NFSU2_TR(0x523ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523ea5ull));
TAIL_STATIC(0x57cf70u,57c);
}
B523ea5:L523ea5:{c.instructions+=2;NFSU2_TR(0x523ea5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B523ea8:{NFSU2_TR(0x523ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523eadull));
TAIL_STATIC(0x571060u,571);
}
B523ead:L523ead:{c.instructions+=2;NFSU2_TR(0x523ead);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523eaf:{NFSU2_TR(0x523eaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523ebf;}}
}
B523eb1:L523eb1:{c.instructions+=1;NFSU2_TR(0x523eb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523eb6ull));
TAIL_STATIC(0x57ef60u,57e);
}
B523eb6:L523eb6:{c.instructions+=1;NFSU2_TR(0x523eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523ebbull));
TAIL_STATIC(0x571060u,571);
}
B523ebb:L523ebb:{c.instructions+=2;NFSU2_TR(0x523ebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B523ebd:{NFSU2_TR(0x523ebd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523eb1u);}goto L523eb1;}}
}
B523ebf:L523ebf:{c.instructions+=2;NFSU2_TR(0x523ebf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B523ec6:{NFSU2_TR(0x523ec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523ecbull));
TAIL_STATIC(0x5b9910u,5b9);
}
B523ecb:L523ecb:{c.instructions+=10;NFSU2_TR(0x523ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B523ece:{NFSU2_TR(0x523ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523ed1:{NFSU2_TR(0x523ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B523ed4:{NFSU2_TR(0x523ed4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ed5:{NFSU2_TR(0x523ed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B523ed7:{NFSU2_TR(0x523ed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ed8:{NFSU2_TR(0x523ed8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ed9:{NFSU2_TR(0x523ed9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523eda:{NFSU2_TR(0x523eda);
w4(R+4,u32(0x863780ull));
}
B523edf:{NFSU2_TR(0x523edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523ee4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523bc0u);}goto L523bc0;}
}
B523ee4:L523ee4:{c.instructions+=5;NFSU2_TR(0x523ee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523ee5:{NFSU2_TR(0x523ee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523ee6:{NFSU2_TR(0x523ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B523ee7:{NFSU2_TR(0x523ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B523ee8:{NFSU2_TR(0x523ee8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523ef0:L523ef0:{c.instructions+=5;NFSU2_TR(0x523ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523ef1:{NFSU2_TR(0x523ef1);
__builtin_memmove((R+24),(R+4),4);
}
B523ef3:{NFSU2_TR(0x523ef3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B523ef6:{NFSU2_TR(0x523ef6);
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
B523ef8:{NFSU2_TR(0x523ef8);
if(r1(R+518)){{goto L523f56;}}
}
B523efa:L523efa:{c.instructions+=2;NFSU2_TR(0x523efa);
w4(R+4,u32(0x832dacull));
}
B523eff:{NFSU2_TR(0x523eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523f04ull));
TAIL_STATIC(0x488b80u,488);
}
B523f04:L523f04:{c.instructions+=2;NFSU2_TR(0x523f04);
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
B523f06:{NFSU2_TR(0x523f06);
if(r1(R+518)){{goto L523f56;}}
}
B523f08:L523f08:{c.instructions+=6;NFSU2_TR(0x523f08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f09:{NFSU2_TR(0x523f09);
__builtin_memmove((R+28),gp(0x832db4),4);
}
B523f0f:{NFSU2_TR(0x523f0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f11:{NFSU2_TR(0x523f11);
w4(R+4,u32(0x832dacull));
}
B523f16:{NFSU2_TR(0x523f16);
s1(0x7fa29c,u8(0x1ull));
}
B523f1d:{NFSU2_TR(0x523f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523f22ull));
TAIL_STATIC(0x5ba030u,5ba);
}
B523f22:L523f22:{c.instructions+=3;NFSU2_TR(0x523f22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f23:{NFSU2_TR(0x523f23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f24:{NFSU2_TR(0x523f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523f29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x523c70u);}goto L523c70;}
}
B523f29:L523f29:{c.instructions+=3;NFSU2_TR(0x523f29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f2a:{NFSU2_TR(0x523f2a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f2c:{NFSU2_TR(0x523f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523f31ull));
TAIL_STATIC(0x4a95b0u,4a9);
}
B523f31:L523f31:{c.instructions+=9;NFSU2_TR(0x523f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523f34:{NFSU2_TR(0x523f34);
u8 U[4];
w4(U+0,u32(0x36fad7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f39:{NFSU2_TR(0x523f39);
u8 U[4];
w4(U+0,u32(0x172176e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f3e:{NFSU2_TR(0x523f3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f40:{NFSU2_TR(0x523f40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f42:{NFSU2_TR(0x523f42);
u8 U[4];
w4(U+0,u32(0xcb1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f47:{NFSU2_TR(0x523f47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f48:{NFSU2_TR(0x523f48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f49:{NFSU2_TR(0x523f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x523f4eull));
TAIL_STATIC(0x4a3100u,4a3);
}
B523f4e:L523f4e:{c.instructions+=3;NFSU2_TR(0x523f4e);
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
B523f51:{NFSU2_TR(0x523f51);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B523f55:{NFSU2_TR(0x523f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B523f56:L523f56:{c.instructions+=2;NFSU2_TR(0x523f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B523f57:{NFSU2_TR(0x523f57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B523f60:L523f60:{c.instructions+=22;NFSU2_TR(0x523f60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f62:{NFSU2_TR(0x523f62);
u8 U[4];
w4(U+0,u32(0x777324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f67:{NFSU2_TR(0x523f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B523f6d:{NFSU2_TR(0x523f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f6e:{NFSU2_TR(0x523f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523f75:{NFSU2_TR(0x523f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B523f78:{NFSU2_TR(0x523f78);
__builtin_memmove((R+0),gp(0x838578),4);
}
B523f7d:{NFSU2_TR(0x523f7d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B523f7e:{NFSU2_TR(0x523f7e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B523f80:{NFSU2_TR(0x523f80);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B523f82:{NFSU2_TR(0x523f82);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x5a54bd90ull))));
}
B523f87:{NFSU2_TR(0x523f87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xff293517ull))));
}
B523f8c:{NFSU2_TR(0x523f8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f8d:{NFSU2_TR(0x523f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523f91:{NFSU2_TR(0x523f91);
__builtin_memmove((R+0),gp(0x838408),4);
}
B523f96:{NFSU2_TR(0x523f96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523f97:{NFSU2_TR(0x523f97);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B523f99:{NFSU2_TR(0x523f99);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B523f9b:{NFSU2_TR(0x523f9b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523f9d:{NFSU2_TR(0x523f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523fa1:{NFSU2_TR(0x523fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523fa5:{NFSU2_TR(0x523fa5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5240e7u,524);}
}
B523fab:L523fab:{c.instructions+=4;NFSU2_TR(0x523fab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B523fac:{NFSU2_TR(0x523fac);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B523fae:{NFSU2_TR(0x523fae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B523fb2:{NFSU2_TR(0x523fb2);
{goto L523fb8;}
}
B523fb4:L523fb4:{c.instructions+=1;NFSU2_TR(0x523fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B523fb8:L523fb8:{c.instructions+=2;NFSU2_TR(0x523fb8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B523fba:{NFSU2_TR(0x523fba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L523fcd;}}
}
B523fbc:L523fbc:{c.instructions+=2;NFSU2_TR(0x523fbc);
u8 U[8];
__builtin_memmove((U+0),gp(0x838408),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B523fc2:{NFSU2_TR(0x523fc2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L523fcd;}}
}
B523fc4:L523fc4:{c.instructions+=3;NFSU2_TR(0x523fc4);
__builtin_memmove((R+0),gp(0x83840c),4);
}
B523fc9:{NFSU2_TR(0x523fc9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B523fcb:{NFSU2_TR(0x523fcb);
{goto L523fcf;}
}
B523fcd:L523fcd:{c.instructions+=1;NFSU2_TR(0x523fcd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B523fcf:L523fcf:{c.instructions+=4;NFSU2_TR(0x523fcf);
__builtin_memmove((R+4),gp(0x838578),4);
}
B523fd5:{NFSU2_TR(0x523fd5);
w4(R+0,u32(0x1ull));
}
B523fda:{NFSU2_TR(0x523fda);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523fdc:{NFSU2_TR(0x523fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L523fe5;}}
}
B523fde:L523fde:{c.instructions+=2;NFSU2_TR(0x523fde);
w4(R+4,u32(0x3ull));
}
B523fe3:{NFSU2_TR(0x523fe3);
{goto L523fef;}
}
B523fe5:L523fe5:{c.instructions+=2;NFSU2_TR(0x523fe5);
w4(R+0,u32(0x2ull));
}
B523fea:{NFSU2_TR(0x523fea);
w4(R+4,u32(0x4ull));
}
B523fef:L523fef:{c.instructions+=3;NFSU2_TR(0x523fef);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B523ff3:{NFSU2_TR(0x523ff3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523ff5:{NFSU2_TR(0x523ff5);
if(r1(R+518)){{goto L523fff;}}
}
B523ff7:L523ff7:{c.instructions+=2;NFSU2_TR(0x523ff7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B523ff9:{NFSU2_TR(0x523ff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5240c9u,524);}
}
B523fff:L523fff:{c.instructions+=1;NFSU2_TR(0x523fff);
__builtin_memmove((R+8),gp(0x86283c),4);
TAIL_STATIC(0x524005u,524);
}
XIT:NFSU2_TR_EXIT(0x523,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
