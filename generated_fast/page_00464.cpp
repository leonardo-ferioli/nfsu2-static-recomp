#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_463(u8* __restrict R,Cpu& c);
u32 body_465(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x464,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x464,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_464(u8* __restrict R,Cpu& c);
u32 page_464(Cpu& c){return body_464(c.regs.data(),c);}
__attribute__((noinline)) u32 body_464(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x464000:goto L464000;
case 0x464004:c.instructions+=1;goto B464004;
case 0x464006:goto L464006;
case 0x464007:c.instructions+=2;goto B464007;
case 0x46400a:c.instructions+=1;goto B46400a;
case 0x46400c:goto L46400c;
case 0x46400e:goto L46400e;
case 0x464011:c.instructions+=1;goto B464011;
case 0x464013:goto L464013;
case 0x464016:c.instructions+=7;goto B464016;
case 0x46401a:c.instructions+=6;goto B46401a;
case 0x46401e:c.instructions+=5;goto B46401e;
case 0x46401f:c.instructions+=4;goto B46401f;
case 0x464022:c.instructions+=3;goto B464022;
case 0x464025:c.instructions+=2;goto B464025;
case 0x464029:c.instructions+=1;goto B464029;
case 0x46402f:goto L46402f;
case 0x464033:c.instructions+=1;goto B464033;
case 0x464039:goto L464039;
case 0x46403c:c.instructions+=2;goto B46403c;
case 0x46403e:c.instructions+=1;goto B46403e;
case 0x464040:goto L464040;
case 0x464045:c.instructions+=1;goto B464045;
case 0x46404b:goto L46404b;
case 0x46404f:c.instructions+=2;goto B46404f;
case 0x464053:c.instructions+=1;goto B464053;
case 0x464059:goto L464059;
case 0x46405b:c.instructions+=2;goto B46405b;
case 0x46405d:c.instructions+=1;goto B46405d;
case 0x464063:goto L464063;
case 0x464069:c.instructions+=2;goto B464069;
case 0x46406e:c.instructions+=1;goto B46406e;
case 0x464074:goto L464074;
case 0x464076:c.instructions+=1;goto B464076;
case 0x464080:goto L464080;
case 0x464086:c.instructions+=2;goto B464086;
case 0x464089:c.instructions+=1;goto B464089;
case 0x46408b:goto L46408b;
case 0x46408c:c.instructions+=1;goto B46408c;
case 0x46408e:goto L46408e;
case 0x46408f:c.instructions+=1;goto B46408f;
case 0x464091:goto L464091;
case 0x464093:c.instructions+=1;goto B464093;
case 0x464095:goto L464095;
case 0x464097:c.instructions+=1;goto B464097;
case 0x46409c:goto L46409c;
case 0x4640a3:c.instructions+=1;goto B4640a3;
case 0x4640a5:goto L4640a5;
case 0x4640a7:c.instructions+=1;goto B4640a7;
case 0x4640ac:goto L4640ac;
case 0x4640b3:c.instructions+=1;goto B4640b3;
case 0x4640b5:goto L4640b5;
case 0x4640b7:c.instructions+=1;goto B4640b7;
case 0x4640bc:goto L4640bc;
case 0x4640c3:goto L4640c3;
case 0x4640c6:goto L4640c6;
case 0x4640c8:goto L4640c8;
case 0x4640cc:c.instructions+=1;goto B4640cc;
case 0x4640ce:goto L4640ce;
case 0x4640cf:c.instructions+=2;goto B4640cf;
case 0x4640d2:c.instructions+=1;goto B4640d2;
case 0x4640d4:goto L4640d4;
case 0x4640d6:goto L4640d6;
case 0x4640d9:c.instructions+=1;goto B4640d9;
case 0x4640db:goto L4640db;
case 0x4640dd:c.instructions+=3;goto B4640dd;
case 0x4640de:c.instructions+=2;goto B4640de;
case 0x4640e1:c.instructions+=1;goto B4640e1;
case 0x4640e3:goto L4640e3;
case 0x4640e9:c.instructions+=8;goto B4640e9;
case 0x4640ec:c.instructions+=7;goto B4640ec;
case 0x4640f0:c.instructions+=6;goto B4640f0;
case 0x4640f4:c.instructions+=5;goto B4640f4;
case 0x4640f8:c.instructions+=4;goto B4640f8;
case 0x4640f9:c.instructions+=3;goto B4640f9;
case 0x4640fc:c.instructions+=2;goto B4640fc;
case 0x464100:c.instructions+=1;goto B464100;
case 0x464106:goto L464106;
case 0x464108:c.instructions+=3;goto B464108;
case 0x46410c:c.instructions+=2;goto B46410c;
case 0x46410f:c.instructions+=1;goto B46410f;
case 0x464115:goto L464115;
case 0x464118:c.instructions+=2;goto B464118;
case 0x46411a:c.instructions+=1;goto B46411a;
case 0x464120:goto L464120;
case 0x464124:c.instructions+=2;goto B464124;
case 0x464127:c.instructions+=1;goto B464127;
case 0x46412d:goto L46412d;
case 0x464131:c.instructions+=3;goto B464131;
case 0x464133:c.instructions+=2;goto B464133;
case 0x464136:c.instructions+=1;goto B464136;
case 0x46413c:goto L46413c;
case 0x46413e:c.instructions+=4;goto B46413e;
case 0x464142:c.instructions+=3;goto B464142;
case 0x464146:c.instructions+=2;goto B464146;
case 0x46414a:c.instructions+=1;goto B46414a;
case 0x464150:goto L464150;
case 0x464154:c.instructions+=2;goto B464154;
case 0x464157:c.instructions+=1;goto B464157;
case 0x46415d:goto L46415d;
case 0x46415f:c.instructions+=1;goto B46415f;
case 0x464160:goto L464160;
case 0x464165:c.instructions+=1;goto B464165;
case 0x464167:goto L464167;
case 0x46416a:c.instructions+=6;goto B46416a;
case 0x46416b:c.instructions+=5;goto B46416b;
case 0x464170:c.instructions+=4;goto B464170;
case 0x464172:c.instructions+=3;goto B464172;
case 0x464174:c.instructions+=2;goto B464174;
case 0x464179:c.instructions+=1;goto B464179;
case 0x46417b:goto L46417b;
case 0x46417f:c.instructions+=3;goto B46417f;
case 0x464182:c.instructions+=2;goto B464182;
case 0x464184:c.instructions+=1;goto B464184;
case 0x46418a:goto L46418a;
case 0x46418d:c.instructions+=1;goto B46418d;
case 0x464190:goto L464190;
case 0x464196:c.instructions+=1;goto B464196;
case 0x464198:goto L464198;
case 0x46419b:c.instructions+=2;goto B46419b;
case 0x46419f:c.instructions+=1;goto B46419f;
case 0x4641a1:goto L4641a1;
case 0x4641a4:c.instructions+=2;goto B4641a4;
case 0x4641a6:c.instructions+=1;goto B4641a6;
case 0x4641a8:goto L4641a8;
case 0x4641ad:goto L4641ad;
case 0x4641b0:c.instructions+=4;goto B4641b0;
case 0x4641b6:c.instructions+=3;goto B4641b6;
case 0x4641b7:c.instructions+=2;goto B4641b7;
case 0x4641b8:c.instructions+=1;goto B4641b8;
case 0x4641bd:goto L4641bd;
case 0x4641c0:c.instructions+=2;goto B4641c0;
case 0x4641c2:c.instructions+=1;goto B4641c2;
case 0x4641c4:goto L4641c4;
case 0x4641c6:goto L4641c6;
case 0x4641ca:c.instructions+=1;goto B4641ca;
case 0x4641cc:goto L4641cc;
case 0x4641cd:c.instructions+=2;goto B4641cd;
case 0x4641d0:c.instructions+=1;goto B4641d0;
case 0x4641d2:goto L4641d2;
case 0x4641d4:c.instructions+=1;goto B4641d4;
case 0x4641d6:goto L4641d6;
case 0x4641d8:c.instructions+=1;goto B4641d8;
case 0x4641da:goto L4641da;
case 0x4641dc:c.instructions+=1;goto B4641dc;
case 0x4641de:goto L4641de;
case 0x4641e0:goto L4641e0;
case 0x4641e6:c.instructions+=2;goto B4641e6;
case 0x4641e9:c.instructions+=1;goto B4641e9;
case 0x4641eb:goto L4641eb;
case 0x4641ec:c.instructions+=1;goto B4641ec;
case 0x4641ee:goto L4641ee;
case 0x4641ef:c.instructions+=1;goto B4641ef;
case 0x4641f1:goto L4641f1;
case 0x4641f3:c.instructions+=1;goto B4641f3;
case 0x4641f5:goto L4641f5;
case 0x4641f7:c.instructions+=1;goto B4641f7;
case 0x4641fc:goto L4641fc;
case 0x464203:c.instructions+=1;goto B464203;
case 0x464205:goto L464205;
case 0x464207:c.instructions+=1;goto B464207;
case 0x46420c:goto L46420c;
case 0x464213:c.instructions+=1;goto B464213;
case 0x464215:goto L464215;
case 0x464217:c.instructions+=1;goto B464217;
case 0x46421c:goto L46421c;
case 0x464223:goto L464223;
case 0x464226:goto L464226;
case 0x464228:goto L464228;
case 0x46422c:c.instructions+=1;goto B46422c;
case 0x46422e:goto L46422e;
case 0x46422f:c.instructions+=2;goto B46422f;
case 0x464232:c.instructions+=1;goto B464232;
case 0x464234:goto L464234;
case 0x464236:goto L464236;
case 0x464238:c.instructions+=1;goto B464238;
case 0x46423a:goto L46423a;
case 0x46423c:c.instructions+=3;goto B46423c;
case 0x46423d:c.instructions+=2;goto B46423d;
case 0x464240:c.instructions+=1;goto B464240;
case 0x464242:goto L464242;
case 0x464246:c.instructions+=9;goto B464246;
case 0x464248:c.instructions+=8;goto B464248;
case 0x46424b:c.instructions+=7;goto B46424b;
case 0x46424f:c.instructions+=6;goto B46424f;
case 0x464253:c.instructions+=5;goto B464253;
case 0x464254:c.instructions+=4;goto B464254;
case 0x464257:c.instructions+=3;goto B464257;
case 0x464259:c.instructions+=2;goto B464259;
case 0x46425d:c.instructions+=1;goto B46425d;
case 0x46425f:goto L46425f;
case 0x464263:c.instructions+=2;goto B464263;
case 0x464266:c.instructions+=1;goto B464266;
case 0x464268:goto L464268;
case 0x46426b:c.instructions+=6;goto B46426b;
case 0x46426c:c.instructions+=5;goto B46426c;
case 0x464271:c.instructions+=4;goto B464271;
case 0x464273:c.instructions+=3;goto B464273;
case 0x464275:c.instructions+=2;goto B464275;
case 0x464277:c.instructions+=1;goto B464277;
case 0x46427d:goto L46427d;
case 0x464281:c.instructions+=7;goto B464281;
case 0x464285:c.instructions+=6;goto B464285;
case 0x464286:c.instructions+=5;goto B464286;
case 0x464289:c.instructions+=4;goto B464289;
case 0x46428c:c.instructions+=3;goto B46428c;
case 0x464290:c.instructions+=2;goto B464290;
case 0x464294:c.instructions+=1;goto B464294;
case 0x46429a:goto L46429a;
case 0x46429e:c.instructions+=5;goto B46429e;
case 0x4642a1:c.instructions+=4;goto B4642a1;
case 0x4642a3:c.instructions+=3;goto B4642a3;
case 0x4642a5:c.instructions+=2;goto B4642a5;
case 0x4642a6:c.instructions+=1;goto B4642a6;
case 0x4642ac:goto L4642ac;
case 0x4642b0:goto L4642b0;
case 0x4642b3:c.instructions+=3;goto B4642b3;
case 0x4642b7:c.instructions+=2;goto B4642b7;
case 0x4642ba:c.instructions+=1;goto B4642ba;
case 0x4642bc:goto L4642bc;
case 0x4642bf:c.instructions+=4;goto B4642bf;
case 0x4642c2:c.instructions+=3;goto B4642c2;
case 0x4642c7:c.instructions+=2;goto B4642c7;
case 0x4642cd:c.instructions+=1;goto B4642cd;
case 0x4642cf:goto L4642cf;
case 0x4642d3:c.instructions+=4;goto B4642d3;
case 0x4642d9:c.instructions+=3;goto B4642d9;
case 0x4642da:c.instructions+=2;goto B4642da;
case 0x4642db:c.instructions+=1;goto B4642db;
case 0x4642e0:goto L4642e0;
case 0x4642e3:c.instructions+=2;goto B4642e3;
case 0x4642e5:c.instructions+=1;goto B4642e5;
case 0x4642e7:goto L4642e7;
case 0x4642ed:c.instructions+=1;goto B4642ed;
case 0x4642f0:goto L4642f0;
case 0x4642f3:c.instructions+=8;goto B4642f3;
case 0x4642f4:c.instructions+=7;goto B4642f4;
case 0x4642f9:c.instructions+=6;goto B4642f9;
case 0x4642fb:c.instructions+=5;goto B4642fb;
case 0x4642fd:c.instructions+=4;goto B4642fd;
case 0x464301:c.instructions+=3;goto B464301;
case 0x464302:c.instructions+=2;goto B464302;
case 0x464303:c.instructions+=1;goto B464303;
case 0x464308:goto L464308;
case 0x46430b:c.instructions+=2;goto B46430b;
case 0x46430d:c.instructions+=1;goto B46430d;
case 0x46430f:goto L46430f;
case 0x464313:c.instructions+=9;goto B464313;
case 0x464316:c.instructions+=8;goto B464316;
case 0x464319:c.instructions+=7;goto B464319;
case 0x46431e:c.instructions+=6;goto B46431e;
case 0x464324:c.instructions+=5;goto B464324;
case 0x464327:c.instructions+=4;goto B464327;
case 0x464328:c.instructions+=3;goto B464328;
case 0x46432d:c.instructions+=2;goto B46432d;
case 0x46432f:c.instructions+=1;goto B46432f;
case 0x464331:goto L464331;
case 0x464334:c.instructions+=2;goto B464334;
case 0x464336:c.instructions+=1;goto B464336;
case 0x46433c:goto L46433c;
case 0x46433d:c.instructions+=4;goto B46433d;
case 0x46433e:c.instructions+=3;goto B46433e;
case 0x46433f:c.instructions+=2;goto B46433f;
case 0x464342:c.instructions+=1;goto B464342;
case 0x464350:goto L464350;
case 0x464353:c.instructions+=2;goto B464353;
case 0x464355:c.instructions+=1;goto B464355;
case 0x464357:goto L464357;
case 0x46435a:c.instructions+=2;goto B46435a;
case 0x46435c:c.instructions+=1;goto B46435c;
case 0x46435e:goto L46435e;
case 0x464361:c.instructions+=2;goto B464361;
case 0x464363:c.instructions+=1;goto B464363;
case 0x464365:goto L464365;
case 0x464367:goto L464367;
case 0x464370:goto L464370;
case 0x464371:c.instructions+=7;goto B464371;
case 0x464375:c.instructions+=6;goto B464375;
case 0x464376:c.instructions+=5;goto B464376;
case 0x464377:c.instructions+=4;goto B464377;
case 0x464379:c.instructions+=3;goto B464379;
case 0x46437c:c.instructions+=2;goto B46437c;
case 0x46437e:c.instructions+=1;goto B46437e;
case 0x464380:goto L464380;
case 0x464383:c.instructions+=2;goto B464383;
case 0x464385:c.instructions+=1;goto B464385;
case 0x464387:goto L464387;
case 0x46438a:c.instructions+=4;goto B46438a;
case 0x46438b:c.instructions+=3;goto B46438b;
case 0x46438e:c.instructions+=2;goto B46438e;
case 0x46438f:c.instructions+=1;goto B46438f;
case 0x464394:goto L464394;
case 0x46439a:c.instructions+=4;goto B46439a;
case 0x46439d:c.instructions+=3;goto B46439d;
case 0x46439f:c.instructions+=2;goto B46439f;
case 0x4643a2:c.instructions+=1;goto B4643a2;
case 0x4643a4:goto L4643a4;
case 0x4643a7:c.instructions+=2;goto B4643a7;
case 0x4643a9:c.instructions+=1;goto B4643a9;
case 0x4643ab:goto L4643ab;
case 0x4643ae:c.instructions+=1;goto B4643ae;
case 0x4643b0:goto L4643b0;
case 0x4643b3:c.instructions+=7;goto B4643b3;
case 0x4643b6:c.instructions+=6;goto B4643b6;
case 0x4643bc:c.instructions+=5;goto B4643bc;
case 0x4643c2:c.instructions+=4;goto B4643c2;
case 0x4643c8:c.instructions+=3;goto B4643c8;
case 0x4643ca:c.instructions+=2;goto B4643ca;
case 0x4643cd:c.instructions+=1;goto B4643cd;
case 0x4643cf:goto L4643cf;
case 0x4643d2:c.instructions+=2;goto B4643d2;
case 0x4643d4:c.instructions+=1;goto B4643d4;
case 0x4643d6:goto L4643d6;
case 0x4643d9:c.instructions+=2;goto B4643d9;
case 0x4643db:c.instructions+=1;goto B4643db;
case 0x4643dd:goto L4643dd;
case 0x4643e0:c.instructions+=2;goto B4643e0;
case 0x4643e2:c.instructions+=1;goto B4643e2;
case 0x4643e4:goto L4643e4;
case 0x4643e6:goto L4643e6;
case 0x4643e7:c.instructions+=3;goto B4643e7;
case 0x4643e8:c.instructions+=2;goto B4643e8;
case 0x4643e9:c.instructions+=1;goto B4643e9;
case 0x4643f0:goto L4643f0;
case 0x4643f5:c.instructions+=1;goto B4643f5;
case 0x464400:goto L464400;
case 0x464405:c.instructions+=1;goto B464405;
case 0x464410:goto L464410;
case 0x464411:c.instructions+=9;goto B464411;
case 0x464413:c.instructions+=8;goto B464413;
case 0x464416:c.instructions+=7;goto B464416;
case 0x464419:c.instructions+=6;goto B464419;
case 0x464420:c.instructions+=5;goto B464420;
case 0x464421:c.instructions+=4;goto B464421;
case 0x464422:c.instructions+=3;goto B464422;
case 0x464423:c.instructions+=2;goto B464423;
case 0x464425:c.instructions+=1;goto B464425;
case 0x46442b:goto L46442b;
case 0x46442d:c.instructions+=3;goto B46442d;
case 0x464431:c.instructions+=2;goto B464431;
case 0x464435:c.instructions+=1;goto B464435;
case 0x46443b:goto L46443b;
case 0x46443f:c.instructions+=1;goto B46443f;
case 0x464440:goto L464440;
case 0x464443:c.instructions+=11;goto B464443;
case 0x464447:c.instructions+=10;goto B464447;
case 0x464448:c.instructions+=9;goto B464448;
case 0x46444a:c.instructions+=8;goto B46444a;
case 0x46444f:c.instructions+=7;goto B46444f;
case 0x464452:c.instructions+=6;goto B464452;
case 0x464456:c.instructions+=5;goto B464456;
case 0x464457:c.instructions+=4;goto B464457;
case 0x464459:c.instructions+=3;goto B464459;
case 0x46445a:c.instructions+=2;goto B46445a;
case 0x46445b:c.instructions+=1;goto B46445b;
case 0x464460:goto L464460;
case 0x464463:c.instructions+=2;goto B464463;
case 0x464465:c.instructions+=1;goto B464465;
case 0x46446b:goto L46446b;
case 0x46446f:c.instructions+=2;goto B46446f;
case 0x464470:c.instructions+=1;goto B464470;
case 0x464475:goto L464475;
case 0x464478:c.instructions+=5;goto B464478;
case 0x464479:c.instructions+=4;goto B464479;
case 0x46447d:c.instructions+=3;goto B46447d;
case 0x46447e:c.instructions+=2;goto B46447e;
case 0x464482:c.instructions+=1;goto B464482;
case 0x464487:goto L464487;
case 0x46448d:c.instructions+=4;goto B46448d;
case 0x464490:c.instructions+=3;goto B464490;
case 0x464492:c.instructions+=2;goto B464492;
case 0x464495:c.instructions+=1;goto B464495;
case 0x464497:goto L464497;
case 0x464499:c.instructions+=1;goto B464499;
case 0x46449b:goto L46449b;
case 0x46449d:goto L46449d;
case 0x4644a0:c.instructions+=2;goto B4644a0;
case 0x4644a2:c.instructions+=1;goto B4644a2;
case 0x4644a4:goto L4644a4;
case 0x4644a7:c.instructions+=2;goto B4644a7;
case 0x4644a9:c.instructions+=1;goto B4644a9;
case 0x4644ab:goto L4644ab;
case 0x4644ae:c.instructions+=4;goto B4644ae;
case 0x4644b1:c.instructions+=3;goto B4644b1;
case 0x4644b3:c.instructions+=2;goto B4644b3;
case 0x4644b5:c.instructions+=1;goto B4644b5;
case 0x4644bb:goto L4644bb;
case 0x4644be:c.instructions+=2;goto B4644be;
case 0x4644c0:c.instructions+=1;goto B4644c0;
case 0x4644c2:goto L4644c2;
case 0x4644c4:c.instructions+=1;goto B4644c4;
case 0x4644ca:goto L4644ca;
case 0x4644ce:c.instructions+=2;goto B4644ce;
case 0x4644d0:c.instructions+=1;goto B4644d0;
case 0x4644d6:goto L4644d6;
case 0x4644d9:c.instructions+=5;goto B4644d9;
case 0x4644db:c.instructions+=4;goto B4644db;
case 0x4644dd:c.instructions+=3;goto B4644dd;
case 0x4644de:c.instructions+=2;goto B4644de;
case 0x4644e0:c.instructions+=1;goto B4644e0;
case 0x4644e3:goto L4644e3;
case 0x4644e5:c.instructions+=1;goto B4644e5;
case 0x4644eb:goto L4644eb;
case 0x4644ee:c.instructions+=2;goto B4644ee;
case 0x4644f0:c.instructions+=1;goto B4644f0;
case 0x4644f6:goto L4644f6;
case 0x464500:goto L464500;
case 0x464508:c.instructions+=11;goto B464508;
case 0x464510:c.instructions+=10;goto B464510;
case 0x464518:c.instructions+=9;goto B464518;
case 0x46451b:c.instructions+=8;goto B46451b;
case 0x46451e:c.instructions+=7;goto B46451e;
case 0x464520:c.instructions+=6;goto B464520;
case 0x464522:c.instructions+=5;goto B464522;
case 0x464526:c.instructions+=4;goto B464526;
case 0x464527:c.instructions+=3;goto B464527;
case 0x464528:c.instructions+=2;goto B464528;
case 0x464529:c.instructions+=1;goto B464529;
case 0x46452e:goto L46452e;
case 0x464532:c.instructions+=2;goto B464532;
case 0x464533:c.instructions+=1;goto B464533;
case 0x464538:goto L464538;
case 0x46453c:c.instructions+=5;goto B46453c;
case 0x46453e:c.instructions+=4;goto B46453e;
case 0x464542:c.instructions+=3;goto B464542;
case 0x464543:c.instructions+=2;goto B464543;
case 0x464544:c.instructions+=1;goto B464544;
case 0x464549:goto L464549;
case 0x46454d:c.instructions+=5;goto B46454d;
case 0x464551:c.instructions+=4;goto B464551;
case 0x464552:c.instructions+=3;goto B464552;
case 0x464555:c.instructions+=2;goto B464555;
case 0x464556:c.instructions+=1;goto B464556;
case 0x46455b:goto L46455b;
case 0x46455f:c.instructions+=4;goto B46455f;
case 0x464562:c.instructions+=3;goto B464562;
case 0x464564:c.instructions+=2;goto B464564;
case 0x464567:c.instructions+=1;goto B464567;
case 0x464569:goto L464569;
case 0x46456c:c.instructions+=2;goto B46456c;
case 0x46456e:c.instructions+=1;goto B46456e;
case 0x464570:goto L464570;
case 0x464574:c.instructions+=1;goto B464574;
case 0x464576:goto L464576;
case 0x464578:c.instructions+=1;goto B464578;
case 0x46457a:goto L46457a;
case 0x46457e:c.instructions+=2;goto B46457e;
case 0x464580:c.instructions+=1;goto B464580;
case 0x464582:goto L464582;
case 0x464584:c.instructions+=1;goto B464584;
case 0x464587:goto L464587;
case 0x464589:goto L464589;
case 0x46458b:c.instructions+=2;goto B46458b;
case 0x46458d:c.instructions+=1;goto B46458d;
case 0x464590:goto L464590;
case 0x464594:c.instructions+=1;goto B464594;
case 0x464596:goto L464596;
case 0x464599:c.instructions+=5;goto B464599;
case 0x46459b:c.instructions+=4;goto B46459b;
case 0x46459d:c.instructions+=3;goto B46459d;
case 0x46459e:c.instructions+=2;goto B46459e;
case 0x4645a0:c.instructions+=1;goto B4645a0;
case 0x4645a3:goto L4645a3;
case 0x4645a7:c.instructions+=7;goto B4645a7;
case 0x4645ab:c.instructions+=6;goto B4645ab;
case 0x4645ac:c.instructions+=5;goto B4645ac;
case 0x4645af:c.instructions+=4;goto B4645af;
case 0x4645b1:c.instructions+=3;goto B4645b1;
case 0x4645b5:c.instructions+=2;goto B4645b5;
case 0x4645b9:c.instructions+=1;goto B4645b9;
case 0x4645bf:goto L4645bf;
case 0x4645c2:c.instructions+=3;goto B4645c2;
case 0x4645c3:c.instructions+=2;goto B4645c3;
case 0x4645c5:c.instructions+=1;goto B4645c5;
case 0x4645ca:goto L4645ca;
case 0x4645cb:c.instructions+=5;goto B4645cb;
case 0x4645cc:c.instructions+=4;goto B4645cc;
case 0x4645cd:c.instructions+=3;goto B4645cd;
case 0x4645cf:c.instructions+=2;goto B4645cf;
case 0x4645d0:c.instructions+=1;goto B4645d0;
case 0x4645e0:goto L4645e0;
case 0x4645e5:c.instructions+=1;goto B4645e5;
case 0x4645f0:goto L4645f0;
case 0x4645f5:c.instructions+=1;goto B4645f5;
case 0x464600:goto L464600;
case 0x464601:c.instructions+=10;goto B464601;
case 0x464603:c.instructions+=9;goto B464603;
case 0x464606:c.instructions+=8;goto B464606;
case 0x464609:c.instructions+=7;goto B464609;
case 0x464610:c.instructions+=6;goto B464610;
case 0x464611:c.instructions+=5;goto B464611;
case 0x464612:c.instructions+=4;goto B464612;
case 0x464613:c.instructions+=3;goto B464613;
case 0x464615:c.instructions+=2;goto B464615;
case 0x464619:c.instructions+=1;goto B464619;
case 0x46461f:goto L46461f;
case 0x464624:goto L464624;
case 0x464627:c.instructions+=3;goto B464627;
case 0x46462c:c.instructions+=2;goto B46462c;
case 0x46462e:c.instructions+=1;goto B46462e;
case 0x464634:goto L464634;
case 0x464637:c.instructions+=9;goto B464637;
case 0x46463b:c.instructions+=8;goto B46463b;
case 0x46463c:c.instructions+=7;goto B46463c;
case 0x46463e:c.instructions+=6;goto B46463e;
case 0x464642:c.instructions+=5;goto B464642;
case 0x464643:c.instructions+=4;goto B464643;
case 0x464644:c.instructions+=3;goto B464644;
case 0x464645:c.instructions+=2;goto B464645;
case 0x46464a:c.instructions+=1;goto B46464a;
case 0x46464f:goto L46464f;
case 0x464652:c.instructions+=2;goto B464652;
case 0x464654:c.instructions+=1;goto B464654;
case 0x464656:goto L464656;
case 0x464659:c.instructions+=1;goto B464659;
case 0x46465e:goto L46465e;
case 0x464662:c.instructions+=3;goto B464662;
case 0x464663:c.instructions+=2;goto B464663;
case 0x46466a:c.instructions+=1;goto B46466a;
case 0x46466f:goto L46466f;
case 0x464672:c.instructions+=5;goto B464672;
case 0x464673:c.instructions+=4;goto B464673;
case 0x464677:c.instructions+=3;goto B464677;
case 0x464678:c.instructions+=2;goto B464678;
case 0x46467c:c.instructions+=1;goto B46467c;
case 0x464681:goto L464681;
case 0x464687:c.instructions+=4;goto B464687;
case 0x46468a:c.instructions+=3;goto B46468a;
case 0x46468c:c.instructions+=2;goto B46468c;
case 0x46468f:c.instructions+=1;goto B46468f;
case 0x464691:goto L464691;
case 0x464693:c.instructions+=1;goto B464693;
case 0x464695:goto L464695;
case 0x464697:goto L464697;
case 0x46469a:c.instructions+=2;goto B46469a;
case 0x46469c:c.instructions+=1;goto B46469c;
case 0x46469e:goto L46469e;
case 0x4646a0:goto L4646a0;
case 0x4646a3:c.instructions+=2;goto B4646a3;
case 0x4646a5:c.instructions+=1;goto B4646a5;
case 0x4646a7:goto L4646a7;
case 0x4646aa:c.instructions+=1;goto B4646aa;
case 0x4646b0:goto L4646b0;
case 0x4646b3:c.instructions+=2;goto B4646b3;
case 0x4646b5:c.instructions+=1;goto B4646b5;
case 0x4646b7:goto L4646b7;
case 0x4646b9:c.instructions+=1;goto B4646b9;
case 0x4646bf:goto L4646bf;
case 0x4646c3:c.instructions+=2;goto B4646c3;
case 0x4646c5:c.instructions+=1;goto B4646c5;
case 0x4646cb:goto L4646cb;
case 0x4646cd:c.instructions+=3;goto B4646cd;
case 0x4646ce:c.instructions+=2;goto B4646ce;
case 0x4646d0:c.instructions+=1;goto B4646d0;
case 0x4646d3:goto L4646d3;
case 0x4646d5:c.instructions+=1;goto B4646d5;
case 0x4646db:goto L4646db;
case 0x4646de:c.instructions+=2;goto B4646de;
case 0x4646e0:c.instructions+=1;goto B4646e0;
case 0x4646e6:goto L4646e6;
case 0x4646f0:goto L4646f0;
case 0x4646f8:c.instructions+=11;goto B4646f8;
case 0x464700:c.instructions+=10;goto B464700;
case 0x464708:c.instructions+=9;goto B464708;
case 0x46470b:c.instructions+=8;goto B46470b;
case 0x46470e:c.instructions+=7;goto B46470e;
case 0x464710:c.instructions+=6;goto B464710;
case 0x464712:c.instructions+=5;goto B464712;
case 0x464716:c.instructions+=4;goto B464716;
case 0x464717:c.instructions+=3;goto B464717;
case 0x464718:c.instructions+=2;goto B464718;
case 0x464719:c.instructions+=1;goto B464719;
case 0x46471e:goto L46471e;
case 0x464722:c.instructions+=2;goto B464722;
case 0x464723:c.instructions+=1;goto B464723;
case 0x464728:goto L464728;
case 0x46472c:c.instructions+=5;goto B46472c;
case 0x46472e:c.instructions+=4;goto B46472e;
case 0x464732:c.instructions+=3;goto B464732;
case 0x464733:c.instructions+=2;goto B464733;
case 0x464734:c.instructions+=1;goto B464734;
case 0x464739:goto L464739;
case 0x46473d:c.instructions+=5;goto B46473d;
case 0x464741:c.instructions+=4;goto B464741;
case 0x464742:c.instructions+=3;goto B464742;
case 0x464745:c.instructions+=2;goto B464745;
case 0x464746:c.instructions+=1;goto B464746;
case 0x46474b:goto L46474b;
case 0x46474f:c.instructions+=4;goto B46474f;
case 0x464752:c.instructions+=3;goto B464752;
case 0x464754:c.instructions+=2;goto B464754;
case 0x464757:c.instructions+=1;goto B464757;
case 0x464759:goto L464759;
case 0x46475c:c.instructions+=2;goto B46475c;
case 0x46475e:c.instructions+=1;goto B46475e;
case 0x464760:goto L464760;
case 0x464764:c.instructions+=1;goto B464764;
case 0x464766:goto L464766;
case 0x464768:c.instructions+=1;goto B464768;
case 0x46476a:goto L46476a;
case 0x46476e:c.instructions+=2;goto B46476e;
case 0x464770:c.instructions+=1;goto B464770;
case 0x464772:goto L464772;
case 0x464774:c.instructions+=1;goto B464774;
case 0x464777:goto L464777;
case 0x464779:goto L464779;
case 0x46477b:c.instructions+=2;goto B46477b;
case 0x46477d:c.instructions+=1;goto B46477d;
case 0x464780:goto L464780;
case 0x464784:c.instructions+=1;goto B464784;
case 0x464786:goto L464786;
case 0x464788:c.instructions+=3;goto B464788;
case 0x464789:c.instructions+=2;goto B464789;
case 0x46478b:c.instructions+=1;goto B46478b;
case 0x46478e:goto L46478e;
case 0x464791:c.instructions+=2;goto B464791;
case 0x464797:c.instructions+=1;goto B464797;
case 0x46479d:goto L46479d;
case 0x4647a0:c.instructions+=3;goto B4647a0;
case 0x4647a1:c.instructions+=2;goto B4647a1;
case 0x4647a3:c.instructions+=1;goto B4647a3;
case 0x4647a8:goto L4647a8;
case 0x4647a9:c.instructions+=5;goto B4647a9;
case 0x4647aa:c.instructions+=4;goto B4647aa;
case 0x4647ab:c.instructions+=3;goto B4647ab;
case 0x4647ad:c.instructions+=2;goto B4647ad;
case 0x4647ae:c.instructions+=1;goto B4647ae;
case 0x4647c0:goto L4647c0;
case 0x4647c5:c.instructions+=1;goto B4647c5;
case 0x4647d0:goto L4647d0;
case 0x4647d5:c.instructions+=1;goto B4647d5;
case 0x4647e0:goto L4647e0;
case 0x4647e1:c.instructions+=7;goto B4647e1;
case 0x4647e3:c.instructions+=6;goto B4647e3;
case 0x4647e6:c.instructions+=5;goto B4647e6;
case 0x4647ed:c.instructions+=4;goto B4647ed;
case 0x4647ee:c.instructions+=3;goto B4647ee;
case 0x4647f0:c.instructions+=2;goto B4647f0;
case 0x4647f3:c.instructions+=1;goto B4647f3;
case 0x4647f9:goto L4647f9;
case 0x4647fe:c.instructions+=2;goto B4647fe;
case 0x464803:c.instructions+=1;goto B464803;
case 0x464809:goto L464809;
case 0x46480e:c.instructions+=1;goto B46480e;
case 0x464814:goto L464814;
case 0x464816:c.instructions+=4;goto B464816;
case 0x464817:c.instructions+=3;goto B464817;
case 0x46481a:c.instructions+=2;goto B46481a;
case 0x46481b:c.instructions+=1;goto B46481b;
case 0x464820:goto L464820;
case 0x464823:c.instructions+=1;goto B464823;
case 0x464825:goto L464825;
case 0x46482a:c.instructions+=2;goto B46482a;
case 0x46482f:c.instructions+=1;goto B46482f;
case 0x464831:goto L464831;
case 0x464833:c.instructions+=1;goto B464833;
case 0x464839:goto L464839;
case 0x46483e:c.instructions+=1;goto B46483e;
case 0x464843:goto L464843;
case 0x464846:c.instructions+=2;goto B464846;
case 0x464849:c.instructions+=1;goto B464849;
case 0x464850:goto L464850;
case 0x464851:c.instructions+=1;goto B464851;
case 0x464856:goto L464856;
case 0x464859:c.instructions+=4;goto B464859;
case 0x46485a:c.instructions+=3;goto B46485a;
case 0x46485b:c.instructions+=2;goto B46485b;
case 0x46485e:c.instructions+=1;goto B46485e;
case 0x464863:goto L464863;
case 0x464869:c.instructions+=4;goto B464869;
case 0x46486c:c.instructions+=3;goto B46486c;
case 0x46486e:c.instructions+=2;goto B46486e;
case 0x464871:c.instructions+=1;goto B464871;
case 0x464873:goto L464873;
case 0x464875:c.instructions+=1;goto B464875;
case 0x464877:goto L464877;
case 0x464879:goto L464879;
case 0x46487c:c.instructions+=2;goto B46487c;
case 0x46487e:c.instructions+=1;goto B46487e;
case 0x464880:goto L464880;
case 0x464883:c.instructions+=2;goto B464883;
case 0x464885:c.instructions+=1;goto B464885;
case 0x464887:goto L464887;
case 0x46488a:c.instructions+=1;goto B46488a;
case 0x46488c:goto L46488c;
case 0x46488f:c.instructions+=2;goto B46488f;
case 0x464891:c.instructions+=1;goto B464891;
case 0x464893:goto L464893;
case 0x464895:c.instructions+=1;goto B464895;
case 0x46489b:goto L46489b;
case 0x46489d:c.instructions+=3;goto B46489d;
case 0x46489e:c.instructions+=2;goto B46489e;
case 0x4648a0:c.instructions+=1;goto B4648a0;
case 0x4648a3:goto L4648a3;
case 0x4648a5:c.instructions+=2;goto B4648a5;
case 0x4648a7:c.instructions+=1;goto B4648a7;
case 0x4648ad:goto L4648ad;
case 0x4648b0:c.instructions+=2;goto B4648b0;
case 0x4648b2:c.instructions+=1;goto B4648b2;
case 0x4648b8:goto L4648b8;
case 0x4648c0:goto L4648c0;
case 0x4648c7:c.instructions+=2;goto B4648c7;
case 0x4648ca:c.instructions+=1;goto B4648ca;
case 0x4648cc:goto L4648cc;
case 0x4648d1:c.instructions+=2;goto B4648d1;
case 0x4648d4:c.instructions+=1;goto B4648d4;
case 0x4648d6:goto L4648d6;
case 0x4648d8:c.instructions+=1;goto B4648d8;
case 0x4648de:goto L4648de;
case 0x4648e0:c.instructions+=1;goto B4648e0;
case 0x4648e3:goto L4648e3;
case 0x4648e8:goto L4648e8;
case 0x4648ee:c.instructions+=7;goto B4648ee;
case 0x4648f1:c.instructions+=6;goto B4648f1;
case 0x4648f7:c.instructions+=5;goto B4648f7;
case 0x4648fa:c.instructions+=4;goto B4648fa;
case 0x4648fb:c.instructions+=3;goto B4648fb;
case 0x4648fc:c.instructions+=2;goto B4648fc;
case 0x4648ff:c.instructions+=1;goto B4648ff;
case 0x464904:goto L464904;
case 0x464907:c.instructions+=6;goto B464907;
case 0x46490a:c.instructions+=5;goto B46490a;
case 0x46490d:c.instructions+=4;goto B46490d;
case 0x464910:c.instructions+=3;goto B464910;
case 0x464911:c.instructions+=2;goto B464911;
case 0x464912:c.instructions+=1;goto B464912;
case 0x464917:goto L464917;
case 0x46491a:c.instructions+=4;goto B46491a;
case 0x46491d:c.instructions+=3;goto B46491d;
case 0x46491f:c.instructions+=2;goto B46491f;
case 0x464922:c.instructions+=1;goto B464922;
case 0x464924:goto L464924;
case 0x464927:c.instructions+=2;goto B464927;
case 0x46492a:c.instructions+=1;goto B46492a;
case 0x46492c:goto L46492c;
case 0x46492f:goto L46492f;
case 0x464932:c.instructions+=5;goto B464932;
case 0x464935:c.instructions+=4;goto B464935;
case 0x464938:c.instructions+=3;goto B464938;
case 0x464939:c.instructions+=2;goto B464939;
case 0x46493a:c.instructions+=1;goto B46493a;
case 0x46493f:goto L46493f;
case 0x464942:c.instructions+=4;goto B464942;
case 0x464943:c.instructions+=3;goto B464943;
case 0x464946:c.instructions+=2;goto B464946;
case 0x464947:c.instructions+=1;goto B464947;
case 0x46494c:goto L46494c;
case 0x46494f:c.instructions+=4;goto B46494f;
case 0x464952:c.instructions+=3;goto B464952;
case 0x464954:c.instructions+=2;goto B464954;
case 0x464957:c.instructions+=1;goto B464957;
case 0x464959:goto L464959;
case 0x46495c:c.instructions+=2;goto B46495c;
case 0x46495e:c.instructions+=1;goto B46495e;
case 0x464964:goto L464964;
case 0x464967:c.instructions+=2;goto B464967;
case 0x46496a:c.instructions+=1;goto B46496a;
case 0x46496c:goto L46496c;
case 0x46496e:c.instructions+=2;goto B46496e;
case 0x464970:c.instructions+=1;goto B464970;
case 0x464973:goto L464973;
case 0x464976:c.instructions+=1;goto B464976;
case 0x464979:goto L464979;
case 0x46497b:c.instructions+=3;goto B46497b;
case 0x46497c:c.instructions+=2;goto B46497c;
case 0x46497e:c.instructions+=1;goto B46497e;
case 0x464981:goto L464981;
case 0x464984:c.instructions+=1;goto B464984;
case 0x464987:goto L464987;
case 0x46498a:c.instructions+=5;goto B46498a;
case 0x46498d:c.instructions+=4;goto B46498d;
case 0x46498e:c.instructions+=3;goto B46498e;
case 0x464991:c.instructions+=2;goto B464991;
case 0x464994:c.instructions+=1;goto B464994;
case 0x46499a:goto L46499a;
case 0x46499d:goto L46499d;
case 0x46499e:c.instructions+=3;goto B46499e;
case 0x4649a1:c.instructions+=2;goto B4649a1;
case 0x4649a4:c.instructions+=1;goto B4649a4;
case 0x4649aa:goto L4649aa;
case 0x4649ad:c.instructions+=3;goto B4649ad;
case 0x4649ae:c.instructions+=2;goto B4649ae;
case 0x4649b0:c.instructions+=1;goto B4649b0;
case 0x4649b5:goto L4649b5;
case 0x4649b6:c.instructions+=1;goto B4649b6;
case 0x4649b7:goto L4649b7;
case 0x4649b8:c.instructions+=3;goto B4649b8;
case 0x4649ba:c.instructions+=2;goto B4649ba;
case 0x4649bb:c.instructions+=1;goto B4649bb;
case 0x4649c0:goto L4649c0;
case 0x4649c5:c.instructions+=1;goto B4649c5;
case 0x4649d0:goto L4649d0;
case 0x4649d5:c.instructions+=1;goto B4649d5;
case 0x4649e0:goto L4649e0;
case 0x4649e2:c.instructions+=15;goto B4649e2;
case 0x4649e4:c.instructions+=14;goto B4649e4;
case 0x4649ea:c.instructions+=13;goto B4649ea;
case 0x4649ed:c.instructions+=12;goto B4649ed;
case 0x4649f0:c.instructions+=11;goto B4649f0;
case 0x4649f3:c.instructions+=10;goto B4649f3;
case 0x4649f6:c.instructions+=9;goto B4649f6;
case 0x4649f9:c.instructions+=8;goto B4649f9;
case 0x4649fc:c.instructions+=7;goto B4649fc;
case 0x4649ff:c.instructions+=6;goto B4649ff;
case 0x464a02:c.instructions+=5;goto B464a02;
case 0x464a05:c.instructions+=4;goto B464a05;
case 0x464a08:c.instructions+=3;goto B464a08;
case 0x464a0b:c.instructions+=2;goto B464a0b;
case 0x464a0e:c.instructions+=1;goto B464a0e;
case 0x464a10:goto L464a10;
case 0x464a11:c.instructions+=11;goto B464a11;
case 0x464a13:c.instructions+=10;goto B464a13;
case 0x464a16:c.instructions+=9;goto B464a16;
case 0x464a1c:c.instructions+=8;goto B464a1c;
case 0x464a1d:c.instructions+=7;goto B464a1d;
case 0x464a1e:c.instructions+=6;goto B464a1e;
case 0x464a1f:c.instructions+=5;goto B464a1f;
case 0x464a20:c.instructions+=4;goto B464a20;
case 0x464a22:c.instructions+=3;goto B464a22;
case 0x464a24:c.instructions+=2;goto B464a24;
case 0x464a29:c.instructions+=1;goto B464a29;
case 0x464a2d:goto L464a2d;
case 0x464a2f:goto L464a2f;
case 0x464a32:c.instructions+=3;goto B464a32;
case 0x464a34:c.instructions+=2;goto B464a34;
case 0x464a36:c.instructions+=1;goto B464a36;
case 0x464a38:goto L464a38;
case 0x464a3c:c.instructions+=1;goto B464a3c;
case 0x464a40:goto L464a40;
case 0x464a42:c.instructions+=4;goto B464a42;
case 0x464a45:c.instructions+=3;goto B464a45;
case 0x464a48:c.instructions+=2;goto B464a48;
case 0x464a4a:c.instructions+=1;goto B464a4a;
case 0x464a4c:goto L464a4c;
case 0x464a4f:c.instructions+=1;goto B464a4f;
case 0x464a50:goto L464a50;
case 0x464a53:c.instructions+=6;goto B464a53;
case 0x464a55:c.instructions+=5;goto B464a55;
case 0x464a57:c.instructions+=4;goto B464a57;
case 0x464a59:c.instructions+=3;goto B464a59;
case 0x464a5b:c.instructions+=2;goto B464a5b;
case 0x464a60:c.instructions+=1;goto B464a60;
case 0x464a62:goto L464a62;
case 0x464a66:c.instructions+=2;goto B464a66;
case 0x464a68:c.instructions+=1;goto B464a68;
case 0x464a6a:goto L464a6a;
case 0x464a6d:c.instructions+=5;goto B464a6d;
case 0x464a70:c.instructions+=4;goto B464a70;
case 0x464a73:c.instructions+=3;goto B464a73;
case 0x464a75:c.instructions+=2;goto B464a75;
case 0x464a77:c.instructions+=1;goto B464a77;
case 0x464a79:goto L464a79;
case 0x464a7b:c.instructions+=1;goto B464a7b;
case 0x464a7d:goto L464a7d;
case 0x464a80:c.instructions+=3;goto B464a80;
case 0x464a81:c.instructions+=2;goto B464a81;
case 0x464a83:c.instructions+=1;goto B464a83;
case 0x464a85:goto L464a85;
case 0x464a87:c.instructions+=1;goto B464a87;
case 0x464a89:goto L464a89;
case 0x464a8c:c.instructions+=4;goto B464a8c;
case 0x464a90:c.instructions+=3;goto B464a90;
case 0x464a92:c.instructions+=2;goto B464a92;
case 0x464a96:c.instructions+=1;goto B464a96;
case 0x464a98:goto L464a98;
case 0x464a9a:c.instructions+=4;goto B464a9a;
case 0x464a9d:c.instructions+=3;goto B464a9d;
case 0x464aa4:c.instructions+=2;goto B464aa4;
case 0x464aaa:c.instructions+=1;goto B464aaa;
case 0x464aac:goto L464aac;
case 0x464aaf:c.instructions+=4;goto B464aaf;
case 0x464ab1:c.instructions+=3;goto B464ab1;
case 0x464ab8:c.instructions+=2;goto B464ab8;
case 0x464abe:c.instructions+=1;goto B464abe;
case 0x464ac0:goto L464ac0;
case 0x464ac1:c.instructions+=6;goto B464ac1;
case 0x464ac2:c.instructions+=5;goto B464ac2;
case 0x464ac3:c.instructions+=4;goto B464ac3;
case 0x464ac4:c.instructions+=3;goto B464ac4;
case 0x464ac6:c.instructions+=2;goto B464ac6;
case 0x464ac7:c.instructions+=1;goto B464ac7;
case 0x464ad0:goto L464ad0;
case 0x464ad1:c.instructions+=4;goto B464ad1;
case 0x464ad4:c.instructions+=3;goto B464ad4;
case 0x464ad6:c.instructions+=2;goto B464ad6;
case 0x464ad7:c.instructions+=1;goto B464ad7;
case 0x464ad9:goto L464ad9;
case 0x464add:c.instructions+=1;goto B464add;
case 0x464ae0:goto L464ae0;
case 0x464ae2:c.instructions+=2;goto B464ae2;
case 0x464ae4:c.instructions+=1;goto B464ae4;
case 0x464ae7:goto L464ae7;
case 0x464ae9:c.instructions+=4;goto B464ae9;
case 0x464aec:c.instructions+=3;goto B464aec;
case 0x464af2:c.instructions+=2;goto B464af2;
case 0x464af4:c.instructions+=1;goto B464af4;
case 0x464af6:goto L464af6;
case 0x464af9:c.instructions+=2;goto B464af9;
case 0x464afb:c.instructions+=1;goto B464afb;
case 0x464afd:goto L464afd;
case 0x464afe:c.instructions+=3;goto B464afe;
case 0x464b00:c.instructions+=2;goto B464b00;
case 0x464b01:c.instructions+=1;goto B464b01;
case 0x464b04:goto L464b04;
case 0x464b05:c.instructions+=3;goto B464b05;
case 0x464b07:c.instructions+=2;goto B464b07;
case 0x464b08:c.instructions+=1;goto B464b08;
case 0x464b10:goto L464b10;
case 0x464b11:c.instructions+=5;goto B464b11;
case 0x464b12:c.instructions+=4;goto B464b12;
case 0x464b14:c.instructions+=3;goto B464b14;
case 0x464b17:c.instructions+=2;goto B464b17;
case 0x464b19:c.instructions+=1;goto B464b19;
case 0x464b1b:goto L464b1b;
case 0x464b1c:c.instructions+=1;goto B464b1c;
case 0x464b20:goto L464b20;
case 0x464b23:c.instructions+=3;goto B464b23;
case 0x464b26:c.instructions+=2;goto B464b26;
case 0x464b29:c.instructions+=1;goto B464b29;
case 0x464b2b:goto L464b2b;
case 0x464b2e:c.instructions+=1;goto B464b2e;
case 0x464b30:goto L464b30;
case 0x464b33:c.instructions+=2;goto B464b33;
case 0x464b35:c.instructions+=1;goto B464b35;
case 0x464b37:goto L464b37;
case 0x464b39:c.instructions+=2;goto B464b39;
case 0x464b3b:c.instructions+=1;goto B464b3b;
case 0x464b3e:goto L464b3e;
case 0x464b40:c.instructions+=5;goto B464b40;
case 0x464b43:c.instructions+=4;goto B464b43;
case 0x464b48:c.instructions+=3;goto B464b48;
case 0x464b4e:c.instructions+=2;goto B464b4e;
case 0x464b50:c.instructions+=1;goto B464b50;
case 0x464b52:goto L464b52;
case 0x464b54:c.instructions+=3;goto B464b54;
case 0x464b55:c.instructions+=2;goto B464b55;
case 0x464b57:c.instructions+=1;goto B464b57;
case 0x464b5a:goto L464b5a;
case 0x464b5d:c.instructions+=3;goto B464b5d;
case 0x464b60:c.instructions+=2;goto B464b60;
case 0x464b63:c.instructions+=1;goto B464b63;
case 0x464b65:goto L464b65;
case 0x464b68:c.instructions+=1;goto B464b68;
case 0x464b6a:goto L464b6a;
case 0x464b6c:c.instructions+=2;goto B464b6c;
case 0x464b6e:c.instructions+=1;goto B464b6e;
case 0x464b71:goto L464b71;
case 0x464b73:c.instructions+=3;goto B464b73;
case 0x464b76:c.instructions+=2;goto B464b76;
case 0x464b7b:c.instructions+=1;goto B464b7b;
case 0x464b82:goto L464b82;
case 0x464b83:c.instructions+=1;goto B464b83;
case 0x464b88:goto L464b88;
case 0x464b8b:goto L464b8b;
case 0x464b8e:c.instructions+=2;goto B464b8e;
case 0x464b90:c.instructions+=1;goto B464b90;
case 0x464b92:goto L464b92;
case 0x464b93:goto L464b93;
case 0x464b94:c.instructions+=2;goto B464b94;
case 0x464b95:c.instructions+=1;goto B464b95;
case 0x464ba0:goto L464ba0;
case 0x464ba4:c.instructions+=2;goto B464ba4;
case 0x464ba7:c.instructions+=1;goto B464ba7;
case 0x464bb0:goto L464bb0;
case 0x464bb1:c.instructions+=5;goto B464bb1;
case 0x464bb2:c.instructions+=4;goto B464bb2;
case 0x464bb4:c.instructions+=3;goto B464bb4;
case 0x464bb7:c.instructions+=2;goto B464bb7;
case 0x464bb9:c.instructions+=1;goto B464bb9;
case 0x464bbb:goto L464bbb;
case 0x464bc0:goto L464bc0;
case 0x464bc2:c.instructions+=2;goto B464bc2;
case 0x464bc4:c.instructions+=1;goto B464bc4;
case 0x464bc7:goto L464bc7;
case 0x464bca:c.instructions+=2;goto B464bca;
case 0x464bcc:c.instructions+=1;goto B464bcc;
case 0x464bce:goto L464bce;
case 0x464bd1:c.instructions+=2;goto B464bd1;
case 0x464bd3:c.instructions+=1;goto B464bd3;
case 0x464bd5:goto L464bd5;
case 0x464bd7:c.instructions+=2;goto B464bd7;
case 0x464bd9:c.instructions+=1;goto B464bd9;
case 0x464bdc:goto L464bdc;
case 0x464bdf:c.instructions+=2;goto B464bdf;
case 0x464be1:c.instructions+=1;goto B464be1;
case 0x464be3:goto L464be3;
case 0x464be4:c.instructions+=2;goto B464be4;
case 0x464be5:c.instructions+=1;goto B464be5;
case 0x464bf0:goto L464bf0;
case 0x464bf1:c.instructions+=3;goto B464bf1;
case 0x464bf4:c.instructions+=2;goto B464bf4;
case 0x464bf6:c.instructions+=1;goto B464bf6;
case 0x464bf8:goto L464bf8;
case 0x464bfa:c.instructions+=2;goto B464bfa;
case 0x464bfc:c.instructions+=1;goto B464bfc;
case 0x464bff:goto L464bff;
case 0x464c02:c.instructions+=2;goto B464c02;
case 0x464c04:c.instructions+=1;goto B464c04;
case 0x464c06:goto L464c06;
case 0x464c07:c.instructions+=1;goto B464c07;
case 0x464c10:goto L464c10;
case 0x464c15:c.instructions+=7;goto B464c15;
case 0x464c16:c.instructions+=6;goto B464c16;
case 0x464c17:c.instructions+=5;goto B464c17;
case 0x464c18:c.instructions+=4;goto B464c18;
case 0x464c1a:c.instructions+=3;goto B464c1a;
case 0x464c1d:c.instructions+=2;goto B464c1d;
case 0x464c1f:c.instructions+=1;goto B464c1f;
case 0x464c21:goto L464c21;
case 0x464c25:c.instructions+=5;goto B464c25;
case 0x464c29:c.instructions+=4;goto B464c29;
case 0x464c2c:c.instructions+=3;goto B464c2c;
case 0x464c2f:c.instructions+=2;goto B464c2f;
case 0x464c32:c.instructions+=1;goto B464c32;
case 0x464c34:goto L464c34;
case 0x464c3b:goto L464c3b;
case 0x464c3e:c.instructions+=3;goto B464c3e;
case 0x464c40:c.instructions+=2;goto B464c40;
case 0x464c44:c.instructions+=1;goto B464c44;
case 0x464c46:goto L464c46;
case 0x464c48:c.instructions+=3;goto B464c48;
case 0x464c49:c.instructions+=2;goto B464c49;
case 0x464c4b:c.instructions+=1;goto B464c4b;
case 0x464c4e:goto L464c4e;
case 0x464c50:c.instructions+=2;goto B464c50;
case 0x464c52:c.instructions+=1;goto B464c52;
case 0x464c55:goto L464c55;
case 0x464c58:c.instructions+=2;goto B464c58;
case 0x464c5a:c.instructions+=1;goto B464c5a;
case 0x464c5c:goto L464c5c;
case 0x464c5f:c.instructions+=2;goto B464c5f;
case 0x464c61:c.instructions+=1;goto B464c61;
case 0x464c63:goto L464c63;
case 0x464c65:c.instructions+=3;goto B464c65;
case 0x464c66:c.instructions+=2;goto B464c66;
case 0x464c68:c.instructions+=1;goto B464c68;
case 0x464c6b:goto L464c6b;
case 0x464c6d:c.instructions+=2;goto B464c6d;
case 0x464c6f:c.instructions+=1;goto B464c6f;
case 0x464c72:goto L464c72;
case 0x464c75:c.instructions+=2;goto B464c75;
case 0x464c77:c.instructions+=1;goto B464c77;
case 0x464c79:goto L464c79;
case 0x464c7a:c.instructions+=3;goto B464c7a;
case 0x464c7b:c.instructions+=2;goto B464c7b;
case 0x464c7c:c.instructions+=1;goto B464c7c;
case 0x464c80:goto L464c80;
case 0x464c81:c.instructions+=7;goto B464c81;
case 0x464c82:c.instructions+=6;goto B464c82;
case 0x464c83:c.instructions+=5;goto B464c83;
case 0x464c85:c.instructions+=4;goto B464c85;
case 0x464c88:c.instructions+=3;goto B464c88;
case 0x464c8a:c.instructions+=2;goto B464c8a;
case 0x464c8c:c.instructions+=1;goto B464c8c;
case 0x464c8e:goto L464c8e;
case 0x464c90:goto L464c90;
case 0x464c92:c.instructions+=3;goto B464c92;
case 0x464c95:c.instructions+=2;goto B464c95;
case 0x464c97:c.instructions+=1;goto B464c97;
case 0x464c99:goto L464c99;
case 0x464c9b:c.instructions+=2;goto B464c9b;
case 0x464c9d:c.instructions+=1;goto B464c9d;
case 0x464c9f:goto L464c9f;
case 0x464ca2:c.instructions+=2;goto B464ca2;
case 0x464ca4:c.instructions+=1;goto B464ca4;
case 0x464ca6:goto L464ca6;
case 0x464ca8:c.instructions+=3;goto B464ca8;
case 0x464cab:c.instructions+=2;goto B464cab;
case 0x464cad:c.instructions+=1;goto B464cad;
case 0x464caf:goto L464caf;
case 0x464cb1:c.instructions+=2;goto B464cb1;
case 0x464cb3:c.instructions+=1;goto B464cb3;
case 0x464cb5:goto L464cb5;
case 0x464cb8:c.instructions+=7;goto B464cb8;
case 0x464cbb:c.instructions+=6;goto B464cbb;
case 0x464cbe:c.instructions+=5;goto B464cbe;
case 0x464cc1:c.instructions+=4;goto B464cc1;
case 0x464cc2:c.instructions+=3;goto B464cc2;
case 0x464cc3:c.instructions+=2;goto B464cc3;
case 0x464cc4:c.instructions+=1;goto B464cc4;
case 0x464cd0:goto L464cd0;
case 0x464cd3:c.instructions+=2;goto B464cd3;
case 0x464cd5:c.instructions+=1;goto B464cd5;
case 0x464cd7:goto L464cd7;
case 0x464cdb:c.instructions+=1;goto B464cdb;
case 0x464ce0:goto L464ce0;
case 0x464ce3:c.instructions+=4;goto B464ce3;
case 0x464ce6:c.instructions+=3;goto B464ce6;
case 0x464ce9:c.instructions+=2;goto B464ce9;
case 0x464ceb:c.instructions+=1;goto B464ceb;
case 0x464ced:goto L464ced;
case 0x464cf0:c.instructions+=2;goto B464cf0;
case 0x464cf2:c.instructions+=1;goto B464cf2;
case 0x464cf4:goto L464cf4;
case 0x464cf6:goto L464cf6;
case 0x464d00:goto L464d00;
case 0x464d03:c.instructions+=2;goto B464d03;
case 0x464d05:c.instructions+=1;goto B464d05;
case 0x464d07:goto L464d07;
case 0x464d0b:c.instructions+=1;goto B464d0b;
case 0x464d10:goto L464d10;
case 0x464d13:c.instructions+=4;goto B464d13;
case 0x464d16:c.instructions+=3;goto B464d16;
case 0x464d19:c.instructions+=2;goto B464d19;
case 0x464d1b:c.instructions+=1;goto B464d1b;
case 0x464d1d:goto L464d1d;
case 0x464d20:c.instructions+=2;goto B464d20;
case 0x464d22:c.instructions+=1;goto B464d22;
case 0x464d24:goto L464d24;
case 0x464d30:goto L464d30;
case 0x464d34:c.instructions+=6;goto B464d34;
case 0x464d35:c.instructions+=5;goto B464d35;
case 0x464d38:c.instructions+=4;goto B464d38;
case 0x464d3a:c.instructions+=3;goto B464d3a;
case 0x464d3d:c.instructions+=2;goto B464d3d;
case 0x464d41:c.instructions+=1;goto B464d41;
case 0x464d43:goto L464d43;
case 0x464d45:c.instructions+=2;goto B464d45;
case 0x464d47:c.instructions+=1;goto B464d47;
case 0x464d4a:goto L464d4a;
case 0x464d4d:c.instructions+=2;goto B464d4d;
case 0x464d4f:c.instructions+=1;goto B464d4f;
case 0x464d51:goto L464d51;
case 0x464d52:c.instructions+=1;goto B464d52;
case 0x464d60:goto L464d60;
case 0x464d61:c.instructions+=5;goto B464d61;
case 0x464d64:c.instructions+=4;goto B464d64;
case 0x464d66:c.instructions+=3;goto B464d66;
case 0x464d6d:c.instructions+=2;goto B464d6d;
case 0x464d71:c.instructions+=1;goto B464d71;
case 0x464d73:goto L464d73;
case 0x464d75:c.instructions+=2;goto B464d75;
case 0x464d77:c.instructions+=1;goto B464d77;
case 0x464d7a:goto L464d7a;
case 0x464d7d:c.instructions+=2;goto B464d7d;
case 0x464d7f:c.instructions+=1;goto B464d7f;
case 0x464d81:goto L464d81;
case 0x464d83:c.instructions+=2;goto B464d83;
case 0x464d84:c.instructions+=1;goto B464d84;
case 0x464d90:goto L464d90;
case 0x464d95:c.instructions+=1;goto B464d95;
case 0x464da0:goto L464da0;
case 0x464da5:c.instructions+=1;goto B464da5;
case 0x464db0:goto L464db0;
case 0x464db4:c.instructions+=7;goto B464db4;
case 0x464db5:c.instructions+=6;goto B464db5;
case 0x464db8:c.instructions+=5;goto B464db8;
case 0x464dba:c.instructions+=4;goto B464dba;
case 0x464dbd:c.instructions+=3;goto B464dbd;
case 0x464dc0:c.instructions+=2;goto B464dc0;
case 0x464dc4:c.instructions+=1;goto B464dc4;
case 0x464dc6:goto L464dc6;
case 0x464dc8:c.instructions+=2;goto B464dc8;
case 0x464dca:c.instructions+=1;goto B464dca;
case 0x464dcd:goto L464dcd;
case 0x464dd0:c.instructions+=2;goto B464dd0;
case 0x464dd2:c.instructions+=1;goto B464dd2;
case 0x464dd4:goto L464dd4;
case 0x464dd5:c.instructions+=1;goto B464dd5;
case 0x464de0:goto L464de0;
case 0x464de1:c.instructions+=9;goto B464de1;
case 0x464de2:c.instructions+=8;goto B464de2;
case 0x464de3:c.instructions+=7;goto B464de3;
case 0x464de5:c.instructions+=6;goto B464de5;
case 0x464de8:c.instructions+=5;goto B464de8;
case 0x464dea:c.instructions+=4;goto B464dea;
case 0x464dec:c.instructions+=3;goto B464dec;
case 0x464def:c.instructions+=2;goto B464def;
case 0x464df2:c.instructions+=1;goto B464df2;
case 0x464df4:goto L464df4;
case 0x464df6:c.instructions+=2;goto B464df6;
case 0x464df8:c.instructions+=1;goto B464df8;
case 0x464dfb:goto L464dfb;
case 0x464dfe:c.instructions+=2;goto B464dfe;
case 0x464e00:c.instructions+=1;goto B464e00;
case 0x464e02:goto L464e02;
case 0x464e05:c.instructions+=5;goto B464e05;
case 0x464e06:c.instructions+=4;goto B464e06;
case 0x464e07:c.instructions+=3;goto B464e07;
case 0x464e09:c.instructions+=2;goto B464e09;
case 0x464e0a:c.instructions+=1;goto B464e0a;
case 0x464e10:goto L464e10;
case 0x464e15:c.instructions+=1;goto B464e15;
case 0x464e20:goto L464e20;
case 0x464e25:c.instructions+=1;goto B464e25;
case 0x464e30:goto L464e30;
case 0x464e35:c.instructions+=1;goto B464e35;
case 0x464e40:goto L464e40;
case 0x464e45:c.instructions+=1;goto B464e45;
case 0x464e49:goto L464e49;
case 0x464e4a:c.instructions+=12;goto B464e4a;
case 0x464e4b:c.instructions+=11;goto B464e4b;
case 0x464e4c:c.instructions+=10;goto B464e4c;
case 0x464e4d:c.instructions+=9;goto B464e4d;
case 0x464e4e:c.instructions+=8;goto B464e4e;
case 0x464e4f:c.instructions+=7;goto B464e4f;
case 0x464e50:c.instructions+=6;goto B464e50;
case 0x464e51:c.instructions+=5;goto B464e51;
case 0x464e52:c.instructions+=4;goto B464e52;
case 0x464e55:c.instructions+=3;goto B464e55;
case 0x464e56:c.instructions+=2;goto B464e56;
case 0x464e58:c.instructions+=1;goto B464e58;
case 0x464e5d:goto L464e5d;
case 0x464e60:c.instructions+=6;goto B464e60;
case 0x464e64:c.instructions+=5;goto B464e64;
case 0x464e66:c.instructions+=4;goto B464e66;
case 0x464e68:c.instructions+=3;goto B464e68;
case 0x464e6a:c.instructions+=2;goto B464e6a;
case 0x464e6d:c.instructions+=1;goto B464e6d;
case 0x464e72:goto L464e72;
case 0x464e75:c.instructions+=2;goto B464e75;
case 0x464e77:c.instructions+=1;goto B464e77;
case 0x464e79:goto L464e79;
case 0x464e7b:c.instructions+=1;goto B464e7b;
case 0x464e7d:goto L464e7d;
case 0x464e80:c.instructions+=4;goto B464e80;
case 0x464e85:c.instructions+=3;goto B464e85;
case 0x464e87:c.instructions+=2;goto B464e87;
case 0x464e8a:c.instructions+=1;goto B464e8a;
case 0x464e8c:goto L464e8c;
case 0x464e8f:c.instructions+=4;goto B464e8f;
case 0x464e95:c.instructions+=3;goto B464e95;
case 0x464e96:c.instructions+=2;goto B464e96;
case 0x464e97:c.instructions+=1;goto B464e97;
case 0x464e9c:goto L464e9c;
case 0x464e9f:goto L464e9f;
case 0x464ea0:c.instructions+=3;goto B464ea0;
case 0x464ea1:c.instructions+=2;goto B464ea1;
case 0x464ea2:c.instructions+=1;goto B464ea2;
case 0x464eb0:goto L464eb0;
case 0x464eb1:c.instructions+=4;goto B464eb1;
case 0x464eb4:c.instructions+=3;goto B464eb4;
case 0x464eb5:c.instructions+=2;goto B464eb5;
case 0x464eb7:c.instructions+=1;goto B464eb7;
case 0x464ebc:goto L464ebc;
case 0x464ebf:c.instructions+=2;goto B464ebf;
case 0x464ec1:c.instructions+=1;goto B464ec1;
case 0x464ec3:goto L464ec3;
case 0x464ec5:c.instructions+=1;goto B464ec5;
case 0x464eca:goto L464eca;
case 0x464ecc:c.instructions+=3;goto B464ecc;
case 0x464ecd:c.instructions+=2;goto B464ecd;
case 0x464ece:c.instructions+=1;goto B464ece;
case 0x464ecf:goto L464ecf;
case 0x464ed2:c.instructions+=6;goto B464ed2;
case 0x464ed8:c.instructions+=5;goto B464ed8;
case 0x464edb:c.instructions+=4;goto B464edb;
case 0x464ee0:c.instructions+=3;goto B464ee0;
case 0x464ee2:c.instructions+=2;goto B464ee2;
case 0x464ee8:c.instructions+=1;goto B464ee8;
case 0x464eea:goto L464eea;
case 0x464eef:goto L464eef;
case 0x464ef1:c.instructions+=6;goto B464ef1;
case 0x464ef6:c.instructions+=5;goto B464ef6;
case 0x464efc:c.instructions+=4;goto B464efc;
case 0x464efe:c.instructions+=3;goto B464efe;
case 0x464f00:c.instructions+=2;goto B464f00;
case 0x464f02:c.instructions+=1;goto B464f02;
case 0x464f07:goto L464f07;
case 0x464f09:c.instructions+=3;goto B464f09;
case 0x464f0a:c.instructions+=2;goto B464f0a;
case 0x464f0b:c.instructions+=1;goto B464f0b;
case 0x464f10:goto L464f10;
case 0x464f11:c.instructions+=5;goto B464f11;
case 0x464f14:c.instructions+=4;goto B464f14;
case 0x464f16:c.instructions+=3;goto B464f16;
case 0x464f1d:c.instructions+=2;goto B464f1d;
case 0x464f24:c.instructions+=1;goto B464f24;
case 0x464f29:goto L464f29;
case 0x464f2c:c.instructions+=2;goto B464f2c;
case 0x464f2e:c.instructions+=1;goto B464f2e;
case 0x464f30:goto L464f30;
case 0x464f33:c.instructions+=6;goto B464f33;
case 0x464f35:c.instructions+=5;goto B464f35;
case 0x464f38:c.instructions+=4;goto B464f38;
case 0x464f3b:c.instructions+=3;goto B464f3b;
case 0x464f3e:c.instructions+=2;goto B464f3e;
case 0x464f3f:c.instructions+=1;goto B464f3f;
case 0x464f44:goto L464f44;
case 0x464f47:c.instructions+=6;goto B464f47;
case 0x464f4a:c.instructions+=5;goto B464f4a;
case 0x464f4d:c.instructions+=4;goto B464f4d;
case 0x464f4f:c.instructions+=3;goto B464f4f;
case 0x464f52:c.instructions+=2;goto B464f52;
case 0x464f53:c.instructions+=1;goto B464f53;
case 0x464f60:goto L464f60;
case 0x464f63:c.instructions+=2;goto B464f63;
case 0x464f64:c.instructions+=1;goto B464f64;
case 0x464f66:goto L464f66;
case 0x464f69:c.instructions+=2;goto B464f69;
case 0x464f6c:c.instructions+=1;goto B464f6c;
case 0x464f6e:goto L464f6e;
case 0x464f71:c.instructions+=2;goto B464f71;
case 0x464f74:c.instructions+=1;goto B464f74;
case 0x464f77:goto L464f77;
case 0x464f7a:c.instructions+=1;goto B464f7a;
case 0x464f7c:goto L464f7c;
case 0x464f7f:c.instructions+=2;goto B464f7f;
case 0x464f82:c.instructions+=1;goto B464f82;
case 0x464f84:goto L464f84;
case 0x464f87:c.instructions+=2;goto B464f87;
case 0x464f8a:c.instructions+=1;goto B464f8a;
case 0x464f8d:goto L464f8d;
case 0x464f90:c.instructions+=2;goto B464f90;
case 0x464f91:c.instructions+=1;goto B464f91;
case 0x464f93:goto L464f93;
case 0x464f96:c.instructions+=2;goto B464f96;
case 0x464f98:c.instructions+=1;goto B464f98;
case 0x464f9a:goto L464f9a;
case 0x464f9d:goto L464f9d;
case 0x464fa0:goto L464fa0;
case 0x464fa7:c.instructions+=4;goto B464fa7;
case 0x464faa:c.instructions+=3;goto B464faa;
case 0x464fad:c.instructions+=2;goto B464fad;
case 0x464fb0:c.instructions+=1;goto B464fb0;
case 0x464fc0:goto L464fc0;
case 0x464fc3:c.instructions+=11;goto B464fc3;
case 0x464fc4:c.instructions+=10;goto B464fc4;
case 0x464fc5:c.instructions+=9;goto B464fc5;
case 0x464fc6:c.instructions+=8;goto B464fc6;
case 0x464fc8:c.instructions+=7;goto B464fc8;
case 0x464fcb:c.instructions+=6;goto B464fcb;
case 0x464fce:c.instructions+=5;goto B464fce;
case 0x464fcf:c.instructions+=4;goto B464fcf;
case 0x464fd2:c.instructions+=3;goto B464fd2;
case 0x464fd5:c.instructions+=2;goto B464fd5;
case 0x464fd9:c.instructions+=1;goto B464fd9;
case 0x464fdb:goto L464fdb;
case 0x464fdc:c.instructions+=6;goto B464fdc;
case 0x464fdd:c.instructions+=5;goto B464fdd;
case 0x464fde:c.instructions+=4;goto B464fde;
case 0x464fe0:c.instructions+=3;goto B464fe0;
case 0x464fe1:c.instructions+=2;goto B464fe1;
case 0x464fe4:c.instructions+=1;goto B464fe4;
case 0x464fe5:goto L464fe5;
case 0x464fe9:c.instructions+=1;goto B464fe9;
case 0x464ff0:goto L464ff0;
case 0x464ff3:c.instructions+=3;goto B464ff3;
case 0x464ff6:c.instructions+=2;goto B464ff6;
case 0x464ffc:c.instructions+=1;goto B464ffc;
default:missing_instruction(c.pc);}
B464000:L464000:{c.instructions+=2;NFSU2_TR(0x464000);
u8 U[24];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+24))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B464004:{NFSU2_TR(0x464004);
if(r1(R+518)){{goto L46400e;}}
}
B464006:L464006:{c.instructions+=3;NFSU2_TR(0x464006);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B464007:{NFSU2_TR(0x464007);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46400a:{NFSU2_TR(0x46400a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464000u);}goto L464000;}}
}
B46400c:L46400c:{c.instructions+=1;NFSU2_TR(0x46400c);
{goto L464013;}
}
B46400e:L46400e:{c.instructions+=2;NFSU2_TR(0x46400e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464011:{NFSU2_TR(0x464011);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464039;}}
}
B464013:L464013:{c.instructions+=8;NFSU2_TR(0x464013);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464016:{NFSU2_TR(0x464016);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46401a:{NFSU2_TR(0x46401a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46401e:{NFSU2_TR(0x46401e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B46401f:{NFSU2_TR(0x46401f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464022:{NFSU2_TR(0x464022);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B464025:{NFSU2_TR(0x464025);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464029:{NFSU2_TR(0x464029);
if(r1(R+518)){{goto L46429a;}}
}
B46402f:L46402f:{c.instructions+=2;NFSU2_TR(0x46402f);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464033:{NFSU2_TR(0x464033);
if(r1(R+518)){{goto L46429a;}}
}
B464039:L464039:{c.instructions+=3;NFSU2_TR(0x464039);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46403c:{NFSU2_TR(0x46403c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46403e:{NFSU2_TR(0x46403e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x463fd0u,463);}
}
B464040:L464040:{c.instructions+=2;NFSU2_TR(0x464040);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464045:{NFSU2_TR(0x464045);
if(r1(R+518)){{goto L46429a;}}
}
B46404b:L46404b:{c.instructions+=3;NFSU2_TR(0x46404b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46404f:{NFSU2_TR(0x46404f);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464053:{NFSU2_TR(0x464053);
if(r1(R+518)){{goto L46429a;}}
}
B464059:L464059:{c.instructions+=3;NFSU2_TR(0x464059);
__builtin_memmove((R+24),(R+12),4);
}
B46405b:{NFSU2_TR(0x46405b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46405d:{NFSU2_TR(0x46405d);
if(r1(R+518)){{goto L464120;}}
}
B464063:L464063:{c.instructions+=3;NFSU2_TR(0x464063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464069:{NFSU2_TR(0x464069);
u8 U[24];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B46406e:{NFSU2_TR(0x46406e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464115;}}
}
B464074:L464074:{c.instructions+=2;NFSU2_TR(0x464074);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B464076:{NFSU2_TR(0x464076);
{goto L464080;}
}
B464080:L464080:{c.instructions+=3;NFSU2_TR(0x464080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464086:{NFSU2_TR(0x464086);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B464089:{NFSU2_TR(0x464089);
if(r1(R+518)){{goto L4640b5;}}
}
B46408b:L46408b:{c.instructions+=2;NFSU2_TR(0x46408b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46408c:{NFSU2_TR(0x46408c);
if(r1(R+518)){{goto L4640a5;}}
}
B46408e:L46408e:{c.instructions+=2;NFSU2_TR(0x46408e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46408f:{NFSU2_TR(0x46408f);
if(r1(R+518)){{goto L464095;}}
}
B464091:L464091:{c.instructions+=2;NFSU2_TR(0x464091);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B464093:{NFSU2_TR(0x464093);
{goto L4640c6;}
}
B464095:L464095:{c.instructions+=2;NFSU2_TR(0x464095);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464097:{NFSU2_TR(0x464097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46409cull));
TAIL_STATIC(0x43c1c0u,43c);
}
B46409c:L46409c:{c.instructions+=2;NFSU2_TR(0x46409c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecb14ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4640a3:{NFSU2_TR(0x4640a3);
{goto L4640c3;}
}
B4640a5:L4640a5:{c.instructions+=2;NFSU2_TR(0x4640a5);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4640a7:{NFSU2_TR(0x4640a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4640acull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4640ac:L4640ac:{c.instructions+=2;NFSU2_TR(0x4640ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecae4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4640b3:{NFSU2_TR(0x4640b3);
{goto L4640c3;}
}
B4640b5:L4640b5:{c.instructions+=2;NFSU2_TR(0x4640b5);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4640b7:{NFSU2_TR(0x4640b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4640bcull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4640bc:L4640bc:{c.instructions+=1;NFSU2_TR(0x4640bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecaa8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4640c3:L4640c3:{c.instructions+=1;NFSU2_TR(0x4640c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4640c6:L4640c6:{c.instructions+=1;NFSU2_TR(0x4640c6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4640c8:L4640c8:{c.instructions+=2;NFSU2_TR(0x4640c8);
u8 U[24];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4640cc:{NFSU2_TR(0x4640cc);
if(r1(R+518)){{goto L4640d6;}}
}
B4640ce:L4640ce:{c.instructions+=3;NFSU2_TR(0x4640ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4640cf:{NFSU2_TR(0x4640cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4640d2:{NFSU2_TR(0x4640d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4640c8u);}goto L4640c8;}}
}
B4640d4:L4640d4:{c.instructions+=1;NFSU2_TR(0x4640d4);
{goto L4640e3;}
}
B4640d6:L4640d6:{c.instructions+=2;NFSU2_TR(0x4640d6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4640d9:{NFSU2_TR(0x4640d9);
if(r1(R+518)){{goto L4640e3;}}
}
B4640db:L4640db:{c.instructions+=4;NFSU2_TR(0x4640db);
__builtin_memmove((R+4),(R+28),4);
}
B4640dd:{NFSU2_TR(0x4640dd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4640de:{NFSU2_TR(0x4640de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4640e1:{NFSU2_TR(0x4640e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464080u);}goto L464080;}}
}
B4640e3:L4640e3:{c.instructions+=9;NFSU2_TR(0x4640e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4640e9:{NFSU2_TR(0x4640e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4640ec:{NFSU2_TR(0x4640ec);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4640f0:{NFSU2_TR(0x4640f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4640f4:{NFSU2_TR(0x4640f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4640f8:{NFSU2_TR(0x4640f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4640f9:{NFSU2_TR(0x4640f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4640fc:{NFSU2_TR(0x4640fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464100:{NFSU2_TR(0x464100);
if(r1(R+518)){{goto L46429a;}}
}
B464106:L464106:{c.instructions+=4;NFSU2_TR(0x464106);
__builtin_memmove((R+8),(R+0),4);
}
B464108:{NFSU2_TR(0x464108);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46410c:{NFSU2_TR(0x46410c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46410f:{NFSU2_TR(0x46410f);
if(r1(R+518)){{goto L46429a;}}
}
B464115:L464115:{c.instructions+=3;NFSU2_TR(0x464115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464118:{NFSU2_TR(0x464118);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46411a:{NFSU2_TR(0x46411a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464063u);}goto L464063;}}
}
B464120:L464120:{c.instructions+=3;NFSU2_TR(0x464120);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464124:{NFSU2_TR(0x464124);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464127:{NFSU2_TR(0x464127);
if(r1(R+518)){{goto L46429a;}}
}
B46412d:L46412d:{c.instructions+=4;NFSU2_TR(0x46412d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464131:{NFSU2_TR(0x464131);
__builtin_memmove((R+4),(R+0),4);
}
B464133:{NFSU2_TR(0x464133);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464136:{NFSU2_TR(0x464136);
if(r1(R+518)){{goto L46429a;}}
}
B46413c:L46413c:{c.instructions+=5;NFSU2_TR(0x46413c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46413e:{NFSU2_TR(0x46413e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B464142:{NFSU2_TR(0x464142);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464146:{NFSU2_TR(0x464146);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46414a:{NFSU2_TR(0x46414a);
__builtin_memmove((R+12),(R+12),4);
}
B464150:L464150:{c.instructions+=3;NFSU2_TR(0x464150);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464154:{NFSU2_TR(0x464154);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B464157:{NFSU2_TR(0x464157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46427d;}}
}
B46415d:L46415d:{c.instructions+=2;NFSU2_TR(0x46415d);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B46415f:{NFSU2_TR(0x46415f);
}
B464160:L464160:{c.instructions+=2;NFSU2_TR(0x464160);
u8 U[15];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B464165:{NFSU2_TR(0x464165);
if(r1(R+518)){{goto L46417b;}}
}
B464167:L464167:{c.instructions+=7;NFSU2_TR(0x464167);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46416a:{NFSU2_TR(0x46416a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B46416b:{NFSU2_TR(0x46416b);
w4(R+24,u32(0x3ull));
}
B464170:{NFSU2_TR(0x464170);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x464170);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x464170);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B464172:{NFSU2_TR(0x464172);
__builtin_memmove((R+12),(R+8),4);
}
B464174:{NFSU2_TR(0x464174);
u8 U[15];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B464179:{NFSU2_TR(0x464179);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464167u);}goto L464167;}}
}
B46417b:L46417b:{c.instructions+=4;NFSU2_TR(0x46417b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46417f:{NFSU2_TR(0x46417f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464182:{NFSU2_TR(0x464182);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464184:{NFSU2_TR(0x464184);
if(r1(R+518)){{goto L464268;}}
}
B46418a:L46418a:{c.instructions+=2;NFSU2_TR(0x46418a);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B46418d:{NFSU2_TR(0x46418d);
__builtin_memmove((R+4),(R+4),4);
}
B464190:L464190:{c.instructions+=2;NFSU2_TR(0x464190);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464196:{NFSU2_TR(0x464196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4641a1;}}
}
B464198:L464198:{c.instructions+=3;NFSU2_TR(0x464198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46419b:{NFSU2_TR(0x46419b);
u8 U[24];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+20))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B46419f:{NFSU2_TR(0x46419f);
if(r1(R+518)){{goto L4641ad;}}
}
B4641a1:L4641a1:{c.instructions+=3;NFSU2_TR(0x4641a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4641a4:{NFSU2_TR(0x4641a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4641a6:{NFSU2_TR(0x4641a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464190u);}goto L464190;}}
}
B4641a8:L4641a8:{c.instructions+=1;NFSU2_TR(0x4641a8);
{goto L464268;}
}
B4641ad:L4641ad:{c.instructions+=5;NFSU2_TR(0x4641ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4641b0:{NFSU2_TR(0x4641b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4641b6:{NFSU2_TR(0x4641b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4641b7:{NFSU2_TR(0x4641b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4641b8:{NFSU2_TR(0x4641b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4641bdull));
TAIL_STATIC(0x458e70u,458);
}
B4641bd:L4641bd:{c.instructions+=3;NFSU2_TR(0x4641bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4641c0:{NFSU2_TR(0x4641c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4641c2:{NFSU2_TR(0x4641c2);
if(r1(R+518)){{goto L4641de;}}
}
B4641c4:L4641c4:{c.instructions+=1;NFSU2_TR(0x4641c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4641c6:L4641c6:{c.instructions+=2;NFSU2_TR(0x4641c6);
u8 U[24];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+28))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4641ca:{NFSU2_TR(0x4641ca);
if(r1(R+518)){{goto L4641d6;}}
}
B4641cc:L4641cc:{c.instructions+=3;NFSU2_TR(0x4641cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4641cd:{NFSU2_TR(0x4641cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4641d0:{NFSU2_TR(0x4641d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4641c6u);}goto L4641c6;}}
}
B4641d2:L4641d2:{c.instructions+=2;NFSU2_TR(0x4641d2);
__builtin_memmove((R+0),(R+28),4);
}
B4641d4:{NFSU2_TR(0x4641d4);
{goto L464242;}
}
B4641d6:L4641d6:{c.instructions+=2;NFSU2_TR(0x4641d6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4641d8:{NFSU2_TR(0x4641d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4641de;}}
}
B4641da:L4641da:{c.instructions+=2;NFSU2_TR(0x4641da);
__builtin_memmove((R+0),(R+28),4);
}
B4641dc:{NFSU2_TR(0x4641dc);
{goto L464242;}
}
B4641de:L4641de:{c.instructions+=1;NFSU2_TR(0x4641de);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4641e0:L4641e0:{c.instructions+=3;NFSU2_TR(0x4641e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4641e6:{NFSU2_TR(0x4641e6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4641e9:{NFSU2_TR(0x4641e9);
if(r1(R+518)){{goto L464215;}}
}
B4641eb:L4641eb:{c.instructions+=2;NFSU2_TR(0x4641eb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4641ec:{NFSU2_TR(0x4641ec);
if(r1(R+518)){{goto L464205;}}
}
B4641ee:L4641ee:{c.instructions+=2;NFSU2_TR(0x4641ee);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4641ef:{NFSU2_TR(0x4641ef);
if(r1(R+518)){{goto L4641f5;}}
}
B4641f1:L4641f1:{c.instructions+=2;NFSU2_TR(0x4641f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4641f3:{NFSU2_TR(0x4641f3);
{goto L464226;}
}
B4641f5:L4641f5:{c.instructions+=2;NFSU2_TR(0x4641f5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4641f7:{NFSU2_TR(0x4641f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4641fcull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4641fc:L4641fc:{c.instructions+=2;NFSU2_TR(0x4641fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecb14ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B464203:{NFSU2_TR(0x464203);
{goto L464223;}
}
B464205:L464205:{c.instructions+=2;NFSU2_TR(0x464205);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464207:{NFSU2_TR(0x464207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46420cull));
TAIL_STATIC(0x43c1c0u,43c);
}
B46420c:L46420c:{c.instructions+=2;NFSU2_TR(0x46420c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecae4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B464213:{NFSU2_TR(0x464213);
{goto L464223;}
}
B464215:L464215:{c.instructions+=2;NFSU2_TR(0x464215);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464217:{NFSU2_TR(0x464217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46421cull));
TAIL_STATIC(0x43c1c0u,43c);
}
B46421c:L46421c:{c.instructions+=1;NFSU2_TR(0x46421c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecaa8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B464223:L464223:{c.instructions+=1;NFSU2_TR(0x464223);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B464226:L464226:{c.instructions+=1;NFSU2_TR(0x464226);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B464228:L464228:{c.instructions+=2;NFSU2_TR(0x464228);
u8 U[24];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B46422c:{NFSU2_TR(0x46422c);
if(r1(R+518)){{goto L464236;}}
}
B46422e:L46422e:{c.instructions+=3;NFSU2_TR(0x46422e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B46422f:{NFSU2_TR(0x46422f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B464232:{NFSU2_TR(0x464232);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464228u);}goto L464228;}}
}
B464234:L464234:{c.instructions+=1;NFSU2_TR(0x464234);
{goto L464242;}
}
B464236:L464236:{c.instructions+=2;NFSU2_TR(0x464236);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464238:{NFSU2_TR(0x464238);
if(r1(R+518)){{goto L464242;}}
}
B46423a:L46423a:{c.instructions+=4;NFSU2_TR(0x46423a);
__builtin_memmove((R+8),(R+28),4);
}
B46423c:{NFSU2_TR(0x46423c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46423d:{NFSU2_TR(0x46423d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B464240:{NFSU2_TR(0x464240);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4641e0u);}goto L4641e0;}}
}
B464242:L464242:{c.instructions+=10;NFSU2_TR(0x464242);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464246:{NFSU2_TR(0x464246);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B464248:{NFSU2_TR(0x464248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46424b:{NFSU2_TR(0x46424b);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46424f:{NFSU2_TR(0x46424f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464253:{NFSU2_TR(0x464253);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B464254:{NFSU2_TR(0x464254);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464257:{NFSU2_TR(0x464257);
w1(R+4,u8(0x1ull));
}
B464259:{NFSU2_TR(0x464259);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46425d:{NFSU2_TR(0x46425d);
if(r1(R+518)){{goto L46429a;}}
}
B46425f:L46425f:{c.instructions+=3;NFSU2_TR(0x46425f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464263:{NFSU2_TR(0x464263);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464266:{NFSU2_TR(0x464266);
if(r1(R+518)){{goto L46429a;}}
}
B464268:L464268:{c.instructions+=7;NFSU2_TR(0x464268);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46426b:{NFSU2_TR(0x46426b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B46426c:{NFSU2_TR(0x46426c);
w4(R+24,u32(0x3ull));
}
B464271:{NFSU2_TR(0x464271);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x464271);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x464271);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B464273:{NFSU2_TR(0x464273);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B464275:{NFSU2_TR(0x464275);
__builtin_memmove((R+12),(R+8),4);
}
B464277:{NFSU2_TR(0x464277);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464160u);}goto L464160;}}
}
B46427d:L46427d:{c.instructions+=8;NFSU2_TR(0x46427d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464281:{NFSU2_TR(0x464281);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464285:{NFSU2_TR(0x464285);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B464286:{NFSU2_TR(0x464286);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B464289:{NFSU2_TR(0x464289);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46428c:{NFSU2_TR(0x46428c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464290:{NFSU2_TR(0x464290);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464294:{NFSU2_TR(0x464294);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464150u);}goto L464150;}}
}
B46429a:L46429a:{c.instructions+=6;NFSU2_TR(0x46429a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46429e:{NFSU2_TR(0x46429e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4642a1:{NFSU2_TR(0x4642a1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4642a3:{NFSU2_TR(0x4642a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4642a5:{NFSU2_TR(0x4642a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4642a6:{NFSU2_TR(0x4642a6);
if(r1(R+518)){{goto L46433c;}}
}
B4642ac:L4642ac:{c.instructions+=1;NFSU2_TR(0x4642ac);
__builtin_memmove((R+16),(R+16),4);
}
B4642b0:L4642b0:{c.instructions+=4;NFSU2_TR(0x4642b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4642b3:{NFSU2_TR(0x4642b3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4642b7:{NFSU2_TR(0x4642b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4642ba:{NFSU2_TR(0x4642ba);
if(r1(R+518)){{goto L4642cf;}}
}
B4642bc:L4642bc:{c.instructions+=5;NFSU2_TR(0x4642bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4642bf:{NFSU2_TR(0x4642bf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4642c2:{NFSU2_TR(0x4642c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f0de0ull))));
}
B4642c7:{NFSU2_TR(0x4642c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4642cd:{NFSU2_TR(0x4642cd);
{goto L464331;}
}
B4642cf:L4642cf:{c.instructions+=5;NFSU2_TR(0x4642cf);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4642d3:{NFSU2_TR(0x4642d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4642d9:{NFSU2_TR(0x4642d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4642da:{NFSU2_TR(0x4642da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4642db:{NFSU2_TR(0x4642db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4642e0ull));
TAIL_STATIC(0x458e70u,458);
}
B4642e0:L4642e0:{c.instructions+=3;NFSU2_TR(0x4642e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4642e3:{NFSU2_TR(0x4642e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4642e5:{NFSU2_TR(0x4642e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46430f;}}
}
B4642e7:L4642e7:{c.instructions+=2;NFSU2_TR(0x4642e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4642ed:{NFSU2_TR(0x4642ed);
__builtin_memmove((R+4),(R+4),4);
}
B4642f0:L4642f0:{c.instructions+=9;NFSU2_TR(0x4642f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4642f3:{NFSU2_TR(0x4642f3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4642f4:{NFSU2_TR(0x4642f4);
w4(R+4,u32(0x3ull));
}
B4642f9:{NFSU2_TR(0x4642f9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4642f9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4642f9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4642fb:{NFSU2_TR(0x4642fb);
__builtin_memmove((R+28),(R+8),4);
}
B4642fd:{NFSU2_TR(0x4642fd);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B464301:{NFSU2_TR(0x464301);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464302:{NFSU2_TR(0x464302);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464303:{NFSU2_TR(0x464303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464308ull));
TAIL_STATIC(0x458e70u,458);
}
B464308:L464308:{c.instructions+=3;NFSU2_TR(0x464308);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46430b:{NFSU2_TR(0x46430b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46430d:{NFSU2_TR(0x46430d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4642f0u);}goto L4642f0;}}
}
B46430f:L46430f:{c.instructions+=10;NFSU2_TR(0x46430f);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B464313:{NFSU2_TR(0x464313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464316:{NFSU2_TR(0x464316);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B464319:{NFSU2_TR(0x464319);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f0de0ull))));
}
B46431e:{NFSU2_TR(0x46431e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464324:{NFSU2_TR(0x464324);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B464327:{NFSU2_TR(0x464327);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B464328:{NFSU2_TR(0x464328);
w4(R+4,u32(0x3ull));
}
B46432d:{NFSU2_TR(0x46432d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x46432d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x46432d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B46432f:{NFSU2_TR(0x46432f);
__builtin_memmove((R+28),(R+8),4);
}
B464331:L464331:{c.instructions+=3;NFSU2_TR(0x464331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464334:{NFSU2_TR(0x464334);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464336:{NFSU2_TR(0x464336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4642b0u);}goto L4642b0;}}
}
B46433c:L46433c:{c.instructions+=5;NFSU2_TR(0x46433c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46433d:{NFSU2_TR(0x46433d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46433e:{NFSU2_TR(0x46433e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46433f:{NFSU2_TR(0x46433f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464342:{NFSU2_TR(0x464342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464350:L464350:{c.instructions+=3;NFSU2_TR(0x464350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464353:{NFSU2_TR(0x464353);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464355:{NFSU2_TR(0x464355);
if(r1(R+518)){{goto L464365;}}
}
B464357:L464357:{c.instructions+=3;NFSU2_TR(0x464357);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46435a:{NFSU2_TR(0x46435a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46435c:{NFSU2_TR(0x46435c);
if(r1(R+518)){{goto L464367;}}
}
B46435e:L46435e:{c.instructions+=3;NFSU2_TR(0x46435e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464361:{NFSU2_TR(0x464361);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464363:{NFSU2_TR(0x464363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464357u);}goto L464357;}}
}
B464365:L464365:{c.instructions+=1;NFSU2_TR(0x464365);
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
B464367:L464367:{c.instructions+=1;NFSU2_TR(0x464367);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464370:L464370:{c.instructions+=8;NFSU2_TR(0x464370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464371:{NFSU2_TR(0x464371);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B464375:{NFSU2_TR(0x464375);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464376:{NFSU2_TR(0x464376);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464377:{NFSU2_TR(0x464377);
__builtin_memmove((R+28),(R+4),4);
}
B464379:{NFSU2_TR(0x464379);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46437c:{NFSU2_TR(0x46437c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46437e:{NFSU2_TR(0x46437e);
if(r1(R+518)){{goto L4643ab;}}
}
B464380:L464380:{c.instructions+=3;NFSU2_TR(0x464380);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B464383:{NFSU2_TR(0x464383);
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
B464385:{NFSU2_TR(0x464385);
if(r1(R+518)){{goto L4643a4;}}
}
B464387:L464387:{c.instructions+=5;NFSU2_TR(0x464387);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46438a:{NFSU2_TR(0x46438a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46438b:{NFSU2_TR(0x46438b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46438e:{NFSU2_TR(0x46438e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46438f:{NFSU2_TR(0x46438f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464394ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464394:L464394:{c.instructions+=5;NFSU2_TR(0x464394);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46439a:{NFSU2_TR(0x46439a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46439d:{NFSU2_TR(0x46439d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46439f:{NFSU2_TR(0x46439f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4643a2:{NFSU2_TR(0x4643a2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4643e4;}}
}
B4643a4:L4643a4:{c.instructions+=3;NFSU2_TR(0x4643a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4643a7:{NFSU2_TR(0x4643a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4643a9:{NFSU2_TR(0x4643a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464380u);}goto L464380;}}
}
B4643ab:L4643ab:{c.instructions+=2;NFSU2_TR(0x4643ab);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4643ae:{NFSU2_TR(0x4643ae);
if(r1(R+518)){{goto L4643cf;}}
}
B4643b0:L4643b0:{c.instructions+=8;NFSU2_TR(0x4643b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4643b3:{NFSU2_TR(0x4643b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4643b6:{NFSU2_TR(0x4643b6);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4643bc:{NFSU2_TR(0x4643bc);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4643c2:{NFSU2_TR(0x4643c2);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4643c8:{NFSU2_TR(0x4643c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4643ca:{NFSU2_TR(0x4643ca);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4643cd:{NFSU2_TR(0x4643cd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4643e4;}}
}
B4643cf:L4643cf:{c.instructions+=3;NFSU2_TR(0x4643cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4643d2:{NFSU2_TR(0x4643d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4643d4:{NFSU2_TR(0x4643d4);
if(r1(R+518)){{goto L4643e4;}}
}
B4643d6:L4643d6:{c.instructions+=3;NFSU2_TR(0x4643d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4643d9:{NFSU2_TR(0x4643d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4643db:{NFSU2_TR(0x4643db);
if(r1(R+518)){{goto L4643e6;}}
}
B4643dd:L4643dd:{c.instructions+=3;NFSU2_TR(0x4643dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4643e0:{NFSU2_TR(0x4643e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4643e2:{NFSU2_TR(0x4643e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4643d6u);}goto L4643d6;}}
}
B4643e4:L4643e4:{c.instructions+=1;NFSU2_TR(0x4643e4);
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
B4643e6:L4643e6:{c.instructions+=4;NFSU2_TR(0x4643e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4643e7:{NFSU2_TR(0x4643e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4643e8:{NFSU2_TR(0x4643e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4643e9:{NFSU2_TR(0x4643e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4643f0:L4643f0:{c.instructions+=2;NFSU2_TR(0x4643f0);
w4(R+0,u32(0x7ed67cull));
}
B4643f5:{NFSU2_TR(0x4643f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464400:L464400:{c.instructions+=2;NFSU2_TR(0x464400);
__builtin_memmove((R+0),gp(0x7ed680),4);
}
B464405:{NFSU2_TR(0x464405);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464410:L464410:{c.instructions+=10;NFSU2_TR(0x464410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464411:{NFSU2_TR(0x464411);
__builtin_memmove((R+20),(R+16),4);
}
B464413:{NFSU2_TR(0x464413);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B464416:{NFSU2_TR(0x464416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B464419:{NFSU2_TR(0x464419);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B464420:{NFSU2_TR(0x464420);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464421:{NFSU2_TR(0x464421);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464422:{NFSU2_TR(0x464422);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464423:{NFSU2_TR(0x464423);
__builtin_memmove((R+12),(R+4),4);
}
B464425:{NFSU2_TR(0x464425);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4645ca;}}
}
B46442b:L46442b:{c.instructions+=4;NFSU2_TR(0x46442b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46442d:{NFSU2_TR(0x46442d);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+28))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B464431:{NFSU2_TR(0x464431);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464435:{NFSU2_TR(0x464435);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4645bf;}}
}
B46443b:L46443b:{c.instructions+=2;NFSU2_TR(0x46443b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46443f:{NFSU2_TR(0x46443f);
}
B464440:L464440:{c.instructions+=12;NFSU2_TR(0x464440);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464443:{NFSU2_TR(0x464443);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464447:{NFSU2_TR(0x464447);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464448:{NFSU2_TR(0x464448);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B46444a:{NFSU2_TR(0x46444a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46444f:{NFSU2_TR(0x46444f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464452:{NFSU2_TR(0x464452);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B464456:{NFSU2_TR(0x464456);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464457:{NFSU2_TR(0x464457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464459:{NFSU2_TR(0x464459);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46445a:{NFSU2_TR(0x46445a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46445b:{NFSU2_TR(0x46445b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464460ull));
TAIL_STATIC(0x439f40u,439);
}
B464460:L464460:{c.instructions+=3;NFSU2_TR(0x464460);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B464463:{NFSU2_TR(0x464463);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B464465:{NFSU2_TR(0x464465);
if(r1(R+518)){{goto L4645a3;}}
}
B46446b:L46446b:{c.instructions+=3;NFSU2_TR(0x46446b);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46446f:{NFSU2_TR(0x46446f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464470:{NFSU2_TR(0x464470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464475ull));
TAIL_STATIC(0x459a50u,459);
}
B464475:L464475:{c.instructions+=6;NFSU2_TR(0x464475);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464478:{NFSU2_TR(0x464478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464479:{NFSU2_TR(0x464479);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46447d:{NFSU2_TR(0x46447d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46447e:{NFSU2_TR(0x46447e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464482:{NFSU2_TR(0x464482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464487ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464487:L464487:{c.instructions+=5;NFSU2_TR(0x464487);
{u32 ea_=u32(u32(7906580u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46448d:{NFSU2_TR(0x46448d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B464490:{NFSU2_TR(0x464490);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B464492:{NFSU2_TR(0x464492);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B464495:{NFSU2_TR(0x464495);
if(r1(R+514)){{goto L46449b;}}
}
B464497:L464497:{c.instructions+=2;NFSU2_TR(0x464497);
w1(R+0,u8(0x1ull));
}
B464499:{NFSU2_TR(0x464499);
{goto L46449d;}
}
B46449b:L46449b:{c.instructions+=1;NFSU2_TR(0x46449b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B46449d:L46449d:{c.instructions+=3;NFSU2_TR(0x46449d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4644a0:{NFSU2_TR(0x4644a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4644a2:{NFSU2_TR(0x4644a2);
if(r1(R+518)){{goto L4644c2;}}
}
B4644a4:L4644a4:{c.instructions+=3;NFSU2_TR(0x4644a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4644a7:{NFSU2_TR(0x4644a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4644a9:{NFSU2_TR(0x4644a9);
if(r1(R+518)){{goto L4644bb;}}
}
B4644ab:L4644ab:{c.instructions+=5;NFSU2_TR(0x4644ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4644ae:{NFSU2_TR(0x4644ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4644b1:{NFSU2_TR(0x4644b1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B4644b3:{NFSU2_TR(0x4644b3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4644b5:{NFSU2_TR(0x4644b5);
if(r1(R+518)){{goto L464576;}}
}
B4644bb:L4644bb:{c.instructions+=3;NFSU2_TR(0x4644bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4644be:{NFSU2_TR(0x4644be);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4644c0:{NFSU2_TR(0x4644c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4644a4u);}goto L4644a4;}}
}
B4644c2:L4644c2:{c.instructions+=2;NFSU2_TR(0x4644c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4644c4:{NFSU2_TR(0x4644c4);
if(r1(R+518)){{goto L4645a3;}}
}
B4644ca:L4644ca:{c.instructions+=3;NFSU2_TR(0x4644ca);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4644ce:{NFSU2_TR(0x4644ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4644d0:{NFSU2_TR(0x4644d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4645a3;}}
}
B4644d6:L4644d6:{c.instructions+=6;NFSU2_TR(0x4644d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4644d9:{NFSU2_TR(0x4644d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4644db:{NFSU2_TR(0x4644db);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4644dd:{NFSU2_TR(0x4644dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4644de:{NFSU2_TR(0x4644de);
__builtin_memmove((R+4),(R+12),4);
}
B4644e0:{NFSU2_TR(0x4644e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4644e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4644e3:L4644e3:{c.instructions+=2;NFSU2_TR(0x4644e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4644e5:{NFSU2_TR(0x4644e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464596;}}
}
B4644eb:L4644eb:{c.instructions+=3;NFSU2_TR(0x4644eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4644ee:{NFSU2_TR(0x4644ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4644f0:{NFSU2_TR(0x4644f0);
if(r1(R+518)){{goto L4645a3;}}
}
B4644f6:L4644f6:{c.instructions+=1;NFSU2_TR(0x4644f6);
{goto L464500;}
}
B464500:L464500:{c.instructions+=12;NFSU2_TR(0x464500);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464508:{NFSU2_TR(0x464508);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464510:{NFSU2_TR(0x464510);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464518:{NFSU2_TR(0x464518);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46451b:{NFSU2_TR(0x46451b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46451e:{NFSU2_TR(0x46451e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464520:{NFSU2_TR(0x464520);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464522:{NFSU2_TR(0x464522);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464526:{NFSU2_TR(0x464526);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464527:{NFSU2_TR(0x464527);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464528:{NFSU2_TR(0x464528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464529:{NFSU2_TR(0x464529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46452eull));
TAIL_STATIC(0x439f40u,439);
}
B46452e:L46452e:{c.instructions+=3;NFSU2_TR(0x46452e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464532:{NFSU2_TR(0x464532);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464533:{NFSU2_TR(0x464533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464538ull));
TAIL_STATIC(0x459a50u,459);
}
B464538:L464538:{c.instructions+=6;NFSU2_TR(0x464538);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46453c:{NFSU2_TR(0x46453c);
__builtin_memmove((R+28),(R+0),4);
}
B46453e:{NFSU2_TR(0x46453e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464542:{NFSU2_TR(0x464542);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464543:{NFSU2_TR(0x464543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464544:{NFSU2_TR(0x464544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464549ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464549:L464549:{c.instructions+=6;NFSU2_TR(0x464549);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46454d:{NFSU2_TR(0x46454d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464551:{NFSU2_TR(0x464551);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464552:{NFSU2_TR(0x464552);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x60ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464555:{NFSU2_TR(0x464555);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464556:{NFSU2_TR(0x464556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46455bull));
TAIL_STATIC(0x43ce10u,43c);
}
B46455b:L46455b:{c.instructions+=5;NFSU2_TR(0x46455b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46455f:{NFSU2_TR(0x46455f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B464562:{NFSU2_TR(0x464562);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B464564:{NFSU2_TR(0x464564);
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
B464567:{NFSU2_TR(0x464567);
if(r1(R+518)){{goto L464589;}}
}
B464569:L464569:{c.instructions+=3;NFSU2_TR(0x464569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46456c:{NFSU2_TR(0x46456c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46456e:{NFSU2_TR(0x46456e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464500u);}goto L464500;}}
}
B464570:L464570:{c.instructions+=2;NFSU2_TR(0x464570);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464574:{NFSU2_TR(0x464574);
{goto L4645a3;}
}
B464576:L464576:{c.instructions+=2;NFSU2_TR(0x464576);
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
B464578:{NFSU2_TR(0x464578);
if(r1(R+518)){{goto L464582;}}
}
B46457a:L46457a:{c.instructions+=3;NFSU2_TR(0x46457a);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46457e:{NFSU2_TR(0x46457e);
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
B464580:{NFSU2_TR(0x464580);
if(r1(R+518)){{goto L4645a3;}}
}
B464582:L464582:{c.instructions+=2;NFSU2_TR(0x464582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464584:{NFSU2_TR(0x464584);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464587ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464587:L464587:{c.instructions+=1;NFSU2_TR(0x464587);
{goto L4645a3;}
}
B464589:L464589:{c.instructions+=3;NFSU2_TR(0x464589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46458b:{NFSU2_TR(0x46458b);
__builtin_memmove((R+4),(R+24),4);
}
B46458d:{NFSU2_TR(0x46458d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464590ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464590:L464590:{c.instructions+=2;NFSU2_TR(0x464590);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464594:{NFSU2_TR(0x464594);
__builtin_memmove((R+0),(R+24),4);
}
B464596:L464596:{c.instructions+=6;NFSU2_TR(0x464596);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464599:{NFSU2_TR(0x464599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46459b:{NFSU2_TR(0x46459b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46459d:{NFSU2_TR(0x46459d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46459e:{NFSU2_TR(0x46459e);
__builtin_memmove((R+4),(R+0),4);
}
B4645a0:{NFSU2_TR(0x4645a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4645a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4645a3:L4645a3:{c.instructions+=8;NFSU2_TR(0x4645a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4645a7:{NFSU2_TR(0x4645a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B4645ab:{NFSU2_TR(0x4645ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4645ac:{NFSU2_TR(0x4645ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B4645af:{NFSU2_TR(0x4645af);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4645b1:{NFSU2_TR(0x4645b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4645b5:{NFSU2_TR(0x4645b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4645b9:{NFSU2_TR(0x4645b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464440u);}goto L464440;}}
}
B4645bf:L4645bf:{c.instructions+=4;NFSU2_TR(0x4645bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4645c2:{NFSU2_TR(0x4645c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4645c3:{NFSU2_TR(0x4645c3);
__builtin_memmove((R+4),(R+12),4);
}
B4645c5:{NFSU2_TR(0x4645c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4645caull));
TAIL_STATIC(0x463bd0u,463);
}
B4645ca:L4645ca:{c.instructions+=6;NFSU2_TR(0x4645ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4645cb:{NFSU2_TR(0x4645cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4645cc:{NFSU2_TR(0x4645cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4645cd:{NFSU2_TR(0x4645cd);
__builtin_memmove((R+16),(R+20),4);
}
B4645cf:{NFSU2_TR(0x4645cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4645d0:{NFSU2_TR(0x4645d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4645e0:L4645e0:{c.instructions+=2;NFSU2_TR(0x4645e0);
w4(R+0,u32(0x7ed784ull));
}
B4645e5:{NFSU2_TR(0x4645e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4645f0:L4645f0:{c.instructions+=2;NFSU2_TR(0x4645f0);
__builtin_memmove((R+0),gp(0x7ed788),4);
}
B4645f5:{NFSU2_TR(0x4645f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464600:L464600:{c.instructions+=11;NFSU2_TR(0x464600);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464601:{NFSU2_TR(0x464601);
__builtin_memmove((R+20),(R+16),4);
}
B464603:{NFSU2_TR(0x464603);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B464606:{NFSU2_TR(0x464606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B464609:{NFSU2_TR(0x464609);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B464610:{NFSU2_TR(0x464610);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464611:{NFSU2_TR(0x464611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464612:{NFSU2_TR(0x464612);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464613:{NFSU2_TR(0x464613);
__builtin_memmove((R+28),(R+4),4);
}
B464615:{NFSU2_TR(0x464615);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464619:{NFSU2_TR(0x464619);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4647a8;}}
}
B46461f:L46461f:{c.instructions+=1;NFSU2_TR(0x46461f);
w4(R+12,u32(0x7ed798ull));
}
B464624:L464624:{c.instructions+=4;NFSU2_TR(0x464624);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464627:{NFSU2_TR(0x464627);
w4(R+24,u32(0x2ull));
}
B46462c:{NFSU2_TR(0x46462c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46462e:{NFSU2_TR(0x46462e);
if(r1(R+518)){{goto L46478e;}}
}
B464634:L464634:{c.instructions+=10;NFSU2_TR(0x464634);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464637:{NFSU2_TR(0x464637);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46463b:{NFSU2_TR(0x46463b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46463c:{NFSU2_TR(0x46463c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46463e:{NFSU2_TR(0x46463e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464642:{NFSU2_TR(0x464642);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464643:{NFSU2_TR(0x464643);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464644:{NFSU2_TR(0x464644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464645:{NFSU2_TR(0x464645);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46464a:{NFSU2_TR(0x46464a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46464full));
TAIL_STATIC(0x439f40u,439);
}
B46464f:L46464f:{c.instructions+=3;NFSU2_TR(0x46464f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B464652:{NFSU2_TR(0x464652);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B464654:{NFSU2_TR(0x464654);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46465e;}}
}
B464656:L464656:{c.instructions+=2;NFSU2_TR(0x464656);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464659:{NFSU2_TR(0x464659);
{goto L46478e;}
}
B46465e:L46465e:{c.instructions+=4;NFSU2_TR(0x46465e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464662:{NFSU2_TR(0x464662);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464663:{NFSU2_TR(0x464663);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46466a:{NFSU2_TR(0x46466a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46466full));
TAIL_STATIC(0x459a50u,459);
}
B46466f:L46466f:{c.instructions+=6;NFSU2_TR(0x46466f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464672:{NFSU2_TR(0x464672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464673:{NFSU2_TR(0x464673);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B464677:{NFSU2_TR(0x464677);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464678:{NFSU2_TR(0x464678);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46467c:{NFSU2_TR(0x46467c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464681ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464681:L464681:{c.instructions+=5;NFSU2_TR(0x464681);
{u32 ea_=u32(u32(7906636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B464687:{NFSU2_TR(0x464687);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46468a:{NFSU2_TR(0x46468a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46468c:{NFSU2_TR(0x46468c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46468f:{NFSU2_TR(0x46468f);
if(r1(R+514)){{goto L464695;}}
}
B464691:L464691:{c.instructions+=2;NFSU2_TR(0x464691);
w1(R+0,u8(0x1ull));
}
B464693:{NFSU2_TR(0x464693);
{goto L464697;}
}
B464695:L464695:{c.instructions+=1;NFSU2_TR(0x464695);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B464697:L464697:{c.instructions+=3;NFSU2_TR(0x464697);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46469a:{NFSU2_TR(0x46469a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46469c:{NFSU2_TR(0x46469c);
if(r1(R+518)){{goto L4646b7;}}
}
B46469e:L46469e:{c.instructions+=1;NFSU2_TR(0x46469e);
__builtin_memmove((R+28),(R+28),4);
}
B4646a0:L4646a0:{c.instructions+=3;NFSU2_TR(0x4646a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4646a3:{NFSU2_TR(0x4646a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4646a5:{NFSU2_TR(0x4646a5);
if(r1(R+518)){{goto L4646b0;}}
}
B4646a7:L4646a7:{c.instructions+=2;NFSU2_TR(0x4646a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4646aa:{NFSU2_TR(0x4646aa);
if(r1(R+518)){{goto L464766;}}
}
B4646b0:L4646b0:{c.instructions+=3;NFSU2_TR(0x4646b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4646b3:{NFSU2_TR(0x4646b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4646b5:{NFSU2_TR(0x4646b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4646a0u);}goto L4646a0;}}
}
B4646b7:L4646b7:{c.instructions+=2;NFSU2_TR(0x4646b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4646b9:{NFSU2_TR(0x4646b9);
if(r1(R+518)){{goto L46478e;}}
}
B4646bf:L4646bf:{c.instructions+=3;NFSU2_TR(0x4646bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4646c3:{NFSU2_TR(0x4646c3);
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
B4646c5:{NFSU2_TR(0x4646c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46478e;}}
}
B4646cb:L4646cb:{c.instructions+=4;NFSU2_TR(0x4646cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4646cd:{NFSU2_TR(0x4646cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4646ce:{NFSU2_TR(0x4646ce);
__builtin_memmove((R+4),(R+28),4);
}
B4646d0:{NFSU2_TR(0x4646d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4646d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4646d3:L4646d3:{c.instructions+=2;NFSU2_TR(0x4646d3);
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
B4646d5:{NFSU2_TR(0x4646d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464786;}}
}
B4646db:L4646db:{c.instructions+=3;NFSU2_TR(0x4646db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4646de:{NFSU2_TR(0x4646de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4646e0:{NFSU2_TR(0x4646e0);
if(r1(R+518)){{goto L46478e;}}
}
B4646e6:L4646e6:{c.instructions+=1;NFSU2_TR(0x4646e6);
{goto L4646f0;}
}
B4646f0:L4646f0:{c.instructions+=12;NFSU2_TR(0x4646f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4646f8:{NFSU2_TR(0x4646f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464700:{NFSU2_TR(0x464700);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464708:{NFSU2_TR(0x464708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46470b:{NFSU2_TR(0x46470b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46470e:{NFSU2_TR(0x46470e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464710:{NFSU2_TR(0x464710);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464712:{NFSU2_TR(0x464712);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464716:{NFSU2_TR(0x464716);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464717:{NFSU2_TR(0x464717);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464718:{NFSU2_TR(0x464718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464719:{NFSU2_TR(0x464719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46471eull));
TAIL_STATIC(0x439f40u,439);
}
B46471e:L46471e:{c.instructions+=3;NFSU2_TR(0x46471e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464722:{NFSU2_TR(0x464722);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464723:{NFSU2_TR(0x464723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464728ull));
TAIL_STATIC(0x459a50u,459);
}
B464728:L464728:{c.instructions+=6;NFSU2_TR(0x464728);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46472c:{NFSU2_TR(0x46472c);
__builtin_memmove((R+28),(R+0),4);
}
B46472e:{NFSU2_TR(0x46472e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464732:{NFSU2_TR(0x464732);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464733:{NFSU2_TR(0x464733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464734:{NFSU2_TR(0x464734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464739ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464739:L464739:{c.instructions+=6;NFSU2_TR(0x464739);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46473d:{NFSU2_TR(0x46473d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464741:{NFSU2_TR(0x464741);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464742:{NFSU2_TR(0x464742);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x60ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464745:{NFSU2_TR(0x464745);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464746:{NFSU2_TR(0x464746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46474bull));
TAIL_STATIC(0x43ce10u,43c);
}
B46474b:L46474b:{c.instructions+=5;NFSU2_TR(0x46474b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46474f:{NFSU2_TR(0x46474f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B464752:{NFSU2_TR(0x464752);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B464754:{NFSU2_TR(0x464754);
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
B464757:{NFSU2_TR(0x464757);
if(r1(R+518)){{goto L464779;}}
}
B464759:L464759:{c.instructions+=3;NFSU2_TR(0x464759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46475c:{NFSU2_TR(0x46475c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46475e:{NFSU2_TR(0x46475e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4646f0u);}goto L4646f0;}}
}
B464760:L464760:{c.instructions+=2;NFSU2_TR(0x464760);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464764:{NFSU2_TR(0x464764);
{goto L46478e;}
}
B464766:L464766:{c.instructions+=2;NFSU2_TR(0x464766);
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
B464768:{NFSU2_TR(0x464768);
if(r1(R+518)){{goto L464772;}}
}
B46476a:L46476a:{c.instructions+=3;NFSU2_TR(0x46476a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46476e:{NFSU2_TR(0x46476e);
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
B464770:{NFSU2_TR(0x464770);
if(r1(R+518)){{goto L46478e;}}
}
B464772:L464772:{c.instructions+=2;NFSU2_TR(0x464772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464774:{NFSU2_TR(0x464774);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464777ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464777:L464777:{c.instructions+=1;NFSU2_TR(0x464777);
{goto L46478e;}
}
B464779:L464779:{c.instructions+=3;NFSU2_TR(0x464779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46477b:{NFSU2_TR(0x46477b);
__builtin_memmove((R+4),(R+24),4);
}
B46477d:{NFSU2_TR(0x46477d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464780ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464780:L464780:{c.instructions+=2;NFSU2_TR(0x464780);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464784:{NFSU2_TR(0x464784);
__builtin_memmove((R+0),(R+24),4);
}
B464786:L464786:{c.instructions+=4;NFSU2_TR(0x464786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464788:{NFSU2_TR(0x464788);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464789:{NFSU2_TR(0x464789);
__builtin_memmove((R+4),(R+0),4);
}
B46478b:{NFSU2_TR(0x46478b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46478eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46478e:L46478e:{c.instructions+=3;NFSU2_TR(0x46478e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B464791:{NFSU2_TR(0x464791);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ed8b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ed8b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B464797:{NFSU2_TR(0x464797);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464624u);}goto L464624;}}
}
B46479d:L46479d:{c.instructions+=4;NFSU2_TR(0x46479d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4647a0:{NFSU2_TR(0x4647a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4647a1:{NFSU2_TR(0x4647a1);
__builtin_memmove((R+4),(R+28),4);
}
B4647a3:{NFSU2_TR(0x4647a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4647a8ull));
TAIL_STATIC(0x463bd0u,463);
}
B4647a8:L4647a8:{c.instructions+=6;NFSU2_TR(0x4647a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4647a9:{NFSU2_TR(0x4647a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4647aa:{NFSU2_TR(0x4647aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4647ab:{NFSU2_TR(0x4647ab);
__builtin_memmove((R+16),(R+20),4);
}
B4647ad:{NFSU2_TR(0x4647ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4647ae:{NFSU2_TR(0x4647ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4647c0:L4647c0:{c.instructions+=2;NFSU2_TR(0x4647c0);
w4(R+0,u32(0x7ed8b8ull));
}
B4647c5:{NFSU2_TR(0x4647c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4647d0:L4647d0:{c.instructions+=2;NFSU2_TR(0x4647d0);
__builtin_memmove((R+0),gp(0x7ed8bc),4);
}
B4647d5:{NFSU2_TR(0x4647d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4647e0:L4647e0:{c.instructions+=8;NFSU2_TR(0x4647e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4647e1:{NFSU2_TR(0x4647e1);
__builtin_memmove((R+20),(R+16),4);
}
B4647e3:{NFSU2_TR(0x4647e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B4647e6:{NFSU2_TR(0x4647e6);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B4647ed:{NFSU2_TR(0x4647ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4647ee:{NFSU2_TR(0x4647ee);
__builtin_memmove((R+12),(R+4),4);
}
B4647f0:{NFSU2_TR(0x4647f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4647f3:{NFSU2_TR(0x4647f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4649b7;}}
}
B4647f9:L4647f9:{c.instructions+=3;NFSU2_TR(0x4647f9);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4647fe:{NFSU2_TR(0x4647fe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfa0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfa0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfa0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464803:{NFSU2_TR(0x464803);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4649b7;}}
}
B464809:L464809:{c.instructions+=2;NFSU2_TR(0x464809);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1067ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1067ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1067ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46480e:{NFSU2_TR(0x46480e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4649b7;}}
}
B464814:L464814:{c.instructions+=5;NFSU2_TR(0x464814);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B464816:{NFSU2_TR(0x464816);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464817:{NFSU2_TR(0x464817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46481a:{NFSU2_TR(0x46481a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46481b:{NFSU2_TR(0x46481b);
{goto L464820;}
}
B464820:L464820:{c.instructions+=2;NFSU2_TR(0x464820);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464823:{NFSU2_TR(0x464823);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464831;}}
}
B464825:L464825:{c.instructions+=3;NFSU2_TR(0x464825);
w4(R+28,u32(0x7f0b80ull));
}
B46482a:{NFSU2_TR(0x46482a);
w4(R+0,u32(0x1full));
}
B46482f:{NFSU2_TR(0x46482f);
{goto L464843;}
}
B464831:L464831:{c.instructions+=2;NFSU2_TR(0x464831);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464833:{NFSU2_TR(0x464833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46499d;}}
}
B464839:L464839:{c.instructions+=2;NFSU2_TR(0x464839);
w4(R+28,u32(0x7f0d70ull));
}
B46483e:{NFSU2_TR(0x46483e);
w4(R+0,u32(0x7ull));
}
B464843:L464843:{c.instructions+=3;NFSU2_TR(0x464843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464846:{NFSU2_TR(0x464846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464849:{NFSU2_TR(0x464849);
__builtin_memmove((R+16),(R+16),4);
}
B464850:L464850:{c.instructions+=2;NFSU2_TR(0x464850);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464851:{NFSU2_TR(0x464851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464856ull));
TAIL_STATIC(0x459a50u,459);
}
B464856:L464856:{c.instructions+=5;NFSU2_TR(0x464856);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464859:{NFSU2_TR(0x464859);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46485a:{NFSU2_TR(0x46485a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46485b:{NFSU2_TR(0x46485b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46485e:{NFSU2_TR(0x46485e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464863ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464863:L464863:{c.instructions+=5;NFSU2_TR(0x464863);
{u32 ea_=u32(u32(7906692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B464869:{NFSU2_TR(0x464869);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46486c:{NFSU2_TR(0x46486c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46486e:{NFSU2_TR(0x46486e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B464871:{NFSU2_TR(0x464871);
if(r1(R+514)){{goto L464877;}}
}
B464873:L464873:{c.instructions+=2;NFSU2_TR(0x464873);
w1(R+0,u8(0x1ull));
}
B464875:{NFSU2_TR(0x464875);
{goto L464879;}
}
B464877:L464877:{c.instructions+=1;NFSU2_TR(0x464877);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B464879:L464879:{c.instructions+=3;NFSU2_TR(0x464879);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46487c:{NFSU2_TR(0x46487c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46487e:{NFSU2_TR(0x46487e);
if(r1(R+518)){{goto L464893;}}
}
B464880:L464880:{c.instructions+=3;NFSU2_TR(0x464880);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B464883:{NFSU2_TR(0x464883);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B464885:{NFSU2_TR(0x464885);
if(r1(R+518)){{goto L46488c;}}
}
B464887:L464887:{c.instructions+=2;NFSU2_TR(0x464887);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46488a:{NFSU2_TR(0x46488a);
if(r1(R+518)){{goto L4648d6;}}
}
B46488c:L46488c:{c.instructions+=3;NFSU2_TR(0x46488c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46488f:{NFSU2_TR(0x46488f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464891:{NFSU2_TR(0x464891);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464880u);}goto L464880;}}
}
B464893:L464893:{c.instructions+=2;NFSU2_TR(0x464893);
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
B464895:{NFSU2_TR(0x464895);
if(r1(R+518)){{goto L464987;}}
}
B46489b:L46489b:{c.instructions+=4;NFSU2_TR(0x46489b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46489d:{NFSU2_TR(0x46489d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46489e:{NFSU2_TR(0x46489e);
__builtin_memmove((R+4),(R+12),4);
}
B4648a0:{NFSU2_TR(0x4648a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4648a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4648a3:L4648a3:{c.instructions+=3;NFSU2_TR(0x4648a3);
__builtin_memmove((R+24),(R+0),4);
}
B4648a5:{NFSU2_TR(0x4648a5);
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
B4648a7:{NFSU2_TR(0x4648a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464979;}}
}
B4648ad:L4648ad:{c.instructions+=3;NFSU2_TR(0x4648ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4648b0:{NFSU2_TR(0x4648b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4648b2:{NFSU2_TR(0x4648b2);
if(r1(R+518)){{goto L464987;}}
}
B4648b8:L4648b8:{c.instructions+=1;NFSU2_TR(0x4648b8);
{goto L4648c0;}
}
B4648c0:L4648c0:{c.instructions+=3;NFSU2_TR(0x4648c0);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B4648c7:{NFSU2_TR(0x4648c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4648ca:{NFSU2_TR(0x4648ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4648e8;}}
}
B4648cc:L4648cc:{c.instructions+=3;NFSU2_TR(0x4648cc);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B4648d1:{NFSU2_TR(0x4648d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4648d4:{NFSU2_TR(0x4648d4);
{goto L46492f;}
}
B4648d6:L4648d6:{c.instructions+=2;NFSU2_TR(0x4648d6);
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
B4648d8:{NFSU2_TR(0x4648d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464987;}}
}
B4648de:L4648de:{c.instructions+=2;NFSU2_TR(0x4648de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4648e0:{NFSU2_TR(0x4648e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4648e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4648e3:L4648e3:{c.instructions+=1;NFSU2_TR(0x4648e3);
{goto L464987;}
}
B4648e8:L4648e8:{c.instructions+=8;NFSU2_TR(0x4648e8);
__builtin_memmove((R+12),gp(0x8900b4),4);
}
B4648ee:{NFSU2_TR(0x4648ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4648f1:{NFSU2_TR(0x4648f1);
__builtin_memmove((R+4),gp(0x8900b8),4);
}
B4648f7:{NFSU2_TR(0x4648f7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4648fa:{NFSU2_TR(0x4648fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4648fb:{NFSU2_TR(0x4648fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4648fc:{NFSU2_TR(0x4648fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4648ff:{NFSU2_TR(0x4648ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464904ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464904:L464904:{c.instructions+=7;NFSU2_TR(0x464904);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B464907:{NFSU2_TR(0x464907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46490a:{NFSU2_TR(0x46490a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46490d:{NFSU2_TR(0x46490d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464910:{NFSU2_TR(0x464910);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464911:{NFSU2_TR(0x464911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464912:{NFSU2_TR(0x464912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464917ull));
TAIL_STATIC(0x43ce10u,43c);
}
B464917:L464917:{c.instructions+=5;NFSU2_TR(0x464917);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46491a:{NFSU2_TR(0x46491a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46491d:{NFSU2_TR(0x46491d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46491f:{NFSU2_TR(0x46491f);
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
B464922:{NFSU2_TR(0x464922);
if(r1(R+514)){{goto L46492c;}}
}
B464924:L464924:{c.instructions+=3;NFSU2_TR(0x464924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464927:{NFSU2_TR(0x464927);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46492a:{NFSU2_TR(0x46492a);
{goto L46492f;}
}
B46492c:L46492c:{c.instructions+=1;NFSU2_TR(0x46492c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46492f:L46492f:{c.instructions+=6;NFSU2_TR(0x46492f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464932:{NFSU2_TR(0x464932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464935:{NFSU2_TR(0x464935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464938:{NFSU2_TR(0x464938);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464939:{NFSU2_TR(0x464939);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46493a:{NFSU2_TR(0x46493a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46493full));
TAIL_STATIC(0x43ce10u,43c);
}
B46493f:L46493f:{c.instructions+=5;NFSU2_TR(0x46493f);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B464942:{NFSU2_TR(0x464942);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464943:{NFSU2_TR(0x464943);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x60ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B464946:{NFSU2_TR(0x464946);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464947:{NFSU2_TR(0x464947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46494cull));
TAIL_STATIC(0x43ce10u,43c);
}
B46494c:L46494c:{c.instructions+=5;NFSU2_TR(0x46494c);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46494f:{NFSU2_TR(0x46494f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B464952:{NFSU2_TR(0x464952);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B464954:{NFSU2_TR(0x464954);
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
B464957:{NFSU2_TR(0x464957);
if(r1(R+518)){{goto L46496c;}}
}
B464959:L464959:{c.instructions+=3;NFSU2_TR(0x464959);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46495c:{NFSU2_TR(0x46495c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46495e:{NFSU2_TR(0x46495e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4648c0u);}goto L4648c0;}}
}
B464964:L464964:{c.instructions+=3;NFSU2_TR(0x464964);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464967:{NFSU2_TR(0x464967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46496a:{NFSU2_TR(0x46496a);
{goto L464987;}
}
B46496c:L46496c:{c.instructions+=3;NFSU2_TR(0x46496c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46496e:{NFSU2_TR(0x46496e);
__builtin_memmove((R+4),(R+24),4);
}
B464970:{NFSU2_TR(0x464970);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464973ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464973:L464973:{c.instructions+=2;NFSU2_TR(0x464973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464976:{NFSU2_TR(0x464976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B464979:L464979:{c.instructions+=4;NFSU2_TR(0x464979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46497b:{NFSU2_TR(0x46497b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46497c:{NFSU2_TR(0x46497c);
__builtin_memmove((R+4),(R+24),4);
}
B46497e:{NFSU2_TR(0x46497e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464981ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464981:L464981:{c.instructions+=2;NFSU2_TR(0x464981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464984:{NFSU2_TR(0x464984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464987:L464987:{c.instructions+=6;NFSU2_TR(0x464987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46498a:{NFSU2_TR(0x46498a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B46498d:{NFSU2_TR(0x46498d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46498e:{NFSU2_TR(0x46498e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464991:{NFSU2_TR(0x464991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464994:{NFSU2_TR(0x464994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464850u);}goto L464850;}}
}
B46499a:L46499a:{c.instructions+=1;NFSU2_TR(0x46499a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46499d:L46499d:{c.instructions+=4;NFSU2_TR(0x46499d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B46499e:{NFSU2_TR(0x46499e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4649a1:{NFSU2_TR(0x4649a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649a4:{NFSU2_TR(0x4649a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464820u);}goto L464820;}}
}
B4649aa:L4649aa:{c.instructions+=4;NFSU2_TR(0x4649aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4649ad:{NFSU2_TR(0x4649ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4649ae:{NFSU2_TR(0x4649ae);
__builtin_memmove((R+4),(R+12),4);
}
B4649b0:{NFSU2_TR(0x4649b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4649b5ull));
TAIL_STATIC(0x463bd0u,463);
}
B4649b5:L4649b5:{c.instructions+=2;NFSU2_TR(0x4649b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4649b6:{NFSU2_TR(0x4649b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4649b7:L4649b7:{c.instructions+=4;NFSU2_TR(0x4649b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4649b8:{NFSU2_TR(0x4649b8);
__builtin_memmove((R+16),(R+20),4);
}
B4649ba:{NFSU2_TR(0x4649ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4649bb:{NFSU2_TR(0x4649bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4649c0:L4649c0:{c.instructions+=2;NFSU2_TR(0x4649c0);
w4(R+0,u32(0x7ecb48ull));
}
B4649c5:{NFSU2_TR(0x4649c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4649d0:L4649d0:{c.instructions+=2;NFSU2_TR(0x4649d0);
__builtin_memmove((R+0),gp(0x7ecb4c),4);
}
B4649d5:{NFSU2_TR(0x4649d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4649e0:L4649e0:{c.instructions+=16;NFSU2_TR(0x4649e0);
__builtin_memmove((R+0),(R+4),4);
}
B4649e2:{NFSU2_TR(0x4649e2);
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
B4649e4:{NFSU2_TR(0x4649e4);
u8 U[4];
w4(U+0,u32(0x78a588ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4649ea:{NFSU2_TR(0x4649ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649ed:{NFSU2_TR(0x4649ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649f0:{NFSU2_TR(0x4649f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649f3:{NFSU2_TR(0x4649f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649f6:{NFSU2_TR(0x4649f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649f9:{NFSU2_TR(0x4649f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649fc:{NFSU2_TR(0x4649fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4649ff:{NFSU2_TR(0x4649ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464a02:{NFSU2_TR(0x464a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464a05:{NFSU2_TR(0x464a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464a08:{NFSU2_TR(0x464a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464a0b:{NFSU2_TR(0x464a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464a0e:{NFSU2_TR(0x464a0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464a10:L464a10:{c.instructions+=12;NFSU2_TR(0x464a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464a11:{NFSU2_TR(0x464a11);
__builtin_memmove((R+20),(R+16),4);
}
B464a13:{NFSU2_TR(0x464a13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B464a16:{NFSU2_TR(0x464a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B464a1c:{NFSU2_TR(0x464a1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464a1d:{NFSU2_TR(0x464a1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464a1e:{NFSU2_TR(0x464a1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464a1f:{NFSU2_TR(0x464a1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464a20:{NFSU2_TR(0x464a20);
__builtin_memmove((R+20),(R+4),4);
}
B464a22:{NFSU2_TR(0x464a22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B464a24:{NFSU2_TR(0x464a24);
w4(R+4,u32(0x40ull));
}
B464a29:{NFSU2_TR(0x464a29);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B464a2d:L464a2d:{c.instructions+=1;NFSU2_TR(0x464a2d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L464a2f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464a2du);}goto L464a2d;}
}
B464a2f:L464a2f:{c.instructions+=4;NFSU2_TR(0x464a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464a32:{NFSU2_TR(0x464a32);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B464a34:{NFSU2_TR(0x464a34);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464a36:{NFSU2_TR(0x464a36);
if(r1(R+518)){{goto L464a4c;}}
}
B464a38:L464a38:{c.instructions+=2;NFSU2_TR(0x464a38);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B464a3c:{NFSU2_TR(0x464a3c);
__builtin_memmove((R+16),(R+16),4);
}
B464a40:L464a40:{c.instructions+=5;NFSU2_TR(0x464a40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B464a42:{NFSU2_TR(0x464a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464a45:{NFSU2_TR(0x464a45);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B464a48:{NFSU2_TR(0x464a48);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464a4a:{NFSU2_TR(0x464a4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464a40u);}goto L464a40;}}
}
B464a4c:L464a4c:{c.instructions+=2;NFSU2_TR(0x464a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464a4f:{NFSU2_TR(0x464a4f);
}
B464a50:L464a50:{c.instructions+=7;NFSU2_TR(0x464a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464a53:{NFSU2_TR(0x464a53);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B464a55:{NFSU2_TR(0x464a55);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B464a57:{NFSU2_TR(0x464a57);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B464a59:{NFSU2_TR(0x464a59);
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
B464a5b:{NFSU2_TR(0x464a5b);
w4(R+24,u32(0x40ull));
}
B464a60:{NFSU2_TR(0x464a60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L464ac0;}}
}
B464a62:L464a62:{c.instructions+=3;NFSU2_TR(0x464a62);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B464a66:{NFSU2_TR(0x464a66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464a68:{NFSU2_TR(0x464a68);
if(r1(R+518)){{goto L464a7d;}}
}
B464a6a:L464a6a:{c.instructions+=6;NFSU2_TR(0x464a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464a6d:{NFSU2_TR(0x464a6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B464a70:{NFSU2_TR(0x464a70);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B464a73:{NFSU2_TR(0x464a73);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B464a75:{NFSU2_TR(0x464a75);
w1(R+8,u8(0x1ull));
}
B464a77:{NFSU2_TR(0x464a77);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L464a7d;}}
}
B464a79:L464a79:{c.instructions+=2;NFSU2_TR(0x464a79);
__builtin_memmove((R+24),(R+0),4);
}
B464a7b:{NFSU2_TR(0x464a7b);
__builtin_memmove((R+28),(R+4),4);
}
B464a7d:L464a7d:{c.instructions+=4;NFSU2_TR(0x464a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464a80:{NFSU2_TR(0x464a80);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B464a81:{NFSU2_TR(0x464a81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B464a83:{NFSU2_TR(0x464a83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464a62u);}goto L464a62;}}
}
B464a85:L464a85:{c.instructions+=2;NFSU2_TR(0x464a85);
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
B464a87:{NFSU2_TR(0x464a87);
if(r1(R+518)){{goto L464ac0;}}
}
B464a89:L464a89:{c.instructions+=5;NFSU2_TR(0x464a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464a8c:{NFSU2_TR(0x464a8c);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B464a90:{NFSU2_TR(0x464a90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464a92:{NFSU2_TR(0x464a92);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B464a96:{NFSU2_TR(0x464a96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464aac;}}
}
B464a98:L464a98:{c.instructions+=5;NFSU2_TR(0x464a98);
__builtin_memmove((R+12),(R+4),4);
}
B464a9a:{NFSU2_TR(0x464a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464a9d:{NFSU2_TR(0x464a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464aa4:{NFSU2_TR(0x464aa4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B464aaa:{NFSU2_TR(0x464aaa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464a50u);}goto L464a50;}
}
B464aac:L464aac:{c.instructions+=5;NFSU2_TR(0x464aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464aaf:{NFSU2_TR(0x464aaf);
__builtin_memmove((R+12),(R+4),4);
}
B464ab1:{NFSU2_TR(0x464ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464ab8:{NFSU2_TR(0x464ab8);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B464abe:{NFSU2_TR(0x464abe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464a50u);}goto L464a50;}
}
B464ac0:L464ac0:{c.instructions+=7;NFSU2_TR(0x464ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464ac1:{NFSU2_TR(0x464ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464ac2:{NFSU2_TR(0x464ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B464ac3:{NFSU2_TR(0x464ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464ac4:{NFSU2_TR(0x464ac4);
__builtin_memmove((R+16),(R+20),4);
}
B464ac6:{NFSU2_TR(0x464ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B464ac7:{NFSU2_TR(0x464ac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464ad0:L464ad0:{c.instructions+=5;NFSU2_TR(0x464ad0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464ad1:{NFSU2_TR(0x464ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464ad4:{NFSU2_TR(0x464ad4);
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
B464ad6:{NFSU2_TR(0x464ad6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464ad7:{NFSU2_TR(0x464ad7);
if(r1(R+518)){{goto L464afd;}}
}
B464ad9:L464ad9:{c.instructions+=2;NFSU2_TR(0x464ad9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464add:{NFSU2_TR(0x464add);
__builtin_memmove((R+4),(R+4),4);
}
B464ae0:L464ae0:{c.instructions+=3;NFSU2_TR(0x464ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464ae2:{NFSU2_TR(0x464ae2);
__builtin_memmove((R+4),(R+24),4);
}
B464ae4:{NFSU2_TR(0x464ae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464ae7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464ae7:L464ae7:{c.instructions+=5;NFSU2_TR(0x464ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B464ae9:{NFSU2_TR(0x464ae9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B464aec:{NFSU2_TR(0x464aec);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffull))));
}
B464af2:{NFSU2_TR(0x464af2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B464af4:{NFSU2_TR(0x464af4);
if(r1(R+518)){{goto L464b04;}}
}
B464af6:L464af6:{c.instructions+=3;NFSU2_TR(0x464af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464af9:{NFSU2_TR(0x464af9);
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
B464afb:{NFSU2_TR(0x464afb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464ae0u);}goto L464ae0;}}
}
B464afd:L464afd:{c.instructions+=4;NFSU2_TR(0x464afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464afe:{NFSU2_TR(0x464afe);
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
B464b00:{NFSU2_TR(0x464b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464b01:{NFSU2_TR(0x464b01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464b04:L464b04:{c.instructions+=4;NFSU2_TR(0x464b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464b05:{NFSU2_TR(0x464b05);
__builtin_memmove((R+0),(R+24),4);
}
B464b07:{NFSU2_TR(0x464b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464b08:{NFSU2_TR(0x464b08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464b10:L464b10:{c.instructions+=6;NFSU2_TR(0x464b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464b11:{NFSU2_TR(0x464b11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464b12:{NFSU2_TR(0x464b12);
__builtin_memmove((R+28),(R+4),4);
}
B464b14:{NFSU2_TR(0x464b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464b17:{NFSU2_TR(0x464b17);
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
B464b19:{NFSU2_TR(0x464b19);
if(r1(R+518)){{goto L464b93;}}
}
B464b1b:L464b1b:{c.instructions+=2;NFSU2_TR(0x464b1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464b1c:{NFSU2_TR(0x464b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B464b20:L464b20:{c.instructions+=4;NFSU2_TR(0x464b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464b23:{NFSU2_TR(0x464b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464b26:{NFSU2_TR(0x464b26);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B464b29:{NFSU2_TR(0x464b29);
if(r1(R+518)){{goto L464b30;}}
}
B464b2b:L464b2b:{c.instructions+=2;NFSU2_TR(0x464b2b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B464b2e:{NFSU2_TR(0x464b2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464b52;}}
}
B464b30:L464b30:{c.instructions+=3;NFSU2_TR(0x464b30);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B464b33:{NFSU2_TR(0x464b33);
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
B464b35:{NFSU2_TR(0x464b35);
if(r1(R+518)){{goto L464b52;}}
}
B464b37:L464b37:{c.instructions+=3;NFSU2_TR(0x464b37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464b39:{NFSU2_TR(0x464b39);
__builtin_memmove((R+4),(R+24),4);
}
B464b3b:{NFSU2_TR(0x464b3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464b3eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464b3e:L464b3e:{c.instructions+=6;NFSU2_TR(0x464b3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464b40:{NFSU2_TR(0x464b40);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B464b43:{NFSU2_TR(0x464b43);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B464b48:{NFSU2_TR(0x464b48);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b07cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B464b4e:{NFSU2_TR(0x464b4e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B464b50:{NFSU2_TR(0x464b50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464b8b;}}
}
B464b52:L464b52:{c.instructions+=4;NFSU2_TR(0x464b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464b54:{NFSU2_TR(0x464b54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464b55:{NFSU2_TR(0x464b55);
__builtin_memmove((R+4),(R+24),4);
}
B464b57:{NFSU2_TR(0x464b57);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464b5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464b5a:L464b5a:{c.instructions+=4;NFSU2_TR(0x464b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464b5d:{NFSU2_TR(0x464b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464b60:{NFSU2_TR(0x464b60);
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
B464b63:{NFSU2_TR(0x464b63);
if(r1(R+518)){{goto L464b6a;}}
}
B464b65:L464b65:{c.instructions+=2;NFSU2_TR(0x464b65);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B464b68:{NFSU2_TR(0x464b68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464b82;}}
}
B464b6a:L464b6a:{c.instructions+=3;NFSU2_TR(0x464b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464b6c:{NFSU2_TR(0x464b6c);
__builtin_memmove((R+4),(R+24),4);
}
B464b6e:{NFSU2_TR(0x464b6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464b71ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464b71:L464b71:{c.instructions+=4;NFSU2_TR(0x464b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464b73:{NFSU2_TR(0x464b73);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B464b76:{NFSU2_TR(0x464b76);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B464b7b:{NFSU2_TR(0x464b7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b07cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B464b82:L464b82:{c.instructions+=2;NFSU2_TR(0x464b82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464b83:{NFSU2_TR(0x464b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464b88ull));
TAIL_STATIC(0x463af0u,463);
}
B464b88:L464b88:{c.instructions+=1;NFSU2_TR(0x464b88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B464b8b:L464b8b:{c.instructions+=3;NFSU2_TR(0x464b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464b8e:{NFSU2_TR(0x464b8e);
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
B464b90:{NFSU2_TR(0x464b90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464b20u);}goto L464b20;}}
}
B464b92:L464b92:{c.instructions+=1;NFSU2_TR(0x464b92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B464b93:L464b93:{c.instructions+=3;NFSU2_TR(0x464b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464b94:{NFSU2_TR(0x464b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464b95:{NFSU2_TR(0x464b95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464ba0:L464ba0:{c.instructions+=3;NFSU2_TR(0x464ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464ba4:{NFSU2_TR(0x464ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464ba7:{NFSU2_TR(0x464ba7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464bb0:L464bb0:{c.instructions+=6;NFSU2_TR(0x464bb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464bb1:{NFSU2_TR(0x464bb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464bb2:{NFSU2_TR(0x464bb2);
__builtin_memmove((R+28),(R+4),4);
}
B464bb4:{NFSU2_TR(0x464bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464bb7:{NFSU2_TR(0x464bb7);
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
B464bb9:{NFSU2_TR(0x464bb9);
if(r1(R+518)){{goto L464bce;}}
}
B464bbb:L464bbb:{c.instructions+=1;NFSU2_TR(0x464bbb);
{goto L464bc0;}
}
B464bc0:L464bc0:{c.instructions+=3;NFSU2_TR(0x464bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464bc2:{NFSU2_TR(0x464bc2);
__builtin_memmove((R+4),(R+24),4);
}
B464bc4:{NFSU2_TR(0x464bc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464bc7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464bc7:L464bc7:{c.instructions+=3;NFSU2_TR(0x464bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464bca:{NFSU2_TR(0x464bca);
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
B464bcc:{NFSU2_TR(0x464bcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464bc0u);}goto L464bc0;}}
}
B464bce:L464bce:{c.instructions+=3;NFSU2_TR(0x464bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464bd1:{NFSU2_TR(0x464bd1);
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
B464bd3:{NFSU2_TR(0x464bd3);
if(r1(R+518)){{goto L464be3;}}
}
B464bd5:L464bd5:{c.instructions+=3;NFSU2_TR(0x464bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464bd7:{NFSU2_TR(0x464bd7);
__builtin_memmove((R+4),(R+24),4);
}
B464bd9:{NFSU2_TR(0x464bd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464bdcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464bdc:L464bdc:{c.instructions+=3;NFSU2_TR(0x464bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464bdf:{NFSU2_TR(0x464bdf);
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
B464be1:{NFSU2_TR(0x464be1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464bd5u);}goto L464bd5;}}
}
B464be3:L464be3:{c.instructions+=3;NFSU2_TR(0x464be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464be4:{NFSU2_TR(0x464be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464be5:{NFSU2_TR(0x464be5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464bf0:L464bf0:{c.instructions+=4;NFSU2_TR(0x464bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464bf1:{NFSU2_TR(0x464bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464bf4:{NFSU2_TR(0x464bf4);
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
B464bf6:{NFSU2_TR(0x464bf6);
if(r1(R+518)){{goto L464c06;}}
}
B464bf8:L464bf8:{c.instructions+=3;NFSU2_TR(0x464bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464bfa:{NFSU2_TR(0x464bfa);
__builtin_memmove((R+4),(R+24),4);
}
B464bfc:{NFSU2_TR(0x464bfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464bffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464bff:L464bff:{c.instructions+=3;NFSU2_TR(0x464bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464c02:{NFSU2_TR(0x464c02);
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
B464c04:{NFSU2_TR(0x464c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464bf8u);}goto L464bf8;}}
}
B464c06:L464c06:{c.instructions+=2;NFSU2_TR(0x464c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464c07:{NFSU2_TR(0x464c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464c10:L464c10:{c.instructions+=8;NFSU2_TR(0x464c10);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B464c15:{NFSU2_TR(0x464c15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c16:{NFSU2_TR(0x464c16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c17:{NFSU2_TR(0x464c17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c18:{NFSU2_TR(0x464c18);
__builtin_memmove((R+28),(R+4),4);
}
B464c1a:{NFSU2_TR(0x464c1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B464c1d:{NFSU2_TR(0x464c1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B464c1f:{NFSU2_TR(0x464c1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464c34;}}
}
B464c21:L464c21:{c.instructions+=6;NFSU2_TR(0x464c21);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B464c25:{NFSU2_TR(0x464c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464c29:{NFSU2_TR(0x464c29);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B464c2c:{NFSU2_TR(0x464c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464c2f:{NFSU2_TR(0x464c2f);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B464c32:{NFSU2_TR(0x464c32);
{goto L464c3b;}
}
B464c34:L464c34:{c.instructions+=1;NFSU2_TR(0x464c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464c3b:L464c3b:{c.instructions+=4;NFSU2_TR(0x464c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464c3e:{NFSU2_TR(0x464c3e);
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
B464c40:{NFSU2_TR(0x464c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B464c44:{NFSU2_TR(0x464c44);
if(r1(R+518)){{goto L464c5c;}}
}
B464c46:L464c46:{c.instructions+=4;NFSU2_TR(0x464c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464c48:{NFSU2_TR(0x464c48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c49:{NFSU2_TR(0x464c49);
__builtin_memmove((R+4),(R+24),4);
}
B464c4b:{NFSU2_TR(0x464c4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464c4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464c4e:L464c4e:{c.instructions+=3;NFSU2_TR(0x464c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464c50:{NFSU2_TR(0x464c50);
__builtin_memmove((R+4),(R+24),4);
}
B464c52:{NFSU2_TR(0x464c52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464c55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464c55:L464c55:{c.instructions+=3;NFSU2_TR(0x464c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464c58:{NFSU2_TR(0x464c58);
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
B464c5a:{NFSU2_TR(0x464c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464c46u);}goto L464c46;}}
}
B464c5c:L464c5c:{c.instructions+=3;NFSU2_TR(0x464c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464c5f:{NFSU2_TR(0x464c5f);
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
B464c61:{NFSU2_TR(0x464c61);
if(r1(R+518)){{goto L464c79;}}
}
B464c63:L464c63:{c.instructions+=4;NFSU2_TR(0x464c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464c65:{NFSU2_TR(0x464c65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c66:{NFSU2_TR(0x464c66);
__builtin_memmove((R+4),(R+24),4);
}
B464c68:{NFSU2_TR(0x464c68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464c6bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464c6b:L464c6b:{c.instructions+=3;NFSU2_TR(0x464c6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464c6d:{NFSU2_TR(0x464c6d);
__builtin_memmove((R+4),(R+24),4);
}
B464c6f:{NFSU2_TR(0x464c6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464c72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464c72:L464c72:{c.instructions+=3;NFSU2_TR(0x464c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464c75:{NFSU2_TR(0x464c75);
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
B464c77:{NFSU2_TR(0x464c77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464c63u);}goto L464c63;}}
}
B464c79:L464c79:{c.instructions+=4;NFSU2_TR(0x464c79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464c7a:{NFSU2_TR(0x464c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464c7b:{NFSU2_TR(0x464c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464c7c:{NFSU2_TR(0x464c7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464c80:L464c80:{c.instructions+=8;NFSU2_TR(0x464c80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c81:{NFSU2_TR(0x464c81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c82:{NFSU2_TR(0x464c82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c83:{NFSU2_TR(0x464c83);
__builtin_memmove((R+28),(R+4),4);
}
B464c85:{NFSU2_TR(0x464c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464c88:{NFSU2_TR(0x464c88);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B464c8a:{NFSU2_TR(0x464c8a);
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
B464c8c:{NFSU2_TR(0x464c8c);
if(r1(R+518)){{goto L464c9f;}}
}
B464c8e:L464c8e:{c.instructions+=1;NFSU2_TR(0x464c8e);
__builtin_memmove((R+28),(R+28),4);
}
B464c90:L464c90:{c.instructions+=4;NFSU2_TR(0x464c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464c92:{NFSU2_TR(0x464c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464c95:{NFSU2_TR(0x464c95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464c97:{NFSU2_TR(0x464c97);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464c99ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B464c99:L464c99:{c.instructions+=3;NFSU2_TR(0x464c99);
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
B464c9b:{NFSU2_TR(0x464c9b);
__builtin_memmove((R+4),(R+24),4);
}
B464c9d:{NFSU2_TR(0x464c9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464c90u);}goto L464c90;}}
}
B464c9f:L464c9f:{c.instructions+=3;NFSU2_TR(0x464c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464ca2:{NFSU2_TR(0x464ca2);
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
B464ca4:{NFSU2_TR(0x464ca4);
if(r1(R+518)){{goto L464cb5;}}
}
B464ca6:L464ca6:{c.instructions+=4;NFSU2_TR(0x464ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464ca8:{NFSU2_TR(0x464ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464cab:{NFSU2_TR(0x464cab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464cad:{NFSU2_TR(0x464cad);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464cafull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B464caf:L464caf:{c.instructions+=3;NFSU2_TR(0x464caf);
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
B464cb1:{NFSU2_TR(0x464cb1);
__builtin_memmove((R+4),(R+24),4);
}
B464cb3:{NFSU2_TR(0x464cb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464ca6u);}goto L464ca6;}}
}
B464cb5:L464cb5:{c.instructions+=8;NFSU2_TR(0x464cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464cb8:{NFSU2_TR(0x464cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464cbb:{NFSU2_TR(0x464cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464cbe:{NFSU2_TR(0x464cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464cc1:{NFSU2_TR(0x464cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464cc2:{NFSU2_TR(0x464cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464cc3:{NFSU2_TR(0x464cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464cc4:{NFSU2_TR(0x464cc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464cd0:L464cd0:{c.instructions+=3;NFSU2_TR(0x464cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464cd3:{NFSU2_TR(0x464cd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464cd5:{NFSU2_TR(0x464cd5);
if(r1(R+518)){{goto L464cf4;}}
}
B464cd7:L464cd7:{c.instructions+=2;NFSU2_TR(0x464cd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464cdb:{NFSU2_TR(0x464cdb);
{goto L464ce0;}
}
B464ce0:L464ce0:{c.instructions+=5;NFSU2_TR(0x464ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464ce3:{NFSU2_TR(0x464ce3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B464ce6:{NFSU2_TR(0x464ce6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7full))));
}
B464ce9:{NFSU2_TR(0x464ce9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B464ceb:{NFSU2_TR(0x464ceb);
if(r1(R+518)){{goto L464cf6;}}
}
B464ced:L464ced:{c.instructions+=3;NFSU2_TR(0x464ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464cf0:{NFSU2_TR(0x464cf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464cf2:{NFSU2_TR(0x464cf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464ce0u);}goto L464ce0;}}
}
B464cf4:L464cf4:{c.instructions+=1;NFSU2_TR(0x464cf4);
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
B464cf6:L464cf6:{c.instructions+=1;NFSU2_TR(0x464cf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464d00:L464d00:{c.instructions+=3;NFSU2_TR(0x464d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464d03:{NFSU2_TR(0x464d03);
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
B464d05:{NFSU2_TR(0x464d05);
if(r1(R+518)){{goto L464d24;}}
}
B464d07:L464d07:{c.instructions+=2;NFSU2_TR(0x464d07);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464d0b:{NFSU2_TR(0x464d0b);
{goto L464d10;}
}
B464d10:L464d10:{c.instructions+=5;NFSU2_TR(0x464d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464d13:{NFSU2_TR(0x464d13);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B464d16:{NFSU2_TR(0x464d16);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7full))));
}
B464d19:{NFSU2_TR(0x464d19);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B464d1b:{NFSU2_TR(0x464d1b);
if(r1(R+518)){{goto L464d24;}}
}
B464d1d:L464d1d:{c.instructions+=3;NFSU2_TR(0x464d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464d20:{NFSU2_TR(0x464d20);
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
B464d22:{NFSU2_TR(0x464d22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464d10u);}goto L464d10;}}
}
B464d24:L464d24:{c.instructions+=1;NFSU2_TR(0x464d24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464d30:L464d30:{c.instructions+=7;NFSU2_TR(0x464d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464d34:{NFSU2_TR(0x464d34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464d35:{NFSU2_TR(0x464d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464d38:{NFSU2_TR(0x464d38);
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
B464d3a:{NFSU2_TR(0x464d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464d3d:{NFSU2_TR(0x464d3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B464d41:{NFSU2_TR(0x464d41);
if(r1(R+518)){{goto L464d51;}}
}
B464d43:L464d43:{c.instructions+=3;NFSU2_TR(0x464d43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B464d45:{NFSU2_TR(0x464d45);
__builtin_memmove((R+4),(R+24),4);
}
B464d47:{NFSU2_TR(0x464d47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464d4aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464d4a:L464d4a:{c.instructions+=3;NFSU2_TR(0x464d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464d4d:{NFSU2_TR(0x464d4d);
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
B464d4f:{NFSU2_TR(0x464d4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464d43u);}goto L464d43;}}
}
B464d51:L464d51:{c.instructions+=2;NFSU2_TR(0x464d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464d52:{NFSU2_TR(0x464d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464d60:L464d60:{c.instructions+=6;NFSU2_TR(0x464d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464d61:{NFSU2_TR(0x464d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464d64:{NFSU2_TR(0x464d64);
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
B464d66:{NFSU2_TR(0x464d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464d6d:{NFSU2_TR(0x464d6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B464d71:{NFSU2_TR(0x464d71);
if(r1(R+518)){{goto L464d81;}}
}
B464d73:L464d73:{c.instructions+=3;NFSU2_TR(0x464d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464d75:{NFSU2_TR(0x464d75);
__builtin_memmove((R+4),(R+24),4);
}
B464d77:{NFSU2_TR(0x464d77);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464d7aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464d7a:L464d7a:{c.instructions+=3;NFSU2_TR(0x464d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464d7d:{NFSU2_TR(0x464d7d);
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
B464d7f:{NFSU2_TR(0x464d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464d73u);}goto L464d73;}}
}
B464d81:L464d81:{c.instructions+=3;NFSU2_TR(0x464d81);
w1(R+0,u8(0x1ull));
}
B464d83:{NFSU2_TR(0x464d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464d84:{NFSU2_TR(0x464d84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464d90:L464d90:{c.instructions+=2;NFSU2_TR(0x464d90);
w4(R+0,u32(0x7ed8c8ull));
}
B464d95:{NFSU2_TR(0x464d95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464da0:L464da0:{c.instructions+=2;NFSU2_TR(0x464da0);
__builtin_memmove((R+0),gp(0x7ed8cc),4);
}
B464da5:{NFSU2_TR(0x464da5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464db0:L464db0:{c.instructions+=8;NFSU2_TR(0x464db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464db4:{NFSU2_TR(0x464db4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464db5:{NFSU2_TR(0x464db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464db8:{NFSU2_TR(0x464db8);
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
B464dba:{NFSU2_TR(0x464dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464dbd:{NFSU2_TR(0x464dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464dc0:{NFSU2_TR(0x464dc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B464dc4:{NFSU2_TR(0x464dc4);
if(r1(R+518)){{goto L464dd4;}}
}
B464dc6:L464dc6:{c.instructions+=3;NFSU2_TR(0x464dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464dc8:{NFSU2_TR(0x464dc8);
__builtin_memmove((R+4),(R+24),4);
}
B464dca:{NFSU2_TR(0x464dca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464dcdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464dcd:L464dcd:{c.instructions+=3;NFSU2_TR(0x464dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464dd0:{NFSU2_TR(0x464dd0);
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
B464dd2:{NFSU2_TR(0x464dd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464dc6u);}goto L464dc6;}}
}
B464dd4:L464dd4:{c.instructions+=2;NFSU2_TR(0x464dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464dd5:{NFSU2_TR(0x464dd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464de0:L464de0:{c.instructions+=10;NFSU2_TR(0x464de0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464de1:{NFSU2_TR(0x464de1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464de2:{NFSU2_TR(0x464de2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464de3:{NFSU2_TR(0x464de3);
__builtin_memmove((R+28),(R+4),4);
}
B464de5:{NFSU2_TR(0x464de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464de8:{NFSU2_TR(0x464de8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B464dea:{NFSU2_TR(0x464dea);
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
B464dec:{NFSU2_TR(0x464dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464def:{NFSU2_TR(0x464def);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B464df2:{NFSU2_TR(0x464df2);
if(r1(R+518)){{goto L464e02;}}
}
B464df4:L464df4:{c.instructions+=3;NFSU2_TR(0x464df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B464df6:{NFSU2_TR(0x464df6);
__builtin_memmove((R+4),(R+24),4);
}
B464df8:{NFSU2_TR(0x464df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464dfbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B464dfb:L464dfb:{c.instructions+=3;NFSU2_TR(0x464dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464dfe:{NFSU2_TR(0x464dfe);
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
B464e00:{NFSU2_TR(0x464e00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x464df4u);}goto L464df4;}}
}
B464e02:L464e02:{c.instructions+=6;NFSU2_TR(0x464e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464e05:{NFSU2_TR(0x464e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464e06:{NFSU2_TR(0x464e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464e07:{NFSU2_TR(0x464e07);
w1(R+0,u8(0x1ull));
}
B464e09:{NFSU2_TR(0x464e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464e0a:{NFSU2_TR(0x464e0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464e10:L464e10:{c.instructions+=2;NFSU2_TR(0x464e10);
w4(R+0,u32(0x7ed8d8ull));
}
B464e15:{NFSU2_TR(0x464e15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464e20:L464e20:{c.instructions+=2;NFSU2_TR(0x464e20);
__builtin_memmove((R+0),gp(0x7ed8dc),4);
}
B464e25:{NFSU2_TR(0x464e25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464e30:L464e30:{c.instructions+=2;NFSU2_TR(0x464e30);
w4(R+0,u32(0x7ed8e8ull));
}
B464e35:{NFSU2_TR(0x464e35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464e40:L464e40:{c.instructions+=2;NFSU2_TR(0x464e40);
__builtin_memmove((R+0),gp(0x7ed8ec),4);
}
B464e45:{NFSU2_TR(0x464e45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464e49:L464e49:{c.instructions+=13;NFSU2_TR(0x464e49);
}
B464e4a:{NFSU2_TR(0x464e4a);
}
B464e4b:{NFSU2_TR(0x464e4b);
}
B464e4c:{NFSU2_TR(0x464e4c);
}
B464e4d:{NFSU2_TR(0x464e4d);
}
B464e4e:{NFSU2_TR(0x464e4e);
}
B464e4f:{NFSU2_TR(0x464e4f);
}
B464e50:{NFSU2_TR(0x464e50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464e51:{NFSU2_TR(0x464e51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464e52:{NFSU2_TR(0x464e52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464e55:{NFSU2_TR(0x464e55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464e56:{NFSU2_TR(0x464e56);
__builtin_memmove((R+4),(R+12),4);
}
B464e58:{NFSU2_TR(0x464e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464e5dull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B464e5d:L464e5d:{c.instructions+=7;NFSU2_TR(0x464e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B464e60:{NFSU2_TR(0x464e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464e64:{NFSU2_TR(0x464e64);
__builtin_memmove((R+28),(R+20),4);
}
B464e66:{NFSU2_TR(0x464e66);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B464e68:{NFSU2_TR(0x464e68);
__builtin_memmove((R+4),(R+12),4);
}
B464e6a:{NFSU2_TR(0x464e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464e6d:{NFSU2_TR(0x464e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464e72ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B464e72:L464e72:{c.instructions+=3;NFSU2_TR(0x464e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464e75:{NFSU2_TR(0x464e75);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B464e77:{NFSU2_TR(0x464e77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L464e9f;}}
}
B464e79:L464e79:{c.instructions+=2;NFSU2_TR(0x464e79);
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
B464e7b:{NFSU2_TR(0x464e7b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L464e9f;}}
}
B464e7d:L464e7d:{c.instructions+=5;NFSU2_TR(0x464e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464e80:{NFSU2_TR(0x464e80);
w4(R+0,u32(0x1ull));
}
B464e85:{NFSU2_TR(0x464e85);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B464e87:{NFSU2_TR(0x464e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464e8a:{NFSU2_TR(0x464e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464e9f;}}
}
B464e8c:L464e8c:{c.instructions+=5;NFSU2_TR(0x464e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464e8f:{NFSU2_TR(0x464e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464e95:{NFSU2_TR(0x464e95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464e96:{NFSU2_TR(0x464e96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464e97:{NFSU2_TR(0x464e97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464e9cull));
TAIL_STATIC(0x6f7745u,6f7);
}
B464e9c:L464e9c:{c.instructions+=1;NFSU2_TR(0x464e9c);
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
B464e9f:L464e9f:{c.instructions+=4;NFSU2_TR(0x464e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464ea0:{NFSU2_TR(0x464ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B464ea1:{NFSU2_TR(0x464ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464ea2:{NFSU2_TR(0x464ea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464eb0:L464eb0:{c.instructions+=5;NFSU2_TR(0x464eb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464eb1:{NFSU2_TR(0x464eb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464eb4:{NFSU2_TR(0x464eb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464eb5:{NFSU2_TR(0x464eb5);
__builtin_memmove((R+4),(R+12),4);
}
B464eb7:{NFSU2_TR(0x464eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464ebcull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B464ebc:L464ebc:{c.instructions+=3;NFSU2_TR(0x464ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464ebf:{NFSU2_TR(0x464ebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464ec1:{NFSU2_TR(0x464ec1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464ecf;}}
}
B464ec3:L464ec3:{c.instructions+=2;NFSU2_TR(0x464ec3);
__builtin_memmove((R+4),(R+12),4);
}
B464ec5:{NFSU2_TR(0x464ec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464ecaull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B464eca:L464eca:{c.instructions+=4;NFSU2_TR(0x464eca);
__builtin_memmove((R+0),(R+24),4);
}
B464ecc:{NFSU2_TR(0x464ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464ecd:{NFSU2_TR(0x464ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464ece:{NFSU2_TR(0x464ece);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464ecf:L464ecf:{c.instructions+=7;NFSU2_TR(0x464ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464ed2:{NFSU2_TR(0x464ed2);
__builtin_memmove((R+4),gp(0x82af5c),4);
}
B464ed8:{NFSU2_TR(0x464ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464edb:{NFSU2_TR(0x464edb);
w4(R+0,u32(0x100ull));
}
B464ee0:{NFSU2_TR(0x464ee0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B464ee2:{NFSU2_TR(0x464ee2);
__builtin_memmove(gp(0x82af5c),(R+4),4);
}
B464ee8:{NFSU2_TR(0x464ee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464eef;}}
}
B464eea:L464eea:{c.instructions+=1;NFSU2_TR(0x464eea);
__builtin_memmove(gp(0x82af5c),(R+0),4);
}
B464eef:L464eef:{c.instructions+=7;NFSU2_TR(0x464eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B464ef1:{NFSU2_TR(0x464ef1);
__builtin_memmove((R+0),gp(0x82af5c),4);
}
B464ef6:{NFSU2_TR(0x464ef6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B464efc:{NFSU2_TR(0x464efc);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B464efe:{NFSU2_TR(0x464efe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B464f00:{NFSU2_TR(0x464f00);
__builtin_memmove((R+4),(R+12),4);
}
B464f02:{NFSU2_TR(0x464f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464f07ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B464f07:L464f07:{c.instructions+=4;NFSU2_TR(0x464f07);
__builtin_memmove((R+0),(R+24),4);
}
B464f09:{NFSU2_TR(0x464f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464f0a:{NFSU2_TR(0x464f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464f0b:{NFSU2_TR(0x464f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464f10:L464f10:{c.instructions+=6;NFSU2_TR(0x464f10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464f11:{NFSU2_TR(0x464f11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464f14:{NFSU2_TR(0x464f14);
__builtin_memmove((R+4),(R+12),4);
}
B464f16:{NFSU2_TR(0x464f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464f1d:{NFSU2_TR(0x464f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464f24:{NFSU2_TR(0x464f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x464f29ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B464f29:L464f29:{c.instructions+=3;NFSU2_TR(0x464f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464f2c:{NFSU2_TR(0x464f2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464f2e:{NFSU2_TR(0x464f2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464f44;}}
}
B464f30:L464f30:{c.instructions+=7;NFSU2_TR(0x464f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f33:{NFSU2_TR(0x464f33);
__builtin_memmove((R+4),(R+12),4);
}
B464f35:{NFSU2_TR(0x464f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f38:{NFSU2_TR(0x464f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f3b:{NFSU2_TR(0x464f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f3e:{NFSU2_TR(0x464f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464f3f:{NFSU2_TR(0x464f3f);
TAIL_STATIC(0x6f55e8u,6f5);
}
B464f44:L464f44:{c.instructions+=7;NFSU2_TR(0x464f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f47:{NFSU2_TR(0x464f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464f4a:{NFSU2_TR(0x464f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f4d:{NFSU2_TR(0x464f4d);
__builtin_memmove((R+4),(R+12),4);
}
B464f4f:{NFSU2_TR(0x464f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f52:{NFSU2_TR(0x464f52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464f53:{NFSU2_TR(0x464f53);
TAIL_STATIC(0x6f55e8u,6f5);
}
B464f60:L464f60:{c.instructions+=3;NFSU2_TR(0x464f60);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464f63:{NFSU2_TR(0x464f63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464f64:{NFSU2_TR(0x464f64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464f6e;}}
}
B464f66:L464f66:{c.instructions+=3;NFSU2_TR(0x464f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464f69:{NFSU2_TR(0x464f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f6c:{NFSU2_TR(0x464f6c);
{goto L464f77;}
}
B464f6e:L464f6e:{c.instructions+=3;NFSU2_TR(0x464f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464f71:{NFSU2_TR(0x464f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464f74:{NFSU2_TR(0x464f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f77:L464f77:{c.instructions+=2;NFSU2_TR(0x464f77);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B464f7a:{NFSU2_TR(0x464f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464f84;}}
}
B464f7c:L464f7c:{c.instructions+=3;NFSU2_TR(0x464f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464f7f:{NFSU2_TR(0x464f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f82:{NFSU2_TR(0x464f82);
{goto L464f8d;}
}
B464f84:L464f84:{c.instructions+=3;NFSU2_TR(0x464f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464f87:{NFSU2_TR(0x464f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B464f8a:{NFSU2_TR(0x464f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464f8d:L464f8d:{c.instructions+=3;NFSU2_TR(0x464f8d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
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
B464f90:{NFSU2_TR(0x464f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464f91:{NFSU2_TR(0x464f91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464fa0;}}
}
B464f93:L464f93:{c.instructions+=3;NFSU2_TR(0x464f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464f96:{NFSU2_TR(0x464f96);
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
B464f98:{NFSU2_TR(0x464f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L464f9d;}}
}
B464f9a:L464f9a:{c.instructions+=1;NFSU2_TR(0x464f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464f9d:L464f9d:{c.instructions+=1;NFSU2_TR(0x464f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464fa0:L464fa0:{c.instructions+=5;NFSU2_TR(0x464fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B464fa7:{NFSU2_TR(0x464fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464faa:{NFSU2_TR(0x464faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464fad:{NFSU2_TR(0x464fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464fb0:{NFSU2_TR(0x464fb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464fc0:L464fc0:{c.instructions+=12;NFSU2_TR(0x464fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B464fc3:{NFSU2_TR(0x464fc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464fc4:{NFSU2_TR(0x464fc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464fc5:{NFSU2_TR(0x464fc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464fc6:{NFSU2_TR(0x464fc6);
__builtin_memmove((R+24),(R+0),4);
}
B464fc8:{NFSU2_TR(0x464fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B464fcb:{NFSU2_TR(0x464fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464fce:{NFSU2_TR(0x464fce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B464fcf:{NFSU2_TR(0x464fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B464fd2:{NFSU2_TR(0x464fd2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B464fd5:{NFSU2_TR(0x464fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B464fd9:{NFSU2_TR(0x464fd9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L464ff0;}}
}
B464fdb:L464fdb:{c.instructions+=7;NFSU2_TR(0x464fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B464fdc:{NFSU2_TR(0x464fdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B464fdd:{NFSU2_TR(0x464fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B464fde:{NFSU2_TR(0x464fde);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B464fe0:{NFSU2_TR(0x464fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B464fe1:{NFSU2_TR(0x464fe1);
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
B464fe4:{NFSU2_TR(0x464fe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B464fe5:L464fe5:{c.instructions+=2;NFSU2_TR(0x464fe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B464fe9:{NFSU2_TR(0x464fe9);
__builtin_memmove((R+16),(R+16),4);
}
B464ff0:L464ff0:{c.instructions+=4;NFSU2_TR(0x464ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B464ff3:{NFSU2_TR(0x464ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B464ff6:{NFSU2_TR(0x464ff6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B464ffc:{NFSU2_TR(0x464ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x465000u,465);
}
XIT:NFSU2_TR_EXIT(0x464,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
