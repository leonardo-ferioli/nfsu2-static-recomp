#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74c(u8* __restrict R,Cpu& c);
u32 body_74d(u8* __restrict R,Cpu& c);
u32 body_74e(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x740,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x740,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_740(u8* __restrict R,Cpu& c);
u32 page_740(Cpu& c){return body_740(c.regs.data(),c);}
__attribute__((noinline)) u32 body_740(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x740000:goto L740000;
case 0x740001:c.instructions+=2;goto B740001;
case 0x740002:c.instructions+=1;goto B740002;
case 0x740007:goto L740007;
case 0x74000d:c.instructions+=3;goto B74000d;
case 0x740010:c.instructions+=2;goto B740010;
case 0x740012:c.instructions+=1;goto B740012;
case 0x740014:goto L740014;
case 0x740015:c.instructions+=1;goto B740015;
case 0x74001a:goto L74001a;
case 0x74001d:c.instructions+=2;goto B74001d;
case 0x74001f:c.instructions+=1;goto B74001f;
case 0x740021:goto L740021;
case 0x740023:c.instructions+=2;goto B740023;
case 0x740024:c.instructions+=1;goto B740024;
case 0x740025:goto L740025;
case 0x74002a:c.instructions+=1;goto B74002a;
case 0x74002c:goto L74002c;
case 0x740030:c.instructions+=3;goto B740030;
case 0x740031:c.instructions+=2;goto B740031;
case 0x740032:c.instructions+=1;goto B740032;
case 0x740037:goto L740037;
case 0x74003d:c.instructions+=3;goto B74003d;
case 0x740040:c.instructions+=2;goto B740040;
case 0x740042:c.instructions+=1;goto B740042;
case 0x740044:goto L740044;
case 0x740046:c.instructions+=2;goto B740046;
case 0x740047:c.instructions+=1;goto B740047;
case 0x740048:goto L740048;
case 0x74004b:c.instructions+=1;goto B74004b;
case 0x74004d:goto L74004d;
case 0x740051:c.instructions+=3;goto B740051;
case 0x740052:c.instructions+=2;goto B740052;
case 0x740053:c.instructions+=1;goto B740053;
case 0x740058:goto L740058;
case 0x74005e:c.instructions+=3;goto B74005e;
case 0x740061:c.instructions+=2;goto B740061;
case 0x740063:c.instructions+=1;goto B740063;
case 0x740065:goto L740065;
case 0x74006a:c.instructions+=2;goto B74006a;
case 0x74006b:c.instructions+=1;goto B74006b;
case 0x740070:goto L740070;
case 0x740073:c.instructions+=14;goto B740073;
case 0x740074:c.instructions+=13;goto B740074;
case 0x740078:c.instructions+=12;goto B740078;
case 0x74007b:c.instructions+=11;goto B74007b;
case 0x74007c:c.instructions+=10;goto B74007c;
case 0x74007d:c.instructions+=9;goto B74007d;
case 0x74007e:c.instructions+=8;goto B74007e;
case 0x740081:c.instructions+=7;goto B740081;
case 0x740083:c.instructions+=6;goto B740083;
case 0x740084:c.instructions+=5;goto B740084;
case 0x740086:c.instructions+=4;goto B740086;
case 0x74008a:c.instructions+=3;goto B74008a;
case 0x74008e:c.instructions+=2;goto B74008e;
case 0x740092:c.instructions+=1;goto B740092;
case 0x740097:goto L740097;
case 0x74009a:c.instructions+=2;goto B74009a;
case 0x74009c:c.instructions+=1;goto B74009c;
case 0x7400a2:goto L7400a2;
case 0x7400a5:c.instructions+=2;goto B7400a5;
case 0x7400a6:c.instructions+=1;goto B7400a6;
case 0x7400ab:goto L7400ab;
case 0x7400ac:c.instructions+=1;goto B7400ac;
case 0x7400b1:goto L7400b1;
case 0x7400b4:c.instructions+=3;goto B7400b4;
case 0x7400b6:c.instructions+=2;goto B7400b6;
case 0x7400ba:c.instructions+=1;goto B7400ba;
case 0x7400c0:goto L7400c0;
case 0x7400c3:c.instructions+=3;goto B7400c3;
case 0x7400c4:c.instructions+=2;goto B7400c4;
case 0x7400c6:c.instructions+=1;goto B7400c6;
case 0x7400cb:goto L7400cb;
case 0x7400ce:c.instructions+=2;goto B7400ce;
case 0x7400d0:c.instructions+=1;goto B7400d0;
case 0x7400d2:goto L7400d2;
case 0x7400d6:c.instructions+=4;goto B7400d6;
case 0x7400d9:c.instructions+=3;goto B7400d9;
case 0x7400da:c.instructions+=2;goto B7400da;
case 0x7400db:c.instructions+=1;goto B7400db;
case 0x7400e0:goto L7400e0;
case 0x7400e3:c.instructions+=2;goto B7400e3;
case 0x7400e4:c.instructions+=1;goto B7400e4;
case 0x7400e9:goto L7400e9;
case 0x7400ec:c.instructions+=2;goto B7400ec;
case 0x7400ee:c.instructions+=1;goto B7400ee;
case 0x7400f0:goto L7400f0;
case 0x7400f6:c.instructions+=2;goto B7400f6;
case 0x7400f8:c.instructions+=1;goto B7400f8;
case 0x7400fa:goto L7400fa;
case 0x7400fc:goto L7400fc;
case 0x740100:c.instructions+=2;goto B740100;
case 0x740102:c.instructions+=1;goto B740102;
case 0x740104:goto L740104;
case 0x740106:c.instructions+=3;goto B740106;
case 0x74010c:c.instructions+=2;goto B74010c;
case 0x740111:c.instructions+=1;goto B740111;
case 0x740113:goto L740113;
case 0x740115:c.instructions+=1;goto B740115;
case 0x740117:goto L740117;
case 0x74011c:goto L74011c;
case 0x74011e:c.instructions+=4;goto B74011e;
case 0x740121:c.instructions+=3;goto B740121;
case 0x740124:c.instructions+=2;goto B740124;
case 0x740128:c.instructions+=1;goto B740128;
case 0x74012a:goto L74012a;
case 0x74012d:c.instructions+=1;goto B74012d;
case 0x74012f:goto L74012f;
case 0x740131:c.instructions+=1;goto B740131;
case 0x740133:goto L740133;
case 0x740138:goto L740138;
case 0x74013a:c.instructions+=1;goto B74013a;
case 0x74013c:goto L74013c;
case 0x740140:c.instructions+=5;goto B740140;
case 0x740144:c.instructions+=4;goto B740144;
case 0x740145:c.instructions+=3;goto B740145;
case 0x740146:c.instructions+=2;goto B740146;
case 0x740147:c.instructions+=1;goto B740147;
case 0x74014c:goto L74014c;
case 0x74014f:c.instructions+=2;goto B74014f;
case 0x740152:c.instructions+=1;goto B740152;
case 0x740154:goto L740154;
case 0x740158:c.instructions+=2;goto B740158;
case 0x74015c:c.instructions+=1;goto B74015c;
case 0x74015e:goto L74015e;
case 0x740162:c.instructions+=2;goto B740162;
case 0x740164:c.instructions+=1;goto B740164;
case 0x740166:goto L740166;
case 0x74016a:c.instructions+=5;goto B74016a;
case 0x74016e:c.instructions+=4;goto B74016e;
case 0x74016f:c.instructions+=3;goto B74016f;
case 0x740171:c.instructions+=2;goto B740171;
case 0x740175:c.instructions+=1;goto B740175;
case 0x74017b:goto L74017b;
case 0x74017d:c.instructions+=1;goto B74017d;
case 0x74017f:goto L74017f;
case 0x740182:c.instructions+=4;goto B740182;
case 0x740183:c.instructions+=3;goto B740183;
case 0x740184:c.instructions+=2;goto B740184;
case 0x740186:c.instructions+=1;goto B740186;
case 0x74018b:goto L74018b;
case 0x74018e:c.instructions+=2;goto B74018e;
case 0x740190:c.instructions+=1;goto B740190;
case 0x740192:goto L740192;
case 0x740195:c.instructions+=2;goto B740195;
case 0x740197:c.instructions+=1;goto B740197;
case 0x740199:goto L740199;
case 0x74019c:goto L74019c;
case 0x74019e:c.instructions+=3;goto B74019e;
case 0x7401a1:c.instructions+=2;goto B7401a1;
case 0x7401a4:c.instructions+=1;goto B7401a4;
case 0x7401a6:goto L7401a6;
case 0x7401a7:c.instructions+=2;goto B7401a7;
case 0x7401a8:c.instructions+=1;goto B7401a8;
case 0x7401ad:goto L7401ad;
case 0x7401af:c.instructions+=3;goto B7401af;
case 0x7401b2:c.instructions+=2;goto B7401b2;
case 0x7401b4:c.instructions+=1;goto B7401b4;
case 0x7401b6:goto L7401b6;
case 0x7401b9:c.instructions+=2;goto B7401b9;
case 0x7401ba:c.instructions+=1;goto B7401ba;
case 0x7401bd:goto L7401bd;
case 0x7401be:c.instructions+=1;goto B7401be;
case 0x7401c1:goto L7401c1;
case 0x7401c4:goto L7401c4;
case 0x7401c5:c.instructions+=6;goto B7401c5;
case 0x7401c6:c.instructions+=5;goto B7401c6;
case 0x7401c7:c.instructions+=4;goto B7401c7;
case 0x7401c9:c.instructions+=3;goto B7401c9;
case 0x7401ca:c.instructions+=2;goto B7401ca;
case 0x7401cd:c.instructions+=1;goto B7401cd;
case 0x7401ce:goto L7401ce;
case 0x7401cf:c.instructions+=6;goto B7401cf;
case 0x7401d0:c.instructions+=5;goto B7401d0;
case 0x7401d1:c.instructions+=4;goto B7401d1;
case 0x7401d4:c.instructions+=3;goto B7401d4;
case 0x7401d5:c.instructions+=2;goto B7401d5;
case 0x7401d8:c.instructions+=1;goto B7401d8;
case 0x7401d9:goto L7401d9;
case 0x7401da:c.instructions+=6;goto B7401da;
case 0x7401dc:c.instructions+=5;goto B7401dc;
case 0x7401dd:c.instructions+=4;goto B7401dd;
case 0x7401de:c.instructions+=3;goto B7401de;
case 0x7401df:c.instructions+=2;goto B7401df;
case 0x7401e2:c.instructions+=1;goto B7401e2;
case 0x7401f0:goto L7401f0;
case 0x7401f1:c.instructions+=5;goto B7401f1;
case 0x7401f5:c.instructions+=4;goto B7401f5;
case 0x7401f7:c.instructions+=3;goto B7401f7;
case 0x7401f9:c.instructions+=2;goto B7401f9;
case 0x7401fa:c.instructions+=1;goto B7401fa;
case 0x7401ff:goto L7401ff;
case 0x740202:c.instructions+=2;goto B740202;
case 0x740204:c.instructions+=1;goto B740204;
case 0x740206:goto L740206;
case 0x740208:c.instructions+=3;goto B740208;
case 0x74020a:c.instructions+=2;goto B74020a;
case 0x74020b:c.instructions+=1;goto B74020b;
case 0x740210:goto L740210;
case 0x740213:c.instructions+=2;goto B740213;
case 0x740215:c.instructions+=1;goto B740215;
case 0x740217:goto L740217;
case 0x740219:c.instructions+=3;goto B740219;
case 0x74021b:c.instructions+=2;goto B74021b;
case 0x74021c:c.instructions+=1;goto B74021c;
case 0x740221:goto L740221;
case 0x740224:c.instructions+=2;goto B740224;
case 0x740226:c.instructions+=1;goto B740226;
case 0x740228:goto L740228;
case 0x74022a:c.instructions+=3;goto B74022a;
case 0x74022c:c.instructions+=2;goto B74022c;
case 0x74022d:c.instructions+=1;goto B74022d;
case 0x740232:goto L740232;
case 0x740235:goto L740235;
case 0x740236:c.instructions+=1;goto B740236;
case 0x740240:goto L740240;
case 0x740241:c.instructions+=12;goto B740241;
case 0x740243:c.instructions+=11;goto B740243;
case 0x740246:c.instructions+=10;goto B740246;
case 0x74024c:c.instructions+=9;goto B74024c;
case 0x740251:c.instructions+=8;goto B740251;
case 0x740252:c.instructions+=7;goto B740252;
case 0x740255:c.instructions+=6;goto B740255;
case 0x740256:c.instructions+=5;goto B740256;
case 0x74025d:c.instructions+=4;goto B74025d;
case 0x74025e:c.instructions+=3;goto B74025e;
case 0x740260:c.instructions+=2;goto B740260;
case 0x740265:c.instructions+=1;goto B740265;
case 0x74026c:goto L74026c;
case 0x74026e:goto L74026e;
case 0x740272:c.instructions+=1;goto B740272;
case 0x740274:goto L740274;
case 0x740279:c.instructions+=2;goto B740279;
case 0x740280:c.instructions+=1;goto B740280;
case 0x740285:goto L740285;
case 0x740286:c.instructions+=5;goto B740286;
case 0x740287:c.instructions+=4;goto B740287;
case 0x740288:c.instructions+=3;goto B740288;
case 0x74028a:c.instructions+=2;goto B74028a;
case 0x74028b:c.instructions+=1;goto B74028b;
case 0x74028c:goto L74028c;
case 0x74028f:c.instructions+=3;goto B74028f;
case 0x740292:c.instructions+=2;goto B740292;
case 0x740295:c.instructions+=1;goto B740295;
case 0x740297:goto L740297;
case 0x74029d:c.instructions+=1;goto B74029d;
case 0x7402a3:goto L7402a3;
case 0x7402a6:c.instructions+=5;goto B7402a6;
case 0x7402a9:c.instructions+=4;goto B7402a9;
case 0x7402aa:c.instructions+=3;goto B7402aa;
case 0x7402ab:c.instructions+=2;goto B7402ab;
case 0x7402ad:c.instructions+=1;goto B7402ad;
case 0x7402b2:goto L7402b2;
case 0x7402b5:goto L7402b5;
case 0x7402b8:c.instructions+=3;goto B7402b8;
case 0x7402b9:c.instructions+=2;goto B7402b9;
case 0x7402bb:c.instructions+=1;goto B7402bb;
case 0x7402c0:goto L7402c0;
case 0x7402c3:c.instructions+=2;goto B7402c3;
case 0x7402c5:c.instructions+=1;goto B7402c5;
case 0x7402cb:goto L7402cb;
case 0x7402ce:c.instructions+=4;goto B7402ce;
case 0x7402d1:c.instructions+=3;goto B7402d1;
case 0x7402d2:c.instructions+=2;goto B7402d2;
case 0x7402d3:c.instructions+=1;goto B7402d3;
case 0x7402d8:goto L7402d8;
case 0x7402db:c.instructions+=2;goto B7402db;
case 0x7402dd:c.instructions+=1;goto B7402dd;
case 0x7402e3:goto L7402e3;
case 0x7402e9:c.instructions+=2;goto B7402e9;
case 0x7402eb:c.instructions+=1;goto B7402eb;
case 0x7402f1:goto L7402f1;
case 0x7402f7:c.instructions+=2;goto B7402f7;
case 0x7402f9:c.instructions+=1;goto B7402f9;
case 0x7402fb:goto L7402fb;
case 0x7402fe:c.instructions+=7;goto B7402fe;
case 0x740300:c.instructions+=6;goto B740300;
case 0x740304:c.instructions+=5;goto B740304;
case 0x740307:c.instructions+=4;goto B740307;
case 0x740309:c.instructions+=3;goto B740309;
case 0x74030b:c.instructions+=2;goto B74030b;
case 0x74030f:c.instructions+=1;goto B74030f;
case 0x740315:goto L740315;
case 0x740316:c.instructions+=1;goto B740316;
case 0x74031b:goto L74031b;
case 0x74031e:c.instructions+=3;goto B74031e;
case 0x740320:c.instructions+=2;goto B740320;
case 0x740327:c.instructions+=1;goto B740327;
case 0x74032c:goto L74032c;
case 0x74032d:c.instructions+=5;goto B74032d;
case 0x74032e:c.instructions+=4;goto B74032e;
case 0x74032f:c.instructions+=3;goto B74032f;
case 0x740331:c.instructions+=2;goto B740331;
case 0x740332:c.instructions+=1;goto B740332;
case 0x740333:goto L740333;
case 0x740338:c.instructions+=2;goto B740338;
case 0x74033f:c.instructions+=1;goto B74033f;
case 0x740344:goto L740344;
case 0x740345:c.instructions+=5;goto B740345;
case 0x740346:c.instructions+=4;goto B740346;
case 0x740347:c.instructions+=3;goto B740347;
case 0x740349:c.instructions+=2;goto B740349;
case 0x74034a:c.instructions+=1;goto B74034a;
case 0x74034b:goto L74034b;
case 0x74034d:c.instructions+=2;goto B74034d;
case 0x740353:c.instructions+=1;goto B740353;
case 0x740359:goto L740359;
case 0x74035c:c.instructions+=3;goto B74035c;
case 0x74035f:c.instructions+=2;goto B74035f;
case 0x740361:c.instructions+=1;goto B740361;
case 0x740363:goto L740363;
case 0x740369:c.instructions+=1;goto B740369;
case 0x74036f:goto L74036f;
case 0x740372:c.instructions+=2;goto B740372;
case 0x740374:c.instructions+=1;goto B740374;
case 0x740376:goto L740376;
case 0x74037d:c.instructions+=1;goto B74037d;
case 0x740382:goto L740382;
case 0x740383:c.instructions+=5;goto B740383;
case 0x740384:c.instructions+=4;goto B740384;
case 0x740385:c.instructions+=3;goto B740385;
case 0x740387:c.instructions+=2;goto B740387;
case 0x740388:c.instructions+=1;goto B740388;
case 0x740389:goto L740389;
case 0x74038a:c.instructions+=2;goto B74038a;
case 0x74038b:c.instructions+=1;goto B74038b;
case 0x740390:goto L740390;
case 0x740393:c.instructions+=2;goto B740393;
case 0x740395:c.instructions+=1;goto B740395;
case 0x740397:goto L740397;
case 0x74039c:c.instructions+=2;goto B74039c;
case 0x7403a3:c.instructions+=1;goto B7403a3;
case 0x7403a8:goto L7403a8;
case 0x7403a9:c.instructions+=5;goto B7403a9;
case 0x7403aa:c.instructions+=4;goto B7403aa;
case 0x7403ab:c.instructions+=3;goto B7403ab;
case 0x7403ad:c.instructions+=2;goto B7403ad;
case 0x7403ae:c.instructions+=1;goto B7403ae;
case 0x7403af:goto L7403af;
case 0x7403b2:c.instructions+=2;goto B7403b2;
case 0x7403b4:c.instructions+=1;goto B7403b4;
case 0x7403b6:goto L7403b6;
case 0x7403b9:c.instructions+=2;goto B7403b9;
case 0x7403bc:c.instructions+=1;goto B7403bc;
case 0x7403bf:goto L7403bf;
case 0x7403c1:c.instructions+=1;goto B7403c1;
case 0x7403c3:goto L7403c3;
case 0x7403c5:c.instructions+=2;goto B7403c5;
case 0x7403ca:c.instructions+=1;goto B7403ca;
case 0x7403d1:goto L7403d1;
case 0x7403d3:goto L7403d3;
case 0x7403d8:c.instructions+=2;goto B7403d8;
case 0x7403df:c.instructions+=1;goto B7403df;
case 0x7403e3:goto L7403e3;
case 0x7403e5:goto L7403e5;
case 0x7403e8:c.instructions+=5;goto B7403e8;
case 0x7403ea:c.instructions+=4;goto B7403ea;
case 0x7403eb:c.instructions+=3;goto B7403eb;
case 0x7403ef:c.instructions+=2;goto B7403ef;
case 0x7403f0:c.instructions+=1;goto B7403f0;
case 0x7403f5:goto L7403f5;
case 0x7403f8:c.instructions+=4;goto B7403f8;
case 0x7403fb:c.instructions+=3;goto B7403fb;
case 0x740400:c.instructions+=2;goto B740400;
case 0x740407:c.instructions+=1;goto B740407;
case 0x740409:goto L740409;
case 0x740414:goto L740414;
case 0x74041a:c.instructions+=3;goto B74041a;
case 0x74041c:c.instructions+=2;goto B74041c;
case 0x740421:c.instructions+=1;goto B740421;
case 0x740428:goto L740428;
case 0x74042a:goto L74042a;
case 0x740430:c.instructions+=4;goto B740430;
case 0x740432:c.instructions+=3;goto B740432;
case 0x740437:c.instructions+=2;goto B740437;
case 0x74043e:c.instructions+=1;goto B74043e;
case 0x74043f:goto L74043f;
case 0x740441:goto L740441;
case 0x740446:goto L740446;
case 0x740448:c.instructions+=3;goto B740448;
case 0x74044e:c.instructions+=2;goto B74044e;
case 0x740450:c.instructions+=1;goto B740450;
case 0x740452:goto L740452;
case 0x740459:c.instructions+=1;goto B740459;
case 0x74045b:goto L74045b;
case 0x74045f:c.instructions+=10;goto B74045f;
case 0x740463:c.instructions+=9;goto B740463;
case 0x740464:c.instructions+=8;goto B740464;
case 0x740468:c.instructions+=7;goto B740468;
case 0x74046c:c.instructions+=6;goto B74046c;
case 0x740470:c.instructions+=5;goto B740470;
case 0x740473:c.instructions+=4;goto B740473;
case 0x740474:c.instructions+=3;goto B740474;
case 0x740475:c.instructions+=2;goto B740475;
case 0x74047d:c.instructions+=1;goto B74047d;
case 0x740482:goto L740482;
case 0x740483:c.instructions+=1;goto B740483;
case 0x740488:goto L740488;
case 0x74048b:goto L74048b;
case 0x74048d:goto L74048d;
case 0x740494:c.instructions+=1;goto B740494;
case 0x740499:goto L740499;
case 0x74049a:c.instructions+=5;goto B74049a;
case 0x74049b:c.instructions+=4;goto B74049b;
case 0x74049c:c.instructions+=3;goto B74049c;
case 0x74049e:c.instructions+=2;goto B74049e;
case 0x74049f:c.instructions+=1;goto B74049f;
case 0x7404a0:goto L7404a0;
case 0x7404a4:c.instructions+=4;goto B7404a4;
case 0x7404a5:c.instructions+=3;goto B7404a5;
case 0x7404ab:c.instructions+=2;goto B7404ab;
case 0x7404ad:c.instructions+=1;goto B7404ad;
case 0x7404b3:goto L7404b3;
case 0x7404b7:c.instructions+=2;goto B7404b7;
case 0x7404bc:c.instructions+=1;goto B7404bc;
case 0x7404be:goto L7404be;
case 0x7404c2:c.instructions+=3;goto B7404c2;
case 0x7404c5:c.instructions+=2;goto B7404c5;
case 0x7404c7:c.instructions+=1;goto B7404c7;
case 0x7404cd:goto L7404cd;
case 0x7404d0:c.instructions+=6;goto B7404d0;
case 0x7404d1:c.instructions+=5;goto B7404d1;
case 0x7404d5:c.instructions+=4;goto B7404d5;
case 0x7404d6:c.instructions+=3;goto B7404d6;
case 0x7404d7:c.instructions+=2;goto B7404d7;
case 0x7404d8:c.instructions+=1;goto B7404d8;
case 0x7404da:goto L7404da;
case 0x7404dd:c.instructions+=2;goto B7404dd;
case 0x7404de:c.instructions+=1;goto B7404de;
case 0x7404df:goto L7404df;
case 0x7404e4:c.instructions+=1;goto B7404e4;
case 0x7404e6:goto L7404e6;
case 0x7404e7:c.instructions+=5;goto B7404e7;
case 0x7404eb:c.instructions+=4;goto B7404eb;
case 0x7404ec:c.instructions+=3;goto B7404ec;
case 0x7404f0:c.instructions+=2;goto B7404f0;
case 0x7404f6:c.instructions+=1;goto B7404f6;
case 0x7404f8:goto L7404f8;
case 0x7404fa:c.instructions+=1;goto B7404fa;
case 0x740504:goto L740504;
case 0x740507:c.instructions+=2;goto B740507;
case 0x740509:c.instructions+=1;goto B740509;
case 0x74050b:goto L74050b;
case 0x74050e:c.instructions+=5;goto B74050e;
case 0x74050f:c.instructions+=4;goto B74050f;
case 0x740510:c.instructions+=3;goto B740510;
case 0x740511:c.instructions+=2;goto B740511;
case 0x740512:c.instructions+=1;goto B740512;
case 0x740514:goto L740514;
case 0x740517:c.instructions+=2;goto B740517;
case 0x74051d:c.instructions+=1;goto B74051d;
case 0x74051f:goto L74051f;
case 0x740521:c.instructions+=6;goto B740521;
case 0x740523:c.instructions+=5;goto B740523;
case 0x740525:c.instructions+=4;goto B740525;
case 0x740527:c.instructions+=3;goto B740527;
case 0x740528:c.instructions+=2;goto B740528;
case 0x740529:c.instructions+=1;goto B740529;
case 0x74052e:goto L74052e;
case 0x740531:goto L740531;
case 0x740534:c.instructions+=3;goto B740534;
case 0x740536:c.instructions+=2;goto B740536;
case 0x74053d:c.instructions+=1;goto B74053d;
case 0x74053f:goto L74053f;
case 0x740542:c.instructions+=5;goto B740542;
case 0x740543:c.instructions+=4;goto B740543;
case 0x740545:c.instructions+=3;goto B740545;
case 0x740547:c.instructions+=2;goto B740547;
case 0x740548:c.instructions+=1;goto B740548;
case 0x74054a:goto L74054a;
case 0x74054d:goto L74054d;
case 0x74054e:c.instructions+=1;goto B74054e;
case 0x74054f:goto L74054f;
case 0x740550:c.instructions+=1;goto B740550;
case 0x740551:goto L740551;
case 0x740554:c.instructions+=1;goto B740554;
case 0x740556:goto L740556;
case 0x740559:c.instructions+=8;goto B740559;
case 0x74055e:c.instructions+=7;goto B74055e;
case 0x740561:c.instructions+=6;goto B740561;
case 0x740563:c.instructions+=5;goto B740563;
case 0x740565:c.instructions+=4;goto B740565;
case 0x740566:c.instructions+=3;goto B740566;
case 0x740569:c.instructions+=2;goto B740569;
case 0x74056a:c.instructions+=1;goto B74056a;
case 0x74056f:goto L74056f;
case 0x740572:c.instructions+=1;goto B740572;
case 0x740574:goto L740574;
case 0x74057a:c.instructions+=1;goto B74057a;
case 0x74057c:goto L74057c;
case 0x740582:c.instructions+=1;goto B740582;
case 0x740584:goto L740584;
case 0x74058a:c.instructions+=1;goto B74058a;
case 0x74058c:goto L74058c;
case 0x740592:c.instructions+=2;goto B740592;
case 0x740599:c.instructions+=1;goto B740599;
case 0x74059b:goto L74059b;
case 0x7405a1:c.instructions+=10;goto B7405a1;
case 0x7405a3:c.instructions+=9;goto B7405a3;
case 0x7405a6:c.instructions+=8;goto B7405a6;
case 0x7405a7:c.instructions+=7;goto B7405a7;
case 0x7405a9:c.instructions+=6;goto B7405a9;
case 0x7405ab:c.instructions+=5;goto B7405ab;
case 0x7405ad:c.instructions+=4;goto B7405ad;
case 0x7405af:c.instructions+=3;goto B7405af;
case 0x7405b0:c.instructions+=2;goto B7405b0;
case 0x7405b1:c.instructions+=1;goto B7405b1;
case 0x7405b6:goto L7405b6;
case 0x7405b9:c.instructions+=1;goto B7405b9;
case 0x7405be:goto L7405be;
case 0x7405c4:c.instructions+=1;goto B7405c4;
case 0x7405ca:goto L7405ca;
case 0x7405cc:c.instructions+=3;goto B7405cc;
case 0x7405d2:c.instructions+=2;goto B7405d2;
case 0x7405d5:c.instructions+=1;goto B7405d5;
case 0x7405db:goto L7405db;
case 0x7405e1:c.instructions+=9;goto B7405e1;
case 0x7405e4:c.instructions+=8;goto B7405e4;
case 0x7405e5:c.instructions+=7;goto B7405e5;
case 0x7405e7:c.instructions+=6;goto B7405e7;
case 0x7405e9:c.instructions+=5;goto B7405e9;
case 0x7405eb:c.instructions+=4;goto B7405eb;
case 0x7405ed:c.instructions+=3;goto B7405ed;
case 0x7405ee:c.instructions+=2;goto B7405ee;
case 0x7405ef:c.instructions+=1;goto B7405ef;
case 0x7405f4:goto L7405f4;
case 0x7405f7:c.instructions+=4;goto B7405f7;
case 0x7405f8:c.instructions+=3;goto B7405f8;
case 0x7405f9:c.instructions+=2;goto B7405f9;
case 0x7405fa:c.instructions+=1;goto B7405fa;
case 0x740600:goto L740600;
case 0x740601:c.instructions+=5;goto B740601;
case 0x740602:c.instructions+=4;goto B740602;
case 0x740606:c.instructions+=3;goto B740606;
case 0x740608:c.instructions+=2;goto B740608;
case 0x74060a:c.instructions+=1;goto B74060a;
case 0x740610:goto L740610;
case 0x740613:c.instructions+=2;goto B740613;
case 0x740614:c.instructions+=1;goto B740614;
case 0x740619:goto L740619;
case 0x74061c:c.instructions+=4;goto B74061c;
case 0x74061f:c.instructions+=3;goto B74061f;
case 0x740621:c.instructions+=2;goto B740621;
case 0x740624:c.instructions+=1;goto B740624;
case 0x740626:goto L740626;
case 0x740628:c.instructions+=1;goto B740628;
case 0x74062a:goto L74062a;
case 0x74062b:c.instructions+=4;goto B74062b;
case 0x74062e:c.instructions+=3;goto B74062e;
case 0x74062f:c.instructions+=2;goto B74062f;
case 0x740630:c.instructions+=1;goto B740630;
case 0x740635:goto L740635;
case 0x740638:c.instructions+=4;goto B740638;
case 0x74063a:c.instructions+=3;goto B74063a;
case 0x74063c:c.instructions+=2;goto B74063c;
case 0x74063f:c.instructions+=1;goto B74063f;
case 0x740641:goto L740641;
case 0x740643:c.instructions+=3;goto B740643;
case 0x740649:c.instructions+=2;goto B740649;
case 0x74064b:c.instructions+=1;goto B74064b;
case 0x74064d:goto L74064d;
case 0x74064f:c.instructions+=4;goto B74064f;
case 0x740659:c.instructions+=3;goto B740659;
case 0x74065c:c.instructions+=2;goto B74065c;
case 0x74065e:c.instructions+=1;goto B74065e;
case 0x740660:goto L740660;
case 0x740663:c.instructions+=5;goto B740663;
case 0x740664:c.instructions+=4;goto B740664;
case 0x740669:c.instructions+=3;goto B740669;
case 0x74066a:c.instructions+=2;goto B74066a;
case 0x74066b:c.instructions+=1;goto B74066b;
case 0x74066d:goto L74066d;
case 0x74066f:c.instructions+=6;goto B74066f;
case 0x740670:c.instructions+=5;goto B740670;
case 0x740671:c.instructions+=4;goto B740671;
case 0x740673:c.instructions+=3;goto B740673;
case 0x740674:c.instructions+=2;goto B740674;
case 0x740675:c.instructions+=1;goto B740675;
case 0x74067a:goto L74067a;
case 0x74067d:goto L74067d;
case 0x740680:c.instructions+=3;goto B740680;
case 0x740682:c.instructions+=2;goto B740682;
case 0x740689:c.instructions+=1;goto B740689;
case 0x74068b:goto L74068b;
case 0x74068e:c.instructions+=5;goto B74068e;
case 0x74068f:c.instructions+=4;goto B74068f;
case 0x740690:c.instructions+=3;goto B740690;
case 0x740692:c.instructions+=2;goto B740692;
case 0x740693:c.instructions+=1;goto B740693;
case 0x740695:goto L740695;
case 0x740698:goto L740698;
case 0x740699:c.instructions+=1;goto B740699;
case 0x74069e:goto L74069e;
case 0x7406a1:goto L7406a1;
case 0x7406a2:goto L7406a2;
case 0x7406a8:c.instructions+=2;goto B7406a8;
case 0x7406aa:c.instructions+=1;goto B7406aa;
case 0x7406ac:goto L7406ac;
case 0x7406af:c.instructions+=3;goto B7406af;
case 0x7406b1:c.instructions+=2;goto B7406b1;
case 0x7406b4:c.instructions+=1;goto B7406b4;
case 0x7406b6:goto L7406b6;
case 0x7406b9:c.instructions+=6;goto B7406b9;
case 0x7406ba:c.instructions+=5;goto B7406ba;
case 0x7406c0:c.instructions+=4;goto B7406c0;
case 0x7406c1:c.instructions+=3;goto B7406c1;
case 0x7406c2:c.instructions+=2;goto B7406c2;
case 0x7406c3:c.instructions+=1;goto B7406c3;
case 0x7406c5:goto L7406c5;
case 0x7406c8:c.instructions+=1;goto B7406c8;
case 0x7406cb:goto L7406cb;
case 0x7406d1:goto L7406d1;
case 0x7406d2:c.instructions+=2;goto B7406d2;
case 0x7406d3:c.instructions+=1;goto B7406d3;
case 0x7406e0:goto L7406e0;
case 0x7406e1:c.instructions+=5;goto B7406e1;
case 0x7406e5:c.instructions+=4;goto B7406e5;
case 0x7406e8:c.instructions+=3;goto B7406e8;
case 0x7406e9:c.instructions+=2;goto B7406e9;
case 0x7406ea:c.instructions+=1;goto B7406ea;
case 0x7406ef:goto L7406ef;
case 0x7406f3:c.instructions+=3;goto B7406f3;
case 0x7406f6:c.instructions+=2;goto B7406f6;
case 0x7406f8:c.instructions+=1;goto B7406f8;
case 0x7406fa:goto L7406fa;
case 0x7406fd:c.instructions+=3;goto B7406fd;
case 0x7406fe:c.instructions+=2;goto B7406fe;
case 0x7406ff:c.instructions+=1;goto B7406ff;
case 0x740704:goto L740704;
case 0x740707:c.instructions+=2;goto B740707;
case 0x740709:c.instructions+=1;goto B740709;
case 0x74070b:goto L74070b;
case 0x740711:c.instructions+=2;goto B740711;
case 0x740713:c.instructions+=1;goto B740713;
case 0x740715:goto L740715;
case 0x740717:c.instructions+=2;goto B740717;
case 0x740721:c.instructions+=1;goto B740721;
case 0x740723:goto L740723;
case 0x740724:c.instructions+=3;goto B740724;
case 0x740729:c.instructions+=2;goto B740729;
case 0x74072a:c.instructions+=1;goto B74072a;
case 0x74072b:goto L74072b;
case 0x74072f:c.instructions+=8;goto B74072f;
case 0x740733:c.instructions+=7;goto B740733;
case 0x740734:c.instructions+=6;goto B740734;
case 0x740735:c.instructions+=5;goto B740735;
case 0x740737:c.instructions+=4;goto B740737;
case 0x74073c:c.instructions+=3;goto B74073c;
case 0x74073d:c.instructions+=2;goto B74073d;
case 0x74073e:c.instructions+=1;goto B74073e;
case 0x740743:goto L740743;
case 0x740746:c.instructions+=3;goto B740746;
case 0x740747:c.instructions+=2;goto B740747;
case 0x740748:c.instructions+=1;goto B740748;
case 0x740750:goto L740750;
case 0x740751:c.instructions+=3;goto B740751;
case 0x740755:c.instructions+=2;goto B740755;
case 0x740759:c.instructions+=1;goto B740759;
case 0x74075b:goto L74075b;
case 0x740760:c.instructions+=2;goto B740760;
case 0x740761:c.instructions+=1;goto B740761;
case 0x740762:goto L740762;
case 0x740763:c.instructions+=7;goto B740763;
case 0x740767:c.instructions+=6;goto B740767;
case 0x740769:c.instructions+=5;goto B740769;
case 0x74076b:c.instructions+=4;goto B74076b;
case 0x740770:c.instructions+=3;goto B740770;
case 0x740771:c.instructions+=2;goto B740771;
case 0x740772:c.instructions+=1;goto B740772;
case 0x740777:goto L740777;
case 0x74077b:c.instructions+=7;goto B74077b;
case 0x74077f:c.instructions+=6;goto B74077f;
case 0x740780:c.instructions+=5;goto B740780;
case 0x740781:c.instructions+=4;goto B740781;
case 0x740783:c.instructions+=3;goto B740783;
case 0x740784:c.instructions+=2;goto B740784;
case 0x740785:c.instructions+=1;goto B740785;
case 0x74078a:goto L74078a;
case 0x74078d:c.instructions+=3;goto B74078d;
case 0x74078e:c.instructions+=2;goto B74078e;
case 0x74078f:c.instructions+=1;goto B74078f;
case 0x740790:goto L740790;
case 0x740794:c.instructions+=2;goto B740794;
case 0x740798:c.instructions+=1;goto B740798;
case 0x74079a:goto L74079a;
case 0x74079f:c.instructions+=1;goto B74079f;
case 0x7407a0:goto L7407a0;
case 0x7407a4:c.instructions+=8;goto B7407a4;
case 0x7407a8:c.instructions+=7;goto B7407a8;
case 0x7407aa:c.instructions+=6;goto B7407aa;
case 0x7407ac:c.instructions+=5;goto B7407ac;
case 0x7407ad:c.instructions+=4;goto B7407ad;
case 0x7407b2:c.instructions+=3;goto B7407b2;
case 0x7407b3:c.instructions+=2;goto B7407b3;
case 0x7407b4:c.instructions+=1;goto B7407b4;
case 0x7407b9:goto L7407b9;
case 0x7407bc:c.instructions+=1;goto B7407bc;
case 0x7407c0:goto L7407c0;
case 0x7407c6:c.instructions+=14;goto B7407c6;
case 0x7407cb:c.instructions+=13;goto B7407cb;
case 0x7407cc:c.instructions+=12;goto B7407cc;
case 0x7407cd:c.instructions+=11;goto B7407cd;
case 0x7407ce:c.instructions+=10;goto B7407ce;
case 0x7407d5:c.instructions+=9;goto B7407d5;
case 0x7407d7:c.instructions+=8;goto B7407d7;
case 0x7407d9:c.instructions+=7;goto B7407d9;
case 0x7407da:c.instructions+=6;goto B7407da;
case 0x7407e1:c.instructions+=5;goto B7407e1;
case 0x7407e9:c.instructions+=4;goto B7407e9;
case 0x7407ed:c.instructions+=3;goto B7407ed;
case 0x7407f2:c.instructions+=2;goto B7407f2;
case 0x7407f6:c.instructions+=1;goto B7407f6;
case 0x7407f8:goto L7407f8;
case 0x7407fc:c.instructions+=1;goto B7407fc;
case 0x7407fe:goto L7407fe;
case 0x7407ff:c.instructions+=6;goto B7407ff;
case 0x740800:c.instructions+=5;goto B740800;
case 0x740801:c.instructions+=4;goto B740801;
case 0x740806:c.instructions+=3;goto B740806;
case 0x740807:c.instructions+=2;goto B740807;
case 0x74080e:c.instructions+=1;goto B74080e;
case 0x740813:goto L740813;
case 0x740819:c.instructions+=1;goto B740819;
case 0x74081a:goto L74081a;
case 0x74081d:c.instructions+=2;goto B74081d;
case 0x74081e:c.instructions+=1;goto B74081e;
case 0x740823:goto L740823;
case 0x740826:c.instructions+=4;goto B740826;
case 0x740827:c.instructions+=3;goto B740827;
case 0x74082b:c.instructions+=2;goto B74082b;
case 0x74082f:c.instructions+=1;goto B74082f;
case 0x740834:goto L740834;
case 0x740837:c.instructions+=2;goto B740837;
case 0x740839:c.instructions+=1;goto B740839;
case 0x74083f:goto L74083f;
case 0x740842:c.instructions+=2;goto B740842;
case 0x740843:c.instructions+=1;goto B740843;
case 0x740848:goto L740848;
case 0x740849:c.instructions+=1;goto B740849;
case 0x74084e:goto L74084e;
case 0x740851:c.instructions+=3;goto B740851;
case 0x740853:c.instructions+=2;goto B740853;
case 0x740857:c.instructions+=1;goto B740857;
case 0x74085d:goto L74085d;
case 0x740860:goto L740860;
case 0x740863:c.instructions+=2;goto B740863;
case 0x740864:c.instructions+=1;goto B740864;
case 0x740869:goto L740869;
case 0x74086c:c.instructions+=2;goto B74086c;
case 0x74086e:c.instructions+=1;goto B74086e;
case 0x740874:goto L740874;
case 0x740878:c.instructions+=4;goto B740878;
case 0x74087b:c.instructions+=3;goto B74087b;
case 0x74087c:c.instructions+=2;goto B74087c;
case 0x74087d:c.instructions+=1;goto B74087d;
case 0x740882:goto L740882;
case 0x740885:c.instructions+=2;goto B740885;
case 0x740886:c.instructions+=1;goto B740886;
case 0x74088b:goto L74088b;
case 0x74088e:c.instructions+=2;goto B74088e;
case 0x740890:c.instructions+=1;goto B740890;
case 0x740896:goto L740896;
case 0x74089c:c.instructions+=3;goto B74089c;
case 0x74089e:c.instructions+=2;goto B74089e;
case 0x7408a2:c.instructions+=1;goto B7408a2;
case 0x7408a8:goto L7408a8;
case 0x7408ad:c.instructions+=1;goto B7408ad;
case 0x7408b3:goto L7408b3;
case 0x7408b5:c.instructions+=3;goto B7408b5;
case 0x7408b7:c.instructions+=2;goto B7408b7;
case 0x7408ba:c.instructions+=1;goto B7408ba;
case 0x7408c0:goto L7408c0;
case 0x7408c2:c.instructions+=3;goto B7408c2;
case 0x7408c3:c.instructions+=2;goto B7408c3;
case 0x7408c5:c.instructions+=1;goto B7408c5;
case 0x7408c7:goto L7408c7;
case 0x7408c9:c.instructions+=3;goto B7408c9;
case 0x7408cb:c.instructions+=2;goto B7408cb;
case 0x7408cd:c.instructions+=1;goto B7408cd;
case 0x7408d3:goto L7408d3;
case 0x7408d5:goto L7408d5;
case 0x7408d7:c.instructions+=5;goto B7408d7;
case 0x7408d8:c.instructions+=4;goto B7408d8;
case 0x7408da:c.instructions+=3;goto B7408da;
case 0x7408db:c.instructions+=2;goto B7408db;
case 0x7408dd:c.instructions+=1;goto B7408dd;
case 0x7408df:goto L7408df;
case 0x7408e3:c.instructions+=4;goto B7408e3;
case 0x7408e5:c.instructions+=3;goto B7408e5;
case 0x7408e7:c.instructions+=2;goto B7408e7;
case 0x7408ea:c.instructions+=1;goto B7408ea;
case 0x7408f0:goto L7408f0;
case 0x7408f2:c.instructions+=3;goto B7408f2;
case 0x7408f3:c.instructions+=2;goto B7408f3;
case 0x7408f5:c.instructions+=1;goto B7408f5;
case 0x7408f7:goto L7408f7;
case 0x7408f9:c.instructions+=4;goto B7408f9;
case 0x7408fb:c.instructions+=3;goto B7408fb;
case 0x7408fc:c.instructions+=2;goto B7408fc;
case 0x7408fe:c.instructions+=1;goto B7408fe;
case 0x740903:goto L740903;
case 0x740906:c.instructions+=2;goto B740906;
case 0x740908:c.instructions+=1;goto B740908;
case 0x74090a:goto L74090a;
case 0x74090e:c.instructions+=2;goto B74090e;
case 0x740910:c.instructions+=1;goto B740910;
case 0x740913:goto L740913;
case 0x740915:c.instructions+=3;goto B740915;
case 0x740916:c.instructions+=2;goto B740916;
case 0x740918:c.instructions+=1;goto B740918;
case 0x74091a:goto L74091a;
case 0x74091c:c.instructions+=3;goto B74091c;
case 0x74091e:c.instructions+=2;goto B74091e;
case 0x740920:c.instructions+=1;goto B740920;
case 0x740922:goto L740922;
case 0x740924:c.instructions+=2;goto B740924;
case 0x740926:c.instructions+=1;goto B740926;
case 0x740928:goto L740928;
case 0x74092a:c.instructions+=4;goto B74092a;
case 0x74092d:c.instructions+=3;goto B74092d;
case 0x74092e:c.instructions+=2;goto B74092e;
case 0x740930:c.instructions+=1;goto B740930;
case 0x740932:goto L740932;
case 0x740934:c.instructions+=1;goto B740934;
case 0x740937:goto L740937;
case 0x740939:c.instructions+=3;goto B740939;
case 0x74093a:c.instructions+=2;goto B74093a;
case 0x74093c:c.instructions+=1;goto B74093c;
case 0x74093e:goto L74093e;
case 0x740940:c.instructions+=1;goto B740940;
case 0x740942:goto L740942;
case 0x740949:c.instructions+=6;goto B740949;
case 0x740950:c.instructions+=5;goto B740950;
case 0x740953:c.instructions+=4;goto B740953;
case 0x740954:c.instructions+=3;goto B740954;
case 0x740955:c.instructions+=2;goto B740955;
case 0x740957:c.instructions+=1;goto B740957;
case 0x740959:goto L740959;
case 0x74095d:c.instructions+=1;goto B74095d;
case 0x740961:goto L740961;
case 0x740965:c.instructions+=5;goto B740965;
case 0x740969:c.instructions+=4;goto B740969;
case 0x74096a:c.instructions+=3;goto B74096a;
case 0x74096c:c.instructions+=2;goto B74096c;
case 0x740970:c.instructions+=1;goto B740970;
case 0x740976:goto L740976;
case 0x740978:c.instructions+=1;goto B740978;
case 0x74097a:goto L74097a;
case 0x740982:c.instructions+=1;goto B740982;
case 0x740984:goto L740984;
case 0x740988:c.instructions+=2;goto B740988;
case 0x74098a:c.instructions+=1;goto B74098a;
case 0x74098c:goto L74098c;
case 0x740993:c.instructions+=10;goto B740993;
case 0x74099a:c.instructions+=9;goto B74099a;
case 0x7409a1:c.instructions+=8;goto B7409a1;
case 0x7409a2:c.instructions+=7;goto B7409a2;
case 0x7409a3:c.instructions+=6;goto B7409a3;
case 0x7409a4:c.instructions+=5;goto B7409a4;
case 0x7409a8:c.instructions+=4;goto B7409a8;
case 0x7409a9:c.instructions+=3;goto B7409a9;
case 0x7409aa:c.instructions+=2;goto B7409aa;
case 0x7409ad:c.instructions+=1;goto B7409ad;
case 0x7409b2:goto L7409b2;
case 0x7409b5:c.instructions+=1;goto B7409b5;
case 0x7409b9:goto L7409b9;
case 0x7409c0:c.instructions+=6;goto B7409c0;
case 0x7409c4:c.instructions+=5;goto B7409c4;
case 0x7409c5:c.instructions+=4;goto B7409c5;
case 0x7409c6:c.instructions+=3;goto B7409c6;
case 0x7409c7:c.instructions+=2;goto B7409c7;
case 0x7409c8:c.instructions+=1;goto B7409c8;
case 0x7409cd:goto L7409cd;
case 0x7409d3:c.instructions+=1;goto B7409d3;
case 0x7409e0:goto L7409e0;
case 0x7409e1:c.instructions+=3;goto B7409e1;
case 0x7409e5:c.instructions+=2;goto B7409e5;
case 0x7409e7:c.instructions+=1;goto B7409e7;
case 0x7409e9:goto L7409e9;
case 0x7409ef:c.instructions+=2;goto B7409ef;
case 0x7409f1:c.instructions+=1;goto B7409f1;
case 0x7409f3:goto L7409f3;
case 0x7409f4:c.instructions+=2;goto B7409f4;
case 0x7409f5:c.instructions+=1;goto B7409f5;
case 0x7409fa:goto L7409fa;
case 0x7409fc:c.instructions+=3;goto B7409fc;
case 0x7409ff:c.instructions+=2;goto B7409ff;
case 0x740a00:c.instructions+=1;goto B740a00;
case 0x740a02:goto L740a02;
case 0x740a03:goto L740a03;
case 0x740a09:c.instructions+=3;goto B740a09;
case 0x740a0a:c.instructions+=2;goto B740a0a;
case 0x740a0b:c.instructions+=1;goto B740a0b;
case 0x740a10:goto L740a10;
case 0x740a12:c.instructions+=3;goto B740a12;
case 0x740a15:c.instructions+=2;goto B740a15;
case 0x740a17:c.instructions+=1;goto B740a17;
case 0x740a19:goto L740a19;
case 0x740a1d:c.instructions+=1;goto B740a1d;
case 0x740a1f:goto L740a1f;
case 0x740a22:c.instructions+=7;goto B740a22;
case 0x740a24:c.instructions+=6;goto B740a24;
case 0x740a26:c.instructions+=5;goto B740a26;
case 0x740a27:c.instructions+=4;goto B740a27;
case 0x740a2c:c.instructions+=3;goto B740a2c;
case 0x740a2d:c.instructions+=2;goto B740a2d;
case 0x740a2e:c.instructions+=1;goto B740a2e;
case 0x740a33:goto L740a33;
case 0x740a36:goto L740a36;
case 0x740a3c:c.instructions+=3;goto B740a3c;
case 0x740a3d:c.instructions+=2;goto B740a3d;
case 0x740a3e:c.instructions+=1;goto B740a3e;
case 0x740a43:goto L740a43;
case 0x740a44:c.instructions+=1;goto B740a44;
case 0x740a47:goto L740a47;
case 0x740a4a:goto L740a4a;
case 0x740a4b:c.instructions+=1;goto B740a4b;
case 0x740a4d:goto L740a4d;
case 0x740a4e:goto L740a4e;
case 0x740a4f:c.instructions+=1;goto B740a4f;
case 0x740a54:goto L740a54;
case 0x740a57:c.instructions+=1;goto B740a57;
case 0x740a58:goto L740a58;
case 0x740a59:c.instructions+=1;goto B740a59;
case 0x740a60:goto L740a60;
case 0x740a66:c.instructions+=10;goto B740a66;
case 0x740a6b:c.instructions+=9;goto B740a6b;
case 0x740a72:c.instructions+=8;goto B740a72;
case 0x740a79:c.instructions+=7;goto B740a79;
case 0x740a7b:c.instructions+=6;goto B740a7b;
case 0x740a80:c.instructions+=5;goto B740a80;
case 0x740a81:c.instructions+=4;goto B740a81;
case 0x740a88:c.instructions+=3;goto B740a88;
case 0x740a89:c.instructions+=2;goto B740a89;
case 0x740a8e:c.instructions+=1;goto B740a8e;
case 0x740a90:goto L740a90;
case 0x740a95:c.instructions+=1;goto B740a95;
case 0x740a97:goto L740a97;
case 0x740a9a:c.instructions+=8;goto B740a9a;
case 0x740a9b:c.instructions+=7;goto B740a9b;
case 0x740a9d:c.instructions+=6;goto B740a9d;
case 0x740a9f:c.instructions+=5;goto B740a9f;
case 0x740aa1:c.instructions+=4;goto B740aa1;
case 0x740aa5:c.instructions+=3;goto B740aa5;
case 0x740aaa:c.instructions+=2;goto B740aaa;
case 0x740aab:c.instructions+=1;goto B740aab;
case 0x740ab0:goto L740ab0;
case 0x740ab3:c.instructions+=1;goto B740ab3;
case 0x740ab8:goto L740ab8;
case 0x740abb:c.instructions+=2;goto B740abb;
case 0x740abe:c.instructions+=1;goto B740abe;
case 0x740ac4:goto L740ac4;
case 0x740acb:goto L740acb;
case 0x740ace:c.instructions+=1;goto B740ace;
case 0x740ad0:goto L740ad0;
case 0x740ad7:c.instructions+=1;goto B740ad7;
case 0x740ad9:goto L740ad9;
case 0x740ae0:c.instructions+=1;goto B740ae0;
case 0x740ae2:goto L740ae2;
case 0x740ae6:c.instructions+=1;goto B740ae6;
case 0x740ae8:goto L740ae8;
case 0x740aef:c.instructions+=1;goto B740aef;
case 0x740af1:goto L740af1;
case 0x740af4:c.instructions+=2;goto B740af4;
case 0x740af9:c.instructions+=1;goto B740af9;
case 0x740afb:goto L740afb;
case 0x740afd:goto L740afd;
case 0x740b02:c.instructions+=1;goto B740b02;
case 0x740b04:goto L740b04;
case 0x740b06:goto L740b06;
case 0x740b08:c.instructions+=1;goto B740b08;
case 0x740b0a:goto L740b0a;
case 0x740b0f:c.instructions+=1;goto B740b0f;
case 0x740b11:goto L740b11;
case 0x740b18:c.instructions+=1;goto B740b18;
case 0x740b1a:goto L740b1a;
case 0x740b1d:c.instructions+=1;goto B740b1d;
case 0x740b1f:goto L740b1f;
case 0x740b26:c.instructions+=1;goto B740b26;
case 0x740b28:goto L740b28;
case 0x740b2d:c.instructions+=1;goto B740b2d;
case 0x740b2f:goto L740b2f;
case 0x740b34:c.instructions+=1;goto B740b34;
case 0x740b36:goto L740b36;
case 0x740b3b:c.instructions+=1;goto B740b3b;
case 0x740b3d:goto L740b3d;
case 0x740b44:c.instructions+=1;goto B740b44;
case 0x740b46:goto L740b46;
case 0x740b4d:goto L740b4d;
case 0x740b50:c.instructions+=1;goto B740b50;
case 0x740b52:goto L740b52;
case 0x740b53:c.instructions+=1;goto B740b53;
case 0x740b58:goto L740b58;
case 0x740b5b:c.instructions+=3;goto B740b5b;
case 0x740b5e:c.instructions+=2;goto B740b5e;
case 0x740b61:c.instructions+=1;goto B740b61;
case 0x740b63:goto L740b63;
case 0x740b67:c.instructions+=3;goto B740b67;
case 0x740b6e:c.instructions+=2;goto B740b6e;
case 0x740b71:c.instructions+=1;goto B740b71;
case 0x740b73:goto L740b73;
case 0x740b76:c.instructions+=5;goto B740b76;
case 0x740b77:c.instructions+=4;goto B740b77;
case 0x740b7c:c.instructions+=3;goto B740b7c;
case 0x740b7d:c.instructions+=2;goto B740b7d;
case 0x740b80:c.instructions+=1;goto B740b80;
case 0x740b85:goto L740b85;
case 0x740b86:c.instructions+=1;goto B740b86;
case 0x740b8b:goto L740b8b;
case 0x740b8e:goto L740b8e;
case 0x740b91:c.instructions+=2;goto B740b91;
case 0x740b93:c.instructions+=1;goto B740b93;
case 0x740b95:goto L740b95;
case 0x740b98:c.instructions+=6;goto B740b98;
case 0x740b9b:c.instructions+=5;goto B740b9b;
case 0x740b9c:c.instructions+=4;goto B740b9c;
case 0x740b9d:c.instructions+=3;goto B740b9d;
case 0x740b9e:c.instructions+=2;goto B740b9e;
case 0x740b9f:c.instructions+=1;goto B740b9f;
case 0x740ba1:goto L740ba1;
case 0x740ba4:goto L740ba4;
case 0x740bab:c.instructions+=3;goto B740bab;
case 0x740bac:c.instructions+=2;goto B740bac;
case 0x740bad:c.instructions+=1;goto B740bad;
case 0x740bb2:goto L740bb2;
case 0x740bb8:c.instructions+=1;goto B740bb8;
case 0x740be0:goto L740be0;
case 0x740be3:c.instructions+=10;goto B740be3;
case 0x740be4:c.instructions+=9;goto B740be4;
case 0x740be5:c.instructions+=8;goto B740be5;
case 0x740be6:c.instructions+=7;goto B740be6;
case 0x740bea:c.instructions+=6;goto B740bea;
case 0x740bed:c.instructions+=5;goto B740bed;
case 0x740bee:c.instructions+=4;goto B740bee;
case 0x740bf0:c.instructions+=3;goto B740bf0;
case 0x740bf5:c.instructions+=2;goto B740bf5;
case 0x740bf6:c.instructions+=1;goto B740bf6;
case 0x740bfb:goto L740bfb;
case 0x740bfe:c.instructions+=2;goto B740bfe;
case 0x740bff:c.instructions+=1;goto B740bff;
case 0x740c04:goto L740c04;
case 0x740c08:c.instructions+=7;goto B740c08;
case 0x740c0c:c.instructions+=6;goto B740c0c;
case 0x740c0e:c.instructions+=5;goto B740c0e;
case 0x740c11:c.instructions+=4;goto B740c11;
case 0x740c14:c.instructions+=3;goto B740c14;
case 0x740c17:c.instructions+=2;goto B740c17;
case 0x740c1b:c.instructions+=1;goto B740c1b;
case 0x740c1d:goto L740c1d;
case 0x740c1f:c.instructions+=6;goto B740c1f;
case 0x740c21:c.instructions+=5;goto B740c21;
case 0x740c23:c.instructions+=4;goto B740c23;
case 0x740c28:c.instructions+=3;goto B740c28;
case 0x740c29:c.instructions+=2;goto B740c29;
case 0x740c2a:c.instructions+=1;goto B740c2a;
case 0x740c2f:goto L740c2f;
case 0x740c32:goto L740c32;
case 0x740c35:c.instructions+=2;goto B740c35;
case 0x740c36:c.instructions+=1;goto B740c36;
case 0x740c3b:goto L740c3b;
case 0x740c3e:c.instructions+=2;goto B740c3e;
case 0x740c40:c.instructions+=1;goto B740c40;
case 0x740c46:goto L740c46;
case 0x740c49:c.instructions+=3;goto B740c49;
case 0x740c4a:c.instructions+=2;goto B740c4a;
case 0x740c4b:c.instructions+=1;goto B740c4b;
case 0x740c50:goto L740c50;
case 0x740c53:c.instructions+=2;goto B740c53;
case 0x740c55:c.instructions+=1;goto B740c55;
case 0x740c5b:goto L740c5b;
case 0x740c61:c.instructions+=3;goto B740c61;
case 0x740c63:c.instructions+=2;goto B740c63;
case 0x740c67:c.instructions+=1;goto B740c67;
case 0x740c6d:goto L740c6d;
case 0x740c70:c.instructions+=2;goto B740c70;
case 0x740c72:c.instructions+=1;goto B740c72;
case 0x740c78:goto L740c78;
case 0x740c79:c.instructions+=1;goto B740c79;
case 0x740c7e:goto L740c7e;
case 0x740c81:c.instructions+=2;goto B740c81;
case 0x740c83:c.instructions+=1;goto B740c83;
case 0x740c85:goto L740c85;
case 0x740c87:c.instructions+=2;goto B740c87;
case 0x740c91:c.instructions+=1;goto B740c91;
case 0x740c93:goto L740c93;
case 0x740c95:c.instructions+=1;goto B740c95;
case 0x740c97:goto L740c97;
case 0x740c98:c.instructions+=2;goto B740c98;
case 0x740c99:c.instructions+=1;goto B740c99;
case 0x740c9e:goto L740c9e;
case 0x740ca1:goto L740ca1;
case 0x740ca4:c.instructions+=2;goto B740ca4;
case 0x740ca5:c.instructions+=1;goto B740ca5;
case 0x740caa:goto L740caa;
case 0x740cb0:c.instructions+=3;goto B740cb0;
case 0x740cb3:c.instructions+=2;goto B740cb3;
case 0x740cb5:c.instructions+=1;goto B740cb5;
case 0x740cb7:goto L740cb7;
case 0x740cb8:c.instructions+=2;goto B740cb8;
case 0x740cb9:c.instructions+=1;goto B740cb9;
case 0x740cbe:goto L740cbe;
case 0x740cc1:c.instructions+=2;goto B740cc1;
case 0x740cc3:c.instructions+=1;goto B740cc3;
case 0x740cc9:goto L740cc9;
case 0x740ccc:c.instructions+=2;goto B740ccc;
case 0x740cd2:c.instructions+=1;goto B740cd2;
case 0x740cd4:goto L740cd4;
case 0x740cd5:c.instructions+=1;goto B740cd5;
case 0x740cda:goto L740cda;
case 0x740cdd:c.instructions+=5;goto B740cdd;
case 0x740cdf:c.instructions+=4;goto B740cdf;
case 0x740ce1:c.instructions+=3;goto B740ce1;
case 0x740ce2:c.instructions+=2;goto B740ce2;
case 0x740ce6:c.instructions+=1;goto B740ce6;
case 0x740cec:goto L740cec;
case 0x740cef:c.instructions+=2;goto B740cef;
case 0x740cf2:c.instructions+=1;goto B740cf2;
case 0x740cf5:goto L740cf5;
case 0x740cf7:c.instructions+=3;goto B740cf7;
case 0x740cf8:c.instructions+=2;goto B740cf8;
case 0x740cfa:c.instructions+=1;goto B740cfa;
case 0x740cfc:goto L740cfc;
case 0x740cfe:c.instructions+=3;goto B740cfe;
case 0x740d00:c.instructions+=2;goto B740d00;
case 0x740d02:c.instructions+=1;goto B740d02;
case 0x740d04:goto L740d04;
case 0x740d06:c.instructions+=16;goto B740d06;
case 0x740d08:c.instructions+=15;goto B740d08;
case 0x740d0a:c.instructions+=14;goto B740d0a;
case 0x740d0c:c.instructions+=13;goto B740d0c;
case 0x740d0f:c.instructions+=12;goto B740d0f;
case 0x740d12:c.instructions+=11;goto B740d12;
case 0x740d15:c.instructions+=10;goto B740d15;
case 0x740d18:c.instructions+=9;goto B740d18;
case 0x740d1b:c.instructions+=8;goto B740d1b;
case 0x740d1e:c.instructions+=7;goto B740d1e;
case 0x740d21:c.instructions+=6;goto B740d21;
case 0x740d24:c.instructions+=5;goto B740d24;
case 0x740d27:c.instructions+=4;goto B740d27;
case 0x740d2a:c.instructions+=3;goto B740d2a;
case 0x740d2d:c.instructions+=2;goto B740d2d;
case 0x740d30:c.instructions+=1;goto B740d30;
case 0x740d33:goto L740d33;
case 0x740d35:c.instructions+=3;goto B740d35;
case 0x740d36:c.instructions+=2;goto B740d36;
case 0x740d38:c.instructions+=1;goto B740d38;
case 0x740d3a:goto L740d3a;
case 0x740d3c:c.instructions+=2;goto B740d3c;
case 0x740d3d:c.instructions+=1;goto B740d3d;
case 0x740d3f:goto L740d3f;
case 0x740d42:c.instructions+=5;goto B740d42;
case 0x740d45:c.instructions+=4;goto B740d45;
case 0x740d47:c.instructions+=3;goto B740d47;
case 0x740d49:c.instructions+=2;goto B740d49;
case 0x740d4b:c.instructions+=1;goto B740d4b;
case 0x740d4e:goto L740d4e;
case 0x740d50:goto L740d50;
case 0x740d52:c.instructions+=1;goto B740d52;
case 0x740d55:goto L740d55;
case 0x740d57:goto L740d57;
case 0x740d5b:c.instructions+=4;goto B740d5b;
case 0x740d5e:c.instructions+=3;goto B740d5e;
case 0x740d61:c.instructions+=2;goto B740d61;
case 0x740d63:c.instructions+=1;goto B740d63;
case 0x740d65:goto L740d65;
case 0x740d66:c.instructions+=2;goto B740d66;
case 0x740d67:c.instructions+=1;goto B740d67;
case 0x740d6c:goto L740d6c;
case 0x740d6f:goto L740d6f;
case 0x740d73:c.instructions+=4;goto B740d73;
case 0x740d78:c.instructions+=3;goto B740d78;
case 0x740d7a:c.instructions+=2;goto B740d7a;
case 0x740d7e:c.instructions+=1;goto B740d7e;
case 0x740d80:goto L740d80;
case 0x740d82:c.instructions+=5;goto B740d82;
case 0x740d88:c.instructions+=4;goto B740d88;
case 0x740d8e:c.instructions+=3;goto B740d8e;
case 0x740d8f:c.instructions+=2;goto B740d8f;
case 0x740d95:c.instructions+=1;goto B740d95;
case 0x740d9a:goto L740d9a;
case 0x740d9d:goto L740d9d;
case 0x740da0:c.instructions+=2;goto B740da0;
case 0x740da2:c.instructions+=1;goto B740da2;
case 0x740da4:goto L740da4;
case 0x740da7:c.instructions+=5;goto B740da7;
case 0x740dab:c.instructions+=4;goto B740dab;
case 0x740dac:c.instructions+=3;goto B740dac;
case 0x740dad:c.instructions+=2;goto B740dad;
case 0x740dae:c.instructions+=1;goto B740dae;
case 0x740db0:goto L740db0;
case 0x740db3:goto L740db3;
case 0x740db4:c.instructions+=5;goto B740db4;
case 0x740db5:c.instructions+=4;goto B740db5;
case 0x740db6:c.instructions+=3;goto B740db6;
case 0x740db7:c.instructions+=2;goto B740db7;
case 0x740dba:c.instructions+=1;goto B740dba;
case 0x740dc0:goto L740dc0;
case 0x740dc3:c.instructions+=12;goto B740dc3;
case 0x740dc8:c.instructions+=11;goto B740dc8;
case 0x740dc9:c.instructions+=10;goto B740dc9;
case 0x740dcd:c.instructions+=9;goto B740dcd;
case 0x740dd0:c.instructions+=8;goto B740dd0;
case 0x740dd5:c.instructions+=7;goto B740dd5;
case 0x740dd9:c.instructions+=6;goto B740dd9;
case 0x740ddb:c.instructions+=5;goto B740ddb;
case 0x740ddf:c.instructions+=4;goto B740ddf;
case 0x740de0:c.instructions+=3;goto B740de0;
case 0x740de5:c.instructions+=2;goto B740de5;
case 0x740de6:c.instructions+=1;goto B740de6;
case 0x740deb:goto L740deb;
case 0x740dee:c.instructions+=2;goto B740dee;
case 0x740def:c.instructions+=1;goto B740def;
case 0x740df4:goto L740df4;
case 0x740df6:c.instructions+=3;goto B740df6;
case 0x740df9:c.instructions+=2;goto B740df9;
case 0x740dfe:c.instructions+=1;goto B740dfe;
case 0x740e00:goto L740e00;
case 0x740e04:c.instructions+=5;goto B740e04;
case 0x740e05:c.instructions+=4;goto B740e05;
case 0x740e09:c.instructions+=3;goto B740e09;
case 0x740e0a:c.instructions+=2;goto B740e0a;
case 0x740e0b:c.instructions+=1;goto B740e0b;
case 0x740e10:goto L740e10;
case 0x740e13:goto L740e13;
case 0x740e17:c.instructions+=2;goto B740e17;
case 0x740e18:c.instructions+=1;goto B740e18;
case 0x740e1d:goto L740e1d;
case 0x740e20:c.instructions+=1;goto B740e20;
case 0x740e30:goto L740e30;
case 0x740e31:c.instructions+=3;goto B740e31;
case 0x740e35:c.instructions+=2;goto B740e35;
case 0x740e37:c.instructions+=1;goto B740e37;
case 0x740e39:goto L740e39;
case 0x740e3b:c.instructions+=2;goto B740e3b;
case 0x740e3c:c.instructions+=1;goto B740e3c;
case 0x740e3d:goto L740e3d;
case 0x740e41:c.instructions+=9;goto B740e41;
case 0x740e45:c.instructions+=8;goto B740e45;
case 0x740e48:c.instructions+=7;goto B740e48;
case 0x740e49:c.instructions+=6;goto B740e49;
case 0x740e4b:c.instructions+=5;goto B740e4b;
case 0x740e4c:c.instructions+=4;goto B740e4c;
case 0x740e4d:c.instructions+=3;goto B740e4d;
case 0x740e4e:c.instructions+=2;goto B740e4e;
case 0x740e55:c.instructions+=1;goto B740e55;
case 0x740e5a:goto L740e5a;
case 0x740e5d:c.instructions+=4;goto B740e5d;
case 0x740e5f:c.instructions+=3;goto B740e5f;
case 0x740e62:c.instructions+=2;goto B740e62;
case 0x740e69:c.instructions+=1;goto B740e69;
case 0x740e6b:goto L740e6b;
case 0x740e6c:c.instructions+=1;goto B740e6c;
case 0x740e6f:goto L740e6f;
case 0x740e72:c.instructions+=4;goto B740e72;
case 0x740e74:c.instructions+=3;goto B740e74;
case 0x740e76:c.instructions+=2;goto B740e76;
case 0x740e77:c.instructions+=1;goto B740e77;
case 0x740e78:goto L740e78;
case 0x740e79:c.instructions+=4;goto B740e79;
case 0x740e7b:c.instructions+=3;goto B740e7b;
case 0x740e7d:c.instructions+=2;goto B740e7d;
case 0x740e7f:c.instructions+=1;goto B740e7f;
case 0x740e84:goto L740e84;
case 0x740e86:c.instructions+=3;goto B740e86;
case 0x740e88:c.instructions+=2;goto B740e88;
case 0x740e89:c.instructions+=1;goto B740e89;
case 0x740e8e:goto L740e8e;
case 0x740e91:c.instructions+=5;goto B740e91;
case 0x740e92:c.instructions+=4;goto B740e92;
case 0x740e97:c.instructions+=3;goto B740e97;
case 0x740e98:c.instructions+=2;goto B740e98;
case 0x740e9e:c.instructions+=1;goto B740e9e;
case 0x740ea3:goto L740ea3;
case 0x740ea6:c.instructions+=4;goto B740ea6;
case 0x740ea7:c.instructions+=3;goto B740ea7;
case 0x740eac:c.instructions+=2;goto B740eac;
case 0x740ead:c.instructions+=1;goto B740ead;
case 0x740eb2:goto L740eb2;
case 0x740eb5:c.instructions+=4;goto B740eb5;
case 0x740eb6:c.instructions+=3;goto B740eb6;
case 0x740ebb:c.instructions+=2;goto B740ebb;
case 0x740ebc:c.instructions+=1;goto B740ebc;
case 0x740ec1:goto L740ec1;
case 0x740ec4:c.instructions+=16;goto B740ec4;
case 0x740ec6:c.instructions+=15;goto B740ec6;
case 0x740ec8:c.instructions+=14;goto B740ec8;
case 0x740ecd:c.instructions+=13;goto B740ecd;
case 0x740ecf:c.instructions+=12;goto B740ecf;
case 0x740ed4:c.instructions+=11;goto B740ed4;
case 0x740ed9:c.instructions+=10;goto B740ed9;
case 0x740eda:c.instructions+=9;goto B740eda;
case 0x740ee4:c.instructions+=8;goto B740ee4;
case 0x740eee:c.instructions+=7;goto B740eee;
case 0x740ef4:c.instructions+=6;goto B740ef4;
case 0x740efe:c.instructions+=5;goto B740efe;
case 0x740f04:c.instructions+=4;goto B740f04;
case 0x740f0e:c.instructions+=3;goto B740f0e;
case 0x740f14:c.instructions+=2;goto B740f14;
case 0x740f1e:c.instructions+=1;goto B740f1e;
case 0x740f23:goto L740f23;
case 0x740f26:c.instructions+=3;goto B740f26;
case 0x740f29:c.instructions+=2;goto B740f29;
case 0x740f2a:c.instructions+=1;goto B740f2a;
case 0x740f2f:goto L740f2f;
case 0x740f32:c.instructions+=4;goto B740f32;
case 0x740f33:c.instructions+=3;goto B740f33;
case 0x740f35:c.instructions+=2;goto B740f35;
case 0x740f36:c.instructions+=1;goto B740f36;
case 0x740f40:goto L740f40;
case 0x740f41:c.instructions+=4;goto B740f41;
case 0x740f42:c.instructions+=3;goto B740f42;
case 0x740f46:c.instructions+=2;goto B740f46;
case 0x740f48:c.instructions+=1;goto B740f48;
case 0x740f4a:goto L740f4a;
case 0x740f4e:c.instructions+=2;goto B740f4e;
case 0x740f50:c.instructions+=1;goto B740f50;
case 0x740f52:goto L740f52;
case 0x740f57:c.instructions+=1;goto B740f57;
case 0x740f59:goto L740f59;
case 0x740f5b:c.instructions+=3;goto B740f5b;
case 0x740f5e:c.instructions+=2;goto B740f5e;
case 0x740f60:c.instructions+=1;goto B740f60;
case 0x740f62:goto L740f62;
case 0x740f63:c.instructions+=3;goto B740f63;
case 0x740f68:c.instructions+=2;goto B740f68;
case 0x740f6a:c.instructions+=1;goto B740f6a;
case 0x740f6c:goto L740f6c;
case 0x740f6e:goto L740f6e;
case 0x740f70:c.instructions+=2;goto B740f70;
case 0x740f73:c.instructions+=1;goto B740f73;
case 0x740f74:goto L740f74;
case 0x740f78:c.instructions+=5;goto B740f78;
case 0x740f7c:c.instructions+=4;goto B740f7c;
case 0x740f7d:c.instructions+=3;goto B740f7d;
case 0x740f7e:c.instructions+=2;goto B740f7e;
case 0x740f7f:c.instructions+=1;goto B740f7f;
case 0x740f84:goto L740f84;
case 0x740f87:c.instructions+=3;goto B740f87;
case 0x740f88:c.instructions+=2;goto B740f88;
case 0x740f89:c.instructions+=1;goto B740f89;
case 0x740f8a:goto L740f8a;
case 0x740f8b:c.instructions+=3;goto B740f8b;
case 0x740f8d:c.instructions+=2;goto B740f8d;
case 0x740f8e:c.instructions+=1;goto B740f8e;
case 0x740f90:goto L740f90;
case 0x740f91:c.instructions+=3;goto B740f91;
case 0x740f95:c.instructions+=2;goto B740f95;
case 0x740f97:c.instructions+=1;goto B740f97;
case 0x740f99:goto L740f99;
case 0x740f9c:c.instructions+=2;goto B740f9c;
case 0x740f9e:c.instructions+=1;goto B740f9e;
case 0x740fa0:goto L740fa0;
case 0x740fa1:c.instructions+=1;goto B740fa1;
case 0x740fa6:goto L740fa6;
case 0x740faa:c.instructions+=16;goto B740faa;
case 0x740fae:c.instructions+=15;goto B740fae;
case 0x740fb4:c.instructions+=14;goto B740fb4;
case 0x740fb5:c.instructions+=13;goto B740fb5;
case 0x740fba:c.instructions+=12;goto B740fba;
case 0x740fbb:c.instructions+=11;goto B740fbb;
case 0x740fbf:c.instructions+=10;goto B740fbf;
case 0x740fc0:c.instructions+=9;goto B740fc0;
case 0x740fc4:c.instructions+=8;goto B740fc4;
case 0x740fc5:c.instructions+=7;goto B740fc5;
case 0x740fc8:c.instructions+=6;goto B740fc8;
case 0x740fc9:c.instructions+=5;goto B740fc9;
case 0x740fca:c.instructions+=4;goto B740fca;
case 0x740fcb:c.instructions+=3;goto B740fcb;
case 0x740fd2:c.instructions+=2;goto B740fd2;
case 0x740fd9:c.instructions+=1;goto B740fd9;
case 0x740fde:goto L740fde;
case 0x740fe1:c.instructions+=2;goto B740fe1;
case 0x740fe2:c.instructions+=1;goto B740fe2;
case 0x740fe3:goto L740fe3;
case 0x740fe8:c.instructions+=2;goto B740fe8;
case 0x740fe9:c.instructions+=1;goto B740fe9;
case 0x740ff0:goto L740ff0;
case 0x740ff1:c.instructions+=3;goto B740ff1;
case 0x740ff3:c.instructions+=2;goto B740ff3;
case 0x740ff5:c.instructions+=1;goto B740ff5;
case 0x740ff7:goto L740ff7;
case 0x740ffc:goto L740ffc;
default:missing_instruction(c.pc);}
B740000:L740000:{c.instructions+=3;NFSU2_TR(0x740000);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740001:{NFSU2_TR(0x740001);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740002:{NFSU2_TR(0x740002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740007ull));
TAIL_STATIC(0x73f570u,73f);
}
B740007:L740007:{c.instructions+=4;NFSU2_TR(0x740007);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74000d:{NFSU2_TR(0x74000d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740010:{NFSU2_TR(0x740010);
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
B740012:{NFSU2_TR(0x740012);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L740065;}}
}
B740014:L740014:{c.instructions+=2;NFSU2_TR(0x740014);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740015:{NFSU2_TR(0x740015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74001aull));
TAIL_STATIC(0x73ff10u,73f);
}
B74001a:L74001a:{c.instructions+=3;NFSU2_TR(0x74001a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74001d:{NFSU2_TR(0x74001d);
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
B74001f:{NFSU2_TR(0x74001f);
if(r1(R+518)){{goto L740065;}}
}
B740021:L740021:{c.instructions+=3;NFSU2_TR(0x740021);
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
B740023:{NFSU2_TR(0x740023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740024:{NFSU2_TR(0x740024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740025:L740025:{c.instructions+=2;NFSU2_TR(0x740025);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74002a:{NFSU2_TR(0x74002a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740048;}}
}
B74002c:L74002c:{c.instructions+=4;NFSU2_TR(0x74002c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740030:{NFSU2_TR(0x740030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740031:{NFSU2_TR(0x740031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740032:{NFSU2_TR(0x740032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740037ull));
TAIL_STATIC(0x73f570u,73f);
}
B740037:L740037:{c.instructions+=4;NFSU2_TR(0x740037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74003d:{NFSU2_TR(0x74003d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740040:{NFSU2_TR(0x740040);
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
B740042:{NFSU2_TR(0x740042);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L740065;}}
}
B740044:L740044:{c.instructions+=3;NFSU2_TR(0x740044);
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
B740046:{NFSU2_TR(0x740046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740047:{NFSU2_TR(0x740047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740048:L740048:{c.instructions+=2;NFSU2_TR(0x740048);
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
B74004b:{NFSU2_TR(0x74004b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740065;}}
}
B74004d:L74004d:{c.instructions+=4;NFSU2_TR(0x74004d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740051:{NFSU2_TR(0x740051);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740052:{NFSU2_TR(0x740052);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740053:{NFSU2_TR(0x740053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740058ull));
TAIL_STATIC(0x73f570u,73f);
}
B740058:L740058:{c.instructions+=4;NFSU2_TR(0x740058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74005e:{NFSU2_TR(0x74005e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740061:{NFSU2_TR(0x740061);
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
B740063:{NFSU2_TR(0x740063);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740021u);}goto L740021;}}
}
B740065:L740065:{c.instructions+=3;NFSU2_TR(0x740065);
w4(R+0,u32(0x1ull));
}
B74006a:{NFSU2_TR(0x74006a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74006b:{NFSU2_TR(0x74006b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740070:L740070:{c.instructions+=15;NFSU2_TR(0x740070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B740073:{NFSU2_TR(0x740073);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740074:{NFSU2_TR(0x740074);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B740078:{NFSU2_TR(0x740078);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74007b:{NFSU2_TR(0x74007b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74007c:{NFSU2_TR(0x74007c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74007d:{NFSU2_TR(0x74007d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74007e:{NFSU2_TR(0x74007e);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B740081:{NFSU2_TR(0x740081);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B740083:{NFSU2_TR(0x740083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740084:{NFSU2_TR(0x740084);
__builtin_memmove((R+20),(R+24),4);
}
B740086:{NFSU2_TR(0x740086);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74008a:{NFSU2_TR(0x74008a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74008e:{NFSU2_TR(0x74008e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740092:{NFSU2_TR(0x740092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740097ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B740097:L740097:{c.instructions+=3;NFSU2_TR(0x740097);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74009a:{NFSU2_TR(0x74009a);
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
B74009c:{NFSU2_TR(0x74009c);
if(r1(R+518)){{goto L7401d9;}}
}
B7400a2:L7400a2:{c.instructions+=3;NFSU2_TR(0x7400a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7400a5:{NFSU2_TR(0x7400a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7400a6:{NFSU2_TR(0x7400a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7400abull));
TAIL_STATIC(0x74d3b0u,74d);
}
B7400ab:L7400ab:{c.instructions+=2;NFSU2_TR(0x7400ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7400ac:{NFSU2_TR(0x7400ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7400b1ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B7400b1:L7400b1:{c.instructions+=4;NFSU2_TR(0x7400b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7400b4:{NFSU2_TR(0x7400b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7400b6:{NFSU2_TR(0x7400b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7400ba:{NFSU2_TR(0x7400ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7401d9;}}
}
B7400c0:L7400c0:{c.instructions+=4;NFSU2_TR(0x7400c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7400c3:{NFSU2_TR(0x7400c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7400c4:{NFSU2_TR(0x7400c4);
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
B7400c6:{NFSU2_TR(0x7400c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7400cbull));
TAIL_STATIC(0x74d3b0u,74d);
}
B7400cb:L7400cb:{c.instructions+=3;NFSU2_TR(0x7400cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7400ce:{NFSU2_TR(0x7400ce);
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
B7400d0:{NFSU2_TR(0x7400d0);
if(r1(R+518)){{goto L7400fc;}}
}
B7400d2:L7400d2:{c.instructions+=5;NFSU2_TR(0x7400d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7400d6:{NFSU2_TR(0x7400d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7400d9:{NFSU2_TR(0x7400d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7400da:{NFSU2_TR(0x7400da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7400db:{NFSU2_TR(0x7400db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7400e0ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B7400e0:L7400e0:{c.instructions+=3;NFSU2_TR(0x7400e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7400e3:{NFSU2_TR(0x7400e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7400e4:{NFSU2_TR(0x7400e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7400e9ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B7400e9:L7400e9:{c.instructions+=3;NFSU2_TR(0x7400e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7400ec:{NFSU2_TR(0x7400ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7400ee:{NFSU2_TR(0x7400ee);
if(r1(R+518)){{goto L7400fc;}}
}
B7400f0:L7400f0:{c.instructions+=3;NFSU2_TR(0x7400f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7400f6:{NFSU2_TR(0x7400f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7400f8:{NFSU2_TR(0x7400f8);
if(r1(R+518)){{goto L7400fc;}}
}
B7400fa:L7400fa:{c.instructions+=1;NFSU2_TR(0x7400fa);
__builtin_memmove((R+24),(R+0),4);
}
B7400fc:L7400fc:{c.instructions+=3;NFSU2_TR(0x7400fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740100:{NFSU2_TR(0x740100);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740102:{NFSU2_TR(0x740102);
if(r1(R+518)){{goto L74013c;}}
}
B740104:L740104:{c.instructions+=4;NFSU2_TR(0x740104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B740106:{NFSU2_TR(0x740106);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74010c:{NFSU2_TR(0x74010c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xc0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740111:{NFSU2_TR(0x740111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740117;}}
}
B740113:L740113:{c.instructions+=2;NFSU2_TR(0x740113);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B740115:{NFSU2_TR(0x740115);
{goto L74011c;}
}
B740117:L740117:{c.instructions+=1;NFSU2_TR(0x740117);
w4(R+4,u32(0x1ull));
}
B74011c:L74011c:{c.instructions+=5;NFSU2_TR(0x74011c);
__builtin_memmove((R+8),(R+0),4);
}
B74011e:{NFSU2_TR(0x74011e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B740121:{NFSU2_TR(0x740121);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B740124:{NFSU2_TR(0x740124);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740128:{NFSU2_TR(0x740128);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740133;}}
}
B74012a:L74012a:{c.instructions+=2;NFSU2_TR(0x74012a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74012d:{NFSU2_TR(0x74012d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740133;}}
}
B74012f:L74012f:{c.instructions+=2;NFSU2_TR(0x74012f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B740131:{NFSU2_TR(0x740131);
{goto L740138;}
}
B740133:L740133:{c.instructions+=1;NFSU2_TR(0x740133);
w4(R+0,u32(0x1ull));
}
B740138:L740138:{c.instructions+=2;NFSU2_TR(0x740138);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B74013a:{NFSU2_TR(0x74013a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740166;}}
}
B74013c:L74013c:{c.instructions+=6;NFSU2_TR(0x74013c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740140:{NFSU2_TR(0x740140);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B740144:{NFSU2_TR(0x740144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740145:{NFSU2_TR(0x740145);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740146:{NFSU2_TR(0x740146);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740147:{NFSU2_TR(0x740147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74014cull));
TAIL_STATIC(0x73e880u,73e);
}
B74014c:L74014c:{c.instructions+=3;NFSU2_TR(0x74014c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74014f:{NFSU2_TR(0x74014f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740152:{NFSU2_TR(0x740152);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L740166;}}
}
B740154:L740154:{c.instructions+=3;NFSU2_TR(0x740154);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740158:{NFSU2_TR(0x740158);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74015c:{NFSU2_TR(0x74015c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L740166;}}
}
B74015e:L74015e:{c.instructions+=3;NFSU2_TR(0x74015e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740162:{NFSU2_TR(0x740162);
__builtin_memmove((R+28),(R+24),4);
}
B740164:{NFSU2_TR(0x740164);
__builtin_memmove((R+20),(R+0),4);
}
B740166:L740166:{c.instructions+=6;NFSU2_TR(0x740166);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74016a:{NFSU2_TR(0x74016a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74016e:{NFSU2_TR(0x74016e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74016f:{NFSU2_TR(0x74016f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B740171:{NFSU2_TR(0x740171);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740175:{NFSU2_TR(0x740175);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7400c0u);}goto L7400c0;}}
}
B74017b:L74017b:{c.instructions+=2;NFSU2_TR(0x74017b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74017d:{NFSU2_TR(0x74017d);
if(r1(R+518)){{goto L7401ce;}}
}
B74017f:L74017f:{c.instructions+=5;NFSU2_TR(0x74017f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740182:{NFSU2_TR(0x740182);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740183:{NFSU2_TR(0x740183);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740184:{NFSU2_TR(0x740184);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B740186:{NFSU2_TR(0x740186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74018bull));
TAIL_STATIC(0x73d8e0u,73d);
}
B74018b:L74018b:{c.instructions+=3;NFSU2_TR(0x74018b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74018e:{NFSU2_TR(0x74018e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740190:{NFSU2_TR(0x740190);
if(r1(R+518)){{goto L74019c;}}
}
B740192:L740192:{c.instructions+=3;NFSU2_TR(0x740192);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740195:{NFSU2_TR(0x740195);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740197:{NFSU2_TR(0x740197);
if(r1(R+518)){{goto L74019c;}}
}
B740199:L740199:{c.instructions+=1;NFSU2_TR(0x740199);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74019c:L74019c:{c.instructions+=4;NFSU2_TR(0x74019c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B74019e:{NFSU2_TR(0x74019e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7401a1:{NFSU2_TR(0x7401a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7401a4:{NFSU2_TR(0x7401a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7401c4;}}
}
B7401a6:L7401a6:{c.instructions+=3;NFSU2_TR(0x7401a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401a7:{NFSU2_TR(0x7401a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401a8:{NFSU2_TR(0x7401a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7401adull));
TAIL_STATIC(0x73d820u,73d);
}
B7401ad:L7401ad:{c.instructions+=4;NFSU2_TR(0x7401ad);
__builtin_memmove((R+24),(R+0),4);
}
B7401af:{NFSU2_TR(0x7401af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7401b2:{NFSU2_TR(0x7401b2);
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
B7401b4:{NFSU2_TR(0x7401b4);
if(r1(R+518)){{goto L7401c4;}}
}
B7401b6:L7401b6:{c.instructions+=3;NFSU2_TR(0x7401b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7401b9:{NFSU2_TR(0x7401b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401ba:{NFSU2_TR(0x7401ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7401bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7401bd:L7401bd:{c.instructions+=2;NFSU2_TR(0x7401bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401be:{NFSU2_TR(0x7401be);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7401c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7401c1:L7401c1:{c.instructions+=1;NFSU2_TR(0x7401c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7401c4:L7401c4:{c.instructions+=7;NFSU2_TR(0x7401c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7401c5:{NFSU2_TR(0x7401c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7401c6:{NFSU2_TR(0x7401c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7401c7:{NFSU2_TR(0x7401c7);
__builtin_memmove((R+0),(R+12),4);
}
B7401c9:{NFSU2_TR(0x7401c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7401ca:{NFSU2_TR(0x7401ca);
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
B7401cd:{NFSU2_TR(0x7401cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7401ce:L7401ce:{c.instructions+=7;NFSU2_TR(0x7401ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7401cf:{NFSU2_TR(0x7401cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7401d0:{NFSU2_TR(0x7401d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7401d1:{NFSU2_TR(0x7401d1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7401d4:{NFSU2_TR(0x7401d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7401d5:{NFSU2_TR(0x7401d5);
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
B7401d8:{NFSU2_TR(0x7401d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7401d9:L7401d9:{c.instructions+=7;NFSU2_TR(0x7401d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7401da:{NFSU2_TR(0x7401da);
__builtin_memmove((R+0),(R+24),4);
}
B7401dc:{NFSU2_TR(0x7401dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7401dd:{NFSU2_TR(0x7401dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7401de:{NFSU2_TR(0x7401de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7401df:{NFSU2_TR(0x7401df);
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
B7401e2:{NFSU2_TR(0x7401e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7401f0:L7401f0:{c.instructions+=6;NFSU2_TR(0x7401f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401f1:{NFSU2_TR(0x7401f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7401f5:{NFSU2_TR(0x7401f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401f7:{NFSU2_TR(0x7401f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401f9:{NFSU2_TR(0x7401f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7401fa:{NFSU2_TR(0x7401fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7401ffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740070u);}goto L740070;}
}
B7401ff:L7401ff:{c.instructions+=3;NFSU2_TR(0x7401ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B740202:{NFSU2_TR(0x740202);
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
B740204:{NFSU2_TR(0x740204);
if(r1(R+518)){{goto L740235;}}
}
B740206:L740206:{c.instructions+=4;NFSU2_TR(0x740206);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740208:{NFSU2_TR(0x740208);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74020a:{NFSU2_TR(0x74020a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74020b:{NFSU2_TR(0x74020b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740210ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740070u);}goto L740070;}
}
B740210:L740210:{c.instructions+=3;NFSU2_TR(0x740210);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B740213:{NFSU2_TR(0x740213);
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
B740215:{NFSU2_TR(0x740215);
if(r1(R+518)){{goto L740235;}}
}
B740217:L740217:{c.instructions+=4;NFSU2_TR(0x740217);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740219:{NFSU2_TR(0x740219);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74021b:{NFSU2_TR(0x74021b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74021c:{NFSU2_TR(0x74021c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740221ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740070u);}goto L740070;}
}
B740221:L740221:{c.instructions+=3;NFSU2_TR(0x740221);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B740224:{NFSU2_TR(0x740224);
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
B740226:{NFSU2_TR(0x740226);
if(r1(R+518)){{goto L740235;}}
}
B740228:L740228:{c.instructions+=4;NFSU2_TR(0x740228);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74022a:{NFSU2_TR(0x74022a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74022c:{NFSU2_TR(0x74022c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74022d:{NFSU2_TR(0x74022d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740232ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740070u);}goto L740070;}
}
B740232:L740232:{c.instructions+=1;NFSU2_TR(0x740232);
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
B740235:L740235:{c.instructions+=2;NFSU2_TR(0x740235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740236:{NFSU2_TR(0x740236);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740240:L740240:{c.instructions+=13;NFSU2_TR(0x740240);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740241:{NFSU2_TR(0x740241);
__builtin_memmove((R+20),(R+16),4);
}
B740243:{NFSU2_TR(0x740243);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B740246:{NFSU2_TR(0x740246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x234ull))));
}
B74024c:{NFSU2_TR(0x74024c);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B740251:{NFSU2_TR(0x740251);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740252:{NFSU2_TR(0x740252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B740255:{NFSU2_TR(0x740255);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740256:{NFSU2_TR(0x740256);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74025d:{NFSU2_TR(0x74025d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74025e:{NFSU2_TR(0x74025e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B740260:{NFSU2_TR(0x740260);
w4(R+4,u32(0x42ull));
}
B740265:{NFSU2_TR(0x740265);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74026c:L74026c:{c.instructions+=1;NFSU2_TR(0x74026c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74026e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74026cu);}goto L74026c;}
}
B74026e:L74026e:{c.instructions+=2;NFSU2_TR(0x74026e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B740272:{NFSU2_TR(0x740272);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74028c;}}
}
B740274:L740274:{c.instructions+=3;NFSU2_TR(0x740274);
w4(R+0,u32(0xffffff92ull));
}
B740279:{NFSU2_TR(0x740279);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740280:{NFSU2_TR(0x740280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740285ull));
TAIL_STATIC(0x76115eu,761);
}
B740285:L740285:{c.instructions+=6;NFSU2_TR(0x740285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740286:{NFSU2_TR(0x740286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740287:{NFSU2_TR(0x740287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740288:{NFSU2_TR(0x740288);
__builtin_memmove((R+16),(R+20),4);
}
B74028a:{NFSU2_TR(0x74028a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74028b:{NFSU2_TR(0x74028b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74028c:L74028c:{c.instructions+=4;NFSU2_TR(0x74028c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74028f:{NFSU2_TR(0x74028f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740292:{NFSU2_TR(0x740292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B740295:{NFSU2_TR(0x740295);
if(r1(R+518)){{goto L7402b5;}}
}
B740297:L740297:{c.instructions+=2;NFSU2_TR(0x740297);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74029d:{NFSU2_TR(0x74029d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740333;}}
}
B7402a3:L7402a3:{c.instructions+=6;NFSU2_TR(0x7402a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7402a6:{NFSU2_TR(0x7402a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7402a9:{NFSU2_TR(0x7402a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7402aa:{NFSU2_TR(0x7402aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7402ab:{NFSU2_TR(0x7402ab);
__builtin_memmove((R+0),(R+12),4);
}
B7402ad:{NFSU2_TR(0x7402ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7402b2ull));
TAIL_STATIC(0x73e620u,73e);
}
B7402b2:L7402b2:{c.instructions+=1;NFSU2_TR(0x7402b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7402b5:L7402b5:{c.instructions+=4;NFSU2_TR(0x7402b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7402b8:{NFSU2_TR(0x7402b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7402b9:{NFSU2_TR(0x7402b9);
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
B7402bb:{NFSU2_TR(0x7402bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7402c0ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B7402c0:L7402c0:{c.instructions+=3;NFSU2_TR(0x7402c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7402c3:{NFSU2_TR(0x7402c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7402c5:{NFSU2_TR(0x7402c5);
if(r1(R+518)){{goto L740389;}}
}
B7402cb:L7402cb:{c.instructions+=5;NFSU2_TR(0x7402cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7402ce:{NFSU2_TR(0x7402ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7402d1:{NFSU2_TR(0x7402d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7402d2:{NFSU2_TR(0x7402d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7402d3:{NFSU2_TR(0x7402d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7402d8ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B7402d8:L7402d8:{c.instructions+=3;NFSU2_TR(0x7402d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7402db:{NFSU2_TR(0x7402db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7402dd:{NFSU2_TR(0x7402dd);
if(r1(R+518)){{goto L740389;}}
}
B7402e3:L7402e3:{c.instructions+=3;NFSU2_TR(0x7402e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7402e9:{NFSU2_TR(0x7402e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7402eb:{NFSU2_TR(0x7402eb);
if(r1(R+518)){{goto L740389;}}
}
B7402f1:L7402f1:{c.instructions+=3;NFSU2_TR(0x7402f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7402f7:{NFSU2_TR(0x7402f7);
__builtin_memmove((R+24),(R+0),4);
}
B7402f9:{NFSU2_TR(0x7402f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74034b;}}
}
B7402fb:L7402fb:{c.instructions+=8;NFSU2_TR(0x7402fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7402fe:{NFSU2_TR(0x7402fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B740300:{NFSU2_TR(0x740300);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B740304:{NFSU2_TR(0x740304);
w4(R+4,u32(r2(R+0)));
}
B740307:{NFSU2_TR(0x740307);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B740309:{NFSU2_TR(0x740309);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74030b:{NFSU2_TR(0x74030b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74030f:{NFSU2_TR(0x74030f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74048b;}}
}
B740315:L740315:{c.instructions+=2;NFSU2_TR(0x740315);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740316:{NFSU2_TR(0x740316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74031bull));
TAIL_STATIC(0x73e570u,73e);
}
B74031b:L74031b:{c.instructions+=4;NFSU2_TR(0x74031b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74031e:{NFSU2_TR(0x74031e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B740320:{NFSU2_TR(0x740320);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740327:{NFSU2_TR(0x740327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74032cull));
TAIL_STATIC(0x76115eu,761);
}
B74032c:L74032c:{c.instructions+=6;NFSU2_TR(0x74032c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74032d:{NFSU2_TR(0x74032d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74032e:{NFSU2_TR(0x74032e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74032f:{NFSU2_TR(0x74032f);
__builtin_memmove((R+16),(R+20),4);
}
B740331:{NFSU2_TR(0x740331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B740332:{NFSU2_TR(0x740332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740333:L740333:{c.instructions+=3;NFSU2_TR(0x740333);
w4(R+0,u32(0xfffffffcull));
}
B740338:{NFSU2_TR(0x740338);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74033f:{NFSU2_TR(0x74033f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740344ull));
TAIL_STATIC(0x76115eu,761);
}
B740344:L740344:{c.instructions+=6;NFSU2_TR(0x740344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740345:{NFSU2_TR(0x740345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740346:{NFSU2_TR(0x740346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740347:{NFSU2_TR(0x740347);
__builtin_memmove((R+16),(R+20),4);
}
B740349:{NFSU2_TR(0x740349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74034a:{NFSU2_TR(0x74034a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74034b:L74034b:{c.instructions+=3;NFSU2_TR(0x74034b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74034d:{NFSU2_TR(0x74034d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B740353:{NFSU2_TR(0x740353);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74048b;}}
}
B740359:L740359:{c.instructions+=4;NFSU2_TR(0x740359);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74035c:{NFSU2_TR(0x74035c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B74035f:{NFSU2_TR(0x74035f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740361:{NFSU2_TR(0x740361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7403af;}}
}
B740363:L740363:{c.instructions+=2;NFSU2_TR(0x740363);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740369:{NFSU2_TR(0x740369);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74048d;}}
}
B74036f:L74036f:{c.instructions+=3;NFSU2_TR(0x74036f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740372:{NFSU2_TR(0x740372);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740374:{NFSU2_TR(0x740374);
if(r1(R+518)){{goto L7403bf;}}
}
B740376:L740376:{c.instructions+=2;NFSU2_TR(0x740376);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74037d:{NFSU2_TR(0x74037d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740382ull));
TAIL_STATIC(0x76115eu,761);
}
B740382:L740382:{c.instructions+=6;NFSU2_TR(0x740382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740383:{NFSU2_TR(0x740383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740384:{NFSU2_TR(0x740384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740385:{NFSU2_TR(0x740385);
__builtin_memmove((R+16),(R+20),4);
}
B740387:{NFSU2_TR(0x740387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B740388:{NFSU2_TR(0x740388);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740389:L740389:{c.instructions+=3;NFSU2_TR(0x740389);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74038a:{NFSU2_TR(0x74038a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74038b:{NFSU2_TR(0x74038b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740390ull));
TAIL_STATIC(0x73fff0u,73f);
}
B740390:L740390:{c.instructions+=3;NFSU2_TR(0x740390);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740393:{NFSU2_TR(0x740393);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740395:{NFSU2_TR(0x740395);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740359u);}goto L740359;}}
}
B740397:L740397:{c.instructions+=3;NFSU2_TR(0x740397);
w4(R+0,u32(0xfffffffbull));
}
B74039c:{NFSU2_TR(0x74039c);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7403a3:{NFSU2_TR(0x7403a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7403a8ull));
TAIL_STATIC(0x76115eu,761);
}
B7403a8:L7403a8:{c.instructions+=6;NFSU2_TR(0x7403a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7403a9:{NFSU2_TR(0x7403a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7403aa:{NFSU2_TR(0x7403aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7403ab:{NFSU2_TR(0x7403ab);
__builtin_memmove((R+16),(R+20),4);
}
B7403ad:{NFSU2_TR(0x7403ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7403ae:{NFSU2_TR(0x7403ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7403af:L7403af:{c.instructions+=3;NFSU2_TR(0x7403af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7403b2:{NFSU2_TR(0x7403b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7403b4:{NFSU2_TR(0x7403b4);
if(r1(R+518)){{goto L7403bf;}}
}
B7403b6:L7403b6:{c.instructions+=3;NFSU2_TR(0x7403b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7403b9:{NFSU2_TR(0x7403b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7403bc:{NFSU2_TR(0x7403bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7403bf:L7403bf:{c.instructions+=2;NFSU2_TR(0x7403bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7403c1:{NFSU2_TR(0x7403c1);
if(r1(R+518)){{goto L7403d3;}}
}
B7403c3:L7403c3:{c.instructions+=3;NFSU2_TR(0x7403c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B7403c5:{NFSU2_TR(0x7403c5);
w4(R+4,u32(0x42ull));
}
B7403ca:{NFSU2_TR(0x7403ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7403d1:L7403d1:{c.instructions+=1;NFSU2_TR(0x7403d1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7403d3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7403d1u);}goto L7403d1;}
}
B7403d3:L7403d3:{c.instructions+=3;NFSU2_TR(0x7403d3);
w4(R+4,u32(0x42ull));
}
B7403d8:{NFSU2_TR(0x7403d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7403df:{NFSU2_TR(0x7403df);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7403e3:L7403e3:{c.instructions+=1;NFSU2_TR(0x7403e3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7403e5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7403e3u);}goto L7403e3;}
}
B7403e5:L7403e5:{c.instructions+=6;NFSU2_TR(0x7403e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7403e8:{NFSU2_TR(0x7403e8);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7403ea:{NFSU2_TR(0x7403ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7403eb:{NFSU2_TR(0x7403eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7403ef:{NFSU2_TR(0x7403ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7403f0:{NFSU2_TR(0x7403f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7403f5ull));
TAIL_STATIC(0x75c840u,75c);
}
B7403f5:L7403f5:{c.instructions+=5;NFSU2_TR(0x7403f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7403f8:{NFSU2_TR(0x7403f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7403fb:{NFSU2_TR(0x7403fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740400:{NFSU2_TR(0x740400);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740407:{NFSU2_TR(0x740407);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740414;}}
}
B740409:L740409:{c.instructions+=1;NFSU2_TR(0x740409);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
w4(U+4,u32(0x900000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740414:L740414:{c.instructions+=4;NFSU2_TR(0x740414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B74041a:{NFSU2_TR(0x74041a);
__builtin_memmove((R+28),(R+16),4);
}
B74041c:{NFSU2_TR(0x74041c);
w4(R+4,u32(0x42ull));
}
B740421:{NFSU2_TR(0x740421);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B740428:L740428:{c.instructions+=1;NFSU2_TR(0x740428);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74042a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740428u);}goto L740428;}
}
B74042a:L74042a:{c.instructions+=5;NFSU2_TR(0x74042a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B740430:{NFSU2_TR(0x740430);
__builtin_memmove((R+28),(R+16),4);
}
B740432:{NFSU2_TR(0x740432);
w4(R+4,u32(0x42ull));
}
B740437:{NFSU2_TR(0x740437);
u8 U[4];
w4(U+0,u32(u32(u32(0x340ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74043e:{NFSU2_TR(0x74043e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74043f:L74043f:{c.instructions+=1;NFSU2_TR(0x74043f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L740441;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74043fu);}goto L74043f;}
}
B740441:L740441:{c.instructions+=1;NFSU2_TR(0x740441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740446ull));
TAIL_STATIC(0x73e7c0u,73e);
}
B740446:L740446:{c.instructions+=4;NFSU2_TR(0x740446);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B740448:{NFSU2_TR(0x740448);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x214ull))));
}
B74044e:{NFSU2_TR(0x74044e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740450:{NFSU2_TR(0x740450);
if(r1(R+518)){{goto L74048b;}}
}
B740452:L740452:{c.instructions+=2;NFSU2_TR(0x740452);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B740459:{NFSU2_TR(0x740459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74048b;}}
}
B74045b:L74045b:{c.instructions+=11;NFSU2_TR(0x74045b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B74045f:{NFSU2_TR(0x74045f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B740463:{NFSU2_TR(0x740463);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740464:{NFSU2_TR(0x740464);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B740468:{NFSU2_TR(0x740468);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74046c:{NFSU2_TR(0x74046c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740470:{NFSU2_TR(0x740470);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740473:{NFSU2_TR(0x740473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740474:{NFSU2_TR(0x740474);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740475:{NFSU2_TR(0x740475);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x61646475ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74047d:{NFSU2_TR(0x74047d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740482ull));
TAIL_STATIC(0x73e680u,73e);
}
B740482:L740482:{c.instructions+=2;NFSU2_TR(0x740482);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740483:{NFSU2_TR(0x740483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740488ull));
TAIL_STATIC(0x73e570u,73e);
}
B740488:L740488:{c.instructions+=1;NFSU2_TR(0x740488);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74048b:L74048b:{c.instructions+=1;NFSU2_TR(0x74048b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74048d:L74048d:{c.instructions+=2;NFSU2_TR(0x74048d);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740494:{NFSU2_TR(0x740494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740499ull));
TAIL_STATIC(0x76115eu,761);
}
B740499:L740499:{c.instructions+=6;NFSU2_TR(0x740499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74049a:{NFSU2_TR(0x74049a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74049b:{NFSU2_TR(0x74049b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74049c:{NFSU2_TR(0x74049c);
__builtin_memmove((R+16),(R+20),4);
}
B74049e:{NFSU2_TR(0x74049e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74049f:{NFSU2_TR(0x74049f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7404a0:L7404a0:{c.instructions+=5;NFSU2_TR(0x7404a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7404a4:{NFSU2_TR(0x7404a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7404a5:{NFSU2_TR(0x7404a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7404ab:{NFSU2_TR(0x7404ab);
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
B7404ad:{NFSU2_TR(0x7404ad);
if(r1(R+518)){{goto L74054f;}}
}
B7404b3:L7404b3:{c.instructions+=3;NFSU2_TR(0x7404b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7404b7:{NFSU2_TR(0x7404b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70676574ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7404bc:{NFSU2_TR(0x7404bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7404df;}}
}
B7404be:L7404be:{c.instructions+=4;NFSU2_TR(0x7404be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7404c2:{NFSU2_TR(0x7404c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7404c5:{NFSU2_TR(0x7404c5);
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
B7404c7:{NFSU2_TR(0x7404c7);
if(r1(R+518)){{goto L74054f;}}
}
B7404cd:L7404cd:{c.instructions+=7;NFSU2_TR(0x7404cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7404d0:{NFSU2_TR(0x7404d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7404d1:{NFSU2_TR(0x7404d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7404d5:{NFSU2_TR(0x7404d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7404d6:{NFSU2_TR(0x7404d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7404d7:{NFSU2_TR(0x7404d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7404d8:{NFSU2_TR(0x7404d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7404daull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7404da:L7404da:{c.instructions+=3;NFSU2_TR(0x7404da);
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
B7404dd:{NFSU2_TR(0x7404dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7404de:{NFSU2_TR(0x7404de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7404df:L7404df:{c.instructions+=2;NFSU2_TR(0x7404df);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x67696e76ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x67696e76ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x67696e76ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7404e4:{NFSU2_TR(0x7404e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74054f;}}
}
B7404e6:L7404e6:{c.instructions+=6;NFSU2_TR(0x7404e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7404e7:{NFSU2_TR(0x7404e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7404eb:{NFSU2_TR(0x7404eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7404ec:{NFSU2_TR(0x7404ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7404f0:{NFSU2_TR(0x7404f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7404f6:{NFSU2_TR(0x7404f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740551;}}
}
B7404f8:L7404f8:{c.instructions+=2;NFSU2_TR(0x7404f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7404fa:{NFSU2_TR(0x7404fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B740504:L740504:{c.instructions+=3;NFSU2_TR(0x740504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740507:{NFSU2_TR(0x740507);
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
B740509:{NFSU2_TR(0x740509);
if(r1(R+518)){{goto L740531;}}
}
B74050b:L74050b:{c.instructions+=6;NFSU2_TR(0x74050b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74050e:{NFSU2_TR(0x74050e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74050f:{NFSU2_TR(0x74050f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740510:{NFSU2_TR(0x740510);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740511:{NFSU2_TR(0x740511);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740512:{NFSU2_TR(0x740512);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740514ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B740514:L740514:{c.instructions+=3;NFSU2_TR(0x740514);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B740517:{NFSU2_TR(0x740517);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74051d:{NFSU2_TR(0x74051d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740531;}}
}
B74051f:L74051f:{c.instructions+=7;NFSU2_TR(0x74051f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B740521:{NFSU2_TR(0x740521);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740523:{NFSU2_TR(0x740523);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740525:{NFSU2_TR(0x740525);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740527:{NFSU2_TR(0x740527);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740528:{NFSU2_TR(0x740528);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740529:{NFSU2_TR(0x740529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74052eull));
TAIL_STATIC(0x73fb50u,73f);
}
B74052e:L74052e:{c.instructions+=1;NFSU2_TR(0x74052e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B740531:L740531:{c.instructions+=4;NFSU2_TR(0x740531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740534:{NFSU2_TR(0x740534);
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
B740536:{NFSU2_TR(0x740536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74053d:{NFSU2_TR(0x74053d);
if(r1(R+518)){{goto L74054d;}}
}
B74053f:L74053f:{c.instructions+=6;NFSU2_TR(0x74053f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740542:{NFSU2_TR(0x740542);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740543:{NFSU2_TR(0x740543);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740545:{NFSU2_TR(0x740545);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740547:{NFSU2_TR(0x740547);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740548:{NFSU2_TR(0x740548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74054aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74054a:L74054a:{c.instructions+=1;NFSU2_TR(0x74054a);
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
B74054d:L74054d:{c.instructions+=2;NFSU2_TR(0x74054d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74054e:{NFSU2_TR(0x74054e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74054f:L74054f:{c.instructions+=2;NFSU2_TR(0x74054f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740550:{NFSU2_TR(0x740550);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740551:L740551:{c.instructions+=2;NFSU2_TR(0x740551);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740554:{NFSU2_TR(0x740554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740574;}}
}
B740556:L740556:{c.instructions+=9;NFSU2_TR(0x740556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740559:{NFSU2_TR(0x740559);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x927c0ull))));
}
B74055e:{NFSU2_TR(0x74055e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740561:{NFSU2_TR(0x740561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B740563:{NFSU2_TR(0x740563);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740565:{NFSU2_TR(0x740565);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740566:{NFSU2_TR(0x740566);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+8),(U+0),4);
}
B740569:{NFSU2_TR(0x740569);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74056a:{NFSU2_TR(0x74056a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74056full));
TAIL_STATIC(0x75c840u,75c);
}
B74056f:L74056f:{c.instructions+=2;NFSU2_TR(0x74056f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B740572:{NFSU2_TR(0x740572);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740504u);}goto L740504;}
}
B740574:L740574:{c.instructions+=2;NFSU2_TR(0x740574);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74057a:{NFSU2_TR(0x74057a);
if(r1(R+518)){{goto L74058c;}}
}
B74057c:L74057c:{c.instructions+=2;NFSU2_TR(0x74057c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x800ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740582:{NFSU2_TR(0x740582);
if(r1(R+518)){{goto L74058c;}}
}
B740584:L740584:{c.instructions+=2;NFSU2_TR(0x740584);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x400ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74058a:{NFSU2_TR(0x74058a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7405be;}}
}
B74058c:L74058c:{c.instructions+=3;NFSU2_TR(0x74058c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x400ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740592:{NFSU2_TR(0x740592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740599:{NFSU2_TR(0x740599);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7405be;}}
}
B74059b:L74059b:{c.instructions+=11;NFSU2_TR(0x74059b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7405a1:{NFSU2_TR(0x7405a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7405a3:{NFSU2_TR(0x7405a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7405a6:{NFSU2_TR(0x7405a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405a7:{NFSU2_TR(0x7405a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405a9:{NFSU2_TR(0x7405a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405ab:{NFSU2_TR(0x7405ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405ad:{NFSU2_TR(0x7405ad);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405af:{NFSU2_TR(0x7405af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405b0:{NFSU2_TR(0x7405b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405b1:{NFSU2_TR(0x7405b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7405b6ull));
TAIL_STATIC(0x74de50u,74d);
}
B7405b6:L7405b6:{c.instructions+=2;NFSU2_TR(0x7405b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7405b9:{NFSU2_TR(0x7405b9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740504u);}goto L740504;}
}
B7405be:L7405be:{c.instructions+=2;NFSU2_TR(0x7405be);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7405c4:{NFSU2_TR(0x7405c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740504u);}goto L740504;}}
}
B7405ca:L7405ca:{c.instructions+=4;NFSU2_TR(0x7405ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7405cc:{NFSU2_TR(0x7405cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7405d2:{NFSU2_TR(0x7405d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7405d5:{NFSU2_TR(0x7405d5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740504u);}goto L740504;}}
}
B7405db:L7405db:{c.instructions+=10;NFSU2_TR(0x7405db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7405e1:{NFSU2_TR(0x7405e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7405e4:{NFSU2_TR(0x7405e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405e5:{NFSU2_TR(0x7405e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405e7:{NFSU2_TR(0x7405e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405e9:{NFSU2_TR(0x7405e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405eb:{NFSU2_TR(0x7405eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405ed:{NFSU2_TR(0x7405ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405ee:{NFSU2_TR(0x7405ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7405ef:{NFSU2_TR(0x7405ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7405f4ull));
TAIL_STATIC(0x74de50u,74d);
}
B7405f4:L7405f4:{c.instructions+=5;NFSU2_TR(0x7405f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7405f7:{NFSU2_TR(0x7405f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7405f8:{NFSU2_TR(0x7405f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7405f9:{NFSU2_TR(0x7405f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7405fa:{NFSU2_TR(0x7405fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740600:L740600:{c.instructions+=6;NFSU2_TR(0x740600);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740601:{NFSU2_TR(0x740601);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740602:{NFSU2_TR(0x740602);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740606:{NFSU2_TR(0x740606);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B740608:{NFSU2_TR(0x740608);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B74060a:{NFSU2_TR(0x74060a);
if(r1(R+518)){{goto L7406d1;}}
}
B740610:L740610:{c.instructions+=3;NFSU2_TR(0x740610);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740613:{NFSU2_TR(0x740613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740614:{NFSU2_TR(0x740614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740619ull));
TAIL_STATIC(0x74e8e0u,74e);
}
B740619:L740619:{c.instructions+=5;NFSU2_TR(0x740619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74061c:{NFSU2_TR(0x74061c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74061f:{NFSU2_TR(0x74061f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740621:{NFSU2_TR(0x740621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740624:{NFSU2_TR(0x740624);
if(r1(R+518)){{goto L7406a2;}}
}
B740626:L740626:{c.instructions+=2;NFSU2_TR(0x740626);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740628:{NFSU2_TR(0x740628);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7406a2;}}
}
B74062a:L74062a:{c.instructions+=5;NFSU2_TR(0x74062a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74062b:{NFSU2_TR(0x74062b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74062e:{NFSU2_TR(0x74062e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74062f:{NFSU2_TR(0x74062f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740630:{NFSU2_TR(0x740630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740635ull));
TAIL_STATIC(0x73eea0u,73e);
}
B740635:L740635:{c.instructions+=5;NFSU2_TR(0x740635);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740638:{NFSU2_TR(0x740638);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74063a:{NFSU2_TR(0x74063a);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B74063c:{NFSU2_TR(0x74063c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74063f:{NFSU2_TR(0x74063f);
if(r1(R+518)){{goto L7406a1;}}
}
B740641:L740641:{c.instructions+=4;NFSU2_TR(0x740641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B740643:{NFSU2_TR(0x740643);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B740649:{NFSU2_TR(0x740649);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74064b:{NFSU2_TR(0x74064b);
if(r1(R+518)){{goto L740698;}}
}
B74064d:L74064d:{c.instructions+=5;NFSU2_TR(0x74064d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74064f:{NFSU2_TR(0x74064f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B740659:{NFSU2_TR(0x740659);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74065c:{NFSU2_TR(0x74065c);
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
B74065e:{NFSU2_TR(0x74065e);
if(r1(R+518)){{goto L74067d;}}
}
B740660:L740660:{c.instructions+=6;NFSU2_TR(0x740660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740663:{NFSU2_TR(0x740663);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740664:{NFSU2_TR(0x740664);
u8 U[4];
w4(U+0,u32(0x4000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740669:{NFSU2_TR(0x740669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74066a:{NFSU2_TR(0x74066a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74066b:{NFSU2_TR(0x74066b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74066dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74066d:L74066d:{c.instructions+=7;NFSU2_TR(0x74066d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74066f:{NFSU2_TR(0x74066f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740670:{NFSU2_TR(0x740670);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740671:{NFSU2_TR(0x740671);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740673:{NFSU2_TR(0x740673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740674:{NFSU2_TR(0x740674);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740675:{NFSU2_TR(0x740675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74067aull));
TAIL_STATIC(0x73fb50u,73f);
}
B74067a:L74067a:{c.instructions+=1;NFSU2_TR(0x74067a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B74067d:L74067d:{c.instructions+=4;NFSU2_TR(0x74067d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740680:{NFSU2_TR(0x740680);
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
B740682:{NFSU2_TR(0x740682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740689:{NFSU2_TR(0x740689);
if(r1(R+518)){{goto L740698;}}
}
B74068b:L74068b:{c.instructions+=6;NFSU2_TR(0x74068b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74068e:{NFSU2_TR(0x74068e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74068f:{NFSU2_TR(0x74068f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740690:{NFSU2_TR(0x740690);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740692:{NFSU2_TR(0x740692);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740693:{NFSU2_TR(0x740693);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740695ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B740695:L740695:{c.instructions+=1;NFSU2_TR(0x740695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B740698:L740698:{c.instructions+=2;NFSU2_TR(0x740698);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740699:{NFSU2_TR(0x740699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74069eull));
TAIL_STATIC(0x73e570u,73e);
}
B74069e:L74069e:{c.instructions+=1;NFSU2_TR(0x74069e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7406a1:L7406a1:{c.instructions+=1;NFSU2_TR(0x7406a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7406a2:L7406a2:{c.instructions+=3;NFSU2_TR(0x7406a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7406a8:{NFSU2_TR(0x7406a8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B7406aa:{NFSU2_TR(0x7406aa);
if(r1(R+518)){{goto L7406d1;}}
}
B7406ac:L7406ac:{c.instructions+=4;NFSU2_TR(0x7406ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7406af:{NFSU2_TR(0x7406af);
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
B7406b1:{NFSU2_TR(0x7406b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7406b4:{NFSU2_TR(0x7406b4);
if(r1(R+518)){{goto L7406cb;}}
}
B7406b6:L7406b6:{c.instructions+=7;NFSU2_TR(0x7406b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7406b9:{NFSU2_TR(0x7406b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406ba:{NFSU2_TR(0x7406ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7406c0:{NFSU2_TR(0x7406c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406c1:{NFSU2_TR(0x7406c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406c2:{NFSU2_TR(0x7406c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406c3:{NFSU2_TR(0x7406c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7406c5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7406c5:L7406c5:{c.instructions+=2;NFSU2_TR(0x7406c5);
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
B7406c8:{NFSU2_TR(0x7406c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7406cb:L7406cb:{c.instructions+=1;NFSU2_TR(0x7406cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7406d1:L7406d1:{c.instructions+=3;NFSU2_TR(0x7406d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7406d2:{NFSU2_TR(0x7406d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7406d3:{NFSU2_TR(0x7406d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7406e0:L7406e0:{c.instructions+=6;NFSU2_TR(0x7406e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406e1:{NFSU2_TR(0x7406e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7406e5:{NFSU2_TR(0x7406e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7406e8:{NFSU2_TR(0x7406e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406e9:{NFSU2_TR(0x7406e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406ea:{NFSU2_TR(0x7406ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7406efull));
TAIL_STATIC(0x74d3b0u,74d);
}
B7406ef:L7406ef:{c.instructions+=4;NFSU2_TR(0x7406ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7406f3:{NFSU2_TR(0x7406f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7406f6:{NFSU2_TR(0x7406f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7406f8:{NFSU2_TR(0x7406f8);
if(r1(R+518)){{goto L74072b;}}
}
B7406fa:L7406fa:{c.instructions+=4;NFSU2_TR(0x7406fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7406fd:{NFSU2_TR(0x7406fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406fe:{NFSU2_TR(0x7406fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7406ff:{NFSU2_TR(0x7406ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740704ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B740704:L740704:{c.instructions+=3;NFSU2_TR(0x740704);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740707:{NFSU2_TR(0x740707);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740709:{NFSU2_TR(0x740709);
if(r1(R+518)){{goto L74072b;}}
}
B74070b:L74070b:{c.instructions+=3;NFSU2_TR(0x74070b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740711:{NFSU2_TR(0x740711);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740713:{NFSU2_TR(0x740713);
if(r1(R+518)){{goto L74072b;}}
}
B740715:L740715:{c.instructions+=3;NFSU2_TR(0x740715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B740717:{NFSU2_TR(0x740717);
u8 U[18];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x2000000ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B740721:{NFSU2_TR(0x740721);
if(r1(R+518)){{goto L74072b;}}
}
B740723:L740723:{c.instructions+=4;NFSU2_TR(0x740723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740724:{NFSU2_TR(0x740724);
w4(R+0,u32(0xfffffffeull));
}
B740729:{NFSU2_TR(0x740729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74072a:{NFSU2_TR(0x74072a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74072b:L74072b:{c.instructions+=9;NFSU2_TR(0x74072b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74072f:{NFSU2_TR(0x74072f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740733:{NFSU2_TR(0x740733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740734:{NFSU2_TR(0x740734);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740735:{NFSU2_TR(0x740735);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740737:{NFSU2_TR(0x740737);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74073c:{NFSU2_TR(0x74073c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74073d:{NFSU2_TR(0x74073d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74073e:{NFSU2_TR(0x74073e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740743ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740240u);}goto L740240;}
}
B740743:L740743:{c.instructions+=4;NFSU2_TR(0x740743);
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
B740746:{NFSU2_TR(0x740746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740747:{NFSU2_TR(0x740747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740748:{NFSU2_TR(0x740748);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740750:L740750:{c.instructions+=4;NFSU2_TR(0x740750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740751:{NFSU2_TR(0x740751);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740755:{NFSU2_TR(0x740755);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B740759:{NFSU2_TR(0x740759);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740762;}}
}
B74075b:L74075b:{c.instructions+=3;NFSU2_TR(0x74075b);
w4(R+0,u32(0xffffff92ull));
}
B740760:{NFSU2_TR(0x740760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740761:{NFSU2_TR(0x740761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740762:L740762:{c.instructions+=8;NFSU2_TR(0x740762);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740763:{NFSU2_TR(0x740763);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B740767:{NFSU2_TR(0x740767);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740769:{NFSU2_TR(0x740769);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74076b:{NFSU2_TR(0x74076b);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740770:{NFSU2_TR(0x740770);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740771:{NFSU2_TR(0x740771);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740772:{NFSU2_TR(0x740772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740777ull));
TAIL_STATIC(0x73f3f0u,73f);
}
B740777:L740777:{c.instructions+=8;NFSU2_TR(0x740777);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74077b:{NFSU2_TR(0x74077b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74077f:{NFSU2_TR(0x74077f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740780:{NFSU2_TR(0x740780);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740781:{NFSU2_TR(0x740781);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740783:{NFSU2_TR(0x740783);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740784:{NFSU2_TR(0x740784);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740785:{NFSU2_TR(0x740785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74078aull));
TAIL_STATIC(0x73f3f0u,73f);
}
B74078a:L74078a:{c.instructions+=4;NFSU2_TR(0x74078a);
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
B74078d:{NFSU2_TR(0x74078d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74078e:{NFSU2_TR(0x74078e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74078f:{NFSU2_TR(0x74078f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740790:L740790:{c.instructions+=3;NFSU2_TR(0x740790);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740794:{NFSU2_TR(0x740794);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B740798:{NFSU2_TR(0x740798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7407a0;}}
}
B74079a:L74079a:{c.instructions+=2;NFSU2_TR(0x74079a);
w4(R+0,u32(0xffffff92ull));
}
B74079f:{NFSU2_TR(0x74079f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7407a0:L7407a0:{c.instructions+=9;NFSU2_TR(0x7407a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7407a4:{NFSU2_TR(0x7407a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7407a8:{NFSU2_TR(0x7407a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407aa:{NFSU2_TR(0x7407aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407ac:{NFSU2_TR(0x7407ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407ad:{NFSU2_TR(0x7407ad);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407b2:{NFSU2_TR(0x7407b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407b3:{NFSU2_TR(0x7407b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407b4:{NFSU2_TR(0x7407b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7407b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740240u);}goto L740240;}
}
B7407b9:L7407b9:{c.instructions+=2;NFSU2_TR(0x7407b9);
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
B7407bc:{NFSU2_TR(0x7407bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7407c0:L7407c0:{c.instructions+=15;NFSU2_TR(0x7407c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xfbcull))));
}
B7407c6:{NFSU2_TR(0x7407c6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7407cb:{NFSU2_TR(0x7407cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407cc:{NFSU2_TR(0x7407cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407cd:{NFSU2_TR(0x7407cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407ce:{NFSU2_TR(0x7407ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xfccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7407d5:{NFSU2_TR(0x7407d5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7407d7:{NFSU2_TR(0x7407d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7407d9:{NFSU2_TR(0x7407d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7407da:{NFSU2_TR(0x7407da);
u8 U[8];
w4(U+0,u32(u32(u32(0xfc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7407e1:{NFSU2_TR(0x7407e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7407e9:{NFSU2_TR(0x7407e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7407ed:{NFSU2_TR(0x7407ed);
w4(R+20,u32(0xfa0ull));
}
B7407f2:{NFSU2_TR(0x7407f2);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7407f6:{NFSU2_TR(0x7407f6);
if(r1(R+518)){{goto L7407fe;}}
}
B7407f8:L7407f8:{c.instructions+=2;NFSU2_TR(0x7407f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7407fc:{NFSU2_TR(0x7407fc);
if(r1(R+518)){{goto L74081a;}}
}
B7407fe:L7407fe:{c.instructions+=7;NFSU2_TR(0x7407fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7407ff:{NFSU2_TR(0x7407ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740800:{NFSU2_TR(0x740800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B740801:{NFSU2_TR(0x740801);
w4(R+0,u32(0xfffffffcull));
}
B740806:{NFSU2_TR(0x740806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740807:{NFSU2_TR(0x740807);
u8 U[8];
w4(U+0,u32(u32(u32(0xfb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74080e:{NFSU2_TR(0x74080e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740813ull));
TAIL_STATIC(0x76115eu,761);
}
B740813:L740813:{c.instructions+=2;NFSU2_TR(0x740813);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xfbcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xfbcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfbcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B740819:{NFSU2_TR(0x740819);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74081a:L74081a:{c.instructions+=3;NFSU2_TR(0x74081a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74081d:{NFSU2_TR(0x74081d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74081e:{NFSU2_TR(0x74081e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740823ull));
TAIL_STATIC(0x74d020u,74d);
}
B740823:L740823:{c.instructions+=5;NFSU2_TR(0x740823);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740826:{NFSU2_TR(0x740826);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740827:{NFSU2_TR(0x740827);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74082b:{NFSU2_TR(0x74082b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74082f:{NFSU2_TR(0x74082f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740834ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B740834:L740834:{c.instructions+=3;NFSU2_TR(0x740834);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740837:{NFSU2_TR(0x740837);
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
B740839:{NFSU2_TR(0x740839);
if(r1(R+518)){{goto L7409b9;}}
}
B74083f:L74083f:{c.instructions+=3;NFSU2_TR(0x74083f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740842:{NFSU2_TR(0x740842);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740843:{NFSU2_TR(0x740843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740848ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B740848:L740848:{c.instructions+=2;NFSU2_TR(0x740848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740849:{NFSU2_TR(0x740849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74084eull));
TAIL_STATIC(0x73d8c0u,73d);
}
B74084e:L74084e:{c.instructions+=4;NFSU2_TR(0x74084e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740851:{NFSU2_TR(0x740851);
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
B740853:{NFSU2_TR(0x740853);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740857:{NFSU2_TR(0x740857);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7409b9;}}
}
B74085d:L74085d:{c.instructions+=1;NFSU2_TR(0x74085d);
__builtin_memmove((R+4),(R+4),4);
}
B740860:L740860:{c.instructions+=3;NFSU2_TR(0x740860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740863:{NFSU2_TR(0x740863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740864:{NFSU2_TR(0x740864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740869ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B740869:L740869:{c.instructions+=3;NFSU2_TR(0x740869);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74086c:{NFSU2_TR(0x74086c);
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
B74086e:{NFSU2_TR(0x74086e);
if(r1(R+518)){{goto L740961;}}
}
B740874:L740874:{c.instructions+=5;NFSU2_TR(0x740874);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740878:{NFSU2_TR(0x740878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74087b:{NFSU2_TR(0x74087b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74087c:{NFSU2_TR(0x74087c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74087d:{NFSU2_TR(0x74087d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740882ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B740882:L740882:{c.instructions+=3;NFSU2_TR(0x740882);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740885:{NFSU2_TR(0x740885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740886:{NFSU2_TR(0x740886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74088bull));
TAIL_STATIC(0x73d8e0u,73d);
}
B74088b:L74088b:{c.instructions+=3;NFSU2_TR(0x74088b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74088e:{NFSU2_TR(0x74088e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740890:{NFSU2_TR(0x740890);
if(r1(R+518)){{goto L740961;}}
}
B740896:L740896:{c.instructions+=4;NFSU2_TR(0x740896);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74089c:{NFSU2_TR(0x74089c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74089e:{NFSU2_TR(0x74089e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7408a2:{NFSU2_TR(0x7408a2);
if(r1(R+518)){{goto L740961;}}
}
B7408a8:L7408a8:{c.instructions+=2;NFSU2_TR(0x7408a8);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7408ad:{NFSU2_TR(0x7408ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740961;}}
}
B7408b3:L7408b3:{c.instructions+=4;NFSU2_TR(0x7408b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7408b5:{NFSU2_TR(0x7408b5);
__builtin_memmove((R+0),(R+4),4);
}
B7408b7:{NFSU2_TR(0x7408b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7408ba:{NFSU2_TR(0x7408ba);
__builtin_memmove((R+12),(R+12),4);
}
B7408c0:L7408c0:{c.instructions+=4;NFSU2_TR(0x7408c0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7408c2:{NFSU2_TR(0x7408c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7408c3:{NFSU2_TR(0x7408c3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7408c5:{NFSU2_TR(0x7408c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7408c0u);}goto L7408c0;}}
}
B7408c7:L7408c7:{c.instructions+=4;NFSU2_TR(0x7408c7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B7408c9:{NFSU2_TR(0x7408c9);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B7408cb:{NFSU2_TR(0x7408cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7408cd:{NFSU2_TR(0x7408cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74097a;}}
}
B7408d3:L7408d3:{c.instructions+=1;NFSU2_TR(0x7408d3);
__builtin_memmove((R+8),(R+28),4);
}
B7408d5:L7408d5:{c.instructions+=6;NFSU2_TR(0x7408d5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7408d7:{NFSU2_TR(0x7408d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7408d8:{NFSU2_TR(0x7408d8);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B7408da:{NFSU2_TR(0x7408da);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7408db:{NFSU2_TR(0x7408db);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7408dd:{NFSU2_TR(0x7408dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7408d5u);}goto L7408d5;}}
}
B7408df:L7408df:{c.instructions+=5;NFSU2_TR(0x7408df);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7408e3:{NFSU2_TR(0x7408e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7408e5:{NFSU2_TR(0x7408e5);
__builtin_memmove((R+0),(R+8),4);
}
B7408e7:{NFSU2_TR(0x7408e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7408ea:{NFSU2_TR(0x7408ea);
__builtin_memmove((R+12),(R+12),4);
}
B7408f0:L7408f0:{c.instructions+=4;NFSU2_TR(0x7408f0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7408f2:{NFSU2_TR(0x7408f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7408f3:{NFSU2_TR(0x7408f3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7408f5:{NFSU2_TR(0x7408f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7408f0u);}goto L7408f0;}}
}
B7408f7:L7408f7:{c.instructions+=5;NFSU2_TR(0x7408f7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B7408f9:{NFSU2_TR(0x7408f9);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7408fb:{NFSU2_TR(0x7408fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7408fc:{NFSU2_TR(0x7408fc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B7408fe:{NFSU2_TR(0x7408fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740903ull));
TAIL_STATIC(0x75cf10u,75c);
}
B740903:L740903:{c.instructions+=3;NFSU2_TR(0x740903);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740906:{NFSU2_TR(0x740906);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740908:{NFSU2_TR(0x740908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740942;}}
}
B74090a:L74090a:{c.instructions+=3;NFSU2_TR(0x74090a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74090e:{NFSU2_TR(0x74090e);
__builtin_memmove((R+0),(R+24),4);
}
B740910:{NFSU2_TR(0x740910);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B740913:L740913:{c.instructions+=4;NFSU2_TR(0x740913);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B740915:{NFSU2_TR(0x740915);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B740916:{NFSU2_TR(0x740916);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B740918:{NFSU2_TR(0x740918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740913u);}goto L740913;}}
}
B74091a:L74091a:{c.instructions+=4;NFSU2_TR(0x74091a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74091c:{NFSU2_TR(0x74091c);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B74091e:{NFSU2_TR(0x74091e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740920:{NFSU2_TR(0x740920);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74097a;}}
}
B740922:L740922:{c.instructions+=3;NFSU2_TR(0x740922);
__builtin_memmove((R+8),(R+28),4);
}
B740924:{NFSU2_TR(0x740924);
__builtin_memmove((R+0),(R+24),4);
}
B740926:{NFSU2_TR(0x740926);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B740928:L740928:{c.instructions+=5;NFSU2_TR(0x740928);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74092a:{NFSU2_TR(0x74092a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74092d:{NFSU2_TR(0x74092d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74092e:{NFSU2_TR(0x74092e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B740930:{NFSU2_TR(0x740930);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740928u);}goto L740928;}}
}
B740932:L740932:{c.instructions+=2;NFSU2_TR(0x740932);
__builtin_memmove((R+0),(R+24),4);
}
B740934:{NFSU2_TR(0x740934);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B740937:L740937:{c.instructions+=4;NFSU2_TR(0x740937);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B740939:{NFSU2_TR(0x740939);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74093a:{NFSU2_TR(0x74093a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74093c:{NFSU2_TR(0x74093c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740937u);}goto L740937;}}
}
B74093e:L74093e:{c.instructions+=2;NFSU2_TR(0x74093e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B740940:{NFSU2_TR(0x740940);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B740942:L740942:{c.instructions+=7;NFSU2_TR(0x740942);
u8 U[8];
w4(U+0,u32(u32(u32(0xfdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740949:{NFSU2_TR(0x740949);
u8 U[8];
w4(U+0,u32(u32(u32(0xfd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740950:{NFSU2_TR(0x740950);
u8 U[1];
w1(U+0,u8(0x2cull));
s1(u32(r4(R+28)),r1(U+0));
}
B740953:{NFSU2_TR(0x740953);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B740954:{NFSU2_TR(0x740954);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B740955:{NFSU2_TR(0x740955);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740957:{NFSU2_TR(0x740957);
if(r1(R+518)){{goto L740961;}}
}
B740959:L740959:{c.instructions+=2;NFSU2_TR(0x740959);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74095d:{NFSU2_TR(0x74095d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B740961:L740961:{c.instructions+=6;NFSU2_TR(0x740961);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740965:{NFSU2_TR(0x740965);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740969:{NFSU2_TR(0x740969);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74096a:{NFSU2_TR(0x74096a);
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
B74096c:{NFSU2_TR(0x74096c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740970:{NFSU2_TR(0x740970);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740860u);}goto L740860;}}
}
B740976:L740976:{c.instructions+=2;NFSU2_TR(0x740976);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740978:{NFSU2_TR(0x740978);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L740984;}}
}
B74097a:L74097a:{c.instructions+=2;NFSU2_TR(0x74097a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xfffffffdull));
s4(u32(r4(U+0)),r4(U+4));
}
B740982:{NFSU2_TR(0x740982);
{goto L7409b9;}
}
B740984:L740984:{c.instructions+=3;NFSU2_TR(0x740984);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B740988:{NFSU2_TR(0x740988);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74098a:{NFSU2_TR(0x74098a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7409b9;}}
}
B74098c:L74098c:{c.instructions+=11;NFSU2_TR(0x74098c);
u8 U[8];
w4(U+0,u32(u32(u32(0xfe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740993:{NFSU2_TR(0x740993);
u8 U[8];
w4(U+0,u32(u32(u32(0xfe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74099a:{NFSU2_TR(0x74099a);
u8 U[8];
w4(U+0,u32(u32(u32(0xfd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7409a1:{NFSU2_TR(0x7409a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409a2:{NFSU2_TR(0x7409a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409a3:{NFSU2_TR(0x7409a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409a4:{NFSU2_TR(0x7409a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7409a8:{NFSU2_TR(0x7409a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409a9:{NFSU2_TR(0x7409a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409aa:{NFSU2_TR(0x7409aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7409ad:{NFSU2_TR(0x7409ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7409b2ull));
TAIL_STATIC(0x73fc80u,73f);
}
B7409b2:L7409b2:{c.instructions+=2;NFSU2_TR(0x7409b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7409b5:{NFSU2_TR(0x7409b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7409b9:L7409b9:{c.instructions+=7;NFSU2_TR(0x7409b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xfc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7409c0:{NFSU2_TR(0x7409c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7409c4:{NFSU2_TR(0x7409c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7409c5:{NFSU2_TR(0x7409c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7409c6:{NFSU2_TR(0x7409c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7409c7:{NFSU2_TR(0x7409c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7409c8:{NFSU2_TR(0x7409c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7409cdull));
TAIL_STATIC(0x76115eu,761);
}
B7409cd:L7409cd:{c.instructions+=2;NFSU2_TR(0x7409cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xfbcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xfbcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfbcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7409d3:{NFSU2_TR(0x7409d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7409e0:L7409e0:{c.instructions+=4;NFSU2_TR(0x7409e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409e1:{NFSU2_TR(0x7409e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7409e5:{NFSU2_TR(0x7409e5);
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
B7409e7:{NFSU2_TR(0x7409e7);
if(r1(R+518)){{goto L740a58;}}
}
B7409e9:L7409e9:{c.instructions+=3;NFSU2_TR(0x7409e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7409ef:{NFSU2_TR(0x7409ef);
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
B7409f1:{NFSU2_TR(0x7409f1);
if(r1(R+518)){{goto L740a58;}}
}
B7409f3:L7409f3:{c.instructions+=3;NFSU2_TR(0x7409f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409f4:{NFSU2_TR(0x7409f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7409f5:{NFSU2_TR(0x7409f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7409faull));
TAIL_STATIC(0x73d8c0u,73d);
}
B7409fa:L7409fa:{c.instructions+=4;NFSU2_TR(0x7409fa);
__builtin_memmove((R+12),(R+0),4);
}
B7409fc:{NFSU2_TR(0x7409fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7409ff:{NFSU2_TR(0x7409ff);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B740a00:{NFSU2_TR(0x740a00);
if(r1(R+519)){{goto L740a4e;}}
}
B740a02:L740a02:{c.instructions+=1;NFSU2_TR(0x740a02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a03:L740a03:{c.instructions+=4;NFSU2_TR(0x740a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740a09:{NFSU2_TR(0x740a09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a0a:{NFSU2_TR(0x740a0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a0b:{NFSU2_TR(0x740a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740a10ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B740a10:L740a10:{c.instructions+=4;NFSU2_TR(0x740a10);
__builtin_memmove((R+24),(R+0),4);
}
B740a12:{NFSU2_TR(0x740a12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740a15:{NFSU2_TR(0x740a15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740a17:{NFSU2_TR(0x740a17);
if(r1(R+518)){{goto L740a4a;}}
}
B740a19:L740a19:{c.instructions+=2;NFSU2_TR(0x740a19);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B740a1d:{NFSU2_TR(0x740a1d);
if(r1(R+518)){{goto L740a36;}}
}
B740a1f:L740a1f:{c.instructions+=8;NFSU2_TR(0x740a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740a22:{NFSU2_TR(0x740a22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a24:{NFSU2_TR(0x740a24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a26:{NFSU2_TR(0x740a26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a27:{NFSU2_TR(0x740a27);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a2c:{NFSU2_TR(0x740a2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a2d:{NFSU2_TR(0x740a2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a2e:{NFSU2_TR(0x740a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740a33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740240u);}goto L740240;}
}
B740a33:L740a33:{c.instructions+=1;NFSU2_TR(0x740a33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B740a36:L740a36:{c.instructions+=4;NFSU2_TR(0x740a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740a3c:{NFSU2_TR(0x740a3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a3d:{NFSU2_TR(0x740a3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a3e:{NFSU2_TR(0x740a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740a43ull));
TAIL_STATIC(0x73d820u,73d);
}
B740a43:L740a43:{c.instructions+=2;NFSU2_TR(0x740a43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a44:{NFSU2_TR(0x740a44);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740a47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B740a47:L740a47:{c.instructions+=1;NFSU2_TR(0x740a47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B740a4a:L740a4a:{c.instructions+=2;NFSU2_TR(0x740a4a);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B740a4b:{NFSU2_TR(0x740a4b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740a03u);}goto L740a03;}}
}
B740a4d:L740a4d:{c.instructions+=1;NFSU2_TR(0x740a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740a4e:L740a4e:{c.instructions+=2;NFSU2_TR(0x740a4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a4f:{NFSU2_TR(0x740a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740a54ull));
TAIL_STATIC(0x73e5c0u,73e);
}
B740a54:L740a54:{c.instructions+=2;NFSU2_TR(0x740a54);
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
B740a57:{NFSU2_TR(0x740a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740a58:L740a58:{c.instructions+=2;NFSU2_TR(0x740a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740a59:{NFSU2_TR(0x740a59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740a60:L740a60:{c.instructions+=11;NFSU2_TR(0x740a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B740a66:{NFSU2_TR(0x740a66);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B740a6b:{NFSU2_TR(0x740a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740a72:{NFSU2_TR(0x740a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740a79:{NFSU2_TR(0x740a79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B740a7b:{NFSU2_TR(0x740a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61757468ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740a80:{NFSU2_TR(0x740a80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a81:{NFSU2_TR(0x740a81);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740a88:{NFSU2_TR(0x740a88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a89:{NFSU2_TR(0x740a89);
w4(R+28,u32(0x1ull));
}
B740a8e:{NFSU2_TR(0x740a8e);
if(r1(R+518)){{goto L740af1;}}
}
B740a90:L740a90:{c.instructions+=2;NFSU2_TR(0x740a90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x636f6e6eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740a95:{NFSU2_TR(0x740a95);
if(r1(R+518)){{goto L740ab8;}}
}
B740a97:L740a97:{c.instructions+=9;NFSU2_TR(0x740a97);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B740a9a:{NFSU2_TR(0x740a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a9b:{NFSU2_TR(0x740a9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a9d:{NFSU2_TR(0x740a9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740a9f:{NFSU2_TR(0x740a9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740aa1:{NFSU2_TR(0x740aa1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B740aa5:{NFSU2_TR(0x740aa5);
u8 U[4];
w4(U+0,u32(0x7d2068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740aaa:{NFSU2_TR(0x740aaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740aab:{NFSU2_TR(0x740aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740ab0ull));
TAIL_STATIC(0x75c784u,75c);
}
B740ab0:L740ab0:{c.instructions+=2;NFSU2_TR(0x740ab0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B740ab3:{NFSU2_TR(0x740ab3);
{goto L740b4d;}
}
B740ab8:L740ab8:{c.instructions+=3;NFSU2_TR(0x740ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740abb:{NFSU2_TR(0x740abb);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B740abe:{NFSU2_TR(0x740abe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L740b46;}}
}
B740ac4:L740ac4:{c.instructions+=1;NFSU2_TR(0x740ac4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x740bbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B740acb:L740acb:{c.instructions+=2;NFSU2_TR(0x740acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740ace:{NFSU2_TR(0x740ace);
{goto L740b4d;}
}
B740ad0:L740ad0:{c.instructions+=2;NFSU2_TR(0x740ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740ad7:{NFSU2_TR(0x740ad7);
{goto L740b4d;}
}
B740ad9:L740ad9:{c.instructions+=2;NFSU2_TR(0x740ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740ae0:{NFSU2_TR(0x740ae0);
{goto L740b4d;}
}
B740ae2:L740ae2:{c.instructions+=2;NFSU2_TR(0x740ae2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B740ae6:{NFSU2_TR(0x740ae6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740b4d;}}
}
B740ae8:L740ae8:{c.instructions+=2;NFSU2_TR(0x740ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740aef:{NFSU2_TR(0x740aef);
{goto L740b4d;}
}
B740af1:L740af1:{c.instructions+=3;NFSU2_TR(0x740af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740af4:{NFSU2_TR(0x740af4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6d697373ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6d697373ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740af9:{NFSU2_TR(0x740af9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L740b28;}}
}
B740afb:L740afb:{c.instructions+=1;NFSU2_TR(0x740afb);
if(r1(R+518)){{goto L740b46;}}
}
B740afd:L740afd:{c.instructions+=2;NFSU2_TR(0x740afd);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x62736f64ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x62736f64ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740b02:{NFSU2_TR(0x740b02);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L740b46;}}
}
B740b04:L740b04:{c.instructions+=1;NFSU2_TR(0x740b04);
if(r1(R+518)){{goto L740b46;}}
}
B740b06:L740b06:{c.instructions+=2;NFSU2_TR(0x740b06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740b08:{NFSU2_TR(0x740b08);
if(r1(R+518)){{goto L740b1a;}}
}
B740b0a:L740b0a:{c.instructions+=2;NFSU2_TR(0x740b0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61757468ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740b0f:{NFSU2_TR(0x740b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740b46;}}
}
B740b11:L740b11:{c.instructions+=2;NFSU2_TR(0x740b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740b18:{NFSU2_TR(0x740b18);
{goto L740b4d;}
}
B740b1a:L740b1a:{c.instructions+=2;NFSU2_TR(0x740b1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B740b1d:{NFSU2_TR(0x740b1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740b52;}}
}
B740b1f:L740b1f:{c.instructions+=2;NFSU2_TR(0x740b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740b26:{NFSU2_TR(0x740b26);
{goto L740b4d;}
}
B740b28:L740b28:{c.instructions+=2;NFSU2_TR(0x740b28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6d737263ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740b2d:{NFSU2_TR(0x740b2d);
if(r1(R+518)){{goto L740b46;}}
}
B740b2f:L740b2f:{c.instructions+=2;NFSU2_TR(0x740b2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e657477ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740b34:{NFSU2_TR(0x740b34);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740ad9u);}goto L740ad9;}}
}
B740b36:L740b36:{c.instructions+=2;NFSU2_TR(0x740b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x75736572ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740b3b:{NFSU2_TR(0x740b3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740b46;}}
}
B740b3d:L740b3d:{c.instructions+=2;NFSU2_TR(0x740b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740b44:{NFSU2_TR(0x740b44);
{goto L740b4d;}
}
B740b46:L740b46:{c.instructions+=1;NFSU2_TR(0x740b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740b4d:L740b4d:{c.instructions+=2;NFSU2_TR(0x740b4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B740b50:{NFSU2_TR(0x740b50);
if(r1(R+518)){{goto L740ba4;}}
}
B740b52:L740b52:{c.instructions+=2;NFSU2_TR(0x740b52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b53:{NFSU2_TR(0x740b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740b58ull));
TAIL_STATIC(0x73f220u,73f);
}
B740b58:L740b58:{c.instructions+=4;NFSU2_TR(0x740b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740b5b:{NFSU2_TR(0x740b5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740b5e:{NFSU2_TR(0x740b5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740b61:{NFSU2_TR(0x740b61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740b8e;}}
}
B740b63:L740b63:{c.instructions+=4;NFSU2_TR(0x740b63);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B740b67:{NFSU2_TR(0x740b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740b6e:{NFSU2_TR(0x740b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740b71:{NFSU2_TR(0x740b71);
if(r1(R+518)){{goto L740b8e;}}
}
B740b73:L740b73:{c.instructions+=6;NFSU2_TR(0x740b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740b76:{NFSU2_TR(0x740b76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b77:{NFSU2_TR(0x740b77);
u8 U[4];
w4(U+0,u32(0x73f2e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b7c:{NFSU2_TR(0x740b7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b7d:{NFSU2_TR(0x740b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740b80:{NFSU2_TR(0x740b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740b85ull));
TAIL_STATIC(0x74d1b0u,74d);
}
B740b85:L740b85:{c.instructions+=2;NFSU2_TR(0x740b85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b86:{NFSU2_TR(0x740b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740b8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7409e0u);}goto L7409e0;}
}
B740b8b:L740b8b:{c.instructions+=1;NFSU2_TR(0x740b8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B740b8e:L740b8e:{c.instructions+=3;NFSU2_TR(0x740b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740b91:{NFSU2_TR(0x740b91);
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
B740b93:{NFSU2_TR(0x740b93);
if(r1(R+518)){{goto L740ba4;}}
}
B740b95:L740b95:{c.instructions+=7;NFSU2_TR(0x740b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740b98:{NFSU2_TR(0x740b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740b9b:{NFSU2_TR(0x740b9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b9c:{NFSU2_TR(0x740b9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b9d:{NFSU2_TR(0x740b9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b9e:{NFSU2_TR(0x740b9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740b9f:{NFSU2_TR(0x740b9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740ba1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B740ba1:L740ba1:{c.instructions+=1;NFSU2_TR(0x740ba1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B740ba4:L740ba4:{c.instructions+=4;NFSU2_TR(0x740ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740bab:{NFSU2_TR(0x740bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740bac:{NFSU2_TR(0x740bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740bad:{NFSU2_TR(0x740bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740bb2ull));
TAIL_STATIC(0x76115eu,761);
}
B740bb2:L740bb2:{c.instructions+=2;NFSU2_TR(0x740bb2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x84ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x84ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x84ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B740bb8:{NFSU2_TR(0x740bb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740be0:L740be0:{c.instructions+=11;NFSU2_TR(0x740be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B740be3:{NFSU2_TR(0x740be3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740be4:{NFSU2_TR(0x740be4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740be5:{NFSU2_TR(0x740be5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740be6:{NFSU2_TR(0x740be6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740bea:{NFSU2_TR(0x740bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740bed:{NFSU2_TR(0x740bed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740bee:{NFSU2_TR(0x740bee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740bf0:{NFSU2_TR(0x740bf0);
u8 U[4];
w4(U+0,u32(0x7d2090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740bf5:{NFSU2_TR(0x740bf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740bf6:{NFSU2_TR(0x740bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740bfbull));
TAIL_STATIC(0x7414a0u,741);
}
B740bfb:L740bfb:{c.instructions+=3;NFSU2_TR(0x740bfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740bfe:{NFSU2_TR(0x740bfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740bff:{NFSU2_TR(0x740bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740c04ull));
TAIL_STATIC(0x7420b0u,742);
}
B740c04:L740c04:{c.instructions+=8;NFSU2_TR(0x740c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B740c08:{NFSU2_TR(0x740c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B740c0c:{NFSU2_TR(0x740c0c);
__builtin_memmove((R+20),(R+0),4);
}
B740c0e:{NFSU2_TR(0x740c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740c11:{NFSU2_TR(0x740c11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740c14:{NFSU2_TR(0x740c14);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B740c17:{NFSU2_TR(0x740c17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740c1b:{NFSU2_TR(0x740c1b);
if(r1(R+518)){{goto L740c32;}}
}
B740c1d:L740c1d:{c.instructions+=7;NFSU2_TR(0x740c1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c1f:{NFSU2_TR(0x740c1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c21:{NFSU2_TR(0x740c21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c23:{NFSU2_TR(0x740c23);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c28:{NFSU2_TR(0x740c28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c29:{NFSU2_TR(0x740c29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c2a:{NFSU2_TR(0x740c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740c2full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740240u);}goto L740240;}
}
B740c2f:L740c2f:{c.instructions+=1;NFSU2_TR(0x740c2f);
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
B740c32:L740c32:{c.instructions+=3;NFSU2_TR(0x740c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740c35:{NFSU2_TR(0x740c35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c36:{NFSU2_TR(0x740c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740c3bull));
TAIL_STATIC(0x74d3b0u,74d);
}
B740c3b:L740c3b:{c.instructions+=3;NFSU2_TR(0x740c3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740c3e:{NFSU2_TR(0x740c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740c40:{NFSU2_TR(0x740c40);
if(r1(R+518)){{goto L740db3;}}
}
B740c46:L740c46:{c.instructions+=4;NFSU2_TR(0x740c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740c49:{NFSU2_TR(0x740c49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c4a:{NFSU2_TR(0x740c4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c4b:{NFSU2_TR(0x740c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740c50ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B740c50:L740c50:{c.instructions+=3;NFSU2_TR(0x740c50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740c53:{NFSU2_TR(0x740c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740c55:{NFSU2_TR(0x740c55);
if(r1(R+518)){{goto L740db3;}}
}
B740c5b:L740c5b:{c.instructions+=4;NFSU2_TR(0x740c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B740c61:{NFSU2_TR(0x740c61);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740c63:{NFSU2_TR(0x740c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740c67:{NFSU2_TR(0x740c67);
if(r1(R+518)){{goto L740db3;}}
}
B740c6d:L740c6d:{c.instructions+=3;NFSU2_TR(0x740c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740c70:{NFSU2_TR(0x740c70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740c72:{NFSU2_TR(0x740c72);
if(r1(R+518)){{goto L740db3;}}
}
B740c78:L740c78:{c.instructions+=2;NFSU2_TR(0x740c78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c79:{NFSU2_TR(0x740c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740c7eull));
TAIL_STATIC(0x73f940u,73f);
}
B740c7e:L740c7e:{c.instructions+=3;NFSU2_TR(0x740c7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740c81:{NFSU2_TR(0x740c81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740c83:{NFSU2_TR(0x740c83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740c93;}}
}
B740c85:L740c85:{c.instructions+=3;NFSU2_TR(0x740c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B740c87:{NFSU2_TR(0x740c87);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B740c91:{NFSU2_TR(0x740c91);
if(r1(R+518)){{goto L740ca1;}}
}
B740c93:L740c93:{c.instructions+=2;NFSU2_TR(0x740c93);
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
B740c95:{NFSU2_TR(0x740c95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740ca1;}}
}
B740c97:L740c97:{c.instructions+=3;NFSU2_TR(0x740c97);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c98:{NFSU2_TR(0x740c98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740c99:{NFSU2_TR(0x740c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740c9eull));
TAIL_STATIC(0x73edd0u,73e);
}
B740c9e:L740c9e:{c.instructions+=1;NFSU2_TR(0x740c9e);
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
B740ca1:L740ca1:{c.instructions+=3;NFSU2_TR(0x740ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740ca4:{NFSU2_TR(0x740ca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ca5:{NFSU2_TR(0x740ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740caaull));
TAIL_STATIC(0x73d8c0u,73d);
}
B740caa:L740caa:{c.instructions+=4;NFSU2_TR(0x740caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740cb0:{NFSU2_TR(0x740cb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740cb3:{NFSU2_TR(0x740cb3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B740cb5:{NFSU2_TR(0x740cb5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L740cc9;}}
}
B740cb7:L740cb7:{c.instructions+=3;NFSU2_TR(0x740cb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740cb8:{NFSU2_TR(0x740cb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740cb9:{NFSU2_TR(0x740cb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740cbeull));
TAIL_STATIC(0x73f680u,73f);
}
B740cbe:L740cbe:{c.instructions+=3;NFSU2_TR(0x740cbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740cc1:{NFSU2_TR(0x740cc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B740cc3:{NFSU2_TR(0x740cc3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L740db3;}}
}
B740cc9:L740cc9:{c.instructions+=3;NFSU2_TR(0x740cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740ccc:{NFSU2_TR(0x740ccc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B740cd2:{NFSU2_TR(0x740cd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L740cec;}}
}
B740cd4:L740cd4:{c.instructions+=2;NFSU2_TR(0x740cd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740cd5:{NFSU2_TR(0x740cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740cdaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7401f0u);}goto L7401f0;}
}
B740cda:L740cda:{c.instructions+=6;NFSU2_TR(0x740cda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740cdd:{NFSU2_TR(0x740cdd);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B740cdf:{NFSU2_TR(0x740cdf);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B740ce1:{NFSU2_TR(0x740ce1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B740ce2:{NFSU2_TR(0x740ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740ce6:{NFSU2_TR(0x740ce6);
if(r1(R+518)){{goto L740db3;}}
}
B740cec:L740cec:{c.instructions+=3;NFSU2_TR(0x740cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B740cef:{NFSU2_TR(0x740cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740cf2:{NFSU2_TR(0x740cf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B740cf5:L740cf5:{c.instructions+=4;NFSU2_TR(0x740cf5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B740cf7:{NFSU2_TR(0x740cf7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B740cf8:{NFSU2_TR(0x740cf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B740cfa:{NFSU2_TR(0x740cfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740cf5u);}goto L740cf5;}}
}
B740cfc:L740cfc:{c.instructions+=4;NFSU2_TR(0x740cfc);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B740cfe:{NFSU2_TR(0x740cfe);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740d00:{NFSU2_TR(0x740d00);
__builtin_memmove((R+28),(R+0),4);
}
B740d02:{NFSU2_TR(0x740d02);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740d04ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B740d04:L740d04:{c.instructions+=17;NFSU2_TR(0x740d04);
__builtin_memmove((R+20),(R+0),4);
}
B740d06:{NFSU2_TR(0x740d06);
__builtin_memmove((R+8),(R+24),4);
}
B740d08:{NFSU2_TR(0x740d08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B740d0a:{NFSU2_TR(0x740d0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B740d0c:{NFSU2_TR(0x740d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740d0f:{NFSU2_TR(0x740d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740d12:{NFSU2_TR(0x740d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740d15:{NFSU2_TR(0x740d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740d18:{NFSU2_TR(0x740d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740d1b:{NFSU2_TR(0x740d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740d1e:{NFSU2_TR(0x740d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740d21:{NFSU2_TR(0x740d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740d24:{NFSU2_TR(0x740d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740d27:{NFSU2_TR(0x740d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740d2a:{NFSU2_TR(0x740d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740d2d:{NFSU2_TR(0x740d2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740d30:{NFSU2_TR(0x740d30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B740d33:L740d33:{c.instructions+=4;NFSU2_TR(0x740d33);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B740d35:{NFSU2_TR(0x740d35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B740d36:{NFSU2_TR(0x740d36);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B740d38:{NFSU2_TR(0x740d38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740d33u);}goto L740d33;}}
}
B740d3a:L740d3a:{c.instructions+=3;NFSU2_TR(0x740d3a);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B740d3c:{NFSU2_TR(0x740d3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740d3d:{NFSU2_TR(0x740d3d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740d3full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B740d3f:L740d3f:{c.instructions+=6;NFSU2_TR(0x740d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740d42:{NFSU2_TR(0x740d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740d45:{NFSU2_TR(0x740d45);
__builtin_memmove((R+4),(R+28),4);
}
B740d47:{NFSU2_TR(0x740d47);
__builtin_memmove((R+28),(R+0),4);
}
B740d49:{NFSU2_TR(0x740d49);
__builtin_memmove((R+0),(R+4),4);
}
B740d4b:{NFSU2_TR(0x740d4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B740d4e:L740d4e:{c.instructions+=1;NFSU2_TR(0x740d4e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L740d50;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740d4eu);}goto L740d4e;}
}
B740d50:L740d50:{c.instructions+=2;NFSU2_TR(0x740d50);
__builtin_memmove((R+4),(R+0),4);
}
B740d52:{NFSU2_TR(0x740d52);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B740d55:L740d55:{c.instructions+=1;NFSU2_TR(0x740d55);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L740d57;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740d55u);}goto L740d55;}
}
B740d57:L740d57:{c.instructions+=5;NFSU2_TR(0x740d57);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740d5b:{NFSU2_TR(0x740d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740d5e:{NFSU2_TR(0x740d5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740d61:{NFSU2_TR(0x740d61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740d63:{NFSU2_TR(0x740d63);
if(r1(R+518)){{goto L740d6f;}}
}
B740d65:L740d65:{c.instructions+=3;NFSU2_TR(0x740d65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740d66:{NFSU2_TR(0x740d66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740d67:{NFSU2_TR(0x740d67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740d6cull));
TAIL_STATIC(0x73d750u,73d);
}
B740d6c:L740d6c:{c.instructions+=1;NFSU2_TR(0x740d6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740d6f:L740d6f:{c.instructions+=5;NFSU2_TR(0x740d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740d73:{NFSU2_TR(0x740d73);
w4(R+0,u32(0x1ull));
}
B740d78:{NFSU2_TR(0x740d78);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B740d7a:{NFSU2_TR(0x740d7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B740d7e:{NFSU2_TR(0x740d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740d9d;}}
}
B740d80:L740d80:{c.instructions+=6;NFSU2_TR(0x740d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B740d82:{NFSU2_TR(0x740d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740d88:{NFSU2_TR(0x740d88);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2000000ull))));
}
B740d8e:{NFSU2_TR(0x740d8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740d8f:{NFSU2_TR(0x740d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740d95:{NFSU2_TR(0x740d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740d9aull));
TAIL_STATIC(0x73e570u,73e);
}
B740d9a:L740d9a:{c.instructions+=1;NFSU2_TR(0x740d9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740d9d:L740d9d:{c.instructions+=3;NFSU2_TR(0x740d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740da0:{NFSU2_TR(0x740da0);
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
B740da2:{NFSU2_TR(0x740da2);
if(r1(R+518)){{goto L740db3;}}
}
B740da4:L740da4:{c.instructions+=6;NFSU2_TR(0x740da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740da7:{NFSU2_TR(0x740da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740dab:{NFSU2_TR(0x740dab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740dac:{NFSU2_TR(0x740dac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740dad:{NFSU2_TR(0x740dad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740dae:{NFSU2_TR(0x740dae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740db0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B740db0:L740db0:{c.instructions+=1;NFSU2_TR(0x740db0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B740db3:L740db3:{c.instructions+=6;NFSU2_TR(0x740db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740db4:{NFSU2_TR(0x740db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740db5:{NFSU2_TR(0x740db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B740db6:{NFSU2_TR(0x740db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740db7:{NFSU2_TR(0x740db7);
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
B740dba:{NFSU2_TR(0x740dba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740dc0:L740dc0:{c.instructions+=13;NFSU2_TR(0x740dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B740dc3:{NFSU2_TR(0x740dc3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B740dc8:{NFSU2_TR(0x740dc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740dc9:{NFSU2_TR(0x740dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740dcd:{NFSU2_TR(0x740dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740dd0:{NFSU2_TR(0x740dd0);
u8 U[4];
w4(U+0,u32(0x79634cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740dd5:{NFSU2_TR(0x740dd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740dd9:{NFSU2_TR(0x740dd9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ddb:{NFSU2_TR(0x740ddb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B740ddf:{NFSU2_TR(0x740ddf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740de0:{NFSU2_TR(0x740de0);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740de5:{NFSU2_TR(0x740de5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740de6:{NFSU2_TR(0x740de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740debull));
TAIL_STATIC(0x7414a0u,741);
}
B740deb:L740deb:{c.instructions+=3;NFSU2_TR(0x740deb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B740dee:{NFSU2_TR(0x740dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740def:{NFSU2_TR(0x740def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740df4ull));
TAIL_STATIC(0x742360u,742);
}
B740df4:L740df4:{c.instructions+=4;NFSU2_TR(0x740df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B740df6:{NFSU2_TR(0x740df6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B740df9:{NFSU2_TR(0x740df9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x63686174ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740dfe:{NFSU2_TR(0x740dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740e13;}}
}
B740e00:L740e00:{c.instructions+=6;NFSU2_TR(0x740e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740e04:{NFSU2_TR(0x740e04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e05:{NFSU2_TR(0x740e05);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B740e09:{NFSU2_TR(0x740e09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e0a:{NFSU2_TR(0x740e0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e0b:{NFSU2_TR(0x740e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740e10ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740be0u);}goto L740be0;}
}
B740e10:L740e10:{c.instructions+=1;NFSU2_TR(0x740e10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B740e13:L740e13:{c.instructions+=3;NFSU2_TR(0x740e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740e17:{NFSU2_TR(0x740e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740e18:{NFSU2_TR(0x740e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740e1dull));
TAIL_STATIC(0x76115eu,761);
}
B740e1d:L740e1d:{c.instructions+=2;NFSU2_TR(0x740e1d);
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
B740e20:{NFSU2_TR(0x740e20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740e30:L740e30:{c.instructions+=4;NFSU2_TR(0x740e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e31:{NFSU2_TR(0x740e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740e35:{NFSU2_TR(0x740e35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740e37:{NFSU2_TR(0x740e37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740e3d;}}
}
B740e39:L740e39:{c.instructions+=3;NFSU2_TR(0x740e39);
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
B740e3b:{NFSU2_TR(0x740e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740e3c:{NFSU2_TR(0x740e3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740e3d:L740e3d:{c.instructions+=10;NFSU2_TR(0x740e3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740e41:{NFSU2_TR(0x740e41);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740e45:{NFSU2_TR(0x740e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740e48:{NFSU2_TR(0x740e48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e49:{NFSU2_TR(0x740e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B740e4b:{NFSU2_TR(0x740e4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e4c:{NFSU2_TR(0x740e4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e4d:{NFSU2_TR(0x740e4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e4e:{NFSU2_TR(0x740e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x73f6d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740e55:{NFSU2_TR(0x740e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740e5aull));
TAIL_STATIC(0x74cf70u,74c);
}
B740e5a:L740e5a:{c.instructions+=5;NFSU2_TR(0x740e5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B740e5d:{NFSU2_TR(0x740e5d);
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
B740e5f:{NFSU2_TR(0x740e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740e62:{NFSU2_TR(0x740e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffff93ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740e69:{NFSU2_TR(0x740e69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L740e78;}}
}
B740e6b:L740e6b:{c.instructions+=2;NFSU2_TR(0x740e6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e6c:{NFSU2_TR(0x740e6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740e6full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B740e6f:L740e6f:{c.instructions+=5;NFSU2_TR(0x740e6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740e72:{NFSU2_TR(0x740e72);
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
B740e74:{NFSU2_TR(0x740e74);
__builtin_memmove((R+0),(R+24),4);
}
B740e76:{NFSU2_TR(0x740e76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740e77:{NFSU2_TR(0x740e77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740e78:L740e78:{c.instructions+=5;NFSU2_TR(0x740e78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e79:{NFSU2_TR(0x740e79);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e7b:{NFSU2_TR(0x740e7b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e7d:{NFSU2_TR(0x740e7d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e7f:{NFSU2_TR(0x740e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740e84ull));
TAIL_STATIC(0x73d6d0u,73d);
}
B740e84:L740e84:{c.instructions+=4;NFSU2_TR(0x740e84);
__builtin_memmove((R+28),(R+0),4);
}
B740e86:{NFSU2_TR(0x740e86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e88:{NFSU2_TR(0x740e88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e89:{NFSU2_TR(0x740e89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740e8eull));
TAIL_STATIC(0x73d990u,73d);
}
B740e8e:L740e8e:{c.instructions+=6;NFSU2_TR(0x740e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740e91:{NFSU2_TR(0x740e91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e92:{NFSU2_TR(0x740e92);
u8 U[4];
w4(U+0,u32(0x740dc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e97:{NFSU2_TR(0x740e97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740e98:{NFSU2_TR(0x740e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740e9e:{NFSU2_TR(0x740e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740ea3ull));
TAIL_STATIC(0x74dca0u,74d);
}
B740ea3:L740ea3:{c.instructions+=5;NFSU2_TR(0x740ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740ea6:{NFSU2_TR(0x740ea6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ea7:{NFSU2_TR(0x740ea7);
u8 U[4];
w4(U+0,u32(0x7404a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740eac:{NFSU2_TR(0x740eac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ead:{NFSU2_TR(0x740ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740eb2ull));
TAIL_STATIC(0x74dcc0u,74d);
}
B740eb2:L740eb2:{c.instructions+=5;NFSU2_TR(0x740eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740eb5:{NFSU2_TR(0x740eb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740eb6:{NFSU2_TR(0x740eb6);
u8 U[4];
w4(U+0,u32(0x73f750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ebb:{NFSU2_TR(0x740ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ebc:{NFSU2_TR(0x740ebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740ec1ull));
TAIL_STATIC(0x74dce0u,74d);
}
B740ec1:L740ec1:{c.instructions+=17;NFSU2_TR(0x740ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740ec4:{NFSU2_TR(0x740ec4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ec6:{NFSU2_TR(0x740ec6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ec8:{NFSU2_TR(0x740ec8);
u8 U[4];
w4(U+0,u32(0x7a175cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ecd:{NFSU2_TR(0x740ecd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ecf:{NFSU2_TR(0x740ecf);
w4(R+0,u32(0x64ull));
}
B740ed4:{NFSU2_TR(0x740ed4);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ed9:{NFSU2_TR(0x740ed9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740eda:{NFSU2_TR(0x740eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w4(U+4,u32(0x3cull));
s4(u32(r4(U+0)),r4(U+4));
}
B740ee4:{NFSU2_TR(0x740ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w4(U+4,u32(0x5aull));
s4(u32(r4(U+0)),r4(U+4));
}
B740eee:{NFSU2_TR(0x740eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740ef4:{NFSU2_TR(0x740ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B740efe:{NFSU2_TR(0x740efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740f04:{NFSU2_TR(0x740f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0xc8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740f0e:{NFSU2_TR(0x740f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740f14:{NFSU2_TR(0x740f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x37ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740f1e:{NFSU2_TR(0x740f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740f23ull));
TAIL_STATIC(0x74d030u,74d);
}
B740f23:L740f23:{c.instructions+=4;NFSU2_TR(0x740f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740f26:{NFSU2_TR(0x740f26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B740f29:{NFSU2_TR(0x740f29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f2a:{NFSU2_TR(0x740f2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740f2full));
TAIL_STATIC(0x74da70u,74d);
}
B740f2f:L740f2f:{c.instructions+=5;NFSU2_TR(0x740f2f);
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
B740f32:{NFSU2_TR(0x740f32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740f33:{NFSU2_TR(0x740f33);
__builtin_memmove((R+0),(R+24),4);
}
B740f35:{NFSU2_TR(0x740f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740f36:{NFSU2_TR(0x740f36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740f40:L740f40:{c.instructions+=5;NFSU2_TR(0x740f40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f41:{NFSU2_TR(0x740f41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f42:{NFSU2_TR(0x740f42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740f46:{NFSU2_TR(0x740f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740f48:{NFSU2_TR(0x740f48);
if(r1(R+518)){{goto L740f8a;}}
}
B740f4a:L740f4a:{c.instructions+=3;NFSU2_TR(0x740f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B740f4e:{NFSU2_TR(0x740f4e);
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
B740f50:{NFSU2_TR(0x740f50);
if(r1(R+518)){{goto L740f8a;}}
}
B740f52:L740f52:{c.instructions+=2;NFSU2_TR(0x740f52);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f57:{NFSU2_TR(0x740f57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740f59ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B740f59:L740f59:{c.instructions+=4;NFSU2_TR(0x740f59);
__builtin_memmove((R+8),(R+0),4);
}
B740f5b:{NFSU2_TR(0x740f5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B740f5e:{NFSU2_TR(0x740f5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740f60:{NFSU2_TR(0x740f60);
if(r1(R+518)){{goto L740f74;}}
}
B740f62:L740f62:{c.instructions+=4;NFSU2_TR(0x740f62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f63:{NFSU2_TR(0x740f63);
w4(R+4,u32(0x32ull));
}
B740f68:{NFSU2_TR(0x740f68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B740f6a:{NFSU2_TR(0x740f6a);
__builtin_memmove((R+28),(R+8),4);
}
B740f6c:L740f6c:{c.instructions+=1;NFSU2_TR(0x740f6c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L740f6e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740f6cu);}goto L740f6c;}
}
B740f6e:L740f6e:{c.instructions+=3;NFSU2_TR(0x740f6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B740f70:{NFSU2_TR(0x740f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B740f73:{NFSU2_TR(0x740f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B740f74:L740f74:{c.instructions+=6;NFSU2_TR(0x740f74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740f78:{NFSU2_TR(0x740f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740f7c:{NFSU2_TR(0x740f7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f7d:{NFSU2_TR(0x740f7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f7e:{NFSU2_TR(0x740f7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f7f:{NFSU2_TR(0x740f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740f84ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x740e30u);}goto L740e30;}
}
B740f84:L740f84:{c.instructions+=4;NFSU2_TR(0x740f84);
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
B740f87:{NFSU2_TR(0x740f87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740f88:{NFSU2_TR(0x740f88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740f89:{NFSU2_TR(0x740f89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740f8a:L740f8a:{c.instructions+=4;NFSU2_TR(0x740f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740f8b:{NFSU2_TR(0x740f8b);
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
B740f8d:{NFSU2_TR(0x740f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B740f8e:{NFSU2_TR(0x740f8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740f90:L740f90:{c.instructions+=4;NFSU2_TR(0x740f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740f91:{NFSU2_TR(0x740f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B740f95:{NFSU2_TR(0x740f95);
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
B740f97:{NFSU2_TR(0x740f97);
if(r1(R+518)){{goto L740fe3;}}
}
B740f99:L740f99:{c.instructions+=3;NFSU2_TR(0x740f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740f9c:{NFSU2_TR(0x740f9c);
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
B740f9e:{NFSU2_TR(0x740f9e);
if(r1(R+518)){{goto L740fe3;}}
}
B740fa0:L740fa0:{c.instructions+=2;NFSU2_TR(0x740fa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fa1:{NFSU2_TR(0x740fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740fa6ull));
TAIL_STATIC(0x73f220u,73f);
}
B740fa6:L740fa6:{c.instructions+=17;NFSU2_TR(0x740fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740faa:{NFSU2_TR(0x740faa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740fae:{NFSU2_TR(0x740fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740fb4:{NFSU2_TR(0x740fb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fb5:{NFSU2_TR(0x740fb5);
u8 U[4];
w4(U+0,u32(0x740a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fba:{NFSU2_TR(0x740fba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fbb:{NFSU2_TR(0x740fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B740fbf:{NFSU2_TR(0x740fbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fc0:{NFSU2_TR(0x740fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B740fc4:{NFSU2_TR(0x740fc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fc5:{NFSU2_TR(0x740fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B740fc8:{NFSU2_TR(0x740fc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fc9:{NFSU2_TR(0x740fc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fca:{NFSU2_TR(0x740fca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740fcb:{NFSU2_TR(0x740fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740fd2:{NFSU2_TR(0x740fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B740fd9:{NFSU2_TR(0x740fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x740fdeull));
TAIL_STATIC(0x74e4f0u,74e);
}
B740fde:L740fde:{c.instructions+=3;NFSU2_TR(0x740fde);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B740fe1:{NFSU2_TR(0x740fe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740fe2:{NFSU2_TR(0x740fe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740fe3:L740fe3:{c.instructions+=3;NFSU2_TR(0x740fe3);
w4(R+0,u32(0xfffffffdull));
}
B740fe8:{NFSU2_TR(0x740fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B740fe9:{NFSU2_TR(0x740fe9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B740ff0:L740ff0:{c.instructions+=4;NFSU2_TR(0x740ff0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B740ff1:{NFSU2_TR(0x740ff1);
__builtin_memmove((R+28),(R+4),4);
}
B740ff3:{NFSU2_TR(0x740ff3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B740ff5:{NFSU2_TR(0x740ff5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L740ffc;}}
}
B740ff7:L740ff7:{c.instructions+=1;NFSU2_TR(0x740ff7);
w4(R+28,u32(0x100ull));
}
B740ffc:L740ffc:{c.instructions+=1;NFSU2_TR(0x740ffc);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
TAIL_STATIC(0x741002u,741);
}
XIT:NFSU2_TR_EXIT(0x740,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
