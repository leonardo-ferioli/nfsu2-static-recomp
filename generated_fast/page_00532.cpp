#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_632(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x532,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x532,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_532(u8* __restrict R,Cpu& c);
u32 page_532(Cpu& c){return body_532(c.regs.data(),c);}
__attribute__((noinline)) u32 body_532(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x532002:goto L532002;
case 0x532004:c.instructions+=2;goto B532004;
case 0x532005:c.instructions+=1;goto B532005;
case 0x532010:goto L532010;
case 0x532013:c.instructions+=8;goto B532013;
case 0x532018:c.instructions+=7;goto B532018;
case 0x532019:c.instructions+=6;goto B532019;
case 0x53201a:c.instructions+=5;goto B53201a;
case 0x53201c:c.instructions+=4;goto B53201c;
case 0x53201e:c.instructions+=3;goto B53201e;
case 0x532020:c.instructions+=2;goto B532020;
case 0x532024:c.instructions+=1;goto B532024;
case 0x53202a:goto L53202a;
case 0x53202b:c.instructions+=2;goto B53202b;
case 0x53202c:c.instructions+=1;goto B53202c;
case 0x532030:goto L532030;
case 0x532031:c.instructions+=2;goto B532031;
case 0x532036:c.instructions+=1;goto B532036;
case 0x53203b:goto L53203b;
case 0x53203e:c.instructions+=3;goto B53203e;
case 0x532043:c.instructions+=2;goto B532043;
case 0x532045:c.instructions+=1;goto B532045;
case 0x532047:goto L532047;
case 0x532048:c.instructions+=2;goto B532048;
case 0x53204d:c.instructions+=1;goto B53204d;
case 0x532052:goto L532052;
case 0x532054:c.instructions+=3;goto B532054;
case 0x532057:c.instructions+=2;goto B532057;
case 0x532059:c.instructions+=1;goto B532059;
case 0x53205b:goto L53205b;
case 0x53205f:c.instructions+=2;goto B53205f;
case 0x532061:c.instructions+=1;goto B532061;
case 0x532063:goto L532063;
case 0x532069:c.instructions+=1;goto B532069;
case 0x53206b:goto L53206b;
case 0x532070:c.instructions+=3;goto B532070;
case 0x532072:c.instructions+=2;goto B532072;
case 0x532075:c.instructions+=1;goto B532075;
case 0x53207a:goto L53207a;
case 0x53207e:c.instructions+=4;goto B53207e;
case 0x532083:c.instructions+=3;goto B532083;
case 0x532085:c.instructions+=2;goto B532085;
case 0x532088:c.instructions+=1;goto B532088;
case 0x53208d:goto L53208d;
case 0x532091:c.instructions+=3;goto B532091;
case 0x532093:c.instructions+=2;goto B532093;
case 0x532096:c.instructions+=1;goto B532096;
case 0x532098:goto L532098;
case 0x53209d:c.instructions+=3;goto B53209d;
case 0x53209e:c.instructions+=2;goto B53209e;
case 0x5320a0:c.instructions+=1;goto B5320a0;
case 0x5320a2:goto L5320a2;
case 0x5320a4:goto L5320a4;
case 0x5320a8:c.instructions+=1;goto B5320a8;
case 0x5320aa:goto L5320aa;
case 0x5320ac:c.instructions+=1;goto B5320ac;
case 0x5320b2:goto L5320b2;
case 0x5320b7:c.instructions+=8;goto B5320b7;
case 0x5320b9:c.instructions+=7;goto B5320b9;
case 0x5320bb:c.instructions+=6;goto B5320bb;
case 0x5320bd:c.instructions+=5;goto B5320bd;
case 0x5320bf:c.instructions+=4;goto B5320bf;
case 0x5320c7:c.instructions+=3;goto B5320c7;
case 0x5320cb:c.instructions+=2;goto B5320cb;
case 0x5320cf:c.instructions+=1;goto B5320cf;
case 0x5320d5:goto L5320d5;
case 0x5320d9:c.instructions+=3;goto B5320d9;
case 0x5320de:c.instructions+=2;goto B5320de;
case 0x5320e0:c.instructions+=1;goto B5320e0;
case 0x5320e4:goto L5320e4;
case 0x5320e5:c.instructions+=2;goto B5320e5;
case 0x5320ea:c.instructions+=1;goto B5320ea;
case 0x5320ef:goto L5320ef;
case 0x5320f3:c.instructions+=1;goto B5320f3;
case 0x5320f9:goto L5320f9;
case 0x5320fa:c.instructions+=2;goto B5320fa;
case 0x5320ff:c.instructions+=1;goto B5320ff;
case 0x532104:goto L532104;
case 0x53210a:c.instructions+=6;goto B53210a;
case 0x532110:c.instructions+=5;goto B532110;
case 0x532112:c.instructions+=4;goto B532112;
case 0x532115:c.instructions+=3;goto B532115;
case 0x532117:c.instructions+=2;goto B532117;
case 0x53211a:c.instructions+=1;goto B53211a;
case 0x53211c:goto L53211c;
case 0x532122:c.instructions+=1;goto B532122;
case 0x532127:goto L532127;
case 0x53212d:c.instructions+=4;goto B53212d;
case 0x532133:c.instructions+=3;goto B532133;
case 0x532135:c.instructions+=2;goto B532135;
case 0x532138:c.instructions+=1;goto B532138;
case 0x53213a:goto L53213a;
case 0x53213d:c.instructions+=1;goto B53213d;
case 0x53213f:goto L53213f;
case 0x532145:c.instructions+=1;goto B532145;
case 0x53214a:goto L53214a;
case 0x532150:c.instructions+=4;goto B532150;
case 0x532156:c.instructions+=3;goto B532156;
case 0x532158:c.instructions+=2;goto B532158;
case 0x53215b:c.instructions+=1;goto B53215b;
case 0x53215d:goto L53215d;
case 0x532160:c.instructions+=1;goto B532160;
case 0x532162:goto L532162;
case 0x532168:c.instructions+=1;goto B532168;
case 0x53216a:goto L53216a;
case 0x532170:c.instructions+=4;goto B532170;
case 0x532176:c.instructions+=3;goto B532176;
case 0x532178:c.instructions+=2;goto B532178;
case 0x53217b:c.instructions+=1;goto B53217b;
case 0x53217d:goto L53217d;
case 0x532180:c.instructions+=1;goto B532180;
case 0x532182:goto L532182;
case 0x532188:c.instructions+=1;goto B532188;
case 0x53218a:goto L53218a;
case 0x532190:c.instructions+=4;goto B532190;
case 0x532196:c.instructions+=3;goto B532196;
case 0x532198:c.instructions+=2;goto B532198;
case 0x53219b:c.instructions+=1;goto B53219b;
case 0x53219d:goto L53219d;
case 0x5321a0:c.instructions+=1;goto B5321a0;
case 0x5321a2:goto L5321a2;
case 0x5321a8:c.instructions+=1;goto B5321a8;
case 0x5321aa:goto L5321aa;
case 0x5321b0:c.instructions+=4;goto B5321b0;
case 0x5321b6:c.instructions+=3;goto B5321b6;
case 0x5321b8:c.instructions+=2;goto B5321b8;
case 0x5321bb:c.instructions+=1;goto B5321bb;
case 0x5321bd:goto L5321bd;
case 0x5321c0:c.instructions+=1;goto B5321c0;
case 0x5321c2:goto L5321c2;
case 0x5321c8:goto L5321c8;
case 0x5321cc:c.instructions+=4;goto B5321cc;
case 0x5321d2:c.instructions+=3;goto B5321d2;
case 0x5321d4:c.instructions+=2;goto B5321d4;
case 0x5321d7:c.instructions+=1;goto B5321d7;
case 0x5321d9:goto L5321d9;
case 0x5321de:c.instructions+=2;goto B5321de;
case 0x5321e0:c.instructions+=1;goto B5321e0;
case 0x5321e2:goto L5321e2;
case 0x5321e7:c.instructions+=2;goto B5321e7;
case 0x5321e9:c.instructions+=1;goto B5321e9;
case 0x5321eb:goto L5321eb;
case 0x5321ed:c.instructions+=1;goto B5321ed;
case 0x5321ef:goto L5321ef;
case 0x5321f4:goto L5321f4;
case 0x5321f8:c.instructions+=8;goto B5321f8;
case 0x5321fb:c.instructions+=7;goto B5321fb;
case 0x5321fd:c.instructions+=6;goto B5321fd;
case 0x532200:c.instructions+=5;goto B532200;
case 0x532203:c.instructions+=4;goto B532203;
case 0x532204:c.instructions+=3;goto B532204;
case 0x532206:c.instructions+=2;goto B532206;
case 0x532207:c.instructions+=1;goto B532207;
case 0x53220c:goto L53220c;
case 0x53220e:c.instructions+=1;goto B53220e;
case 0x532213:goto L532213;
case 0x532217:c.instructions+=2;goto B532217;
case 0x53221a:c.instructions+=1;goto B53221a;
case 0x53221c:goto L53221c;
case 0x532221:c.instructions+=2;goto B532221;
case 0x532223:c.instructions+=1;goto B532223;
case 0x532225:goto L532225;
case 0x53222a:c.instructions+=2;goto B53222a;
case 0x53222c:c.instructions+=1;goto B53222c;
case 0x53222e:goto L53222e;
case 0x532230:c.instructions+=1;goto B532230;
case 0x532232:goto L532232;
case 0x532237:goto L532237;
case 0x53223b:c.instructions+=7;goto B53223b;
case 0x53223d:c.instructions+=6;goto B53223d;
case 0x532240:c.instructions+=5;goto B532240;
case 0x532241:c.instructions+=4;goto B532241;
case 0x532243:c.instructions+=3;goto B532243;
case 0x532244:c.instructions+=2;goto B532244;
case 0x532246:c.instructions+=1;goto B532246;
case 0x53224b:goto L53224b;
case 0x53224f:c.instructions+=2;goto B53224f;
case 0x532251:c.instructions+=1;goto B532251;
case 0x532253:goto L532253;
case 0x532257:c.instructions+=1;goto B532257;
case 0x532259:goto L532259;
case 0x53225b:c.instructions+=1;goto B53225b;
case 0x53225d:goto L53225d;
case 0x53225e:c.instructions+=2;goto B53225e;
case 0x532263:c.instructions+=1;goto B532263;
case 0x532268:goto L532268;
case 0x53226a:c.instructions+=4;goto B53226a;
case 0x53226d:c.instructions+=3;goto B53226d;
case 0x53226e:c.instructions+=2;goto B53226e;
case 0x532270:c.instructions+=1;goto B532270;
case 0x532275:goto L532275;
case 0x532277:c.instructions+=3;goto B532277;
case 0x532279:c.instructions+=2;goto B532279;
case 0x53227f:c.instructions+=1;goto B53227f;
case 0x532284:goto L532284;
case 0x532288:c.instructions+=6;goto B532288;
case 0x53228c:c.instructions+=5;goto B53228c;
case 0x53228e:c.instructions+=4;goto B53228e;
case 0x532290:c.instructions+=3;goto B532290;
case 0x532291:c.instructions+=2;goto B532291;
case 0x532293:c.instructions+=1;goto B532293;
case 0x532298:goto L532298;
case 0x53229a:c.instructions+=1;goto B53229a;
case 0x53229f:goto L53229f;
case 0x5322a3:c.instructions+=2;goto B5322a3;
case 0x5322a7:c.instructions+=1;goto B5322a7;
case 0x5322a9:goto L5322a9;
case 0x5322ab:c.instructions+=3;goto B5322ab;
case 0x5322ad:c.instructions+=2;goto B5322ad;
case 0x5322af:c.instructions+=1;goto B5322af;
case 0x5322b4:goto L5322b4;
case 0x5322b8:c.instructions+=5;goto B5322b8;
case 0x5322b9:c.instructions+=4;goto B5322b9;
case 0x5322ba:c.instructions+=3;goto B5322ba;
case 0x5322be:c.instructions+=2;goto B5322be;
case 0x5322c2:c.instructions+=1;goto B5322c2;
case 0x5322c4:goto L5322c4;
case 0x5322c9:c.instructions+=4;goto B5322c9;
case 0x5322ca:c.instructions+=3;goto B5322ca;
case 0x5322cc:c.instructions+=2;goto B5322cc;
case 0x5322d0:c.instructions+=1;goto B5322d0;
case 0x5322d6:goto L5322d6;
case 0x5322d7:c.instructions+=1;goto B5322d7;
case 0x5322d8:goto L5322d8;
case 0x5322d9:c.instructions+=3;goto B5322d9;
case 0x5322da:c.instructions+=2;goto B5322da;
case 0x5322dd:c.instructions+=1;goto B5322dd;
case 0x5322e0:goto L5322e0;
case 0x5322e1:c.instructions+=10;goto B5322e1;
case 0x5322e3:c.instructions+=9;goto B5322e3;
case 0x5322e6:c.instructions+=8;goto B5322e6;
case 0x5322e8:c.instructions+=7;goto B5322e8;
case 0x5322ed:c.instructions+=6;goto B5322ed;
case 0x5322f3:c.instructions+=5;goto B5322f3;
case 0x5322f4:c.instructions+=4;goto B5322f4;
case 0x5322fb:c.instructions+=3;goto B5322fb;
case 0x5322fc:c.instructions+=2;goto B5322fc;
case 0x532301:c.instructions+=1;goto B532301;
case 0x532306:goto L532306;
case 0x53230b:c.instructions+=14;goto B53230b;
case 0x532310:c.instructions+=13;goto B532310;
case 0x532315:c.instructions+=12;goto B532315;
case 0x532317:c.instructions+=11;goto B532317;
case 0x532318:c.instructions+=10;goto B532318;
case 0x53231e:c.instructions+=9;goto B53231e;
case 0x532321:c.instructions+=8;goto B532321;
case 0x532322:c.instructions+=7;goto B532322;
case 0x532328:c.instructions+=6;goto B532328;
case 0x53232b:c.instructions+=5;goto B53232b;
case 0x53232c:c.instructions+=4;goto B53232c;
case 0x53232d:c.instructions+=3;goto B53232d;
case 0x532332:c.instructions+=2;goto B532332;
case 0x53233c:c.instructions+=1;goto B53233c;
case 0x532341:goto L532341;
case 0x532348:c.instructions+=10;goto B532348;
case 0x53234b:c.instructions+=9;goto B53234b;
case 0x532352:c.instructions+=8;goto B532352;
case 0x532358:c.instructions+=7;goto B532358;
case 0x53235c:c.instructions+=6;goto B53235c;
case 0x532362:c.instructions+=5;goto B532362;
case 0x532367:c.instructions+=4;goto B532367;
case 0x53236a:c.instructions+=3;goto B53236a;
case 0x53236d:c.instructions+=2;goto B53236d;
case 0x53236f:c.instructions+=1;goto B53236f;
case 0x532371:goto L532371;
case 0x532374:c.instructions+=3;goto B532374;
case 0x532376:c.instructions+=2;goto B532376;
case 0x53237d:c.instructions+=1;goto B53237d;
case 0x53237f:goto L53237f;
case 0x532386:goto L532386;
case 0x53238a:c.instructions+=1;goto B53238a;
case 0x53238c:goto L53238c;
case 0x532390:c.instructions+=2;goto B532390;
case 0x532397:c.instructions+=1;goto B532397;
case 0x532399:goto L532399;
case 0x5323a0:goto L5323a0;
case 0x5323a4:c.instructions+=1;goto B5323a4;
case 0x5323a6:goto L5323a6;
case 0x5323aa:c.instructions+=2;goto B5323aa;
case 0x5323b1:c.instructions+=1;goto B5323b1;
case 0x5323b3:goto L5323b3;
case 0x5323ba:goto L5323ba;
case 0x5323be:c.instructions+=1;goto B5323be;
case 0x5323c0:goto L5323c0;
case 0x5323c4:c.instructions+=2;goto B5323c4;
case 0x5323cb:c.instructions+=1;goto B5323cb;
case 0x5323cd:goto L5323cd;
case 0x5323d4:goto L5323d4;
case 0x5323d8:c.instructions+=8;goto B5323d8;
case 0x5323db:c.instructions+=7;goto B5323db;
case 0x5323e1:c.instructions+=6;goto B5323e1;
case 0x5323e5:c.instructions+=5;goto B5323e5;
case 0x5323eb:c.instructions+=4;goto B5323eb;
case 0x5323ef:c.instructions+=3;goto B5323ef;
case 0x5323f1:c.instructions+=2;goto B5323f1;
case 0x5323f4:c.instructions+=1;goto B5323f4;
case 0x5323f6:goto L5323f6;
case 0x5323fd:goto L5323fd;
case 0x5323ff:c.instructions+=1;goto B5323ff;
case 0x532401:goto L532401;
case 0x532406:c.instructions+=1;goto B532406;
case 0x532408:goto L532408;
case 0x53240d:c.instructions+=1;goto B53240d;
case 0x53240f:goto L53240f;
case 0x532414:goto L532414;
case 0x532419:c.instructions+=5;goto B532419;
case 0x53241f:c.instructions+=4;goto B53241f;
case 0x532420:c.instructions+=3;goto B532420;
case 0x532422:c.instructions+=2;goto B532422;
case 0x532426:c.instructions+=1;goto B532426;
case 0x53242b:goto L53242b;
case 0x53242e:c.instructions+=5;goto B53242e;
case 0x53242f:c.instructions+=4;goto B53242f;
case 0x532433:c.instructions+=3;goto B532433;
case 0x532435:c.instructions+=2;goto B532435;
case 0x532436:c.instructions+=1;goto B532436;
case 0x53243b:goto L53243b;
case 0x53243f:c.instructions+=4;goto B53243f;
case 0x532443:c.instructions+=3;goto B532443;
case 0x532444:c.instructions+=2;goto B532444;
case 0x532445:c.instructions+=1;goto B532445;
case 0x53244a:goto L53244a;
case 0x53244d:c.instructions+=3;goto B53244d;
case 0x532450:c.instructions+=2;goto B532450;
case 0x532452:c.instructions+=1;goto B532452;
case 0x532458:goto L532458;
case 0x53245d:c.instructions+=2;goto B53245d;
case 0x53245f:c.instructions+=1;goto B53245f;
case 0x532461:goto L532461;
case 0x532466:c.instructions+=1;goto B532466;
case 0x532468:goto L532468;
case 0x53246d:c.instructions+=1;goto B53246d;
case 0x532472:goto L532472;
case 0x532474:c.instructions+=1;goto B532474;
case 0x532476:goto L532476;
case 0x53247b:c.instructions+=1;goto B53247b;
case 0x532480:goto L532480;
case 0x532482:goto L532482;
case 0x532485:c.instructions+=5;goto B532485;
case 0x532489:c.instructions+=4;goto B532489;
case 0x53248e:c.instructions+=3;goto B53248e;
case 0x532493:c.instructions+=2;goto B532493;
case 0x53249d:c.instructions+=1;goto B53249d;
case 0x5324a2:goto L5324a2;
case 0x5324a3:c.instructions+=5;goto B5324a3;
case 0x5324a7:c.instructions+=4;goto B5324a7;
case 0x5324a8:c.instructions+=3;goto B5324a8;
case 0x5324ad:c.instructions+=2;goto B5324ad;
case 0x5324b8:c.instructions+=1;goto B5324b8;
case 0x5324bd:goto L5324bd;
case 0x5324bf:c.instructions+=8;goto B5324bf;
case 0x5324c1:c.instructions+=7;goto B5324c1;
case 0x5324c2:c.instructions+=6;goto B5324c2;
case 0x5324c6:c.instructions+=5;goto B5324c6;
case 0x5324c7:c.instructions+=4;goto B5324c7;
case 0x5324c9:c.instructions+=3;goto B5324c9;
case 0x5324cb:c.instructions+=2;goto B5324cb;
case 0x5324d2:c.instructions+=1;goto B5324d2;
case 0x5324d7:goto L5324d7;
case 0x5324de:c.instructions+=4;goto B5324de;
case 0x5324df:c.instructions+=3;goto B5324df;
case 0x5324e4:c.instructions+=2;goto B5324e4;
case 0x5324ec:c.instructions+=1;goto B5324ec;
case 0x5324f1:goto L5324f1;
case 0x5324f2:c.instructions+=1;goto B5324f2;
case 0x5324f7:goto L5324f7;
case 0x5324fa:c.instructions+=1;goto B5324fa;
case 0x5324ff:goto L5324ff;
case 0x532503:c.instructions+=2;goto B532503;
case 0x532506:c.instructions+=1;goto B532506;
case 0x532508:goto L532508;
case 0x53250f:goto L53250f;
case 0x532511:c.instructions+=1;goto B532511;
case 0x532513:goto L532513;
case 0x532515:c.instructions+=1;goto B532515;
case 0x532517:goto L532517;
case 0x532519:goto L532519;
case 0x53251e:goto L53251e;
case 0x532521:goto L532521;
case 0x532528:c.instructions+=2;goto B532528;
case 0x532530:c.instructions+=1;goto B532530;
case 0x532535:goto L532535;
case 0x53253c:c.instructions+=2;goto B53253c;
case 0x532547:c.instructions+=1;goto B532547;
case 0x53254c:goto L53254c;
case 0x532553:c.instructions+=2;goto B532553;
case 0x532557:c.instructions+=1;goto B532557;
case 0x532559:goto L532559;
case 0x532563:c.instructions+=1;goto B532563;
case 0x532565:goto L532565;
case 0x53256c:c.instructions+=1;goto B53256c;
case 0x53256e:goto L53256e;
case 0x532578:goto L532578;
case 0x53257a:c.instructions+=2;goto B53257a;
case 0x53257f:c.instructions+=1;goto B53257f;
case 0x532584:goto L532584;
case 0x532586:c.instructions+=1;goto B532586;
case 0x532588:goto L532588;
case 0x53258f:goto L53258f;
case 0x532596:c.instructions+=7;goto B532596;
case 0x532597:c.instructions+=6;goto B532597;
case 0x532598:c.instructions+=5;goto B532598;
case 0x53259f:c.instructions+=4;goto B53259f;
case 0x5325a0:c.instructions+=3;goto B5325a0;
case 0x5325a2:c.instructions+=2;goto B5325a2;
case 0x5325a3:c.instructions+=1;goto B5325a3;
case 0x5325e0:goto L5325e0;
case 0x5325e1:c.instructions+=6;goto B5325e1;
case 0x5325e3:c.instructions+=5;goto B5325e3;
case 0x5325e6:c.instructions+=4;goto B5325e6;
case 0x5325e8:c.instructions+=3;goto B5325e8;
case 0x5325e9:c.instructions+=2;goto B5325e9;
case 0x5325f3:c.instructions+=1;goto B5325f3;
case 0x5325f8:goto L5325f8;
case 0x5325fe:c.instructions+=4;goto B5325fe;
case 0x532601:c.instructions+=3;goto B532601;
case 0x532603:c.instructions+=2;goto B532603;
case 0x532605:c.instructions+=1;goto B532605;
case 0x532607:goto L532607;
case 0x532610:goto L532610;
case 0x532617:c.instructions+=5;goto B532617;
case 0x53261e:c.instructions+=4;goto B53261e;
case 0x532624:c.instructions+=3;goto B532624;
case 0x532625:c.instructions+=2;goto B532625;
case 0x532627:c.instructions+=1;goto B532627;
case 0x532629:goto L532629;
case 0x532630:c.instructions+=2;goto B532630;
case 0x532631:c.instructions+=1;goto B532631;
case 0x532640:goto L532640;
case 0x532641:c.instructions+=2;goto B532641;
case 0x532643:c.instructions+=1;goto B532643;
case 0x532648:goto L532648;
case 0x53264e:c.instructions+=5;goto B53264e;
case 0x532655:c.instructions+=4;goto B532655;
case 0x53265c:c.instructions+=3;goto B53265c;
case 0x53265e:c.instructions+=2;goto B53265e;
case 0x53265f:c.instructions+=1;goto B53265f;
case 0x532660:goto L532660;
case 0x532666:c.instructions+=1;goto B532666;
case 0x532670:goto L532670;
case 0x532674:c.instructions+=7;goto B532674;
case 0x53267a:c.instructions+=6;goto B53267a;
case 0x53267b:c.instructions+=5;goto B53267b;
case 0x53267d:c.instructions+=4;goto B53267d;
case 0x532683:c.instructions+=3;goto B532683;
case 0x532685:c.instructions+=2;goto B532685;
case 0x532686:c.instructions+=1;goto B532686;
case 0x532688:goto L532688;
case 0x53268d:c.instructions+=3;goto B53268d;
case 0x532691:c.instructions+=2;goto B532691;
case 0x532692:c.instructions+=1;goto B532692;
case 0x532697:goto L532697;
case 0x532699:goto L532699;
case 0x53269d:c.instructions+=2;goto B53269d;
case 0x53269e:c.instructions+=1;goto B53269e;
case 0x5326a3:goto L5326a3;
case 0x5326a6:goto L5326a6;
case 0x5326a8:c.instructions+=2;goto B5326a8;
case 0x5326ad:c.instructions+=1;goto B5326ad;
case 0x5326af:goto L5326af;
case 0x5326b0:goto L5326b0;
case 0x5326b1:c.instructions+=2;goto B5326b1;
case 0x5326b7:c.instructions+=1;goto B5326b7;
case 0x5326b9:goto L5326b9;
case 0x5326bc:c.instructions+=3;goto B5326bc;
case 0x5326bd:c.instructions+=2;goto B5326bd;
case 0x5326bf:c.instructions+=1;goto B5326bf;
case 0x5326c1:goto L5326c1;
case 0x5326c2:c.instructions+=2;goto B5326c2;
case 0x5326c4:c.instructions+=1;goto B5326c4;
case 0x5326c9:goto L5326c9;
case 0x5326cb:c.instructions+=4;goto B5326cb;
case 0x5326cf:c.instructions+=3;goto B5326cf;
case 0x5326d0:c.instructions+=2;goto B5326d0;
case 0x5326d1:c.instructions+=1;goto B5326d1;
case 0x5326d6:goto L5326d6;
case 0x5326d9:c.instructions+=4;goto B5326d9;
case 0x5326db:c.instructions+=3;goto B5326db;
case 0x5326dc:c.instructions+=2;goto B5326dc;
case 0x5326e2:c.instructions+=1;goto B5326e2;
case 0x5326f0:goto L5326f0;
case 0x5326f2:c.instructions+=12;goto B5326f2;
case 0x5326f7:c.instructions+=11;goto B5326f7;
case 0x5326fd:c.instructions+=10;goto B5326fd;
case 0x5326fe:c.instructions+=9;goto B5326fe;
case 0x532705:c.instructions+=8;goto B532705;
case 0x532706:c.instructions+=7;goto B532706;
case 0x532707:c.instructions+=6;goto B532707;
case 0x532709:c.instructions+=5;goto B532709;
case 0x53270d:c.instructions+=4;goto B53270d;
case 0x532713:c.instructions+=3;goto B532713;
case 0x532716:c.instructions+=2;goto B532716;
case 0x53271e:c.instructions+=1;goto B53271e;
case 0x532723:goto L532723;
case 0x532727:c.instructions+=5;goto B532727;
case 0x53272d:c.instructions+=4;goto B53272d;
case 0x53272e:c.instructions+=3;goto B53272e;
case 0x532735:c.instructions+=2;goto B532735;
case 0x532738:c.instructions+=1;goto B532738;
case 0x532740:goto L532740;
case 0x532742:c.instructions+=12;goto B532742;
case 0x532747:c.instructions+=11;goto B532747;
case 0x53274d:c.instructions+=10;goto B53274d;
case 0x53274e:c.instructions+=9;goto B53274e;
case 0x532755:c.instructions+=8;goto B532755;
case 0x532756:c.instructions+=7;goto B532756;
case 0x532757:c.instructions+=6;goto B532757;
case 0x532758:c.instructions+=5;goto B532758;
case 0x53275a:c.instructions+=4;goto B53275a;
case 0x53275e:c.instructions+=3;goto B53275e;
case 0x532761:c.instructions+=2;goto B532761;
case 0x532766:c.instructions+=1;goto B532766;
case 0x532768:goto L532768;
case 0x53276b:c.instructions+=6;goto B53276b;
case 0x53276e:c.instructions+=5;goto B53276e;
case 0x532770:c.instructions+=4;goto B532770;
case 0x532773:c.instructions+=3;goto B532773;
case 0x532776:c.instructions+=2;goto B532776;
case 0x532777:c.instructions+=1;goto B532777;
case 0x532779:goto L532779;
case 0x53277b:c.instructions+=1;goto B53277b;
case 0x532780:goto L532780;
case 0x532786:c.instructions+=1;goto B532786;
case 0x53278b:goto L53278b;
case 0x532790:c.instructions+=17;goto B532790;
case 0x532795:c.instructions+=16;goto B532795;
case 0x532797:c.instructions+=15;goto B532797;
case 0x53279c:c.instructions+=14;goto B53279c;
case 0x5327a2:c.instructions+=13;goto B5327a2;
case 0x5327a3:c.instructions+=12;goto B5327a3;
case 0x5327a7:c.instructions+=11;goto B5327a7;
case 0x5327b1:c.instructions+=10;goto B5327b1;
case 0x5327b7:c.instructions+=9;goto B5327b7;
case 0x5327bd:c.instructions+=8;goto B5327bd;
case 0x5327c3:c.instructions+=7;goto B5327c3;
case 0x5327c9:c.instructions+=6;goto B5327c9;
case 0x5327cf:c.instructions+=5;goto B5327cf;
case 0x5327d5:c.instructions+=4;goto B5327d5;
case 0x5327db:c.instructions+=3;goto B5327db;
case 0x5327e1:c.instructions+=2;goto B5327e1;
case 0x5327e7:c.instructions+=1;goto B5327e7;
case 0x5327ec:goto L5327ec;
case 0x5327f2:c.instructions+=6;goto B5327f2;
case 0x5327f8:c.instructions+=5;goto B5327f8;
case 0x5327fe:c.instructions+=4;goto B5327fe;
case 0x532804:c.instructions+=3;goto B532804;
case 0x53280a:c.instructions+=2;goto B53280a;
case 0x532810:c.instructions+=1;goto B532810;
case 0x532815:goto L532815;
case 0x532819:c.instructions+=6;goto B532819;
case 0x53281b:c.instructions+=5;goto B53281b;
case 0x53281c:c.instructions+=4;goto B53281c;
case 0x53281d:c.instructions+=3;goto B53281d;
case 0x532824:c.instructions+=2;goto B532824;
case 0x532827:c.instructions+=1;goto B532827;
case 0x532830:goto L532830;
case 0x532831:c.instructions+=14;goto B532831;
case 0x532833:c.instructions+=13;goto B532833;
case 0x532834:c.instructions+=12;goto B532834;
case 0x532836:c.instructions+=11;goto B532836;
case 0x532837:c.instructions+=10;goto B532837;
case 0x53283d:c.instructions+=9;goto B53283d;
case 0x532847:c.instructions+=8;goto B532847;
case 0x53284d:c.instructions+=7;goto B53284d;
case 0x532853:c.instructions+=6;goto B532853;
case 0x532859:c.instructions+=5;goto B532859;
case 0x53285f:c.instructions+=4;goto B53285f;
case 0x532865:c.instructions+=3;goto B532865;
case 0x53286b:c.instructions+=2;goto B53286b;
case 0x532871:c.instructions+=1;goto B532871;
case 0x532876:goto L532876;
case 0x532879:c.instructions+=7;goto B532879;
case 0x53287b:c.instructions+=6;goto B53287b;
case 0x53287e:c.instructions+=5;goto B53287e;
case 0x532881:c.instructions+=4;goto B532881;
case 0x532884:c.instructions+=3;goto B532884;
case 0x532887:c.instructions+=2;goto B532887;
case 0x532888:c.instructions+=1;goto B532888;
case 0x53288a:goto L53288a;
case 0x532894:c.instructions+=14;goto B532894;
case 0x53289a:c.instructions+=13;goto B53289a;
case 0x5328a4:c.instructions+=12;goto B5328a4;
case 0x5328aa:c.instructions+=11;goto B5328aa;
case 0x5328b0:c.instructions+=10;goto B5328b0;
case 0x5328b6:c.instructions+=9;goto B5328b6;
case 0x5328bc:c.instructions+=8;goto B5328bc;
case 0x5328c2:c.instructions+=7;goto B5328c2;
case 0x5328c8:c.instructions+=6;goto B5328c8;
case 0x5328ce:c.instructions+=5;goto B5328ce;
case 0x5328d4:c.instructions+=4;goto B5328d4;
case 0x5328da:c.instructions+=3;goto B5328da;
case 0x5328dc:c.instructions+=2;goto B5328dc;
case 0x5328de:c.instructions+=1;goto B5328de;
case 0x5328e3:goto L5328e3;
case 0x5328e5:goto L5328e5;
case 0x5328eb:c.instructions+=5;goto B5328eb;
case 0x5328f1:c.instructions+=4;goto B5328f1;
case 0x5328f7:c.instructions+=3;goto B5328f7;
case 0x5328fd:c.instructions+=2;goto B5328fd;
case 0x532903:c.instructions+=1;goto B532903;
case 0x532908:goto L532908;
case 0x53290d:goto L53290d;
case 0x532913:c.instructions+=5;goto B532913;
case 0x532917:c.instructions+=4;goto B532917;
case 0x53291d:c.instructions+=3;goto B53291d;
case 0x532923:c.instructions+=2;goto B532923;
case 0x532929:c.instructions+=1;goto B532929;
case 0x53292b:goto L53292b;
case 0x532930:c.instructions+=1;goto B532930;
case 0x532935:goto L532935;
case 0x53293a:c.instructions+=3;goto B53293a;
case 0x53293d:c.instructions+=2;goto B53293d;
case 0x53293f:c.instructions+=1;goto B53293f;
case 0x532940:goto L532940;
case 0x532943:c.instructions+=2;goto B532943;
case 0x532945:c.instructions+=1;goto B532945;
case 0x532947:goto L532947;
case 0x532949:c.instructions+=1;goto B532949;
case 0x53294b:goto L53294b;
case 0x53294d:goto L53294d;
case 0x532950:c.instructions+=5;goto B532950;
case 0x532952:c.instructions+=4;goto B532952;
case 0x532955:c.instructions+=3;goto B532955;
case 0x532956:c.instructions+=2;goto B532956;
case 0x532958:c.instructions+=1;goto B532958;
case 0x53295a:goto L53295a;
case 0x53295b:c.instructions+=4;goto B53295b;
case 0x532961:c.instructions+=3;goto B532961;
case 0x532963:c.instructions+=2;goto B532963;
case 0x532969:c.instructions+=1;goto B532969;
case 0x532970:goto L532970;
case 0x532971:c.instructions+=2;goto B532971;
case 0x532973:c.instructions+=1;goto B532973;
case 0x532978:goto L532978;
case 0x532979:c.instructions+=3;goto B532979;
case 0x53297f:c.instructions+=2;goto B53297f;
case 0x532982:c.instructions+=1;goto B532982;
case 0x532984:goto L532984;
case 0x53298a:c.instructions+=4;goto B53298a;
case 0x532990:c.instructions+=3;goto B532990;
case 0x532996:c.instructions+=2;goto B532996;
case 0x532998:c.instructions+=1;goto B532998;
case 0x53299d:goto L53299d;
case 0x53299f:goto L53299f;
case 0x5329a1:c.instructions+=2;goto B5329a1;
case 0x5329a7:c.instructions+=1;goto B5329a7;
case 0x5329ac:goto L5329ac;
case 0x5329ae:goto L5329ae;
case 0x5329b0:c.instructions+=9;goto B5329b0;
case 0x5329b2:c.instructions+=8;goto B5329b2;
case 0x5329b5:c.instructions+=7;goto B5329b5;
case 0x5329b8:c.instructions+=6;goto B5329b8;
case 0x5329bb:c.instructions+=5;goto B5329bb;
case 0x5329c1:c.instructions+=4;goto B5329c1;
case 0x5329c7:c.instructions+=3;goto B5329c7;
case 0x5329c9:c.instructions+=2;goto B5329c9;
case 0x5329ca:c.instructions+=1;goto B5329ca;
case 0x5329cc:goto L5329cc;
case 0x5329d1:goto L5329d1;
case 0x5329d3:c.instructions+=1;goto B5329d3;
case 0x5329d5:goto L5329d5;
case 0x5329d6:c.instructions+=3;goto B5329d6;
case 0x5329dc:c.instructions+=2;goto B5329dc;
case 0x5329de:c.instructions+=1;goto B5329de;
case 0x5329e0:goto L5329e0;
case 0x5329e2:goto L5329e2;
case 0x5329e8:c.instructions+=1;goto B5329e8;
case 0x5329ee:goto L5329ee;
case 0x5329f3:c.instructions+=8;goto B5329f3;
case 0x5329f9:c.instructions+=7;goto B5329f9;
case 0x5329ff:c.instructions+=6;goto B5329ff;
case 0x532a05:c.instructions+=5;goto B532a05;
case 0x532a0b:c.instructions+=4;goto B532a0b;
case 0x532a11:c.instructions+=3;goto B532a11;
case 0x532a17:c.instructions+=2;goto B532a17;
case 0x532a1c:c.instructions+=1;goto B532a1c;
case 0x532a1e:goto L532a1e;
case 0x532a20:goto L532a20;
case 0x532a26:c.instructions+=9;goto B532a26;
case 0x532a2c:c.instructions+=8;goto B532a2c;
case 0x532a32:c.instructions+=7;goto B532a32;
case 0x532a33:c.instructions+=6;goto B532a33;
case 0x532a39:c.instructions+=5;goto B532a39;
case 0x532a3f:c.instructions+=4;goto B532a3f;
case 0x532a45:c.instructions+=3;goto B532a45;
case 0x532a46:c.instructions+=2;goto B532a46;
case 0x532a47:c.instructions+=1;goto B532a47;
case 0x532a50:goto L532a50;
case 0x532a56:c.instructions+=3;goto B532a56;
case 0x532a58:c.instructions+=2;goto B532a58;
case 0x532a59:c.instructions+=1;goto B532a59;
case 0x532a5b:goto L532a5b;
case 0x532a5f:c.instructions+=2;goto B532a5f;
case 0x532a62:c.instructions+=1;goto B532a62;
case 0x532a68:goto L532a68;
case 0x532a6b:c.instructions+=2;goto B532a6b;
case 0x532a6d:c.instructions+=1;goto B532a6d;
case 0x532a6f:goto L532a6f;
case 0x532a75:c.instructions+=2;goto B532a75;
case 0x532a77:c.instructions+=1;goto B532a77;
case 0x532a79:goto L532a79;
case 0x532a7c:c.instructions+=4;goto B532a7c;
case 0x532a7f:c.instructions+=3;goto B532a7f;
case 0x532a82:c.instructions+=2;goto B532a82;
case 0x532a84:c.instructions+=1;goto B532a84;
case 0x532a86:goto L532a86;
case 0x532a89:c.instructions+=2;goto B532a89;
case 0x532a8b:c.instructions+=1;goto B532a8b;
case 0x532a8d:goto L532a8d;
case 0x532a93:c.instructions+=2;goto B532a93;
case 0x532a95:c.instructions+=1;goto B532a95;
case 0x532a97:goto L532a97;
case 0x532a9a:c.instructions+=4;goto B532a9a;
case 0x532a9d:c.instructions+=3;goto B532a9d;
case 0x532aa0:c.instructions+=2;goto B532aa0;
case 0x532aa2:c.instructions+=1;goto B532aa2;
case 0x532aa4:goto L532aa4;
case 0x532aa6:c.instructions+=2;goto B532aa6;
case 0x532aa7:c.instructions+=1;goto B532aa7;
case 0x532aaa:goto L532aaa;
case 0x532aae:c.instructions+=2;goto B532aae;
case 0x532ab1:c.instructions+=1;goto B532ab1;
case 0x532ab3:goto L532ab3;
case 0x532ab6:c.instructions+=2;goto B532ab6;
case 0x532ab8:c.instructions+=1;goto B532ab8;
case 0x532aba:goto L532aba;
case 0x532abb:c.instructions+=3;goto B532abb;
case 0x532abf:c.instructions+=2;goto B532abf;
case 0x532ac5:c.instructions+=1;goto B532ac5;
case 0x532aca:goto L532aca;
case 0x532acd:c.instructions+=2;goto B532acd;
case 0x532acf:c.instructions+=1;goto B532acf;
case 0x532ad1:goto L532ad1;
case 0x532ad2:c.instructions+=2;goto B532ad2;
case 0x532ad6:c.instructions+=1;goto B532ad6;
case 0x532adb:goto L532adb;
case 0x532ade:c.instructions+=2;goto B532ade;
case 0x532ae0:c.instructions+=1;goto B532ae0;
case 0x532ae2:goto L532ae2;
case 0x532ae3:c.instructions+=3;goto B532ae3;
case 0x532ae7:c.instructions+=2;goto B532ae7;
case 0x532aed:c.instructions+=1;goto B532aed;
case 0x532af2:goto L532af2;
case 0x532af5:c.instructions+=2;goto B532af5;
case 0x532af7:c.instructions+=1;goto B532af7;
case 0x532af9:goto L532af9;
case 0x532afa:c.instructions+=3;goto B532afa;
case 0x532afe:c.instructions+=2;goto B532afe;
case 0x532b04:c.instructions+=1;goto B532b04;
case 0x532b09:goto L532b09;
case 0x532b0b:c.instructions+=2;goto B532b0b;
case 0x532b0c:c.instructions+=1;goto B532b0c;
case 0x532b10:goto L532b10;
case 0x532b11:c.instructions+=13;goto B532b11;
case 0x532b12:c.instructions+=12;goto B532b12;
case 0x532b16:c.instructions+=11;goto B532b16;
case 0x532b18:c.instructions+=10;goto B532b18;
case 0x532b1a:c.instructions+=9;goto B532b1a;
case 0x532b1c:c.instructions+=8;goto B532b1c;
case 0x532b22:c.instructions+=7;goto B532b22;
case 0x532b2c:c.instructions+=6;goto B532b2c;
case 0x532b36:c.instructions+=5;goto B532b36;
case 0x532b40:c.instructions+=4;goto B532b40;
case 0x532b43:c.instructions+=3;goto B532b43;
case 0x532b44:c.instructions+=2;goto B532b44;
case 0x532b4a:c.instructions+=1;goto B532b4a;
case 0x532b4f:goto L532b4f;
case 0x532b52:c.instructions+=1;goto B532b52;
case 0x532b58:goto L532b58;
case 0x532b5b:c.instructions+=2;goto B532b5b;
case 0x532b5d:c.instructions+=1;goto B532b5d;
case 0x532b5f:goto L532b5f;
case 0x532b60:c.instructions+=5;goto B532b60;
case 0x532b66:c.instructions+=4;goto B532b66;
case 0x532b6c:c.instructions+=3;goto B532b6c;
case 0x532b6d:c.instructions+=2;goto B532b6d;
case 0x532b6f:c.instructions+=1;goto B532b6f;
case 0x532b74:goto L532b74;
case 0x532b75:c.instructions+=2;goto B532b75;
case 0x532b76:c.instructions+=1;goto B532b76;
case 0x532b79:goto L532b79;
case 0x532b7c:c.instructions+=2;goto B532b7c;
case 0x532b7e:c.instructions+=1;goto B532b7e;
case 0x532b80:goto L532b80;
case 0x532b86:c.instructions+=5;goto B532b86;
case 0x532b87:c.instructions+=4;goto B532b87;
case 0x532b88:c.instructions+=3;goto B532b88;
case 0x532b8a:c.instructions+=2;goto B532b8a;
case 0x532b90:c.instructions+=1;goto B532b90;
case 0x532b95:goto L532b95;
case 0x532b9b:c.instructions+=3;goto B532b9b;
case 0x532b9c:c.instructions+=2;goto B532b9c;
case 0x532b9e:c.instructions+=1;goto B532b9e;
case 0x532ba3:goto L532ba3;
case 0x532ba5:c.instructions+=1;goto B532ba5;
case 0x532ba7:goto L532ba7;
case 0x532ba8:c.instructions+=2;goto B532ba8;
case 0x532bae:c.instructions+=1;goto B532bae;
case 0x532bb3:goto L532bb3;
case 0x532bb4:c.instructions+=2;goto B532bb4;
case 0x532bb5:c.instructions+=1;goto B532bb5;
case 0x532bb8:goto L532bb8;
case 0x532bbb:c.instructions+=2;goto B532bbb;
case 0x532bbd:c.instructions+=1;goto B532bbd;
case 0x532bbf:goto L532bbf;
case 0x532bc5:c.instructions+=5;goto B532bc5;
case 0x532bc6:c.instructions+=4;goto B532bc6;
case 0x532bc7:c.instructions+=3;goto B532bc7;
case 0x532bcd:c.instructions+=2;goto B532bcd;
case 0x532bd3:c.instructions+=1;goto B532bd3;
case 0x532bd8:goto L532bd8;
case 0x532bde:c.instructions+=2;goto B532bde;
case 0x532be0:c.instructions+=1;goto B532be0;
case 0x532be2:goto L532be2;
case 0x532be8:c.instructions+=6;goto B532be8;
case 0x532beb:c.instructions+=5;goto B532beb;
case 0x532bee:c.instructions+=4;goto B532bee;
case 0x532bf0:c.instructions+=3;goto B532bf0;
case 0x532bf3:c.instructions+=2;goto B532bf3;
case 0x532bf5:c.instructions+=1;goto B532bf5;
case 0x532bf7:goto L532bf7;
case 0x532bf8:c.instructions+=3;goto B532bf8;
case 0x532c02:c.instructions+=2;goto B532c02;
case 0x532c03:c.instructions+=1;goto B532c03;
case 0x532c06:goto L532c06;
case 0x532c09:c.instructions+=2;goto B532c09;
case 0x532c0b:c.instructions+=1;goto B532c0b;
case 0x532c0d:goto L532c0d;
case 0x532c13:goto L532c13;
case 0x532c14:c.instructions+=2;goto B532c14;
case 0x532c15:c.instructions+=1;goto B532c15;
case 0x532c20:goto L532c20;
case 0x532c21:c.instructions+=6;goto B532c21;
case 0x532c25:c.instructions+=5;goto B532c25;
case 0x532c28:c.instructions+=4;goto B532c28;
case 0x532c2a:c.instructions+=3;goto B532c2a;
case 0x532c2b:c.instructions+=2;goto B532c2b;
case 0x532c2d:c.instructions+=1;goto B532c2d;
case 0x532c2f:goto L532c2f;
case 0x532c30:c.instructions+=2;goto B532c30;
case 0x532c36:c.instructions+=1;goto B532c36;
case 0x532c3b:goto L532c3b;
case 0x532c3d:c.instructions+=1;goto B532c3d;
case 0x532c3f:goto L532c3f;
case 0x532c42:c.instructions+=3;goto B532c42;
case 0x532c44:c.instructions+=2;goto B532c44;
case 0x532c46:c.instructions+=1;goto B532c46;
case 0x532c48:goto L532c48;
case 0x532c4a:c.instructions+=1;goto B532c4a;
case 0x532c4f:goto L532c4f;
case 0x532c51:c.instructions+=4;goto B532c51;
case 0x532c52:c.instructions+=3;goto B532c52;
case 0x532c55:c.instructions+=2;goto B532c55;
case 0x532c56:c.instructions+=1;goto B532c56;
case 0x532c59:goto L532c59;
case 0x532c5b:goto L532c5b;
case 0x532c5c:c.instructions+=2;goto B532c5c;
case 0x532c5d:c.instructions+=1;goto B532c5d;
case 0x532c60:goto L532c60;
case 0x532c61:c.instructions+=4;goto B532c61;
case 0x532c63:c.instructions+=3;goto B532c63;
case 0x532c69:c.instructions+=2;goto B532c69;
case 0x532c6b:c.instructions+=1;goto B532c6b;
case 0x532c6d:goto L532c6d;
case 0x532c6e:c.instructions+=4;goto B532c6e;
case 0x532c74:c.instructions+=3;goto B532c74;
case 0x532c77:c.instructions+=2;goto B532c77;
case 0x532c79:c.instructions+=1;goto B532c79;
case 0x532c7b:goto L532c7b;
case 0x532c7c:c.instructions+=2;goto B532c7c;
case 0x532c81:c.instructions+=1;goto B532c81;
case 0x532c86:goto L532c86;
case 0x532c88:c.instructions+=1;goto B532c88;
case 0x532c8a:goto L532c8a;
case 0x532c8c:c.instructions+=1;goto B532c8c;
case 0x532c91:goto L532c91;
case 0x532c93:c.instructions+=1;goto B532c93;
case 0x532c95:goto L532c95;
case 0x532c9c:c.instructions+=4;goto B532c9c;
case 0x532c9f:c.instructions+=3;goto B532c9f;
case 0x532ca0:c.instructions+=2;goto B532ca0;
case 0x532ca5:c.instructions+=1;goto B532ca5;
case 0x532caa:goto L532caa;
case 0x532cb0:c.instructions+=3;goto B532cb0;
case 0x532cb1:c.instructions+=2;goto B532cb1;
case 0x532cb2:c.instructions+=1;goto B532cb2;
case 0x532cb3:goto L532cb3;
case 0x532cb6:c.instructions+=3;goto B532cb6;
case 0x532cb7:c.instructions+=2;goto B532cb7;
case 0x532cbc:c.instructions+=1;goto B532cbc;
case 0x532cc1:goto L532cc1;
case 0x532cc3:c.instructions+=1;goto B532cc3;
case 0x532cc5:goto L532cc5;
case 0x532ccc:c.instructions+=4;goto B532ccc;
case 0x532ccf:c.instructions+=3;goto B532ccf;
case 0x532cd0:c.instructions+=2;goto B532cd0;
case 0x532cd5:c.instructions+=1;goto B532cd5;
case 0x532cda:goto L532cda;
case 0x532cdb:goto L532cdb;
case 0x532ce1:c.instructions+=2;goto B532ce1;
case 0x532ce2:c.instructions+=1;goto B532ce2;
case 0x532cf0:goto L532cf0;
case 0x532cf1:c.instructions+=6;goto B532cf1;
case 0x532cf3:c.instructions+=5;goto B532cf3;
case 0x532cf9:c.instructions+=4;goto B532cf9;
case 0x532cff:c.instructions+=3;goto B532cff;
case 0x532d06:c.instructions+=2;goto B532d06;
case 0x532d08:c.instructions+=1;goto B532d08;
case 0x532d0a:goto L532d0a;
case 0x532d0c:c.instructions+=1;goto B532d0c;
case 0x532d11:goto L532d11;
case 0x532d15:c.instructions+=5;goto B532d15;
case 0x532d19:c.instructions+=4;goto B532d19;
case 0x532d1f:c.instructions+=3;goto B532d1f;
case 0x532d25:c.instructions+=2;goto B532d25;
case 0x532d2b:c.instructions+=1;goto B532d2b;
case 0x532d32:goto L532d32;
case 0x532d33:c.instructions+=1;goto B532d33;
case 0x532d40:goto L532d40;
case 0x532d44:c.instructions+=5;goto B532d44;
case 0x532d45:c.instructions+=4;goto B532d45;
case 0x532d47:c.instructions+=3;goto B532d47;
case 0x532d48:c.instructions+=2;goto B532d48;
case 0x532d4e:c.instructions+=1;goto B532d4e;
case 0x532d53:goto L532d53;
case 0x532d55:c.instructions+=1;goto B532d55;
case 0x532d57:goto L532d57;
case 0x532d5a:c.instructions+=5;goto B532d5a;
case 0x532d60:c.instructions+=4;goto B532d60;
case 0x532d62:c.instructions+=3;goto B532d62;
case 0x532d64:c.instructions+=2;goto B532d64;
case 0x532d6a:c.instructions+=1;goto B532d6a;
case 0x532d6f:goto L532d6f;
case 0x532d70:c.instructions+=1;goto B532d70;
case 0x532d80:goto L532d80;
case 0x532d81:c.instructions+=7;goto B532d81;
case 0x532d83:c.instructions+=6;goto B532d83;
case 0x532d86:c.instructions+=5;goto B532d86;
case 0x532d87:c.instructions+=4;goto B532d87;
case 0x532d89:c.instructions+=3;goto B532d89;
case 0x532d8f:c.instructions+=2;goto B532d8f;
case 0x532d91:c.instructions+=1;goto B532d91;
case 0x532d93:goto L532d93;
case 0x532d96:c.instructions+=4;goto B532d96;
case 0x532d97:c.instructions+=3;goto B532d97;
case 0x532d9a:c.instructions+=2;goto B532d9a;
case 0x532d9c:c.instructions+=1;goto B532d9c;
case 0x532d9e:goto L532d9e;
case 0x532da1:c.instructions+=2;goto B532da1;
case 0x532da2:c.instructions+=1;goto B532da2;
case 0x532da7:goto L532da7;
case 0x532daa:c.instructions+=2;goto B532daa;
case 0x532dab:c.instructions+=1;goto B532dab;
case 0x532db0:goto L532db0;
case 0x532db3:c.instructions+=2;goto B532db3;
case 0x532db5:c.instructions+=1;goto B532db5;
case 0x532db7:goto L532db7;
case 0x532dbd:c.instructions+=6;goto B532dbd;
case 0x532dc2:c.instructions+=5;goto B532dc2;
case 0x532dc9:c.instructions+=4;goto B532dc9;
case 0x532dd0:c.instructions+=3;goto B532dd0;
case 0x532dd3:c.instructions+=2;goto B532dd3;
case 0x532dd6:c.instructions+=1;goto B532dd6;
case 0x532ddb:goto L532ddb;
case 0x532dde:c.instructions+=2;goto B532dde;
case 0x532de0:c.instructions+=1;goto B532de0;
case 0x532de2:goto L532de2;
case 0x532de5:c.instructions+=3;goto B532de5;
case 0x532de6:c.instructions+=2;goto B532de6;
case 0x532deb:c.instructions+=1;goto B532deb;
case 0x532df0:goto L532df0;
case 0x532df2:c.instructions+=1;goto B532df2;
case 0x532df4:goto L532df4;
case 0x532df7:c.instructions+=3;goto B532df7;
case 0x532df8:c.instructions+=2;goto B532df8;
case 0x532dfd:c.instructions+=1;goto B532dfd;
case 0x532e02:goto L532e02;
case 0x532e03:goto L532e03;
case 0x532e04:c.instructions+=3;goto B532e04;
case 0x532e06:c.instructions+=2;goto B532e06;
case 0x532e07:c.instructions+=1;goto B532e07;
case 0x532e10:goto L532e10;
case 0x532e11:c.instructions+=3;goto B532e11;
case 0x532e16:c.instructions+=2;goto B532e16;
case 0x532e18:c.instructions+=1;goto B532e18;
case 0x532e1d:goto L532e1d;
case 0x532e20:c.instructions+=3;goto B532e20;
case 0x532e21:c.instructions+=2;goto B532e21;
case 0x532e23:c.instructions+=1;goto B532e23;
case 0x532e28:goto L532e28;
case 0x532e29:c.instructions+=1;goto B532e29;
case 0x532e30:goto L532e30;
case 0x532e31:c.instructions+=3;goto B532e31;
case 0x532e33:c.instructions+=2;goto B532e33;
case 0x532e39:c.instructions+=1;goto B532e39;
case 0x532e3e:goto L532e3e;
case 0x532e44:c.instructions+=2;goto B532e44;
case 0x532e45:c.instructions+=1;goto B532e45;
case 0x532e50:goto L532e50;
case 0x532e55:c.instructions+=4;goto B532e55;
case 0x532e57:c.instructions+=3;goto B532e57;
case 0x532e58:c.instructions+=2;goto B532e58;
case 0x532e5a:c.instructions+=1;goto B532e5a;
case 0x532e5c:goto L532e5c;
case 0x532e5e:c.instructions+=2;goto B532e5e;
case 0x532e64:c.instructions+=1;goto B532e64;
case 0x532e69:goto L532e69;
case 0x532e6b:c.instructions+=1;goto B532e6b;
case 0x532e6d:goto L532e6d;
case 0x532e73:c.instructions+=2;goto B532e73;
case 0x532e77:c.instructions+=1;goto B532e77;
case 0x532e79:goto L532e79;
case 0x532e7f:c.instructions+=4;goto B532e7f;
case 0x532e85:c.instructions+=3;goto B532e85;
case 0x532e8c:c.instructions+=2;goto B532e8c;
case 0x532e8e:c.instructions+=1;goto B532e8e;
case 0x532e90:goto L532e90;
case 0x532e94:c.instructions+=2;goto B532e94;
case 0x532e95:c.instructions+=1;goto B532e95;
case 0x532e96:goto L532e96;
case 0x532e99:c.instructions+=2;goto B532e99;
case 0x532e9a:c.instructions+=1;goto B532e9a;
case 0x532e9b:goto L532e9b;
case 0x532e9d:c.instructions+=2;goto B532e9d;
case 0x532e9e:c.instructions+=1;goto B532e9e;
case 0x532ea0:goto L532ea0;
case 0x532ea1:c.instructions+=15;goto B532ea1;
case 0x532ea3:c.instructions+=14;goto B532ea3;
case 0x532ea9:c.instructions+=13;goto B532ea9;
case 0x532eaa:c.instructions+=12;goto B532eaa;
case 0x532eac:c.instructions+=11;goto B532eac;
case 0x532ead:c.instructions+=10;goto B532ead;
case 0x532eaf:c.instructions+=9;goto B532eaf;
case 0x532eb2:c.instructions+=8;goto B532eb2;
case 0x532eb4:c.instructions+=7;goto B532eb4;
case 0x532eba:c.instructions+=6;goto B532eba;
case 0x532ec0:c.instructions+=5;goto B532ec0;
case 0x532ec3:c.instructions+=4;goto B532ec3;
case 0x532ec6:c.instructions+=3;goto B532ec6;
case 0x532ec7:c.instructions+=2;goto B532ec7;
case 0x532eca:c.instructions+=1;goto B532eca;
case 0x532ed0:goto L532ed0;
case 0x532ed3:goto L532ed3;
case 0x532ed9:c.instructions+=2;goto B532ed9;
case 0x532edf:c.instructions+=1;goto B532edf;
case 0x532ee4:goto L532ee4;
case 0x532ee7:c.instructions+=16;goto B532ee7;
case 0x532eeb:c.instructions+=15;goto B532eeb;
case 0x532eed:c.instructions+=14;goto B532eed;
case 0x532eef:c.instructions+=13;goto B532eef;
case 0x532ef1:c.instructions+=12;goto B532ef1;
case 0x532ef7:c.instructions+=11;goto B532ef7;
case 0x532efd:c.instructions+=10;goto B532efd;
case 0x532f07:c.instructions+=9;goto B532f07;
case 0x532f0a:c.instructions+=8;goto B532f0a;
case 0x532f0c:c.instructions+=7;goto B532f0c;
case 0x532f0d:c.instructions+=6;goto B532f0d;
case 0x532f13:c.instructions+=5;goto B532f13;
case 0x532f16:c.instructions+=4;goto B532f16;
case 0x532f1c:c.instructions+=3;goto B532f1c;
case 0x532f22:c.instructions+=2;goto B532f22;
case 0x532f25:c.instructions+=1;goto B532f25;
case 0x532f2b:goto L532f2b;
case 0x532f2e:c.instructions+=4;goto B532f2e;
case 0x532f31:c.instructions+=3;goto B532f31;
case 0x532f33:c.instructions+=2;goto B532f33;
case 0x532f39:c.instructions+=1;goto B532f39;
case 0x532f3b:goto L532f3b;
case 0x532f3d:c.instructions+=1;goto B532f3d;
case 0x532f3f:goto L532f3f;
case 0x532f42:c.instructions+=1;goto B532f42;
case 0x532f44:goto L532f44;
case 0x532f4a:c.instructions+=2;goto B532f4a;
case 0x532f4e:c.instructions+=1;goto B532f4e;
case 0x532f50:goto L532f50;
case 0x532f52:goto L532f52;
case 0x532f54:c.instructions+=26;goto B532f54;
case 0x532f5a:c.instructions+=25;goto B532f5a;
case 0x532f5d:c.instructions+=24;goto B532f5d;
case 0x532f63:c.instructions+=23;goto B532f63;
case 0x532f66:c.instructions+=22;goto B532f66;
case 0x532f6c:c.instructions+=21;goto B532f6c;
case 0x532f6f:c.instructions+=20;goto B532f6f;
case 0x532f75:c.instructions+=19;goto B532f75;
case 0x532f78:c.instructions+=18;goto B532f78;
case 0x532f7e:c.instructions+=17;goto B532f7e;
case 0x532f81:c.instructions+=16;goto B532f81;
case 0x532f87:c.instructions+=15;goto B532f87;
case 0x532f8a:c.instructions+=14;goto B532f8a;
case 0x532f90:c.instructions+=13;goto B532f90;
case 0x532f93:c.instructions+=12;goto B532f93;
case 0x532f99:c.instructions+=11;goto B532f99;
case 0x532f9c:c.instructions+=10;goto B532f9c;
case 0x532fa2:c.instructions+=9;goto B532fa2;
case 0x532fa5:c.instructions+=8;goto B532fa5;
case 0x532fab:c.instructions+=7;goto B532fab;
case 0x532fae:c.instructions+=6;goto B532fae;
case 0x532fb4:c.instructions+=5;goto B532fb4;
case 0x532fba:c.instructions+=4;goto B532fba;
case 0x532fbd:c.instructions+=3;goto B532fbd;
case 0x532fbe:c.instructions+=2;goto B532fbe;
case 0x532fc1:c.instructions+=1;goto B532fc1;
case 0x532fc6:goto L532fc6;
case 0x532fc9:c.instructions+=7;goto B532fc9;
case 0x532fcc:c.instructions+=6;goto B532fcc;
case 0x532fd0:c.instructions+=5;goto B532fd0;
case 0x532fd1:c.instructions+=4;goto B532fd1;
case 0x532fd4:c.instructions+=3;goto B532fd4;
case 0x532fd6:c.instructions+=2;goto B532fd6;
case 0x532fd9:c.instructions+=1;goto B532fd9;
case 0x532fdf:goto L532fdf;
case 0x532fe5:c.instructions+=1;goto B532fe5;
case 0x532fe7:goto L532fe7;
case 0x532fea:c.instructions+=1;goto B532fea;
case 0x532fec:goto L532fec;
case 0x532fee:goto L532fee;
case 0x532ff4:c.instructions+=4;goto B532ff4;
case 0x532ff7:c.instructions+=3;goto B532ff7;
case 0x532ff9:c.instructions+=2;goto B532ff9;
case 0x532ffb:c.instructions+=1;goto B532ffb;
case 0x532ffd:goto L532ffd;
default:missing_instruction(c.pc);}
B532002:L532002:{c.instructions+=3;NFSU2_TR(0x532002);
__builtin_memmove((R+0),(R+24),4);
}
B532004:{NFSU2_TR(0x532004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532005:{NFSU2_TR(0x532005);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532010:L532010:{c.instructions+=9;NFSU2_TR(0x532010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B532013:{NFSU2_TR(0x532013);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B532018:{NFSU2_TR(0x532018);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532019:{NFSU2_TR(0x532019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53201a:{NFSU2_TR(0x53201a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B53201c:{NFSU2_TR(0x53201c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53201e:{NFSU2_TR(0x53201e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532020:{NFSU2_TR(0x532020);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532024:{NFSU2_TR(0x532024);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5322d8;}}
}
B53202a:L53202a:{c.instructions+=3;NFSU2_TR(0x53202a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53202b:{NFSU2_TR(0x53202b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53202c:{NFSU2_TR(0x53202c);
__builtin_memmove((R+16),(R+16),4);
}
B532030:L532030:{c.instructions+=3;NFSU2_TR(0x532030);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532031:{NFSU2_TR(0x532031);
w4(R+4,u32(0x89e7a0ull));
}
B532036:{NFSU2_TR(0x532036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53203bull));
TAIL_STATIC(0x5ed900u,5ed);
}
B53203b:L53203b:{c.instructions+=4;NFSU2_TR(0x53203b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53203e:{NFSU2_TR(0x53203e);
w4(R+12,u32(0x1ull));
}
B532043:{NFSU2_TR(0x532043);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B532045:{NFSU2_TR(0x532045);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532098;}}
}
B532047:L532047:{c.instructions+=3;NFSU2_TR(0x532047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532048:{NFSU2_TR(0x532048);
w4(R+4,u32(0x89e7a0ull));
}
B53204d:{NFSU2_TR(0x53204d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532052ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B532052:L532052:{c.instructions+=4;NFSU2_TR(0x532052);
__builtin_memmove((R+24),(R+0),4);
}
B532054:{NFSU2_TR(0x532054);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B532057:{NFSU2_TR(0x532057);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532059:{NFSU2_TR(0x532059);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532063;}}
}
B53205b:L53205b:{c.instructions+=3;NFSU2_TR(0x53205b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53205f:{NFSU2_TR(0x53205f);
__builtin_memmove((R+20),(R+24),4);
}
B532061:{NFSU2_TR(0x532061);
{goto L532098;}
}
B532063:L532063:{c.instructions+=2;NFSU2_TR(0x532063);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B532069:{NFSU2_TR(0x532069);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5320aa;}}
}
B53206b:L53206b:{c.instructions+=4;NFSU2_TR(0x53206b);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532070:{NFSU2_TR(0x532070);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532072:{NFSU2_TR(0x532072);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532075:{NFSU2_TR(0x532075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53207aull));
TAIL_STATIC(0x5b6990u,5b6);
}
B53207a:L53207a:{c.instructions+=5;NFSU2_TR(0x53207a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53207e:{NFSU2_TR(0x53207e);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532083:{NFSU2_TR(0x532083);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532085:{NFSU2_TR(0x532085);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532088:{NFSU2_TR(0x532088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53208dull));
TAIL_STATIC(0x5b6990u,5b6);
}
B53208d:L53208d:{c.instructions+=4;NFSU2_TR(0x53208d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B532091:{NFSU2_TR(0x532091);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B532093:{NFSU2_TR(0x532093);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B532096:{NFSU2_TR(0x532096);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5320a4;}}
}
B532098:L532098:{c.instructions+=4;NFSU2_TR(0x532098);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B53209d:{NFSU2_TR(0x53209d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53209e:{NFSU2_TR(0x53209e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5320a0:{NFSU2_TR(0x5320a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532030u);}goto L532030;}}
}
B5320a2:L5320a2:{c.instructions+=1;NFSU2_TR(0x5320a2);
{goto L5320aa;}
}
B5320a4:L5320a4:{c.instructions+=2;NFSU2_TR(0x5320a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5320a8:{NFSU2_TR(0x5320a8);
__builtin_memmove((R+20),(R+24),4);
}
B5320aa:L5320aa:{c.instructions+=2;NFSU2_TR(0x5320aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5320ac:{NFSU2_TR(0x5320ac);
if(r1(R+518)){{goto L5322d6;}}
}
B5320b2:L5320b2:{c.instructions+=9;NFSU2_TR(0x5320b2);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B5320b7:{NFSU2_TR(0x5320b7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5320b9:{NFSU2_TR(0x5320b9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5320bb:{NFSU2_TR(0x5320bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5320bd:{NFSU2_TR(0x5320bd);
__builtin_memmove((R+24),(R+12),4);
}
B5320bf:{NFSU2_TR(0x5320bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5320c7:{NFSU2_TR(0x5320c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5320cb:{NFSU2_TR(0x5320cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5320cf:{NFSU2_TR(0x5320cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5322d6;}}
}
B5320d5:L5320d5:{c.instructions+=4;NFSU2_TR(0x5320d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5320d9:{NFSU2_TR(0x5320d9);
w4(R+0,u32(0xacf47d52ull));
}
B5320de:{NFSU2_TR(0x5320de);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5320e0:{NFSU2_TR(0x5320e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5320e4:L5320e4:{c.instructions+=3;NFSU2_TR(0x5320e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5320e5:{NFSU2_TR(0x5320e5);
w4(R+4,u32(0x89e7a0ull));
}
B5320ea:{NFSU2_TR(0x5320ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5320efull));
TAIL_STATIC(0x5ed900u,5ed);
}
B5320ef:L5320ef:{c.instructions+=2;NFSU2_TR(0x5320ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5320f3:{NFSU2_TR(0x5320f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5322c4;}}
}
B5320f9:L5320f9:{c.instructions+=3;NFSU2_TR(0x5320f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5320fa:{NFSU2_TR(0x5320fa);
w4(R+4,u32(0x89e7a0ull));
}
B5320ff:{NFSU2_TR(0x5320ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532104ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B532104:L532104:{c.instructions+=7;NFSU2_TR(0x532104);
{u32 ea_=u32(u32(8366736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53210a:{NFSU2_TR(0x53210a);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B532110:{NFSU2_TR(0x532110);
__builtin_memmove((R+12),(R+0),4);
}
B532112:{NFSU2_TR(0x532112);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B532115:{NFSU2_TR(0x532115);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B532117:{NFSU2_TR(0x532117);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53211a:{NFSU2_TR(0x53211a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532127;}}
}
B53211c:L53211c:{c.instructions+=2;NFSU2_TR(0x53211c);
{u32 ea_=u32(u32(8366736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B532122:{NFSU2_TR(0x532122);
{goto L5321c8;}
}
B532127:L532127:{c.instructions+=5;NFSU2_TR(0x532127);
{u32 ea_=u32(u32(8366740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53212d:{NFSU2_TR(0x53212d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B532133:{NFSU2_TR(0x532133);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B532135:{NFSU2_TR(0x532135);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532138:{NFSU2_TR(0x532138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53214a;}}
}
B53213a:L53213a:{c.instructions+=2;NFSU2_TR(0x53213a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53213d:{NFSU2_TR(0x53213d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53214a;}}
}
B53213f:L53213f:{c.instructions+=2;NFSU2_TR(0x53213f);
{u32 ea_=u32(u32(8366740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B532145:{NFSU2_TR(0x532145);
{goto L5321c8;}
}
B53214a:L53214a:{c.instructions+=5;NFSU2_TR(0x53214a);
{u32 ea_=u32(u32(8366744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B532150:{NFSU2_TR(0x532150);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B532156:{NFSU2_TR(0x532156);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B532158:{NFSU2_TR(0x532158);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53215b:{NFSU2_TR(0x53215b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53216a;}}
}
B53215d:L53215d:{c.instructions+=2;NFSU2_TR(0x53215d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B532160:{NFSU2_TR(0x532160);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53216a;}}
}
B532162:L532162:{c.instructions+=2;NFSU2_TR(0x532162);
{u32 ea_=u32(u32(8366744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B532168:{NFSU2_TR(0x532168);
{goto L5321c8;}
}
B53216a:L53216a:{c.instructions+=5;NFSU2_TR(0x53216a);
{u32 ea_=u32(u32(8366748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B532170:{NFSU2_TR(0x532170);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B532176:{NFSU2_TR(0x532176);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B532178:{NFSU2_TR(0x532178);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53217b:{NFSU2_TR(0x53217b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53218a;}}
}
B53217d:L53217d:{c.instructions+=2;NFSU2_TR(0x53217d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B532180:{NFSU2_TR(0x532180);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53218a;}}
}
B532182:L532182:{c.instructions+=2;NFSU2_TR(0x532182);
{u32 ea_=u32(u32(8366748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B532188:{NFSU2_TR(0x532188);
{goto L5321c8;}
}
B53218a:L53218a:{c.instructions+=5;NFSU2_TR(0x53218a);
{u32 ea_=u32(u32(8366752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B532190:{NFSU2_TR(0x532190);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B532196:{NFSU2_TR(0x532196);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B532198:{NFSU2_TR(0x532198);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53219b:{NFSU2_TR(0x53219b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5321aa;}}
}
B53219d:L53219d:{c.instructions+=2;NFSU2_TR(0x53219d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5321a0:{NFSU2_TR(0x5321a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5321aa;}}
}
B5321a2:L5321a2:{c.instructions+=2;NFSU2_TR(0x5321a2);
{u32 ea_=u32(u32(8366752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5321a8:{NFSU2_TR(0x5321a8);
{goto L5321c8;}
}
B5321aa:L5321aa:{c.instructions+=5;NFSU2_TR(0x5321aa);
{u32 ea_=u32(u32(8366756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5321b0:{NFSU2_TR(0x5321b0);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5321b6:{NFSU2_TR(0x5321b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5321b8:{NFSU2_TR(0x5321b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5321bb:{NFSU2_TR(0x5321bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5321d9;}}
}
B5321bd:L5321bd:{c.instructions+=2;NFSU2_TR(0x5321bd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5321c0:{NFSU2_TR(0x5321c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5321d9;}}
}
B5321c2:L5321c2:{c.instructions+=1;NFSU2_TR(0x5321c2);
{u32 ea_=u32(u32(8366756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5321c8:L5321c8:{c.instructions+=5;NFSU2_TR(0x5321c8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5321cc:{NFSU2_TR(0x5321cc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5321d2:{NFSU2_TR(0x5321d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5321d4:{NFSU2_TR(0x5321d4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5321d7:{NFSU2_TR(0x5321d7);
if(r1(R+514)){{goto L53221c;}}
}
B5321d9:L5321d9:{c.instructions+=3;NFSU2_TR(0x5321d9);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5321de:{NFSU2_TR(0x5321de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5321e0:{NFSU2_TR(0x5321e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5321ef;}}
}
B5321e2:L5321e2:{c.instructions+=3;NFSU2_TR(0x5321e2);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5321e7:{NFSU2_TR(0x5321e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5321e9:{NFSU2_TR(0x5321e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5321ef;}}
}
B5321eb:L5321eb:{c.instructions+=2;NFSU2_TR(0x5321eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5321ed:{NFSU2_TR(0x5321ed);
{goto L5321f4;}
}
B5321ef:L5321ef:{c.instructions+=1;NFSU2_TR(0x5321ef);
w4(R+0,u32(0x1ull));
}
B5321f4:L5321f4:{c.instructions+=9;NFSU2_TR(0x5321f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5321f8:{NFSU2_TR(0x5321f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5321fb:{NFSU2_TR(0x5321fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5321fd:{NFSU2_TR(0x5321fd);
__builtin_memmove((R+0),(R+518),1);
}
B532200:{NFSU2_TR(0x532200);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532203:{NFSU2_TR(0x532203);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532204:{NFSU2_TR(0x532204);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532206:{NFSU2_TR(0x532206);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532207:{NFSU2_TR(0x532207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53220cull));
TAIL_STATIC(0x5b7570u,5b7);
}
B53220c:L53220c:{c.instructions+=2;NFSU2_TR(0x53220c);
__builtin_memmove((R+4),(R+24),4);
}
B53220e:{NFSU2_TR(0x53220e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532213ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B532213:L532213:{c.instructions+=3;NFSU2_TR(0x532213);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B532217:{NFSU2_TR(0x532217);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53221a:{NFSU2_TR(0x53221a);
{goto L53224b;}
}
B53221c:L53221c:{c.instructions+=3;NFSU2_TR(0x53221c);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B532221:{NFSU2_TR(0x532221);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532223:{NFSU2_TR(0x532223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532232;}}
}
B532225:L532225:{c.instructions+=3;NFSU2_TR(0x532225);
__builtin_memmove((R+0),gp(0x890108),4);
}
B53222a:{NFSU2_TR(0x53222a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53222c:{NFSU2_TR(0x53222c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532232;}}
}
B53222e:L53222e:{c.instructions+=2;NFSU2_TR(0x53222e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B532230:{NFSU2_TR(0x532230);
{goto L532237;}
}
B532232:L532232:{c.instructions+=1;NFSU2_TR(0x532232);
w4(R+0,u32(0x1ull));
}
B532237:L532237:{c.instructions+=8;NFSU2_TR(0x532237);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53223b:{NFSU2_TR(0x53223b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53223d:{NFSU2_TR(0x53223d);
__builtin_memmove((R+4),(R+518),1);
}
B532240:{NFSU2_TR(0x532240);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532241:{NFSU2_TR(0x532241);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532243:{NFSU2_TR(0x532243);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532244:{NFSU2_TR(0x532244);
__builtin_memmove((R+4),(R+12),4);
}
B532246:{NFSU2_TR(0x532246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53224bull));
TAIL_STATIC(0x610340u,610);
}
B53224b:L53224b:{c.instructions+=3;NFSU2_TR(0x53224b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53224f:{NFSU2_TR(0x53224f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532251:{NFSU2_TR(0x532251);
if(r1(R+518)){{goto L5322a9;}}
}
B532253:L532253:{c.instructions+=2;NFSU2_TR(0x532253);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B532257:{NFSU2_TR(0x532257);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5322a9;}}
}
B532259:L532259:{c.instructions+=2;NFSU2_TR(0x532259);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53225b:{NFSU2_TR(0x53225b);
if(r1(R+518)){{goto L5322a9;}}
}
B53225d:L53225d:{c.instructions+=3;NFSU2_TR(0x53225d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53225e:{NFSU2_TR(0x53225e);
w4(R+4,u32(0x89e7a0ull));
}
B532263:{NFSU2_TR(0x532263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532268ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B532268:L532268:{c.instructions+=5;NFSU2_TR(0x532268);
__builtin_memmove((R+28),(R+0),4);
}
B53226a:{NFSU2_TR(0x53226a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53226d:{NFSU2_TR(0x53226d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53226e:{NFSU2_TR(0x53226e);
__builtin_memmove((R+4),(R+24),4);
}
B532270:{NFSU2_TR(0x532270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532275ull));
TAIL_STATIC(0x413440u,413);
}
B532275:L532275:{c.instructions+=4;NFSU2_TR(0x532275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B532277:{NFSU2_TR(0x532277);
__builtin_memmove((R+4),(R+20),4);
}
B532279:{NFSU2_TR(0x532279);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53227f:{NFSU2_TR(0x53227f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532284ull));
TAIL_STATIC(0x610300u,610);
}
B532284:L532284:{c.instructions+=7;NFSU2_TR(0x532284);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B532288:{NFSU2_TR(0x532288);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53228c:{NFSU2_TR(0x53228c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B53228e:{NFSU2_TR(0x53228e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B532290:{NFSU2_TR(0x532290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532291:{NFSU2_TR(0x532291);
__builtin_memmove((R+4),(R+24),4);
}
B532293:{NFSU2_TR(0x532293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532298ull));
TAIL_STATIC(0x61c280u,61c);
}
B532298:L532298:{c.instructions+=2;NFSU2_TR(0x532298);
__builtin_memmove((R+4),(R+24),4);
}
B53229a:{NFSU2_TR(0x53229a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53229full));
TAIL_STATIC(0x632ec0u,632);
}
B53229f:L53229f:{c.instructions+=3;NFSU2_TR(0x53229f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5322a3:{NFSU2_TR(0x5322a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5322a7:{NFSU2_TR(0x5322a7);
{goto L5322b4;}
}
B5322a9:L5322a9:{c.instructions+=4;NFSU2_TR(0x5322a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5322ab:{NFSU2_TR(0x5322ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5322ad:{NFSU2_TR(0x5322ad);
__builtin_memmove((R+4),(R+12),4);
}
B5322af:{NFSU2_TR(0x5322af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5322b4ull));
TAIL_STATIC(0x6399d0u,639);
}
B5322b4:L5322b4:{c.instructions+=6;NFSU2_TR(0x5322b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5322b8:{NFSU2_TR(0x5322b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5322b9:{NFSU2_TR(0x5322b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5322ba:{NFSU2_TR(0x5322ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5322be:{NFSU2_TR(0x5322be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5322c2:{NFSU2_TR(0x5322c2);
__builtin_memmove((R+20),(R+12),4);
}
B5322c4:L5322c4:{c.instructions+=5;NFSU2_TR(0x5322c4);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B5322c9:{NFSU2_TR(0x5322c9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5322ca:{NFSU2_TR(0x5322ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5322cc:{NFSU2_TR(0x5322cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5322d0:{NFSU2_TR(0x5322d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5320e4u);}goto L5320e4;}}
}
B5322d6:L5322d6:{c.instructions+=2;NFSU2_TR(0x5322d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5322d7:{NFSU2_TR(0x5322d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5322d8:L5322d8:{c.instructions+=4;NFSU2_TR(0x5322d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5322d9:{NFSU2_TR(0x5322d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5322da:{NFSU2_TR(0x5322da);
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
B5322dd:{NFSU2_TR(0x5322dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5322e0:L5322e0:{c.instructions+=11;NFSU2_TR(0x5322e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5322e1:{NFSU2_TR(0x5322e1);
__builtin_memmove((R+20),(R+16),4);
}
B5322e3:{NFSU2_TR(0x5322e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5322e6:{NFSU2_TR(0x5322e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5322e8:{NFSU2_TR(0x5322e8);
u8 U[4];
w4(U+0,u32(0x777596ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5322ed:{NFSU2_TR(0x5322ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5322f3:{NFSU2_TR(0x5322f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5322f4:{NFSU2_TR(0x5322f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5322fb:{NFSU2_TR(0x5322fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5322fc:{NFSU2_TR(0x5322fc);
w4(R+0,u32(0x1264ull));
}
B532301:{NFSU2_TR(0x532301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532306ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B532306:L532306:{c.instructions+=15;NFSU2_TR(0x532306);
__builtin_memmove((R+0),gp(0x83ac30),4);
}
B53230b:{NFSU2_TR(0x53230b);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B532310:{NFSU2_TR(0x532310);
__builtin_memmove((R+0),gp(0x85ef48),4);
}
B532315:{NFSU2_TR(0x532315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B532317:{NFSU2_TR(0x532317);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532318:{NFSU2_TR(0x532318);
__builtin_memmove(gp(0x89e7a0),(R+4),4);
}
B53231e:{NFSU2_TR(0x53231e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532321:{NFSU2_TR(0x532321);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532322:{NFSU2_TR(0x532322);
__builtin_memmove(gp(0x89e7a4),(R+8),4);
}
B532328:{NFSU2_TR(0x532328);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53232b:{NFSU2_TR(0x53232b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53232c:{NFSU2_TR(0x53232c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53232d:{NFSU2_TR(0x53232d);
__builtin_memmove(gp(0x89e7bc),(R+0),4);
}
B532332:{NFSU2_TR(0x532332);
s4(0x89e7b0,u32(0x1ull));
}
B53233c:{NFSU2_TR(0x53233c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532341ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B532341:L532341:{c.instructions+=11;NFSU2_TR(0x532341);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x85ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B532348:{NFSU2_TR(0x532348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53234b:{NFSU2_TR(0x53234b);
w4(R+0,u32(m1(0x83aa1b)));
}
B532352:{NFSU2_TR(0x532352);
__builtin_memmove(gp(0x89e7b4),(R+4),4);
}
B532358:{NFSU2_TR(0x532358);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B53235c:{NFSU2_TR(0x53235c);
__builtin_memmove(gp(0x89e7a8),(R+8),4);
}
B532362:{NFSU2_TR(0x532362);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B532367:{NFSU2_TR(0x532367);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53236a:{NFSU2_TR(0x53236a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53236d:{NFSU2_TR(0x53236d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53236f:{NFSU2_TR(0x53236f);
if(r1(R+518)){{goto L53237f;}}
}
B532371:L532371:{c.instructions+=4;NFSU2_TR(0x532371);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532374:{NFSU2_TR(0x532374);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532376:{NFSU2_TR(0x532376);
s1(0x89e7e0,u8(0x1ull));
}
B53237d:{NFSU2_TR(0x53237d);
if(r1(R+518)){{goto L532386;}}
}
B53237f:L53237f:{c.instructions+=1;NFSU2_TR(0x53237f);
s1(0x89e7e0,u8(0x0ull));
}
B532386:L532386:{c.instructions+=2;NFSU2_TR(0x532386);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B53238a:{NFSU2_TR(0x53238a);
if(r1(R+518)){{goto L532399;}}
}
B53238c:L53238c:{c.instructions+=3;NFSU2_TR(0x53238c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B532390:{NFSU2_TR(0x532390);
s1(0x89e7e3,u8(0x1ull));
}
B532397:{NFSU2_TR(0x532397);
if(r1(R+518)){{goto L5323a0;}}
}
B532399:L532399:{c.instructions+=1;NFSU2_TR(0x532399);
s1(0x89e7e3,u8(0x0ull));
}
B5323a0:L5323a0:{c.instructions+=2;NFSU2_TR(0x5323a0);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5323a4:{NFSU2_TR(0x5323a4);
if(r1(R+518)){{goto L5323b3;}}
}
B5323a6:L5323a6:{c.instructions+=3;NFSU2_TR(0x5323a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5323aa:{NFSU2_TR(0x5323aa);
s1(0x89e7d8,u8(0x1ull));
}
B5323b1:{NFSU2_TR(0x5323b1);
if(r1(R+518)){{goto L5323ba;}}
}
B5323b3:L5323b3:{c.instructions+=1;NFSU2_TR(0x5323b3);
s1(0x89e7d8,u8(0x0ull));
}
B5323ba:L5323ba:{c.instructions+=2;NFSU2_TR(0x5323ba);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5323be:{NFSU2_TR(0x5323be);
if(r1(R+518)){{goto L5323cd;}}
}
B5323c0:L5323c0:{c.instructions+=3;NFSU2_TR(0x5323c0);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5323c4:{NFSU2_TR(0x5323c4);
s1(0x89e7d9,u8(0x1ull));
}
B5323cb:{NFSU2_TR(0x5323cb);
if(r1(R+518)){{goto L5323d4;}}
}
B5323cd:L5323cd:{c.instructions+=1;NFSU2_TR(0x5323cd);
s1(0x89e7d9,u8(0x0ull));
}
B5323d4:L5323d4:{c.instructions+=9;NFSU2_TR(0x5323d4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5323d8:{NFSU2_TR(0x5323d8);
__builtin_memmove((R+4),(R+518),1);
}
B5323db:{NFSU2_TR(0x5323db);
__builtin_memmove(gp(0x89e7e1),(R+4),1);
}
B5323e1:{NFSU2_TR(0x5323e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5323e5:{NFSU2_TR(0x5323e5);
__builtin_memmove(gp(0x89e804),(R+8),4);
}
B5323eb:{NFSU2_TR(0x5323eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5323ef:{NFSU2_TR(0x5323ef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5323f1:{NFSU2_TR(0x5323f1);
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
B5323f4:{NFSU2_TR(0x5323f4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L532414;}}
}
B5323f6:L5323f6:{c.instructions+=1;NFSU2_TR(0x5323f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5325a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5323fd:L5323fd:{c.instructions+=2;NFSU2_TR(0x5323fd);
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
B5323ff:{NFSU2_TR(0x5323ff);
{goto L532414;}
}
B532401:L532401:{c.instructions+=2;NFSU2_TR(0x532401);
w4(R+28,u32(0x3ull));
}
B532406:{NFSU2_TR(0x532406);
{goto L532414;}
}
B532408:L532408:{c.instructions+=2;NFSU2_TR(0x532408);
w4(R+28,u32(0x1ull));
}
B53240d:{NFSU2_TR(0x53240d);
{goto L532414;}
}
B53240f:L53240f:{c.instructions+=1;NFSU2_TR(0x53240f);
w4(R+28,u32(0x2ull));
}
B532414:L532414:{c.instructions+=6;NFSU2_TR(0x532414);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B532419:{NFSU2_TR(0x532419);
__builtin_memmove((R+4),gp(0x83aa6c),4);
}
B53241f:{NFSU2_TR(0x53241f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532420:{NFSU2_TR(0x532420);
__builtin_memmove((R+12),(R+0),4);
}
B532422:{NFSU2_TR(0x532422);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532426:{NFSU2_TR(0x532426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53242bull));
TAIL_STATIC(0x571ac0u,571);
}
B53242b:L53242b:{c.instructions+=6;NFSU2_TR(0x53242b);
w4(R+0,u32(r1(R+0)));
}
B53242e:{NFSU2_TR(0x53242e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53242f:{NFSU2_TR(0x53242f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B532433:{NFSU2_TR(0x532433);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532435:{NFSU2_TR(0x532435);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532436:{NFSU2_TR(0x532436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53243bull));
TAIL_STATIC(0x571fd0u,571);
}
B53243b:L53243b:{c.instructions+=5;NFSU2_TR(0x53243b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53243f:{NFSU2_TR(0x53243f);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B532443:{NFSU2_TR(0x532443);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532444:{NFSU2_TR(0x532444);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532445:{NFSU2_TR(0x532445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53244aull));
TAIL_STATIC(0x571fb0u,571);
}
B53244a:L53244a:{c.instructions+=4;NFSU2_TR(0x53244a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53244d:{NFSU2_TR(0x53244d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B532450:{NFSU2_TR(0x532450);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532452:{NFSU2_TR(0x532452);
if(r1(R+518)){{goto L53254c;}}
}
B532458:L532458:{c.instructions+=3;NFSU2_TR(0x532458);
__builtin_memmove((R+0),gp(0x83aa00),1);
}
B53245d:{NFSU2_TR(0x53245d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53245f:{NFSU2_TR(0x53245f);
if(r1(R+518)){{goto L532468;}}
}
B532461:L532461:{c.instructions+=2;NFSU2_TR(0x532461);
w4(R+12,u32(0x83a9e0ull));
}
B532466:{NFSU2_TR(0x532466);
{goto L532482;}
}
B532468:L532468:{c.instructions+=2;NFSU2_TR(0x532468);
w4(R+8,u32(0xcf4f80c2ull));
}
B53246d:{NFSU2_TR(0x53246d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532472ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B532472:L532472:{c.instructions+=2;NFSU2_TR(0x532472);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532474:{NFSU2_TR(0x532474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532480;}}
}
B532476:L532476:{c.instructions+=2;NFSU2_TR(0x532476);
w4(R+8,u32(0xc01a6f63ull));
}
B53247b:{NFSU2_TR(0x53247b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532480ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B532480:L532480:{c.instructions+=1;NFSU2_TR(0x532480);
__builtin_memmove((R+12),(R+0),4);
}
B532482:L532482:{c.instructions+=6;NFSU2_TR(0x532482);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B532485:{NFSU2_TR(0x532485);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B532489:{NFSU2_TR(0x532489);
__builtin_memmove(gp(0x89e808),(R+0),4);
}
B53248e:{NFSU2_TR(0x53248e);
__builtin_memmove(gp(0x89e80c),(R+0),4);
}
B532493:{NFSU2_TR(0x532493);
s4(0x89e814,u32(0x0ull));
}
B53249d:{NFSU2_TR(0x53249d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5324a2ull));
TAIL_STATIC(0x40c910u,40c);
}
B5324a2:L5324a2:{c.instructions+=6;NFSU2_TR(0x5324a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324a3:{NFSU2_TR(0x5324a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5324a7:{NFSU2_TR(0x5324a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324a8:{NFSU2_TR(0x5324a8);
w4(R+4,u32(0x85ad40ull));
}
B5324ad:{NFSU2_TR(0x5324ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1284ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5324b8:{NFSU2_TR(0x5324b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5324bdull));
TAIL_STATIC(0x528600u,528);
}
B5324bd:L5324bd:{c.instructions+=9;NFSU2_TR(0x5324bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324bf:{NFSU2_TR(0x5324bf);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324c1:{NFSU2_TR(0x5324c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324c2:{NFSU2_TR(0x5324c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5324c6:{NFSU2_TR(0x5324c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324c7:{NFSU2_TR(0x5324c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324c9:{NFSU2_TR(0x5324c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324cb:{NFSU2_TR(0x5324cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5324d2:{NFSU2_TR(0x5324d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5324d7ull));
TAIL_STATIC(0x6373e0u,637);
}
B5324d7:L5324d7:{c.instructions+=5;NFSU2_TR(0x5324d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x930ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5324de:{NFSU2_TR(0x5324de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324df:{NFSU2_TR(0x5324df);
w4(R+4,u32(0x89e7a0ull));
}
B5324e4:{NFSU2_TR(0x5324e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1280ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5324ec:{NFSU2_TR(0x5324ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5324f1ull));
TAIL_STATIC(0x601600u,601);
}
B5324f1:L5324f1:{c.instructions+=2;NFSU2_TR(0x5324f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5324f2:{NFSU2_TR(0x5324f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5324f7ull));
TAIL_STATIC(0x5260b0u,526);
}
B5324f7:L5324f7:{c.instructions+=2;NFSU2_TR(0x5324f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5324fa:{NFSU2_TR(0x5324fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5324ffull));
TAIL_STATIC(0x4fe9f0u,4fe);
}
B5324ff:L5324ff:{c.instructions+=3;NFSU2_TR(0x5324ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B532503:{NFSU2_TR(0x532503);
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
B532506:{NFSU2_TR(0x532506);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L532521;}}
}
B532508:L532508:{c.instructions+=1;NFSU2_TR(0x532508);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5325bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53250f:L53250f:{c.instructions+=2;NFSU2_TR(0x53250f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532511:{NFSU2_TR(0x532511);
{goto L532519;}
}
B532513:L532513:{c.instructions+=2;NFSU2_TR(0x532513);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532515:{NFSU2_TR(0x532515);
{goto L532519;}
}
B532517:L532517:{c.instructions+=1;NFSU2_TR(0x532517);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532519:L532519:{c.instructions+=1;NFSU2_TR(0x532519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53251eull));
TAIL_STATIC(0x5264a0u,526);
}
B53251e:L53251e:{c.instructions+=1;NFSU2_TR(0x53251e);
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
B532521:L532521:{c.instructions+=3;NFSU2_TR(0x532521);
u8 U[4];
w4(U+0,u32(u32(u32(0xcc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B532528:{NFSU2_TR(0x532528);
u8 U[5];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B532530:{NFSU2_TR(0x532530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532535ull));
TAIL_STATIC(0x4022c0u,402);
}
B532535:L532535:{c.instructions+=3;NFSU2_TR(0x532535);
u8 U[4];
w4(U+0,u32(u32(u32(0x3c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53253c:{NFSU2_TR(0x53253c);
u8 U[8];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B532547:{NFSU2_TR(0x532547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53254cull));
TAIL_STATIC(0x4022c0u,402);
}
B53254c:L53254c:{c.instructions+=3;NFSU2_TR(0x53254c);
s1(0x85ba67,u8(0x0ull));
}
B532553:{NFSU2_TR(0x532553);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B532557:{NFSU2_TR(0x532557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532565;}}
}
B532559:L532559:{c.instructions+=2;NFSU2_TR(0x532559);
s4(0x83aa74,u32(0x4ull));
}
B532563:{NFSU2_TR(0x532563);
{goto L532578;}
}
B532565:L532565:{c.instructions+=2;NFSU2_TR(0x532565);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aa74),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53256c:{NFSU2_TR(0x53256c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532578;}}
}
B53256e:L53256e:{c.instructions+=1;NFSU2_TR(0x53256e);
s4(0x83aa74,u32(0x3ull));
}
B532578:L532578:{c.instructions+=3;NFSU2_TR(0x532578);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53257a:{NFSU2_TR(0x53257a);
w4(R+4,u32(0x89e7a0ull));
}
B53257f:{NFSU2_TR(0x53257f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532584ull));
TAIL_STATIC(0x5ed960u,5ed);
}
B532584:L532584:{c.instructions+=2;NFSU2_TR(0x532584);
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
B532586:{NFSU2_TR(0x532586);
if(r1(R+518)){{goto L53258f;}}
}
B532588:L532588:{c.instructions+=1;NFSU2_TR(0x532588);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x91cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53258f:L53258f:{c.instructions+=8;NFSU2_TR(0x53258f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1274ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532596:{NFSU2_TR(0x532596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532597:{NFSU2_TR(0x532597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532598:{NFSU2_TR(0x532598);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53259f:{NFSU2_TR(0x53259f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5325a0:{NFSU2_TR(0x5325a0);
__builtin_memmove((R+16),(R+20),4);
}
B5325a2:{NFSU2_TR(0x5325a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5325a3:{NFSU2_TR(0x5325a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5325e0:L5325e0:{c.instructions+=7;NFSU2_TR(0x5325e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5325e1:{NFSU2_TR(0x5325e1);
__builtin_memmove((R+20),(R+16),4);
}
B5325e3:{NFSU2_TR(0x5325e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5325e6:{NFSU2_TR(0x5325e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5325e8:{NFSU2_TR(0x5325e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5325e9:{NFSU2_TR(0x5325e9);
s4(0x861e7c,u32(0x9ull));
}
B5325f3:{NFSU2_TR(0x5325f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5325f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5322e0u);}goto L5322e0;}
}
B5325f8:L5325f8:{c.instructions+=5;NFSU2_TR(0x5325f8);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B5325fe:{NFSU2_TR(0x5325fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B532601:{NFSU2_TR(0x532601);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B532603:{NFSU2_TR(0x532603);
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
B532605:{NFSU2_TR(0x532605);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L532629;}}
}
B532607:L532607:{c.instructions+=1;NFSU2_TR(0x532607);
{goto L532610;}
}
B532610:L532610:{c.instructions+=6;NFSU2_TR(0x532610);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B532617:{NFSU2_TR(0x532617);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e7e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B53261e:{NFSU2_TR(0x53261e);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B532624:{NFSU2_TR(0x532624);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B532625:{NFSU2_TR(0x532625);
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
B532627:{NFSU2_TR(0x532627);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532610u);}goto L532610;}}
}
B532629:L532629:{c.instructions+=3;NFSU2_TR(0x532629);
s1(0x85ba67,u8(0x1ull));
}
B532630:{NFSU2_TR(0x532630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B532631:{NFSU2_TR(0x532631);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532640:L532640:{c.instructions+=3;NFSU2_TR(0x532640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532641:{NFSU2_TR(0x532641);
__builtin_memmove((R+24),(R+4),4);
}
B532643:{NFSU2_TR(0x532643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532648ull));
TAIL_STATIC(0x52af20u,52a);
}
B532648:L532648:{c.instructions+=6;NFSU2_TR(0x532648);
u8 U[4];
w4(U+0,u32(0x79ba0cull));
s4(u32(r4(R+24)),r4(U+0));
}
B53264e:{NFSU2_TR(0x53264e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532655:{NFSU2_TR(0x532655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53265c:{NFSU2_TR(0x53265c);
__builtin_memmove((R+0),(R+24),4);
}
B53265e:{NFSU2_TR(0x53265e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53265f:{NFSU2_TR(0x53265f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532660:L532660:{c.instructions+=2;NFSU2_TR(0x532660);
u8 U[4];
w4(U+0,u32(0x79ba0cull));
s4(u32(r4(R+4)),r4(U+0));
}
B532666:{NFSU2_TR(0x532666);
TAIL_STATIC(0x52af90u,52a);
}
B532670:L532670:{c.instructions+=8;NFSU2_TR(0x532670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532674:{NFSU2_TR(0x532674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x800ull))));
}
B53267a:{NFSU2_TR(0x53267a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53267b:{NFSU2_TR(0x53267b);
__builtin_memmove((R+24),(R+4),4);
}
B53267d:{NFSU2_TR(0x53267d);
__builtin_memmove((R+4),gp(0x8383dc),4);
}
B532683:{NFSU2_TR(0x532683);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532685:{NFSU2_TR(0x532685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532686:{NFSU2_TR(0x532686);
if(r1(R+518)){{goto L532699;}}
}
B532688:L532688:{c.instructions+=4;NFSU2_TR(0x532688);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53268d:{NFSU2_TR(0x53268d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B532691:{NFSU2_TR(0x532691);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532692:{NFSU2_TR(0x532692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532697ull));
TAIL_STATIC(0x50d3c0u,50d);
}
B532697:L532697:{c.instructions+=1;NFSU2_TR(0x532697);
{goto L5326a6;}
}
B532699:L532699:{c.instructions+=3;NFSU2_TR(0x532699);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53269d:{NFSU2_TR(0x53269d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53269e:{NFSU2_TR(0x53269e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5326a3ull));
TAIL_STATIC(0x43e000u,43e);
}
B5326a3:L5326a3:{c.instructions+=1;NFSU2_TR(0x5326a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5326a6:L5326a6:{c.instructions+=3;NFSU2_TR(0x5326a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5326a8:{NFSU2_TR(0x5326a8);
u8 U[10];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5326ad:{NFSU2_TR(0x5326ad);
if(r1(R+518)){{goto L5326b9;}}
}
B5326af:L5326af:{c.instructions+=1;NFSU2_TR(0x5326af);
}
B5326b0:L5326b0:{c.instructions+=3;NFSU2_TR(0x5326b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5326b1:{NFSU2_TR(0x5326b1);
u8 U[18];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B5326b7:{NFSU2_TR(0x5326b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5326b0u);}goto L5326b0;}}
}
B5326b9:L5326b9:{c.instructions+=4;NFSU2_TR(0x5326b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5326bc:{NFSU2_TR(0x5326bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5326bd:{NFSU2_TR(0x5326bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5326bf:{NFSU2_TR(0x5326bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5326c9;}}
}
B5326c1:L5326c1:{c.instructions+=3;NFSU2_TR(0x5326c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5326c2:{NFSU2_TR(0x5326c2);
__builtin_memmove((R+4),(R+24),4);
}
B5326c4:{NFSU2_TR(0x5326c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5326c9ull));
TAIL_STATIC(0x51de90u,51d);
}
B5326c9:L5326c9:{c.instructions+=5;NFSU2_TR(0x5326c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5326cb:{NFSU2_TR(0x5326cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5326cf:{NFSU2_TR(0x5326cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5326d0:{NFSU2_TR(0x5326d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5326d1:{NFSU2_TR(0x5326d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5326d6ull));
TAIL_STATIC(0x511630u,511);
}
B5326d6:L5326d6:{c.instructions+=5;NFSU2_TR(0x5326d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5326d9:{NFSU2_TR(0x5326d9);
__builtin_memmove((R+0),(R+24),4);
}
B5326db:{NFSU2_TR(0x5326db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5326dc:{NFSU2_TR(0x5326dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x800ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x800ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5326e2:{NFSU2_TR(0x5326e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5326f0:L5326f0:{c.instructions+=13;NFSU2_TR(0x5326f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5326f2:{NFSU2_TR(0x5326f2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5326f7:{NFSU2_TR(0x5326f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5326fd:{NFSU2_TR(0x5326fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5326fe:{NFSU2_TR(0x5326fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532705:{NFSU2_TR(0x532705);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532706:{NFSU2_TR(0x532706);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532707:{NFSU2_TR(0x532707);
__builtin_memmove((R+24),(R+4),4);
}
B532709:{NFSU2_TR(0x532709);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53270d:{NFSU2_TR(0x53270d);
u8 U[4];
w4(U+0,u32(0x79ba14ull));
s4(u32(r4(R+24)),r4(U+0));
}
B532713:{NFSU2_TR(0x532713);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532716:{NFSU2_TR(0x532716);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53271e:{NFSU2_TR(0x53271e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532723ull));
TAIL_STATIC(0x52ea90u,52e);
}
B532723:L532723:{c.instructions+=6;NFSU2_TR(0x532723);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532727:{NFSU2_TR(0x532727);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53272d:{NFSU2_TR(0x53272d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53272e:{NFSU2_TR(0x53272e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532735:{NFSU2_TR(0x532735);
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
B532738:{NFSU2_TR(0x532738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532740:L532740:{c.instructions+=13;NFSU2_TR(0x532740);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532742:{NFSU2_TR(0x532742);
u8 U[4];
w4(U+0,u32(0x7775aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532747:{NFSU2_TR(0x532747);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53274d:{NFSU2_TR(0x53274d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53274e:{NFSU2_TR(0x53274e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532755:{NFSU2_TR(0x532755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532756:{NFSU2_TR(0x532756);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532757:{NFSU2_TR(0x532757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532758:{NFSU2_TR(0x532758);
__builtin_memmove((R+24),(R+4),4);
}
B53275a:{NFSU2_TR(0x53275a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53275e:{NFSU2_TR(0x53275e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B532761:{NFSU2_TR(0x532761);
w4(R+4,u32(0x40ull));
}
B532766:{NFSU2_TR(0x532766);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B532768:L532768:{c.instructions+=7;NFSU2_TR(0x532768);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53276b:{NFSU2_TR(0x53276b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53276e:{NFSU2_TR(0x53276e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B532770:{NFSU2_TR(0x532770);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532773:{NFSU2_TR(0x532773);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B532776:{NFSU2_TR(0x532776);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B532777:{NFSU2_TR(0x532777);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532768u);}goto L532768;}}
}
B532779:L532779:{c.instructions+=2;NFSU2_TR(0x532779);
__builtin_memmove((R+4),(R+24),4);
}
B53277b:{NFSU2_TR(0x53277b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532780ull));
TAIL_STATIC(0x500f30u,500);
}
B532780:L532780:{c.instructions+=2;NFSU2_TR(0x532780);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532786:{NFSU2_TR(0x532786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53278bull));
TAIL_STATIC(0x528680u,528);
}
B53278b:L53278b:{c.instructions+=18;NFSU2_TR(0x53278b);
u8 U[4];
w4(U+0,u32(0x401800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532790:{NFSU2_TR(0x532790);
u8 U[4];
w4(U+0,u32(0x40c910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532795:{NFSU2_TR(0x532795);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532797:{NFSU2_TR(0x532797);
u8 U[4];
w4(U+0,u32(0x8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53279c:{NFSU2_TR(0x53279c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4240ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5327a2:{NFSU2_TR(0x5327a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5327a3:{NFSU2_TR(0x5327a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5327a7:{NFSU2_TR(0x5327a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4210ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5327b1:{NFSU2_TR(0x5327b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4214ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5327b7:{NFSU2_TR(0x5327b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4215ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5327bd:{NFSU2_TR(0x5327bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4216ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5327c3:{NFSU2_TR(0x5327c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4218ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5327c9:{NFSU2_TR(0x5327c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4220ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5327cf:{NFSU2_TR(0x5327cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5327d5:{NFSU2_TR(0x5327d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5327db:{NFSU2_TR(0x5327db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x422cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5327e1:{NFSU2_TR(0x5327e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x422dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5327e7:{NFSU2_TR(0x5327e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5327ecull));
TAIL_STATIC(0x75c461u,75c);
}
B5327ec:L5327ec:{c.instructions+=7;NFSU2_TR(0x5327ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5327f2:{NFSU2_TR(0x5327f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5327f8:{NFSU2_TR(0x5327f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5327fe:{NFSU2_TR(0x5327fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8708ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532804:{NFSU2_TR(0x532804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x870cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53280a:{NFSU2_TR(0x53280a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8710ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532810:{NFSU2_TR(0x532810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532815ull));
TAIL_STATIC(0x512eb0u,512);
}
B532815:L532815:{c.instructions+=7;NFSU2_TR(0x532815);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532819:{NFSU2_TR(0x532819);
__builtin_memmove((R+0),(R+24),4);
}
B53281b:{NFSU2_TR(0x53281b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53281c:{NFSU2_TR(0x53281c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53281d:{NFSU2_TR(0x53281d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532824:{NFSU2_TR(0x532824);
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
B532827:{NFSU2_TR(0x532827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532830:L532830:{c.instructions+=15;NFSU2_TR(0x532830);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532831:{NFSU2_TR(0x532831);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B532833:{NFSU2_TR(0x532833);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532834:{NFSU2_TR(0x532834);
__builtin_memmove((R+24),(R+4),4);
}
B532836:{NFSU2_TR(0x532836);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532837:{NFSU2_TR(0x532837);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7138ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53283d:{NFSU2_TR(0x53283d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8764ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532847:{NFSU2_TR(0x532847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53284d:{NFSU2_TR(0x53284d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8708ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532853:{NFSU2_TR(0x532853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x870cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532859:{NFSU2_TR(0x532859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8710ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53285f:{NFSU2_TR(0x53285f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532865:{NFSU2_TR(0x532865);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8868ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53286b:{NFSU2_TR(0x53286b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B532871:{NFSU2_TR(0x532871);
w4(R+4,u32(0x180ull));
}
B532876:L532876:{c.instructions+=8;NFSU2_TR(0x532876);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532879:{NFSU2_TR(0x532879);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B53287b:{NFSU2_TR(0x53287b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53287e:{NFSU2_TR(0x53287e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532881:{NFSU2_TR(0x532881);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532884:{NFSU2_TR(0x532884);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B532887:{NFSU2_TR(0x532887);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B532888:{NFSU2_TR(0x532888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532876u);}goto L532876;}}
}
B53288a:L53288a:{c.instructions+=15;NFSU2_TR(0x53288a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d14ull))));
w4(U+4,u32(0x41f00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532894:{NFSU2_TR(0x532894);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B53289a:{NFSU2_TR(0x53289a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4210ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5328a4:{NFSU2_TR(0x5328a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4214ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5328aa:{NFSU2_TR(0x5328aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4215ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5328b0:{NFSU2_TR(0x5328b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4216ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5328b6:{NFSU2_TR(0x5328b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4218ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5328bc:{NFSU2_TR(0x5328bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4220ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5328c2:{NFSU2_TR(0x5328c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5328c8:{NFSU2_TR(0x5328c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5328ce:{NFSU2_TR(0x5328ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x422cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5328d4:{NFSU2_TR(0x5328d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x422dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5328da:{NFSU2_TR(0x5328da);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5328dc:{NFSU2_TR(0x5328dc);
__builtin_memmove((R+28),(R+8),4);
}
B5328de:{NFSU2_TR(0x5328de);
w4(R+4,u32(0x500ull));
}
B5328e3:L5328e3:{c.instructions+=1;NFSU2_TR(0x5328e3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5328e5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5328e3u);}goto L5328e3;}
}
B5328e5:L5328e5:{c.instructions+=6;NFSU2_TR(0x5328e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5328eb:{NFSU2_TR(0x5328eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5328f1:{NFSU2_TR(0x5328f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1410ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5328f7:{NFSU2_TR(0x5328f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1404ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5328fd:{NFSU2_TR(0x5328fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1408ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532903:{NFSU2_TR(0x532903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532908ull));
TAIL_STATIC(0x531800u,531);
}
B532908:L532908:{c.instructions+=1;NFSU2_TR(0x532908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53290dull));
TAIL_STATIC(0x576090u,576);
}
B53290d:L53290d:{c.instructions+=6;NFSU2_TR(0x53290d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532913:{NFSU2_TR(0x532913);
u8 U[7];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B532917:{NFSU2_TR(0x532917);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8744ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53291d:{NFSU2_TR(0x53291d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x873cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532923:{NFSU2_TR(0x532923);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x873dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532929:{NFSU2_TR(0x532929);
if(r1(R+518)){{goto L532935;}}
}
B53292b:L53292b:{c.instructions+=2;NFSU2_TR(0x53292b);
w4(R+4,u32(0x83ad90ull));
}
B532930:{NFSU2_TR(0x532930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532935ull));
TAIL_STATIC(0x516480u,516);
}
B532935:L532935:{c.instructions+=4;NFSU2_TR(0x532935);
w4(R+8,u32(0x79ba24ull));
}
B53293a:{NFSU2_TR(0x53293a);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B53293d:{NFSU2_TR(0x53293d);
w1(R+0,u8(0x43ull));
}
B53293f:{NFSU2_TR(0x53293f);
}
B532940:L532940:{c.instructions+=3;NFSU2_TR(0x532940);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B532943:{NFSU2_TR(0x532943);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B532945:{NFSU2_TR(0x532945);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53294d;}}
}
B532947:L532947:{c.instructions+=2;NFSU2_TR(0x532947);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532949:{NFSU2_TR(0x532949);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53294d;}}
}
B53294b:L53294b:{c.instructions+=1;NFSU2_TR(0x53294b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B53294d:L53294d:{c.instructions+=6;NFSU2_TR(0x53294d);
w4(R+0,u32(r1(R+0)));
}
B532950:{NFSU2_TR(0x532950);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B532952:{NFSU2_TR(0x532952);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532955:{NFSU2_TR(0x532955);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B532956:{NFSU2_TR(0x532956);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B532958:{NFSU2_TR(0x532958);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532940u);}goto L532940;}}
}
B53295a:L53295a:{c.instructions+=5;NFSU2_TR(0x53295a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53295b:{NFSU2_TR(0x53295b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532961:{NFSU2_TR(0x532961);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B532963:{NFSU2_TR(0x532963);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72d8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B532969:{NFSU2_TR(0x532969);
__builtin_memmove((R+16),(R+16),4);
}
B532970:L532970:{c.instructions+=3;NFSU2_TR(0x532970);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532971:{NFSU2_TR(0x532971);
__builtin_memmove((R+4),(R+20),4);
}
B532973:{NFSU2_TR(0x532973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532978ull));
TAIL_STATIC(0x500700u,500);
}
B532978:L532978:{c.instructions+=4;NFSU2_TR(0x532978);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B532979:{NFSU2_TR(0x532979);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x104ull))));
}
B53297f:{NFSU2_TR(0x53297f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B532982:{NFSU2_TR(0x532982);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532970u);}goto L532970;}}
}
B532984:L532984:{c.instructions+=5;NFSU2_TR(0x532984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53298a:{NFSU2_TR(0x53298a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
__builtin_memmove((R+8),(U+0),4);
}
B532990:{NFSU2_TR(0x532990);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532996:{NFSU2_TR(0x532996);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B532998:{NFSU2_TR(0x532998);
w4(R+4,u32(0x40ull));
}
B53299d:L53299d:{c.instructions+=1;NFSU2_TR(0x53299d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L53299f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53299du);}goto L53299d;}
}
B53299f:L53299f:{c.instructions+=3;NFSU2_TR(0x53299f);
__builtin_memmove((R+28),(R+8),4);
}
B5329a1:{NFSU2_TR(0x5329a1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x180ull))));
}
B5329a7:{NFSU2_TR(0x5329a7);
w4(R+4,u32(0x20ull));
}
B5329ac:L5329ac:{c.instructions+=1;NFSU2_TR(0x5329ac);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5329ae;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5329acu);}goto L5329ac;}
}
B5329ae:L5329ae:{c.instructions+=10;NFSU2_TR(0x5329ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5329b0:{NFSU2_TR(0x5329b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5329b2:{NFSU2_TR(0x5329b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5329b5:{NFSU2_TR(0x5329b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5329b8:{NFSU2_TR(0x5329b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5329bb:{NFSU2_TR(0x5329bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x872cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5329c1:{NFSU2_TR(0x5329c1);
__builtin_memmove((R+8),gp(0x842ebc),4);
}
B5329c7:{NFSU2_TR(0x5329c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5329c9:{NFSU2_TR(0x5329c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5329ca:{NFSU2_TR(0x5329ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5329ee;}}
}
B5329cc:L5329cc:{c.instructions+=1;NFSU2_TR(0x5329cc);
w4(R+4,u32(0x840ed8ull));
}
B5329d1:L5329d1:{c.instructions+=2;NFSU2_TR(0x5329d1);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5329d3:{NFSU2_TR(0x5329d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5329e2;}}
}
B5329d5:L5329d5:{c.instructions+=4;NFSU2_TR(0x5329d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5329d6:{NFSU2_TR(0x5329d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7f8ull))));
}
B5329dc:{NFSU2_TR(0x5329dc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5329de:{NFSU2_TR(0x5329de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5329d1u);}goto L5329d1;}}
}
B5329e0:L5329e0:{c.instructions+=1;NFSU2_TR(0x5329e0);
{goto L5329ee;}
}
B5329e2:L5329e2:{c.instructions+=2;NFSU2_TR(0x5329e2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5329e8:{NFSU2_TR(0x5329e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ed8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5329ee:L5329ee:{c.instructions+=9;NFSU2_TR(0x5329ee);
w4(R+8,u32(0x1010101ull));
}
B5329f3:{NFSU2_TR(0x5329f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8869ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5329f9:{NFSU2_TR(0x5329f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x886dull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5329ff:{NFSU2_TR(0x5329ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8871ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532a05:{NFSU2_TR(0x532a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8875ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532a0b:{NFSU2_TR(0x532a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8720ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532a11:{NFSU2_TR(0x532a11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8768ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532a17:{NFSU2_TR(0x532a17);
w4(R+4,u32(0x40ull));
}
B532a1c:{NFSU2_TR(0x532a1c);
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
B532a1e:L532a1e:{c.instructions+=1;NFSU2_TR(0x532a1e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L532a20;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532a1eu);}goto L532a1e;}
}
B532a20:L532a20:{c.instructions+=10;NFSU2_TR(0x532a20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x873eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532a26:{NFSU2_TR(0x532a26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x873full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532a2c:{NFSU2_TR(0x532a2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8879ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532a32:{NFSU2_TR(0x532a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532a33:{NFSU2_TR(0x532a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x713cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532a39:{NFSU2_TR(0x532a39);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7144ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532a3f:{NFSU2_TR(0x532a3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7145ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B532a45:{NFSU2_TR(0x532a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532a46:{NFSU2_TR(0x532a46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B532a47:{NFSU2_TR(0x532a47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532a50:L532a50:{c.instructions+=4;NFSU2_TR(0x532a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532a56:{NFSU2_TR(0x532a56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532a58:{NFSU2_TR(0x532a58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532a59:{NFSU2_TR(0x532a59);
if(r1(R+518)){{goto L532aaa;}}
}
B532a5b:L532a5b:{c.instructions+=3;NFSU2_TR(0x532a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B532a5f:{NFSU2_TR(0x532a5f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B532a62:{NFSU2_TR(0x532a62);
if(r1(R+518)){{goto L532b09;}}
}
B532a68:L532a68:{c.instructions+=3;NFSU2_TR(0x532a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532a6b:{NFSU2_TR(0x532a6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532a6d:{NFSU2_TR(0x532a6d);
if(r1(R+518)){{goto L532a86;}}
}
B532a6f:L532a6f:{c.instructions+=3;NFSU2_TR(0x532a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532a75:{NFSU2_TR(0x532a75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532a77:{NFSU2_TR(0x532a77);
if(r1(R+518)){{goto L532a86;}}
}
B532a79:L532a79:{c.instructions+=5;NFSU2_TR(0x532a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532a7c:{NFSU2_TR(0x532a7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B532a7f:{NFSU2_TR(0x532a7f);
__builtin_memmove((R+0),(R+518),1);
}
B532a82:{NFSU2_TR(0x532a82);
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
B532a84:{NFSU2_TR(0x532a84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532aa4;}}
}
B532a86:L532a86:{c.instructions+=3;NFSU2_TR(0x532a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532a89:{NFSU2_TR(0x532a89);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532a8b:{NFSU2_TR(0x532a8b);
if(r1(R+518)){{goto L532b09;}}
}
B532a8d:L532a8d:{c.instructions+=3;NFSU2_TR(0x532a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532a93:{NFSU2_TR(0x532a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532a95:{NFSU2_TR(0x532a95);
if(r1(R+518)){{goto L532b09;}}
}
B532a97:L532a97:{c.instructions+=5;NFSU2_TR(0x532a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532a9a:{NFSU2_TR(0x532a9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B532a9d:{NFSU2_TR(0x532a9d);
__builtin_memmove((R+0),(R+518),1);
}
B532aa0:{NFSU2_TR(0x532aa0);
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
B532aa2:{NFSU2_TR(0x532aa2);
if(r1(R+518)){{goto L532b09;}}
}
B532aa4:L532aa4:{c.instructions+=3;NFSU2_TR(0x532aa4);
w1(R+0,u8(0x1ull));
}
B532aa6:{NFSU2_TR(0x532aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532aa7:{NFSU2_TR(0x532aa7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532aaa:L532aaa:{c.instructions+=3;NFSU2_TR(0x532aaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532aae:{NFSU2_TR(0x532aae);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B532ab1:{NFSU2_TR(0x532ab1);
if(r1(R+518)){{goto L532b09;}}
}
B532ab3:L532ab3:{c.instructions+=3;NFSU2_TR(0x532ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532ab6:{NFSU2_TR(0x532ab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532ab8:{NFSU2_TR(0x532ab8);
if(r1(R+518)){{goto L532aca;}}
}
B532aba:L532aba:{c.instructions+=4;NFSU2_TR(0x532aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532abb:{NFSU2_TR(0x532abb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532abf:{NFSU2_TR(0x532abf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7148ull))));
}
B532ac5:{NFSU2_TR(0x532ac5);
TAIL_STATIC(0x5007e0u,500);
}
B532aca:L532aca:{c.instructions+=3;NFSU2_TR(0x532aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532acd:{NFSU2_TR(0x532acd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532acf:{NFSU2_TR(0x532acf);
if(r1(R+518)){{goto L532adb;}}
}
B532ad1:L532ad1:{c.instructions+=3;NFSU2_TR(0x532ad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532ad2:{NFSU2_TR(0x532ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532ad6:{NFSU2_TR(0x532ad6);
TAIL_STATIC(0x513110u,513);
}
B532adb:L532adb:{c.instructions+=3;NFSU2_TR(0x532adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532ade:{NFSU2_TR(0x532ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532ae0:{NFSU2_TR(0x532ae0);
if(r1(R+518)){{goto L532af2;}}
}
B532ae2:L532ae2:{c.instructions+=4;NFSU2_TR(0x532ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532ae3:{NFSU2_TR(0x532ae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532ae7:{NFSU2_TR(0x532ae7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4210ull))));
}
B532aed:{NFSU2_TR(0x532aed);
TAIL_STATIC(0x501150u,501);
}
B532af2:L532af2:{c.instructions+=3;NFSU2_TR(0x532af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532af5:{NFSU2_TR(0x532af5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532af7:{NFSU2_TR(0x532af7);
if(r1(R+518)){{goto L532b09;}}
}
B532af9:L532af9:{c.instructions+=4;NFSU2_TR(0x532af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532afa:{NFSU2_TR(0x532afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532afe:{NFSU2_TR(0x532afe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7148ull))));
}
B532b04:{NFSU2_TR(0x532b04);
TAIL_STATIC(0x5135a0u,513);
}
B532b09:L532b09:{c.instructions+=3;NFSU2_TR(0x532b09);
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
B532b0b:{NFSU2_TR(0x532b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532b0c:{NFSU2_TR(0x532b0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532b10:L532b10:{c.instructions+=14;NFSU2_TR(0x532b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b11:{NFSU2_TR(0x532b11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b12:{NFSU2_TR(0x532b12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B532b16:{NFSU2_TR(0x532b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B532b18:{NFSU2_TR(0x532b18);
__builtin_memmove((R+24),(R+4),4);
}
B532b1a:{NFSU2_TR(0x532b1a);
__builtin_memmove((R+4),(R+0),4);
}
B532b1c:{NFSU2_TR(0x532b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8700ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532b22:{NFSU2_TR(0x532b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x871cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532b2c:{NFSU2_TR(0x532b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8724ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532b36:{NFSU2_TR(0x532b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8728ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532b40:{NFSU2_TR(0x532b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532b43:{NFSU2_TR(0x532b43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b44:{NFSU2_TR(0x532b44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532b4a:{NFSU2_TR(0x532b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532b4full));
TAIL_STATIC(0x529a40u,529);
}
B532b4f:L532b4f:{c.instructions+=2;NFSU2_TR(0x532b4f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B532b52:{NFSU2_TR(0x532b52);
if(r1(R+518)){{goto L532c13;}}
}
B532b58:L532b58:{c.instructions+=3;NFSU2_TR(0x532b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532b5b:{NFSU2_TR(0x532b5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532b5d:{NFSU2_TR(0x532b5d);
if(r1(R+518)){{goto L532b79;}}
}
B532b5f:L532b5f:{c.instructions+=6;NFSU2_TR(0x532b5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b60:{NFSU2_TR(0x532b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x871cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532b66:{NFSU2_TR(0x532b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8700ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532b6c:{NFSU2_TR(0x532b6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b6d:{NFSU2_TR(0x532b6d);
__builtin_memmove((R+4),(R+24),4);
}
B532b6f:{NFSU2_TR(0x532b6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532b74ull));
TAIL_STATIC(0x512f70u,512);
}
B532b74:L532b74:{c.instructions+=3;NFSU2_TR(0x532b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532b75:{NFSU2_TR(0x532b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532b76:{NFSU2_TR(0x532b76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532b79:L532b79:{c.instructions+=3;NFSU2_TR(0x532b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532b7c:{NFSU2_TR(0x532b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532b7e:{NFSU2_TR(0x532b7e);
if(r1(R+518)){{goto L532bb8;}}
}
B532b80:L532b80:{c.instructions+=6;NFSU2_TR(0x532b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8700ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532b86:{NFSU2_TR(0x532b86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b87:{NFSU2_TR(0x532b87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b88:{NFSU2_TR(0x532b88);
__builtin_memmove((R+4),(R+24),4);
}
B532b8a:{NFSU2_TR(0x532b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8724ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532b90:{NFSU2_TR(0x532b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532b95ull));
TAIL_STATIC(0x512ff0u,512);
}
B532b95:L532b95:{c.instructions+=4;NFSU2_TR(0x532b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8724ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B532b9b:{NFSU2_TR(0x532b9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532b9c:{NFSU2_TR(0x532b9c);
__builtin_memmove((R+4),(R+24),4);
}
B532b9e:{NFSU2_TR(0x532b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532ba3ull));
TAIL_STATIC(0x513110u,513);
}
B532ba3:L532ba3:{c.instructions+=2;NFSU2_TR(0x532ba3);
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
B532ba5:{NFSU2_TR(0x532ba5);
if(r1(R+518)){{goto L532c13;}}
}
B532ba7:L532ba7:{c.instructions+=3;NFSU2_TR(0x532ba7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532ba8:{NFSU2_TR(0x532ba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532bae:{NFSU2_TR(0x532bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532bb3ull));
TAIL_STATIC(0x514fd0u,514);
}
B532bb3:L532bb3:{c.instructions+=3;NFSU2_TR(0x532bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532bb4:{NFSU2_TR(0x532bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532bb5:{NFSU2_TR(0x532bb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532bb8:L532bb8:{c.instructions+=3;NFSU2_TR(0x532bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532bbb:{NFSU2_TR(0x532bbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532bbd:{NFSU2_TR(0x532bbd);
if(r1(R+518)){{goto L532c06;}}
}
B532bbf:L532bbf:{c.instructions+=6;NFSU2_TR(0x532bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8700ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532bc5:{NFSU2_TR(0x532bc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532bc6:{NFSU2_TR(0x532bc6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532bc7:{NFSU2_TR(0x532bc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532bcd:{NFSU2_TR(0x532bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8728ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532bd3:{NFSU2_TR(0x532bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532bd8ull));
TAIL_STATIC(0x5011c0u,501);
}
B532bd8:L532bd8:{c.instructions+=3;NFSU2_TR(0x532bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532bde:{NFSU2_TR(0x532bde);
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
B532be0:{NFSU2_TR(0x532be0);
if(r1(R+518)){{goto L532c13;}}
}
B532be2:L532be2:{c.instructions+=7;NFSU2_TR(0x532be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8728ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532be8:{NFSU2_TR(0x532be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B532beb:{NFSU2_TR(0x532beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532bee:{NFSU2_TR(0x532bee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B532bf0:{NFSU2_TR(0x532bf0);
__builtin_memmove((R+0),(R+518),1);
}
B532bf3:{NFSU2_TR(0x532bf3);
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
B532bf5:{NFSU2_TR(0x532bf5);
if(r1(R+518)){{goto L532c13;}}
}
B532bf7:L532bf7:{c.instructions+=4;NFSU2_TR(0x532bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532bf8:{NFSU2_TR(0x532bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532c02:{NFSU2_TR(0x532c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532c03:{NFSU2_TR(0x532c03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532c06:L532c06:{c.instructions+=3;NFSU2_TR(0x532c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B532c09:{NFSU2_TR(0x532c09);
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
B532c0b:{NFSU2_TR(0x532c0b);
if(r1(R+518)){{goto L532c13;}}
}
B532c0d:L532c0d:{c.instructions+=1;NFSU2_TR(0x532c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8720ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532c13:L532c13:{c.instructions+=3;NFSU2_TR(0x532c13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532c14:{NFSU2_TR(0x532c14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532c15:{NFSU2_TR(0x532c15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532c20:L532c20:{c.instructions+=7;NFSU2_TR(0x532c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532c21:{NFSU2_TR(0x532c21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B532c25:{NFSU2_TR(0x532c25);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532c28:{NFSU2_TR(0x532c28);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532c2a:{NFSU2_TR(0x532c2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532c2b:{NFSU2_TR(0x532c2b);
__builtin_memmove((R+28),(R+4),4);
}
B532c2d:{NFSU2_TR(0x532c2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532c59;}}
}
B532c2f:L532c2f:{c.instructions+=3;NFSU2_TR(0x532c2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532c30:{NFSU2_TR(0x532c30);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532c36:{NFSU2_TR(0x532c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532c3bull));
TAIL_STATIC(0x5007e0u,500);
}
B532c3b:L532c3b:{c.instructions+=2;NFSU2_TR(0x532c3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532c3d:{NFSU2_TR(0x532c3d);
if(r1(R+518)){{goto L532c59;}}
}
B532c3f:L532c3f:{c.instructions+=4;NFSU2_TR(0x532c3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B532c42:{NFSU2_TR(0x532c42);
w1(R+0,u8(0x1ull));
}
B532c44:{NFSU2_TR(0x532c44);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
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
B532c46:{NFSU2_TR(0x532c46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532c5b;}}
}
B532c48:L532c48:{c.instructions+=2;NFSU2_TR(0x532c48);
__builtin_memmove((R+4),(R+28),4);
}
B532c4a:{NFSU2_TR(0x532c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532c4full));
TAIL_STATIC(0x527890u,527);
}
B532c4f:L532c4f:{c.instructions+=5;NFSU2_TR(0x532c4f);
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
B532c51:{NFSU2_TR(0x532c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532c52:{NFSU2_TR(0x532c52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B532c55:{NFSU2_TR(0x532c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532c56:{NFSU2_TR(0x532c56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532c59:L532c59:{c.instructions+=1;NFSU2_TR(0x532c59);
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
B532c5b:L532c5b:{c.instructions+=3;NFSU2_TR(0x532c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532c5c:{NFSU2_TR(0x532c5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532c5d:{NFSU2_TR(0x532c5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532c60:L532c60:{c.instructions+=5;NFSU2_TR(0x532c60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532c61:{NFSU2_TR(0x532c61);
__builtin_memmove((R+24),(R+4),4);
}
B532c63:{NFSU2_TR(0x532c63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532c69:{NFSU2_TR(0x532c69);
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
B532c6b:{NFSU2_TR(0x532c6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532cdb;}}
}
B532c6d:L532c6d:{c.instructions+=5;NFSU2_TR(0x532c6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532c6e:{NFSU2_TR(0x532c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B532c74:{NFSU2_TR(0x532c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532c77:{NFSU2_TR(0x532c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532c79:{NFSU2_TR(0x532c79);
if(r1(R+518)){{goto L532cb3;}}
}
B532c7b:L532c7b:{c.instructions+=3;NFSU2_TR(0x532c7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532c7c:{NFSU2_TR(0x532c7c);
w4(R+4,u32(0x85ad40ull));
}
B532c81:{NFSU2_TR(0x532c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532c86ull));
TAIL_STATIC(0x500b80u,500);
}
B532c86:L532c86:{c.instructions+=2;NFSU2_TR(0x532c86);
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
B532c88:{NFSU2_TR(0x532c88);
if(r1(R+518)){{goto L532cda;}}
}
B532c8a:L532c8a:{c.instructions+=2;NFSU2_TR(0x532c8a);
__builtin_memmove((R+4),(R+24),4);
}
B532c8c:{NFSU2_TR(0x532c8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532c91ull));
TAIL_STATIC(0x513490u,513);
}
B532c91:L532c91:{c.instructions+=2;NFSU2_TR(0x532c91);
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
B532c93:{NFSU2_TR(0x532c93);
if(r1(R+518)){{goto L532cda;}}
}
B532c95:L532c95:{c.instructions+=5;NFSU2_TR(0x532c95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B532c9c:{NFSU2_TR(0x532c9c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B532c9f:{NFSU2_TR(0x532c9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532ca0:{NFSU2_TR(0x532ca0);
w4(R+4,u32(0x85ad40ull));
}
B532ca5:{NFSU2_TR(0x532ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532caaull));
TAIL_STATIC(0x528320u,528);
}
B532caa:L532caa:{c.instructions+=4;NFSU2_TR(0x532caa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532cb0:{NFSU2_TR(0x532cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532cb1:{NFSU2_TR(0x532cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532cb2:{NFSU2_TR(0x532cb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532cb3:L532cb3:{c.instructions+=4;NFSU2_TR(0x532cb3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B532cb6:{NFSU2_TR(0x532cb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532cb7:{NFSU2_TR(0x532cb7);
w4(R+4,u32(0x85ad40ull));
}
B532cbc:{NFSU2_TR(0x532cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532cc1ull));
TAIL_STATIC(0x5130a0u,513);
}
B532cc1:L532cc1:{c.instructions+=2;NFSU2_TR(0x532cc1);
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
B532cc3:{NFSU2_TR(0x532cc3);
if(r1(R+518)){{goto L532cda;}}
}
B532cc5:L532cc5:{c.instructions+=5;NFSU2_TR(0x532cc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B532ccc:{NFSU2_TR(0x532ccc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B532ccf:{NFSU2_TR(0x532ccf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532cd0:{NFSU2_TR(0x532cd0);
w4(R+4,u32(0x85ad40ull));
}
B532cd5:{NFSU2_TR(0x532cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532cdaull));
TAIL_STATIC(0x528320u,528);
}
B532cda:L532cda:{c.instructions+=1;NFSU2_TR(0x532cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532cdb:L532cdb:{c.instructions+=3;NFSU2_TR(0x532cdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532ce1:{NFSU2_TR(0x532ce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532ce2:{NFSU2_TR(0x532ce2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532cf0:L532cf0:{c.instructions+=7;NFSU2_TR(0x532cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532cf1:{NFSU2_TR(0x532cf1);
__builtin_memmove((R+24),(R+4),4);
}
B532cf3:{NFSU2_TR(0x532cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532cf9:{NFSU2_TR(0x532cf9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B532cff:{NFSU2_TR(0x532cff);
u8 U[16];
w4(U+0,u32(u32(u32(0x73c0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B532d06:{NFSU2_TR(0x532d06);
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
B532d08:{NFSU2_TR(0x532d08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532d32;}}
}
B532d0a:L532d0a:{c.instructions+=2;NFSU2_TR(0x532d0a);
__builtin_memmove((R+4),(R+24),4);
}
B532d0c:{NFSU2_TR(0x532d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532d11ull));
TAIL_STATIC(0x5284d0u,528);
}
B532d11:L532d11:{c.instructions+=6;NFSU2_TR(0x532d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532d15:{NFSU2_TR(0x532d15);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B532d19:{NFSU2_TR(0x532d19);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
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
B532d1f:{NFSU2_TR(0x532d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532d25:{NFSU2_TR(0x532d25);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x104ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B532d2b:{NFSU2_TR(0x532d2b);
u8 U[16];
w4(U+0,u32(u32(u32(0x73c0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B532d32:L532d32:{c.instructions+=2;NFSU2_TR(0x532d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532d33:{NFSU2_TR(0x532d33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532d40:L532d40:{c.instructions+=6;NFSU2_TR(0x532d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532d44:{NFSU2_TR(0x532d44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532d45:{NFSU2_TR(0x532d45);
__builtin_memmove((R+24),(R+4),4);
}
B532d47:{NFSU2_TR(0x532d47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532d48:{NFSU2_TR(0x532d48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532d4e:{NFSU2_TR(0x532d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532d53ull));
TAIL_STATIC(0x529c40u,529);
}
B532d53:L532d53:{c.instructions+=2;NFSU2_TR(0x532d53);
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
B532d55:{NFSU2_TR(0x532d55);
if(r1(R+518)){{goto L532d6f;}}
}
B532d57:L532d57:{c.instructions+=6;NFSU2_TR(0x532d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532d5a:{NFSU2_TR(0x532d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532d60:{NFSU2_TR(0x532d60);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B532d62:{NFSU2_TR(0x532d62);
__builtin_memmove((R+4),(R+24),4);
}
B532d64:{NFSU2_TR(0x532d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532d6a:{NFSU2_TR(0x532d6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532d6full));
TAIL_STATIC(0x528980u,528);
}
B532d6f:L532d6f:{c.instructions+=2;NFSU2_TR(0x532d6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532d70:{NFSU2_TR(0x532d70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532d80:L532d80:{c.instructions+=8;NFSU2_TR(0x532d80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532d81:{NFSU2_TR(0x532d81);
__builtin_memmove((R+20),(R+16),4);
}
B532d83:{NFSU2_TR(0x532d83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B532d86:{NFSU2_TR(0x532d86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532d87:{NFSU2_TR(0x532d87);
__builtin_memmove((R+24),(R+4),4);
}
B532d89:{NFSU2_TR(0x532d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532d8f:{NFSU2_TR(0x532d8f);
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
B532d91:{NFSU2_TR(0x532d91);
if(r1(R+518)){{goto L532e03;}}
}
B532d93:L532d93:{c.instructions+=5;NFSU2_TR(0x532d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532d96:{NFSU2_TR(0x532d96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532d97:{NFSU2_TR(0x532d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B532d9a:{NFSU2_TR(0x532d9a);
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
B532d9c:{NFSU2_TR(0x532d9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532e02;}}
}
B532d9e:L532d9e:{c.instructions+=3;NFSU2_TR(0x532d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532da1:{NFSU2_TR(0x532da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532da2:{NFSU2_TR(0x532da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532da7ull));
TAIL_STATIC(0x4ffe20u,4ff);
}
B532da7:L532da7:{c.instructions+=3;NFSU2_TR(0x532da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532daa:{NFSU2_TR(0x532daa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532dab:{NFSU2_TR(0x532dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532db0ull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B532db0:L532db0:{c.instructions+=3;NFSU2_TR(0x532db0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B532db3:{NFSU2_TR(0x532db3);
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
B532db5:{NFSU2_TR(0x532db5);
if(r1(R+518)){{goto L532e02;}}
}
B532db7:L532db7:{c.instructions+=7;NFSU2_TR(0x532db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532dbd:{NFSU2_TR(0x532dbd);
u8 U[4];
w4(U+0,u32(0x79afe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532dc2:{NFSU2_TR(0x532dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532dc9:{NFSU2_TR(0x532dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532dd0:{NFSU2_TR(0x532dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532dd3:{NFSU2_TR(0x532dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532dd6:{NFSU2_TR(0x532dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532ddbull));
TAIL_STATIC(0x43db50u,43d);
}
B532ddb:L532ddb:{c.instructions+=3;NFSU2_TR(0x532ddb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B532dde:{NFSU2_TR(0x532dde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B532de0:{NFSU2_TR(0x532de0);
if(r1(R+518)){{goto L532df4;}}
}
B532de2:L532de2:{c.instructions+=4;NFSU2_TR(0x532de2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B532de5:{NFSU2_TR(0x532de5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532de6:{NFSU2_TR(0x532de6);
w4(R+4,u32(0x838590ull));
}
B532deb:{NFSU2_TR(0x532deb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532df0ull));
TAIL_STATIC(0x529410u,529);
}
B532df0:L532df0:{c.instructions+=2;NFSU2_TR(0x532df0);
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
B532df2:{NFSU2_TR(0x532df2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532e02;}}
}
B532df4:L532df4:{c.instructions+=4;NFSU2_TR(0x532df4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532df7:{NFSU2_TR(0x532df7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532df8:{NFSU2_TR(0x532df8);
w4(R+4,u32(0x838590ull));
}
B532dfd:{NFSU2_TR(0x532dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532e02ull));
TAIL_STATIC(0x529480u,529);
}
B532e02:L532e02:{c.instructions+=1;NFSU2_TR(0x532e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B532e03:L532e03:{c.instructions+=4;NFSU2_TR(0x532e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532e04:{NFSU2_TR(0x532e04);
__builtin_memmove((R+16),(R+20),4);
}
B532e06:{NFSU2_TR(0x532e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B532e07:{NFSU2_TR(0x532e07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532e10:L532e10:{c.instructions+=4;NFSU2_TR(0x532e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532e11:{NFSU2_TR(0x532e11);
u8 U[4];
w4(U+0,u32(0x79afe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532e16:{NFSU2_TR(0x532e16);
__builtin_memmove((R+24),(R+4),4);
}
B532e18:{NFSU2_TR(0x532e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532e1dull));
TAIL_STATIC(0x43db50u,43d);
}
B532e1d:L532e1d:{c.instructions+=4;NFSU2_TR(0x532e1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B532e20:{NFSU2_TR(0x532e20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532e21:{NFSU2_TR(0x532e21);
__builtin_memmove((R+4),(R+24),4);
}
B532e23:{NFSU2_TR(0x532e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532e28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532d80u);}goto L532d80;}
}
B532e28:L532e28:{c.instructions+=2;NFSU2_TR(0x532e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532e29:{NFSU2_TR(0x532e29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532e30:L532e30:{c.instructions+=4;NFSU2_TR(0x532e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532e31:{NFSU2_TR(0x532e31);
__builtin_memmove((R+24),(R+4),4);
}
B532e33:{NFSU2_TR(0x532e33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532e39:{NFSU2_TR(0x532e39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532e3eull));
TAIL_STATIC(0x529b50u,529);
}
B532e3e:L532e3e:{c.instructions+=3;NFSU2_TR(0x532e3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B532e44:{NFSU2_TR(0x532e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532e45:{NFSU2_TR(0x532e45);
TAIL_STATIC(0x511000u,511);
}
B532e50:L532e50:{c.instructions+=5;NFSU2_TR(0x532e50);
__builtin_memmove((R+0),gp(0x863470),4);
}
B532e55:{NFSU2_TR(0x532e55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B532e57:{NFSU2_TR(0x532e57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532e58:{NFSU2_TR(0x532e58);
__builtin_memmove((R+24),(R+4),4);
}
B532e5a:{NFSU2_TR(0x532e5a);
if(r1(R+518)){{goto L532e9b;}}
}
B532e5c:L532e5c:{c.instructions+=3;NFSU2_TR(0x532e5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532e5e:{NFSU2_TR(0x532e5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532e64:{NFSU2_TR(0x532e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532e69ull));
TAIL_STATIC(0x5287a0u,528);
}
B532e69:L532e69:{c.instructions+=2;NFSU2_TR(0x532e69);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B532e6b:{NFSU2_TR(0x532e6b);
if(r1(R+518)){{goto L532e9b;}}
}
B532e6d:L532e6d:{c.instructions+=3;NFSU2_TR(0x532e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532e73:{NFSU2_TR(0x532e73);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B532e77:{NFSU2_TR(0x532e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L532e96;}}
}
B532e79:L532e79:{c.instructions+=5;NFSU2_TR(0x532e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532e7f:{NFSU2_TR(0x532e7f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B532e85:{NFSU2_TR(0x532e85);
u8 U[16];
w4(U+0,u32(u32(u32(0x73c0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B532e8c:{NFSU2_TR(0x532e8c);
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
B532e8e:{NFSU2_TR(0x532e8e);
if(r1(R+518)){{goto L532e96;}}
}
B532e90:L532e90:{c.instructions+=3;NFSU2_TR(0x532e90);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B532e94:{NFSU2_TR(0x532e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532e95:{NFSU2_TR(0x532e95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532e96:L532e96:{c.instructions+=3;NFSU2_TR(0x532e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532e99:{NFSU2_TR(0x532e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532e9a:{NFSU2_TR(0x532e9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532e9b:L532e9b:{c.instructions+=3;NFSU2_TR(0x532e9b);
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
B532e9d:{NFSU2_TR(0x532e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B532e9e:{NFSU2_TR(0x532e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B532ea0:L532ea0:{c.instructions+=16;NFSU2_TR(0x532ea0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532ea1:{NFSU2_TR(0x532ea1);
__builtin_memmove((R+20),(R+16),4);
}
B532ea3:{NFSU2_TR(0x532ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd28ull))));
}
B532ea9:{NFSU2_TR(0x532ea9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532eaa:{NFSU2_TR(0x532eaa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B532eac:{NFSU2_TR(0x532eac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532ead:{NFSU2_TR(0x532ead);
__builtin_memmove((R+24),(R+4),4);
}
B532eaf:{NFSU2_TR(0x532eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532eb2:{NFSU2_TR(0x532eb2);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B532eb4:{NFSU2_TR(0x532eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532eba:{NFSU2_TR(0x532eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532ec0:{NFSU2_TR(0x532ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532ec3:{NFSU2_TR(0x532ec3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),r1(R+12)));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B532ec6:{NFSU2_TR(0x532ec6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532ec7:{NFSU2_TR(0x532ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532eca:{NFSU2_TR(0x532eca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L532fdf;}}
}
B532ed0:L532ed0:{c.instructions+=1;NFSU2_TR(0x532ed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bull))));
__builtin_memmove((R+28),(U+0),4);
}
B532ed3:L532ed3:{c.instructions+=3;NFSU2_TR(0x532ed3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff308ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532ed9:{NFSU2_TR(0x532ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532edf:{NFSU2_TR(0x532edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532ee4ull));
TAIL_STATIC(0x5117c0u,511);
}
B532ee4:L532ee4:{c.instructions+=17;NFSU2_TR(0x532ee4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532ee7:{NFSU2_TR(0x532ee7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B532eeb:{NFSU2_TR(0x532eeb);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B532eed:{NFSU2_TR(0x532eed);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B532eef:{NFSU2_TR(0x532eef);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B532ef1:{NFSU2_TR(0x532ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532ef7:{NFSU2_TR(0x532ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2d8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532efd:{NFSU2_TR(0x532efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2ecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B532f07:{NFSU2_TR(0x532f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f0a:{NFSU2_TR(0x532f0a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B532f0c:{NFSU2_TR(0x532f0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B532f0d:{NFSU2_TR(0x532f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f13:{NFSU2_TR(0x532f13);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B532f16:{NFSU2_TR(0x532f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f1c:{NFSU2_TR(0x532f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532f22:{NFSU2_TR(0x532f22);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B532f25:{NFSU2_TR(0x532f25);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L532fc6;}}
}
B532f2b:L532f2b:{c.instructions+=5;NFSU2_TR(0x532f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532f2e:{NFSU2_TR(0x532f2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B532f31:{NFSU2_TR(0x532f31);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B532f33:{NFSU2_TR(0x532f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f39:{NFSU2_TR(0x532f39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L532f50;}}
}
B532f3b:L532f3b:{c.instructions+=2;NFSU2_TR(0x532f3b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B532f3d:{NFSU2_TR(0x532f3d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L532f50;}}
}
B532f3f:L532f3f:{c.instructions+=2;NFSU2_TR(0x532f3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B532f42:{NFSU2_TR(0x532f42);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L532f50;}}
}
B532f44:L532f44:{c.instructions+=3;NFSU2_TR(0x532f44);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xd24ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B532f4a:{NFSU2_TR(0x532f4a);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B532f4e:{NFSU2_TR(0x532f4e);
{goto L532f52;}
}
B532f50:L532f50:{c.instructions+=1;NFSU2_TR(0x532f50);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B532f52:L532f52:{c.instructions+=27;NFSU2_TR(0x532f52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B532f54:{NFSU2_TR(0x532f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532f5a:{NFSU2_TR(0x532f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f5d:{NFSU2_TR(0x532f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532f63:{NFSU2_TR(0x532f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f66:{NFSU2_TR(0x532f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532f6c:{NFSU2_TR(0x532f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f6f:{NFSU2_TR(0x532f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532f75:{NFSU2_TR(0x532f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f78:{NFSU2_TR(0x532f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532f7e:{NFSU2_TR(0x532f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f81:{NFSU2_TR(0x532f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532f87:{NFSU2_TR(0x532f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f8a:{NFSU2_TR(0x532f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532f90:{NFSU2_TR(0x532f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f93:{NFSU2_TR(0x532f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532f99:{NFSU2_TR(0x532f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532f9c:{NFSU2_TR(0x532f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532fa2:{NFSU2_TR(0x532fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532fa5:{NFSU2_TR(0x532fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff300ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B532fab:{NFSU2_TR(0x532fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532fae:{NFSU2_TR(0x532fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff304ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532fb4:{NFSU2_TR(0x532fb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff308ull))));
__builtin_memmove((R+8),(U+0),4);
}
B532fba:{NFSU2_TR(0x532fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532fbd:{NFSU2_TR(0x532fbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B532fbe:{NFSU2_TR(0x532fbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B532fc1:{NFSU2_TR(0x532fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532fc6ull));
TAIL_STATIC(0x525d10u,525);
}
B532fc6:L532fc6:{c.instructions+=8;NFSU2_TR(0x532fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B532fc9:{NFSU2_TR(0x532fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B532fcc:{NFSU2_TR(0x532fcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B532fd0:{NFSU2_TR(0x532fd0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B532fd1:{NFSU2_TR(0x532fd1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B532fd4:{NFSU2_TR(0x532fd4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B532fd6:{NFSU2_TR(0x532fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532fd9:{NFSU2_TR(0x532fd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x532ed3u);}goto L532ed3;}}
}
B532fdf:L532fdf:{c.instructions+=2;NFSU2_TR(0x532fdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B532fe5:{NFSU2_TR(0x532fe5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L532fec;}}
}
B532fe7:L532fe7:{c.instructions+=2;NFSU2_TR(0x532fe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B532fea:{NFSU2_TR(0x532fea);
{goto L532fee;}
}
B532fec:L532fec:{c.instructions+=1;NFSU2_TR(0x532fec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B532fee:L532fee:{c.instructions+=5;NFSU2_TR(0x532fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B532ff4:{NFSU2_TR(0x532ff4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B532ff7:{NFSU2_TR(0x532ff7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B532ff9:{NFSU2_TR(0x532ff9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B532ffb:{NFSU2_TR(0x532ffb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x53303du,533);}
}
B532ffd:L532ffd:{c.instructions+=1;NFSU2_TR(0x532ffd);
__builtin_memmove((R+4),(R+4),4);
TAIL_STATIC(0x533000u,533);
}
XIT:NFSU2_TR_EXIT(0x532,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
