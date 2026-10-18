#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_674(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_676(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_681(u8* __restrict R,Cpu& c);
u32 body_683(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x682,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x682,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_682(u8* __restrict R,Cpu& c);
u32 page_682(Cpu& c){return body_682(c.regs.data(),c);}
__attribute__((noinline)) u32 body_682(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x682000:goto L682000;
case 0x682002:c.instructions+=11;goto B682002;
case 0x682003:c.instructions+=10;goto B682003;
case 0x682006:c.instructions+=9;goto B682006;
case 0x682008:c.instructions+=8;goto B682008;
case 0x68200a:c.instructions+=7;goto B68200a;
case 0x68200d:c.instructions+=6;goto B68200d;
case 0x682010:c.instructions+=5;goto B682010;
case 0x682013:c.instructions+=4;goto B682013;
case 0x682016:c.instructions+=3;goto B682016;
case 0x682019:c.instructions+=2;goto B682019;
case 0x68201c:c.instructions+=1;goto B68201c;
case 0x682022:goto L682022;
case 0x682026:c.instructions+=1;goto B682026;
case 0x68202c:goto L68202c;
case 0x68202f:c.instructions+=1;goto B68202f;
case 0x682031:goto L682031;
case 0x682034:c.instructions+=5;goto B682034;
case 0x682039:c.instructions+=4;goto B682039;
case 0x68203e:c.instructions+=3;goto B68203e;
case 0x68203f:c.instructions+=2;goto B68203f;
case 0x682040:c.instructions+=1;goto B682040;
case 0x682045:goto L682045;
case 0x682048:c.instructions+=2;goto B682048;
case 0x68204d:c.instructions+=1;goto B68204d;
case 0x682052:goto L682052;
case 0x682055:c.instructions+=1;goto B682055;
case 0x682057:goto L682057;
case 0x68205a:c.instructions+=2;goto B68205a;
case 0x68205d:c.instructions+=1;goto B68205d;
case 0x682062:goto L682062;
case 0x682064:c.instructions+=2;goto B682064;
case 0x682067:c.instructions+=1;goto B682067;
case 0x68206d:goto L68206d;
case 0x682070:c.instructions+=2;goto B682070;
case 0x682072:c.instructions+=1;goto B682072;
case 0x682074:goto L682074;
case 0x682077:c.instructions+=2;goto B682077;
case 0x68207a:c.instructions+=1;goto B68207a;
case 0x68207c:goto L68207c;
case 0x68207f:goto L68207f;
case 0x682081:c.instructions+=1;goto B682081;
case 0x682083:goto L682083;
case 0x682086:c.instructions+=2;goto B682086;
case 0x682089:c.instructions+=1;goto B682089;
case 0x68208b:goto L68208b;
case 0x68208e:goto L68208e;
case 0x682091:c.instructions+=2;goto B682091;
case 0x682093:c.instructions+=1;goto B682093;
case 0x682095:goto L682095;
case 0x682098:c.instructions+=4;goto B682098;
case 0x68209b:c.instructions+=3;goto B68209b;
case 0x68209d:c.instructions+=2;goto B68209d;
case 0x6820a0:c.instructions+=1;goto B6820a0;
case 0x6820a2:goto L6820a2;
case 0x6820a5:c.instructions+=2;goto B6820a5;
case 0x6820a7:c.instructions+=1;goto B6820a7;
case 0x6820a9:goto L6820a9;
case 0x6820ad:c.instructions+=1;goto B6820ad;
case 0x6820af:goto L6820af;
case 0x6820b2:goto L6820b2;
case 0x6820b5:c.instructions+=2;goto B6820b5;
case 0x6820b8:c.instructions+=1;goto B6820b8;
case 0x6820bb:goto L6820bb;
case 0x6820bd:c.instructions+=1;goto B6820bd;
case 0x6820bf:goto L6820bf;
case 0x6820c1:c.instructions+=3;goto B6820c1;
case 0x6820c4:c.instructions+=2;goto B6820c4;
case 0x6820c5:c.instructions+=1;goto B6820c5;
case 0x6820ca:goto L6820ca;
case 0x6820cc:c.instructions+=3;goto B6820cc;
case 0x6820cd:c.instructions+=2;goto B6820cd;
case 0x6820d0:c.instructions+=1;goto B6820d0;
case 0x6820d6:goto L6820d6;
case 0x6820da:c.instructions+=1;goto B6820da;
case 0x6820dc:goto L6820dc;
case 0x6820dd:c.instructions+=1;goto B6820dd;
case 0x6820e2:goto L6820e2;
case 0x6820e4:c.instructions+=3;goto B6820e4;
case 0x6820e5:c.instructions+=2;goto B6820e5;
case 0x6820e8:c.instructions+=1;goto B6820e8;
case 0x6820ee:goto L6820ee;
case 0x6820f1:c.instructions+=4;goto B6820f1;
case 0x6820f4:c.instructions+=3;goto B6820f4;
case 0x6820f7:c.instructions+=2;goto B6820f7;
case 0x6820fa:c.instructions+=1;goto B6820fa;
case 0x6820fc:goto L6820fc;
case 0x6820ff:c.instructions+=3;goto B6820ff;
case 0x682102:c.instructions+=2;goto B682102;
case 0x682104:c.instructions+=1;goto B682104;
case 0x682106:goto L682106;
case 0x682109:c.instructions+=2;goto B682109;
case 0x68210b:c.instructions+=1;goto B68210b;
case 0x68210d:goto L68210d;
case 0x682111:c.instructions+=1;goto B682111;
case 0x682113:goto L682113;
case 0x682116:goto L682116;
case 0x68211a:c.instructions+=3;goto B68211a;
case 0x68211d:c.instructions+=2;goto B68211d;
case 0x682120:c.instructions+=1;goto B682120;
case 0x682122:goto L682122;
case 0x682126:c.instructions+=1;goto B682126;
case 0x682128:goto L682128;
case 0x68212c:c.instructions+=1;goto B68212c;
case 0x68212e:goto L68212e;
case 0x682130:c.instructions+=1;goto B682130;
case 0x682132:goto L682132;
case 0x682135:c.instructions+=2;goto B682135;
case 0x682137:c.instructions+=1;goto B682137;
case 0x682139:goto L682139;
case 0x68213b:c.instructions+=4;goto B68213b;
case 0x68213e:c.instructions+=3;goto B68213e;
case 0x68213f:c.instructions+=2;goto B68213f;
case 0x682141:c.instructions+=1;goto B682141;
case 0x682146:goto L682146;
case 0x682148:c.instructions+=2;goto B682148;
case 0x68214b:c.instructions+=1;goto B68214b;
case 0x682151:goto L682151;
case 0x682154:c.instructions+=1;goto B682154;
case 0x682157:goto L682157;
case 0x68215a:c.instructions+=1;goto B68215a;
case 0x68215d:goto L68215d;
case 0x682160:c.instructions+=2;goto B682160;
case 0x682163:c.instructions+=1;goto B682163;
case 0x682166:goto L682166;
case 0x682168:c.instructions+=2;goto B682168;
case 0x68216b:c.instructions+=1;goto B68216b;
case 0x68216d:goto L68216d;
case 0x682170:c.instructions+=6;goto B682170;
case 0x682173:c.instructions+=5;goto B682173;
case 0x682175:c.instructions+=4;goto B682175;
case 0x682178:c.instructions+=3;goto B682178;
case 0x68217b:c.instructions+=2;goto B68217b;
case 0x68217e:c.instructions+=1;goto B68217e;
case 0x682184:goto L682184;
case 0x682186:goto L682186;
case 0x682189:goto L682189;
case 0x68218c:c.instructions+=6;goto B68218c;
case 0x68218f:c.instructions+=5;goto B68218f;
case 0x682193:c.instructions+=4;goto B682193;
case 0x682195:c.instructions+=3;goto B682195;
case 0x682198:c.instructions+=2;goto B682198;
case 0x68219b:c.instructions+=1;goto B68219b;
case 0x68219d:goto L68219d;
case 0x6821a0:c.instructions+=2;goto B6821a0;
case 0x6821a2:c.instructions+=1;goto B6821a2;
case 0x6821a4:goto L6821a4;
case 0x6821a8:c.instructions+=1;goto B6821a8;
case 0x6821aa:goto L6821aa;
case 0x6821ad:c.instructions+=2;goto B6821ad;
case 0x6821b0:c.instructions+=1;goto B6821b0;
case 0x6821b3:goto L6821b3;
case 0x6821b6:c.instructions+=4;goto B6821b6;
case 0x6821b9:c.instructions+=3;goto B6821b9;
case 0x6821bb:c.instructions+=2;goto B6821bb;
case 0x6821be:c.instructions+=1;goto B6821be;
case 0x6821c4:goto L6821c4;
case 0x6821c7:c.instructions+=1;goto B6821c7;
case 0x6821c9:goto L6821c9;
case 0x6821cd:c.instructions+=1;goto B6821cd;
case 0x6821d3:goto L6821d3;
case 0x6821d6:c.instructions+=5;goto B6821d6;
case 0x6821d9:c.instructions+=4;goto B6821d9;
case 0x6821dc:c.instructions+=3;goto B6821dc;
case 0x6821df:c.instructions+=2;goto B6821df;
case 0x6821e2:c.instructions+=1;goto B6821e2;
case 0x6821e4:goto L6821e4;
case 0x6821e7:c.instructions+=1;goto B6821e7;
case 0x6821e9:goto L6821e9;
case 0x6821ec:c.instructions+=1;goto B6821ec;
case 0x6821ee:goto L6821ee;
case 0x6821f4:goto L6821f4;
case 0x6821f7:goto L6821f7;
case 0x6821fa:c.instructions+=2;goto B6821fa;
case 0x6821fd:c.instructions+=1;goto B6821fd;
case 0x6821ff:goto L6821ff;
case 0x682202:c.instructions+=11;goto B682202;
case 0x682204:c.instructions+=10;goto B682204;
case 0x682207:c.instructions+=9;goto B682207;
case 0x682208:c.instructions+=8;goto B682208;
case 0x682209:c.instructions+=7;goto B682209;
case 0x68220c:c.instructions+=6;goto B68220c;
case 0x68220f:c.instructions+=5;goto B68220f;
case 0x682211:c.instructions+=4;goto B682211;
case 0x682213:c.instructions+=3;goto B682213;
case 0x682216:c.instructions+=2;goto B682216;
case 0x682219:c.instructions+=1;goto B682219;
case 0x68221e:goto L68221e;
case 0x682221:c.instructions+=2;goto B682221;
case 0x682224:c.instructions+=1;goto B682224;
case 0x682226:goto L682226;
case 0x682229:c.instructions+=2;goto B682229;
case 0x68222c:c.instructions+=1;goto B68222c;
case 0x68222e:goto L68222e;
case 0x682230:goto L682230;
case 0x682232:c.instructions+=1;goto B682232;
case 0x682234:goto L682234;
case 0x682237:c.instructions+=5;goto B682237;
case 0x68223a:c.instructions+=4;goto B68223a;
case 0x68223d:c.instructions+=3;goto B68223d;
case 0x682240:c.instructions+=2;goto B682240;
case 0x682243:c.instructions+=1;goto B682243;
case 0x682246:goto L682246;
case 0x682249:c.instructions+=6;goto B682249;
case 0x68224c:c.instructions+=5;goto B68224c;
case 0x68224f:c.instructions+=4;goto B68224f;
case 0x682252:c.instructions+=3;goto B682252;
case 0x682255:c.instructions+=2;goto B682255;
case 0x682258:c.instructions+=1;goto B682258;
case 0x68225a:goto L68225a;
case 0x68225d:c.instructions+=3;goto B68225d;
case 0x682260:c.instructions+=2;goto B682260;
case 0x682263:c.instructions+=1;goto B682263;
case 0x682265:goto L682265;
case 0x682268:c.instructions+=7;goto B682268;
case 0x68226b:c.instructions+=6;goto B68226b;
case 0x68226e:c.instructions+=5;goto B68226e;
case 0x682271:c.instructions+=4;goto B682271;
case 0x682272:c.instructions+=3;goto B682272;
case 0x682275:c.instructions+=2;goto B682275;
case 0x682277:c.instructions+=1;goto B682277;
case 0x68227c:goto L68227c;
case 0x68227e:c.instructions+=2;goto B68227e;
case 0x682281:c.instructions+=1;goto B682281;
case 0x682287:goto L682287;
case 0x68228a:goto L68228a;
case 0x68228d:c.instructions+=2;goto B68228d;
case 0x682290:c.instructions+=1;goto B682290;
case 0x682292:goto L682292;
case 0x682295:c.instructions+=11;goto B682295;
case 0x682298:c.instructions+=10;goto B682298;
case 0x68229b:c.instructions+=9;goto B68229b;
case 0x68229d:c.instructions+=8;goto B68229d;
case 0x68229f:c.instructions+=7;goto B68229f;
case 0x6822a1:c.instructions+=6;goto B6822a1;
case 0x6822a4:c.instructions+=5;goto B6822a4;
case 0x6822a7:c.instructions+=4;goto B6822a7;
case 0x6822a8:c.instructions+=3;goto B6822a8;
case 0x6822ab:c.instructions+=2;goto B6822ab;
case 0x6822ad:c.instructions+=1;goto B6822ad;
case 0x6822b2:goto L6822b2;
case 0x6822b4:c.instructions+=2;goto B6822b4;
case 0x6822b7:c.instructions+=1;goto B6822b7;
case 0x6822bd:goto L6822bd;
case 0x6822be:c.instructions+=2;goto B6822be;
case 0x6822c0:c.instructions+=1;goto B6822c0;
case 0x6822c5:goto L6822c5;
case 0x6822ca:goto L6822ca;
case 0x6822d0:c.instructions+=1;goto B6822d0;
case 0x6822d6:goto L6822d6;
case 0x6822d9:c.instructions+=11;goto B6822d9;
case 0x6822dc:c.instructions+=10;goto B6822dc;
case 0x6822df:c.instructions+=9;goto B6822df;
case 0x6822e2:c.instructions+=8;goto B6822e2;
case 0x6822e4:c.instructions+=7;goto B6822e4;
case 0x6822e6:c.instructions+=6;goto B6822e6;
case 0x6822e9:c.instructions+=5;goto B6822e9;
case 0x6822ec:c.instructions+=4;goto B6822ec;
case 0x6822ed:c.instructions+=3;goto B6822ed;
case 0x6822f0:c.instructions+=2;goto B6822f0;
case 0x6822f2:c.instructions+=1;goto B6822f2;
case 0x6822f7:goto L6822f7;
case 0x6822f9:c.instructions+=2;goto B6822f9;
case 0x6822fc:c.instructions+=1;goto B6822fc;
case 0x682302:goto L682302;
case 0x682305:c.instructions+=6;goto B682305;
case 0x682308:c.instructions+=5;goto B682308;
case 0x68230b:c.instructions+=4;goto B68230b;
case 0x68230e:c.instructions+=3;goto B68230e;
case 0x68230f:c.instructions+=2;goto B68230f;
case 0x682311:c.instructions+=1;goto B682311;
case 0x682316:goto L682316;
case 0x682318:c.instructions+=1;goto B682318;
case 0x68231a:goto L68231a;
case 0x68231e:c.instructions+=2;goto B68231e;
case 0x682322:c.instructions+=1;goto B682322;
case 0x682328:goto L682328;
case 0x68232b:c.instructions+=9;goto B68232b;
case 0x68232e:c.instructions+=8;goto B68232e;
case 0x682331:c.instructions+=7;goto B682331;
case 0x682334:c.instructions+=6;goto B682334;
case 0x682337:c.instructions+=5;goto B682337;
case 0x68233a:c.instructions+=4;goto B68233a;
case 0x68233d:c.instructions+=3;goto B68233d;
case 0x682340:c.instructions+=2;goto B682340;
case 0x682343:c.instructions+=1;goto B682343;
case 0x682345:goto L682345;
case 0x68234a:goto L68234a;
case 0x68234d:c.instructions+=8;goto B68234d;
case 0x682350:c.instructions+=7;goto B682350;
case 0x682353:c.instructions+=6;goto B682353;
case 0x682356:c.instructions+=5;goto B682356;
case 0x68235b:c.instructions+=4;goto B68235b;
case 0x682360:c.instructions+=3;goto B682360;
case 0x682361:c.instructions+=2;goto B682361;
case 0x682362:c.instructions+=1;goto B682362;
case 0x682367:goto L682367;
case 0x68236a:c.instructions+=1;goto B68236a;
case 0x68236c:goto L68236c;
case 0x68236e:c.instructions+=3;goto B68236e;
case 0x682371:c.instructions+=2;goto B682371;
case 0x682373:c.instructions+=1;goto B682373;
case 0x682378:goto L682378;
case 0x68237a:c.instructions+=2;goto B68237a;
case 0x68237d:c.instructions+=1;goto B68237d;
case 0x682383:goto L682383;
case 0x682387:c.instructions+=1;goto B682387;
case 0x682389:goto L682389;
case 0x68238d:c.instructions+=1;goto B68238d;
case 0x68238f:goto L68238f;
case 0x682392:c.instructions+=15;goto B682392;
case 0x682395:c.instructions+=14;goto B682395;
case 0x682398:c.instructions+=13;goto B682398;
case 0x68239b:c.instructions+=12;goto B68239b;
case 0x68239d:c.instructions+=11;goto B68239d;
case 0x68239f:c.instructions+=10;goto B68239f;
case 0x6823a2:c.instructions+=9;goto B6823a2;
case 0x6823a5:c.instructions+=8;goto B6823a5;
case 0x6823a6:c.instructions+=7;goto B6823a6;
case 0x6823a9:c.instructions+=6;goto B6823a9;
case 0x6823af:c.instructions+=5;goto B6823af;
case 0x6823b5:c.instructions+=4;goto B6823b5;
case 0x6823b6:c.instructions+=3;goto B6823b6;
case 0x6823b7:c.instructions+=2;goto B6823b7;
case 0x6823b9:c.instructions+=1;goto B6823b9;
case 0x6823be:goto L6823be;
case 0x6823c0:c.instructions+=2;goto B6823c0;
case 0x6823c3:c.instructions+=1;goto B6823c3;
case 0x6823c9:goto L6823c9;
case 0x6823cc:c.instructions+=3;goto B6823cc;
case 0x6823cf:c.instructions+=2;goto B6823cf;
case 0x6823d2:c.instructions+=1;goto B6823d2;
case 0x6823d4:goto L6823d4;
case 0x6823d6:c.instructions+=3;goto B6823d6;
case 0x6823d9:c.instructions+=2;goto B6823d9;
case 0x6823db:c.instructions+=1;goto B6823db;
case 0x6823e0:goto L6823e0;
case 0x6823e2:c.instructions+=2;goto B6823e2;
case 0x6823e5:c.instructions+=1;goto B6823e5;
case 0x6823eb:goto L6823eb;
case 0x6823ef:c.instructions+=5;goto B6823ef;
case 0x6823f2:c.instructions+=4;goto B6823f2;
case 0x6823f5:c.instructions+=3;goto B6823f5;
case 0x6823f8:c.instructions+=2;goto B6823f8;
case 0x6823fb:c.instructions+=1;goto B6823fb;
case 0x682401:goto L682401;
case 0x682405:c.instructions+=1;goto B682405;
case 0x68240b:goto L68240b;
case 0x68240d:c.instructions+=2;goto B68240d;
case 0x682410:c.instructions+=1;goto B682410;
case 0x682412:goto L682412;
case 0x682415:c.instructions+=10;goto B682415;
case 0x682418:c.instructions+=9;goto B682418;
case 0x68241b:c.instructions+=8;goto B68241b;
case 0x68241e:c.instructions+=7;goto B68241e;
case 0x682421:c.instructions+=6;goto B682421;
case 0x682424:c.instructions+=5;goto B682424;
case 0x682427:c.instructions+=4;goto B682427;
case 0x682429:c.instructions+=3;goto B682429;
case 0x68242b:c.instructions+=2;goto B68242b;
case 0x68242c:c.instructions+=1;goto B68242c;
case 0x68242f:goto L68242f;
case 0x682431:c.instructions+=1;goto B682431;
case 0x682437:goto L682437;
case 0x682438:c.instructions+=2;goto B682438;
case 0x68243b:c.instructions+=1;goto B68243b;
case 0x68243d:goto L68243d;
case 0x68243e:c.instructions+=4;goto B68243e;
case 0x682441:c.instructions+=3;goto B682441;
case 0x682444:c.instructions+=2;goto B682444;
case 0x682449:c.instructions+=1;goto B682449;
case 0x68244e:goto L68244e;
case 0x682452:c.instructions+=2;goto B682452;
case 0x682456:c.instructions+=1;goto B682456;
case 0x68245c:goto L68245c;
case 0x68245f:c.instructions+=12;goto B68245f;
case 0x682461:c.instructions+=11;goto B682461;
case 0x682464:c.instructions+=10;goto B682464;
case 0x682467:c.instructions+=9;goto B682467;
case 0x68246a:c.instructions+=8;goto B68246a;
case 0x68246d:c.instructions+=7;goto B68246d;
case 0x682470:c.instructions+=6;goto B682470;
case 0x682473:c.instructions+=5;goto B682473;
case 0x682475:c.instructions+=4;goto B682475;
case 0x682476:c.instructions+=3;goto B682476;
case 0x682479:c.instructions+=2;goto B682479;
case 0x68247c:c.instructions+=1;goto B68247c;
case 0x682482:goto L682482;
case 0x682485:c.instructions+=8;goto B682485;
case 0x682488:c.instructions+=7;goto B682488;
case 0x68248b:c.instructions+=6;goto B68248b;
case 0x68248e:c.instructions+=5;goto B68248e;
case 0x682491:c.instructions+=4;goto B682491;
case 0x682494:c.instructions+=3;goto B682494;
case 0x682497:c.instructions+=2;goto B682497;
case 0x68249a:c.instructions+=1;goto B68249a;
case 0x68249c:goto L68249c;
case 0x68249f:c.instructions+=3;goto B68249f;
case 0x6824a2:c.instructions+=2;goto B6824a2;
case 0x6824a5:c.instructions+=1;goto B6824a5;
case 0x6824a7:goto L6824a7;
case 0x6824aa:c.instructions+=3;goto B6824aa;
case 0x6824ac:c.instructions+=2;goto B6824ac;
case 0x6824ae:c.instructions+=1;goto B6824ae;
case 0x6824b0:goto L6824b0;
case 0x6824b3:c.instructions+=1;goto B6824b3;
case 0x6824b5:goto L6824b5;
case 0x6824b8:goto L6824b8;
case 0x6824bb:c.instructions+=3;goto B6824bb;
case 0x6824be:c.instructions+=2;goto B6824be;
case 0x6824c1:c.instructions+=1;goto B6824c1;
case 0x6824c3:goto L6824c3;
case 0x6824c6:c.instructions+=2;goto B6824c6;
case 0x6824c8:c.instructions+=1;goto B6824c8;
case 0x6824ce:goto L6824ce;
case 0x6824d0:c.instructions+=3;goto B6824d0;
case 0x6824d3:c.instructions+=2;goto B6824d3;
case 0x6824d4:c.instructions+=1;goto B6824d4;
case 0x6824d9:goto L6824d9;
case 0x6824db:c.instructions+=3;goto B6824db;
case 0x6824dc:c.instructions+=2;goto B6824dc;
case 0x6824df:c.instructions+=1;goto B6824df;
case 0x6824e5:goto L6824e5;
case 0x6824e6:c.instructions+=1;goto B6824e6;
case 0x6824eb:goto L6824eb;
case 0x6824ed:c.instructions+=3;goto B6824ed;
case 0x6824ee:c.instructions+=2;goto B6824ee;
case 0x6824f1:c.instructions+=1;goto B6824f1;
case 0x6824f7:goto L6824f7;
case 0x6824fa:c.instructions+=15;goto B6824fa;
case 0x6824fc:c.instructions+=14;goto B6824fc;
case 0x6824ff:c.instructions+=13;goto B6824ff;
case 0x682502:c.instructions+=12;goto B682502;
case 0x682505:c.instructions+=11;goto B682505;
case 0x682508:c.instructions+=10;goto B682508;
case 0x68250b:c.instructions+=9;goto B68250b;
case 0x68250e:c.instructions+=8;goto B68250e;
case 0x682511:c.instructions+=7;goto B682511;
case 0x682514:c.instructions+=6;goto B682514;
case 0x682517:c.instructions+=5;goto B682517;
case 0x682519:c.instructions+=4;goto B682519;
case 0x68251c:c.instructions+=3;goto B68251c;
case 0x68251f:c.instructions+=2;goto B68251f;
case 0x682526:c.instructions+=1;goto B682526;
case 0x682529:goto L682529;
case 0x68252c:c.instructions+=13;goto B68252c;
case 0x68252f:c.instructions+=12;goto B68252f;
case 0x682532:c.instructions+=11;goto B682532;
case 0x682535:c.instructions+=10;goto B682535;
case 0x682538:c.instructions+=9;goto B682538;
case 0x68253b:c.instructions+=8;goto B68253b;
case 0x68253e:c.instructions+=7;goto B68253e;
case 0x682541:c.instructions+=6;goto B682541;
case 0x682544:c.instructions+=5;goto B682544;
case 0x682547:c.instructions+=4;goto B682547;
case 0x68254a:c.instructions+=3;goto B68254a;
case 0x68254d:c.instructions+=2;goto B68254d;
case 0x682550:c.instructions+=1;goto B682550;
case 0x682552:goto L682552;
case 0x682555:c.instructions+=3;goto B682555;
case 0x682558:c.instructions+=2;goto B682558;
case 0x68255b:c.instructions+=1;goto B68255b;
case 0x68255d:goto L68255d;
case 0x682560:c.instructions+=12;goto B682560;
case 0x682563:c.instructions+=11;goto B682563;
case 0x682566:c.instructions+=10;goto B682566;
case 0x682569:c.instructions+=9;goto B682569;
case 0x68256c:c.instructions+=8;goto B68256c;
case 0x68256f:c.instructions+=7;goto B68256f;
case 0x682571:c.instructions+=6;goto B682571;
case 0x682574:c.instructions+=5;goto B682574;
case 0x682575:c.instructions+=4;goto B682575;
case 0x682578:c.instructions+=3;goto B682578;
case 0x68257b:c.instructions+=2;goto B68257b;
case 0x68257e:c.instructions+=1;goto B68257e;
case 0x682580:goto L682580;
case 0x682583:c.instructions+=1;goto B682583;
case 0x682586:goto L682586;
case 0x682589:c.instructions+=3;goto B682589;
case 0x68258c:c.instructions+=2;goto B68258c;
case 0x68258f:c.instructions+=1;goto B68258f;
case 0x682591:goto L682591;
case 0x682593:c.instructions+=9;goto B682593;
case 0x682595:c.instructions+=8;goto B682595;
case 0x682598:c.instructions+=7;goto B682598;
case 0x68259d:c.instructions+=6;goto B68259d;
case 0x6825a0:c.instructions+=5;goto B6825a0;
case 0x6825a5:c.instructions+=4;goto B6825a5;
case 0x6825a6:c.instructions+=3;goto B6825a6;
case 0x6825a7:c.instructions+=2;goto B6825a7;
case 0x6825a9:c.instructions+=1;goto B6825a9;
case 0x6825ae:goto L6825ae;
case 0x6825b0:c.instructions+=2;goto B6825b0;
case 0x6825b3:c.instructions+=1;goto B6825b3;
case 0x6825b9:goto L6825b9;
case 0x6825bd:c.instructions+=3;goto B6825bd;
case 0x6825c0:c.instructions+=2;goto B6825c0;
case 0x6825c3:c.instructions+=1;goto B6825c3;
case 0x6825c5:goto L6825c5;
case 0x6825c7:c.instructions+=3;goto B6825c7;
case 0x6825ca:c.instructions+=2;goto B6825ca;
case 0x6825cb:c.instructions+=1;goto B6825cb;
case 0x6825d0:goto L6825d0;
case 0x6825d2:c.instructions+=3;goto B6825d2;
case 0x6825d3:c.instructions+=2;goto B6825d3;
case 0x6825d6:c.instructions+=1;goto B6825d6;
case 0x6825dc:goto L6825dc;
case 0x6825de:c.instructions+=4;goto B6825de;
case 0x6825e1:c.instructions+=3;goto B6825e1;
case 0x6825e3:c.instructions+=2;goto B6825e3;
case 0x6825e5:c.instructions+=1;goto B6825e5;
case 0x6825e8:goto L6825e8;
case 0x6825ea:goto L6825ea;
case 0x6825ec:c.instructions+=1;goto B6825ec;
case 0x6825ef:goto L6825ef;
case 0x6825f1:goto L6825f1;
case 0x6825f4:goto L6825f4;
case 0x6825f7:c.instructions+=6;goto B6825f7;
case 0x6825fa:c.instructions+=5;goto B6825fa;
case 0x6825fe:c.instructions+=4;goto B6825fe;
case 0x682601:c.instructions+=3;goto B682601;
case 0x682603:c.instructions+=2;goto B682603;
case 0x68260a:c.instructions+=1;goto B68260a;
case 0x68260f:goto L68260f;
case 0x682612:c.instructions+=3;goto B682612;
case 0x682614:c.instructions+=2;goto B682614;
case 0x682617:c.instructions+=1;goto B682617;
case 0x682619:goto L682619;
case 0x68261c:c.instructions+=1;goto B68261c;
case 0x68261e:goto L68261e;
case 0x682620:c.instructions+=1;goto B682620;
case 0x682622:goto L682622;
case 0x682624:c.instructions+=1;goto B682624;
case 0x682625:goto L682625;
case 0x682628:c.instructions+=3;goto B682628;
case 0x68262b:c.instructions+=2;goto B68262b;
case 0x68262e:c.instructions+=1;goto B68262e;
case 0x682634:goto L682634;
case 0x682636:c.instructions+=1;goto B682636;
case 0x682638:goto L682638;
case 0x68263b:c.instructions+=1;goto B68263b;
case 0x68263d:goto L68263d;
case 0x682640:c.instructions+=5;goto B682640;
case 0x682645:c.instructions+=4;goto B682645;
case 0x68264a:c.instructions+=3;goto B68264a;
case 0x68264b:c.instructions+=2;goto B68264b;
case 0x68264c:c.instructions+=1;goto B68264c;
case 0x682651:goto L682651;
case 0x682654:goto L682654;
case 0x68265b:c.instructions+=1;goto B68265b;
case 0x682660:goto L682660;
case 0x682663:c.instructions+=1;goto B682663;
case 0x682669:goto L682669;
case 0x68266c:c.instructions+=2;goto B68266c;
case 0x68266e:c.instructions+=1;goto B68266e;
case 0x682674:goto L682674;
case 0x682677:c.instructions+=1;goto B682677;
case 0x682679:goto L682679;
case 0x68267b:c.instructions+=1;goto B68267b;
case 0x68267d:goto L68267d;
case 0x682680:c.instructions+=7;goto B682680;
case 0x682683:c.instructions+=6;goto B682683;
case 0x682686:c.instructions+=5;goto B682686;
case 0x682688:c.instructions+=4;goto B682688;
case 0x682689:c.instructions+=3;goto B682689;
case 0x68268c:c.instructions+=2;goto B68268c;
case 0x68268f:c.instructions+=1;goto B68268f;
case 0x682691:goto L682691;
case 0x682694:c.instructions+=14;goto B682694;
case 0x682697:c.instructions+=13;goto B682697;
case 0x68269a:c.instructions+=12;goto B68269a;
case 0x68269c:c.instructions+=11;goto B68269c;
case 0x68269d:c.instructions+=10;goto B68269d;
case 0x68269e:c.instructions+=9;goto B68269e;
case 0x68269f:c.instructions+=8;goto B68269f;
case 0x6826a0:c.instructions+=7;goto B6826a0;
case 0x6826a3:c.instructions+=6;goto B6826a3;
case 0x6826a8:c.instructions+=5;goto B6826a8;
case 0x6826ad:c.instructions+=4;goto B6826ad;
case 0x6826ae:c.instructions+=3;goto B6826ae;
case 0x6826af:c.instructions+=2;goto B6826af;
case 0x6826b1:c.instructions+=1;goto B6826b1;
case 0x6826b6:goto L6826b6;
case 0x6826b8:c.instructions+=2;goto B6826b8;
case 0x6826bb:c.instructions+=1;goto B6826bb;
case 0x6826c1:goto L6826c1;
case 0x6826c4:c.instructions+=7;goto B6826c4;
case 0x6826c7:c.instructions+=6;goto B6826c7;
case 0x6826ca:c.instructions+=5;goto B6826ca;
case 0x6826cd:c.instructions+=4;goto B6826cd;
case 0x6826ce:c.instructions+=3;goto B6826ce;
case 0x6826d1:c.instructions+=2;goto B6826d1;
case 0x6826d3:c.instructions+=1;goto B6826d3;
case 0x6826d8:goto L6826d8;
case 0x6826da:c.instructions+=2;goto B6826da;
case 0x6826dd:c.instructions+=1;goto B6826dd;
case 0x6826e3:goto L6826e3;
case 0x6826e6:c.instructions+=12;goto B6826e6;
case 0x6826e9:c.instructions+=11;goto B6826e9;
case 0x6826ea:c.instructions+=10;goto B6826ea;
case 0x6826ed:c.instructions+=9;goto B6826ed;
case 0x6826ef:c.instructions+=8;goto B6826ef;
case 0x6826f0:c.instructions+=7;goto B6826f0;
case 0x6826f6:c.instructions+=6;goto B6826f6;
case 0x6826f9:c.instructions+=5;goto B6826f9;
case 0x6826fc:c.instructions+=4;goto B6826fc;
case 0x6826fd:c.instructions+=3;goto B6826fd;
case 0x682700:c.instructions+=2;goto B682700;
case 0x682702:c.instructions+=1;goto B682702;
case 0x682707:goto L682707;
case 0x682709:c.instructions+=2;goto B682709;
case 0x68270c:c.instructions+=1;goto B68270c;
case 0x682712:goto L682712;
case 0x682715:c.instructions+=6;goto B682715;
case 0x682718:c.instructions+=5;goto B682718;
case 0x68271b:c.instructions+=4;goto B68271b;
case 0x68271e:c.instructions+=3;goto B68271e;
case 0x68271f:c.instructions+=2;goto B68271f;
case 0x682721:c.instructions+=1;goto B682721;
case 0x682726:goto L682726;
case 0x682728:c.instructions+=1;goto B682728;
case 0x68272a:goto L68272a;
case 0x68272d:c.instructions+=1;goto B68272d;
case 0x682733:goto L682733;
case 0x682736:c.instructions+=10;goto B682736;
case 0x682739:c.instructions+=9;goto B682739;
case 0x68273c:c.instructions+=8;goto B68273c;
case 0x68273e:c.instructions+=7;goto B68273e;
case 0x682741:c.instructions+=6;goto B682741;
case 0x682744:c.instructions+=5;goto B682744;
case 0x682747:c.instructions+=4;goto B682747;
case 0x682749:c.instructions+=3;goto B682749;
case 0x68274b:c.instructions+=2;goto B68274b;
case 0x68274c:c.instructions+=1;goto B68274c;
case 0x68274f:goto L68274f;
case 0x682751:c.instructions+=1;goto B682751;
case 0x682753:goto L682753;
case 0x682754:c.instructions+=2;goto B682754;
case 0x682757:c.instructions+=1;goto B682757;
case 0x682759:goto L682759;
case 0x68275b:goto L68275b;
case 0x682762:c.instructions+=1;goto B682762;
case 0x682764:goto L682764;
case 0x682767:c.instructions+=5;goto B682767;
case 0x68276c:c.instructions+=4;goto B68276c;
case 0x682771:c.instructions+=3;goto B682771;
case 0x682772:c.instructions+=2;goto B682772;
case 0x682773:c.instructions+=1;goto B682773;
case 0x682778:goto L682778;
case 0x68277b:c.instructions+=1;goto B68277b;
case 0x68277d:goto L68277d;
case 0x682780:c.instructions+=2;goto B682780;
case 0x682782:c.instructions+=1;goto B682782;
case 0x682784:goto L682784;
case 0x682787:c.instructions+=1;goto B682787;
case 0x682789:goto L682789;
case 0x68278c:c.instructions+=1;goto B68278c;
case 0x68278e:goto L68278e;
case 0x682791:c.instructions+=4;goto B682791;
case 0x682794:c.instructions+=3;goto B682794;
case 0x682795:c.instructions+=2;goto B682795;
case 0x682798:c.instructions+=1;goto B682798;
case 0x68279a:goto L68279a;
case 0x68279c:goto L68279c;
case 0x68279f:c.instructions+=8;goto B68279f;
case 0x6827a2:c.instructions+=7;goto B6827a2;
case 0x6827a5:c.instructions+=6;goto B6827a5;
case 0x6827a8:c.instructions+=5;goto B6827a8;
case 0x6827ab:c.instructions+=4;goto B6827ab;
case 0x6827ae:c.instructions+=3;goto B6827ae;
case 0x6827b0:c.instructions+=2;goto B6827b0;
case 0x6827b3:c.instructions+=1;goto B6827b3;
case 0x6827b5:goto L6827b5;
case 0x6827b7:goto L6827b7;
case 0x6827b9:c.instructions+=1;goto B6827b9;
case 0x6827bc:goto L6827bc;
case 0x6827be:goto L6827be;
case 0x6827c1:goto L6827c1;
case 0x6827c4:c.instructions+=6;goto B6827c4;
case 0x6827c7:c.instructions+=5;goto B6827c7;
case 0x6827c9:c.instructions+=4;goto B6827c9;
case 0x6827cc:c.instructions+=3;goto B6827cc;
case 0x6827cf:c.instructions+=2;goto B6827cf;
case 0x6827d2:c.instructions+=1;goto B6827d2;
case 0x6827d4:goto L6827d4;
case 0x6827d8:goto L6827d8;
case 0x6827db:c.instructions+=1;goto B6827db;
case 0x6827e0:goto L6827e0;
case 0x6827e3:c.instructions+=1;goto B6827e3;
case 0x6827e8:goto L6827e8;
case 0x6827eb:c.instructions+=1;goto B6827eb;
case 0x6827f0:goto L6827f0;
case 0x6827f3:c.instructions+=1;goto B6827f3;
case 0x6827f8:goto L6827f8;
case 0x6827fb:c.instructions+=1;goto B6827fb;
case 0x682800:goto L682800;
case 0x682803:c.instructions+=2;goto B682803;
case 0x682806:c.instructions+=1;goto B682806;
case 0x68280b:goto L68280b;
case 0x68280e:goto L68280e;
case 0x682811:c.instructions+=5;goto B682811;
case 0x682814:c.instructions+=4;goto B682814;
case 0x682816:c.instructions+=3;goto B682816;
case 0x682819:c.instructions+=2;goto B682819;
case 0x68281c:c.instructions+=1;goto B68281c;
case 0x68281e:goto L68281e;
case 0x682821:c.instructions+=2;goto B682821;
case 0x682823:c.instructions+=1;goto B682823;
case 0x682825:goto L682825;
case 0x682829:c.instructions+=1;goto B682829;
case 0x68282b:goto L68282b;
case 0x68282e:c.instructions+=1;goto B68282e;
case 0x682831:goto L682831;
case 0x682834:c.instructions+=2;goto B682834;
case 0x682838:c.instructions+=1;goto B682838;
case 0x68283e:goto L68283e;
case 0x682841:c.instructions+=4;goto B682841;
case 0x682843:c.instructions+=3;goto B682843;
case 0x682846:c.instructions+=2;goto B682846;
case 0x682849:c.instructions+=1;goto B682849;
case 0x68284b:goto L68284b;
case 0x68284e:c.instructions+=2;goto B68284e;
case 0x682851:c.instructions+=1;goto B682851;
case 0x682853:goto L682853;
case 0x682856:c.instructions+=8;goto B682856;
case 0x682859:c.instructions+=7;goto B682859;
case 0x68285c:c.instructions+=6;goto B68285c;
case 0x68285f:c.instructions+=5;goto B68285f;
case 0x682862:c.instructions+=4;goto B682862;
case 0x682865:c.instructions+=3;goto B682865;
case 0x682868:c.instructions+=2;goto B682868;
case 0x68286b:c.instructions+=1;goto B68286b;
case 0x68286d:goto L68286d;
case 0x68286f:goto L68286f;
case 0x682872:c.instructions+=2;goto B682872;
case 0x682875:c.instructions+=1;goto B682875;
case 0x682877:goto L682877;
case 0x68287a:c.instructions+=4;goto B68287a;
case 0x68287d:c.instructions+=3;goto B68287d;
case 0x682880:c.instructions+=2;goto B682880;
case 0x682883:c.instructions+=1;goto B682883;
case 0x682886:goto L682886;
case 0x682889:c.instructions+=3;goto B682889;
case 0x68288b:c.instructions+=2;goto B68288b;
case 0x68288e:c.instructions+=1;goto B68288e;
case 0x682890:goto L682890;
case 0x682893:c.instructions+=2;goto B682893;
case 0x682896:c.instructions+=1;goto B682896;
case 0x682898:goto L682898;
case 0x68289a:goto L68289a;
case 0x68289c:c.instructions+=1;goto B68289c;
case 0x68289e:goto L68289e;
case 0x6828a1:c.instructions+=2;goto B6828a1;
case 0x6828a4:c.instructions+=1;goto B6828a4;
case 0x6828aa:goto L6828aa;
case 0x6828ad:c.instructions+=4;goto B6828ad;
case 0x6828b0:c.instructions+=3;goto B6828b0;
case 0x6828b4:c.instructions+=2;goto B6828b4;
case 0x6828b7:c.instructions+=1;goto B6828b7;
case 0x6828b9:goto L6828b9;
case 0x6828bd:c.instructions+=1;goto B6828bd;
case 0x6828c3:goto L6828c3;
case 0x6828c6:c.instructions+=13;goto B6828c6;
case 0x6828c9:c.instructions+=12;goto B6828c9;
case 0x6828cb:c.instructions+=11;goto B6828cb;
case 0x6828ce:c.instructions+=10;goto B6828ce;
case 0x6828d0:c.instructions+=9;goto B6828d0;
case 0x6828d1:c.instructions+=8;goto B6828d1;
case 0x6828d2:c.instructions+=7;goto B6828d2;
case 0x6828d5:c.instructions+=6;goto B6828d5;
case 0x6828da:c.instructions+=5;goto B6828da;
case 0x6828df:c.instructions+=4;goto B6828df;
case 0x6828e0:c.instructions+=3;goto B6828e0;
case 0x6828e1:c.instructions+=2;goto B6828e1;
case 0x6828e3:c.instructions+=1;goto B6828e3;
case 0x6828e8:goto L6828e8;
case 0x6828ea:c.instructions+=2;goto B6828ea;
case 0x6828ed:c.instructions+=1;goto B6828ed;
case 0x6828f3:goto L6828f3;
case 0x6828f6:c.instructions+=7;goto B6828f6;
case 0x6828f9:c.instructions+=6;goto B6828f9;
case 0x6828fc:c.instructions+=5;goto B6828fc;
case 0x6828ff:c.instructions+=4;goto B6828ff;
case 0x682900:c.instructions+=3;goto B682900;
case 0x682903:c.instructions+=2;goto B682903;
case 0x682905:c.instructions+=1;goto B682905;
case 0x68290a:goto L68290a;
case 0x68290c:c.instructions+=2;goto B68290c;
case 0x68290f:c.instructions+=1;goto B68290f;
case 0x682915:goto L682915;
case 0x682918:c.instructions+=12;goto B682918;
case 0x68291b:c.instructions+=11;goto B68291b;
case 0x68291d:c.instructions+=10;goto B68291d;
case 0x682920:c.instructions+=9;goto B682920;
case 0x682922:c.instructions+=8;goto B682922;
case 0x682924:c.instructions+=7;goto B682924;
case 0x68292a:c.instructions+=6;goto B68292a;
case 0x68292d:c.instructions+=5;goto B68292d;
case 0x682930:c.instructions+=4;goto B682930;
case 0x682931:c.instructions+=3;goto B682931;
case 0x682934:c.instructions+=2;goto B682934;
case 0x682936:c.instructions+=1;goto B682936;
case 0x68293b:goto L68293b;
case 0x68293d:c.instructions+=2;goto B68293d;
case 0x682940:c.instructions+=1;goto B682940;
case 0x682946:goto L682946;
case 0x682949:c.instructions+=6;goto B682949;
case 0x68294c:c.instructions+=5;goto B68294c;
case 0x68294f:c.instructions+=4;goto B68294f;
case 0x682952:c.instructions+=3;goto B682952;
case 0x682953:c.instructions+=2;goto B682953;
case 0x682955:c.instructions+=1;goto B682955;
case 0x68295a:goto L68295a;
case 0x68295c:c.instructions+=1;goto B68295c;
case 0x68295e:goto L68295e;
case 0x682960:c.instructions+=2;goto B682960;
case 0x682963:c.instructions+=1;goto B682963;
case 0x682965:goto L682965;
case 0x682968:c.instructions+=10;goto B682968;
case 0x68296b:c.instructions+=9;goto B68296b;
case 0x68296e:c.instructions+=8;goto B68296e;
case 0x682970:c.instructions+=7;goto B682970;
case 0x682973:c.instructions+=6;goto B682973;
case 0x682976:c.instructions+=5;goto B682976;
case 0x682979:c.instructions+=4;goto B682979;
case 0x68297b:c.instructions+=3;goto B68297b;
case 0x68297d:c.instructions+=2;goto B68297d;
case 0x68297e:c.instructions+=1;goto B68297e;
case 0x682981:goto L682981;
case 0x682983:c.instructions+=1;goto B682983;
case 0x682985:goto L682985;
case 0x682986:c.instructions+=2;goto B682986;
case 0x682989:c.instructions+=1;goto B682989;
case 0x68298b:goto L68298b;
case 0x68298d:goto L68298d;
case 0x682994:c.instructions+=1;goto B682994;
case 0x682996:goto L682996;
case 0x682999:c.instructions+=6;goto B682999;
case 0x68299c:c.instructions+=5;goto B68299c;
case 0x6829a1:c.instructions+=4;goto B6829a1;
case 0x6829a6:c.instructions+=3;goto B6829a6;
case 0x6829a7:c.instructions+=2;goto B6829a7;
case 0x6829a8:c.instructions+=1;goto B6829a8;
case 0x6829ad:goto L6829ad;
case 0x6829b0:c.instructions+=1;goto B6829b0;
case 0x6829b2:goto L6829b2;
case 0x6829b6:c.instructions+=1;goto B6829b6;
case 0x6829bc:goto L6829bc;
case 0x6829bf:c.instructions+=3;goto B6829bf;
case 0x6829c2:c.instructions+=2;goto B6829c2;
case 0x6829c4:c.instructions+=1;goto B6829c4;
case 0x6829ca:goto L6829ca;
case 0x6829cc:c.instructions+=4;goto B6829cc;
case 0x6829ce:c.instructions+=3;goto B6829ce;
case 0x6829cf:c.instructions+=2;goto B6829cf;
case 0x6829d1:c.instructions+=1;goto B6829d1;
case 0x6829d6:goto L6829d6;
case 0x6829d8:c.instructions+=2;goto B6829d8;
case 0x6829db:c.instructions+=1;goto B6829db;
case 0x6829e1:goto L6829e1;
case 0x6829e5:c.instructions+=1;goto B6829e5;
case 0x6829e7:goto L6829e7;
case 0x6829eb:c.instructions+=1;goto B6829eb;
case 0x6829ed:goto L6829ed;
case 0x6829f1:c.instructions+=1;goto B6829f1;
case 0x6829f3:goto L6829f3;
case 0x6829f7:c.instructions+=1;goto B6829f7;
case 0x6829f9:goto L6829f9;
case 0x6829fc:c.instructions+=5;goto B6829fc;
case 0x6829ff:c.instructions+=4;goto B6829ff;
case 0x682a02:c.instructions+=3;goto B682a02;
case 0x682a05:c.instructions+=2;goto B682a05;
case 0x682a08:c.instructions+=1;goto B682a08;
case 0x682a0a:goto L682a0a;
case 0x682a0d:goto L682a0d;
case 0x682a0f:c.instructions+=3;goto B682a0f;
case 0x682a10:c.instructions+=2;goto B682a10;
case 0x682a12:c.instructions+=1;goto B682a12;
case 0x682a14:goto L682a14;
case 0x682a16:c.instructions+=5;goto B682a16;
case 0x682a18:c.instructions+=4;goto B682a18;
case 0x682a1b:c.instructions+=3;goto B682a1b;
case 0x682a1d:c.instructions+=2;goto B682a1d;
case 0x682a1e:c.instructions+=1;goto B682a1e;
case 0x682a23:goto L682a23;
case 0x682a25:c.instructions+=2;goto B682a25;
case 0x682a28:c.instructions+=1;goto B682a28;
case 0x682a2a:goto L682a2a;
case 0x682a2d:c.instructions+=4;goto B682a2d;
case 0x682a32:c.instructions+=3;goto B682a32;
case 0x682a33:c.instructions+=2;goto B682a33;
case 0x682a34:c.instructions+=1;goto B682a34;
case 0x682a39:goto L682a39;
case 0x682a3c:c.instructions+=5;goto B682a3c;
case 0x682a3f:c.instructions+=4;goto B682a3f;
case 0x682a42:c.instructions+=3;goto B682a42;
case 0x682a45:c.instructions+=2;goto B682a45;
case 0x682a48:c.instructions+=1;goto B682a48;
case 0x682a4a:goto L682a4a;
case 0x682a4d:c.instructions+=2;goto B682a4d;
case 0x682a4f:c.instructions+=1;goto B682a4f;
case 0x682a51:goto L682a51;
case 0x682a54:c.instructions+=1;goto B682a54;
case 0x682a57:goto L682a57;
case 0x682a5b:c.instructions+=5;goto B682a5b;
case 0x682a5e:c.instructions+=4;goto B682a5e;
case 0x682a61:c.instructions+=3;goto B682a61;
case 0x682a64:c.instructions+=2;goto B682a64;
case 0x682a67:c.instructions+=1;goto B682a67;
case 0x682a6d:goto L682a6d;
case 0x682a72:goto L682a72;
case 0x682a75:c.instructions+=6;goto B682a75;
case 0x682a78:c.instructions+=5;goto B682a78;
case 0x682a7d:c.instructions+=4;goto B682a7d;
case 0x682a82:c.instructions+=3;goto B682a82;
case 0x682a85:c.instructions+=2;goto B682a85;
case 0x682a86:c.instructions+=1;goto B682a86;
case 0x682a8b:goto L682a8b;
case 0x682a8e:c.instructions+=1;goto B682a8e;
case 0x682a93:goto L682a93;
case 0x682a9a:c.instructions+=1;goto B682a9a;
case 0x682a9f:goto L682a9f;
case 0x682aa4:goto L682aa4;
case 0x682aa5:c.instructions+=4;goto B682aa5;
case 0x682aa6:c.instructions+=3;goto B682aa6;
case 0x682aa7:c.instructions+=2;goto B682aa7;
case 0x682aa8:c.instructions+=1;goto B682aa8;
case 0x682aab:goto L682aab;
case 0x682aad:c.instructions+=7;goto B682aad;
case 0x682aae:c.instructions+=6;goto B682aae;
case 0x682aaf:c.instructions+=5;goto B682aaf;
case 0x682ab1:c.instructions+=4;goto B682ab1;
case 0x682ab4:c.instructions+=3;goto B682ab4;
case 0x682ab6:c.instructions+=2;goto B682ab6;
case 0x682ab7:c.instructions+=1;goto B682ab7;
case 0x682abd:goto L682abd;
case 0x682ac1:c.instructions+=1;goto B682ac1;
case 0x682ac7:goto L682ac7;
case 0x682aca:c.instructions+=2;goto B682aca;
case 0x682acc:c.instructions+=1;goto B682acc;
case 0x682ace:goto L682ace;
case 0x682ad3:c.instructions+=1;goto B682ad3;
case 0x682ad8:goto L682ad8;
case 0x682adb:c.instructions+=6;goto B682adb;
case 0x682add:c.instructions+=5;goto B682add;
case 0x682ae0:c.instructions+=4;goto B682ae0;
case 0x682ae3:c.instructions+=3;goto B682ae3;
case 0x682ae4:c.instructions+=2;goto B682ae4;
case 0x682ae5:c.instructions+=1;goto B682ae5;
case 0x682aea:goto L682aea;
case 0x682aec:c.instructions+=1;goto B682aec;
case 0x682af2:goto L682af2;
case 0x682af5:c.instructions+=1;goto B682af5;
case 0x682afa:goto L682afa;
case 0x682afd:c.instructions+=3;goto B682afd;
case 0x682b00:c.instructions+=2;goto B682b00;
case 0x682b01:c.instructions+=1;goto B682b01;
case 0x682b06:goto L682b06;
case 0x682b08:c.instructions+=5;goto B682b08;
case 0x682b0a:c.instructions+=4;goto B682b0a;
case 0x682b0b:c.instructions+=3;goto B682b0b;
case 0x682b0c:c.instructions+=2;goto B682b0c;
case 0x682b0f:c.instructions+=1;goto B682b0f;
case 0x682b11:goto L682b11;
case 0x682b16:c.instructions+=1;goto B682b16;
case 0x682b1b:goto L682b1b;
case 0x682b1e:c.instructions+=5;goto B682b1e;
case 0x682b20:c.instructions+=4;goto B682b20;
case 0x682b23:c.instructions+=3;goto B682b23;
case 0x682b25:c.instructions+=2;goto B682b25;
case 0x682b28:c.instructions+=1;goto B682b28;
case 0x682b2b:goto L682b2b;
case 0x682b2d:goto L682b2d;
case 0x682b2f:c.instructions+=1;goto B682b2f;
case 0x682b32:goto L682b32;
case 0x682b34:goto L682b34;
case 0x682b37:c.instructions+=8;goto B682b37;
case 0x682b38:c.instructions+=7;goto B682b38;
case 0x682b39:c.instructions+=6;goto B682b39;
case 0x682b3b:c.instructions+=5;goto B682b3b;
case 0x682b3e:c.instructions+=4;goto B682b3e;
case 0x682b3f:c.instructions+=3;goto B682b3f;
case 0x682b40:c.instructions+=2;goto B682b40;
case 0x682b43:c.instructions+=1;goto B682b43;
case 0x682b48:goto L682b48;
case 0x682b4a:c.instructions+=9;goto B682b4a;
case 0x682b4d:c.instructions+=8;goto B682b4d;
case 0x682b4e:c.instructions+=7;goto B682b4e;
case 0x682b4f:c.instructions+=6;goto B682b4f;
case 0x682b52:c.instructions+=5;goto B682b52;
case 0x682b53:c.instructions+=4;goto B682b53;
case 0x682b54:c.instructions+=3;goto B682b54;
case 0x682b57:c.instructions+=2;goto B682b57;
case 0x682b5a:c.instructions+=1;goto B682b5a;
case 0x682b5f:goto L682b5f;
case 0x682b65:c.instructions+=9;goto B682b65;
case 0x682b68:c.instructions+=8;goto B682b68;
case 0x682b69:c.instructions+=7;goto B682b69;
case 0x682b6a:c.instructions+=6;goto B682b6a;
case 0x682b6d:c.instructions+=5;goto B682b6d;
case 0x682b6e:c.instructions+=4;goto B682b6e;
case 0x682b6f:c.instructions+=3;goto B682b6f;
case 0x682b72:c.instructions+=2;goto B682b72;
case 0x682b75:c.instructions+=1;goto B682b75;
case 0x682b7a:goto L682b7a;
case 0x682b7e:c.instructions+=8;goto B682b7e;
case 0x682b81:c.instructions+=7;goto B682b81;
case 0x682b84:c.instructions+=6;goto B682b84;
case 0x682b85:c.instructions+=5;goto B682b85;
case 0x682b88:c.instructions+=4;goto B682b88;
case 0x682b8f:c.instructions+=3;goto B682b8f;
case 0x682b92:c.instructions+=2;goto B682b92;
case 0x682b94:c.instructions+=1;goto B682b94;
case 0x682b99:goto L682b99;
case 0x682b9b:c.instructions+=1;goto B682b9b;
case 0x682b9d:goto L682b9d;
case 0x682ba0:c.instructions+=4;goto B682ba0;
case 0x682ba2:c.instructions+=3;goto B682ba2;
case 0x682ba4:c.instructions+=2;goto B682ba4;
case 0x682ba9:c.instructions+=1;goto B682ba9;
case 0x682bab:goto L682bab;
case 0x682bad:goto L682bad;
case 0x682bae:c.instructions+=3;goto B682bae;
case 0x682baf:c.instructions+=2;goto B682baf;
case 0x682bb0:c.instructions+=1;goto B682bb0;
case 0x682bb1:goto L682bb1;
case 0x682bb3:c.instructions+=10;goto B682bb3;
case 0x682bb4:c.instructions+=9;goto B682bb4;
case 0x682bb6:c.instructions+=8;goto B682bb6;
case 0x682bb9:c.instructions+=7;goto B682bb9;
case 0x682bba:c.instructions+=6;goto B682bba;
case 0x682bbb:c.instructions+=5;goto B682bbb;
case 0x682bbe:c.instructions+=4;goto B682bbe;
case 0x682bc0:c.instructions+=3;goto B682bc0;
case 0x682bc2:c.instructions+=2;goto B682bc2;
case 0x682bc4:c.instructions+=1;goto B682bc4;
case 0x682bc6:goto L682bc6;
case 0x682bc9:c.instructions+=1;goto B682bc9;
case 0x682bcf:goto L682bcf;
case 0x682bd1:c.instructions+=1;goto B682bd1;
case 0x682bd6:goto L682bd6;
case 0x682bda:c.instructions+=1;goto B682bda;
case 0x682be0:goto L682be0;
case 0x682be3:c.instructions+=13;goto B682be3;
case 0x682be4:c.instructions+=12;goto B682be4;
case 0x682be7:c.instructions+=11;goto B682be7;
case 0x682beb:c.instructions+=10;goto B682beb;
case 0x682bed:c.instructions+=9;goto B682bed;
case 0x682bef:c.instructions+=8;goto B682bef;
case 0x682bf2:c.instructions+=7;goto B682bf2;
case 0x682bf5:c.instructions+=6;goto B682bf5;
case 0x682bf8:c.instructions+=5;goto B682bf8;
case 0x682bfb:c.instructions+=4;goto B682bfb;
case 0x682bfe:c.instructions+=3;goto B682bfe;
case 0x682c01:c.instructions+=2;goto B682c01;
case 0x682c04:c.instructions+=1;goto B682c04;
case 0x682c06:goto L682c06;
case 0x682c0a:c.instructions+=1;goto B682c0a;
case 0x682c0c:goto L682c0c;
case 0x682c0f:c.instructions+=3;goto B682c0f;
case 0x682c13:c.instructions+=2;goto B682c13;
case 0x682c16:c.instructions+=1;goto B682c16;
case 0x682c19:goto L682c19;
case 0x682c1c:c.instructions+=2;goto B682c1c;
case 0x682c1e:c.instructions+=1;goto B682c1e;
case 0x682c20:goto L682c20;
case 0x682c24:c.instructions+=1;goto B682c24;
case 0x682c26:goto L682c26;
case 0x682c28:c.instructions+=5;goto B682c28;
case 0x682c2b:c.instructions+=4;goto B682c2b;
case 0x682c2f:c.instructions+=3;goto B682c2f;
case 0x682c32:c.instructions+=2;goto B682c32;
case 0x682c35:c.instructions+=1;goto B682c35;
case 0x682c37:goto L682c37;
case 0x682c3a:c.instructions+=1;goto B682c3a;
case 0x682c3c:goto L682c3c;
case 0x682c3d:c.instructions+=2;goto B682c3d;
case 0x682c3f:c.instructions+=1;goto B682c3f;
case 0x682c44:goto L682c44;
case 0x682c46:c.instructions+=2;goto B682c46;
case 0x682c49:c.instructions+=1;goto B682c49;
case 0x682c4f:goto L682c4f;
case 0x682c51:goto L682c51;
case 0x682c54:c.instructions+=1;goto B682c54;
case 0x682c56:goto L682c56;
case 0x682c59:c.instructions+=2;goto B682c59;
case 0x682c5b:c.instructions+=1;goto B682c5b;
case 0x682c60:goto L682c60;
case 0x682c62:c.instructions+=2;goto B682c62;
case 0x682c65:c.instructions+=1;goto B682c65;
case 0x682c6b:goto L682c6b;
case 0x682c6d:goto L682c6d;
case 0x682c70:c.instructions+=3;goto B682c70;
case 0x682c72:c.instructions+=2;goto B682c72;
case 0x682c75:c.instructions+=1;goto B682c75;
case 0x682c77:goto L682c77;
case 0x682c7a:c.instructions+=1;goto B682c7a;
case 0x682c7c:goto L682c7c;
case 0x682c7f:c.instructions+=1;goto B682c7f;
case 0x682c81:goto L682c81;
case 0x682c84:c.instructions+=1;goto B682c84;
case 0x682c86:goto L682c86;
case 0x682c89:c.instructions+=1;goto B682c89;
case 0x682c8b:goto L682c8b;
case 0x682c8e:c.instructions+=1;goto B682c8e;
case 0x682c91:goto L682c91;
case 0x682c94:c.instructions+=1;goto B682c94;
case 0x682c96:goto L682c96;
case 0x682c99:c.instructions+=1;goto B682c99;
case 0x682c9b:goto L682c9b;
case 0x682c9e:c.instructions+=4;goto B682c9e;
case 0x682ca0:c.instructions+=3;goto B682ca0;
case 0x682ca3:c.instructions+=2;goto B682ca3;
case 0x682ca6:c.instructions+=1;goto B682ca6;
case 0x682cab:goto L682cab;
case 0x682cad:c.instructions+=2;goto B682cad;
case 0x682caf:c.instructions+=1;goto B682caf;
case 0x682cb5:goto L682cb5;
case 0x682cb8:goto L682cb8;
case 0x682cbc:c.instructions+=1;goto B682cbc;
case 0x682cbe:goto L682cbe;
case 0x682cc0:c.instructions+=3;goto B682cc0;
case 0x682cc3:c.instructions+=2;goto B682cc3;
case 0x682cc6:c.instructions+=1;goto B682cc6;
case 0x682cc8:goto L682cc8;
case 0x682ccf:c.instructions+=1;goto B682ccf;
case 0x682cd1:goto L682cd1;
case 0x682cd4:c.instructions+=1;goto B682cd4;
case 0x682cd6:goto L682cd6;
case 0x682cd8:c.instructions+=4;goto B682cd8;
case 0x682cdb:c.instructions+=3;goto B682cdb;
case 0x682cdd:c.instructions+=2;goto B682cdd;
case 0x682ce0:c.instructions+=1;goto B682ce0;
case 0x682ce5:goto L682ce5;
case 0x682ce7:c.instructions+=2;goto B682ce7;
case 0x682ce9:c.instructions+=1;goto B682ce9;
case 0x682cef:goto L682cef;
case 0x682cf2:goto L682cf2;
case 0x682cf6:c.instructions+=1;goto B682cf6;
case 0x682cf8:goto L682cf8;
case 0x682cfb:c.instructions+=2;goto B682cfb;
case 0x682cfe:c.instructions+=1;goto B682cfe;
case 0x682d01:goto L682d01;
case 0x682d03:c.instructions+=1;goto B682d03;
case 0x682d08:goto L682d08;
case 0x682d0a:c.instructions+=2;goto B682d0a;
case 0x682d0c:c.instructions+=1;goto B682d0c;
case 0x682d12:goto L682d12;
case 0x682d15:goto L682d15;
case 0x682d18:c.instructions+=4;goto B682d18;
case 0x682d1b:c.instructions+=3;goto B682d1b;
case 0x682d1e:c.instructions+=2;goto B682d1e;
case 0x682d21:c.instructions+=1;goto B682d21;
case 0x682d27:goto L682d27;
case 0x682d2e:goto L682d2e;
case 0x682d30:c.instructions+=1;goto B682d30;
case 0x682d36:goto L682d36;
case 0x682d3a:c.instructions+=1;goto B682d3a;
case 0x682d40:goto L682d40;
case 0x682d44:c.instructions+=1;goto B682d44;
case 0x682d46:goto L682d46;
case 0x682d48:c.instructions+=2;goto B682d48;
case 0x682d4a:c.instructions+=1;goto B682d4a;
case 0x682d4c:goto L682d4c;
case 0x682d4f:c.instructions+=6;goto B682d4f;
case 0x682d51:c.instructions+=5;goto B682d51;
case 0x682d54:c.instructions+=4;goto B682d54;
case 0x682d57:c.instructions+=3;goto B682d57;
case 0x682d58:c.instructions+=2;goto B682d58;
case 0x682d5a:c.instructions+=1;goto B682d5a;
case 0x682d5c:goto L682d5c;
case 0x682d60:c.instructions+=1;goto B682d60;
case 0x682d66:goto L682d66;
case 0x682d6c:c.instructions+=2;goto B682d6c;
case 0x682d6e:c.instructions+=1;goto B682d6e;
case 0x682d74:goto L682d74;
case 0x682d76:c.instructions+=1;goto B682d76;
case 0x682d7c:goto L682d7c;
case 0x682d7f:c.instructions+=1;goto B682d7f;
case 0x682d84:goto L682d84;
case 0x682d87:c.instructions+=1;goto B682d87;
case 0x682d8d:goto L682d8d;
case 0x682d90:c.instructions+=3;goto B682d90;
case 0x682d93:c.instructions+=2;goto B682d93;
case 0x682d96:c.instructions+=1;goto B682d96;
case 0x682d98:goto L682d98;
case 0x682d9b:c.instructions+=1;goto B682d9b;
case 0x682da1:goto L682da1;
case 0x682da4:c.instructions+=2;goto B682da4;
case 0x682da7:c.instructions+=1;goto B682da7;
case 0x682dad:goto L682dad;
case 0x682db0:c.instructions+=2;goto B682db0;
case 0x682db3:c.instructions+=1;goto B682db3;
case 0x682db9:goto L682db9;
case 0x682dbb:c.instructions+=2;goto B682dbb;
case 0x682dbd:c.instructions+=1;goto B682dbd;
case 0x682dbf:goto L682dbf;
case 0x682dc2:c.instructions+=12;goto B682dc2;
case 0x682dc5:c.instructions+=11;goto B682dc5;
case 0x682dc8:c.instructions+=10;goto B682dc8;
case 0x682dcb:c.instructions+=9;goto B682dcb;
case 0x682dce:c.instructions+=8;goto B682dce;
case 0x682dd1:c.instructions+=7;goto B682dd1;
case 0x682dd3:c.instructions+=6;goto B682dd3;
case 0x682dd6:c.instructions+=5;goto B682dd6;
case 0x682dd9:c.instructions+=4;goto B682dd9;
case 0x682ddc:c.instructions+=3;goto B682ddc;
case 0x682ddf:c.instructions+=2;goto B682ddf;
case 0x682de2:c.instructions+=1;goto B682de2;
case 0x682de3:goto L682de3;
case 0x682de5:goto L682de5;
case 0x682de8:c.instructions+=1;goto B682de8;
case 0x682dea:goto L682dea;
case 0x682def:goto L682def;
case 0x682df2:c.instructions+=5;goto B682df2;
case 0x682df3:c.instructions+=4;goto B682df3;
case 0x682df6:c.instructions+=3;goto B682df6;
case 0x682df8:c.instructions+=2;goto B682df8;
case 0x682dfb:c.instructions+=1;goto B682dfb;
case 0x682e00:goto L682e00;
case 0x682e05:goto L682e05;
case 0x682e07:c.instructions+=1;goto B682e07;
case 0x682e0d:goto L682e0d;
case 0x682e0f:c.instructions+=1;goto B682e0f;
case 0x682e15:goto L682e15;
case 0x682e17:c.instructions+=1;goto B682e17;
case 0x682e1d:goto L682e1d;
case 0x682e20:c.instructions+=4;goto B682e20;
case 0x682e22:c.instructions+=3;goto B682e22;
case 0x682e25:c.instructions+=2;goto B682e25;
case 0x682e28:c.instructions+=1;goto B682e28;
case 0x682e2a:goto L682e2a;
case 0x682e2d:c.instructions+=2;goto B682e2d;
case 0x682e30:c.instructions+=1;goto B682e30;
case 0x682e32:goto L682e32;
case 0x682e34:goto L682e34;
case 0x682e36:c.instructions+=1;goto B682e36;
case 0x682e3c:goto L682e3c;
case 0x682e3f:c.instructions+=2;goto B682e3f;
case 0x682e42:c.instructions+=1;goto B682e42;
case 0x682e48:goto L682e48;
case 0x682e4a:c.instructions+=2;goto B682e4a;
case 0x682e4c:c.instructions+=1;goto B682e4c;
case 0x682e4e:goto L682e4e;
case 0x682e51:goto L682e51;
case 0x682e54:c.instructions+=3;goto B682e54;
case 0x682e57:c.instructions+=2;goto B682e57;
case 0x682e5b:c.instructions+=1;goto B682e5b;
case 0x682e5d:goto L682e5d;
case 0x682e5e:c.instructions+=2;goto B682e5e;
case 0x682e60:c.instructions+=1;goto B682e60;
case 0x682e62:goto L682e62;
case 0x682e64:c.instructions+=5;goto B682e64;
case 0x682e66:c.instructions+=4;goto B682e66;
case 0x682e69:c.instructions+=3;goto B682e69;
case 0x682e6f:c.instructions+=2;goto B682e6f;
case 0x682e75:c.instructions+=1;goto B682e75;
case 0x682e7a:goto L682e7a;
case 0x682e7c:c.instructions+=1;goto B682e7c;
case 0x682e82:goto L682e82;
case 0x682e84:c.instructions+=1;goto B682e84;
case 0x682e8a:goto L682e8a;
case 0x682e8c:c.instructions+=1;goto B682e8c;
case 0x682e92:goto L682e92;
case 0x682e94:c.instructions+=2;goto B682e94;
case 0x682e96:c.instructions+=1;goto B682e96;
case 0x682e98:goto L682e98;
case 0x682e9b:c.instructions+=1;goto B682e9b;
case 0x682e9e:goto L682e9e;
case 0x682ea1:c.instructions+=4;goto B682ea1;
case 0x682ea4:c.instructions+=3;goto B682ea4;
case 0x682ea7:c.instructions+=2;goto B682ea7;
case 0x682eab:c.instructions+=1;goto B682eab;
case 0x682ead:goto L682ead;
case 0x682eae:c.instructions+=2;goto B682eae;
case 0x682eb0:c.instructions+=1;goto B682eb0;
case 0x682eb2:goto L682eb2;
case 0x682eb4:goto L682eb4;
case 0x682eb9:c.instructions+=3;goto B682eb9;
case 0x682ebb:c.instructions+=2;goto B682ebb;
case 0x682ebe:c.instructions+=1;goto B682ebe;
case 0x682ec3:goto L682ec3;
case 0x682ec5:c.instructions+=1;goto B682ec5;
case 0x682ecb:goto L682ecb;
case 0x682ecc:c.instructions+=2;goto B682ecc;
case 0x682ece:c.instructions+=1;goto B682ece;
case 0x682ed3:goto L682ed3;
case 0x682ed5:c.instructions+=1;goto B682ed5;
case 0x682edb:goto L682edb;
case 0x682edd:c.instructions+=2;goto B682edd;
case 0x682edf:c.instructions+=1;goto B682edf;
case 0x682ee1:goto L682ee1;
case 0x682ee4:c.instructions+=4;goto B682ee4;
case 0x682ee7:c.instructions+=3;goto B682ee7;
case 0x682ee8:c.instructions+=2;goto B682ee8;
case 0x682eea:c.instructions+=1;goto B682eea;
case 0x682eec:goto L682eec;
case 0x682eee:goto L682eee;
case 0x682ef0:c.instructions+=1;goto B682ef0;
case 0x682ef6:goto L682ef6;
case 0x682ef7:c.instructions+=2;goto B682ef7;
case 0x682ef9:c.instructions+=1;goto B682ef9;
case 0x682efe:goto L682efe;
case 0x682f00:c.instructions+=1;goto B682f00;
case 0x682f06:goto L682f06;
case 0x682f08:c.instructions+=2;goto B682f08;
case 0x682f0a:c.instructions+=1;goto B682f0a;
case 0x682f0c:goto L682f0c;
case 0x682f0f:c.instructions+=4;goto B682f0f;
case 0x682f12:c.instructions+=3;goto B682f12;
case 0x682f13:c.instructions+=2;goto B682f13;
case 0x682f15:c.instructions+=1;goto B682f15;
case 0x682f17:goto L682f17;
case 0x682f19:c.instructions+=4;goto B682f19;
case 0x682f1a:c.instructions+=3;goto B682f1a;
case 0x682f1d:c.instructions+=2;goto B682f1d;
case 0x682f23:c.instructions+=1;goto B682f23;
case 0x682f29:goto L682f29;
case 0x682f2c:c.instructions+=4;goto B682f2c;
case 0x682f2e:c.instructions+=3;goto B682f2e;
case 0x682f2f:c.instructions+=2;goto B682f2f;
case 0x682f32:c.instructions+=1;goto B682f32;
case 0x682f37:goto L682f37;
case 0x682f39:c.instructions+=2;goto B682f39;
case 0x682f3b:c.instructions+=1;goto B682f3b;
case 0x682f41:goto L682f41;
case 0x682f45:c.instructions+=1;goto B682f45;
case 0x682f4b:goto L682f4b;
case 0x682f4e:c.instructions+=1;goto B682f4e;
case 0x682f53:goto L682f53;
case 0x682f55:c.instructions+=1;goto B682f55;
case 0x682f5b:goto L682f5b;
case 0x682f5f:c.instructions+=1;goto B682f5f;
case 0x682f65:goto L682f65;
case 0x682f68:c.instructions+=3;goto B682f68;
case 0x682f69:c.instructions+=2;goto B682f69;
case 0x682f6b:c.instructions+=1;goto B682f6b;
case 0x682f70:goto L682f70;
case 0x682f72:c.instructions+=1;goto B682f72;
case 0x682f78:goto L682f78;
case 0x682f7a:c.instructions+=2;goto B682f7a;
case 0x682f7c:c.instructions+=1;goto B682f7c;
case 0x682f7f:goto L682f7f;
case 0x682f83:c.instructions+=4;goto B682f83;
case 0x682f84:c.instructions+=3;goto B682f84;
case 0x682f86:c.instructions+=2;goto B682f86;
case 0x682f89:c.instructions+=1;goto B682f89;
case 0x682f8b:goto L682f8b;
case 0x682f8c:c.instructions+=3;goto B682f8c;
case 0x682f8f:c.instructions+=2;goto B682f8f;
case 0x682f91:c.instructions+=1;goto B682f91;
case 0x682f96:goto L682f96;
case 0x682f98:c.instructions+=2;goto B682f98;
case 0x682f9a:c.instructions+=1;goto B682f9a;
case 0x682fa0:goto L682fa0;
case 0x682fa1:c.instructions+=3;goto B682fa1;
case 0x682fa4:c.instructions+=2;goto B682fa4;
case 0x682fa6:c.instructions+=1;goto B682fa6;
case 0x682fab:goto L682fab;
case 0x682fad:c.instructions+=2;goto B682fad;
case 0x682faf:c.instructions+=1;goto B682faf;
case 0x682fb5:goto L682fb5;
case 0x682fb6:c.instructions+=3;goto B682fb6;
case 0x682fb9:c.instructions+=2;goto B682fb9;
case 0x682fbb:c.instructions+=1;goto B682fbb;
case 0x682fc0:goto L682fc0;
case 0x682fc2:c.instructions+=2;goto B682fc2;
case 0x682fc4:c.instructions+=1;goto B682fc4;
case 0x682fca:goto L682fca;
case 0x682fcb:c.instructions+=6;goto B682fcb;
case 0x682fce:c.instructions+=5;goto B682fce;
case 0x682fd0:c.instructions+=4;goto B682fd0;
case 0x682fd3:c.instructions+=3;goto B682fd3;
case 0x682fd6:c.instructions+=2;goto B682fd6;
case 0x682fd9:c.instructions+=1;goto B682fd9;
case 0x682fde:goto L682fde;
case 0x682fe0:c.instructions+=2;goto B682fe0;
case 0x682fe2:c.instructions+=1;goto B682fe2;
case 0x682fe8:goto L682fe8;
case 0x682fea:c.instructions+=7;goto B682fea;
case 0x682fed:c.instructions+=6;goto B682fed;
case 0x682ff0:c.instructions+=5;goto B682ff0;
case 0x682ff2:c.instructions+=4;goto B682ff2;
case 0x682ff7:c.instructions+=3;goto B682ff7;
case 0x682ffc:c.instructions+=2;goto B682ffc;
case 0x682fff:c.instructions+=1;goto B682fff;
default:missing_instruction(c.pc);}
B682000:L682000:{c.instructions+=12;NFSU2_TR(0x682000);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B682002:{NFSU2_TR(0x682002);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682003:{NFSU2_TR(0x682003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B682006:{NFSU2_TR(0x682006);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B682008:{NFSU2_TR(0x682008);
__builtin_memmove((R+12),(R+4),4);
}
B68200a:{NFSU2_TR(0x68200a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68200d:{NFSU2_TR(0x68200d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682010:{NFSU2_TR(0x682010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682013:{NFSU2_TR(0x682013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682016:{NFSU2_TR(0x682016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682019:{NFSU2_TR(0x682019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68201c:{NFSU2_TR(0x68201c);
if(r1(R+518)){{goto L682a9f;}}
}
B682022:L682022:{c.instructions+=2;NFSU2_TR(0x682022);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xaull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B682026:{NFSU2_TR(0x682026);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682a9f;}}
}
B68202c:L68202c:{c.instructions+=2;NFSU2_TR(0x68202c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68202f:{NFSU2_TR(0x68202f);
if(r1(R+518)){{goto L682052;}}
}
B682031:L682031:{c.instructions+=6;NFSU2_TR(0x682031);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682034:{NFSU2_TR(0x682034);
u8 U[4];
w4(U+0,u32(0x7b7bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682039:{NFSU2_TR(0x682039);
u8 U[4];
w4(U+0,u32(0xdacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68203e:{NFSU2_TR(0x68203e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68203f:{NFSU2_TR(0x68203f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682040:{NFSU2_TR(0x682040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682045ull));
TAIL_STATIC(0x675267u,675);
}
B682045:L682045:{c.instructions+=3;NFSU2_TR(0x682045);
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
B682048:{NFSU2_TR(0x682048);
w4(R+0,u32(0x80004001ull));
}
B68204d:{NFSU2_TR(0x68204d);
{goto L682aa4;}
}
B682052:L682052:{c.instructions+=2;NFSU2_TR(0x682052);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682055:{NFSU2_TR(0x682055);
if(r1(R+518)){{goto L68206d;}}
}
B682057:L682057:{c.instructions+=3;NFSU2_TR(0x682057);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68205a:{NFSU2_TR(0x68205a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68205d:{NFSU2_TR(0x68205d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682062ull));
TAIL_STATIC(0x69a609u,69a);
}
B682062:L682062:{c.instructions+=3;NFSU2_TR(0x682062);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B682064:{NFSU2_TR(0x682064);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682067:{NFSU2_TR(0x682067);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B68206d:L68206d:{c.instructions+=3;NFSU2_TR(0x68206d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682070:{NFSU2_TR(0x682070);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682072:{NFSU2_TR(0x682072);
if(r1(R+518)){{goto L68207c;}}
}
B682074:L682074:{c.instructions+=3;NFSU2_TR(0x682074);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682077:{NFSU2_TR(0x682077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68207a:{NFSU2_TR(0x68207a);
{goto L68207f;}
}
B68207c:L68207c:{c.instructions+=1;NFSU2_TR(0x68207c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68207f:L68207f:{c.instructions+=2;NFSU2_TR(0x68207f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682081:{NFSU2_TR(0x682081);
if(r1(R+518)){{goto L68208b;}}
}
B682083:L682083:{c.instructions+=3;NFSU2_TR(0x682083);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682086:{NFSU2_TR(0x682086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682089:{NFSU2_TR(0x682089);
{goto L68208e;}
}
B68208b:L68208b:{c.instructions+=1;NFSU2_TR(0x68208b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68208e:L68208e:{c.instructions+=3;NFSU2_TR(0x68208e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682091:{NFSU2_TR(0x682091);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682093:{NFSU2_TR(0x682093);
{goto L6820bb;}
}
B682095:L682095:{c.instructions+=5;NFSU2_TR(0x682095);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682098:{NFSU2_TR(0x682098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68209b:{NFSU2_TR(0x68209b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68209d:{NFSU2_TR(0x68209d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6820a0:{NFSU2_TR(0x6820a0);
if(r1(R+518)){{goto L6820b2;}}
}
B6820a2:L6820a2:{c.instructions+=3;NFSU2_TR(0x6820a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6820a5:{NFSU2_TR(0x6820a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6820a7:{NFSU2_TR(0x6820a7);
if(r1(R+518)){{goto L6820b2;}}
}
B6820a9:L6820a9:{c.instructions+=2;NFSU2_TR(0x6820a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6820ad:{NFSU2_TR(0x6820ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6820b2;}}
}
B6820af:L6820af:{c.instructions+=1;NFSU2_TR(0x6820af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6820b2:L6820b2:{c.instructions+=3;NFSU2_TR(0x6820b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6820b5:{NFSU2_TR(0x6820b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6820b8:{NFSU2_TR(0x6820b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6820bb:L6820bb:{c.instructions+=2;NFSU2_TR(0x6820bb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6820bd:{NFSU2_TR(0x6820bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682095u);}goto L682095;}}
}
B6820bf:L6820bf:{c.instructions+=4;NFSU2_TR(0x6820bf);
__builtin_memmove((R+24),(R+4),4);
}
B6820c1:{NFSU2_TR(0x6820c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6820c4:{NFSU2_TR(0x6820c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6820c5:{NFSU2_TR(0x6820c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6820caull));
TAIL_STATIC(0x575620u,575);
}
B6820ca:L6820ca:{c.instructions+=4;NFSU2_TR(0x6820ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6820cc:{NFSU2_TR(0x6820cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6820cd:{NFSU2_TR(0x6820cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6820d0:{NFSU2_TR(0x6820d0);
if(r1(R+518)){{goto L682a93;}}
}
B6820d6:L6820d6:{c.instructions+=2;NFSU2_TR(0x6820d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6820da:{NFSU2_TR(0x6820da);
if(r1(R+518)){{goto L6820ee;}}
}
B6820dc:L6820dc:{c.instructions+=2;NFSU2_TR(0x6820dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6820dd:{NFSU2_TR(0x6820dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6820e2ull));
TAIL_STATIC(0x575620u,575);
}
B6820e2:L6820e2:{c.instructions+=4;NFSU2_TR(0x6820e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6820e4:{NFSU2_TR(0x6820e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6820e5:{NFSU2_TR(0x6820e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6820e8:{NFSU2_TR(0x6820e8);
if(r1(R+518)){{goto L682a93;}}
}
B6820ee:L6820ee:{c.instructions+=5;NFSU2_TR(0x6820ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6820f1:{NFSU2_TR(0x6820f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6820f4:{NFSU2_TR(0x6820f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6820f7:{NFSU2_TR(0x6820f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6820fa:{NFSU2_TR(0x6820fa);
{goto L682166;}
}
B6820fc:L6820fc:{c.instructions+=4;NFSU2_TR(0x6820fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6820ff:{NFSU2_TR(0x6820ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682102:{NFSU2_TR(0x682102);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682104:{NFSU2_TR(0x682104);
if(r1(R+518)){{goto L682116;}}
}
B682106:L682106:{c.instructions+=3;NFSU2_TR(0x682106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682109:{NFSU2_TR(0x682109);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68210b:{NFSU2_TR(0x68210b);
if(r1(R+518)){{goto L682116;}}
}
B68210d:L68210d:{c.instructions+=2;NFSU2_TR(0x68210d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682111:{NFSU2_TR(0x682111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682116;}}
}
B682113:L682113:{c.instructions+=1;NFSU2_TR(0x682113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682116:L682116:{c.instructions+=4;NFSU2_TR(0x682116);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68211a:{NFSU2_TR(0x68211a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68211d:{NFSU2_TR(0x68211d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682120:{NFSU2_TR(0x682120);
if(r1(R+518)){{goto L68212e;}}
}
B682122:L682122:{c.instructions+=2;NFSU2_TR(0x682122);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682126:{NFSU2_TR(0x682126);
if(r1(R+518)){{goto L68215d;}}
}
B682128:L682128:{c.instructions+=2;NFSU2_TR(0x682128);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B68212c:{NFSU2_TR(0x68212c);
if(r1(R+518)){{goto L68215d;}}
}
B68212e:L68212e:{c.instructions+=2;NFSU2_TR(0x68212e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682130:{NFSU2_TR(0x682130);
if(r1(R+518)){{goto L68215d;}}
}
B682132:L682132:{c.instructions+=3;NFSU2_TR(0x682132);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682135:{NFSU2_TR(0x682135);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682137:{NFSU2_TR(0x682137);
if(r1(R+518)){{goto L682157;}}
}
B682139:L682139:{c.instructions+=5;NFSU2_TR(0x682139);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68213b:{NFSU2_TR(0x68213b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68213e:{NFSU2_TR(0x68213e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68213f:{NFSU2_TR(0x68213f);
__builtin_memmove((R+4),(R+12),4);
}
B682141:{NFSU2_TR(0x682141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682146ull));
{goto L682bb1;}
}
B682146:L682146:{c.instructions+=3;NFSU2_TR(0x682146);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682148:{NFSU2_TR(0x682148);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68214b:{NFSU2_TR(0x68214b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B682151:L682151:{c.instructions+=2;NFSU2_TR(0x682151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682154:{NFSU2_TR(0x682154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682157:L682157:{c.instructions+=2;NFSU2_TR(0x682157);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68215a:{NFSU2_TR(0x68215a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68215d:L68215d:{c.instructions+=3;NFSU2_TR(0x68215d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682160:{NFSU2_TR(0x682160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682163:{NFSU2_TR(0x682163);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B682166:L682166:{c.instructions+=3;NFSU2_TR(0x682166);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682168:{NFSU2_TR(0x682168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68216b:{NFSU2_TR(0x68216b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6820fcu);}goto L6820fc;}}
}
B68216d:L68216d:{c.instructions+=7;NFSU2_TR(0x68216d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682170:{NFSU2_TR(0x682170);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682173:{NFSU2_TR(0x682173);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682175:{NFSU2_TR(0x682175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682178:{NFSU2_TR(0x682178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68217b:{NFSU2_TR(0x68217b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68217e:{NFSU2_TR(0x68217e);
if(r1(R+518)){{goto L682401;}}
}
B682184:L682184:{c.instructions+=1;NFSU2_TR(0x682184);
{goto L682189;}
}
B682186:L682186:{c.instructions+=1;NFSU2_TR(0x682186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682189:L682189:{c.instructions+=7;NFSU2_TR(0x682189);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68218c:{NFSU2_TR(0x68218c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68218f:{NFSU2_TR(0x68218f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B682193:{NFSU2_TR(0x682193);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682195:{NFSU2_TR(0x682195);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682198:{NFSU2_TR(0x682198);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68219b:{NFSU2_TR(0x68219b);
if(r1(R+518)){{goto L6821b3;}}
}
B68219d:L68219d:{c.instructions+=3;NFSU2_TR(0x68219d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6821a0:{NFSU2_TR(0x6821a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6821a2:{NFSU2_TR(0x6821a2);
if(r1(R+518)){{goto L6821b3;}}
}
B6821a4:L6821a4:{c.instructions+=2;NFSU2_TR(0x6821a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6821a8:{NFSU2_TR(0x6821a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6821b3;}}
}
B6821aa:L6821aa:{c.instructions+=3;NFSU2_TR(0x6821aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6821ad:{NFSU2_TR(0x6821ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6821b0:{NFSU2_TR(0x6821b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6821b3:L6821b3:{c.instructions+=5;NFSU2_TR(0x6821b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6821b6:{NFSU2_TR(0x6821b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6821b9:{NFSU2_TR(0x6821b9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6821bb:{NFSU2_TR(0x6821bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6821be:{NFSU2_TR(0x6821be);
if(r1(R+518)){{goto L68236c;}}
}
B6821c4:L6821c4:{c.instructions+=2;NFSU2_TR(0x6821c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6821c7:{NFSU2_TR(0x6821c7);
if(r1(R+518)){{goto L6821d3;}}
}
B6821c9:L6821c9:{c.instructions+=2;NFSU2_TR(0x6821c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6821cd:{NFSU2_TR(0x6821cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68236c;}}
}
B6821d3:L6821d3:{c.instructions+=6;NFSU2_TR(0x6821d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6821d6:{NFSU2_TR(0x6821d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6821d9:{NFSU2_TR(0x6821d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6821dc:{NFSU2_TR(0x6821dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6821df:{NFSU2_TR(0x6821df);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6821e2:{NFSU2_TR(0x6821e2);
if(r1(R+518)){{goto L6821e9;}}
}
B6821e4:L6821e4:{c.instructions+=2;NFSU2_TR(0x6821e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6821e7:{NFSU2_TR(0x6821e7);
{goto L6821f4;}
}
B6821e9:L6821e9:{c.instructions+=2;NFSU2_TR(0x6821e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6821ec:{NFSU2_TR(0x6821ec);
if(r1(R+518)){{goto L6821f7;}}
}
B6821ee:L6821ee:{c.instructions+=1;NFSU2_TR(0x6821ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6821f4:L6821f4:{c.instructions+=1;NFSU2_TR(0x6821f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6821f7:L6821f7:{c.instructions+=3;NFSU2_TR(0x6821f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6821fa:{NFSU2_TR(0x6821fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6821fd:{NFSU2_TR(0x6821fd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68225a;}}
}
B6821ff:L6821ff:{c.instructions+=12;NFSU2_TR(0x6821ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682202:{NFSU2_TR(0x682202);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B682204:{NFSU2_TR(0x682204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B682207:{NFSU2_TR(0x682207);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682208:{NFSU2_TR(0x682208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682209:{NFSU2_TR(0x682209);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68220c:{NFSU2_TR(0x68220c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68220f:{NFSU2_TR(0x68220f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682211:{NFSU2_TR(0x682211);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682213:{NFSU2_TR(0x682213);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682216:{NFSU2_TR(0x682216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682219:{NFSU2_TR(0x682219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68221eull));
TAIL_STATIC(0x699c39u,699);
}
B68221e:L68221e:{c.instructions+=3;NFSU2_TR(0x68221e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682221:{NFSU2_TR(0x682221);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B682224:{NFSU2_TR(0x682224);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L68222e;}}
}
B682226:L682226:{c.instructions+=3;NFSU2_TR(0x682226);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682229:{NFSU2_TR(0x682229);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B68222c:{NFSU2_TR(0x68222c);
{goto L682230;}
}
B68222e:L68222e:{c.instructions+=1;NFSU2_TR(0x68222e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682230:L682230:{c.instructions+=2;NFSU2_TR(0x682230);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682232:{NFSU2_TR(0x682232);
if(r1(R+518)){{goto L682246;}}
}
B682234:L682234:{c.instructions+=6;NFSU2_TR(0x682234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682237:{NFSU2_TR(0x682237);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68223a:{NFSU2_TR(0x68223a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68223d:{NFSU2_TR(0x68223d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682240:{NFSU2_TR(0x682240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682243:{NFSU2_TR(0x682243);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682246:L682246:{c.instructions+=7;NFSU2_TR(0x682246);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682249:{NFSU2_TR(0x682249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68224c:{NFSU2_TR(0x68224c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68224f:{NFSU2_TR(0x68224f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B682252:{NFSU2_TR(0x682252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682255:{NFSU2_TR(0x682255);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B682258:{NFSU2_TR(0x682258);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6821ffu);}goto L6821ff;}}
}
B68225a:L68225a:{c.instructions+=4;NFSU2_TR(0x68225a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68225d:{NFSU2_TR(0x68225d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682260:{NFSU2_TR(0x682260);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682263:{NFSU2_TR(0x682263);
if(r1(R+518)){{goto L68228a;}}
}
B682265:L682265:{c.instructions+=8;NFSU2_TR(0x682265);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682268:{NFSU2_TR(0x682268);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68226b:{NFSU2_TR(0x68226b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68226e:{NFSU2_TR(0x68226e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B682271:{NFSU2_TR(0x682271);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682272:{NFSU2_TR(0x682272);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682275:{NFSU2_TR(0x682275);
__builtin_memmove((R+4),(R+12),4);
}
B682277:{NFSU2_TR(0x682277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68227cull));
TAIL_STATIC(0x6760e4u,676);
}
B68227c:L68227c:{c.instructions+=3;NFSU2_TR(0x68227c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68227e:{NFSU2_TR(0x68227e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682281:{NFSU2_TR(0x682281);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B682287:L682287:{c.instructions+=1;NFSU2_TR(0x682287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68228a:L68228a:{c.instructions+=3;NFSU2_TR(0x68228a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68228d:{NFSU2_TR(0x68228d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682290:{NFSU2_TR(0x682290);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6822ca;}}
}
B682292:L682292:{c.instructions+=12;NFSU2_TR(0x682292);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682295:{NFSU2_TR(0x682295);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682298:{NFSU2_TR(0x682298);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68229b:{NFSU2_TR(0x68229b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68229d:{NFSU2_TR(0x68229d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68229f:{NFSU2_TR(0x68229f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6822a1:{NFSU2_TR(0x6822a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6822a4:{NFSU2_TR(0x6822a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6822a7:{NFSU2_TR(0x6822a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6822a8:{NFSU2_TR(0x6822a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6822ab:{NFSU2_TR(0x6822ab);
__builtin_memmove((R+4),(R+12),4);
}
B6822ad:{NFSU2_TR(0x6822ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6822b2ull));
TAIL_STATIC(0x67856cu,678);
}
B6822b2:L6822b2:{c.instructions+=3;NFSU2_TR(0x6822b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6822b4:{NFSU2_TR(0x6822b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6822b7:{NFSU2_TR(0x6822b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B6822bd:L6822bd:{c.instructions+=3;NFSU2_TR(0x6822bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6822be:{NFSU2_TR(0x6822be);
__builtin_memmove((R+4),(R+12),4);
}
B6822c0:{NFSU2_TR(0x6822c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6822c5ull));
TAIL_STATIC(0x673caau,673);
}
B6822c5:L6822c5:{c.instructions+=1;NFSU2_TR(0x6822c5);
{goto L6823e0;}
}
B6822ca:L6822ca:{c.instructions+=2;NFSU2_TR(0x6822ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6822d0:{NFSU2_TR(0x6822d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6823eb;}}
}
B6822d6:L6822d6:{c.instructions+=12;NFSU2_TR(0x6822d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6822d9:{NFSU2_TR(0x6822d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6822dc:{NFSU2_TR(0x6822dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6822df:{NFSU2_TR(0x6822df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6822e2:{NFSU2_TR(0x6822e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6822e4:{NFSU2_TR(0x6822e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6822e6:{NFSU2_TR(0x6822e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6822e9:{NFSU2_TR(0x6822e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6822ec:{NFSU2_TR(0x6822ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6822ed:{NFSU2_TR(0x6822ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6822f0:{NFSU2_TR(0x6822f0);
__builtin_memmove((R+4),(R+12),4);
}
B6822f2:{NFSU2_TR(0x6822f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6822f7ull));
TAIL_STATIC(0x67856cu,678);
}
B6822f7:L6822f7:{c.instructions+=3;NFSU2_TR(0x6822f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6822f9:{NFSU2_TR(0x6822f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6822fc:{NFSU2_TR(0x6822fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B682302:L682302:{c.instructions+=7;NFSU2_TR(0x682302);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682305:{NFSU2_TR(0x682305);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682308:{NFSU2_TR(0x682308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68230b:{NFSU2_TR(0x68230b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68230e:{NFSU2_TR(0x68230e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68230f:{NFSU2_TR(0x68230f);
__builtin_memmove((R+4),(R+12),4);
}
B682311:{NFSU2_TR(0x682311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682316ull));
TAIL_STATIC(0x674b5au,674);
}
B682316:L682316:{c.instructions+=2;NFSU2_TR(0x682316);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682318:{NFSU2_TR(0x682318);
if(r1(R+518)){{goto L68234a;}}
}
B68231a:L68231a:{c.instructions+=3;NFSU2_TR(0x68231a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68231e:{NFSU2_TR(0x68231e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682322:{NFSU2_TR(0x682322);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6823eb;}}
}
B682328:L682328:{c.instructions+=10;NFSU2_TR(0x682328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68232b:{NFSU2_TR(0x68232b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B68232e:{NFSU2_TR(0x68232e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682331:{NFSU2_TR(0x682331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B682334:{NFSU2_TR(0x682334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682337:{NFSU2_TR(0x682337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68233a:{NFSU2_TR(0x68233a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68233d:{NFSU2_TR(0x68233d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682340:{NFSU2_TR(0x682340);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B682343:{NFSU2_TR(0x682343);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682328u);}goto L682328;}}
}
B682345:L682345:{c.instructions+=1;NFSU2_TR(0x682345);
{goto L6823eb;}
}
B68234a:L68234a:{c.instructions+=9;NFSU2_TR(0x68234a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68234d:{NFSU2_TR(0x68234d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682350:{NFSU2_TR(0x682350);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682353:{NFSU2_TR(0x682353);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682356:{NFSU2_TR(0x682356);
u8 U[4];
w4(U+0,u32(0x7b7bc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68235b:{NFSU2_TR(0x68235b);
u8 U[4];
w4(U+0,u32(0xdaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682360:{NFSU2_TR(0x682360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682361:{NFSU2_TR(0x682361);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682362:{NFSU2_TR(0x682362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682367ull));
TAIL_STATIC(0x675267u,675);
}
B682367:L682367:{c.instructions+=2;NFSU2_TR(0x682367);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B68236a:{NFSU2_TR(0x68236a);
{goto L6823eb;}
}
B68236c:L68236c:{c.instructions+=4;NFSU2_TR(0x68236c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68236e:{NFSU2_TR(0x68236e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682371:{NFSU2_TR(0x682371);
__builtin_memmove((R+4),(R+12),4);
}
B682373:{NFSU2_TR(0x682373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682378ull));
TAIL_STATIC(0x681bf8u,681);
}
B682378:L682378:{c.instructions+=3;NFSU2_TR(0x682378);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68237a:{NFSU2_TR(0x68237a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68237d:{NFSU2_TR(0x68237d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B682383:L682383:{c.instructions+=2;NFSU2_TR(0x682383);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682387:{NFSU2_TR(0x682387);
if(r1(R+518)){{goto L6823d4;}}
}
B682389:L682389:{c.instructions+=2;NFSU2_TR(0x682389);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B68238d:{NFSU2_TR(0x68238d);
if(r1(R+518)){{goto L6823c9;}}
}
B68238f:L68238f:{c.instructions+=16;NFSU2_TR(0x68238f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682392:{NFSU2_TR(0x682392);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682395:{NFSU2_TR(0x682395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682398:{NFSU2_TR(0x682398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68239b:{NFSU2_TR(0x68239b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68239d:{NFSU2_TR(0x68239d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68239f:{NFSU2_TR(0x68239f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6823a2:{NFSU2_TR(0x6823a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6823a5:{NFSU2_TR(0x6823a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6823a6:{NFSU2_TR(0x6823a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6823a9:{NFSU2_TR(0x6823a9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6823af:{NFSU2_TR(0x6823af);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10000000ull))));
}
B6823b5:{NFSU2_TR(0x6823b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6823b6:{NFSU2_TR(0x6823b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6823b7:{NFSU2_TR(0x6823b7);
__builtin_memmove((R+4),(R+12),4);
}
B6823b9:{NFSU2_TR(0x6823b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6823beull));
TAIL_STATIC(0x6758ceu,675);
}
B6823be:L6823be:{c.instructions+=3;NFSU2_TR(0x6823be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6823c0:{NFSU2_TR(0x6823c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6823c3:{NFSU2_TR(0x6823c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B6823c9:L6823c9:{c.instructions+=4;NFSU2_TR(0x6823c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6823cc:{NFSU2_TR(0x6823cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6823cf:{NFSU2_TR(0x6823cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6823d2:{NFSU2_TR(0x6823d2);
{goto L6823eb;}
}
B6823d4:L6823d4:{c.instructions+=4;NFSU2_TR(0x6823d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6823d6:{NFSU2_TR(0x6823d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6823d9:{NFSU2_TR(0x6823d9);
__builtin_memmove((R+4),(R+12),4);
}
B6823db:{NFSU2_TR(0x6823db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6823e0ull));
TAIL_STATIC(0x681bf8u,681);
}
B6823e0:L6823e0:{c.instructions+=3;NFSU2_TR(0x6823e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6823e2:{NFSU2_TR(0x6823e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6823e5:{NFSU2_TR(0x6823e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B6823eb:L6823eb:{c.instructions+=6;NFSU2_TR(0x6823eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6823ef:{NFSU2_TR(0x6823ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6823f2:{NFSU2_TR(0x6823f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6823f5:{NFSU2_TR(0x6823f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6823f8:{NFSU2_TR(0x6823f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6823fb:{NFSU2_TR(0x6823fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682186u);}goto L682186;}}
}
B682401:L682401:{c.instructions+=2;NFSU2_TR(0x682401);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682405:{NFSU2_TR(0x682405);
if(r1(R+518)){{goto L6825b9;}}
}
B68240b:L68240b:{c.instructions+=3;NFSU2_TR(0x68240b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B68240d:{NFSU2_TR(0x68240d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B682410:{NFSU2_TR(0x682410);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68243d;}}
}
B682412:L682412:{c.instructions+=11;NFSU2_TR(0x682412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682415:{NFSU2_TR(0x682415);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682418:{NFSU2_TR(0x682418);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68241b:{NFSU2_TR(0x68241b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68241e:{NFSU2_TR(0x68241e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682421:{NFSU2_TR(0x682421);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682424:{NFSU2_TR(0x682424);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682427:{NFSU2_TR(0x682427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B682429:{NFSU2_TR(0x682429);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68242b:{NFSU2_TR(0x68242b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68242c:{NFSU2_TR(0x68242c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68242full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B68242f:L68242f:{c.instructions+=2;NFSU2_TR(0x68242f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682431:{NFSU2_TR(0x682431);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L682654;}}
}
B682437:L682437:{c.instructions+=3;NFSU2_TR(0x682437);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B682438:{NFSU2_TR(0x682438);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B68243b:{NFSU2_TR(0x68243b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682412u);}goto L682412;}}
}
B68243d:L68243d:{c.instructions+=5;NFSU2_TR(0x68243d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68243e:{NFSU2_TR(0x68243e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682441:{NFSU2_TR(0x682441);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682444:{NFSU2_TR(0x682444);
u8 U[4];
w4(U+0,u32(0x675322ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682449:{NFSU2_TR(0x682449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68244eull));
TAIL_STATIC(0x69a41du,69a);
}
B68244e:L68244e:{c.instructions+=3;NFSU2_TR(0x68244e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B682452:{NFSU2_TR(0x682452);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682456:{NFSU2_TR(0x682456);
if(r1(R+518)){{goto L6825b9;}}
}
B68245c:L68245c:{c.instructions+=13;NFSU2_TR(0x68245c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68245f:{NFSU2_TR(0x68245f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B682461:{NFSU2_TR(0x682461);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682464:{NFSU2_TR(0x682464);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682467:{NFSU2_TR(0x682467);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B68246a:{NFSU2_TR(0x68246a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68246d:{NFSU2_TR(0x68246d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B682470:{NFSU2_TR(0x682470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682473:{NFSU2_TR(0x682473);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B682475:{NFSU2_TR(0x682475);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B682476:{NFSU2_TR(0x682476);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682479:{NFSU2_TR(0x682479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68247c:{NFSU2_TR(0x68247c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6825b9;}}
}
B682482:L682482:{c.instructions+=9;NFSU2_TR(0x682482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682485:{NFSU2_TR(0x682485);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682488:{NFSU2_TR(0x682488);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B68248b:{NFSU2_TR(0x68248b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B68248e:{NFSU2_TR(0x68248e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682491:{NFSU2_TR(0x682491);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B682494:{NFSU2_TR(0x682494);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682497:{NFSU2_TR(0x682497);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68249a:{NFSU2_TR(0x68249a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6824b5;}}
}
B68249c:L68249c:{c.instructions+=4;NFSU2_TR(0x68249c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68249f:{NFSU2_TR(0x68249f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6824a2:{NFSU2_TR(0x6824a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6824a5:{NFSU2_TR(0x6824a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6824b5;}}
}
B6824a7:L6824a7:{c.instructions+=4;NFSU2_TR(0x6824a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6824aa:{NFSU2_TR(0x6824aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6824ac:{NFSU2_TR(0x6824ac);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6824ae:{NFSU2_TR(0x6824ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6824b5;}}
}
B6824b0:L6824b0:{c.instructions+=2;NFSU2_TR(0x6824b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6824b3:{NFSU2_TR(0x6824b3);
{goto L6824b8;}
}
B6824b5:L6824b5:{c.instructions+=1;NFSU2_TR(0x6824b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6824b8:L6824b8:{c.instructions+=4;NFSU2_TR(0x6824b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6824bb:{NFSU2_TR(0x6824bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6824be:{NFSU2_TR(0x6824be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6824c1:{NFSU2_TR(0x6824c1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682482u);}goto L682482;}}
}
B6824c3:L6824c3:{c.instructions+=3;NFSU2_TR(0x6824c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6824c6:{NFSU2_TR(0x6824c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6824c8:{NFSU2_TR(0x6824c8);
if(r1(R+518)){{goto L6825b9;}}
}
B6824ce:L6824ce:{c.instructions+=4;NFSU2_TR(0x6824ce);
__builtin_memmove((R+24),(R+0),4);
}
B6824d0:{NFSU2_TR(0x6824d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6824d3:{NFSU2_TR(0x6824d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6824d4:{NFSU2_TR(0x6824d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6824d9ull));
TAIL_STATIC(0x575620u,575);
}
B6824d9:L6824d9:{c.instructions+=4;NFSU2_TR(0x6824d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6824db:{NFSU2_TR(0x6824db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6824dc:{NFSU2_TR(0x6824dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6824df:{NFSU2_TR(0x6824df);
if(r1(R+518)){{goto L682a93;}}
}
B6824e5:L6824e5:{c.instructions+=2;NFSU2_TR(0x6824e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6824e6:{NFSU2_TR(0x6824e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6824ebull));
TAIL_STATIC(0x575620u,575);
}
B6824eb:L6824eb:{c.instructions+=4;NFSU2_TR(0x6824eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6824ed:{NFSU2_TR(0x6824ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6824ee:{NFSU2_TR(0x6824ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6824f1:{NFSU2_TR(0x6824f1);
if(r1(R+518)){{goto L682a93;}}
}
B6824f7:L6824f7:{c.instructions+=16;NFSU2_TR(0x6824f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6824fa:{NFSU2_TR(0x6824fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6824fc:{NFSU2_TR(0x6824fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6824ff:{NFSU2_TR(0x6824ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B682502:{NFSU2_TR(0x682502);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682505:{NFSU2_TR(0x682505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682508:{NFSU2_TR(0x682508);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B68250b:{NFSU2_TR(0x68250b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68250e:{NFSU2_TR(0x68250e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682511:{NFSU2_TR(0x682511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682514:{NFSU2_TR(0x682514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682517:{NFSU2_TR(0x682517);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B682519:{NFSU2_TR(0x682519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B68251c:{NFSU2_TR(0x68251c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68251f:{NFSU2_TR(0x68251f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B682526:{NFSU2_TR(0x682526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682529:L682529:{c.instructions+=14;NFSU2_TR(0x682529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68252c:{NFSU2_TR(0x68252c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68252f:{NFSU2_TR(0x68252f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B682532:{NFSU2_TR(0x682532);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682535:{NFSU2_TR(0x682535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682538:{NFSU2_TR(0x682538);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B68253b:{NFSU2_TR(0x68253b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68253e:{NFSU2_TR(0x68253e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682541:{NFSU2_TR(0x682541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682544:{NFSU2_TR(0x682544);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B682547:{NFSU2_TR(0x682547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68254a:{NFSU2_TR(0x68254a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68254d:{NFSU2_TR(0x68254d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682550:{NFSU2_TR(0x682550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682580;}}
}
B682552:L682552:{c.instructions+=4;NFSU2_TR(0x682552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682555:{NFSU2_TR(0x682555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682558:{NFSU2_TR(0x682558);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68255b:{NFSU2_TR(0x68255b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682580;}}
}
B68255d:L68255d:{c.instructions+=13;NFSU2_TR(0x68255d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682560:{NFSU2_TR(0x682560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682563:{NFSU2_TR(0x682563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682566:{NFSU2_TR(0x682566);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B682569:{NFSU2_TR(0x682569);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68256c:{NFSU2_TR(0x68256c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B68256f:{NFSU2_TR(0x68256f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B682571:{NFSU2_TR(0x682571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682574:{NFSU2_TR(0x682574);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B682575:{NFSU2_TR(0x682575);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B682578:{NFSU2_TR(0x682578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68257b:{NFSU2_TR(0x68257b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68257e:{NFSU2_TR(0x68257e);
{goto L682586;}
}
B682580:L682580:{c.instructions+=2;NFSU2_TR(0x682580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682583:{NFSU2_TR(0x682583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682586:L682586:{c.instructions+=4;NFSU2_TR(0x682586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B682589:{NFSU2_TR(0x682589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68258c:{NFSU2_TR(0x68258c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B68258f:{NFSU2_TR(0x68258f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682529u);}goto L682529;}}
}
B682591:L682591:{c.instructions+=10;NFSU2_TR(0x682591);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682593:{NFSU2_TR(0x682593);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682595:{NFSU2_TR(0x682595);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682598:{NFSU2_TR(0x682598);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B68259d:{NFSU2_TR(0x68259d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6825a0:{NFSU2_TR(0x6825a0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6825a5:{NFSU2_TR(0x6825a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6825a6:{NFSU2_TR(0x6825a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6825a7:{NFSU2_TR(0x6825a7);
__builtin_memmove((R+4),(R+12),4);
}
B6825a9:{NFSU2_TR(0x6825a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6825aeull));
TAIL_STATIC(0x6758ceu,675);
}
B6825ae:L6825ae:{c.instructions+=3;NFSU2_TR(0x6825ae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6825b0:{NFSU2_TR(0x6825b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6825b3:{NFSU2_TR(0x6825b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B6825b9:L6825b9:{c.instructions+=4;NFSU2_TR(0x6825b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6825bd:{NFSU2_TR(0x6825bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6825c0:{NFSU2_TR(0x6825c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6825c3:{NFSU2_TR(0x6825c3);
if(r1(R+518)){{goto L6825f4;}}
}
B6825c5:L6825c5:{c.instructions+=4;NFSU2_TR(0x6825c5);
__builtin_memmove((R+24),(R+0),4);
}
B6825c7:{NFSU2_TR(0x6825c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6825ca:{NFSU2_TR(0x6825ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6825cb:{NFSU2_TR(0x6825cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6825d0ull));
TAIL_STATIC(0x575620u,575);
}
B6825d0:L6825d0:{c.instructions+=4;NFSU2_TR(0x6825d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6825d2:{NFSU2_TR(0x6825d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6825d3:{NFSU2_TR(0x6825d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6825d6:{NFSU2_TR(0x6825d6);
if(r1(R+518)){{goto L682a93;}}
}
B6825dc:L6825dc:{c.instructions+=5;NFSU2_TR(0x6825dc);
__builtin_memmove((R+4),(R+24),4);
}
B6825de:{NFSU2_TR(0x6825de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6825e1:{NFSU2_TR(0x6825e1);
__builtin_memmove((R+28),(R+0),4);
}
B6825e3:{NFSU2_TR(0x6825e3);
__builtin_memmove((R+0),(R+4),4);
}
B6825e5:{NFSU2_TR(0x6825e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6825e8:L6825e8:{c.instructions+=1;NFSU2_TR(0x6825e8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6825ea;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6825e8u);}goto L6825e8;}
}
B6825ea:L6825ea:{c.instructions+=2;NFSU2_TR(0x6825ea);
__builtin_memmove((R+4),(R+0),4);
}
B6825ec:{NFSU2_TR(0x6825ec);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6825ef:L6825ef:{c.instructions+=1;NFSU2_TR(0x6825ef);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6825f1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6825efu);}goto L6825ef;}
}
B6825f1:L6825f1:{c.instructions+=1;NFSU2_TR(0x6825f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6825f4:L6825f4:{c.instructions+=7;NFSU2_TR(0x6825f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6825f7:{NFSU2_TR(0x6825f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6825fa:{NFSU2_TR(0x6825fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6825fe:{NFSU2_TR(0x6825fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682601:{NFSU2_TR(0x682601);
__builtin_memmove((R+4),(R+12),4);
}
B682603:{NFSU2_TR(0x682603);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68260a:{NFSU2_TR(0x68260a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68260full));
TAIL_STATIC(0x681bf8u,681);
}
B68260f:L68260f:{c.instructions+=4;NFSU2_TR(0x68260f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682612:{NFSU2_TR(0x682612);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B682614:{NFSU2_TR(0x682614);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682617:{NFSU2_TR(0x682617);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682622;}}
}
B682619:L682619:{c.instructions+=2;NFSU2_TR(0x682619);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68261c:{NFSU2_TR(0x68261c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682622;}}
}
B68261e:L68261e:{c.instructions+=2;NFSU2_TR(0x68261e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682620:{NFSU2_TR(0x682620);
{goto L682625;}
}
B682622:L682622:{c.instructions+=2;NFSU2_TR(0x682622);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682624:{NFSU2_TR(0x682624);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B682625:L682625:{c.instructions+=4;NFSU2_TR(0x682625);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B682628:{NFSU2_TR(0x682628);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68262b:{NFSU2_TR(0x68262b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68262e:{NFSU2_TR(0x68262e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B682634:L682634:{c.instructions+=2;NFSU2_TR(0x682634);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682636:{NFSU2_TR(0x682636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682660;}}
}
B682638:L682638:{c.instructions+=2;NFSU2_TR(0x682638);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68263b:{NFSU2_TR(0x68263b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L682660;}}
}
B68263d:L68263d:{c.instructions+=6;NFSU2_TR(0x68263d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682640:{NFSU2_TR(0x682640);
u8 U[4];
w4(U+0,u32(0x7b49b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682645:{NFSU2_TR(0x682645);
u8 U[4];
w4(U+0,u32(0xdb3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68264a:{NFSU2_TR(0x68264a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68264b:{NFSU2_TR(0x68264b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68264c:{NFSU2_TR(0x68264c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682651ull));
TAIL_STATIC(0x675267u,675);
}
B682651:L682651:{c.instructions+=1;NFSU2_TR(0x682651);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B682654:L682654:{c.instructions+=2;NFSU2_TR(0x682654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68265b:{NFSU2_TR(0x68265b);
{goto L6827d8;}
}
B682660:L682660:{c.instructions+=2;NFSU2_TR(0x682660);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682663:{NFSU2_TR(0x682663);
if(r1(R+518)){{goto L68277d;}}
}
B682669:L682669:{c.instructions+=3;NFSU2_TR(0x682669);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68266c:{NFSU2_TR(0x68266c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68266e:{NFSU2_TR(0x68266e);
if(r1(R+518)){{goto L6827c1;}}
}
B682674:L682674:{c.instructions+=2;NFSU2_TR(0x682674);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682677:{NFSU2_TR(0x682677);
if(r1(R+518)){{goto L682691;}}
}
B682679:L682679:{c.instructions+=2;NFSU2_TR(0x682679);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68267b:{NFSU2_TR(0x68267b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L682691;}}
}
B68267d:L68267d:{c.instructions+=8;NFSU2_TR(0x68267d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682680:{NFSU2_TR(0x682680);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682683:{NFSU2_TR(0x682683);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682686:{NFSU2_TR(0x682686);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B682688:{NFSU2_TR(0x682688);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B682689:{NFSU2_TR(0x682689);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68268c:{NFSU2_TR(0x68268c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68268f:{NFSU2_TR(0x68268f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68267du);}goto L68267d;}}
}
B682691:L682691:{c.instructions+=15;NFSU2_TR(0x682691);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682694:{NFSU2_TR(0x682694);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682697:{NFSU2_TR(0x682697);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68269a:{NFSU2_TR(0x68269a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B68269c:{NFSU2_TR(0x68269c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68269d:{NFSU2_TR(0x68269d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68269e:{NFSU2_TR(0x68269e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68269f:{NFSU2_TR(0x68269f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826a0:{NFSU2_TR(0x6826a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6826a3:{NFSU2_TR(0x6826a3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6826a8:{NFSU2_TR(0x6826a8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6826ad:{NFSU2_TR(0x6826ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826ae:{NFSU2_TR(0x6826ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826af:{NFSU2_TR(0x6826af);
__builtin_memmove((R+4),(R+12),4);
}
B6826b1:{NFSU2_TR(0x6826b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6826b6ull));
TAIL_STATIC(0x6758ceu,675);
}
B6826b6:L6826b6:{c.instructions+=3;NFSU2_TR(0x6826b6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6826b8:{NFSU2_TR(0x6826b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6826bb:{NFSU2_TR(0x6826bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B6826c1:L6826c1:{c.instructions+=8;NFSU2_TR(0x6826c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6826c4:{NFSU2_TR(0x6826c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6826c7:{NFSU2_TR(0x6826c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6826ca:{NFSU2_TR(0x6826ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6826cd:{NFSU2_TR(0x6826cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826ce:{NFSU2_TR(0x6826ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6826d1:{NFSU2_TR(0x6826d1);
__builtin_memmove((R+4),(R+12),4);
}
B6826d3:{NFSU2_TR(0x6826d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6826d8ull));
TAIL_STATIC(0x6760e4u,676);
}
B6826d8:L6826d8:{c.instructions+=3;NFSU2_TR(0x6826d8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6826da:{NFSU2_TR(0x6826da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6826dd:{NFSU2_TR(0x6826dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B6826e3:L6826e3:{c.instructions+=13;NFSU2_TR(0x6826e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6826e6:{NFSU2_TR(0x6826e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6826e9:{NFSU2_TR(0x6826e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826ea:{NFSU2_TR(0x6826ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6826ed:{NFSU2_TR(0x6826ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826ef:{NFSU2_TR(0x6826ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826f0:{NFSU2_TR(0x6826f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6826f6:{NFSU2_TR(0x6826f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6826f9:{NFSU2_TR(0x6826f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6826fc:{NFSU2_TR(0x6826fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6826fd:{NFSU2_TR(0x6826fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682700:{NFSU2_TR(0x682700);
__builtin_memmove((R+4),(R+12),4);
}
B682702:{NFSU2_TR(0x682702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682707ull));
TAIL_STATIC(0x67856cu,678);
}
B682707:L682707:{c.instructions+=3;NFSU2_TR(0x682707);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B682709:{NFSU2_TR(0x682709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68270c:{NFSU2_TR(0x68270c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6827d8;}}
}
B682712:L682712:{c.instructions+=7;NFSU2_TR(0x682712);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682715:{NFSU2_TR(0x682715);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682718:{NFSU2_TR(0x682718);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68271b:{NFSU2_TR(0x68271b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68271e:{NFSU2_TR(0x68271e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68271f:{NFSU2_TR(0x68271f);
__builtin_memmove((R+4),(R+12),4);
}
B682721:{NFSU2_TR(0x682721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682726ull));
TAIL_STATIC(0x674b5au,674);
}
B682726:L682726:{c.instructions+=2;NFSU2_TR(0x682726);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682728:{NFSU2_TR(0x682728);
if(r1(R+518)){{goto L682764;}}
}
B68272a:L68272a:{c.instructions+=2;NFSU2_TR(0x68272a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68272d:{NFSU2_TR(0x68272d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6827c1;}}
}
B682733:L682733:{c.instructions+=11;NFSU2_TR(0x682733);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682736:{NFSU2_TR(0x682736);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682739:{NFSU2_TR(0x682739);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68273c:{NFSU2_TR(0x68273c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68273e:{NFSU2_TR(0x68273e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682741:{NFSU2_TR(0x682741);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682744:{NFSU2_TR(0x682744);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682747:{NFSU2_TR(0x682747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B682749:{NFSU2_TR(0x682749);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68274b:{NFSU2_TR(0x68274b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68274c:{NFSU2_TR(0x68274c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68274full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B68274f:L68274f:{c.instructions+=2;NFSU2_TR(0x68274f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682751:{NFSU2_TR(0x682751);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68275b;}}
}
B682753:L682753:{c.instructions+=3;NFSU2_TR(0x682753);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B682754:{NFSU2_TR(0x682754);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B682757:{NFSU2_TR(0x682757);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682733u);}goto L682733;}}
}
B682759:L682759:{c.instructions+=1;NFSU2_TR(0x682759);
{goto L6827c1;}
}
B68275b:L68275b:{c.instructions+=2;NFSU2_TR(0x68275b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B682762:{NFSU2_TR(0x682762);
{goto L6827c1;}
}
B682764:L682764:{c.instructions+=6;NFSU2_TR(0x682764);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682767:{NFSU2_TR(0x682767);
u8 U[4];
w4(U+0,u32(0x7b7b98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68276c:{NFSU2_TR(0x68276c);
u8 U[4];
w4(U+0,u32(0xdafull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682771:{NFSU2_TR(0x682771);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682772:{NFSU2_TR(0x682772);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682773:{NFSU2_TR(0x682773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682778ull));
TAIL_STATIC(0x675267u,675);
}
B682778:L682778:{c.instructions+=2;NFSU2_TR(0x682778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B68277b:{NFSU2_TR(0x68277b);
{goto L6827c1;}
}
B68277d:L68277d:{c.instructions+=3;NFSU2_TR(0x68277d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682780:{NFSU2_TR(0x682780);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682782:{NFSU2_TR(0x682782);
if(r1(R+518)){{goto L6827c1;}}
}
B682784:L682784:{c.instructions+=2;NFSU2_TR(0x682784);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682787:{NFSU2_TR(0x682787);
if(r1(R+518)){{goto L68279c;}}
}
B682789:L682789:{c.instructions+=2;NFSU2_TR(0x682789);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68278c:{NFSU2_TR(0x68278c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6827c1;}}
}
B68278e:L68278e:{c.instructions+=5;NFSU2_TR(0x68278e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682791:{NFSU2_TR(0x682791);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B682794:{NFSU2_TR(0x682794);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B682795:{NFSU2_TR(0x682795);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B682798:{NFSU2_TR(0x682798);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68278eu);}goto L68278e;}}
}
B68279a:L68279a:{c.instructions+=1;NFSU2_TR(0x68279a);
{goto L6827c1;}
}
B68279c:L68279c:{c.instructions+=9;NFSU2_TR(0x68279c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68279f:{NFSU2_TR(0x68279f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6827a2:{NFSU2_TR(0x6827a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6827a5:{NFSU2_TR(0x6827a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6827a8:{NFSU2_TR(0x6827a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6827ab:{NFSU2_TR(0x6827ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6827ae:{NFSU2_TR(0x6827ae);
__builtin_memmove((R+0),(R+4),4);
}
B6827b0:{NFSU2_TR(0x6827b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6827b3:{NFSU2_TR(0x6827b3);
__builtin_memmove((R+28),(R+8),4);
}
B6827b5:L6827b5:{c.instructions+=1;NFSU2_TR(0x6827b5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6827b7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827b5u);}goto L6827b5;}
}
B6827b7:L6827b7:{c.instructions+=2;NFSU2_TR(0x6827b7);
__builtin_memmove((R+4),(R+0),4);
}
B6827b9:{NFSU2_TR(0x6827b9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6827bc:L6827bc:{c.instructions+=1;NFSU2_TR(0x6827bc);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6827be;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827bcu);}goto L6827bc;}
}
B6827be:L6827be:{c.instructions+=1;NFSU2_TR(0x6827be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6827c1:L6827c1:{c.instructions+=7;NFSU2_TR(0x6827c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6827c4:{NFSU2_TR(0x6827c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6827c7:{NFSU2_TR(0x6827c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6827c9:{NFSU2_TR(0x6827c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6827cc:{NFSU2_TR(0x6827cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6827cf:{NFSU2_TR(0x6827cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6827d2:{NFSU2_TR(0x6827d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68280e;}}
}
B6827d4:L6827d4:{c.instructions+=1;NFSU2_TR(0x6827d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6827d8:L6827d8:{c.instructions+=2;NFSU2_TR(0x6827d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6827db:{NFSU2_TR(0x6827db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6827e0ull));
TAIL_STATIC(0x575630u,575);
}
B6827e0:L6827e0:{c.instructions+=2;NFSU2_TR(0x6827e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6827e3:{NFSU2_TR(0x6827e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6827e8ull));
TAIL_STATIC(0x575630u,575);
}
B6827e8:L6827e8:{c.instructions+=2;NFSU2_TR(0x6827e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6827eb:{NFSU2_TR(0x6827eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6827f0ull));
TAIL_STATIC(0x575630u,575);
}
B6827f0:L6827f0:{c.instructions+=2;NFSU2_TR(0x6827f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6827f3:{NFSU2_TR(0x6827f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6827f8ull));
TAIL_STATIC(0x575630u,575);
}
B6827f8:L6827f8:{c.instructions+=2;NFSU2_TR(0x6827f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6827fb:{NFSU2_TR(0x6827fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682800ull));
TAIL_STATIC(0x575630u,575);
}
B682800:L682800:{c.instructions+=3;NFSU2_TR(0x682800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682803:{NFSU2_TR(0x682803);
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
B682806:{NFSU2_TR(0x682806);
{goto L682aa4;}
}
B68280b:L68280b:{c.instructions+=1;NFSU2_TR(0x68280b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68280e:L68280e:{c.instructions+=6;NFSU2_TR(0x68280e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682811:{NFSU2_TR(0x682811);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B682814:{NFSU2_TR(0x682814);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682816:{NFSU2_TR(0x682816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682819:{NFSU2_TR(0x682819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68281c:{NFSU2_TR(0x68281c);
if(r1(R+518)){{goto L682831;}}
}
B68281e:L68281e:{c.instructions+=3;NFSU2_TR(0x68281e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682821:{NFSU2_TR(0x682821);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682823:{NFSU2_TR(0x682823);
if(r1(R+518)){{goto L682831;}}
}
B682825:L682825:{c.instructions+=2;NFSU2_TR(0x682825);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682829:{NFSU2_TR(0x682829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682831;}}
}
B68282b:L68282b:{c.instructions+=2;NFSU2_TR(0x68282b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68282e:{NFSU2_TR(0x68282e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682831:L682831:{c.instructions+=3;NFSU2_TR(0x682831);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682834:{NFSU2_TR(0x682834);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B682838:{NFSU2_TR(0x682838);
if(r1(R+518)){{goto L6829e1;}}
}
B68283e:L68283e:{c.instructions+=5;NFSU2_TR(0x68283e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B682841:{NFSU2_TR(0x682841);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B682843:{NFSU2_TR(0x682843);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B682846:{NFSU2_TR(0x682846);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682849:{NFSU2_TR(0x682849);
if(r1(R+518)){{goto L68286f;}}
}
B68284b:L68284b:{c.instructions+=3;NFSU2_TR(0x68284b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68284e:{NFSU2_TR(0x68284e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682851:{NFSU2_TR(0x682851);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6828b9;}}
}
B682853:L682853:{c.instructions+=9;NFSU2_TR(0x682853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682856:{NFSU2_TR(0x682856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B682859:{NFSU2_TR(0x682859);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68285c:{NFSU2_TR(0x68285c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68285f:{NFSU2_TR(0x68285f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B682862:{NFSU2_TR(0x682862);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B682865:{NFSU2_TR(0x682865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682868:{NFSU2_TR(0x682868);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68286b:{NFSU2_TR(0x68286b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682853u);}goto L682853;}}
}
B68286d:L68286d:{c.instructions+=1;NFSU2_TR(0x68286d);
{goto L6828b9;}
}
B68286f:L68286f:{c.instructions+=3;NFSU2_TR(0x68286f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682872:{NFSU2_TR(0x682872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682875:{NFSU2_TR(0x682875);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6828b9;}}
}
B682877:L682877:{c.instructions+=5;NFSU2_TR(0x682877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68287a:{NFSU2_TR(0x68287a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68287d:{NFSU2_TR(0x68287d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682880:{NFSU2_TR(0x682880);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B682883:{NFSU2_TR(0x682883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682886:L682886:{c.instructions+=4;NFSU2_TR(0x682886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682889:{NFSU2_TR(0x682889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B68288b:{NFSU2_TR(0x68288b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68288e:{NFSU2_TR(0x68288e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L682898;}}
}
B682890:L682890:{c.instructions+=3;NFSU2_TR(0x682890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682893:{NFSU2_TR(0x682893);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682896:{NFSU2_TR(0x682896);
{goto L68289a;}
}
B682898:L682898:{c.instructions+=1;NFSU2_TR(0x682898);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68289a:L68289a:{c.instructions+=2;NFSU2_TR(0x68289a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68289c:{NFSU2_TR(0x68289c);
if(r1(R+518)){{goto L6828aa;}}
}
B68289e:L68289e:{c.instructions+=3;NFSU2_TR(0x68289e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6828a1:{NFSU2_TR(0x6828a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6828a4:{NFSU2_TR(0x6828a4);
if(r1(R+518)){{goto L682a72;}}
}
B6828aa:L6828aa:{c.instructions+=5;NFSU2_TR(0x6828aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6828ad:{NFSU2_TR(0x6828ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6828b0:{NFSU2_TR(0x6828b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6828b4:{NFSU2_TR(0x6828b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6828b7:{NFSU2_TR(0x6828b7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682886u);}goto L682886;}}
}
B6828b9:L6828b9:{c.instructions+=2;NFSU2_TR(0x6828b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6828bd:{NFSU2_TR(0x6828bd);
if(r1(R+518)){{goto L6829b2;}}
}
B6828c3:L6828c3:{c.instructions+=14;NFSU2_TR(0x6828c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6828c6:{NFSU2_TR(0x6828c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6828c9:{NFSU2_TR(0x6828c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6828cb:{NFSU2_TR(0x6828cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6828ce:{NFSU2_TR(0x6828ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6828d0:{NFSU2_TR(0x6828d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6828d1:{NFSU2_TR(0x6828d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6828d2:{NFSU2_TR(0x6828d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6828d5:{NFSU2_TR(0x6828d5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6828da:{NFSU2_TR(0x6828da);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6828df:{NFSU2_TR(0x6828df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6828e0:{NFSU2_TR(0x6828e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6828e1:{NFSU2_TR(0x6828e1);
__builtin_memmove((R+4),(R+12),4);
}
B6828e3:{NFSU2_TR(0x6828e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6828e8ull));
TAIL_STATIC(0x6758ceu,675);
}
B6828e8:L6828e8:{c.instructions+=3;NFSU2_TR(0x6828e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6828ea:{NFSU2_TR(0x6828ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6828ed:{NFSU2_TR(0x6828ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827d8u);}goto L6827d8;}}
}
B6828f3:L6828f3:{c.instructions+=8;NFSU2_TR(0x6828f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6828f6:{NFSU2_TR(0x6828f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6828f9:{NFSU2_TR(0x6828f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6828fc:{NFSU2_TR(0x6828fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6828ff:{NFSU2_TR(0x6828ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682900:{NFSU2_TR(0x682900);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682903:{NFSU2_TR(0x682903);
__builtin_memmove((R+4),(R+12),4);
}
B682905:{NFSU2_TR(0x682905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68290aull));
TAIL_STATIC(0x6760e4u,676);
}
B68290a:L68290a:{c.instructions+=3;NFSU2_TR(0x68290a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68290c:{NFSU2_TR(0x68290c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68290f:{NFSU2_TR(0x68290f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827d8u);}goto L6827d8;}}
}
B682915:L682915:{c.instructions+=13;NFSU2_TR(0x682915);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682918:{NFSU2_TR(0x682918);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68291b:{NFSU2_TR(0x68291b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68291d:{NFSU2_TR(0x68291d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682920:{NFSU2_TR(0x682920);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682922:{NFSU2_TR(0x682922);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682924:{NFSU2_TR(0x682924);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68292a:{NFSU2_TR(0x68292a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68292d:{NFSU2_TR(0x68292d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B682930:{NFSU2_TR(0x682930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682931:{NFSU2_TR(0x682931);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682934:{NFSU2_TR(0x682934);
__builtin_memmove((R+4),(R+12),4);
}
B682936:{NFSU2_TR(0x682936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68293bull));
TAIL_STATIC(0x67856cu,678);
}
B68293b:L68293b:{c.instructions+=3;NFSU2_TR(0x68293b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68293d:{NFSU2_TR(0x68293d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682940:{NFSU2_TR(0x682940);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827d8u);}goto L6827d8;}}
}
B682946:L682946:{c.instructions+=7;NFSU2_TR(0x682946);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682949:{NFSU2_TR(0x682949);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68294c:{NFSU2_TR(0x68294c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68294f:{NFSU2_TR(0x68294f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B682952:{NFSU2_TR(0x682952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682953:{NFSU2_TR(0x682953);
__builtin_memmove((R+4),(R+12),4);
}
B682955:{NFSU2_TR(0x682955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68295aull));
TAIL_STATIC(0x674b5au,674);
}
B68295a:L68295a:{c.instructions+=2;NFSU2_TR(0x68295a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68295c:{NFSU2_TR(0x68295c);
if(r1(R+518)){{goto L682996;}}
}
B68295e:L68295e:{c.instructions+=3;NFSU2_TR(0x68295e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B682960:{NFSU2_TR(0x682960);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682963:{NFSU2_TR(0x682963);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6829e1;}}
}
B682965:L682965:{c.instructions+=11;NFSU2_TR(0x682965);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682968:{NFSU2_TR(0x682968);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68296b:{NFSU2_TR(0x68296b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68296e:{NFSU2_TR(0x68296e);
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
B682970:{NFSU2_TR(0x682970);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682973:{NFSU2_TR(0x682973);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682976:{NFSU2_TR(0x682976);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B682979:{NFSU2_TR(0x682979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B68297b:{NFSU2_TR(0x68297b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68297d:{NFSU2_TR(0x68297d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68297e:{NFSU2_TR(0x68297e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682981ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B682981:L682981:{c.instructions+=2;NFSU2_TR(0x682981);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682983:{NFSU2_TR(0x682983);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68298d;}}
}
B682985:L682985:{c.instructions+=3;NFSU2_TR(0x682985);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B682986:{NFSU2_TR(0x682986);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B682989:{NFSU2_TR(0x682989);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682965u);}goto L682965;}}
}
B68298b:L68298b:{c.instructions+=1;NFSU2_TR(0x68298b);
{goto L6829e1;}
}
B68298d:L68298d:{c.instructions+=2;NFSU2_TR(0x68298d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B682994:{NFSU2_TR(0x682994);
{goto L6829e1;}
}
B682996:L682996:{c.instructions+=7;NFSU2_TR(0x682996);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682999:{NFSU2_TR(0x682999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68299c:{NFSU2_TR(0x68299c);
u8 U[4];
w4(U+0,u32(0x7b7b68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6829a1:{NFSU2_TR(0x6829a1);
u8 U[4];
w4(U+0,u32(0xdafull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6829a6:{NFSU2_TR(0x6829a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6829a7:{NFSU2_TR(0x6829a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6829a8:{NFSU2_TR(0x6829a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6829adull));
TAIL_STATIC(0x675267u,675);
}
B6829ad:L6829ad:{c.instructions+=2;NFSU2_TR(0x6829ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6829b0:{NFSU2_TR(0x6829b0);
{goto L6829e1;}
}
B6829b2:L6829b2:{c.instructions+=2;NFSU2_TR(0x6829b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6829b6:{NFSU2_TR(0x6829b6);
if(r1(R+518)){{goto L682a57;}}
}
B6829bc:L6829bc:{c.instructions+=4;NFSU2_TR(0x6829bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6829bf:{NFSU2_TR(0x6829bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6829c2:{NFSU2_TR(0x6829c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6829c4:{NFSU2_TR(0x6829c4);
if(r1(R+518)){{goto L682a4a;}}
}
B6829ca:L6829ca:{c.instructions+=5;NFSU2_TR(0x6829ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6829cc:{NFSU2_TR(0x6829cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6829ce:{NFSU2_TR(0x6829ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6829cf:{NFSU2_TR(0x6829cf);
__builtin_memmove((R+4),(R+12),4);
}
B6829d1:{NFSU2_TR(0x6829d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6829d6ull));
{goto L682bb1;}
}
B6829d6:L6829d6:{c.instructions+=3;NFSU2_TR(0x6829d6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6829d8:{NFSU2_TR(0x6829d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6829db:{NFSU2_TR(0x6829db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827d8u);}goto L6827d8;}}
}
B6829e1:L6829e1:{c.instructions+=2;NFSU2_TR(0x6829e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6829e5:{NFSU2_TR(0x6829e5);
if(r1(R+518)){{goto L682a4a;}}
}
B6829e7:L6829e7:{c.instructions+=2;NFSU2_TR(0x6829e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6829eb:{NFSU2_TR(0x6829eb);
if(r1(R+518)){{goto L6829f3;}}
}
B6829ed:L6829ed:{c.instructions+=2;NFSU2_TR(0x6829ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6829f1:{NFSU2_TR(0x6829f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682a4a;}}
}
B6829f3:L6829f3:{c.instructions+=2;NFSU2_TR(0x6829f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6829f7:{NFSU2_TR(0x6829f7);
if(r1(R+518)){{goto L682a57;}}
}
B6829f9:L6829f9:{c.instructions+=6;NFSU2_TR(0x6829f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6829fc:{NFSU2_TR(0x6829fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6829ff:{NFSU2_TR(0x6829ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682a02:{NFSU2_TR(0x682a02);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x24ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B682a05:{NFSU2_TR(0x682a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682a08:{NFSU2_TR(0x682a08);
if(r1(R+518)){{goto L682a57;}}
}
B682a0a:L682a0a:{c.instructions+=1;NFSU2_TR(0x682a0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B682a0d:L682a0d:{c.instructions+=4;NFSU2_TR(0x682a0d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B682a0f:{NFSU2_TR(0x682a0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B682a10:{NFSU2_TR(0x682a10);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B682a12:{NFSU2_TR(0x682a12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682a0du);}goto L682a0d;}}
}
B682a14:L682a14:{c.instructions+=6;NFSU2_TR(0x682a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B682a16:{NFSU2_TR(0x682a16);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B682a18:{NFSU2_TR(0x682a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B682a1b:{NFSU2_TR(0x682a1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a1d:{NFSU2_TR(0x682a1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a1e:{NFSU2_TR(0x682a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682a23ull));
TAIL_STATIC(0x671ccbu,671);
}
B682a23:L682a23:{c.instructions+=3;NFSU2_TR(0x682a23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682a25:{NFSU2_TR(0x682a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682a28:{NFSU2_TR(0x682a28);
if(r1(R+518)){{goto L682a93;}}
}
B682a2a:L682a2a:{c.instructions+=5;NFSU2_TR(0x682a2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682a2d:{NFSU2_TR(0x682a2d);
u8 U[4];
w4(U+0,u32(0x7b7b64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a32:{NFSU2_TR(0x682a32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a33:{NFSU2_TR(0x682a33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a34:{NFSU2_TR(0x682a34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682a39ull));
TAIL_STATIC(0x75e081u,75e);
}
B682a39:L682a39:{c.instructions+=6;NFSU2_TR(0x682a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682a3c:{NFSU2_TR(0x682a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682a3f:{NFSU2_TR(0x682a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682a42:{NFSU2_TR(0x682a42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B682a45:{NFSU2_TR(0x682a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682a48:{NFSU2_TR(0x682a48);
{goto L682a57;}
}
B682a4a:L682a4a:{c.instructions+=3;NFSU2_TR(0x682a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682a4d:{NFSU2_TR(0x682a4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682a4f:{NFSU2_TR(0x682a4f);
if(r1(R+518)){{goto L682a57;}}
}
B682a51:L682a51:{c.instructions+=2;NFSU2_TR(0x682a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682a54:{NFSU2_TR(0x682a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682a57:L682a57:{c.instructions+=6;NFSU2_TR(0x682a57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682a5b:{NFSU2_TR(0x682a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682a5e:{NFSU2_TR(0x682a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682a61:{NFSU2_TR(0x682a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B682a64:{NFSU2_TR(0x682a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682a67:{NFSU2_TR(0x682a67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68280bu);}goto L68280b;}}
}
B682a6d:L682a6d:{c.instructions+=1;NFSU2_TR(0x682a6d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827d4u);}goto L6827d4;}
}
B682a72:L682a72:{c.instructions+=7;NFSU2_TR(0x682a72);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682a75:{NFSU2_TR(0x682a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682a78:{NFSU2_TR(0x682a78);
u8 U[4];
w4(U+0,u32(0x7b7b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a7d:{NFSU2_TR(0x682a7d);
u8 U[4];
w4(U+0,u32(0xdb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a82:{NFSU2_TR(0x682a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682a85:{NFSU2_TR(0x682a85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682a86:{NFSU2_TR(0x682a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682a8bull));
TAIL_STATIC(0x675267u,675);
}
B682a8b:L682a8b:{c.instructions+=2;NFSU2_TR(0x682a8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B682a8e:{NFSU2_TR(0x682a8e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827d8u);}goto L6827d8;}
}
B682a93:L682a93:{c.instructions+=2;NFSU2_TR(0x682a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B682a9a:{NFSU2_TR(0x682a9a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6827d8u);}goto L6827d8;}
}
B682a9f:L682a9f:{c.instructions+=1;NFSU2_TR(0x682a9f);
w4(R+0,u32(0x80004005ull));
}
B682aa4:L682aa4:{c.instructions+=5;NFSU2_TR(0x682aa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B682aa5:{NFSU2_TR(0x682aa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B682aa6:{NFSU2_TR(0x682aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B682aa7:{NFSU2_TR(0x682aa7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B682aa8:{NFSU2_TR(0x682aa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B682aab:L682aab:{c.instructions+=8;NFSU2_TR(0x682aab);
__builtin_memmove((R+28),(R+28),4);
}
B682aad:{NFSU2_TR(0x682aad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682aae:{NFSU2_TR(0x682aae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682aaf:{NFSU2_TR(0x682aaf);
__builtin_memmove((R+24),(R+4),4);
}
B682ab1:{NFSU2_TR(0x682ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B682ab4:{NFSU2_TR(0x682ab4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682ab6:{NFSU2_TR(0x682ab6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682ab7:{NFSU2_TR(0x682ab7);
if(r1(R+518)){{goto L682bab;}}
}
B682abd:L682abd:{c.instructions+=2;NFSU2_TR(0x682abd);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682ac1:{NFSU2_TR(0x682ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682bab;}}
}
B682ac7:L682ac7:{c.instructions+=3;NFSU2_TR(0x682ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682aca:{NFSU2_TR(0x682aca);
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
B682acc:{NFSU2_TR(0x682acc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682ad8;}}
}
B682ace:L682ace:{c.instructions+=2;NFSU2_TR(0x682ace);
w4(R+0,u32(0x80004005ull));
}
B682ad3:{NFSU2_TR(0x682ad3);
{goto L682bad;}
}
B682ad8:L682ad8:{c.instructions+=7;NFSU2_TR(0x682ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682adb:{NFSU2_TR(0x682adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B682add:{NFSU2_TR(0x682add);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682ae0:{NFSU2_TR(0x682ae0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B682ae3:{NFSU2_TR(0x682ae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682ae4:{NFSU2_TR(0x682ae4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682ae5:{NFSU2_TR(0x682ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682aeaull));
TAIL_STATIC(0x69ec20u,69e);
}
B682aea:L682aea:{c.instructions+=2;NFSU2_TR(0x682aea);
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
B682aec:{NFSU2_TR(0x682aec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L682bad;}}
}
B682af2:L682af2:{c.instructions+=2;NFSU2_TR(0x682af2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682af5:{NFSU2_TR(0x682af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682afaull));
TAIL_STATIC(0x575630u,575);
}
B682afa:L682afa:{c.instructions+=4;NFSU2_TR(0x682afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682afd:{NFSU2_TR(0x682afd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B682b00:{NFSU2_TR(0x682b00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b01:{NFSU2_TR(0x682b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682b06ull));
TAIL_STATIC(0x575620u,575);
}
B682b06:L682b06:{c.instructions+=6;NFSU2_TR(0x682b06);
__builtin_memmove((R+28),(R+0),4);
}
B682b08:{NFSU2_TR(0x682b08);
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
B682b0a:{NFSU2_TR(0x682b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B682b0b:{NFSU2_TR(0x682b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B682b0c:{NFSU2_TR(0x682b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682b0f:{NFSU2_TR(0x682b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682b1b;}}
}
B682b11:L682b11:{c.instructions+=2;NFSU2_TR(0x682b11);
w4(R+0,u32(0x8007000eull));
}
B682b16:{NFSU2_TR(0x682b16);
{goto L682bad;}
}
B682b1b:L682b1b:{c.instructions+=6;NFSU2_TR(0x682b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682b1e:{NFSU2_TR(0x682b1e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B682b20:{NFSU2_TR(0x682b20);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B682b23:{NFSU2_TR(0x682b23);
__builtin_memmove((R+8),(R+4),4);
}
B682b25:{NFSU2_TR(0x682b25);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B682b28:{NFSU2_TR(0x682b28);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B682b2b:L682b2b:{c.instructions+=1;NFSU2_TR(0x682b2b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L682b2d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682b2bu);}goto L682b2b;}
}
B682b2d:L682b2d:{c.instructions+=2;NFSU2_TR(0x682b2d);
__builtin_memmove((R+4),(R+8),4);
}
B682b2f:{NFSU2_TR(0x682b2f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B682b32:L682b32:{c.instructions+=1;NFSU2_TR(0x682b32);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L682b34;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682b32u);}goto L682b32;}
}
B682b34:L682b34:{c.instructions+=9;NFSU2_TR(0x682b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682b37:{NFSU2_TR(0x682b37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b38:{NFSU2_TR(0x682b38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b39:{NFSU2_TR(0x682b39);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B682b3b:{NFSU2_TR(0x682b3b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B682b3e:{NFSU2_TR(0x682b3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b3f:{NFSU2_TR(0x682b3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b40:{NFSU2_TR(0x682b40);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682b43:{NFSU2_TR(0x682b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682b48ull));
TAIL_STATIC(0x699c39u,699);
}
B682b48:L682b48:{c.instructions+=10;NFSU2_TR(0x682b48);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B682b4a:{NFSU2_TR(0x682b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682b4d:{NFSU2_TR(0x682b4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b4e:{NFSU2_TR(0x682b4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b4f:{NFSU2_TR(0x682b4f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B682b52:{NFSU2_TR(0x682b52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b53:{NFSU2_TR(0x682b53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b54:{NFSU2_TR(0x682b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682b57:{NFSU2_TR(0x682b57);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682b5a:{NFSU2_TR(0x682b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682b5full));
TAIL_STATIC(0x699c39u,699);
}
B682b5f:L682b5f:{c.instructions+=10;NFSU2_TR(0x682b5f);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B682b65:{NFSU2_TR(0x682b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682b68:{NFSU2_TR(0x682b68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b69:{NFSU2_TR(0x682b69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b6a:{NFSU2_TR(0x682b6a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B682b6d:{NFSU2_TR(0x682b6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b6e:{NFSU2_TR(0x682b6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b6f:{NFSU2_TR(0x682b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682b72:{NFSU2_TR(0x682b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682b75:{NFSU2_TR(0x682b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682b7aull));
TAIL_STATIC(0x699c39u,699);
}
B682b7a:L682b7a:{c.instructions+=9;NFSU2_TR(0x682b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B682b7e:{NFSU2_TR(0x682b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682b81:{NFSU2_TR(0x682b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682b84:{NFSU2_TR(0x682b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682b85:{NFSU2_TR(0x682b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682b88:{NFSU2_TR(0x682b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B682b8f:{NFSU2_TR(0x682b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682b92:{NFSU2_TR(0x682b92);
__builtin_memmove((R+4),(R+24),4);
}
B682b94:{NFSU2_TR(0x682b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682b99ull));
TAIL_STATIC(0x681bf8u,681);
}
B682b99:L682b99:{c.instructions+=2;NFSU2_TR(0x682b99);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B682b9b:{NFSU2_TR(0x682b9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L682bad;}}
}
B682b9d:L682b9d:{c.instructions+=5;NFSU2_TR(0x682b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682ba0:{NFSU2_TR(0x682ba0);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B682ba2:{NFSU2_TR(0x682ba2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B682ba4:{NFSU2_TR(0x682ba4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B682ba9:{NFSU2_TR(0x682ba9);
{goto L682bad;}
}
B682bab:L682bab:{c.instructions+=1;NFSU2_TR(0x682bab);
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
B682bad:L682bad:{c.instructions+=4;NFSU2_TR(0x682bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B682bae:{NFSU2_TR(0x682bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B682baf:{NFSU2_TR(0x682baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B682bb0:{NFSU2_TR(0x682bb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B682bb1:L682bb1:{c.instructions+=11;NFSU2_TR(0x682bb1);
__builtin_memmove((R+28),(R+28),4);
}
B682bb3:{NFSU2_TR(0x682bb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682bb4:{NFSU2_TR(0x682bb4);
__builtin_memmove((R+20),(R+16),4);
}
B682bb6:{NFSU2_TR(0x682bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B682bb9:{NFSU2_TR(0x682bb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682bba:{NFSU2_TR(0x682bba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682bbb:{NFSU2_TR(0x682bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682bbe:{NFSU2_TR(0x682bbe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B682bc0:{NFSU2_TR(0x682bc0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682bc2:{NFSU2_TR(0x682bc2);
__builtin_memmove((R+12),(R+4),4);
}
B682bc4:{NFSU2_TR(0x682bc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682bd6;}}
}
B682bc6:L682bc6:{c.instructions+=2;NFSU2_TR(0x682bc6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B682bc9:{NFSU2_TR(0x682bc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6841ebu,684);}
}
B682bcf:L682bcf:{c.instructions+=2;NFSU2_TR(0x682bcf);
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
B682bd1:{NFSU2_TR(0x682bd1);
TAIL_STATIC(0x6841f0u,684);
}
B682bd6:L682bd6:{c.instructions+=2;NFSU2_TR(0x682bd6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B682bda:{NFSU2_TR(0x682bda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6841ebu,684);}
}
B682be0:L682be0:{c.instructions+=14;NFSU2_TR(0x682be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682be3:{NFSU2_TR(0x682be3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682be4:{NFSU2_TR(0x682be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B682be7:{NFSU2_TR(0x682be7);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B682beb:{NFSU2_TR(0x682beb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682bed:{NFSU2_TR(0x682bed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682bef:{NFSU2_TR(0x682bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682bf2:{NFSU2_TR(0x682bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682bf5:{NFSU2_TR(0x682bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682bf8:{NFSU2_TR(0x682bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682bfb:{NFSU2_TR(0x682bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682bfe:{NFSU2_TR(0x682bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c01:{NFSU2_TR(0x682c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c04:{NFSU2_TR(0x682c04);
if(r1(R+518)){{goto L682c19;}}
}
B682c06:L682c06:{c.instructions+=2;NFSU2_TR(0x682c06);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682c0a:{NFSU2_TR(0x682c0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682c19;}}
}
B682c0c:L682c0c:{c.instructions+=4;NFSU2_TR(0x682c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682c0f:{NFSU2_TR(0x682c0f);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B682c13:{NFSU2_TR(0x682c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c16:{NFSU2_TR(0x682c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c19:L682c19:{c.instructions+=3;NFSU2_TR(0x682c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682c1c:{NFSU2_TR(0x682c1c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682c1e:{NFSU2_TR(0x682c1e);
if(r1(R+518)){{goto L682c37;}}
}
B682c20:L682c20:{c.instructions+=2;NFSU2_TR(0x682c20);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682c24:{NFSU2_TR(0x682c24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682c37;}}
}
B682c26:L682c26:{c.instructions+=6;NFSU2_TR(0x682c26);
__builtin_memmove((R+8),(R+0),4);
}
B682c28:{NFSU2_TR(0x682c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682c2b:{NFSU2_TR(0x682c2b);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B682c2f:{NFSU2_TR(0x682c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c32:{NFSU2_TR(0x682c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c35:{NFSU2_TR(0x682c35);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B682c37:L682c37:{c.instructions+=2;NFSU2_TR(0x682c37);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682c3a:{NFSU2_TR(0x682c3a);
if(r1(R+518)){{goto L682c51;}}
}
B682c3c:L682c3c:{c.instructions+=3;NFSU2_TR(0x682c3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682c3d:{NFSU2_TR(0x682c3d);
__builtin_memmove((R+4),(R+12),4);
}
B682c3f:{NFSU2_TR(0x682c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682c44ull));
TAIL_STATIC(0x673a72u,673);
}
B682c44:L682c44:{c.instructions+=3;NFSU2_TR(0x682c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682c46:{NFSU2_TR(0x682c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c49:{NFSU2_TR(0x682c49);
if(r1(R+518)){TAIL_STATIC(0x683dfcu,683);}
}
B682c4f:L682c4f:{c.instructions+=1;NFSU2_TR(0x682c4f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B682c51:L682c51:{c.instructions+=2;NFSU2_TR(0x682c51);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682c54:{NFSU2_TR(0x682c54);
if(r1(R+518)){{goto L682c6d;}}
}
B682c56:L682c56:{c.instructions+=3;NFSU2_TR(0x682c56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682c59:{NFSU2_TR(0x682c59);
__builtin_memmove((R+4),(R+12),4);
}
B682c5b:{NFSU2_TR(0x682c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682c60ull));
TAIL_STATIC(0x673a72u,673);
}
B682c60:L682c60:{c.instructions+=3;NFSU2_TR(0x682c60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682c62:{NFSU2_TR(0x682c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c65:{NFSU2_TR(0x682c65);
if(r1(R+518)){TAIL_STATIC(0x683dfcu,683);}
}
B682c6b:L682c6b:{c.instructions+=1;NFSU2_TR(0x682c6b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B682c6d:L682c6d:{c.instructions+=4;NFSU2_TR(0x682c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682c70:{NFSU2_TR(0x682c70);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B682c72:{NFSU2_TR(0x682c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c75:{NFSU2_TR(0x682c75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L682c91;}}
}
B682c77:L682c77:{c.instructions+=2;NFSU2_TR(0x682c77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682c7a:{NFSU2_TR(0x682c7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L682c8b;}}
}
B682c7c:L682c7c:{c.instructions+=2;NFSU2_TR(0x682c7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682c7f:{NFSU2_TR(0x682c7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L682c91;}}
}
B682c81:L682c81:{c.instructions+=2;NFSU2_TR(0x682c81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682c84:{NFSU2_TR(0x682c84);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L682cc8;}}
}
B682c86:L682c86:{c.instructions+=2;NFSU2_TR(0x682c86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682c89:{NFSU2_TR(0x682c89);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L682c91;}}
}
B682c8b:L682c8b:{c.instructions+=2;NFSU2_TR(0x682c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682c8e:{NFSU2_TR(0x682c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B682c91:L682c91:{c.instructions+=2;NFSU2_TR(0x682c91);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682c94:{NFSU2_TR(0x682c94);
if(r1(R+518)){{goto L682cd1;}}
}
B682c96:L682c96:{c.instructions+=2;NFSU2_TR(0x682c96);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682c99:{NFSU2_TR(0x682c99);
if(r1(R+518)){{goto L682cb8;}}
}
B682c9b:L682c9b:{c.instructions+=5;NFSU2_TR(0x682c9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682c9e:{NFSU2_TR(0x682c9e);
__builtin_memmove((R+4),(R+12),4);
}
B682ca0:{NFSU2_TR(0x682ca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682ca3:{NFSU2_TR(0x682ca3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682ca6:{NFSU2_TR(0x682ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682cabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682bb1u);}goto L682bb1;}
}
B682cab:L682cab:{c.instructions+=3;NFSU2_TR(0x682cab);
__builtin_memmove((R+24),(R+0),4);
}
B682cad:{NFSU2_TR(0x682cad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682caf:{NFSU2_TR(0x682caf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682cb5:L682cb5:{c.instructions+=1;NFSU2_TR(0x682cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682cb8:L682cb8:{c.instructions+=2;NFSU2_TR(0x682cb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682cbc:{NFSU2_TR(0x682cbc);
if(r1(R+518)){{goto L682d15;}}
}
B682cbe:L682cbe:{c.instructions+=4;NFSU2_TR(0x682cbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682cc0:{NFSU2_TR(0x682cc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682cc3:{NFSU2_TR(0x682cc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682cc6:{NFSU2_TR(0x682cc6);
{goto L682d01;}
}
B682cc8:L682cc8:{c.instructions+=2;NFSU2_TR(0x682cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B682ccf:{NFSU2_TR(0x682ccf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682c91u);}goto L682c91;}
}
B682cd1:L682cd1:{c.instructions+=2;NFSU2_TR(0x682cd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682cd4:{NFSU2_TR(0x682cd4);
if(r1(R+518)){{goto L682cf2;}}
}
B682cd6:L682cd6:{c.instructions+=5;NFSU2_TR(0x682cd6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682cd8:{NFSU2_TR(0x682cd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682cdb:{NFSU2_TR(0x682cdb);
__builtin_memmove((R+4),(R+12),4);
}
B682cdd:{NFSU2_TR(0x682cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682ce0:{NFSU2_TR(0x682ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682ce5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682bb1u);}goto L682bb1;}
}
B682ce5:L682ce5:{c.instructions+=3;NFSU2_TR(0x682ce5);
__builtin_memmove((R+24),(R+0),4);
}
B682ce7:{NFSU2_TR(0x682ce7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682ce9:{NFSU2_TR(0x682ce9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682cef:L682cef:{c.instructions+=1;NFSU2_TR(0x682cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682cf2:L682cf2:{c.instructions+=2;NFSU2_TR(0x682cf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682cf6:{NFSU2_TR(0x682cf6);
if(r1(R+518)){{goto L682d15;}}
}
B682cf8:L682cf8:{c.instructions+=3;NFSU2_TR(0x682cf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682cfb:{NFSU2_TR(0x682cfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682cfe:{NFSU2_TR(0x682cfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682d01:L682d01:{c.instructions+=2;NFSU2_TR(0x682d01);
__builtin_memmove((R+4),(R+12),4);
}
B682d03:{NFSU2_TR(0x682d03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682d08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682bb1u);}goto L682bb1;}
}
B682d08:L682d08:{c.instructions+=3;NFSU2_TR(0x682d08);
__builtin_memmove((R+24),(R+0),4);
}
B682d0a:{NFSU2_TR(0x682d0a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682d0c:{NFSU2_TR(0x682d0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682d12:L682d12:{c.instructions+=1;NFSU2_TR(0x682d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682d15:L682d15:{c.instructions+=5;NFSU2_TR(0x682d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682d18:{NFSU2_TR(0x682d18);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B682d1b:{NFSU2_TR(0x682d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682d1e:{NFSU2_TR(0x682d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682d21:{NFSU2_TR(0x682d21);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6841bbu,684);}
}
B682d27:L682d27:{c.instructions+=1;NFSU2_TR(0x682d27);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6841f6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B682d2e:L682d2e:{c.instructions+=2;NFSU2_TR(0x682d2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682d30:{NFSU2_TR(0x682d30);
if(r1(R+518)){{goto L682def;}}
}
B682d36:L682d36:{c.instructions+=2;NFSU2_TR(0x682d36);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682d3a:{NFSU2_TR(0x682d3a);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B682d40:L682d40:{c.instructions+=2;NFSU2_TR(0x682d40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682d44:{NFSU2_TR(0x682d44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682d84;}}
}
B682d46:L682d46:{c.instructions+=3;NFSU2_TR(0x682d46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B682d48:{NFSU2_TR(0x682d48);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682d4a:{NFSU2_TR(0x682d4a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L682d5c;}}
}
B682d4c:L682d4c:{c.instructions+=7;NFSU2_TR(0x682d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682d4f:{NFSU2_TR(0x682d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B682d51:{NFSU2_TR(0x682d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682d54:{NFSU2_TR(0x682d54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B682d57:{NFSU2_TR(0x682d57);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B682d58:{NFSU2_TR(0x682d58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B682d5a:{NFSU2_TR(0x682d5a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682d4cu);}goto L682d4c;}}
}
B682d5c:L682d5c:{c.instructions+=2;NFSU2_TR(0x682d5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682d60:{NFSU2_TR(0x682d60);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B682d66:L682d66:{c.instructions+=3;NFSU2_TR(0x682d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682d6c:{NFSU2_TR(0x682d6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682d6e:{NFSU2_TR(0x682d6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x683c05u,683);}
}
B682d74:L682d74:{c.instructions+=2;NFSU2_TR(0x682d74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682d76:{NFSU2_TR(0x682d76);
if(r1(R+518)){TAIL_STATIC(0x683bc8u,683);}
}
B682d7c:L682d7c:{c.instructions+=2;NFSU2_TR(0x682d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B682d7f:{NFSU2_TR(0x682d7f);
TAIL_STATIC(0x683bcfu,683);
}
B682d84:L682d84:{c.instructions+=2;NFSU2_TR(0x682d84);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682d87:{NFSU2_TR(0x682d87);
if(r1(R+518)){{goto L682f4b;}}
}
B682d8d:L682d8d:{c.instructions+=4;NFSU2_TR(0x682d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682d90:{NFSU2_TR(0x682d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682d93:{NFSU2_TR(0x682d93);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B682d96:{NFSU2_TR(0x682d96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682da1;}}
}
B682d98:L682d98:{c.instructions+=2;NFSU2_TR(0x682d98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B682d9b:{NFSU2_TR(0x682d9b);
if(r1(R+512)){{goto L682f4b;}}
}
B682da1:L682da1:{c.instructions+=3;NFSU2_TR(0x682da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682da4:{NFSU2_TR(0x682da4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682da7:{NFSU2_TR(0x682da7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6841cdu,684);}
}
B682dad:L682dad:{c.instructions+=3;NFSU2_TR(0x682dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682db0:{NFSU2_TR(0x682db0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682db3:{NFSU2_TR(0x682db3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6841cdu,684);}
}
B682db9:L682db9:{c.instructions+=3;NFSU2_TR(0x682db9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B682dbb:{NFSU2_TR(0x682dbb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682dbd:{NFSU2_TR(0x682dbd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682d5cu);}goto L682d5c;}}
}
B682dbf:L682dbf:{c.instructions+=13;NFSU2_TR(0x682dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682dc2:{NFSU2_TR(0x682dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682dc5:{NFSU2_TR(0x682dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682dc8:{NFSU2_TR(0x682dc8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B682dcb:{NFSU2_TR(0x682dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682dce:{NFSU2_TR(0x682dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B682dd1:{NFSU2_TR(0x682dd1);
__builtin_memmove((R+4),(R+0),4);
}
B682dd3:{NFSU2_TR(0x682dd3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B682dd6:{NFSU2_TR(0x682dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B682dd9:{NFSU2_TR(0x682dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B682ddc:{NFSU2_TR(0x682ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B682ddf:{NFSU2_TR(0x682ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682de2:{NFSU2_TR(0x682de2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B682de3:L682de3:{c.instructions+=1;NFSU2_TR(0x682de3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L682de5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682de3u);}goto L682de3;}
}
B682de5:L682de5:{c.instructions+=2;NFSU2_TR(0x682de5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B682de8:{NFSU2_TR(0x682de8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682dbfu);}goto L682dbf;}}
}
B682dea:L682dea:{c.instructions+=1;NFSU2_TR(0x682dea);
TAIL_STATIC(0x68396bu,683);
}
B682def:L682def:{c.instructions+=6;NFSU2_TR(0x682def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682df2:{NFSU2_TR(0x682df2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682df3:{NFSU2_TR(0x682df3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682df6:{NFSU2_TR(0x682df6);
__builtin_memmove((R+4),(R+12),4);
}
B682df8:{NFSU2_TR(0x682df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682dfb:{NFSU2_TR(0x682dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682e00ull));
TAIL_STATIC(0x684262u,684);
}
B682e00:L682e00:{c.instructions+=1;NFSU2_TR(0x682e00);
TAIL_STATIC(0x68300au,683);
}
B682e05:L682e05:{c.instructions+=2;NFSU2_TR(0x682e05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e07:{NFSU2_TR(0x682e07);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B682e0d:L682e0d:{c.instructions+=2;NFSU2_TR(0x682e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e0f:{NFSU2_TR(0x682e0f);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B682e15:L682e15:{c.instructions+=2;NFSU2_TR(0x682e15);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e17:{NFSU2_TR(0x682e17);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682d5cu);}goto L682d5c;}}
}
B682e1d:L682e1d:{c.instructions+=5;NFSU2_TR(0x682e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682e20:{NFSU2_TR(0x682e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B682e22:{NFSU2_TR(0x682e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682e25:{NFSU2_TR(0x682e25);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B682e28:{NFSU2_TR(0x682e28);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L682e32;}}
}
B682e2a:L682e2a:{c.instructions+=3;NFSU2_TR(0x682e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682e2d:{NFSU2_TR(0x682e2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B682e30:{NFSU2_TR(0x682e30);
{goto L682e34;}
}
B682e32:L682e32:{c.instructions+=1;NFSU2_TR(0x682e32);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682e34:L682e34:{c.instructions+=2;NFSU2_TR(0x682e34);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e36:{NFSU2_TR(0x682e36);
if(r1(R+518)){{goto L682f41;}}
}
B682e3c:L682e3c:{c.instructions+=3;NFSU2_TR(0x682e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682e3f:{NFSU2_TR(0x682e3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682e42:{NFSU2_TR(0x682e42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L682f41;}}
}
B682e48:L682e48:{c.instructions+=3;NFSU2_TR(0x682e48);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682e4a:{NFSU2_TR(0x682e4a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e4c:{NFSU2_TR(0x682e4c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L682e62;}}
}
B682e4e:L682e4e:{c.instructions+=1;NFSU2_TR(0x682e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B682e51:L682e51:{c.instructions+=4;NFSU2_TR(0x682e51);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B682e54:{NFSU2_TR(0x682e54);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B682e57:{NFSU2_TR(0x682e57);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682e5b:{NFSU2_TR(0x682e5b);
if(r1(R+518)){{goto L682eb4;}}
}
B682e5d:L682e5d:{c.instructions+=3;NFSU2_TR(0x682e5d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B682e5e:{NFSU2_TR(0x682e5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B682e60:{NFSU2_TR(0x682e60);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682e51u);}goto L682e51;}}
}
B682e62:L682e62:{c.instructions+=6;NFSU2_TR(0x682e62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682e64:{NFSU2_TR(0x682e64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682e66:{NFSU2_TR(0x682e66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682e69:{NFSU2_TR(0x682e69);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B682e6f:{NFSU2_TR(0x682e6f);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x10000000ull))));
}
B682e75:{NFSU2_TR(0x682e75);
{goto L682f29;}
}
B682e7a:L682e7a:{c.instructions+=2;NFSU2_TR(0x682e7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e7c:{NFSU2_TR(0x682e7c);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B682e82:L682e82:{c.instructions+=2;NFSU2_TR(0x682e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e84:{NFSU2_TR(0x682e84);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B682e8a:L682e8a:{c.instructions+=2;NFSU2_TR(0x682e8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e8c:{NFSU2_TR(0x682e8c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682d5cu);}goto L682d5c;}}
}
B682e92:L682e92:{c.instructions+=3;NFSU2_TR(0x682e92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B682e94:{NFSU2_TR(0x682e94);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682e96:{NFSU2_TR(0x682e96);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682e62u);}goto L682e62;}}
}
B682e98:L682e98:{c.instructions+=2;NFSU2_TR(0x682e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682e9b:{NFSU2_TR(0x682e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B682e9e:L682e9e:{c.instructions+=5;NFSU2_TR(0x682e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682ea1:{NFSU2_TR(0x682ea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B682ea4:{NFSU2_TR(0x682ea4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B682ea7:{NFSU2_TR(0x682ea7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682eab:{NFSU2_TR(0x682eab);
if(r1(R+518)){{goto L682eb4;}}
}
B682ead:L682ead:{c.instructions+=3;NFSU2_TR(0x682ead);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B682eae:{NFSU2_TR(0x682eae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B682eb0:{NFSU2_TR(0x682eb0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682e9eu);}goto L682e9e;}}
}
B682eb2:L682eb2:{c.instructions+=1;NFSU2_TR(0x682eb2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682e62u);}goto L682e62;}
}
B682eb4:L682eb4:{c.instructions+=4;NFSU2_TR(0x682eb4);
u8 U[4];
w4(U+0,u32(0x7b7c78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682eb9:{NFSU2_TR(0x682eb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682ebb:{NFSU2_TR(0x682ebb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682ebe:{NFSU2_TR(0x682ebe);
TAIL_STATIC(0x6841c4u,684);
}
B682ec3:L682ec3:{c.instructions+=2;NFSU2_TR(0x682ec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682ec5:{NFSU2_TR(0x682ec5);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B682ecb:L682ecb:{c.instructions+=3;NFSU2_TR(0x682ecb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682ecc:{NFSU2_TR(0x682ecc);
__builtin_memmove((R+4),(R+12),4);
}
B682ece:{NFSU2_TR(0x682ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682ed3ull));
TAIL_STATIC(0x673a0fu,673);
}
B682ed3:L682ed3:{c.instructions+=2;NFSU2_TR(0x682ed3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682ed5:{NFSU2_TR(0x682ed5);
if(r1(R+518)){TAIL_STATIC(0x683dfcu,683);}
}
B682edb:L682edb:{c.instructions+=3;NFSU2_TR(0x682edb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682edd:{NFSU2_TR(0x682edd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682edf:{NFSU2_TR(0x682edf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L682f17;}}
}
B682ee1:L682ee1:{c.instructions+=5;NFSU2_TR(0x682ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682ee4:{NFSU2_TR(0x682ee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B682ee7:{NFSU2_TR(0x682ee7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B682ee8:{NFSU2_TR(0x682ee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B682eea:{NFSU2_TR(0x682eea);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682ee1u);}goto L682ee1;}}
}
B682eec:L682eec:{c.instructions+=1;NFSU2_TR(0x682eec);
{goto L682f17;}
}
B682eee:L682eee:{c.instructions+=2;NFSU2_TR(0x682eee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682ef0:{NFSU2_TR(0x682ef0);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B682ef6:L682ef6:{c.instructions+=3;NFSU2_TR(0x682ef6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682ef7:{NFSU2_TR(0x682ef7);
__builtin_memmove((R+4),(R+12),4);
}
B682ef9:{NFSU2_TR(0x682ef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682efeull));
TAIL_STATIC(0x673a0fu,673);
}
B682efe:L682efe:{c.instructions+=2;NFSU2_TR(0x682efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682f00:{NFSU2_TR(0x682f00);
if(r1(R+518)){TAIL_STATIC(0x683dfcu,683);}
}
B682f06:L682f06:{c.instructions+=3;NFSU2_TR(0x682f06);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682f08:{NFSU2_TR(0x682f08);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682f0a:{NFSU2_TR(0x682f0a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L682f17;}}
}
B682f0c:L682f0c:{c.instructions+=5;NFSU2_TR(0x682f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B682f0f:{NFSU2_TR(0x682f0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B682f12:{NFSU2_TR(0x682f12);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B682f13:{NFSU2_TR(0x682f13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B682f15:{NFSU2_TR(0x682f15);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682f0cu);}goto L682f0c;}}
}
B682f17:L682f17:{c.instructions+=5;NFSU2_TR(0x682f17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682f19:{NFSU2_TR(0x682f19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682f1a:{NFSU2_TR(0x682f1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682f1d:{NFSU2_TR(0x682f1d);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B682f23:{NFSU2_TR(0x682f23);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20400000ull))));
}
B682f29:L682f29:{c.instructions+=5;NFSU2_TR(0x682f29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682f2c:{NFSU2_TR(0x682f2c);
__builtin_memmove((R+4),(R+12),4);
}
B682f2e:{NFSU2_TR(0x682f2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682f2f:{NFSU2_TR(0x682f2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682f32:{NFSU2_TR(0x682f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682f37ull));
TAIL_STATIC(0x6758ceu,675);
}
B682f37:L682f37:{c.instructions+=3;NFSU2_TR(0x682f37);
__builtin_memmove((R+24),(R+0),4);
}
B682f39:{NFSU2_TR(0x682f39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682f3b:{NFSU2_TR(0x682f3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682f41:L682f41:{c.instructions+=2;NFSU2_TR(0x682f41);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682f45:{NFSU2_TR(0x682f45);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B682f4b:L682f4b:{c.instructions+=2;NFSU2_TR(0x682f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B682f4e:{NFSU2_TR(0x682f4e);
TAIL_STATIC(0x683963u,683);
}
B682f53:L682f53:{c.instructions+=2;NFSU2_TR(0x682f53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682f55:{NFSU2_TR(0x682f55);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B682f5b:L682f5b:{c.instructions+=2;NFSU2_TR(0x682f5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B682f5f:{NFSU2_TR(0x682f5f);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B682f65:L682f65:{c.instructions+=4;NFSU2_TR(0x682f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B682f68:{NFSU2_TR(0x682f68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682f69:{NFSU2_TR(0x682f69);
__builtin_memmove((R+4),(R+12),4);
}
B682f6b:{NFSU2_TR(0x682f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682f70ull));
TAIL_STATIC(0x673a0fu,673);
}
B682f70:L682f70:{c.instructions+=2;NFSU2_TR(0x682f70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B682f72:{NFSU2_TR(0x682f72);
if(r1(R+518)){TAIL_STATIC(0x683dfcu,683);}
}
B682f78:L682f78:{c.instructions+=3;NFSU2_TR(0x682f78);
__builtin_memmove((R+8),(R+28),4);
}
B682f7a:{NFSU2_TR(0x682f7a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B682f7c:{NFSU2_TR(0x682f7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B682f7f:L682f7f:{c.instructions+=5;NFSU2_TR(0x682f7f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B682f83:{NFSU2_TR(0x682f83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B682f84:{NFSU2_TR(0x682f84);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B682f86:{NFSU2_TR(0x682f86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B682f89:{NFSU2_TR(0x682f89);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x682f7fu);}goto L682f7f;}}
}
B682f8b:L682f8b:{c.instructions+=4;NFSU2_TR(0x682f8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682f8c:{NFSU2_TR(0x682f8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682f8f:{NFSU2_TR(0x682f8f);
__builtin_memmove((R+4),(R+12),4);
}
B682f91:{NFSU2_TR(0x682f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682f96ull));
TAIL_STATIC(0x673b2cu,673);
}
B682f96:L682f96:{c.instructions+=3;NFSU2_TR(0x682f96);
__builtin_memmove((R+24),(R+0),4);
}
B682f98:{NFSU2_TR(0x682f98);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682f9a:{NFSU2_TR(0x682f9a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682fa0:L682fa0:{c.instructions+=4;NFSU2_TR(0x682fa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682fa1:{NFSU2_TR(0x682fa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fa4:{NFSU2_TR(0x682fa4);
__builtin_memmove((R+4),(R+12),4);
}
B682fa6:{NFSU2_TR(0x682fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682fabull));
TAIL_STATIC(0x673b2cu,673);
}
B682fab:L682fab:{c.instructions+=3;NFSU2_TR(0x682fab);
__builtin_memmove((R+24),(R+0),4);
}
B682fad:{NFSU2_TR(0x682fad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682faf:{NFSU2_TR(0x682faf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682fb5:L682fb5:{c.instructions+=4;NFSU2_TR(0x682fb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682fb6:{NFSU2_TR(0x682fb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fb9:{NFSU2_TR(0x682fb9);
__builtin_memmove((R+4),(R+12),4);
}
B682fbb:{NFSU2_TR(0x682fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682fc0ull));
TAIL_STATIC(0x673b2cu,673);
}
B682fc0:L682fc0:{c.instructions+=3;NFSU2_TR(0x682fc0);
__builtin_memmove((R+24),(R+0),4);
}
B682fc2:{NFSU2_TR(0x682fc2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682fc4:{NFSU2_TR(0x682fc4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682fca:L682fca:{c.instructions+=7;NFSU2_TR(0x682fca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682fcb:{NFSU2_TR(0x682fcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fce:{NFSU2_TR(0x682fce);
__builtin_memmove((R+4),(R+12),4);
}
B682fd0:{NFSU2_TR(0x682fd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fd3:{NFSU2_TR(0x682fd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fd6:{NFSU2_TR(0x682fd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fd9:{NFSU2_TR(0x682fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x682fdeull));
TAIL_STATIC(0x6782eau,678);
}
B682fde:L682fde:{c.instructions+=3;NFSU2_TR(0x682fde);
__builtin_memmove((R+24),(R+0),4);
}
B682fe0:{NFSU2_TR(0x682fe0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B682fe2:{NFSU2_TR(0x682fe2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B682fe8:L682fe8:{c.instructions+=8;NFSU2_TR(0x682fe8);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B682fea:{NFSU2_TR(0x682fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fed:{NFSU2_TR(0x682fed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682ff0:{NFSU2_TR(0x682ff0);
__builtin_memmove((R+0),(R+28),4);
}
B682ff2:{NFSU2_TR(0x682ff2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B682ff7:{NFSU2_TR(0x682ff7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B682ffc:{NFSU2_TR(0x682ffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B682fff:{NFSU2_TR(0x682fff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x683000u,683);
}
XIT:NFSU2_TR_EXIT(0x682,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
